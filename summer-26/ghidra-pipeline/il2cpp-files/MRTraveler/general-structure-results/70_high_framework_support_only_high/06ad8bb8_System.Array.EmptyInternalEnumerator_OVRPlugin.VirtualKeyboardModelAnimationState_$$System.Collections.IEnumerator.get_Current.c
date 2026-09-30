/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 06ad8bb8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_get_Current
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x26;
  long in_stack_00000008;
  
  puVar1 = PTR_DAT_08e695f0;
  if (param_1 != 0) {
    iVar2 = FUN_07000610(param_1,*(undefined8 *)PTR_DAT_08e873b0,0);
    lVar4 = *(long *)puVar1;
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar4);
    }
    uVar6 = FUN_0710fcf0(uVar6,0);
    if (in_stack_00000008 != 0) {
      lVar4 = FUN_06ffe144(in_stack_00000008,*(undefined8 *)PTR_DAT_08e83f68,uVar6,0);
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244(lVar7);
      }
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = thunk_FUN_03cf5138(lVar4,lVar7);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc(lVar4,lVar7);
        }
      }
      *(long *)(unaff_x19 + 0x30) = lVar3;
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244(lVar7);
      }
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = thunk_FUN_03cf5138(lVar4,lVar7);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc(lVar4,lVar7);
        }
      }
      thunk_FUN_03d233cc((long *)(unaff_x19 + 0x30),lVar3);
      if (iVar2 == 0) {
        *(undefined8 *)(unaff_x19 + 0x10) = 0;
        thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x10),0);
      }
      else {
        FUN_06ad857c();
        uVar6 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x188);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar6 = FUN_0710fcf0(uVar6,0);
        if (in_stack_00000008 == 0) goto LAB_06ad8e3c;
        lVar4 = FUN_06ffe144(in_stack_00000008,*(undefined8 *)PTR_DAT_08e873b8,uVar6,0);
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03cf1244(lVar7);
        }
        if (lVar4 == 0) {
          FUN_07122a20(0x10,0);
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar3 = thunk_FUN_03cf5138(lVar4,lVar7);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc(lVar4,lVar7);
        }
        if (0 < *(int *)(lVar3 + 0x18)) {
          uVar5 = 0;
          do {
            if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            FUN_06ad865c();
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < (long)*(int *)(lVar3 + 0x18));
        }
      }
      *(undefined4 *)(unaff_x19 + 0x2c) = param_2;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar4 = FUN_070cc5c8(0);
      if (lVar4 != 0) {
        FUN_06771ae0();
        return;
      }
    }
  }
LAB_06ad8e3c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


