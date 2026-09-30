/*
FUNCTION_NAME: Unity.Serialization.Json.JsonTypeStack$$Dispose
ENTRY_POINT: 0338a39c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Unity_Serialization_Json_JsonTypeStack__Dispose
               (long param_1,int *param_2,int *param_3,undefined4 param_4,undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_0412d0c5 & 1) == 0) {
    FUN_01ab69ac(System_Xml_IDtdAttributeInfo_TypeInfo);
    DAT_0412d0c5 = 1;
  }
  iVar2 = FUN_0338a4c4(param_1,param_4,param_5);
  puVar1 = System_Xml_IDtdAttributeInfo_TypeInfo;
  if (iVar2 == -1) {
    return;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar3 = FUN_021a228c(*(long *)(param_1 + 0x80),param_4,
                         *(undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo);
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar4 = FUN_021a228c(*(long *)(param_1 + 0x80),iVar2,*(undefined8 *)puVar1);
      if (*(char *)(lVar4 + 0x40) != *(char *)(lVar3 + 0x40)) {
        if (*(char *)(lVar3 + 0x40) == '\0') {
          if (iVar2 <= *param_3) {
            return;
          }
          if (*(long *)(param_1 + 0x80) == 0) goto LAB_0338a4c0;
          lVar4 = FUN_021a228c(*(long *)(param_1 + 0x80),iVar2,*(undefined8 *)puVar1);
          *(int *)(lVar3 + 0x20) = iVar2;
          *param_3 = iVar2;
        }
        else {
          if (iVar2 <= *param_2) {
            return;
          }
          if (*(long *)(param_1 + 0x80) == 0) goto LAB_0338a4c0;
          lVar4 = FUN_021a228c(*(long *)(param_1 + 0x80),iVar2,*(undefined8 *)puVar1);
          *(int *)(lVar3 + 0x20) = iVar2;
          *param_2 = iVar2;
        }
        *(undefined1 *)(lVar4 + 0x28) = 1;
        if (*(int *)(lVar4 + 0x24) == -1) {
          *(undefined4 *)(lVar4 + 0x24) = param_4;
        }
      }
      return;
    }
  }
LAB_0338a4c0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


