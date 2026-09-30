/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector3>
ENTRY_POINT: 04fc1138
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector3>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *unaff_x21;
  long unaff_x22;
  void *pvVar9;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w25;
  size_t unaff_x26;
  void *pvVar10;
  void *pvVar11;
  long unaff_x29;
  float fVar12;
  undefined4 uVar13;
  float unaff_s8;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s12;
  float unaff_s13;
  
  *(undefined8 *)(unaff_x29 + -0xa0) = param_1;
  *(undefined4 **)(unaff_x29 + -0x98) = (undefined4 *)(unaff_x29 + -100);
  *(undefined4 *)(unaff_x29 + -100) = (int)((ulong)param_2 >> 0x20);
  (**(code **)(param_4 + 0x10))(param_3,param_4,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
  fVar14 = *(float *)(unaff_x29 + -0x60);
  fVar15 = *(float *)(unaff_x29 + -0x5c);
  fVar16 = *(float *)(unaff_x29 + -0x58);
  uVar6 = *(undefined8 *)(unaff_x29 + -0x180);
  if (*(char *)(unaff_x22 + 0x8f5) == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    *(undefined1 *)(unaff_x22 + 0x8f5) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar12 = 1.0 / SQRT(fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15);
  fVar14 = fVar14 * fVar12;
  fVar15 = fVar15 * fVar12;
  fVar16 = fVar16 * fVar12;
  *(float *)(unaff_x29 + -0xf0) = fVar14;
  fVar14 = fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15;
  if ((fVar14 == 0.0) || (0x7f800000 < (uint)ABS(fVar14))) {
    lVar7 = *unaff_x23;
    puVar8 = *(undefined8 **)(unaff_x29 + -0xd8);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x170);
    pvVar10 = *(void **)(unaff_x29 + -200);
    if (-1 < *(int *)(*(long *)(lVar7 + 0x28) + 0x28)) {
      pvVar10 = (void *)(unaff_x29 + -200);
    }
    memcpy(puVar8,pvVar10,*(size_t *)(unaff_x29 + -0xe8));
    fVar14 = DAT_01c76534;
    puVar4 = *(undefined8 **)(lVar7 + 0xc0);
    uVar2 = *puVar4;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x28) + 0x28)) {
      puVar8 = (undefined8 *)*puVar8;
    }
    *(undefined8 **)(unaff_x29 + -0xa0) = puVar8;
    *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
    *(float *)(unaff_x29 + -100) = (float)((ulong)uVar6 >> 0x20) + fVar14;
    (*(code *)puVar4[2])(uVar2,puVar4,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
    fVar14 = *(float *)(unaff_x29 + -0x60);
    fVar15 = *(float *)(unaff_x29 + -0x5c);
    fVar16 = *(float *)(unaff_x29 + -0x58);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x180);
    if (*(char *)(unaff_x22 + 0x8f5) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      *(undefined1 *)(unaff_x22 + 0x8f5) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar12 = 1.0 / SQRT(fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15);
    fVar15 = fVar15 * fVar12;
    fVar16 = fVar16 * fVar12;
    *(float *)(unaff_x29 + -0xf0) = fVar14 * fVar12;
  }
  pvVar11 = *(void **)(unaff_x29 + -0x118);
  pvVar10 = *(void **)(unaff_x29 + -0x198);
  if (0 < *(int *)(unaff_x29 + -0xdc)) {
    lVar7 = unaff_x29 + -0x60;
    do {
      puVar8 = *(undefined8 **)(*unaff_x23 + 200);
      pvVar9 = *(void **)(unaff_x29 + -0x128);
      uVar2 = *puVar8;
      *(int *)(unaff_x29 + -0x60) = unaff_w25;
      *(long *)(unaff_x29 + -0xa0) = lVar7;
      *(void **)(unaff_x29 + -0x98) = pvVar9;
      (*(code *)puVar8[2])(uVar2,puVar8,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar9);
      memcpy(pvVar11,pvVar9,unaff_x26);
      puVar8 = *(undefined8 **)(*unaff_x23 + 200);
      pvVar11 = *(void **)(unaff_x29 + -0x130);
      uVar2 = *puVar8;
      *(int *)(unaff_x29 + -0x60) = unaff_w24;
      *(long *)(unaff_x29 + -0xa0) = lVar7;
      *(void **)(unaff_x29 + -0x98) = pvVar11;
      (*(code *)puVar8[2])(uVar2,puVar8,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar11);
      memcpy(pvVar10,pvVar11,unaff_x26);
      fVar14 = -unaff_s12;
      fVar12 = -unaff_s13;
      uVar13 = FUN_08b2f42c(-unaff_s8,0);
      lVar5 = *unaff_x23;
      lVar3 = *(long *)(lVar5 + 0xd0);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
        lVar5 = *unaff_x23;
      }
      uVar2 = *(undefined8 *)(lVar5 + 0xd8);
      *(undefined4 *)(unaff_x29 + -0xa0) = uVar13;
      *(float *)(unaff_x29 + -0x9c) = fVar14;
      *(float *)(unaff_x29 + -0x98) = fVar12;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0xa0;
      FUN_0444872c(lVar3,uVar2,*(undefined8 *)(unaff_x29 + -0x120),
                   *(undefined8 *)(unaff_x29 + -0x118),unaff_x29 + -0x60,unaff_x29 + -0xa0);
      fVar14 = fVar15;
      fVar12 = fVar16;
      uVar13 = FUN_08b2f42c(*(undefined4 *)(unaff_x29 + -0xf0),0);
      lVar5 = *unaff_x23;
      lVar3 = *(long *)(lVar5 + 0xd0);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
        lVar5 = *unaff_x23;
      }
      uVar2 = *(undefined8 *)(lVar5 + 0xd8);
      *(undefined4 *)(unaff_x29 + -0xa0) = uVar13;
      *(float *)(unaff_x29 + -0x9c) = fVar14;
      *(float *)(unaff_x29 + -0x98) = fVar12;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0xa0;
      FUN_0444872c(lVar3,uVar2,uVar6,pvVar10,unaff_x29 + -0x60,unaff_x29 + -0xa0);
      pvVar9 = *(void **)(unaff_x29 + -0x138);
      pvVar11 = *(void **)(unaff_x29 + -0x118);
      memcpy(pvVar9,pvVar11,unaff_x26);
      puVar8 = *(undefined8 **)(*unaff_x23 + 0xe0);
      uVar2 = *puVar8;
      *(int *)(unaff_x29 + -0x60) = unaff_w25;
      *(long *)(unaff_x29 + -0xa0) = lVar7;
      *(void **)(unaff_x29 + -0x98) = pvVar9;
      (*(code *)puVar8[2])(uVar2,puVar8,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar9);
      pvVar9 = *(void **)(unaff_x29 + -0x140);
      memcpy(pvVar9,pvVar10,unaff_x26);
      puVar8 = *(undefined8 **)(*unaff_x23 + 0xe0);
      uVar2 = *puVar8;
      *(int *)(unaff_x29 + -0x60) = unaff_w24;
      *(long *)(unaff_x29 + -0xa0) = lVar7;
      *(void **)(unaff_x29 + -0x98) = pvVar9;
      (*(code *)puVar8[2])(uVar2,puVar8,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar9);
      unaff_w24 = unaff_w24 + 1;
      unaff_w25 = unaff_w25 + 1;
      iVar1 = *(int *)(unaff_x29 + -0xdc) + -1;
      *(int *)(unaff_x29 + -0xdc) = iVar1;
    } while (iVar1 != 0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x158) + 0x28) == *(long *)(unaff_x29 + -0x50)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


