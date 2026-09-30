/*
FUNCTION_NAME: Unity.Serialization.Json.SerializedArrayViewPropertyBag$$Unity.Properties.ICollectionPropertyBagAccept<Unity.Serialization.Json.SerializedArrayView>.Accept
ENTRY_POINT: 066b556c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Serialization_Json_SerializedArrayViewPropertyBag__Unity_Properties_ICollectionPropertyBagAccept<Unity_Serialization_Json_SerializedArrayView>_Accept
               (void)

{
  uint uVar1;
  long lVar2;
  int in_w9;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  
  if (in_w9 == 0) {
    FUN_02fe925c(PTR_DAT_06fad320);
    FUN_02fe925c(PTR_DAT_06f6d508);
    *(undefined1 *)(unaff_x24 + 0x2fd) = 1;
  }
  if ((int)unaff_w21 < 0) {
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_03cf44cc(0,unaff_w21,*(undefined8 *)PTR_DAT_06fad320);
  }
  if ((int)unaff_w22 <= (int)unaff_w21) {
    unaff_w21 = unaff_w22;
  }
  uVar1 = 0;
  if (-1 < (int)unaff_w22) {
    uVar1 = unaff_w21;
  }
  *(uint *)(unaff_x19 + 0x88) = uVar1;
  if (*(uint *)(unaff_x20 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
  lVar2 = *(long *)(unaff_x20 + (long)(int)uVar1 * 8 + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  FUN_068fc8bc(lVar2,0);
  FUN_0510cf2c();
  return;
}


