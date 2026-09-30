/*
FUNCTION_NAME: OVRPlugin$$OnEditorShutdown
ENTRY_POINT: 01f8c2ec
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__OnEditorShutdown(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int unaff_w19;
  int unaff_w21;
  long unaff_x22;
  
  iVar1 = FUN_0122b738();
  if (iVar1 == 1) {
    if (unaff_x22 == 0) {
      iVar1 = FUN_0122b6f4(param_1,0);
joined_r0x01f8c34c:
      if ((unaff_w19 < 0) || (unaff_w21 < iVar1)) {
        puVar6 = PTR_DAT_027b3f98;
        if (-1 < unaff_w19) {
          puVar6 = PTR_DAT_027b3fa0;
        }
        uVar3 = thunk_FUN_01279b34(puVar6);
        thunk_FUN_01279b34(PTR_DAT_027b3fa8);
        uVar4 = thunk_FUN_0124bba8();
        uVar5 = thunk_FUN_01279b34(PTR_DAT_027b3fb0);
        FUN_01e79c88(uVar4,uVar3,uVar5,0);
        uVar3 = thunk_FUN_01279b34(PTR_DAT_027c19d8);
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar4,uVar3);
      }
      iVar2 = FUN_01f7fe4c(param_1);
      if ((unaff_w19 <= iVar2 - (unaff_w21 - iVar1)) &&
         ((unaff_x22 == 0 || (iVar2 = FUN_01f7fe4c(), unaff_w21 - iVar1 <= iVar2 - unaff_w19)))) {
        if (unaff_w19 < 2) {
          return;
        }
        FUN_01f8c6f0(param_1);
        return;
      }
      thunk_FUN_01279b34(PTR_DAT_027b3eb0);
      uVar4 = thunk_FUN_0124bba8();
      puVar6 = PTR_DAT_027b3fb8;
    }
    else {
      iVar1 = FUN_0122b738();
      if (iVar1 != 1) goto LAB_01f8c3cc;
      iVar1 = FUN_0122b6f4(param_1,0);
      iVar2 = FUN_0122b6f4();
      if (iVar1 == iVar2) goto joined_r0x01f8c34c;
      thunk_FUN_01279b34(PTR_DAT_027b3eb0);
      uVar4 = thunk_FUN_0124bba8();
      puVar6 = PTR_DAT_027c19e0;
    }
    uVar3 = thunk_FUN_01279b34(puVar6);
    FUN_01e7d290(uVar4,uVar3,0);
  }
  else {
LAB_01f8c3cc:
    thunk_FUN_01279b34(PTR_DAT_027b4b00);
    uVar4 = thunk_FUN_0124bba8();
    uVar3 = thunk_FUN_01279b34(PTR_DAT_027c18a0);
    FUN_01f78d64(uVar4,uVar3);
  }
  uVar3 = thunk_FUN_01279b34(PTR_DAT_027c19d8);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar4,uVar3);
}


