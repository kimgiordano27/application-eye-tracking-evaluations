/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetDrawCount
ENTRY_POINT: 057bd1f0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetDrawCount(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  void *pvVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  size_t unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  void *__dest;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined4 uVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x128);
  uVar2 = *puVar7;
  *(undefined8 *)(unaff_x29 + -0x40) = unaff_x27;
  (*(code *)puVar7[2])(uVar2);
  plVar14 = (long *)**(undefined8 **)(unaff_x29 + -0x38);
  if (plVar14 != (long *)0x0) {
    lVar8 = *(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x88);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02feb2c4(lVar8);
    }
    lVar10 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_057bd288;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02feb5b8(plVar14,lVar8,1);
LAB_057bd288:
    uVar2 = (*(code *)*puVar7)(plVar14,puVar7[1]);
    pcVar3 = (char *)thunk_FUN_02fdd5fc();
    cVar1 = *pcVar3;
    uVar15 = FUN_048231a4(unaff_x29 + -0x48,*(undefined8 *)PTR_DAT_06f9cfd0);
    if (cVar1 == '\0') {
      puVar7 = *(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0x130);
      uVar5 = *puVar7;
      *(undefined4 *)(unaff_x29 + -0x40) = uVar15;
      *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x40;
      *(undefined8 *)(unaff_x29 + -0x30) = uVar2;
      *(undefined8 **)(unaff_x29 + -0x28) = unaff_x22;
      (*(code *)puVar7[2])(uVar5);
      unaff_x28 = unaff_x22;
    }
    else {
      pvVar4 = (void *)thunk_FUN_02fdd5fc();
      memcpy(unaff_x22,pvVar4,unaff_x20);
      puVar9 = *(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0x138);
      uVar5 = *puVar9;
      puVar7 = unaff_x22;
      if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x108) + 0x28)) {
        puVar7 = (undefined8 *)*unaff_x22;
      }
      *(undefined4 *)(unaff_x29 + -0x40) = uVar15;
      *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x40;
      *(undefined8 *)(unaff_x29 + -0x30) = uVar2;
      *(undefined8 **)(unaff_x29 + -0x28) = puVar7;
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x28;
      (*(code *)puVar9[2])(uVar5);
    }
    __dest = *(void **)(unaff_x29 + -0x60);
    memcpy(__dest,unaff_x28,unaff_x20);
    pvVar4 = (void *)thunk_FUN_02fdd5fc();
    memcpy(unaff_x22,pvVar4,unaff_x20);
    lVar12 = *(long *)(*unaff_x21 + 0xc0);
    lVar10 = *(long *)(lVar12 + 0x108);
    lVar8 = lVar10;
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02feb2c4(lVar10);
      lVar12 = *(long *)(*unaff_x21 + 0xc0);
      lVar8 = *(long *)(lVar12 + 0x108);
    }
    uVar2 = *(undefined8 *)(lVar12 + 0x148);
    puVar7 = unaff_x22;
    if (-1 < *(int *)(lVar8 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x22;
    }
    *(undefined8 **)(unaff_x29 + -0x40) = puVar7;
    FUN_02fe9dc8(lVar10,uVar2,*(undefined8 *)(unaff_x29 + -0x68),__dest,unaff_x29 + -0x40,
                 unaff_x29 + -0x38);
    if (*(char *)(unaff_x29 + -0x38) != '\0') {
      pvVar4 = (void *)thunk_FUN_02fdd5fc();
      lVar8 = *(long *)(unaff_x29 + -0x50);
LAB_057bd43c:
      memcpy(unaff_x22,pvVar4,unaff_x20);
      memcpy(*(void **)(unaff_x29 + -0x58),unaff_x22,unaff_x20);
      if (*(long *)(lVar8 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar8 = *(long *)(unaff_x23 + 0x38);
    if (lVar8 != 0) {
      fVar16 = (float)(**(code **)(lVar8 + 0x18))
                                (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      pvVar4 = (void *)thunk_FUN_02fdd5fc();
      memcpy(unaff_x22,pvVar4,unaff_x20);
      lVar12 = *(long *)(*unaff_x21 + 0xc0);
      lVar10 = *(long *)(lVar12 + 0x108);
      lVar8 = lVar10;
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02feb2c4(lVar10);
        lVar12 = *(long *)(*unaff_x21 + 0xc0);
        lVar8 = *(long *)(lVar12 + 0x108);
      }
      uVar2 = *(undefined8 *)(lVar12 + 0x148);
      puVar7 = unaff_x22;
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar7 = (undefined8 *)*unaff_x22;
      }
      *(undefined8 **)(unaff_x29 + -0x40) = puVar7;
      FUN_02fe9dc8(lVar10,uVar2,*(undefined8 *)(unaff_x29 + -0x70),__dest,unaff_x29 + -0x40,
                   unaff_x29 + -0x38);
      if (*(char *)(unaff_x29 + -0x38) == '\0') {
        FUN_02c6ae90((double)fVar16);
        memcpy(unaff_x22,__dest,unaff_x20);
        FUN_02fe9280();
      }
      pdVar6 = (double *)thunk_FUN_02fdd5fc();
      plVar14 = *(long **)(unaff_x23 + 0x40);
      if (plVar14 != (long *)0x0) {
        dVar18 = *pdVar6;
        lVar8 = *(long *)(unaff_x29 + -0x50);
        lVar10 = *(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x28);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_02feb2c4(lVar10);
        }
        lVar12 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_057bd62c;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_02feb5b8(plVar14,lVar10,1);
LAB_057bd62c:
        dVar17 = (double)(*(code *)*puVar7)(plVar14,puVar7[1]);
        if (dVar18 + dVar17 <= (double)fVar16) {
          FUN_02b28244();
          memcpy(unaff_x22,__dest,unaff_x20);
          FUN_02fe9280();
        }
        pvVar4 = (void *)thunk_FUN_02fdd5fc();
        goto LAB_057bd43c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


