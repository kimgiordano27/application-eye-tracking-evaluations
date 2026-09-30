/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$get_Current
ENTRY_POINT: 04fd7320
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__get_Current(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  
  FUN_0550b264(param_1);
  if (0 < (int)unaff_x24) {
    if (unaff_x23 == 0) {
LAB_04fd73e0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    uVar6 = 0;
    do {
      if (uVar6 == uVar2) {
LAB_04fd73dc:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      iVar3 = *(int *)(unaff_x23 + 0x20 + uVar6 * 0x18);
      if (-1 < iVar3) {
        if (unaff_x21 == 0) goto LAB_04fd73e0;
        iVar5 = 0;
        if (unaff_w20 != 0) {
          iVar5 = iVar3 / unaff_w20;
        }
        uVar4 = iVar3 - iVar5 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_04fd73dc;
        lVar1 = unaff_x21 + (ulong)uVar4 * 4;
        *(int *)(unaff_x23 + 0x20 + uVar6 * 0x18 + 4) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar6 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != unaff_x24);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  LeanTween__value((long *)(unaff_x19 + 0x10));
  *(long *)(unaff_x19 + 0x18) = unaff_x23;
  LeanTween__value();
  return;
}


