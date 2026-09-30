/*
FUNCTION_NAME: FUN_058ac870
ENTRY_POINT: 058ac870
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


undefined8 FUN_058ac870(long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_076d4f8c & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727f070);
    DAT_076d4f8c = 1;
  }
  uVar1 = param_2 - 2U >> 1;
  if ((7 < (uVar1 | param_2 << 0x1f)) || ((1 << (ulong)(uVar1 & 0x1f) & 0x99U) == 0)) {
    thunk_FUN_032e1da0(PTR_DAT_0727dd40);
    uVar2 = thunk_FUN_032a56a0();
    uVar3 = thunk_FUN_032e1da0(PTR_DAT_07296bb0);
    FUN_0589e7ac(uVar2,uVar3);
    uVar3 = thunk_FUN_032e1da0(PTR_DAT_07296bb8);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar2,uVar3);
  }
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    if (DAT_076d46c2 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07286280);
      DAT_076d46c2 = '\x01';
    }
    uVar2 = System_Convert__ToSByte(param_1,0);
    uVar2 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray
                      (uVar2,*(undefined4 *)(param_1 + 0x10),param_2,0x1200,0);
    if (0xff < (uint)uVar2) {
      FUN_02d9d3e0(*(undefined8 *)PTR_DAT_0727f070);
                    /* WARNING: Subroutine does not return */
      FUN_058a8330();
    }
  }
  return uVar2;
}


