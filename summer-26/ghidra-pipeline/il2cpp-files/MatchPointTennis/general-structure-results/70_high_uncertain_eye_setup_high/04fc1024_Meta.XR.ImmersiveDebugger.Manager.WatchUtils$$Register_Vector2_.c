/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector2>
ENTRY_POINT: 04fc1024
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector2>
               (long param_1,void *param_2,undefined8 param_3,size_t param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  void *in_x9;
  long unaff_x19;
  long lVar8;
  undefined8 *unaff_x20;
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
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
                    /* try { // try from 04fc102c to 050c103b has its CatchHandler @ 04fc1058 */
  if (-1 < *(int *)(param_1 + 0x28)) {
    in_x9 = (void *)(unaff_x29 + -200);
  }
  memcpy(param_2,in_x9,param_4);
  fVar15 = DAT_01c759cc;
                    /* try { // try from 04fc103c to 050c104f has its CatchHandler @ 04fc0a54 */
  puVar5 = *(undefined8 **)(unaff_x19 + 0xc0);
  uVar2 = *puVar5;
  if (-1 < *(int *)(*(long *)(unaff_x19 + 0x28) + 0x28)) {
                    /* try { // try from 04fc1050 to 050c1053 has its CatchHandler @ 04fc10a0 */
    unaff_x20 = (undefined8 *)*unaff_x20;
  }
                    /* try { // try from 04fc1054 to 050c1057 has its CatchHandler @ 04fc1058 */
                    /* catch() { ... } // from try @ 04fc0f88 with catch @ 04fc1058
                       catch() { ... } // from try @ 04fc102c with catch @ 04fc1058
                       catch() { ... } // from try @ 04fc1054 with catch @ 04fc1058
                       try { // try from 04fc1058 to 050c106f has its CatchHandler @ 04fc0a54 */
  *(undefined8 **)(unaff_x29 + -0xa0) = unaff_x20;
  *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
                    /* try { // try from 04fc1070 to 050c1073 has its CatchHandler @ 04fc1084 */
  *(float *)(unaff_x29 + -100) = (float)*(undefined8 *)(unaff_x29 + -0x170) + fVar15;
                    /* catch() { ... } // from try @ 04fc1070 with catch @ 04fc1084 */
  (*(code *)puVar5[2])(uVar2,puVar5,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
                    /* try { // try from 04fc1088 to 050c109f has its CatchHandler @ 04fc1100 */
  fVar15 = *(float *)(unaff_x29 + -0x60);
  fVar16 = *(float *)(unaff_x29 + -0x5c);
  fVar18 = *(float *)(unaff_x29 + -0x58);
  if (*(char *)(unaff_x22 + 0x8f5) == '\0') {
                    /* catch() { ... } // from try @ 04fc0f04 with catch @ 04fc10a0
                       catch() { ... } // from try @ 04fc1004 with catch @ 04fc10a0
                       catch() { ... } // from try @ 04fc1050 with catch @ 04fc10a0
                       try { // try from 04fc10a0 to 050c10b7 has its CatchHandler @ 04fc0a54 */
    FUN_04447ba8(PTR_DAT_09f1e748);
    *(undefined1 *)(unaff_x22 + 0x8f5) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    /* try { // try from 04fc10b8 to 050c10bb has its CatchHandler @ 04fc10dc */
    thunk_FUN_044a54b4();
  }
                    /* try { // try from 04fc10bc to 050c10df has its CatchHandler @ 04fc0a54 */
  fVar12 = 1.0 / SQRT(fVar18 * fVar18 + fVar15 * fVar15 + fVar16 * fVar16);
                    /* catch() { ... } // from try @ 04fc10b8 with catch @ 04fc10dc */
                    /* try { // try from 04fc10e0 to 050c10eb has its CatchHandler @ 04fc1100 */
  lVar8 = *unaff_x23;
                    /* try { // try from 04fc10ec to 050c10f7 has its CatchHandler @ 04fc0a54 */
  puVar5 = *(undefined8 **)(unaff_x29 + -0xd8);
                    /* try { // try from 04fc10f8 to 050c10ff has its CatchHandler @ 04fc1100 */
                    /* catch() { ... } // from try @ 04fc1088 with catch @ 04fc1100
                       catch() { ... } // from try @ 04fc10e0 with catch @ 04fc1100
                       catch() { ... } // from try @ 04fc10f8 with catch @ 04fc1100 */
                    /* try { // try from 04fc1104 to 050c15b3 has its CatchHandler @ 04fc1104
                       catch() { ... } // from try @ 04fc1104 with catch @ 04fc1104
                       catch() { ... } // from try @ 04fc15f8 with catch @ 04fc1104
                       catch() { ... } // from try @ 04fc167c with catch @ 04fc1104
                       catch() { ... } // from try @ 04fc16ec with catch @ 04fc1104
                       catch() { ... } // from try @ 04fc1708 with catch @ 04fc1104
                       catch() { ... } // from try @ 04fc1750 with catch @ 04fc1104
                       catch() { ... } // from try @ 04fc176c with catch @ 04fc1104
                       catch() { ... } // from try @ 04fc179c with catch @ 04fc1104 */
  pvVar10 = *(void **)(unaff_x29 + -200);
  if (-1 < *(int *)(*(long *)(lVar8 + 0x28) + 0x28)) {
    pvVar10 = (void *)(unaff_x29 + -200);
  }
  memcpy(puVar5,pvVar10,*(size_t *)(unaff_x29 + -0xe8));
  puVar6 = *(undefined8 **)(lVar8 + 0xc0);
  uVar2 = *puVar6;
  if (-1 < *(int *)(*(long *)(lVar8 + 0x28) + 0x28)) {
    puVar5 = (undefined8 *)*puVar5;
  }
  *(undefined8 **)(unaff_x29 + -0xa0) = puVar5;
  *(undefined4 **)(unaff_x29 + -0x98) = (undefined4 *)(unaff_x29 + -100);
  *(undefined4 *)(unaff_x29 + -100) = (int)((ulong)*(undefined8 *)(unaff_x29 + -0x170) >> 0x20);
  (*(code *)puVar6[2])(uVar2,puVar6,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
  fVar17 = *(float *)(unaff_x29 + -0x60);
  fVar19 = *(float *)(unaff_x29 + -0x5c);
  fVar20 = *(float *)(unaff_x29 + -0x58);
  uVar2 = *(undefined8 *)(unaff_x29 + -0x180);
  if (*(char *)(unaff_x22 + 0x8f5) == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    *(undefined1 *)(unaff_x22 + 0x8f5) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar13 = 1.0 / SQRT(fVar20 * fVar20 + fVar17 * fVar17 + fVar19 * fVar19);
  fVar17 = fVar17 * fVar13;
  fVar19 = fVar19 * fVar13;
  fVar20 = fVar20 * fVar13;
  *(float *)(unaff_x29 + -0xf0) = fVar17;
  fVar17 = fVar20 * fVar20 + fVar17 * fVar17 + fVar19 * fVar19;
  if ((fVar17 == 0.0) || (0x7f800000 < (uint)ABS(fVar17))) {
    lVar8 = *unaff_x23;
    puVar5 = *(undefined8 **)(unaff_x29 + -0xd8);
    uVar2 = *(undefined8 *)(unaff_x29 + -0x170);
    pvVar10 = *(void **)(unaff_x29 + -200);
    if (-1 < *(int *)(*(long *)(lVar8 + 0x28) + 0x28)) {
      pvVar10 = (void *)(unaff_x29 + -200);
    }
    memcpy(puVar5,pvVar10,*(size_t *)(unaff_x29 + -0xe8));
    fVar17 = DAT_01c76534;
    puVar6 = *(undefined8 **)(lVar8 + 0xc0);
    uVar3 = *puVar6;
    if (-1 < *(int *)(*(long *)(lVar8 + 0x28) + 0x28)) {
      puVar5 = (undefined8 *)*puVar5;
    }
    *(undefined8 **)(unaff_x29 + -0xa0) = puVar5;
    *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
    *(float *)(unaff_x29 + -100) = (float)((ulong)uVar2 >> 0x20) + fVar17;
    (*(code *)puVar6[2])(uVar3,puVar6,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
    fVar17 = *(float *)(unaff_x29 + -0x60);
    fVar19 = *(float *)(unaff_x29 + -0x5c);
    fVar20 = *(float *)(unaff_x29 + -0x58);
    uVar2 = *(undefined8 *)(unaff_x29 + -0x180);
    if (*(char *)(unaff_x22 + 0x8f5) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      *(undefined1 *)(unaff_x22 + 0x8f5) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar13 = 1.0 / SQRT(fVar20 * fVar20 + fVar17 * fVar17 + fVar19 * fVar19);
    fVar19 = fVar19 * fVar13;
    fVar20 = fVar20 * fVar13;
    *(float *)(unaff_x29 + -0xf0) = fVar17 * fVar13;
  }
  pvVar11 = *(void **)(unaff_x29 + -0x118);
  pvVar10 = *(void **)(unaff_x29 + -0x198);
  if (0 < *(int *)(unaff_x29 + -0xdc)) {
    lVar8 = unaff_x29 + -0x60;
    do {
      puVar5 = *(undefined8 **)(*unaff_x23 + 200);
      pvVar9 = *(void **)(unaff_x29 + -0x128);
      uVar3 = *puVar5;
      *(int *)(unaff_x29 + -0x60) = unaff_w25;
      *(long *)(unaff_x29 + -0xa0) = lVar8;
      *(void **)(unaff_x29 + -0x98) = pvVar9;
      (*(code *)puVar5[2])(uVar3,puVar5,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar9);
      memcpy(pvVar11,pvVar9,unaff_x26);
      puVar5 = *(undefined8 **)(*unaff_x23 + 200);
      pvVar11 = *(void **)(unaff_x29 + -0x130);
      uVar3 = *puVar5;
      *(int *)(unaff_x29 + -0x60) = unaff_w24;
      *(long *)(unaff_x29 + -0xa0) = lVar8;
      *(void **)(unaff_x29 + -0x98) = pvVar11;
      (*(code *)puVar5[2])(uVar3,puVar5,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar11);
      memcpy(pvVar10,pvVar11,unaff_x26);
      fVar17 = -(fVar16 * fVar12);
      fVar13 = -(fVar18 * fVar12);
      uVar14 = FUN_08b2f42c(-(fVar15 * fVar12),0);
      lVar7 = *unaff_x23;
      lVar4 = *(long *)(lVar7 + 0xd0);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
        lVar7 = *unaff_x23;
      }
      uVar3 = *(undefined8 *)(lVar7 + 0xd8);
      *(undefined4 *)(unaff_x29 + -0xa0) = uVar14;
      *(float *)(unaff_x29 + -0x9c) = fVar17;
      *(float *)(unaff_x29 + -0x98) = fVar13;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0xa0;
      FUN_0444872c(lVar4,uVar3,*(undefined8 *)(unaff_x29 + -0x120),
                   *(undefined8 *)(unaff_x29 + -0x118),unaff_x29 + -0x60,unaff_x29 + -0xa0);
      fVar17 = fVar19;
      fVar13 = fVar20;
      uVar14 = FUN_08b2f42c(*(undefined4 *)(unaff_x29 + -0xf0),0);
      lVar7 = *unaff_x23;
      lVar4 = *(long *)(lVar7 + 0xd0);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
        lVar7 = *unaff_x23;
      }
      uVar3 = *(undefined8 *)(lVar7 + 0xd8);
      *(undefined4 *)(unaff_x29 + -0xa0) = uVar14;
      *(float *)(unaff_x29 + -0x9c) = fVar17;
      *(float *)(unaff_x29 + -0x98) = fVar13;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0xa0;
      FUN_0444872c(lVar4,uVar3,uVar2,pvVar10,unaff_x29 + -0x60,unaff_x29 + -0xa0);
      pvVar9 = *(void **)(unaff_x29 + -0x138);
      pvVar11 = *(void **)(unaff_x29 + -0x118);
      memcpy(pvVar9,pvVar11,unaff_x26);
      puVar5 = *(undefined8 **)(*unaff_x23 + 0xe0);
      uVar3 = *puVar5;
      *(int *)(unaff_x29 + -0x60) = unaff_w25;
      *(long *)(unaff_x29 + -0xa0) = lVar8;
      *(void **)(unaff_x29 + -0x98) = pvVar9;
      (*(code *)puVar5[2])(uVar3,puVar5,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar9);
      pvVar9 = *(void **)(unaff_x29 + -0x140);
      memcpy(pvVar9,pvVar10,unaff_x26);
      puVar5 = *(undefined8 **)(*unaff_x23 + 0xe0);
      uVar3 = *puVar5;
      *(int *)(unaff_x29 + -0x60) = unaff_w24;
      *(long *)(unaff_x29 + -0xa0) = lVar8;
      *(void **)(unaff_x29 + -0x98) = pvVar9;
      (*(code *)puVar5[2])(uVar3,puVar5,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar9);
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


