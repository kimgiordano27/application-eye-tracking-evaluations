/*
FUNCTION_NAME: OVRPlugin.Vector4s$$ToString
ENTRY_POINT: 0749c978
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4s__ToString(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint *puVar9;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int *piVar10;
  
  *(undefined8 *)(unaff_x19 + 0xd8) = param_1;
  thunk_FUN_03d1023c();
  *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = unaff_x19;
  thunk_FUN_03d1023c();
  lVar3 = thunk_FUN_03d2ef40(*unaff_x20);
  FUN_059d2ef0(lVar3,*unaff_x21);
  puVar2 = PTR_DAT_09223c20;
  if (lVar3 != 0) {
    lVar7 = *(long *)PTR_DAT_09223c20;
    piVar10 = (int *)(lVar3 + 0x1c);
    *piVar10 = *piVar10 + 1;
    lVar8 = *(long *)(lVar3 + 0x10);
    puVar9 = (uint *)(lVar3 + 0x18);
    uVar1 = *puVar9;
    if (lVar8 != 0) {
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *puVar9 = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 6;
        *piVar10 = *piVar10 + 1;
      }
      else {
        FUN_059d3744(lVar3,6,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0749d0c0;
      }
      uVar1 = *puVar9;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *puVar9 = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 7;
        *piVar10 = *piVar10 + 1;
      }
      else {
        FUN_059d3744(lVar3,7,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0749d0c0;
      }
      uVar1 = *puVar9;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *puVar9 = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 8;
        *piVar10 = *piVar10 + 1;
      }
      else {
        FUN_059d3744(lVar3,8,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0749d0c0;
      }
      uVar1 = *puVar9;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *puVar9 = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 9;
        *piVar10 = *piVar10 + 1;
      }
      else {
        FUN_059d3744(lVar3,9,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0749d0c0;
      }
      uVar1 = *puVar9;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *puVar9 = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 10;
        *piVar10 = *piVar10 + 1;
      }
      else {
        FUN_059d3744(lVar3,10,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0749d0c0;
      }
      uVar1 = *puVar9;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *puVar9 = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
        *piVar10 = *piVar10 + 1;
      }
      else {
        FUN_059d3744(lVar3,0xb,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0749d0c0;
      }
      uVar1 = *puVar9;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *puVar9 = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
        *piVar10 = *piVar10 + 1;
      }
      else {
        FUN_059d3744(lVar3,0xc,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0749d0c0;
      }
      uVar1 = *puVar9;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *puVar9 = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
        *piVar10 = *piVar10 + 1;
      }
      else {
        FUN_059d3744(lVar3,0xd,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0749d0c0;
      }
      uVar1 = *puVar9;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *puVar9 = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
        *piVar10 = *piVar10 + 1;
      }
      else {
        FUN_059d3744(lVar3,0xe,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0749d0c0;
      }
      uVar1 = *puVar9;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *puVar9 = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
        *piVar10 = *piVar10 + 1;
      }
      else {
        FUN_059d3744(lVar3,0xf,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0749d0c0;
      }
      uVar1 = *puVar9;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *puVar9 = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
        *piVar10 = *piVar10 + 1;
      }
      else {
        FUN_059d3744(lVar3,0x10,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0749d0c0;
      }
      uVar1 = *puVar9;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *puVar9 = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
        *piVar10 = *piVar10 + 1;
      }
      else {
        FUN_059d3744(lVar3,0x11,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0749d0c0;
      }
      uVar1 = *puVar9;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *puVar9 = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
        *piVar10 = *piVar10 + 1;
      }
      else {
        FUN_059d3744(lVar3,0x12,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0749d0c0;
      }
      uVar1 = *puVar9;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *puVar9 = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 2;
        *piVar10 = *piVar10 + 1;
      }
      else {
        FUN_059d3744(lVar3,2,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0749d0c0;
      }
      uVar1 = *puVar9;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *puVar9 = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 3;
        *piVar10 = *piVar10 + 1;
      }
      else {
        FUN_059d3744(lVar3,3,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0749d0c0;
      }
      uVar1 = *puVar9;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *puVar9 = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 4;
        *piVar10 = *piVar10 + 1;
      }
      else {
        FUN_059d3744(lVar3,4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0749d0c0;
      }
      puVar2 = PTR_DAT_09223c70;
      uVar1 = *puVar9;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *puVar9 = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 5;
      }
      else {
        FUN_059d3744(lVar3,5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      plVar4 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
      *plVar4 = lVar3;
      thunk_FUN_03d1023c(plVar4,lVar3);
      uVar5 = FUN_03d2d394(*unaff_x22,5);
      FUN_0708f30c(uVar5,*(undefined8 *)puVar2,0);
      puVar6 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
      *puVar6 = uVar5;
      thunk_FUN_03d1023c(puVar6,uVar5);
      return;
    }
  }
LAB_0749d0c0:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


