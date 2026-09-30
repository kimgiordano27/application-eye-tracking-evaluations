/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_InternalConverter
ENTRY_POINT: 04f25bdc
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


undefined8 Newtonsoft_Json_Serialization_JsonContract__get_InternalConverter(void)

{
  undefined *puVar1;
  short sVar2;
  long lVar3;
  ulong uVar4;
  int in_w8;
  uint uVar5;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  int iVar6;
  long *unaff_x28;
  undefined8 in_stack_00000048;
  
  *(int *)(unaff_x22 + 0x10) = in_w8 + in_stack_00000048._4_4_ + -1;
  lVar3 = FUN_04dc9d2c();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (0 < *(int *)(lVar3 + 0x10)) {
    iVar6 = 0;
    do {
      sVar2 = FUN_04db48b0(lVar3,iVar6,0);
      if ((sVar2 == 0x20) && (*(char *)(unaff_x21 + 0x12) != '\0')) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        Newtonsoft_Json_Serialization_JsonProperty__get_ShouldDeserialize();
      }
      else {
        FUN_04db48b0(lVar3,iVar6,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*unaff_x28);
        }
        uVar4 = FUN_04f28180();
        if ((uVar4 & 1) == 0) {
          FUN_04f2908c();
          return 0;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(lVar3 + 0x10));
  }
  uVar5 = *(uint *)(unaff_x19 + 0x24);
  if ((uVar5 >> 0xb & 1) == 0) {
    return 1;
  }
  if ((uVar5 >> 0xd & 1) != 0) {
    uVar4 = thunk_FUN_04db8ae0(lVar3,*(undefined8 *)PTR_DAT_065f8368,0);
    uVar5 = *(uint *)(unaff_x19 + 0x24);
    if ((uVar4 & 1) != 0) goto LAB_04f25cf0;
  }
  if ((uVar5 >> 0xe & 1) == 0) {
    return 1;
  }
  uVar4 = thunk_FUN_04db8ae0(lVar3,*(undefined8 *)PTR_DAT_065cff90,0);
  if ((uVar4 & 1) == 0) {
    return 1;
  }
  uVar5 = *(uint *)(unaff_x19 + 0x24);
LAB_04f25cf0:
  *(uint *)(unaff_x19 + 0x24) = uVar5 | 0x100;
  puVar1 = PTR_DAT_065c98d0;
  lVar3 = *(long *)PTR_DAT_065c98d0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar3 = *(long *)puVar1;
  }
  *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(lVar3 + 0xb8);
  return 1;
}


