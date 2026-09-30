/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_ReferenceResolver
ENTRY_POINT: 061e1fcc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_ReferenceResolver(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  if (unaff_x20 != 0) {
    *(undefined4 *)(unaff_x20 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 != 0) {
      iVar1 = *(int *)(unaff_x19 + 0x20);
      iVar2 = *(int *)(lVar3 + 0x18) - *(int *)(unaff_x19 + 0x18);
      if (iVar1 <= iVar2) {
        iVar2 = iVar1;
      }
      FUN_06265b84(lVar3,*(int *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),0,iVar2,0);
      if (0 < iVar1 - iVar2) {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_061e2058;
        FUN_06265b84(lVar3,0,*(undefined8 *)(unaff_x20 + 0x10),
                     *(int *)(lVar3 + 0x18) - *(int *)(unaff_x19 + 0x18),iVar1 - iVar2,0);
      }
      *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
      return;
    }
  }
LAB_061e2058:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


