/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 03cd02c4
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_get_Current
                (code *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  ulong unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  int unaff_w23;
  ulong unaff_x24;
  long unaff_x28;
  int unaff_w29;
  long in_stack_00000008;
  
  do {
    uVar3 = (*param_1)(param_2,param_3,param_4);
    if ((uVar3 & 1) != 0) {
LAB_03cd02f8:
      return unaff_x24 & 0xffffffff;
    }
    do {
      uVar7 = (uint)*(undefined8 *)(unaff_x28 + 0x18);
      if ((int)uVar7 <= unaff_w29) {
        thunk_FUN_02f239f0(PTR_DAT_06d021a0);
        uVar4 = thunk_FUN_02ef1808();
        uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d39100);
        FUN_05601bec(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar4,in_stack_00000008);
      }
      if (uVar7 <= (uint)unaff_x24) {
LAB_03cd031c:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      uVar1 = *(uint *)(unaff_x28 + unaff_x20 * unaff_x19 + 0x24);
      unaff_x20 = (ulong)uVar1;
      unaff_w29 = unaff_w29 + 1;
      if ((int)uVar1 < 0) {
        unaff_x24 = 0xffffffff;
        goto LAB_03cd02f8;
      }
      if (uVar7 <= uVar1) goto LAB_03cd031c;
      unaff_x24 = unaff_x20;
    } while (*(int *)(unaff_x28 + unaff_x20 * (unaff_x19 & 0xffffffff) + 0x20) != unaff_w23);
    param_2 = *(long **)(unaff_x22 + 0x30);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x20);
    lVar8 = unaff_x28 + unaff_x20 * unaff_x19;
    param_3 = *(undefined8 *)(lVar8 + 0x28);
    param_4 = *(undefined8 *)(lVar8 + 0x30);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768(lVar6);
    }
    lVar8 = *param_2;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03cd02b0;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c(param_2,lVar6,0);
LAB_03cd02b0:
    param_1 = (code *)*puVar2;
  } while( true );
}


