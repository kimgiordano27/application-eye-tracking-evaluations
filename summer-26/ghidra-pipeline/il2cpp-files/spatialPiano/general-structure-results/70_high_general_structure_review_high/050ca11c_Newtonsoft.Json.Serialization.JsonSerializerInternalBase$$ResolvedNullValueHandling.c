/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$ResolvedNullValueHandling
ENTRY_POINT: 050ca11c
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ResolvedNullValueHandling(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x21;
  long unaff_x23;
  long *unaff_x28;
  int iStack000000000000004c;
  
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar2 = FUN_050cc9d0();
  puVar1 = PTR_DAT_067db0e0;
  iStack000000000000004c = iVar2;
  if (*(int *)(*(long *)PTR_DAT_067db0e0 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)PTR_DAT_067db0e0);
  }
  uVar3 = FUN_050cb5a4();
  if ((uVar3 & 1) == 0) {
    if (unaff_x23 == 0) {
LAB_050cae04:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar3 = FUN_050323c4();
    if ((uVar3 & 1) == 0) {
      if (iVar2 < 3) {
        *(undefined1 *)(unaff_x21 + 0x11) = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar3 = FUN_050c83c4();
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar3 = FUN_050c8564();
    }
    if ((uVar3 & 1) == 0) {
      if (*(char *)(unaff_x21 + 0x14) != '\0') {
        lVar4 = *(long *)(unaff_x21 + 0x18);
        if (lVar4 == 0) goto LAB_050cae04;
        uVar3 = (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40));
        if ((uVar3 & 1) != 0) goto LAB_050ca178;
      }
      FUN_050cd700();
      return 0;
    }
  }
LAB_050ca178:
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar3 = FUN_050c9780();
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  return 1;
}


