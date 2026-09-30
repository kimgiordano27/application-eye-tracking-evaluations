/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$set_ToDisplayStringsDelegate
ENTRY_POINT: 0414c7fc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__set_ToDisplayStringsDelegate(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (param_1 != 0) {
    iVar4 = FUN_0462f080(param_1,*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28));
    if ((int)(*(int *)(unaff_x20 + 0x18) - unaff_w19) < iVar4) {
      Oculus_Interaction_SecondaryInteractorConnection__Start(5,0);
    }
    lVar5 = *(long *)(unaff_x21 + 0x10);
    if (lVar5 != 0) {
      uVar3 = *(uint *)(lVar5 + 0x20);
      if (0 < (int)uVar3) {
        lVar5 = *(long *)(lVar5 + 0x18);
        if (lVar5 == 0) goto LAB_0414c8c8;
        uVar6 = 0;
        puVar7 = (undefined8 *)(lVar5 + 0x30);
        do {
          if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_0414c8b0:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          if (-1 < *(int *)(puVar7 + -2)) {
            if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_0414c8b0;
            lVar1 = (long)(int)unaff_w19;
            lVar2 = (long)(int)unaff_w19;
            unaff_w19 = unaff_w19 + 1;
            *(undefined8 *)(unaff_x20 + lVar1 * 8 + 0x20) = *puVar7;
            thunk_FUN_02bb0e9c(unaff_x20 + 0x20 + lVar2 * 8);
          }
          uVar6 = uVar6 + 1;
          puVar7 = puVar7 + 3;
        } while (uVar3 != uVar6);
      }
      return;
    }
  }
LAB_0414c8c8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


