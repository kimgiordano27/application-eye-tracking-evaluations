/*
FUNCTION_NAME: OVRPassthroughLayer$$CreateOvrPluginStyleObject
ENTRY_POINT: 06961838
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPassthroughLayer__CreateOvrPluginStyleObject(void)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long lVar9;
  undefined8 uVar10;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 *unaff_x24;
  undefined4 *unaff_x25;
  undefined8 *unaff_x26;
  
  bVar4 = FUN_045b08cc();
  *(byte *)(unaff_x19 + 0x6f) = bVar4 & 1;
  if (*(char *)(unaff_x19 + 0x6d) == '\0') {
    lVar5 = *unaff_x22;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar5 = *unaff_x22;
    }
    puVar8 = *(undefined8 **)(lVar5 + 0xb8);
    lVar9 = puVar8[0x12];
    if (lVar9 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar8 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar10 = *puVar8;
      lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6ca0);
      FUN_04962b78(lVar9,uVar10,*(undefined8 *)PTR_DAT_084b6d08,0);
      plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x90);
      *plVar6 = lVar9;
      thunk_FUN_03afed3c(plVar6,lVar9);
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    bVar4 = FUN_045b08cc(lVar9,*unaff_x26);
  }
  else {
    bVar4 = 1;
  }
  lVar5 = *unaff_x22;
  cVar2 = *(char *)(unaff_x19 + 0x6e);
  *(byte *)(unaff_x19 + 0x6d) = bVar4 & 1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar5 = *unaff_x22;
  }
  puVar8 = *(undefined8 **)(lVar5 + 0xb8);
  lVar9 = puVar8[0x13];
  if (lVar9 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar8 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar10 = *puVar8;
    lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6ca0);
    FUN_04962b78(lVar9,uVar10,*(undefined8 *)PTR_DAT_084b6d10,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x98);
    *plVar6 = lVar9;
    thunk_FUN_03afed3c(plVar6,lVar9);
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  bVar4 = FUN_045b08cc(lVar9,*unaff_x26);
  *(byte *)(unaff_x19 + 0x6e) = cVar2 != '\0' | bVar4 & 1;
  if (*(char *)(unaff_x19 + 0x70) == '\0') {
    lVar5 = *unaff_x22;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar5 = *unaff_x22;
    }
    puVar8 = *(undefined8 **)(lVar5 + 0xb8);
    lVar9 = puVar8[0x14];
    if (lVar9 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar8 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar10 = *puVar8;
      lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6ca0);
      FUN_04962b78(lVar9,uVar10,*(undefined8 *)PTR_DAT_084b6d18,0);
      plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0xa0);
      *plVar6 = lVar9;
      thunk_FUN_03afed3c(plVar6,lVar9);
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    bVar4 = FUN_045b08cc(lVar9,*unaff_x26);
  }
  else {
    bVar4 = 1;
  }
  *(byte *)(unaff_x19 + 0x70) = bVar4 & 1;
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    FUN_07cb2910(*(long *)(unaff_x19 + 0x78),0);
    uVar7 = FUN_06960908();
    bVar3 = (uVar7 & 1) == 0;
    lVar5 = 0x3c;
    if (bVar3) {
      lVar5 = 0x2c;
    }
    lVar9 = 0x2c;
    if (bVar3) {
      lVar9 = 0x3c;
    }
    lVar1 = 0x40;
    if (bVar3) {
      lVar1 = 0x30;
    }
    *(undefined4 *)(unaff_x19 + 0x34) = *(undefined4 *)(unaff_x19 + lVar5);
    *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(unaff_x19 + lVar1);
    if (bVar3) {
      unaff_x24 = unaff_x25;
    }
    *(undefined4 *)(unaff_x19 + 0x44) = *(undefined4 *)(unaff_x19 + lVar9);
    *(undefined4 *)(unaff_x19 + 0x48) = *unaff_x24;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


