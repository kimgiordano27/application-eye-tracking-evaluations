/*
FUNCTION_NAME: HurricaneVR.Framework.Weapons.Guns.HVRGrabMagazine$$CheckEnableGrab
ENTRY_POINT: 0218d790
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0218d8b8) */
/* WARNING: Removing unreachable block (ram,0x0218d954) */

void HurricaneVR_Framework_Weapons_Guns_HVRGrabMagazine__CheckEnableGrab(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 0218d790 to 0228d8e3 has its CatchHandler @ 0218d59c */
  lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  plVar5 = (long *)FUN_0218d024(*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30));
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_036cee6c(plVar5,0,0);
  if ((uVar6 & 1) == 0) {
LAB_0218d81c:
    bVar1 = false;
  }
  else {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar2 = FUN_036d3364(plVar5,0);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0218d964 to 0228d973 has its CatchHandler @ 0218d974 */
      FUN_01ab6c3c();
    }
    iVar3 = FUN_036d3364();
    if (iVar2 == iVar3) goto LAB_0218d81c;
    lVar4 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03cdb478) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0218d87c;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)PTR_DAT_03cdb478,0);
LAB_0218d87c:
    (*(code *)*puVar7)(plVar5);
    bVar1 = true;
  }
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (bVar1) {
    if (unaff_x19 == 0) {
LAB_0218d95c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar8 = FUN_036cbbbc();
    uVar6 = FUN_01cc0870(uVar8,0,1,0);
    if ((uVar6 & 1) == 0) {
      lVar4 = FUN_036cbbbc();
      if (lVar4 == 0) goto LAB_0218d95c;
      uVar8 = FUN_036d3824(lVar4,0);
      uVar8 = FUN_025bdc88(*(undefined8 *)PTR_DAT_03cdb480,uVar8,*(undefined8 *)PTR_DAT_03cdb488,0);
      FUN_01cbdf68(uVar8,0);
      FUN_01cc0870();
    }
  }
  return;
}


