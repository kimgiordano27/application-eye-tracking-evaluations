/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.CircularPool<object>$$Release
ENTRY_POINT: 05295efc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_CircularPool<object>__Release(void *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  int *piVar11;
  void *unaff_x19;
  size_t unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  memmove(param_1,unaff_x19,unaff_x20);
  lVar9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  puVar8 = *(undefined8 **)(lVar9 + 0xc0);
  uVar3 = *puVar8;
  if (-1 < *(int *)(*(long *)(lVar9 + 0x90) + 0x28)) {
    unaff_x28 = (undefined8 *)*unaff_x28;
  }
  pcVar10 = (code *)puVar8[2];
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x28;
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x27;
  (*pcVar10)(uVar3);
  (**(code **)(*unaff_x26 + 0x1d8))();
  lVar9 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0367c9fc();
  }
                    /* try { // try from 05295f74 to 05395fcf has its CatchHandler @ 05296104 */
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar9 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0367c9fc();
  }
  if (*(char *)(*(long *)(lVar9 + 0xb8) + 0x20) != '\0') {
LAB_05295fd0:
                    /* try { // try from 05295fd0 to 05396053 has its CatchHandler @ 05295ea4 */
    puVar2 = PTR_DAT_07a01ed8;
    puVar1 = PTR_DAT_07a00e20;
    uVar4 = 0;
    do {
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0367c9fc();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0367c9fc();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
      if (lVar9 == 0) {
LAB_05296748:
        if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_05296794;
      }
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
                    /* try { // try from 05296054 to 05396063 has its CatchHandler @ 05296104 */
      if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar4) {
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0367c9fc();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        lVar5 = *(long *)(unaff_x23 + 0x20);
        lVar9 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0367c9fc();
          lVar5 = *(long *)(unaff_x23 + 0x20);
        }
        if (*(char *)(*(long *)(lVar9 + 0xb8) + 0x22) == '\0') goto LAB_052962f4;
        memcpy(unaff_x21,unaff_x22,unaff_x20);
        uVar3 = thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x90));
        plVar6 = (long *)thunk_FUN_0367fd24(uVar3,*(undefined8 *)puVar1);
        if (plVar6 == (long *)0x0) goto LAB_05296748;
        lVar5 = *plVar6;
        lVar9 = *(long *)puVar1;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 == 0) goto LAB_05296284;
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_0529626c;
      }
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
                    /* try { // try from 05296084 to 053960ab has its CatchHandler @ 052960fc */
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0367c9fc();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
      if (lVar9 == 0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_05296794;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar4) {
        if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        goto LAB_05296794;
      }
      if (unaff_x24 == 0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_05296794;
      }
      if (*(long *)(lVar9 + uVar4 * 8 + 0x20) == 0) goto LAB_0529612c;
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xd0))();
      uVar4 = uVar4 + 1;
    } while( true );
  }
  memcpy(unaff_x21,unaff_x22,unaff_x20);
  uVar4 = FUN_03642bb8(*(undefined8 *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90));
  if ((uVar4 & 1) != 0) goto LAB_05295fd0;
  goto LAB_05296410;
LAB_0529612c:
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  goto LAB_05296794;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar11 = piVar11 + 4;
    if (uVar4 == 0) break;
LAB_0529626c:
    if (*(long *)(piVar11 + -2) == lVar9) {
      puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_052962a0;
    }
  }
LAB_05296284:
  puVar8 = (undefined8 *)FUN_0367cd30(plVar6,lVar9,0);
LAB_052962a0:
  (*(code *)*puVar8)(plVar6);
  lVar9 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0367c9fc(lVar9);
  }
  pvVar7 = (void *)FUN_03642af0(plVar6,lVar9,*(undefined8 *)(unaff_x29 + -0x30));
  memcpy(unaff_x22,pvVar7,unaff_x20);
  lVar5 = *(long *)(unaff_x23 + 0x20);
LAB_052962f4:
  lVar9 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0367c9fc();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar9 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0367c9fc();
  }
  if (*(char *)(*(long *)(lVar9 + 0xb8) + 0x21) != '\0') {
    memcpy(unaff_x21,unaff_x22,unaff_x20);
    uVar3 = thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90)
                              );
    plVar6 = (long *)thunk_FUN_0367fd24(uVar3,*(undefined8 *)puVar2);
    if (plVar6 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_05296794;
    }
    lVar5 = *plVar6;
    lVar9 = *(long *)puVar2;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar9) {
          puVar8 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_052963c4;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar8 = (undefined8 *)FUN_0367cd30(plVar6,lVar9,1);
LAB_052963c4:
    (*(code *)*puVar8)(plVar6,puVar8[1]);
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0367c9fc(lVar9);
    }
    pvVar7 = (void *)FUN_03642af0(plVar6,lVar9,*(undefined8 *)(unaff_x29 + -0x30));
    memcpy(unaff_x22,pvVar7,unaff_x20);
  }
LAB_05296410:
  memcpy(unaff_x21,unaff_x22,unaff_x20);
  memcpy(*(void **)(unaff_x29 + -0x40),unaff_x22,unaff_x20);
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_05296794:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


