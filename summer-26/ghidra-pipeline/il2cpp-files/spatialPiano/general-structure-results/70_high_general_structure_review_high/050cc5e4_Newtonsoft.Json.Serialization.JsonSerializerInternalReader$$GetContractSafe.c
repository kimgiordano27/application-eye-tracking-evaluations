/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContractSafe
ENTRY_POINT: 050cc5e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe(void)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint in_w8;
  long *unaff_x19;
  int *unaff_x20;
  uint unaff_w23;
  long unaff_x25;
  ulong unaff_x27;
  
                    /* try { // try from 050cc5e8 to 051cc5f3 has its CatchHandler @ 050cc458 */
  if (in_w8 < unaff_w23) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 050cc5e0 with catch @ 050cc5f0
                        */
    FUN_050f57f4(0x18,0);
  }
  FUN_04f6c4a0();
  if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  iVar3 = FUN_0502c04c();
  if (iVar3 == 0) {
    if ((unaff_x27 & 1) != 0) {
      uVar1 = *unaff_x20 + (int)unaff_x19[2];
      if ((int)uVar1 < (int)*(uint *)(unaff_x19 + 1)) {
        if (*(uint *)(unaff_x19 + 1) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        uVar2 = *(undefined2 *)(*unaff_x19 + (long)(int)uVar1 * 2);
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar4 = FUN_0505af5c(uVar2,0);
        if ((uVar4 & 1) != 0) goto LAB_050cc678;
      }
    }
    uVar5 = 1;
  }
  else {
LAB_050cc678:
    uVar5 = 0;
  }
  return uVar5;
}


