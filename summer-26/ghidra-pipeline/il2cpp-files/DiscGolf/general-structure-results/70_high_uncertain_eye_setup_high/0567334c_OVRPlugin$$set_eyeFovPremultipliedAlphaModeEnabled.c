/*
FUNCTION_NAME: OVRPlugin$$set_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 0567334c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__set_eyeFovPremultipliedAlphaModeEnabled(void)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uStack000000000000000c;
  
  FUN_02d965b8();
  *(undefined1 *)(unaff_x22 + 0x682) = 1;
  uStack000000000000000c = 0;
  if (((*(int *)(unaff_x19 + 0xc0) == 0) || (uVar3 = FUN_05669478(unaff_w21), (uVar3 & 1) == 0)) ||
     (*(long *)(unaff_x19 + 200) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar3 = FUN_05673240();
    if ((uVar3 & 1) != 0) {
      uVar10 = unaff_x20[3];
      uVar9 = unaff_x20[2];
      uVar6 = unaff_x20[5];
      uVar5 = unaff_x20[4];
      uVar8 = unaff_x20[1];
      uVar7 = *unaff_x20;
      *(undefined8 *)(unaff_x19 + 0x248) = unaff_x20[6];
      *(undefined8 *)(unaff_x19 + 0x230) = uVar10;
      *(undefined8 *)(unaff_x19 + 0x228) = uVar9;
      *(undefined8 *)(unaff_x19 + 0x240) = uVar6;
      *(undefined8 *)(unaff_x19 + 0x238) = uVar5;
      *(undefined8 *)(unaff_x19 + 0x220) = uVar8;
      *(undefined8 *)(unaff_x19 + 0x218) = uVar7;
    }
    uVar3 = FUN_05673240();
    uVar1 = *(undefined4 *)(unaff_x19 + 0xc0);
    uVar5 = *(undefined8 *)(unaff_x19 + 200);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_06a0f1a0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      iVar2 = FUN_0564d1f4(uVar1,uVar5,unaff_w21);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06a0f1a0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      iVar2 = FUN_0564d504(uVar1,uVar5,unaff_w21);
    }
    if (iVar2 == 0x11) {
      if (*(int *)(unaff_x19 + 0x1a0) == -1) {
        *(undefined4 *)(unaff_x19 + 0x1a0) = 1;
      }
      lVar4 = *(long *)(*(long *)PTR_DAT_06a0e888 + 0x20);
      *(undefined1 *)(unaff_x19 + 0x23) = 1;
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02dcfd18();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02dcfd18();
      }
      if (*(long *)(*(long *)(lVar4 + 0xb8) + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05686fc4();
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
      *(undefined1 *)(unaff_x19 + 0x23) = 0;
      *(undefined4 *)(unaff_x19 + 0x1a0) = 0xffffffff;
    }
  }
  return uVar5;
}


