/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_NumberOfDisplayStrings
ENTRY_POINT: 04e4f69c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_NumberOfDisplayStrings(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar5;
  undefined8 *puVar6;
  
  FUN_05b106dc(0);
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar3 = FUN_053f6d4c(*(long *)(unaff_x21 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28));
    if ((int)(*(int *)(unaff_x20 + 0x18) - unaff_w19) < iVar3) {
      FUN_05b0fe5c(5,0);
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 != 0) {
      uVar2 = *(uint *)(lVar4 + 0x20);
      if (0 < (int)uVar2) {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_04e4f770;
        uVar5 = 0;
        puVar6 = (undefined8 *)(lVar4 + 0x38);
        do {
          if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_04e4f758:
                    /* WARNING: Subroutine does not return */
            FUN_02fe94f0();
          }
          if (-1 < *(int *)(puVar6 + -3)) {
            if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_04e4f758;
            lVar1 = (long)(int)unaff_w19;
            unaff_w19 = unaff_w19 + 1;
            *(undefined8 *)(unaff_x20 + lVar1 * 8 + 0x20) = *puVar6;
            thunk_FUN_03048534();
          }
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 4;
        } while (uVar2 != uVar5);
      }
      return;
    }
  }
LAB_04e4f770:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


