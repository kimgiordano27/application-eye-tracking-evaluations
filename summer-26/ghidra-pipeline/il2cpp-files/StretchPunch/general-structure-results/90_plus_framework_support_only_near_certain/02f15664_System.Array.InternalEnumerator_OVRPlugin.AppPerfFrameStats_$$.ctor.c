/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$.ctor
ENTRY_POINT: 02f15664
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long in_x9;
  int *in_x10;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  ulong uVar4;
  long unaff_x24;
  long lVar5;
  long unaff_x26;
  long unaff_x29;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar1 = (undefined8 *)FUN_01dde8fc();
System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose:
  (*(code *)*puVar1)();
  if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db68();
  }
  if (0 < (int)unaff_x21) {
    uVar4 = 0;
    lVar5 = 0x20;
    do {
      lVar3 = *(long *)(unaff_x20 + 0x18);
      if (lVar3 == 0) goto LAB_02f15744;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_02f15748:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < *(int *)(lVar3 + lVar5)) {
        if (unaff_x22 == 0) {
LAB_02f15744:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar2 = FUN_03604bc4();
        if ((uVar2 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02f15744;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar4) goto LAB_02f15748;
          FUN_02f123d0();
        }
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (unaff_x21 != uVar4);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


