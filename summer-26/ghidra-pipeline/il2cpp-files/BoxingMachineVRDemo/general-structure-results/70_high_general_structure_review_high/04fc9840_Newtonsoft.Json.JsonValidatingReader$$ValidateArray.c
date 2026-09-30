/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateArray
ENTRY_POINT: 04fc9840
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04fc98fc) */

void Newtonsoft_Json_JsonValidatingReader__ValidateArray(int param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x23;
  
  while( true ) {
    if (param_1 == 0) {
      uVar2 = FUN_04fb8050();
      uVar3 = thunk_FUN_02dc61f4(PTR_DAT_067797f8);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar2,uVar3);
    }
    unaff_w20 = unaff_w20 - param_1;
    if (unaff_w20 < 1) break;
    param_1 = (**(code **)(*unaff_x19 + 0x348))();
  }
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x23) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_04fc98b4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_04fc98b4:
  (*(code *)*puVar1)();
  return;
}


