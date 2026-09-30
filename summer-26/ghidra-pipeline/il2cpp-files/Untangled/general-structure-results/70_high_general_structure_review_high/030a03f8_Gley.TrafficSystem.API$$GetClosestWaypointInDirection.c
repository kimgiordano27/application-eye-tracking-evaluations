/*
FUNCTION_NAME: Gley.TrafficSystem.API$$GetClosestWaypointInDirection
ENTRY_POINT: 030a03f8
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Gley_TrafficSystem_API__GetClosestWaypointInDirection
               (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  long lVar1;
  undefined8 uVar2;
  float *pfVar3;
  long unaff_x19;
  float fVar4;
  float fVar5;
  float fVar6;
  float extraout_s0;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    fVar4 = (float)FUN_066d48c0(*(long *)(param_1 + 0x10),0);
    if ((*(long *)(unaff_x19 + 0x80) != 0) &&
       (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x10), lVar1 != 0)) {
      fVar7 = param_3;
      fVar13 = param_4;
      fVar5 = (float)FUN_066d48c0(lVar1,0);
      if ((*(long *)(unaff_x19 + 0x90) != 0) &&
         (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x90) + 0x10), lVar1 != 0)) {
        fVar11 = fVar7;
        fVar9 = fVar13;
        fVar6 = (float)FUN_066d48c0(lVar1,0);
        if ((*(long *)(unaff_x19 + 0x88) != 0) &&
           (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x88) + 0x10), lVar1 != 0)) {
          fVar8 = fVar11;
          fVar10 = fVar9;
          uVar2 = FUN_066d48c0(lVar1,0);
          fVar12 = (param_3 - fVar7) * (fVar9 - fVar10) - (param_4 - fVar13) * (fVar11 - fVar8);
          fVar13 = (param_4 - fVar13) * (fVar6 - extraout_s0) - (fVar4 - fVar5) * (fVar9 - fVar10);
          fVar4 = (fVar4 - fVar5) * (fVar11 - fVar8) - (param_3 - fVar7) * (fVar6 - extraout_s0);
          if (DAT_071babf5 == '\0') {
            uVar2 = FUN_02f07e70(PTR_DAT_06d02c10);
            DAT_071babf5 = '\x01';
          }
          pfVar3 = *(float **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
          fVar7 = fVar12 - *pfVar3;
          fVar5 = fVar13 - pfVar3[1];
          fVar11 = fVar4 - pfVar3[2];
          if (DAT_013f69d8 <= fVar11 * fVar11 + fVar7 * fVar7 + fVar5 * fVar5) {
            *(float *)(unaff_x19 + 0x74) = fVar12;
            *(float *)(unaff_x19 + 0x78) = fVar13;
            *(float *)(unaff_x19 + 0x7c) = fVar4;
          }
          *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0x74);
          *(undefined4 *)(unaff_x19 + 0x128) = *(undefined4 *)(unaff_x19 + 0x7c);
          uVar2 = FUN_030a056c(uVar2,unaff_x19 + 0x130);
          FUN_030a056c(uVar2,unaff_x19 + 0x138);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


