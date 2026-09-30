/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray
ENTRY_POINT: 050dc288
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray(long param_1)

{
  bool bVar1;
  short sVar2;
  undefined8 uVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  uint unaff_w19;
  int unaff_w20;
  short unaff_w21;
  undefined8 uVar8;
  undefined8 unaff_x23;
  uint unaff_w24;
  uint uVar9;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  
  uVar3 = unaff_x23;
  uVar8 = 0;
  if (unaff_w24 != 0) {
    uVar3 = 0;
    uVar8 = unaff_x23;
  }
  if (unaff_w24 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (unaff_w20 < 2) {
      unaff_w20 = 1;
    }
    psVar6 = (short *)(unaff_x26 + unaff_x27 + -2);
    iVar7 = unaff_w20 + -2;
    do {
      uVar9 = unaff_w19;
      sVar2 = 0x30;
      if (9 < (uVar9 & 0xe)) {
        sVar2 = unaff_w21;
      }
      psVar5 = psVar6 + -1;
      *psVar6 = sVar2 + ((ushort)uVar9 & 0xf);
      iVar4 = iVar7 + -1;
      bVar1 = -1 < iVar7;
      psVar6 = psVar5;
      unaff_w19 = uVar9 >> 4;
      iVar7 = iVar4;
    } while ((bVar1) || (uVar8 = uVar3, 0xf < uVar9));
  }
  else {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    psVar6 = (short *)(unaff_x26 + unaff_x27 + -2);
    iVar7 = 6;
    do {
      uVar9 = unaff_w19;
      sVar2 = 0x30;
      if (9 < (uVar9 & 0xe)) {
        sVar2 = unaff_w21;
      }
      psVar5 = psVar6 + -1;
      *psVar6 = sVar2 + ((ushort)uVar9 & 0xf);
      iVar4 = iVar7 + -1;
      bVar1 = -1 < iVar7;
      psVar6 = psVar5;
      unaff_w19 = uVar9 >> 4;
      iVar7 = iVar4;
    } while ((bVar1) || (0xf < uVar9));
    iVar7 = unaff_w20 + -10;
    do {
      uVar9 = unaff_w24;
      sVar2 = 0x30;
      if (9 < (uVar9 & 0xe)) {
        sVar2 = unaff_w21;
      }
      psVar6 = psVar5 + -1;
      *psVar5 = sVar2 + ((ushort)uVar9 & 0xf);
      iVar4 = iVar7 + -1;
      bVar1 = -1 < iVar7;
      psVar5 = psVar6;
      unaff_w24 = uVar9 >> 4;
      iVar7 = iVar4;
    } while ((bVar1) || (0xf < uVar9));
  }
  return uVar8;
}


