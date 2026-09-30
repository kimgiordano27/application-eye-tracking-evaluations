/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewList
ENTRY_POINT: 01bbd7b0
PROGRAM: vrfs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewList
               (long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long unaff_x22;
  long *plVar5;
  long unaff_x23;
  
  plVar5 = *(long **)(unaff_x22 + 0x840);
  if ((*(byte *)(unaff_x23 + 0xce6) & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e1a840);
    *(undefined1 *)(unaff_x23 + 0xce6) = 1;
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  if (*(int *)(*plVar5 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar4 = FUN_0321d484(param_3,0x8000 - iVar3,0);
  if (param_2 != 0) {
    iVar2 = FUN_0321d484(uVar4,(*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x18)) +
                               (*(int *)(param_2 + 0x24) >> 3),0);
    iVar3 = *(int *)(param_1 + 0x18);
    iVar1 = 0x8000 - iVar3;
    if (iVar2 - iVar1 == 0 || iVar2 < iVar1) {
      iVar3 = FUN_01bc105c(param_2,*(undefined8 *)(param_1 + 0x10),iVar3,iVar2);
    }
    else {
      iVar3 = FUN_01bc105c(param_2,*(undefined8 *)(param_1 + 0x10),iVar3,iVar1);
      if (iVar3 == iVar1) {
        iVar3 = FUN_01bc105c(param_2,*(undefined8 *)(param_1 + 0x10),0,iVar2 - iVar1);
        iVar3 = iVar3 + iVar1;
      }
    }
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar3 & 0x7fff;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


