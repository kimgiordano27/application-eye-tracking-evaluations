/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.CircularPool<object>$$get_CountAll
ENTRY_POINT: 05295c9c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_CircularPool<object>__get_CountAll
               (void *param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  code *pcVar13;
  int *piVar14;
  size_t unaff_x20;
  undefined8 *unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  memcpy(param_1,param_2,param_3);
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x20) == '\0') {
    memcpy(unaff_x21,unaff_x22,unaff_x20);
    uVar5 = FUN_03642bb8(*(undefined8 *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90));
    if ((uVar5 & 1) != 0) {
      memcpy(unaff_x21,unaff_x22,unaff_x20);
      lVar4 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      puVar11 = *(undefined8 **)(lVar4 + 0xc0);
      uVar7 = *puVar11;
      puVar9 = unaff_x21;
      if (-1 < *(int *)(*(long *)(lVar4 + 0x90) + 0x28)) {
        puVar9 = (undefined8 *)*unaff_x21;
      }
      pcVar13 = (code *)puVar11[2];
      *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
      *(undefined8 *)(unaff_x29 + -0x10) = unaff_x27;
      (*pcVar13)(uVar7);
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xb0))();
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x23) != '\0') {
        memcpy(unaff_x21,unaff_x22,unaff_x20);
        uVar7 = thunk_FUN_0367fa58(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90));
        puVar2 = PTR_DAT_07a01ed0;
        if (unaff_x24 == 0) {
          if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          goto LAB_05296794;
        }
        uVar1 = *(undefined8 *)(unaff_x24 + 0x20);
        uVar12 = *(undefined8 *)PTR_DAT_07a01ed0;
        *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x24 + 0x28);
        *(undefined8 *)(unaff_x29 + -0x48) = uVar1;
        lVar4 = thunk_FUN_0367fd24(uVar7,uVar12);
        if (lVar4 == 0) {
          if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          goto LAB_05296794;
        }
        lVar6 = *(long *)puVar2;
        plVar8 = (long *)thunk_FUN_0367fd24(uVar7,lVar6);
        lVar4 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar14 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar6) {
              puVar9 = (undefined8 *)(lVar4 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05295ea0;
            }
            uVar5 = uVar5 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar5 != 0);
        }
        puVar9 = (undefined8 *)FUN_0367cd30(plVar8,lVar6,0);
LAB_05295ea0:
        uVar7 = (*(code *)*puVar9)(plVar8,*(undefined8 *)(unaff_x29 + -0x48),
                                   *(undefined8 *)(unaff_x29 + -0x50),puVar9[1]);
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0367c9fc(lVar4);
        }
        pvVar10 = (void *)FUN_03642af0(uVar7,lVar4,*(undefined8 *)(unaff_x29 + -0x30));
        memcpy(unaff_x22,pvVar10,unaff_x20);
        memmove(unaff_x28,pvVar10,unaff_x20);
        lVar4 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
        puVar9 = *(undefined8 **)(lVar4 + 0xc0);
        uVar7 = *puVar9;
        if (-1 < *(int *)(*(long *)(lVar4 + 0x90) + 0x28)) {
          unaff_x28 = (undefined8 *)*unaff_x28;
        }
        pcVar13 = (code *)puVar9[2];
        *(undefined8 **)(unaff_x29 + -0x18) = unaff_x28;
        *(undefined8 *)(unaff_x29 + -0x10) = unaff_x27;
        (*pcVar13)(uVar7);
      }
    }
  }
  else {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xb0))();
  }
  (**(code **)(*unaff_x26 + 0x1d8))();
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x20) != '\0') {
LAB_05295fd0:
    puVar3 = PTR_DAT_07a01ed8;
    puVar2 = PTR_DAT_07a00e20;
    uVar5 = 0;
    do {
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
      if (lVar4 == 0) {
LAB_05296748:
        if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_05296794;
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
      if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar5) {
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0367c9fc();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        lVar6 = *(long *)(unaff_x23 + 0x20);
        lVar4 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0367c9fc();
          lVar6 = *(long *)(unaff_x23 + 0x20);
        }
        if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x22) == '\0') goto LAB_052962f4;
        memcpy(unaff_x21,unaff_x22,unaff_x20);
        uVar7 = thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x90));
        plVar8 = (long *)thunk_FUN_0367fd24(uVar7,*(undefined8 *)puVar2);
        if (plVar8 == (long *)0x0) goto LAB_05296748;
        lVar6 = *plVar8;
        lVar4 = *(long *)puVar2;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 == 0) goto LAB_05296284;
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_0529626c;
      }
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
      if (lVar4 == 0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_05296794;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
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
      if (*(long *)(lVar4 + uVar5 * 8 + 0x20) == 0) goto LAB_0529612c;
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xd0))();
      uVar5 = uVar5 + 1;
    } while( true );
  }
  memcpy(unaff_x21,unaff_x22,unaff_x20);
  uVar5 = FUN_03642bb8(*(undefined8 *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90));
  if ((uVar5 & 1) != 0) goto LAB_05295fd0;
  goto LAB_05296410;
LAB_0529612c:
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  goto LAB_05296794;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar14 = piVar14 + 4;
    if (uVar5 == 0) break;
LAB_0529626c:
    if (*(long *)(piVar14 + -2) == lVar4) {
      puVar9 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_052962a0;
    }
  }
LAB_05296284:
  puVar9 = (undefined8 *)FUN_0367cd30(plVar8,lVar4,0);
LAB_052962a0:
  (*(code *)*puVar9)(plVar8);
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
  }
  pvVar10 = (void *)FUN_03642af0(plVar8,lVar4,*(undefined8 *)(unaff_x29 + -0x30));
  memcpy(unaff_x22,pvVar10,unaff_x20);
  lVar6 = *(long *)(unaff_x23 + 0x20);
LAB_052962f4:
  lVar4 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x21) != '\0') {
    memcpy(unaff_x21,unaff_x22,unaff_x20);
    uVar7 = thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90)
                              );
    plVar8 = (long *)thunk_FUN_0367fd24(uVar7,*(undefined8 *)puVar3);
    if (plVar8 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_05296794;
    }
    lVar6 = *plVar8;
    lVar4 = *(long *)puVar3;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar4) {
          puVar9 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_052963c4;
        }
        uVar5 = uVar5 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar5 != 0);
    }
    puVar9 = (undefined8 *)FUN_0367cd30(plVar8,lVar4,1);
LAB_052963c4:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc(lVar4);
    }
    pvVar10 = (void *)FUN_03642af0(plVar8,lVar4,*(undefined8 *)(unaff_x29 + -0x30));
    memcpy(unaff_x22,pvVar10,unaff_x20);
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


