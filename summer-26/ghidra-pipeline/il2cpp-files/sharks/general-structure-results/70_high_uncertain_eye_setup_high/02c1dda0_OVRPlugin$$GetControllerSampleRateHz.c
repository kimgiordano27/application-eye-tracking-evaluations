/*
FUNCTION_NAME: OVRPlugin$$GetControllerSampleRateHz
ENTRY_POINT: 02c1dda0
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__GetControllerSampleRateHz(void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_017fc350();
  FUN_017fc350(PTR_DAT_03806228);
  FUN_017fc350(PTR_DAT_03804428);
  FUN_017fc350(PTR_DAT_037f2c78);
  *(undefined1 *)(unaff_x20 + 0xed1) = 1;
  uVar7 = *unaff_x22;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02bddb5c(uVar7,0);
  uVar2 = FUN_02be66d0();
  if ((uVar2 & 1) == 0) {
    uVar7 = *unaff_x22;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02bddb5c(uVar7,0);
    puVar1 = PTR_DAT_03804428;
    if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
      thunk_FUN_01843fdc(*(long *)PTR_DAT_03804428);
    }
    lVar4 = FUN_02c1a918();
    if (lVar4 == 0) {
LAB_02c1df60:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (*(long *)(lVar4 + 0x18) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_02c1df60;
      uVar7 = (**(code **)(*unaff_x19 + 0x818))();
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01843fdc(*unaff_x21);
      }
      uVar2 = FUN_02be74a8(uVar7,0,0);
      if ((uVar2 & 1) != 0) {
        uVar7 = (**(code **)(*unaff_x19 + 0x818))();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01843fdc(*(long *)puVar1);
        }
        plVar3 = (long *)FUN_02c1b6b4(uVar7);
        if (plVar3 != (long *)0x0) {
          return plVar3;
        }
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar4 = *(long *)puVar1;
      }
      plVar3 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
    }
    else {
      iVar6 = (int)*(long *)(lVar4 + 0x18);
      if (1 < iVar6) {
        thunk_FUN_01851c08(PTR_DAT_037feb28);
        uVar7 = thunk_FUN_01861bbc();
        uVar5 = thunk_FUN_01851c08(PTR_DAT_0380b918);
        FUN_02bb89a0(uVar7,uVar5,0);
        uVar5 = thunk_FUN_01851c08(PTR_DAT_0380b920);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar7,uVar5);
      }
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      plVar3 = *(long **)(lVar4 + 0x20);
      if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)PTR_DAT_03806228)) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944();
      }
    }
  }
  else {
    plVar3 = (long *)thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03806228);
    FUN_02b45500(plVar3,4,0);
  }
  return plVar3;
}


