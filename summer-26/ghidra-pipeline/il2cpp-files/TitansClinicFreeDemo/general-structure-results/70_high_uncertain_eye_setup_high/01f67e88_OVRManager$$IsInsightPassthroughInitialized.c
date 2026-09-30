/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughInitialized
ENTRY_POINT: 01f67e88
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


uint OVRManager__IsInsightPassthroughInitialized(ulong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  int unaff_w23;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027ba7e8);
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    thunk_FUN_01279b34(PTR_DAT_027ba140);
    *(undefined1 *)(unaff_x26 + 0xd65) = 1;
  }
  lVar4 = *unaff_x27;
  *(undefined4 *)(unaff_x29 + -0xa4) = 0;
  *(undefined8 *)(unaff_x29 + -0x2e) = 0;
  *(undefined8 *)(unaff_x29 + -0x36) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x98) = 0;
  *(undefined8 *)(unaff_x29 + -0xa0) = 0;
  *(undefined8 *)(unaff_x29 + -200) = 0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  if ((unaff_x22 < 0) || (unaff_w23 != 0)) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar3 = FUN_01f6b6f0();
    lVar4 = FUN_01f30d70();
    iVar2 = *(int *)(unaff_x29 + -0xa4);
    if (((uVar3 & 0xffdf) != 0x44) && ((uVar3 & 0xffdf) != 0x47 || 0 < iVar2)) {
      if ((uVar3 & 0xffdf) == 0x58) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar3 = FUN_01f6fe0c();
      }
      else {
        lVar5 = *unaff_x27;
        *(undefined8 *)(unaff_x29 + -0x2e) = 0;
        *(undefined8 *)(unaff_x29 + -0x36) = 0;
        *(undefined8 *)(unaff_x29 + -0x48) = 0;
        *(undefined8 *)(unaff_x29 + -0x50) = 0;
        *(undefined8 *)(unaff_x29 + -0x38) = 0;
        *(undefined8 *)(unaff_x29 + -0x40) = 0;
        *(undefined8 *)(unaff_x29 + -0x68) = 0;
        *(undefined8 *)(unaff_x29 + -0x70) = 0;
        *(undefined8 *)(unaff_x29 + -0x58) = 0;
        *(undefined8 *)(unaff_x29 + -0x60) = 0;
        *(undefined8 *)(unaff_x29 + -0x88) = 0;
        *(undefined8 *)(unaff_x29 + -0x90) = 0;
        *(undefined8 *)(unaff_x29 + -0x78) = 0;
        *(undefined8 *)(unaff_x29 + -0x80) = 0;
        *(undefined8 *)(unaff_x29 + -0x98) = 0;
        *(undefined8 *)(unaff_x29 + -0xa0) = 0;
        iVar1 = *(int *)(lVar5 + 0xe0);
        *(long *)(unaff_x29 + -0xe0) = lVar4;
        if (iVar1 == 0) {
          thunk_FUN_01220628();
        }
        FUN_01f6f73c();
        uStack_18 = 0;
        uStack_20 = 0;
        uStack_8 = 0;
        uStack_10 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_28 = 0;
        uStack_30 = 0;
        OVRSimpleJSON_JSONNumber__Clone(unaff_x29 + -0xd0,&uStack_40,0x20,0);
        if ((uVar3 & 0xffff) == 0) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          FUN_01f6bfb4(unaff_x29 + -0xd0,unaff_x29 + -0xa0);
        }
        else {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          FUN_01f6ba54(unaff_x29 + -0xd0,unaff_x29 + -0xa0,uVar3,iVar2,
                       *(undefined8 *)(unaff_x29 + -0xe0),0);
        }
        uVar3 = OVRSimpleJSON_JSONNumber__IsNumeric(unaff_x29 + -0xd0);
      }
      goto LAB_01f67fc4;
    }
    if (unaff_x22 < 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar3 = FUN_01f6fb40();
      goto LAB_01f67fc4;
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
  }
  else if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar3 = FUN_01f6f8bc();
LAB_01f67fc4:
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 1;
}


