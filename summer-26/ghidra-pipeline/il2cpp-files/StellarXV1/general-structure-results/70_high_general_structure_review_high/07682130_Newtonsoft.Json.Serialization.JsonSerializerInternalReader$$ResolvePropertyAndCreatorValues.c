/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolvePropertyAndCreatorValues
ENTRY_POINT: 07682130
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolvePropertyAndCreatorValues
               (long param_1)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  undefined2 uVar5;
  char cVar6;
  long unaff_x19;
  short *unaff_x20;
  long unaff_x21;
  long lVar7;
  int iVar8;
  int unaff_w26;
  long unaff_x27;
  int unaff_w28;
  
  FUN_04077588(*(undefined8 *)(param_1 + 1000));
  *(undefined1 *)(unaff_x21 + 0x26f) = 1;
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(int *)(unaff_x27 + 0x10) == 1) {
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) {
LAB_07682294:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar7 = *(long *)(unaff_x19 + 8);
      uVar5 = FUN_074e0328();
      *(undefined2 *)(lVar7 + (long)(int)uVar2 * 2) = uVar5;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      goto joined_r0x076821a0;
    }
  }
  FUN_07503e1c();
joined_r0x076821a0:
  if (unaff_w28 < 0) {
    if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    iVar8 = unaff_w26;
    if (-unaff_w28 < unaff_w26) {
      iVar8 = -unaff_w28;
    }
    FUN_075041b4();
    unaff_w26 = unaff_w26 - iVar8;
    if (unaff_w26 < 1) {
      return;
    }
  }
  puVar4 = PTR_DAT_092d03e8;
  iVar8 = unaff_w26 + 1;
  cVar6 = DAT_09891578;
  do {
    sVar1 = *unaff_x20;
    sVar3 = 0x30;
    if (sVar1 != 0) {
      unaff_x20 = unaff_x20 + 1;
      sVar3 = sVar1;
    }
    if (cVar6 == '\0') {
      FUN_04077588(puVar4);
      cVar6 = '\x01';
      DAT_09891578 = '\x01';
    }
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) goto LAB_07682294;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 2) = sVar3;
    }
    else {
      FUN_07503cf0();
      cVar6 = DAT_09891578;
    }
    iVar8 = iVar8 + -1;
    if (iVar8 < 2) {
      return;
    }
  } while( true );
}


