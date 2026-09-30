/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$get_Current
ENTRY_POINT: 03cd01e0
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current
               (long param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  uint in_w10;
  int *piVar8;
  long unaff_x22;
  int unaff_w23;
  long *plVar9;
  long lVar10;
  int iVar11;
  long in_stack_00000008;
  
  iVar11 = 0;
  if (in_w10 != 0) {
    iVar11 = param_2 / (int)in_w10;
  }
  uVar1 = param_2 - iVar11 * in_w10;
  if (in_w10 <= uVar1) {
LAB_03cd031c:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
  uVar1 = *(int *)(param_1 + (long)(int)uVar1 * 4 + 0x20) - 1;
  if (-1 < (int)uVar1) {
    lVar10 = *(long *)(unaff_x22 + 0x18);
    if (lVar10 == 0) {
LAB_03cd035c:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar5 = *(undefined8 *)(lVar10 + 0x18);
    iVar11 = 0;
    do {
      if ((uint)uVar5 <= uVar1) goto LAB_03cd031c;
      if (*(int *)(lVar10 + (ulong)uVar1 * 0x18 + 0x20) == unaff_w23) {
        plVar9 = *(long **)(unaff_x22 + 0x30);
        if (plVar9 == (long *)0x0) goto LAB_03cd035c;
        lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x20);
        lVar6 = lVar10 + (ulong)uVar1 * 0x18;
        uVar5 = *(undefined8 *)(lVar6 + 0x28);
        uVar3 = *(undefined8 *)(lVar6 + 0x30);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02eea768(lVar4);
        }
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar4) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03cd02b0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_02eea86c(plVar9,lVar4,0);
LAB_03cd02b0:
        uVar7 = (*(code *)*puVar2)(plVar9,uVar5,uVar3);
        if ((uVar7 & 1) != 0) {
          return uVar1;
        }
        uVar5 = *(undefined8 *)(lVar10 + 0x18);
      }
      if ((int)(uint)uVar5 <= iVar11) {
        thunk_FUN_02f239f0(PTR_DAT_06d021a0);
        uVar5 = thunk_FUN_02ef1808();
        uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d39100);
        FUN_05601bec(uVar5,uVar3,0);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar5,in_stack_00000008);
      }
      if ((uint)uVar5 <= uVar1) goto LAB_03cd031c;
      uVar1 = *(uint *)(lVar10 + (ulong)uVar1 * 0x18 + 0x24);
      iVar11 = iVar11 + 1;
    } while (-1 < (int)uVar1);
  }
  return 0xffffffff;
}


