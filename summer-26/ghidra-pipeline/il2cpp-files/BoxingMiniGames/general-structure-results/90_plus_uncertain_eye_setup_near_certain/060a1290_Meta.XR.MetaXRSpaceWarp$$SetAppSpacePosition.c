/*
FUNCTION_NAME: Meta.XR.MetaXRSpaceWarp$$SetAppSpacePosition
ENTRY_POINT: 060a1290
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MetaXRSpaceWarp__SetAppSpacePosition(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_060a1458();
  FUN_060a14f8();
  if (*(char *)(unaff_x19 + 0x88) != '\0') {
    return;
  }
  if (*(char *)(unaff_x19 + 0xd8) != '\0') {
    return;
  }
  FUN_060a1774();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_0609e0dc(&stack0x00000020);
    lVar2 = *(long *)(unaff_x19 + 0x98);
    if (lVar2 != 0) {
      fVar6 = *(float *)(unaff_x19 + 0xd0);
      fVar5 = *(float *)(unaff_x19 + 0xd4);
      fVar7 = *(float *)(unaff_x19 + 0xcc);
      fVar3 = (float)(**(code **)(lVar2 + 0x18))
                               (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (FUN_0609edec(fVar7 * fVar3,fVar6 * fVar3,fVar5 * fVar3), *(long *)(unaff_x19 + 0x20) != 0)
         ) {
        uVar1 = FUN_0609e0dc();
        FUN_060a18c8(uVar1,unaff_x19 + 0xb0,&stack0x00000020);
        if (*(char *)(unaff_x19 + 0x111) != '\0') {
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_060a1368;
          if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x7c) == '\0') {
            lVar2 = *(long *)(unaff_x19 + 0xa0);
            if (lVar2 == 0) goto LAB_060a1368;
            uVar4 = (**(code **)(lVar2 + 0x18))
                              (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
            *(undefined4 *)(unaff_x19 + 0xec) = uVar4;
          }
        }
        return;
      }
    }
  }
LAB_060a1368:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


