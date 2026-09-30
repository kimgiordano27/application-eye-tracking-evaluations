/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 045de644
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined4 in_w9;
  uint unaff_w19;
  long unaff_x20;
  int unaff_w27;
  undefined8 *unaff_x28;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000028;
  
  *(undefined4 *)(unaff_x20 + 0x20) = in_w9;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar4 = unaff_w27 / (int)uVar2;
    }
    uVar3 = unaff_w27 - iVar4 * uVar2;
    if (uVar3 < uVar2) {
      lVar5 = *(long *)(unaff_x20 + 0x18);
      piVar1 = (int *)(param_1 + (ulong)uVar3 * 4 + 0x20);
      if (lVar5 == 0) goto System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor;
      if (unaff_w19 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = lVar5 + (long)(int)unaff_w19 * 0x24;
        *(int *)(lVar5 + 0x20) = unaff_w27;
        *(int *)(lVar5 + 0x24) = *piVar1 + -1;
        *(undefined4 *)(lVar5 + 0x28) = in_stack_00000028._4_4_;
        uVar7 = unaff_x28[1];
        uVar6 = *unaff_x28;
        *(undefined8 *)(lVar5 + 0x3c) = unaff_x28[2];
        *(undefined8 *)(lVar5 + 0x34) = uVar7;
        *(undefined8 *)(lVar5 + 0x2c) = uVar6;
        *piVar1 = unaff_w19 + 1;
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


