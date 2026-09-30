/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureSize
ENTRY_POINT: 069698e8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureSize(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long in_x9;
  long lVar12;
  long unaff_x19;
  int iVar13;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  undefined8 *unaff_x23;
  float fVar14;
  
  while (unaff_x20 != 0) {
    lVar9 = *(long *)(unaff_x20 + 0x10);
    uVar8 = *(undefined8 *)(in_x9 + 0xa0);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
      thunk_FUN_03afed3c();
    }
    else {
      FUN_04de85b0();
    }
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w22 == unaff_w21) {
      uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6ec8);
      FUN_04de7d48(uVar8,*(undefined8 *)PTR_DAT_084b6ed0);
      *(undefined8 *)(unaff_x19 + 0x60) = uVar8;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x60),uVar8);
      puVar4 = PTR_DAT_084b6fc0;
      puVar3 = PTR_DAT_084b6fb8;
      puVar2 = PTR_DAT_084b5d60;
      lVar9 = *(long *)(unaff_x19 + 0x10);
      if (lVar9 != 0) {
        iVar13 = 0;
        goto LAB_069699ac;
      }
      break;
    }
    if ((((*(long *)(unaff_x19 + 0x10) == 0) ||
         (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd0), lVar9 == 0)) ||
        ((lVar9 = *(long *)(lVar9 + 0x28), lVar9 == 0 ||
         ((lVar9 = *(long *)(lVar9 + 0x30), lVar9 == 0 ||
          (lVar9 = FUN_04de82e0(lVar9,unaff_w21,*unaff_x23), lVar9 == 0)))))) ||
       (in_x9 = *(long *)(lVar9 + 0x18), in_x9 == 0)) break;
  }
LAB_06969a84:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
LAB_069699ac:
  if (*(long *)(lVar9 + 0xe8) == 0) goto LAB_06969a84;
  iVar5 = FUN_06936294(*(long *)(lVar9 + 0xe8),0);
  if (iVar5 <= iVar13) {
    fVar14 = *(float *)(unaff_x19 + 0x3c) * (float)*(int *)(unaff_x19 + 0x30) * 0.75;
    if (*(float *)(unaff_x19 + 0x40) < fVar14) {
      *(float *)(unaff_x19 + 0x40) = fVar14;
    }
    puVar2 = PTR_DAT_08486be8;
    uVar1 = *(int *)(unaff_x19 + 0x30) * 2;
    if (*(int *)(unaff_x19 + 0x34) < (int)uVar1) {
      *(uint *)(unaff_x19 + 0x34) = uVar1 | 1;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6fd8,0);
    }
    if ((*(long *)(unaff_x19 + 0x10) != 0) &&
       (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar9 != 0)) {
      uVar6 = FUN_06936294(lVar9,0);
      *(undefined4 *)(unaff_x19 + 0x58) = uVar6;
      return;
    }
    goto LAB_06969a84;
  }
  if (((*(long *)(unaff_x19 + 0x10) == 0) ||
      (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar9 == 0)) ||
     (lVar9 = *(long *)(lVar9 + 0x58), lVar9 == 0)) goto LAB_06969a84;
  FUN_04de82e0(lVar9,iVar13,*(undefined8 *)puVar2);
  lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
  FUN_06969444();
  if (lVar9 == 0) goto LAB_06969a84;
  FUN_06968120(lVar9);
  lVar7 = *(long *)(unaff_x19 + 0x60);
  if (lVar7 == 0) goto LAB_06969a84;
  lVar10 = *(long *)(lVar7 + 0x10);
  lVar12 = *(long *)puVar3;
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_06969a84;
  uVar1 = *(uint *)(lVar7 + 0x18);
  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
    plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
    *plVar11 = lVar9;
    thunk_FUN_03afed3c(plVar11,lVar9);
  }
  else {
    FUN_04de85b0(lVar7,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
  }
  lVar9 = *(long *)(unaff_x19 + 0x10);
  iVar13 = iVar13 + 1;
  if (lVar9 == 0) goto LAB_06969a84;
  goto LAB_069699ac;
}


