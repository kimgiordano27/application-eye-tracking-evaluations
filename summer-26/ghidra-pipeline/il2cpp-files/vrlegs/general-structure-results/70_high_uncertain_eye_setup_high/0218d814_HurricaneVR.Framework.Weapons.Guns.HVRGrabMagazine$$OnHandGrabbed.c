/*
FUNCTION_NAME: HurricaneVR.Framework.Weapons.Guns.HVRGrabMagazine$$OnHandGrabbed
ENTRY_POINT: 0218d814
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0218d8b8) */
/* WARNING: Removing unreachable block (ram,0x0218d954) */

void HurricaneVR_Framework_Weapons_Guns_HVRGrabMagazine__OnHandGrabbed(int param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  undefined8 in_stack_00000008;
  
  if (unaff_w22 == param_1) {
    bVar1 = false;
  }
  else {
    lVar5 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03cdb478) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0218d87c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec();
LAB_0218d87c:
    (*(code *)*puVar2)();
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
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0218d784 with catch @ 0218d8c8
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0218d754 with catch @ 0218d8cc
                        */
    uVar3 = FUN_036cbbbc();
    uVar4 = FUN_01cc0870(uVar3,0,1,0);
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 0218d8e4 to 0228d8fb has its CatchHandler @ 0218d974 */
      lVar5 = FUN_036cbbbc();
      if (lVar5 == 0) goto LAB_0218d95c;
      uVar3 = FUN_036d3824(lVar5,0);
                    /* try { // try from 0218d8fc to 0228d963 has its CatchHandler @ 0218d59c */
      uVar3 = FUN_025bdc88(*(undefined8 *)PTR_DAT_03cdb480,uVar3,*(undefined8 *)PTR_DAT_03cdb488,0);
      FUN_01cbdf68(uVar3,0);
      FUN_01cc0870();
    }
  }
  return;
}


