/*
FUNCTION_NAME: OVRPlugin$$GetLayerRecommendedResolution
ENTRY_POINT: 01f8bb90
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetLayerRecommendedResolution(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int unaff_w19;
  int unaff_w21;
  
  iVar2 = FUN_0122b6f4(param_1,0);
  if ((-1 < unaff_w21) && (iVar2 - unaff_w19 == 0 || iVar2 < unaff_w19)) {
    iVar3 = FUN_01f7fe4c();
    if ((iVar2 - unaff_w19) + iVar3 < unaff_w21) {
      thunk_FUN_01279b34(PTR_DAT_027b3eb0);
      uVar6 = thunk_FUN_0124bba8();
      uVar7 = thunk_FUN_01279b34(PTR_DAT_027b3fb8);
      FUN_01e7d290(uVar6,uVar7,0);
    }
    else {
      iVar2 = FUN_0122b738();
      if (iVar2 == 1) {
        lVar4 = thunk_FUN_0124baac();
        if (lVar4 != 0) {
          FUN_013cd394(lVar4,unaff_w19,unaff_w21,*(undefined8 *)PTR_DAT_027c19a0);
          return;
        }
        iVar2 = unaff_w21 + unaff_w19 + -1;
        if (unaff_w19 < iVar2) {
          do {
            FUN_01f7feac();
            FUN_01f7feac();
            FUN_01f89750();
            FUN_01f89750();
            unaff_w19 = unaff_w19 + 1;
            iVar2 = iVar2 + -1;
          } while (unaff_w19 < iVar2);
        }
        return;
      }
      thunk_FUN_01279b34(PTR_DAT_027b4b00);
      uVar6 = thunk_FUN_0124bba8();
      uVar7 = thunk_FUN_01279b34(PTR_DAT_027c18a0);
      FUN_01f78d64(uVar6,uVar7);
    }
    uVar7 = thunk_FUN_01279b34(PTR_DAT_027c19a8);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar6,uVar7);
  }
  puVar1 = PTR_DAT_027b3fa0;
  if (iVar2 <= unaff_w19) {
    puVar1 = PTR_DAT_027b3f98;
  }
  uVar7 = thunk_FUN_01279b34(puVar1);
  thunk_FUN_01279b34(PTR_DAT_027b3fa8);
  uVar6 = thunk_FUN_0124bba8();
  uVar5 = thunk_FUN_01279b34(PTR_DAT_027b3fb0);
  FUN_01e79c88(uVar6,uVar7,uVar5,0);
  uVar7 = thunk_FUN_01279b34(PTR_DAT_027c19a8);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar6,uVar7);
}


