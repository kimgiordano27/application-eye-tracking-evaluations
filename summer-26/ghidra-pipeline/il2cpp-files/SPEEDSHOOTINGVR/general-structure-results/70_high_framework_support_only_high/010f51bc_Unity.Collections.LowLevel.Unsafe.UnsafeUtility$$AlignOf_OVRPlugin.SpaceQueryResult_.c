/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$AlignOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 010f51bc
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


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__AlignOf<OVRPlugin_SpaceQueryResult>
               (long param_1)

{
  void *__src;
  ushort uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar9;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  undefined8 uVar12;
  long unaff_x29;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  *(undefined8 *)(unaff_x29 + -0x68) = unaff_x28;
  uVar3 = FUN_01db637c(0);
  if ((uVar3 & 1) != 0) {
    uVar10 = *unaff_x23;
    uVar12 = *(undefined8 *)PTR_DAT_0234bca0;
    uVar4 = (**(code **)(*unaff_x24 + 0x168))();
    uVar4 = FUN_01c45a74(uVar12,uVar4,0);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x21);
    }
    FUN_01db6384(0,uVar10,uVar4,0,0);
  }
  uVar4 = *unaff_x23;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  if (DAT_0247b0d0 == '\0') {
    FUN_00fdc2e4(PTR_DAT_0234bc90);
    FUN_00fdc2e4(PTR_DAT_0234bca8);
    DAT_0247b0d0 = '\x01';
  }
  puVar2 = PTR_DAT_0234bca8;
  lVar5 = *(long *)PTR_DAT_0234bca8;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar5 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01db642c(uVar4,0);
  }
  __src = *(void **)(unaff_x29 + -0x40);
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x28)) {
    __src = (void *)(unaff_x29 + -0x30);
  }
  memcpy(unaff_x20,__src,*(size_t *)(unaff_x29 + -0x48));
  uVar4 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234bc88);
  FUN_01c67234();
  puVar7 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x28);
  uVar10 = *puVar7;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x28)) {
    unaff_x20 = (undefined8 *)*unaff_x20;
  }
  *(undefined8 **)(unaff_x29 + -0x28) = unaff_x20;
  *(undefined8 *)(unaff_x29 + -0x20) = uVar4;
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x38);
  (*(code *)puVar7[2])(uVar10);
  plVar9 = *(long **)(unaff_x29 + -0x10);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar5 = *plVar9;
  uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0234bc98) {
        puVar7 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto FUN_010f53a4;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar7 = (undefined8 *)FUN_0103c348(plVar9,*(long *)PTR_DAT_0234bc98,3);
FUN_010f53a4:
  uVar3 = (*(code *)*puVar7)(plVar9,puVar7[1]);
  if ((uVar3 & 1) != 0) {
    lVar6 = *(long *)(unaff_x19 + 0x20);
    uVar10 = *unaff_x22;
    uVar4 = *unaff_x27;
    uVar12 = *unaff_x23;
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0103c244();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar6 + 0x135);
    }
    pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_0103c244();
    }
    (*pcVar11)(plVar9,uVar10,uVar4,uVar12,0,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x50));
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*unaff_x23);
  }
  return;
}


