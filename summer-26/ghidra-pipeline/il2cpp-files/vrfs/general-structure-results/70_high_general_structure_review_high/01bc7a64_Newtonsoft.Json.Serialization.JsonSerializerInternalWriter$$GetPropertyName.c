/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetPropertyName
ENTRY_POINT: 01bc7a64
PROGRAM: vrfs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x26;
  undefined8 in_stack_00000000;
  
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0164c380();
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  if (DAT_0722bd88 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e0ec68);
    DAT_0722bd88 = '\x01';
  }
  lVar1 = *unaff_x23;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar1 = *unaff_x23;
  }
  uVar3 = **(undefined8 **)(lVar1 + 0xb8);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_016466fc(*unaff_x26);
  }
  uVar2 = FUN_051e0350(uVar3,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if (DAT_0722bd88 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e0ec68);
      DAT_0722bd88 = '\x01';
    }
    lVar1 = *unaff_x23;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar1 = *unaff_x23;
    }
    if ((**(long **)(lVar1 + 0xb8) == 0) ||
       (lVar1 = FUN_051e516c(**(long **)(lVar1 + 0xb8),0), lVar1 == 0)) {
LAB_01bc79f4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar1 = FUN_01a257e8(lVar1,*(undefined8 *)PTR_DAT_06e2a928);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x26);
    }
    uVar2 = FUN_051d2ac0(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(int *)(unaff_x20 + 0x38) == 1) {
        lVar1 = FUN_051e516c(in_stack_00000000,0);
        if (lVar1 == 0) goto LAB_01bc79f4;
        uVar3 = FUN_051e0500(lVar1,0);
        uVar3 = FUN_02526be4(*(undefined8 *)PTR_DAT_06df70d0,uVar3,*(undefined8 *)PTR_DAT_06e64b70,0
                            );
        if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
          thunk_FUN_016466fc(*(long *)PTR_DAT_06e52cd8);
        }
        FUN_0486672c(uVar3,0);
      }
    }
    else {
      if (lVar1 == 0) goto LAB_01bc79f4;
      *(undefined8 *)(unaff_x20 + 0x58) = *(undefined8 *)(lVar1 + 0x28);
      thunk_FUN_01656ef8((undefined8 *)(unaff_x20 + 0x58));
    }
  }
  return;
}


