/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_EqualityComparer
ENTRY_POINT: 061e1fa4
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


long Newtonsoft_Json_JsonSerializerSettings__set_EqualityComparer(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_0373b518();
  *(undefined1 *)(unaff_x21 + 0x601) = 1;
  uVar1 = *(undefined4 *)(unaff_x19 + 0x20);
  lVar4 = thunk_FUN_037788cc(*unaff_x20);
  FUN_061e1b30(0x40000000,lVar4,uVar1);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 != 0) {
      iVar2 = *(int *)(unaff_x19 + 0x20);
      iVar3 = *(int *)(lVar5 + 0x18) - *(int *)(unaff_x19 + 0x18);
      if (iVar2 <= iVar3) {
        iVar3 = iVar2;
      }
      FUN_06265b84(lVar5,*(int *)(unaff_x19 + 0x18),*(undefined8 *)(lVar4 + 0x10),0,iVar3,0);
      if (0 < iVar2 - iVar3) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_061e2058;
        FUN_06265b84(lVar5,0,*(undefined8 *)(lVar4 + 0x10),
                     *(int *)(lVar5 + 0x18) - *(int *)(unaff_x19 + 0x18),iVar2 - iVar3,0);
      }
      *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
      return lVar4;
    }
  }
LAB_061e2058:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


