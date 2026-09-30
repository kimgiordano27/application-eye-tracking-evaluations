/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$.cctor
ENTRY_POINT: 06ad8bd8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>___cctor
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000008;
  
  iVar1 = FUN_07000610(param_1,param_2,0);
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*unaff_x27);
  }
  uVar5 = FUN_0710fcf0(uVar5,0);
  if (in_stack_00000008 != 0) {
    lVar2 = FUN_06ffe144(in_stack_00000008,*(undefined8 *)PTR_DAT_08e83f68,uVar5,0);
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
                    /* try { // try from 06ad8c44 to 06bd8c9f has its CatchHandler @ 06ad8c44
                       catch() { ... } // from try @ 06ad8c44 with catch @ 06ad8c44
                       catch() { ... } // from try @ 06ad8d7c with catch @ 06ad8c44
                       catch() { ... } // from try @ 06ad8e04 with catch @ 06ad8c44
                       catch() { ... } // from try @ 06ad8e48 with catch @ 06ad8c44
                       catch() { ... } // from try @ 06ad8e78 with catch @ 06ad8c44
                       catch() { ... } // from try @ 06ad8efc with catch @ 06ad8c44 */
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03cf1244(lVar6);
    }
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = thunk_FUN_03cf5138(lVar2,lVar6);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(lVar2,lVar6);
      }
    }
    *(long *)(unaff_x19 + 0x30) = lVar3;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03cf1244(lVar6);
    }
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = thunk_FUN_03cf5138(lVar2,lVar6);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(lVar2,lVar6);
      }
    }
    thunk_FUN_03d233cc((long *)(unaff_x19 + 0x30),lVar3);
    if (iVar1 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x10),0);
    }
    else {
      FUN_06ad857c();
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x188);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar5 = FUN_0710fcf0(uVar5,0);
      if (in_stack_00000008 == 0) goto LAB_06ad8e3c;
      lVar2 = FUN_06ffe144(in_stack_00000008,*(undefined8 *)PTR_DAT_08e873b8,uVar5,0);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03cf1244(lVar6);
      }
      if (lVar2 == 0) {
        FUN_07122a20(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar3 = thunk_FUN_03cf5138(lVar2,lVar6);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(lVar2,lVar6);
      }
      if (0 < *(int *)(lVar3 + 0x18)) {
        uVar4 = 0;
        do {
          if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          FUN_06ad865c();
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)*(int *)(lVar3 + 0x18));
      }
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar2 = FUN_070cc5c8(0);
    if (lVar2 != 0) {
      FUN_06771ae0();
      return;
    }
  }
LAB_06ad8e3c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


