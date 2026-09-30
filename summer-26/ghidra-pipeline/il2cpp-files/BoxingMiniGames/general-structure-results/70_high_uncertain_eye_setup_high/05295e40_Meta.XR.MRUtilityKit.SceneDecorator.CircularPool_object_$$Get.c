/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.CircularPool<object>$$Get
ENTRY_POINT: 05295e40
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_CircularPool<object>__Get(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  int *piVar10;
  size_t unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long lVar11;
  long *unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  lVar11 = *unaff_x25;
  plVar3 = (long *)thunk_FUN_0367fd24();
  lVar7 = *plVar3;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar11) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05295ea0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_0367cd30(plVar3,lVar11,0);
LAB_05295ea0:
                    /* try { // try from 05295ea4 to 05395f73 has its CatchHandler @ 05295ea4
                       catch() { ... } // from try @ 05295ea4 with catch @ 05295ea4
                       catch() { ... } // from try @ 05295fd0 with catch @ 05295ea4
                       catch() { ... } // from try @ 052960e0 with catch @ 05295ea4
                       catch() { ... } // from try @ 05296134 with catch @ 05295ea4
                       catch() { ... } // from try @ 0529638c with catch @ 05295ea4 */
  uVar5 = (*(code *)*puVar4)(plVar3,*(undefined8 *)(unaff_x29 + -0x48),
                             *(undefined8 *)(unaff_x29 + -0x50),puVar4[1]);
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc(lVar7);
  }
  pvVar6 = (void *)FUN_03642af0(uVar5,lVar7,*(undefined8 *)(unaff_x29 + -0x30));
  memcpy(unaff_x22,pvVar6,unaff_x20);
  memmove(unaff_x28,pvVar6,unaff_x20);
  lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  puVar4 = *(undefined8 **)(lVar7 + 0xc0);
  uVar5 = *puVar4;
  if (-1 < *(int *)(*(long *)(lVar7 + 0x90) + 0x28)) {
    unaff_x28 = (undefined8 *)*unaff_x28;
  }
  pcVar8 = (code *)puVar4[2];
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x28;
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x27;
  (*pcVar8)(uVar5);
  (**(code **)(*unaff_x26 + 0x1d8))();
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x20) != '\0') {
LAB_05295fd0:
    puVar2 = PTR_DAT_07a01ed8;
    puVar1 = PTR_DAT_07a00e20;
    uVar9 = 0;
    do {
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0367c9fc();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0367c9fc();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
      if (lVar7 == 0) {
LAB_05296748:
        if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_05296794;
      }
      lVar11 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
      if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar9) {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0367c9fc();
        }
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        lVar11 = *(long *)(unaff_x23 + 0x20);
        lVar7 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0367c9fc();
          lVar11 = *(long *)(unaff_x23 + 0x20);
        }
        if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x22) == '\0') goto LAB_052962f4;
        memcpy(unaff_x21,unaff_x22,unaff_x20);
        uVar5 = thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x90));
        plVar3 = (long *)thunk_FUN_0367fd24(uVar5,*(undefined8 *)puVar1);
        if (plVar3 == (long *)0x0) goto LAB_05296748;
        lVar11 = *plVar3;
        lVar7 = *(long *)puVar1;
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar9 == 0) goto LAB_05296284;
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0529626c;
      }
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0367c9fc();
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0367c9fc();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
      if (lVar7 == 0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_05296794;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar9) {
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
      if (*(long *)(lVar7 + uVar9 * 8 + 0x20) == 0) goto LAB_0529612c;
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xd0))();
      uVar9 = uVar9 + 1;
    } while( true );
  }
  memcpy(unaff_x21,unaff_x22,unaff_x20);
  uVar9 = FUN_03642bb8(*(undefined8 *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90));
  if ((uVar9 & 1) != 0) goto LAB_05295fd0;
  goto LAB_05296410;
LAB_0529612c:
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  goto LAB_05296794;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0529626c:
    if (*(long *)(piVar10 + -2) == lVar7) {
      puVar4 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_052962a0;
    }
  }
LAB_05296284:
  puVar4 = (undefined8 *)FUN_0367cd30(plVar3,lVar7,0);
LAB_052962a0:
  (*(code *)*puVar4)(plVar3);
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc(lVar7);
  }
  pvVar6 = (void *)FUN_03642af0(plVar3,lVar7,*(undefined8 *)(unaff_x29 + -0x30));
  memcpy(unaff_x22,pvVar6,unaff_x20);
  lVar11 = *(long *)(unaff_x23 + 0x20);
LAB_052962f4:
  lVar7 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x21) != '\0') {
    memcpy(unaff_x21,unaff_x22,unaff_x20);
    uVar5 = thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90)
                              );
    plVar3 = (long *)thunk_FUN_0367fd24(uVar5,*(undefined8 *)puVar2);
    if (plVar3 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_05296794;
    }
    lVar11 = *plVar3;
    lVar7 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar11 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_052963c4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30(plVar3,lVar7,1);
LAB_052963c4:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc(lVar7);
    }
    pvVar6 = (void *)FUN_03642af0(plVar3,lVar7,*(undefined8 *)(unaff_x29 + -0x30));
    memcpy(unaff_x22,pvVar6,unaff_x20);
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


