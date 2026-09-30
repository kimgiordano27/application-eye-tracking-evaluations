/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$get_Current
ENTRY_POINT: 04e7b624
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector4f>__get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long in_x9;
  int *in_x10;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  ulong uVar3;
  long unaff_x24;
  int unaff_w25;
  long unaff_x27;
  long unaff_x29;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_04e7b658;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_03cf1348();
LAB_04e7b658:
  (*(code *)*puVar1)();
  if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28();
  }
  if (((unaff_w25 == 0xb) || (unaff_w25 == 0)) && (0 < (int)unaff_x21)) {
    if (unaff_x22 == 0) {
LAB_04e7b710:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar3 = 0;
    do {
      uVar2 = FUN_077e9ba0();
      if ((uVar2 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_04e7b710;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        FUN_04e77a20();
      }
      uVar3 = uVar3 + 1;
    } while (unaff_x21 != uVar3);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


