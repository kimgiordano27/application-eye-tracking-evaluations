/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_IsMrcEnabled
ENTRY_POINT: 02908f98
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_Media_IsMrcEnabled(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar6;
  int unaff_w19;
  long lVar7;
  int unaff_w20;
  long unaff_x21;
  undefined *puVar5;
  
  if (unaff_x21 == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e01970);
    uVar3 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar1 = thunk_FUN_0159f088(PTR_DAT_06e10578);
    FUN_028f2804(uVar3,uVar1);
  }
  else {
    if (unaff_w19 < 0) {
      thunk_FUN_0159f088(PTR_DAT_06df0bd0);
      uVar3 = thunk_FUN_015d056c();
      FUN_011a9bc8();
      uVar1 = thunk_FUN_0159f088(PTR_DAT_06e2f568);
      puVar5 = PTR_DAT_06e5e700;
    }
    else if (unaff_w20 < 0) {
      thunk_FUN_0159f088(PTR_DAT_06df0bd0);
      uVar3 = thunk_FUN_015d056c();
      FUN_011a9bc8();
      uVar1 = thunk_FUN_0159f088(PTR_DAT_06e5f160);
      puVar5 = PTR_DAT_06df1170;
    }
    else {
      iVar6 = (int)*(long *)(unaff_x21 + 0x18);
      if (unaff_w20 <= iVar6 - unaff_w19) {
        if (*(long *)(unaff_x21 + 0x18) == 0) {
          lVar7 = *(long *)PTR_DAT_06e19880;
          lVar2 = **(long **)(lVar7 + 0x38);
          if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
            lVar2 = FUN_015c2790();
          }
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          lVar2 = **(long **)(lVar7 + 0x38);
          if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
            lVar2 = FUN_015c2790();
          }
          return **(undefined8 **)(lVar2 + 0xb8);
        }
        if (iVar6 != 0) {
          if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar1 = FUN_02908658(unaff_x21 + 0x20 + (long)unaff_w20 * 2,unaff_w19);
          return uVar1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      thunk_FUN_0159f088(PTR_DAT_06df0bd0);
      uVar3 = thunk_FUN_015d056c();
      FUN_011a9bc8();
      uVar1 = thunk_FUN_0159f088(PTR_DAT_06e5f160);
      puVar5 = PTR_DAT_06e2f960;
    }
    uVar4 = thunk_FUN_0159f088(puVar5);
    FUN_028f5dac(uVar3,uVar1,uVar4);
  }
  uVar1 = thunk_FUN_0159f088(PTR_DAT_06d89060);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar3,uVar1);
}


