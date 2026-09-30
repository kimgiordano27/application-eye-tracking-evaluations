/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$.ctor
ENTRY_POINT: 050ca114
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer___ctor
          (void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int in_w8;
  long lVar6;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x28;
  
  if (in_w8 == 0x79) {
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar2 = FUN_050cc9d0();
    puVar1 = PTR_DAT_067db0e0;
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
      if ((uVar3 & 1) != 0) goto LAB_050ca178;
      if (*(char *)(unaff_x21 + 0x14) != '\0') {
        lVar6 = *(long *)(unaff_x21 + 0x18);
        if (lVar6 == 0) goto LAB_050cae04;
        uVar3 = (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40));
        if ((uVar3 & 1) != 0) goto LAB_050ca178;
      }
LAB_050ca918:
      FUN_050cd700();
    }
    else {
LAB_050ca178:
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar3 = FUN_050c9780();
      if ((uVar3 & 1) != 0) goto FUN_050cade0;
    }
    uVar5 = 0;
  }
  else {
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    puVar1 = PTR_DAT_067daf78;
    uVar3 = FUN_050cb490();
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar3 = FUN_050cc800();
    }
    else {
      if (*(long *)puVar1 == 0) goto LAB_050cae04;
      *(int *)(unaff_x22 + 0x10) =
           *(int *)(unaff_x22 + 0x10) + *(int *)(*(long *)puVar1 + 0x10) + -1;
      puVar1 = PTR_DAT_067c93a8;
      lVar6 = *(long *)PTR_DAT_067c93a8;
      *(uint *)(unaff_x19 + 0x24) = *(uint *)(unaff_x19 + 0x24) | 0x100;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar6 = *(long *)puVar1;
      }
      lVar4 = *unaff_x28;
      *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(lVar6 + 0xb8);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar3 = FUN_050cc6ac();
    }
    if ((uVar3 & 1) == 0) goto LAB_050ca918;
FUN_050cade0:
    uVar5 = 1;
  }
  return uVar5;
}


