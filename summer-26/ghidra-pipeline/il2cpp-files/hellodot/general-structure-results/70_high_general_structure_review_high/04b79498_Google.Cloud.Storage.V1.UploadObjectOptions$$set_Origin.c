/*
FUNCTION_NAME: Google.Cloud.Storage.V1.UploadObjectOptions$$set_Origin
ENTRY_POINT: 04b79498
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Google_Cloud_Storage_V1_UploadObjectOptions__set_Origin(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (0 < *(int *)(param_1 + 0x24)) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == 0) {
LAB_04b79558:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      if (-1 < *(int *)(lVar4 + lVar5 + 0x20)) {
        if (param_2 == 0) goto LAB_04b79558;
        uVar1 = *(undefined8 *)(lVar4 + lVar5 + 0x28);
        uVar2 = *(undefined8 *)(lVar4 + lVar5 + 0x30);
        uVar3 = FUN_04b7634c(param_2,uVar1,uVar2,
                             *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x188));
        if ((uVar3 & 1) == 0) {
          FUN_04b7654c(param_1,uVar1,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148));
        }
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while ((long)uVar6 < (long)*(int *)(param_1 + 0x24));
  }
  return;
}


