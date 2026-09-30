/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetColors
ENTRY_POINT: 057bd310
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetColors
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  double *pdVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long in_x9;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 unaff_x19;
  long *plVar10;
  size_t unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  void *__dest;
  void *unaff_x28;
  long unaff_x29;
  float fVar11;
  double dVar12;
  undefined4 unaff_s8;
  double dVar13;
  
  uVar1 = *param_3;
  if (-1 < *(int *)(in_x9 + 0x28)) {
    param_1 = *unaff_x22;
  }
  *(undefined4 *)(unaff_x29 + -0x40) = unaff_s8;
  *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x40;
  *(undefined8 *)(unaff_x29 + -0x30) = unaff_x19;
  *(undefined8 *)(unaff_x29 + -0x28) = param_1;
  *(void **)(unaff_x29 + -0x20) = unaff_x28;
  (*(code *)param_3[2])(uVar1);
  __dest = *(void **)(unaff_x29 + -0x60);
  memcpy(__dest,unaff_x28,unaff_x20);
  pvVar2 = (void *)thunk_FUN_02fdd5fc();
  memcpy(unaff_x22,pvVar2,unaff_x20);
  lVar7 = *(long *)(*unaff_x21 + 0xc0);
  lVar4 = *(long *)(lVar7 + 0x108);
  lVar6 = lVar4;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4(lVar4);
    lVar7 = *(long *)(*unaff_x21 + 0xc0);
    lVar6 = *(long *)(lVar7 + 0x108);
  }
  uVar1 = *(undefined8 *)(lVar7 + 0x148);
  puVar5 = unaff_x22;
  if (-1 < *(int *)(lVar6 + 0x28)) {
    puVar5 = (undefined8 *)*unaff_x22;
  }
  *(undefined8 **)(unaff_x29 + -0x40) = puVar5;
  FUN_02fe9dc8(lVar4,uVar1,*(undefined8 *)(unaff_x29 + -0x68),__dest,unaff_x29 + -0x40,
               unaff_x29 + -0x38);
  if (*(char *)(unaff_x29 + -0x38) != '\0') {
    pvVar2 = (void *)thunk_FUN_02fdd5fc();
    lVar4 = *(long *)(unaff_x29 + -0x50);
LAB_057bd43c:
    memcpy(unaff_x22,pvVar2,unaff_x20);
    memcpy(*(void **)(unaff_x29 + -0x58),unaff_x22,unaff_x20);
    if (*(long *)(lVar4 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar6 = *(long *)(unaff_x23 + 0x38);
  if (lVar6 != 0) {
    fVar11 = (float)(**(code **)(lVar6 + 0x18))
                              (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
    pvVar2 = (void *)thunk_FUN_02fdd5fc();
    memcpy(unaff_x22,pvVar2,unaff_x20);
    lVar7 = *(long *)(*unaff_x21 + 0xc0);
    lVar4 = *(long *)(lVar7 + 0x108);
    lVar6 = lVar4;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
      lVar7 = *(long *)(*unaff_x21 + 0xc0);
      lVar6 = *(long *)(lVar7 + 0x108);
    }
    uVar1 = *(undefined8 *)(lVar7 + 0x148);
    puVar5 = unaff_x22;
    if (-1 < *(int *)(lVar6 + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x22;
    }
    *(undefined8 **)(unaff_x29 + -0x40) = puVar5;
    FUN_02fe9dc8(lVar4,uVar1,*(undefined8 *)(unaff_x29 + -0x70),__dest,unaff_x29 + -0x40,
                 unaff_x29 + -0x38);
    if (*(char *)(unaff_x29 + -0x38) == '\0') {
      FUN_02c6ae90((double)fVar11);
      memcpy(unaff_x22,__dest,unaff_x20);
      FUN_02fe9280();
    }
    pdVar3 = (double *)thunk_FUN_02fdd5fc();
    plVar10 = *(long **)(unaff_x23 + 0x40);
    if (plVar10 != (long *)0x0) {
      dVar13 = *pdVar3;
      lVar4 = *(long *)(unaff_x29 + -0x50);
      lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x28);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02feb2c4(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_057bd62c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02feb5b8(plVar10,lVar6,1);
LAB_057bd62c:
      dVar12 = (double)(*(code *)*puVar5)(plVar10,puVar5[1]);
      if (dVar13 + dVar12 <= (double)fVar11) {
        FUN_02b28244();
        memcpy(unaff_x22,__dest,unaff_x20);
        FUN_02fe9280();
      }
      pvVar2 = (void *)thunk_FUN_02fdd5fc();
      goto LAB_057bd43c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


