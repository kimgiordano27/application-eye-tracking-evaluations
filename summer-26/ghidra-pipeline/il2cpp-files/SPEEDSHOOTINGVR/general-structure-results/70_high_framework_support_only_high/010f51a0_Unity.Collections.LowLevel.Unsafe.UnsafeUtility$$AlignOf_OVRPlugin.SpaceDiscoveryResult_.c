/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$AlignOf<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 010f51a0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__AlignOf<OVRPlugin_SpaceDiscoveryResult>(void)

{
  void *__src;
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar10;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *puVar11;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  undefined8 uVar14;
  long unaff_x29;
  
  puVar11 = (undefined8 *)(unaff_x23 + 0x20);
  *puVar11 = unaff_x25;
  thunk_FUN_0106e12c(puVar11);
  puVar2 = PTR_DAT_0234bc90;
  if (*(int *)(*(long *)PTR_DAT_0234bc90 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  *(undefined8 *)(unaff_x29 + -0x68) = unaff_x28;
  uVar4 = FUN_01db637c(0);
  if ((uVar4 & 1) != 0) {
    uVar12 = *puVar11;
    uVar14 = *(undefined8 *)PTR_DAT_0234bca0;
    uVar5 = (**(code **)(*unaff_x24 + 0x168))();
    uVar5 = FUN_01c45a74(uVar14,uVar5,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14(*(long *)puVar2);
    }
    FUN_01db6384(0,uVar12,uVar5,0,0);
  }
  uVar5 = *puVar11;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  if (DAT_0247b0d0 == '\0') {
    FUN_00fdc2e4(PTR_DAT_0234bc90);
    FUN_00fdc2e4(PTR_DAT_0234bca8);
    DAT_0247b0d0 = '\x01';
  }
  puVar3 = PTR_DAT_0234bca8;
  lVar6 = *(long *)PTR_DAT_0234bca8;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar6 = *(long *)puVar3;
  }
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01db642c(uVar5,0);
  }
  __src = *(void **)(unaff_x29 + -0x40);
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x28)) {
    __src = (void *)(unaff_x29 + -0x30);
  }
  memcpy(unaff_x20,__src,*(size_t *)(unaff_x29 + -0x48));
  uVar5 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234bc88);
  FUN_01c67234();
  puVar8 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x28);
  uVar12 = *puVar8;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x28)) {
    unaff_x20 = (undefined8 *)*unaff_x20;
  }
  *(undefined8 **)(unaff_x29 + -0x28) = unaff_x20;
  *(undefined8 *)(unaff_x29 + -0x20) = uVar5;
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x38);
  (*(code *)puVar8[2])(uVar12);
  plVar10 = *(long **)(unaff_x29 + -0x10);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar6 = *plVar10;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0234bc98) {
        puVar8 = (undefined8 *)(lVar6 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto FUN_010f53a4;
      }
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar4 != 0);
  }
  puVar8 = (undefined8 *)FUN_0103c348(plVar10,*(long *)PTR_DAT_0234bc98,3);
FUN_010f53a4:
  uVar4 = (*(code *)*puVar8)(plVar10,puVar8[1]);
  if ((uVar4 & 1) != 0) {
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar12 = *unaff_x22;
    uVar5 = *unaff_x27;
    uVar14 = *puVar11;
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar6 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_0103c244();
      lVar7 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar7 + 0x135);
    }
    pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_0103c244();
    }
    (*pcVar13)(plVar10,uVar12,uVar5,uVar14,0,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x50));
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*puVar11);
  }
  return;
}


