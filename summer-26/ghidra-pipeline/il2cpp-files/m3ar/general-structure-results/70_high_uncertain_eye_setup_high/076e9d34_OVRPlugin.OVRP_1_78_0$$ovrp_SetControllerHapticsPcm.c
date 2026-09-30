/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetControllerHapticsPcm
ENTRY_POINT: 076e9d34
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetControllerHapticsPcm(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long unaff_x19;
  long unaff_x20;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  *(undefined1 *)(unaff_x20 + 0x2fc) = 1;
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_076e9f04;
  iVar1 = *(int *)(*(long *)(unaff_x19 + 0x20) + 0x84);
  fVar10 = (float)FUN_076e8868();
  lVar4 = *(long *)(unaff_x19 + 0x80);
  if (fVar10 <= 0.0) {
    if (lVar4 == 0) goto LAB_076e9f04;
    lVar4 = FUN_076a165c(lVar4,0);
    puVar3 = PTR_DAT_08fae550;
    lVar5 = *(long *)PTR_DAT_08fae550;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0408f364(lVar5);
      lVar5 = *(long *)puVar3;
    }
    if (iVar1 == 2) {
      puVar6 = (undefined4 *)(unaff_x19 + 0xcc);
      puVar7 = (undefined4 *)(unaff_x19 + 0xd0);
      puVar8 = (undefined4 *)(unaff_x19 + 0xd4);
      puVar9 = (undefined4 *)(unaff_x19 + 0xd8);
    }
    else {
      puVar6 = (undefined4 *)(unaff_x19 + 0xbc);
      puVar7 = (undefined4 *)(unaff_x19 + 0xc0);
      puVar8 = (undefined4 *)(unaff_x19 + 0xc4);
      puVar9 = (undefined4 *)(unaff_x19 + 200);
    }
    if (lVar4 == 0) goto LAB_076e9f04;
    thunk_FUN_0854a9bc(*puVar6,*puVar7,*puVar8,*puVar9,lVar4,
                       *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x10),0);
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_076e9f04;
    lVar4 = FUN_076a165c(*(long *)(unaff_x19 + 0x88),0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)puVar3);
    }
    if (lVar4 == 0) goto LAB_076e9f04;
    uVar13 = *(undefined4 *)(unaff_x19 + 0xb4);
    uVar14 = *(undefined4 *)(unaff_x19 + 0xb8);
    uVar11 = *(undefined4 *)(unaff_x19 + 0xac);
    uVar12 = *(undefined4 *)(unaff_x19 + 0xb0);
    uVar2 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  }
  else {
    if (lVar4 == 0) goto LAB_076e9f04;
    lVar4 = FUN_076a165c(lVar4,0);
    puVar3 = PTR_DAT_08fae550;
    if (*(int *)(*(long *)PTR_DAT_08fae550 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)PTR_DAT_08fae550);
    }
    if (lVar4 == 0) goto LAB_076e9f04;
    thunk_FUN_0854a9bc(*(undefined4 *)(unaff_x19 + 0xac),*(undefined4 *)(unaff_x19 + 0xb0),
                       *(undefined4 *)(unaff_x19 + 0xb4),*(undefined4 *)(unaff_x19 + 0xb8),lVar4,
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),0);
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_076e9f04;
    lVar4 = FUN_076a165c(*(long *)(unaff_x19 + 0x88),0);
    if (iVar1 == 2) {
      puVar6 = (undefined4 *)(unaff_x19 + 0xcc);
      puVar7 = (undefined4 *)(unaff_x19 + 0xd0);
      puVar8 = (undefined4 *)(unaff_x19 + 0xd4);
      puVar9 = (undefined4 *)(unaff_x19 + 0xd8);
    }
    else {
      puVar6 = (undefined4 *)(unaff_x19 + 0xbc);
      puVar7 = (undefined4 *)(unaff_x19 + 0xc0);
      puVar8 = (undefined4 *)(unaff_x19 + 0xc4);
      puVar9 = (undefined4 *)(unaff_x19 + 200);
    }
    if (lVar4 == 0) goto LAB_076e9f04;
    uVar14 = *puVar9;
    uVar13 = *puVar8;
    uVar12 = *puVar7;
    uVar11 = *puVar6;
    uVar2 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  }
  thunk_FUN_0854a9bc(uVar11,uVar12,uVar13,uVar14,lVar4,uVar2,0);
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    FUN_076a16c0(*(long *)(unaff_x19 + 0x80),0);
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      FUN_076a16c0(*(long *)(unaff_x19 + 0x88),0);
      return;
    }
  }
LAB_076e9f04:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


