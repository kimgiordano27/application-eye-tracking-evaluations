/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$Deserialize
ENTRY_POINT: 050cc6f8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__Deserialize(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar6;
  long lVar7;
  long lVar8;
  
  FUN_02f08768();
  *(undefined1 *)(unaff_x22 + 0xb2b) = 1;
  iVar1 = *(int *)(*unaff_x21 + 0xe4);
  iVar5 = (int)unaff_x20[2] + 1;
  *(int *)(unaff_x20 + 2) = iVar5;
  if (iVar1 == 0) {
    thunk_FUN_02f6670c();
  }
  if ((DAT_06bb9b21 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067d5bb0);
    DAT_06bb9b21 = 1;
  }
  uVar2 = *(uint *)(unaff_x20 + 1);
  if (iVar5 < (int)uVar2) {
    if (unaff_x19 == 0) {
LAB_050cc7fc:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar4 = *(uint *)(unaff_x20 + 2);
    uVar3 = *(uint *)(unaff_x19 + 0x10);
    if ((int)uVar3 <= (int)(uVar2 - uVar4)) {
      lVar6 = unaff_x20[3];
      lVar7 = *(long *)PTR_DAT_067db018;
      if ((uVar2 < uVar4) || (uVar2 - uVar4 < uVar3)) {
        FUN_050f577c(0);
      }
      lVar8 = *unaff_x20;
      if ((*(ushort *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
        FUN_02f41e9c();
      }
      if (lVar6 == 0) goto LAB_050cc7fc;
      iVar5 = FUN_0502bc7c(lVar6,lVar8 + (long)(int)uVar4 * 2,uVar3);
      if (iVar5 == 0) {
        *(int *)(unaff_x20 + 2) = (int)unaff_x20[2] + *(int *)(unaff_x19 + 0x10) + -1;
        return 1;
      }
    }
  }
  return 0;
}


