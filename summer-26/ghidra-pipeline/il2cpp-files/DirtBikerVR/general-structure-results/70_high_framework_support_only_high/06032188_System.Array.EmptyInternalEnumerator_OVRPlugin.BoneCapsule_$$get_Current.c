/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$get_Current
ENTRY_POINT: 06032188
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__get_Current(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long in_x9;
  long in_x10;
  long in_x11;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined8 unaff_x23;
  long unaff_x24;
  
code_r0x06032188:
  param_1 = param_1 + 1;
  do {
    if (param_1 == unaff_x24) {
      *(long *)(unaff_x19 + 0x10) = unaff_x21;
      thunk_FUN_03afed3c((long *)(unaff_x19 + 0x10));
      *(undefined8 *)(unaff_x19 + 0x18) = unaff_x23;
      thunk_FUN_03afed3c();
      return;
    }
    if (param_1 == in_x9) {
LAB_060321c4:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    iVar2 = *(int *)(in_x10 + param_1 * in_x11);
    if (iVar2 < 0) goto code_r0x06032188;
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    iVar5 = 0;
    if (unaff_w20 != 0) {
      iVar5 = iVar2 / unaff_w20;
    }
    uVar4 = iVar2 - iVar5 * unaff_w20;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_060321c4;
    lVar1 = unaff_x21 + (ulong)uVar4 * 4;
    lVar3 = param_1 * in_x11;
    param_1 = param_1 + 1;
    *(int *)(in_x10 + lVar3 + 4) = *(int *)(lVar1 + 0x20) + -1;
    *(int *)(lVar1 + 0x20) = (int)param_1;
  } while( true );
}


