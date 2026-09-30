/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCustomCameraAnchorPose
ENTRY_POINT: 036a1220
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCustomCameraAnchorPose(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  
  FUN_036a1354();
  lVar3 = *unaff_x21;
  uVar1 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *unaff_x21;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
LAB_036a1350:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar3 = *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        uVar6 = 0;
        do {
          if (uVar1 <= uVar6) goto LAB_036a1350;
          lVar4 = *unaff_x21;
          uVar1 = *(uint *)(lVar3 + (long)(int)uVar6 * 4 + 0x20);
          lVar7 = (long)(int)uVar1;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar4 = *unaff_x21;
          }
          lVar4 = **(long **)(lVar4 + 0xb8);
          if (lVar4 == 0) goto LAB_036a134c;
          if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_036a1350;
          if ((*(long *)(unaff_x19 + 0xc0) == 0) ||
             (lVar5 = *(long *)(*(long *)(unaff_x19 + 0xc0) + 0x38), lVar5 == 0)) goto LAB_036a134c;
          uVar2 = *(uint *)(lVar4 + lVar7 * 4 + 0x20);
          if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_036a1350;
          lVar4 = *(long *)(unaff_x19 + 0x140);
          if (lVar4 == 0) goto LAB_036a134c;
          if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_036a1350;
          lVar5 = lVar5 + (long)(int)uVar2 * 0x10;
          uVar8 = *(undefined8 *)(lVar5 + 0x20);
          lVar4 = lVar4 + lVar7 * 0x10;
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
          *(undefined8 *)(lVar4 + 0x20) = uVar8;
          lVar4 = *(long *)(unaff_x19 + 0xd0);
          if (lVar4 == 0) goto LAB_036a134c;
          if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_036a1350;
          *(undefined4 *)(lVar4 + lVar7 * 4 + 0x20) = 0x3f800000;
          uVar1 = *(uint *)(lVar3 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar1);
      }
      return;
    }
  }
LAB_036a134c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


