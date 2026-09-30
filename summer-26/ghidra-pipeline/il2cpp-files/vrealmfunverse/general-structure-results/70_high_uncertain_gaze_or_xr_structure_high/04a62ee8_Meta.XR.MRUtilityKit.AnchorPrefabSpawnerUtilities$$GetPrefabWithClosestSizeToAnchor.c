/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$GetPrefabWithClosestSizeToAnchor
ENTRY_POINT: 04a62ee8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__GetPrefabWithClosestSizeToAnchor(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long unaff_x23;
  long lVar7;
  ulong uVar8;
  long unaff_x26;
  
  FUN_02b76218();
  if ((unaff_x23 != 0) && (lVar2 = thunk_FUN_02b79548(), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44();
  }
  thunk_FUN_02bb0e9c();
  *(undefined4 *)(unaff_x20 + 0x28) = 0xffffffff;
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x10),0);
  }
  else {
    uVar3 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313588,unaff_w22);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
    thunk_FUN_02bb0e9c();
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    uVar3 = FUN_02b3c908(lVar2,unaff_w22);
    *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x18),uVar3);
    lVar2 = *(long *)(unaff_x20 + 0x40);
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_04d8a7b0(uVar3,0);
    if (lVar2 == 0) goto LAB_04a630c0;
    lVar2 = FUN_04c8ae78(lVar2,*(undefined8 *)PTR_DAT_06322b98,uVar3,0);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218(lVar7);
    }
    if (lVar2 == 0) {
      thunk_FUN_02ba3594(PTR_DAT_06320988);
      uVar3 = thunk_FUN_02b79644();
      uVar5 = thunk_FUN_02ba3594(PTR_DAT_06322ba8);
      FUN_04c82410(uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar3);
    }
    lVar4 = thunk_FUN_02b79548(lVar2,lVar7);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar2,lVar7);
    }
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar8 = 0;
      uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        FUN_04a64938();
        uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
  }
  if (*unaff_x21 != 0) {
    uVar1 = FUN_04c8d044(*unaff_x21,*(undefined8 *)PTR_DAT_06320978,0);
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined4 *)(unaff_x20 + 0x38) = uVar1;
    thunk_FUN_02bb0e9c();
    return;
  }
LAB_04a630c0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


