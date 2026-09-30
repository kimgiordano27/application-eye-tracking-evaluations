/*
FUNCTION_NAME: System.Collections.Generic.Comparer<OVRPlugin.Qpl.Annotation.Builder.Entry>$$get_Default
ENTRY_POINT: 041da7ec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_Generic_Comparer<OVRPlugin_Qpl_Annotation_Builder_Entry>__get_Default
               (long param_1,long param_2)

{
  size_t __n;
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 *puVar18;
  void *pvVar19;
  ulong uVar20;
  int *piVar21;
  long *unaff_x19;
  void *pvVar22;
  undefined4 uVar23;
  size_t unaff_x20;
  ulong uVar24;
  size_t sVar25;
  undefined4 uVar26;
  undefined8 unaff_x21;
  undefined8 uVar27;
  ulong uVar28;
  size_t __n_00;
  ulong uVar29;
  ulong uVar30;
  void *pvVar31;
  void *__dest;
  ulong uVar32;
  ulong uVar33;
  long *plVar34;
  long unaff_x29;
  undefined8 auStack_10 [2];
  
  uVar1 = *(ushort *)(param_1 + 0x135);
  *(ulong *)(unaff_x29 + -0x50) =
       (ulong)*(uint *)(*(long *)(*(long *)(param_2 + 0xc0) + 0x30) + 0xfc);
  lVar11 = param_1;
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_02b76218(param_1);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar11 = *unaff_x19;
  }
  *(ulong *)(unaff_x29 + -0x48) =
       (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x38) + 0xfc);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_02b76218(lVar11);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar12 = *unaff_x19;
  }
  *(ulong *)(unaff_x29 + -0x40) =
       (ulong)*(uint *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x40) + 0xfc);
  lVar11 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_02b76218(lVar12);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar11 = *unaff_x19;
  }
  *(ulong *)(unaff_x29 + -0x38) = (ulong)*(uint *)(**(long **)(lVar12 + 0xc0) + 0xfc);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_02b76218(lVar11);
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = (long)&stack0x00000000 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x130) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x128) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x120) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x118) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x30);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x110) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x38);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x108) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x100) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x1c0) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x38);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x1c8) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x1a0) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x30);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x1d8) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x38);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x1b0) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -400) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x1e8) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x30);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x1d0) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x38);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x1a8) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x188) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x228) = lVar12;
  lVar11 = *unaff_x19;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x220) = lVar12;
  lVar11 = *unaff_x19;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x30);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x218) = lVar12;
  lVar11 = *unaff_x19;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x38);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x210) = lVar12;
  lVar11 = *unaff_x19;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x208) = lVar12;
  lVar11 = *unaff_x19;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x200) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x1f8) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x1f0) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x30);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x1e0) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x38);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x1b8) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x198) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x180) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x178) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x170) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x168) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x30);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x160) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x38);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = *unaff_x19;
  *(long *)(unaff_x29 + -0x158) = lVar12;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar11 = *(long *)(lVar11 + 0xc0);
  *(long **)(unaff_x29 + -0x30) = unaff_x19;
  *(undefined8 *)(unaff_x29 + -0xa0) = unaff_x21;
  lVar11 = *(long *)(lVar11 + 0x40);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x150) = lVar12;
  uVar20 = *(size_t *)(unaff_x29 + -0x60) + 0xf & 0x1fffffff0;
  lVar12 = lVar12 - uVar20;
  *(long *)(unaff_x29 + -0xa8) = lVar12;
  lVar12 = lVar12 - uVar20;
  *(long *)(unaff_x29 + -0x148) = lVar12;
  uVar28 = *(long *)(unaff_x29 + -0x28) + 0xfU & 0x1fffffff0;
  lVar12 = lVar12 - uVar28;
  *(long *)(unaff_x29 + -0x88) = lVar12;
  lVar12 = lVar12 - uVar28;
  *(long *)(unaff_x29 + -0x140) = lVar12;
  uVar33 = *(long *)(unaff_x29 + -0x20) + 0xfU & 0x1fffffff0;
  lVar12 = lVar12 - uVar33;
  *(long *)(unaff_x29 + -0xc0) = lVar12;
  lVar12 = lVar12 - uVar33;
  *(long *)(unaff_x29 + -0x138) = lVar12;
  uVar32 = unaff_x20 + 0xf & 0x1fffffff0;
  lVar12 = lVar12 - uVar32;
  *(long *)(unaff_x29 + -0x78) = lVar12;
  lVar12 = lVar12 - uVar32;
  *(long *)(unaff_x29 + -0xe8) = lVar12;
  sVar25 = *(size_t *)(unaff_x29 + -0x50);
  __n = *(size_t *)(unaff_x29 + -0x48);
  uVar30 = sVar25 + 0xf & 0x1fffffff0;
  lVar12 = lVar12 - uVar30;
  *(long *)(unaff_x29 + -0xe0) = lVar12;
  lVar12 = lVar12 - uVar30;
  *(long *)(unaff_x29 + -0xf8) = lVar12;
  uVar29 = __n + 0xf & 0x1fffffff0;
  lVar12 = lVar12 - uVar29;
  *(long *)(unaff_x29 + -0x90) = lVar12;
  lVar12 = lVar12 - uVar29;
  *(long *)(unaff_x29 + -0xf0) = lVar12;
  __n_00 = *(size_t *)(unaff_x29 + -0x40);
  uVar24 = __n_00 + 0xf & 0x1fffffff0;
  lVar12 = lVar12 - uVar24;
  *(long *)(unaff_x29 + -0x68) = lVar12;
  lVar12 = lVar12 - uVar24;
  *(long *)(unaff_x29 + -200) = lVar12;
  lVar12 = lVar12 - (*(long *)(unaff_x29 + -0x38) + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xb0) = lVar12;
  pvVar13 = (void *)(lVar12 - uVar20);
  *(void **)(unaff_x29 + -0x80) = pvVar13;
  memset(pvVar13,0,*(size_t *)(unaff_x29 + -0x60));
  pvVar13 = (void *)((long)pvVar13 - uVar28);
  memset(pvVar13,0,*(size_t *)(unaff_x29 + -0x28));
  pvVar14 = (void *)((long)pvVar13 - uVar33);
  *(void **)(unaff_x29 + -0xb8) = pvVar14;
  memset(pvVar14,0,*(size_t *)(unaff_x29 + -0x20));
  pvVar14 = (void *)((long)pvVar14 - uVar32);
  *(void **)(unaff_x29 + -0x70) = pvVar14;
  memset(pvVar14,0,unaff_x20);
  pvVar14 = (void *)((long)pvVar14 - uVar30);
  *(void **)(unaff_x29 + -0xd8) = pvVar14;
  memset(pvVar14,0,sVar25);
  pvVar14 = (void *)((long)pvVar14 - uVar29);
  *(void **)(unaff_x29 + -0x58) = pvVar14;
  memset(pvVar14,0,__n);
  pvVar14 = (void *)((long)pvVar14 - uVar24);
  *(void **)(unaff_x29 + -0xd0) = pvVar14;
  memset(pvVar14,0,__n_00);
  lVar11 = **(long **)(unaff_x29 + -0x30);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  puVar3 = PTR_DAT_063220e8;
  uVar27 = *(undefined8 *)(unaff_x29 + -0xa0);
  pvVar15 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) +
                                                       0x80) + 0xe0);
  pvVar22 = *(void **)(unaff_x29 + -0xb0);
  memcpy(pvVar22,pvVar15,*(size_t *)(unaff_x29 + -0x38));
  plVar34 = *(long **)(unaff_x29 + -0x30);
  pvVar31 = *(void **)(unaff_x29 + -0x90);
  pvVar15 = *(void **)(unaff_x29 + -0xa8);
  lVar11 = *plVar34;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02b76218();
  }
  uVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                     (**(undefined8 **)(lVar11 + 0xc0),pvVar22);
  plVar17 = (long *)thunk_FUN_02b79548(uVar16,*(undefined8 *)puVar3);
  if (plVar17 == (long *)0x0) {
    sVar25 = *(size_t *)(unaff_x29 + -0x60);
    memset(*(void **)(unaff_x29 + -0x80),0,sVar25);
    memset(pvVar15,0,sVar25);
    lVar11 = *plVar34;
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02b76218();
    }
    uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 8),pvVar15);
    lVar11 = *plVar34;
    pvVar14 = *(void **)(unaff_x29 + -0xe0);
    pvVar22 = *(void **)(unaff_x29 + -0xd8);
    if ((uVar20 & 1) == 0) {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar19 = (void *)thunk_FUN_02b9b29c(uVar27,*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) +
                                                   0x80));
      sVar25 = *(size_t *)(unaff_x29 + -0x60);
      memcpy(pvVar15,pvVar19,sVar25);
      __dest = *(void **)(unaff_x29 + -0x80);
      memmove(__dest,pvVar19,sVar25);
      pvVar15 = *(void **)(unaff_x29 + -0x148);
      memcpy(pvVar15,__dest,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 8),pvVar15);
      if ((uVar20 & 1) != 0) goto LAB_041db884;
      *(undefined4 *)(unaff_x29 + -0x38) = 0;
    }
    else {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar16 = thunk_FUN_02b9b29c(uVar27,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0x80));
      *(undefined8 *)(unaff_x29 + -0x80) = uVar16;
LAB_041db884:
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      lVar12 = *plVar34;
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02b76218();
      }
      FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x260),
                   *(undefined8 *)(unaff_x29 + -0x130),*(undefined8 *)(unaff_x29 + -0x80),0,
                   unaff_x29 + -0x14);
      *(undefined4 *)(unaff_x29 + -0x38) = *(undefined4 *)(unaff_x29 + -0x14);
    }
    sVar25 = *(size_t *)(unaff_x29 + -0x28);
    memset(pvVar13,0,sVar25);
    memset(*(void **)(unaff_x29 + -0x88),0,sVar25);
    lVar11 = *plVar34;
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02b76218();
    }
    uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18),
                          *(undefined8 *)(unaff_x29 + -0x88));
    lVar11 = *plVar34;
    if ((uVar20 & 1) == 0) {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar15 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0x20);
      sVar25 = *(size_t *)(unaff_x29 + -0x28);
      memcpy(*(void **)(unaff_x29 + -0x88),pvVar15,sVar25);
      memmove(pvVar13,pvVar15,sVar25);
      pvVar15 = *(void **)(unaff_x29 + -0x140);
      memcpy(pvVar15,pvVar13,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18),pvVar15);
      if ((uVar20 & 1) != 0) goto LAB_041dbaac;
      *(undefined4 *)(unaff_x29 + -0x28) = 0;
    }
    else {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0x20);
LAB_041dbaac:
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      lVar12 = *plVar34;
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02b76218();
      }
      FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x268),
                   *(undefined8 *)(unaff_x29 + -0x128),pvVar13,0,unaff_x29 + -0x14);
      *(undefined4 *)(unaff_x29 + -0x28) = *(undefined4 *)(unaff_x29 + -0x14);
    }
    sVar25 = *(size_t *)(unaff_x29 + -0x20);
    memset(*(void **)(unaff_x29 + -0xb8),0,sVar25);
    pvVar13 = *(void **)(unaff_x29 + -0xc0);
    memset(pvVar13,0,sVar25);
    lVar11 = *plVar34;
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02b76218();
    }
    uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x20),pvVar13);
    lVar11 = *plVar34;
    if ((uVar20 & 1) == 0) {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar15 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0x40);
      sVar25 = *(size_t *)(unaff_x29 + -0x20);
      memcpy(pvVar13,pvVar15,sVar25);
      pvVar19 = *(void **)(unaff_x29 + -0xb8);
      memmove(pvVar19,pvVar15,sVar25);
      pvVar13 = *(void **)(unaff_x29 + -0x138);
      memcpy(pvVar13,pvVar19,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x20),pvVar13);
      uVar16 = *(undefined8 *)(unaff_x29 + -0xb8);
      if ((uVar20 & 1) != 0) goto LAB_041dbc40;
      uVar23 = 0;
    }
    else {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar16 = thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0x80
                                                  ) + 0x40);
LAB_041dbc40:
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      lVar12 = *plVar34;
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02b76218();
      }
      FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x270),
                   *(undefined8 *)(unaff_x29 + -0x120),uVar16,0,unaff_x29 + -0x14);
      uVar23 = *(undefined4 *)(unaff_x29 + -0x14);
    }
    memset(*(void **)(unaff_x29 + -0x70),0,unaff_x20);
    memset(*(void **)(unaff_x29 + -0x78),0,unaff_x20);
    lVar11 = *plVar34;
    pvVar13 = *(void **)(unaff_x29 + -0xd0);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02b76218();
    }
    uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x28),
                          *(undefined8 *)(unaff_x29 + -0x78));
    lVar11 = *plVar34;
    if ((uVar20 & 1) == 0) {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar15 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0x60);
      memcpy(*(void **)(unaff_x29 + -0x78),pvVar15,unaff_x20);
      pvVar19 = *(void **)(unaff_x29 + -0x70);
      memmove(pvVar19,pvVar15,unaff_x20);
      memcpy(*(void **)(unaff_x29 + -0xe8),pvVar19,unaff_x20);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x28),
                            *(undefined8 *)(unaff_x29 + -0xe8));
      if ((uVar20 & 1) != 0) goto LAB_041dbdbc;
      uVar6 = 0;
    }
    else {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar16 = thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0x80
                                                  ) + 0x60);
      *(undefined8 *)(unaff_x29 + -0x70) = uVar16;
LAB_041dbdbc:
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      lVar12 = *plVar34;
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02b76218();
      }
      FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x278),
                   *(undefined8 *)(unaff_x29 + -0x118),*(undefined8 *)(unaff_x29 + -0x70),0,
                   unaff_x29 + -0x14);
      uVar6 = *(undefined4 *)(unaff_x29 + -0x14);
    }
    sVar25 = *(size_t *)(unaff_x29 + -0x50);
    memset(pvVar22,0,sVar25);
    memset(pvVar14,0,sVar25);
    lVar11 = *plVar34;
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02b76218();
    }
    uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x30),pvVar14);
    lVar11 = *plVar34;
    if ((uVar20 & 1) == 0) {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar15 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0x80);
      sVar25 = *(size_t *)(unaff_x29 + -0x50);
      memcpy(pvVar14,pvVar15,sVar25);
      memmove(pvVar22,pvVar15,sVar25);
      pvVar14 = *(void **)(unaff_x29 + -0xf8);
      memcpy(pvVar14,pvVar22,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x30),pvVar14);
      if ((uVar20 & 1) != 0) goto LAB_041dbf3c;
      uVar8 = 0;
    }
    else {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar22 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0x80);
LAB_041dbf3c:
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x30);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      lVar12 = *plVar34;
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02b76218();
      }
      FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x280),
                   *(undefined8 *)(unaff_x29 + -0x110),pvVar22,0,unaff_x29 + -0x14);
      uVar8 = *(undefined4 *)(unaff_x29 + -0x14);
    }
    sVar25 = *(size_t *)(unaff_x29 + -0x48);
    memset(*(void **)(unaff_x29 + -0x58),0,sVar25);
    memset(pvVar31,0,sVar25);
    lVar11 = *plVar34;
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02b76218();
    }
    uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x38),pvVar31);
    lVar11 = *plVar34;
    if ((uVar20 & 1) == 0) {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar14 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0xa0);
      sVar25 = *(size_t *)(unaff_x29 + -0x48);
      memcpy(pvVar31,pvVar14,sVar25);
      pvVar15 = *(void **)(unaff_x29 + -0x58);
      memmove(pvVar15,pvVar14,sVar25);
      pvVar14 = *(void **)(unaff_x29 + -0xf0);
      memcpy(pvVar14,pvVar15,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x38),pvVar14);
      if ((uVar20 & 1) != 0) goto System_Comparison<OVRTask<OVRResult<object,_Int32Enum>>>___ctor;
      uVar7 = 0;
    }
    else {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar16 = thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0x80
                                                  ) + 0xa0);
      *(undefined8 *)(unaff_x29 + -0x58) = uVar16;
System_Comparison<OVRTask<OVRResult<object,_Int32Enum>>>___ctor:
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      lVar12 = *plVar34;
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02b76218();
      }
      FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x288),
                   *(undefined8 *)(unaff_x29 + -0x108),*(undefined8 *)(unaff_x29 + -0x58),0,
                   unaff_x29 + -0x14);
      uVar7 = *(undefined4 *)(unaff_x29 + -0x14);
    }
    sVar25 = *(size_t *)(unaff_x29 + -0x40);
    memset(pvVar13,0,sVar25);
    memset(*(void **)(unaff_x29 + -0x68),0,sVar25);
    lVar11 = *plVar34;
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02b76218();
    }
    uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40),
                          *(undefined8 *)(unaff_x29 + -0x68));
    lVar11 = *plVar34;
    if ((uVar20 & 1) == 0) {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar14 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0xc0);
      sVar25 = *(size_t *)(unaff_x29 + -0x40);
      memcpy(*(void **)(unaff_x29 + -0x68),pvVar14,sVar25);
      memmove(pvVar13,pvVar14,sVar25);
      memcpy(*(void **)(unaff_x29 + -200),pvVar13,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar9 = *(undefined4 *)(unaff_x29 + -0x38);
      uVar26 = *(undefined4 *)(unaff_x29 + -0x28);
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40),
                            *(undefined8 *)(unaff_x29 + -200));
      if ((uVar20 & 1) != 0) goto LAB_041dc254;
      uVar10 = 0;
    }
    else {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0xc0);
      uVar9 = *(undefined4 *)(unaff_x29 + -0x38);
      uVar26 = *(undefined4 *)(unaff_x29 + -0x28);
LAB_041dc254:
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      lVar12 = *plVar34;
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02b76218();
      }
      FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x290),
                   *(undefined8 *)(unaff_x29 + -0x100),pvVar13,0,unaff_x29 + -0x14);
      uVar10 = *(undefined4 *)(unaff_x29 + -0x14);
    }
  }
  else {
    lVar11 = *plVar17;
    uVar20 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_063220e0) {
          puVar18 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_041db714;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar18 = (undefined8 *)FUN_02b7654c(plVar17,*(long *)PTR_DAT_063220e0,0);
LAB_041db714:
    iVar4 = (*(code *)*puVar18)(plVar17,puVar18[1]);
    if (7 < iVar4) {
      uVar16 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
      goto LAB_041dc2e8;
    }
    iVar4 = -iVar4;
    iVar2 = iVar4 + 7;
    uVar16 = 0xffffffff;
    if (iVar2 < 4) {
      if (iVar2 < 2) {
        if (iVar4 == -7) {
          pvVar14 = *(void **)(unaff_x29 + -0xd0);
          sVar25 = *(size_t *)(unaff_x29 + -0x40);
          memset(pvVar14,0,sVar25);
          memset(*(void **)(unaff_x29 + -0x68),0,sVar25);
          lVar11 = *plVar34;
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40),
                                *(undefined8 *)(unaff_x29 + -0x68));
          lVar11 = *plVar34;
          if ((uVar20 & 1) == 0) {
            if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_02b76218();
            }
            pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0)
                                                                           + 0x10) + 0x80) + 0xc0);
            sVar25 = *(size_t *)(unaff_x29 + -0x40);
            memcpy(*(void **)(unaff_x29 + -0x68),pvVar13,sVar25);
            memmove(pvVar14,pvVar13,sVar25);
            memcpy(*(void **)(unaff_x29 + -200),pvVar14,sVar25);
            lVar11 = *plVar34;
            if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_02b76218();
            }
            uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40),
                                  *(undefined8 *)(unaff_x29 + -200));
            if ((uVar20 & 1) != 0) goto LAB_041dc768;
            uVar23 = 0;
          }
          else {
            if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_02b76218();
            }
            pvVar14 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0)
                                                                           + 0x10) + 0x80) + 0xc0);
LAB_041dc768:
            lVar11 = *plVar34;
            if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_02b76218();
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
            if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_02b76218(lVar11);
            }
            lVar12 = *plVar34;
            if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_02b76218();
            }
            FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x290),
                         *(undefined8 *)(unaff_x29 + -0x1c0),pvVar14,0,unaff_x29 + -0x14);
            uVar23 = *(undefined4 *)(unaff_x29 + -0x14);
          }
          uVar6 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
          uVar16 = FUN_04d9a0d4(uVar23,uVar6,0);
          goto LAB_041dc2e8;
        }
        if (iVar2 != 1) goto LAB_041dc2e8;
        sVar25 = *(size_t *)(unaff_x29 + -0x48);
        memset(*(void **)(unaff_x29 + -0x58),0,sVar25);
        memset(pvVar31,0,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x38),pvVar31);
        lVar11 = *plVar34;
        if ((uVar20 & 1) == 0) {
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          pvVar13 = *(void **)(unaff_x29 + -0xd0);
          pvVar14 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                         0x10) + 0x80) + 0xa0);
          sVar25 = *(size_t *)(unaff_x29 + -0x48);
          memcpy(pvVar31,pvVar14,sVar25);
          pvVar15 = *(void **)(unaff_x29 + -0x58);
          memmove(pvVar15,pvVar14,sVar25);
          memcpy(*(void **)(unaff_x29 + -0xf0),pvVar15,sVar25);
          lVar11 = *plVar34;
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x38),
                                *(undefined8 *)(unaff_x29 + -0xf0));
          if ((uVar20 & 1) != 0) goto LAB_041dc940;
          uVar23 = 0;
        }
        else {
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          pvVar13 = *(void **)(unaff_x29 + -0xd0);
          uVar16 = thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) +
                                                      0x80) + 0xa0);
          *(undefined8 *)(unaff_x29 + -0x58) = uVar16;
LAB_041dc940:
          lVar11 = *plVar34;
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x38);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218(lVar11);
          }
          lVar12 = *plVar34;
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_02b76218();
          }
          FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x288),
                       *(undefined8 *)(unaff_x29 + -0x1c8),*(undefined8 *)(unaff_x29 + -0x58),0,
                       unaff_x29 + -0x14);
          uVar23 = *(undefined4 *)(unaff_x29 + -0x14);
        }
        sVar25 = *(size_t *)(unaff_x29 + -0x40);
        memset(pvVar13,0,sVar25);
        memset(*(void **)(unaff_x29 + -0x68),0,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40),
                              *(undefined8 *)(unaff_x29 + -0x68));
        lVar11 = *plVar34;
        if ((uVar20 & 1) == 0) {
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          pvVar14 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                         0x10) + 0x80) + 0xc0);
          sVar25 = *(size_t *)(unaff_x29 + -0x40);
          memcpy(*(void **)(unaff_x29 + -0x68),pvVar14,sVar25);
          memmove(pvVar13,pvVar14,sVar25);
          memcpy(*(void **)(unaff_x29 + -200),pvVar13,sVar25);
          lVar11 = *plVar34;
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40),
                                *(undefined8 *)(unaff_x29 + -200));
          if ((uVar20 & 1) != 0) goto LAB_041ddb08;
          uVar6 = 0;
        }
        else {
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                         0x10) + 0x80) + 0xc0);
LAB_041ddb08:
          lVar11 = *plVar34;
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218(lVar11);
          }
          lVar12 = *plVar34;
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_02b76218();
          }
          FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x290),
                       *(undefined8 *)(unaff_x29 + -0x1a0),pvVar13,0,unaff_x29 + -0x14);
          uVar6 = *(undefined4 *)(unaff_x29 + -0x14);
        }
        uVar8 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
        uVar16 = FUN_04d9a150(uVar23,uVar6,uVar8,0);
        goto LAB_041dc2e8;
      }
      if (iVar2 == 2) {
        pvVar14 = *(void **)(unaff_x29 + -0xd8);
        sVar25 = *(size_t *)(unaff_x29 + -0x50);
        memset(pvVar14,0,sVar25);
        pvVar13 = *(void **)(unaff_x29 + -0xe0);
        memset(pvVar13,0,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x30),pvVar13);
        lVar11 = *plVar34;
        if ((uVar20 & 1) == 0) {
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          pvVar22 = *(void **)(unaff_x29 + -0xd0);
          pvVar15 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                         0x10) + 0x80) + 0x80);
          sVar25 = *(size_t *)(unaff_x29 + -0x50);
          memcpy(pvVar13,pvVar15,sVar25);
          memmove(pvVar14,pvVar15,sVar25);
          memcpy(*(void **)(unaff_x29 + -0xf8),pvVar14,sVar25);
          lVar11 = *plVar34;
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x30),
                                *(undefined8 *)(unaff_x29 + -0xf8));
          if ((uVar20 & 1) != 0) goto LAB_041dc860;
          uVar23 = 0;
        }
        else {
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          pvVar22 = *(void **)(unaff_x29 + -0xd0);
          pvVar14 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                         0x10) + 0x80) + 0x80);
LAB_041dc860:
          lVar11 = *plVar34;
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x30);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218(lVar11);
          }
          lVar12 = *plVar34;
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_02b76218();
          }
          FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x280),
                       *(undefined8 *)(unaff_x29 + -0x1d8),pvVar14,0,unaff_x29 + -0x14);
          uVar23 = *(undefined4 *)(unaff_x29 + -0x14);
        }
        sVar25 = *(size_t *)(unaff_x29 + -0x48);
        memset(*(void **)(unaff_x29 + -0x58),0,sVar25);
        memset(pvVar31,0,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x38),pvVar31);
        lVar11 = *plVar34;
        if ((uVar20 & 1) == 0) {
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          pvVar14 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                         0x10) + 0x80) + 0xa0);
          sVar25 = *(size_t *)(unaff_x29 + -0x48);
          memcpy(pvVar31,pvVar14,sVar25);
          pvVar13 = *(void **)(unaff_x29 + -0x58);
          memmove(pvVar13,pvVar14,sVar25);
          memcpy(*(void **)(unaff_x29 + -0xf0),pvVar13,sVar25);
          lVar11 = *plVar34;
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x38),
                                *(undefined8 *)(unaff_x29 + -0xf0));
          if ((uVar20 & 1) != 0) goto LAB_041dd7d4;
          uVar6 = 0;
        }
        else {
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          uVar16 = thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) +
                                                      0x80) + 0xa0);
          *(undefined8 *)(unaff_x29 + -0x58) = uVar16;
LAB_041dd7d4:
          lVar11 = *plVar34;
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x38);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218(lVar11);
          }
          lVar12 = *plVar34;
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_02b76218();
          }
          FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x288),
                       *(undefined8 *)(unaff_x29 + -0x1b0),*(undefined8 *)(unaff_x29 + -0x58),0,
                       unaff_x29 + -0x14);
          uVar6 = *(undefined4 *)(unaff_x29 + -0x14);
        }
        sVar25 = *(size_t *)(unaff_x29 + -0x40);
        memset(pvVar22,0,sVar25);
        memset(*(void **)(unaff_x29 + -0x68),0,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40),
                              *(undefined8 *)(unaff_x29 + -0x68));
        lVar11 = *plVar34;
        if ((uVar20 & 1) == 0) {
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          pvVar14 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                         0x10) + 0x80) + 0xc0);
          sVar25 = *(size_t *)(unaff_x29 + -0x40);
          memcpy(*(void **)(unaff_x29 + -0x68),pvVar14,sVar25);
          memmove(pvVar22,pvVar14,sVar25);
          memcpy(*(void **)(unaff_x29 + -200),pvVar22,sVar25);
          lVar11 = *plVar34;
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40),
                                *(undefined8 *)(unaff_x29 + -200));
          if ((uVar20 & 1) != 0) goto LAB_041dd95c;
          uVar8 = 0;
        }
        else {
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          pvVar22 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                         0x10) + 0x80) + 0xc0);
LAB_041dd95c:
          lVar11 = *plVar34;
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218();
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218(lVar11);
          }
          lVar12 = *plVar34;
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_02b76218();
          }
          FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x290),
                       *(undefined8 *)(unaff_x29 + -400),pvVar22,0,unaff_x29 + -0x14);
          uVar8 = *(undefined4 *)(unaff_x29 + -0x14);
        }
        uVar7 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
        uVar16 = FUN_04d9a1d0(uVar23,uVar6,uVar8,uVar7,0);
        goto LAB_041dc2e8;
      }
      if (iVar2 != 3) goto LAB_041dc2e8;
      memset(*(void **)(unaff_x29 + -0x70),0,unaff_x20);
      memset(*(void **)(unaff_x29 + -0x78),0,unaff_x20);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x28),
                            *(undefined8 *)(unaff_x29 + -0x78));
      lVar11 = *plVar34;
      if ((uVar20 & 1) == 0) {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar14 = *(void **)(unaff_x29 + -0xd0);
        pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0x60);
        memcpy(*(void **)(unaff_x29 + -0x78),pvVar13,unaff_x20);
        pvVar15 = *(void **)(unaff_x29 + -0x70);
        memmove(pvVar15,pvVar13,unaff_x20);
        memcpy(*(void **)(unaff_x29 + -0xe8),pvVar15,unaff_x20);
        lVar11 = *plVar34;
        pvVar13 = *(void **)(unaff_x29 + -0xf8);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar22 = *(void **)(unaff_x29 + -0xe0);
        pvVar15 = *(void **)(unaff_x29 + -0xd8);
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x28),
                              *(undefined8 *)(unaff_x29 + -0xe8));
        if ((uVar20 & 1) != 0) goto LAB_041dca1c;
        uVar23 = 0;
      }
      else {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar15 = *(void **)(unaff_x29 + -0xd8);
        pvVar14 = *(void **)(unaff_x29 + -0xd0);
        pvVar22 = *(void **)(unaff_x29 + -0xe0);
        uVar16 = thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) +
                                                    0x80) + 0x60);
        pvVar13 = *(void **)(unaff_x29 + -0xf8);
        *(undefined8 *)(unaff_x29 + -0x70) = uVar16;
LAB_041dca1c:
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar34;
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02b76218();
        }
        FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x278),
                     *(undefined8 *)(unaff_x29 + -0x1e8),*(undefined8 *)(unaff_x29 + -0x70),0,
                     unaff_x29 + -0x14);
        uVar23 = *(undefined4 *)(unaff_x29 + -0x14);
      }
      sVar25 = *(size_t *)(unaff_x29 + -0x50);
      memset(pvVar15,0,sVar25);
      memset(pvVar22,0,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x30),pvVar22);
      lVar11 = *plVar34;
      if ((uVar20 & 1) == 0) {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar15 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0x80);
        sVar25 = *(size_t *)(unaff_x29 + -0x50);
        memcpy(*(void **)(unaff_x29 + -0xe0),pvVar15,sVar25);
        pvVar22 = *(void **)(unaff_x29 + -0xd8);
        memmove(pvVar22,pvVar15,sVar25);
        memcpy(pvVar13,pvVar22,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x30),pvVar13);
        if ((uVar20 & 1) != 0) goto LAB_041ddc90;
        uVar6 = 0;
      }
      else {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar16 = thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) +
                                                    0x80) + 0x80);
        *(undefined8 *)(unaff_x29 + -0xd8) = uVar16;
LAB_041ddc90:
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x30);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar34;
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02b76218();
        }
        FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x280),
                     *(undefined8 *)(unaff_x29 + -0x1d0),*(undefined8 *)(unaff_x29 + -0xd8),0,
                     unaff_x29 + -0x14);
        uVar6 = *(undefined4 *)(unaff_x29 + -0x14);
      }
      sVar25 = *(size_t *)(unaff_x29 + -0x48);
      memset(*(void **)(unaff_x29 + -0x58),0,sVar25);
      memset(*(void **)(unaff_x29 + -0x90),0,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x38),
                            *(undefined8 *)(unaff_x29 + -0x90));
      lVar11 = *plVar34;
      if ((uVar20 & 1) == 0) {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0xa0);
        sVar25 = *(size_t *)(unaff_x29 + -0x48);
        memcpy(*(void **)(unaff_x29 + -0x90),pvVar13,sVar25);
        pvVar15 = *(void **)(unaff_x29 + -0x58);
        memmove(pvVar15,pvVar13,sVar25);
        memcpy(*(void **)(unaff_x29 + -0xf0),pvVar15,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x38),
                              *(undefined8 *)(unaff_x29 + -0xf0));
        if ((uVar20 & 1) != 0) goto LAB_041dde48;
        uVar8 = 0;
      }
      else {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar16 = thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) +
                                                    0x80) + 0xa0);
        *(undefined8 *)(unaff_x29 + -0x58) = uVar16;
LAB_041dde48:
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x38);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar34;
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02b76218();
        }
        FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x288),
                     *(undefined8 *)(unaff_x29 + -0x1a8),*(undefined8 *)(unaff_x29 + -0x58),0,
                     unaff_x29 + -0x14);
        uVar8 = *(undefined4 *)(unaff_x29 + -0x14);
      }
      sVar25 = *(size_t *)(unaff_x29 + -0x40);
      memset(pvVar14,0,sVar25);
      memset(*(void **)(unaff_x29 + -0x68),0,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40),
                            *(undefined8 *)(unaff_x29 + -0x68));
      lVar11 = *plVar34;
      if ((uVar20 & 1) == 0) {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0xc0);
        sVar25 = *(size_t *)(unaff_x29 + -0x40);
        memcpy(*(void **)(unaff_x29 + -0x68),pvVar13,sVar25);
        memmove(pvVar14,pvVar13,sVar25);
        memcpy(*(void **)(unaff_x29 + -200),pvVar14,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40),
                              *(undefined8 *)(unaff_x29 + -200));
        if ((uVar20 & 1) != 0) goto LAB_041ddfc4;
        uVar7 = 0;
      }
      else {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar14 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0xc0);
LAB_041ddfc4:
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar34;
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02b76218();
        }
        FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x290),
                     *(undefined8 *)(unaff_x29 + -0x188),pvVar14,0,unaff_x29 + -0x14);
        uVar7 = *(undefined4 *)(unaff_x29 + -0x14);
      }
      uVar9 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
      uVar16 = FUN_04d9a260(uVar23,uVar6,uVar8,uVar7,uVar9,0);
      goto LAB_041dc2e8;
    }
    if (iVar4 + 1U < 2) {
      sVar25 = *(size_t *)(unaff_x29 + -0x60);
      memset(*(void **)(unaff_x29 + -0x80),0,sVar25);
      memset(pvVar15,0,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 8),pvVar15);
      lVar11 = *plVar34;
      if ((uVar20 & 1) == 0) {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar22 = (void *)thunk_FUN_02b9b29c(uVar27,*(undefined8 *)
                                                     (*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) +
                                                     0x80));
        sVar25 = *(size_t *)(unaff_x29 + -0x60);
        memcpy(pvVar15,pvVar22,sVar25);
        pvVar19 = *(void **)(unaff_x29 + -0x80);
        memmove(pvVar19,pvVar22,sVar25);
        pvVar15 = *(void **)(unaff_x29 + -0x148);
        memcpy(pvVar15,pvVar19,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 8),pvVar15);
        if ((uVar20 & 1) != 0) goto LAB_041dc5e8;
        *(undefined4 *)(unaff_x29 + -0x38) = 0;
      }
      else {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar16 = thunk_FUN_02b9b29c(uVar27,*(undefined8 *)
                                            (*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0x80));
        *(undefined8 *)(unaff_x29 + -0x80) = uVar16;
LAB_041dc5e8:
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar34;
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02b76218();
        }
        FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x260),
                     *(undefined8 *)(unaff_x29 + -0x180),*(undefined8 *)(unaff_x29 + -0x80),0,
                     unaff_x29 + -0x14);
        *(undefined4 *)(unaff_x29 + -0x38) = *(undefined4 *)(unaff_x29 + -0x14);
      }
      sVar25 = *(size_t *)(unaff_x29 + -0x28);
      memset(pvVar13,0,sVar25);
      memset(*(void **)(unaff_x29 + -0x88),0,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18),
                            *(undefined8 *)(unaff_x29 + -0x88));
      lVar11 = *plVar34;
      if ((uVar20 & 1) == 0) {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar15 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0x20);
        sVar25 = *(size_t *)(unaff_x29 + -0x28);
        memcpy(*(void **)(unaff_x29 + -0x88),pvVar15,sVar25);
        memmove(pvVar13,pvVar15,sVar25);
        pvVar15 = *(void **)(unaff_x29 + -0x140);
        memcpy(pvVar15,pvVar13,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18),pvVar15);
        if ((uVar20 & 1) != 0) goto LAB_041dcba0;
        *(undefined4 *)(unaff_x29 + -0x28) = 0;
      }
      else {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0x20);
LAB_041dcba0:
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x18);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar34;
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02b76218();
        }
        FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x268),
                     *(undefined8 *)(unaff_x29 + -0x178),pvVar13,0,unaff_x29 + -0x14);
        *(undefined4 *)(unaff_x29 + -0x28) = *(undefined4 *)(unaff_x29 + -0x14);
      }
      pvVar13 = *(void **)(unaff_x29 + -0xb8);
      sVar25 = *(size_t *)(unaff_x29 + -0x20);
      memset(pvVar13,0,sVar25);
      memset(*(void **)(unaff_x29 + -0xc0),0,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x20),
                            *(undefined8 *)(unaff_x29 + -0xc0));
      lVar11 = *plVar34;
      if ((uVar20 & 1) == 0) {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar15 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0x40);
        sVar25 = *(size_t *)(unaff_x29 + -0x20);
        memcpy(*(void **)(unaff_x29 + -0xc0),pvVar15,sVar25);
        memmove(pvVar13,pvVar15,sVar25);
        pvVar15 = *(void **)(unaff_x29 + -0x138);
        memcpy(pvVar15,pvVar13,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x20),pvVar15);
        if ((uVar20 & 1) != 0) goto LAB_041dcd2c;
        *(undefined4 *)(unaff_x29 + -0x20) = 0;
      }
      else {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0x40);
LAB_041dcd2c:
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x20);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar34;
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02b76218();
        }
        FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x270),
                     *(undefined8 *)(unaff_x29 + -0x170),pvVar13,0,unaff_x29 + -0x14);
        *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(unaff_x29 + -0x14);
      }
      memset(*(void **)(unaff_x29 + -0x70),0,unaff_x20);
      memset(*(void **)(unaff_x29 + -0x78),0,unaff_x20);
      lVar11 = *plVar34;
      pvVar13 = *(void **)(unaff_x29 + -0xd0);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x28),
                            *(undefined8 *)(unaff_x29 + -0x78));
      lVar11 = *plVar34;
      if ((uVar20 & 1) == 0) {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar15 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0x60);
        memcpy(*(void **)(unaff_x29 + -0x78),pvVar15,unaff_x20);
        pvVar22 = *(void **)(unaff_x29 + -0x70);
        memmove(pvVar22,pvVar15,unaff_x20);
        memcpy(*(void **)(unaff_x29 + -0xe8),pvVar22,unaff_x20);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar15 = *(void **)(unaff_x29 + -0xe0);
        pvVar22 = *(void **)(unaff_x29 + -0xd8);
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x28),
                              *(undefined8 *)(unaff_x29 + -0xe8));
        if ((uVar20 & 1) != 0) goto LAB_041dcec0;
        *(undefined4 *)(unaff_x29 + -0x60) = 0;
      }
      else {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar15 = *(void **)(unaff_x29 + -0xe0);
        pvVar22 = *(void **)(unaff_x29 + -0xd8);
        uVar16 = thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) +
                                                    0x80) + 0x60);
        *(undefined8 *)(unaff_x29 + -0x70) = uVar16;
LAB_041dcec0:
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar34;
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02b76218();
        }
        FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x278),
                     *(undefined8 *)(unaff_x29 + -0x168),*(undefined8 *)(unaff_x29 + -0x70),0,
                     unaff_x29 + -0x14);
        *(undefined4 *)(unaff_x29 + -0x60) = *(undefined4 *)(unaff_x29 + -0x14);
      }
      sVar25 = *(size_t *)(unaff_x29 + -0x50);
      memset(pvVar22,0,sVar25);
      memset(pvVar15,0,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x30),pvVar15);
      lVar11 = *plVar34;
      if ((uVar20 & 1) == 0) {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar19 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0x80);
        sVar25 = *(size_t *)(unaff_x29 + -0x50);
        memcpy(pvVar15,pvVar19,sVar25);
        memmove(pvVar22,pvVar19,sVar25);
        pvVar15 = *(void **)(unaff_x29 + -0xf8);
        memcpy(pvVar15,pvVar22,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x30),pvVar15);
        if ((uVar20 & 1) != 0) goto LAB_041dd050;
        uVar23 = 0;
      }
      else {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar22 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0x80);
LAB_041dd050:
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x30);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar34;
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02b76218();
        }
        FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x280),
                     *(undefined8 *)(unaff_x29 + -0x160),pvVar22,0,unaff_x29 + -0x14);
        uVar23 = *(undefined4 *)(unaff_x29 + -0x14);
      }
      sVar25 = *(size_t *)(unaff_x29 + -0x48);
      memset(*(void **)(unaff_x29 + -0x58),0,sVar25);
      memset(pvVar31,0,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x38),pvVar31);
      lVar11 = *plVar34;
      if ((uVar20 & 1) == 0) {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar15 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0xa0);
        sVar25 = *(size_t *)(unaff_x29 + -0x48);
        memcpy(pvVar31,pvVar15,sVar25);
        pvVar22 = *(void **)(unaff_x29 + -0x58);
        memmove(pvVar22,pvVar15,sVar25);
        pvVar15 = *(void **)(unaff_x29 + -0xf0);
        memcpy(pvVar15,pvVar22,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x38),pvVar15);
        if ((uVar20 & 1) != 0) goto LAB_041dd1dc;
        uVar6 = 0;
      }
      else {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar16 = thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) +
                                                    0x80) + 0xa0);
        *(undefined8 *)(unaff_x29 + -0x58) = uVar16;
LAB_041dd1dc:
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x38);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar34;
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02b76218();
        }
        FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x288),
                     *(undefined8 *)(unaff_x29 + -0x158),*(undefined8 *)(unaff_x29 + -0x58),0,
                     unaff_x29 + -0x14);
        uVar6 = *(undefined4 *)(unaff_x29 + -0x14);
      }
      sVar25 = *(size_t *)(unaff_x29 + -0x40);
      memset(pvVar13,0,sVar25);
      memset(*(void **)(unaff_x29 + -0x68),0,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40),
                            *(undefined8 *)(unaff_x29 + -0x68));
      lVar11 = *plVar34;
      if ((uVar20 & 1) == 0) {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar15 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0xc0);
        sVar25 = *(size_t *)(unaff_x29 + -0x40);
        memcpy(*(void **)(unaff_x29 + -0x68),pvVar15,sVar25);
        memmove(pvVar13,pvVar15,sVar25);
        memcpy(*(void **)(unaff_x29 + -200),pvVar13,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40),
                              *(undefined8 *)(unaff_x29 + -200));
        if ((uVar20 & 1) != 0) goto LAB_041dd358;
        uVar8 = *(undefined4 *)(unaff_x29 + -0x38);
        uVar7 = *(undefined4 *)(unaff_x29 + -0x28);
        uVar10 = 0;
        uVar9 = *(undefined4 *)(unaff_x29 + -0x20);
        uVar26 = *(undefined4 *)(unaff_x29 + -0x60);
      }
      else {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0xc0);
LAB_041dd358:
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar34;
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02b76218();
        }
        uVar8 = *(undefined4 *)(unaff_x29 + -0x38);
        uVar7 = *(undefined4 *)(unaff_x29 + -0x28);
        uVar9 = *(undefined4 *)(unaff_x29 + -0x20);
        uVar26 = *(undefined4 *)(unaff_x29 + -0x60);
        FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x290),
                     *(undefined8 *)(unaff_x29 + -0x150),pvVar13,0,unaff_x29 + -0x14);
        uVar10 = *(undefined4 *)(unaff_x29 + -0x14);
      }
      uVar5 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
      *(undefined8 *)((long)pvVar14 + -0x10) = 0;
      uVar16 = FUN_04d9a450(uVar8,uVar7,uVar9,uVar26,uVar23,uVar6,uVar10,uVar5);
      goto LAB_041dc2e8;
    }
    if (iVar2 == 4) {
      pvVar14 = *(void **)(unaff_x29 + -0xb8);
      sVar25 = *(size_t *)(unaff_x29 + -0x20);
      memset(pvVar14,0,sVar25);
      memset(*(void **)(unaff_x29 + -0xc0),0,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x20),
                            *(undefined8 *)(unaff_x29 + -0xc0));
      lVar11 = *plVar34;
      if ((uVar20 & 1) == 0) {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0x40);
        sVar25 = *(size_t *)(unaff_x29 + -0x20);
        memcpy(*(void **)(unaff_x29 + -0xc0),pvVar13,sVar25);
        memmove(pvVar14,pvVar13,sVar25);
        pvVar13 = *(void **)(unaff_x29 + -0x138);
        memcpy(pvVar13,pvVar14,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x20),pvVar13);
        if ((uVar20 & 1) != 0) goto LAB_041dd5b8;
        *(undefined4 *)(unaff_x29 + -0x20) = 0;
      }
      else {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar14 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0x40);
LAB_041dd5b8:
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x20);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar34;
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02b76218();
        }
        FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x270),
                     *(undefined8 *)(unaff_x29 + -0x228),pvVar14,0,unaff_x29 + -0x14);
        *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(unaff_x29 + -0x14);
      }
      memset(*(void **)(unaff_x29 + -0x70),0,unaff_x20);
      memset(*(void **)(unaff_x29 + -0x78),0,unaff_x20);
      lVar11 = *plVar34;
      pvVar14 = *(void **)(unaff_x29 + -0xd0);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar13 = *(void **)(unaff_x29 + -0xf8);
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x28),
                            *(undefined8 *)(unaff_x29 + -0x78));
      lVar11 = *plVar34;
      if ((uVar20 & 1) == 0) {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar15 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0x60);
        memcpy(*(void **)(unaff_x29 + -0x78),pvVar15,unaff_x20);
        pvVar22 = *(void **)(unaff_x29 + -0x70);
        memmove(pvVar22,pvVar15,unaff_x20);
        memcpy(*(void **)(unaff_x29 + -0xe8),pvVar22,unaff_x20);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar15 = *(void **)(unaff_x29 + -0xe0);
        pvVar22 = *(void **)(unaff_x29 + -0xd8);
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x28),
                              *(undefined8 *)(unaff_x29 + -0xe8));
        if ((uVar20 & 1) != 0) goto LAB_041de994;
        uVar23 = 0;
      }
      else {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar15 = *(void **)(unaff_x29 + -0xe0);
        pvVar22 = *(void **)(unaff_x29 + -0xd8);
        uVar16 = thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) +
                                                    0x80) + 0x60);
        *(undefined8 *)(unaff_x29 + -0x70) = uVar16;
LAB_041de994:
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar34;
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02b76218();
        }
        FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x278),
                     *(undefined8 *)(unaff_x29 + -0x220),*(undefined8 *)(unaff_x29 + -0x70),0,
                     unaff_x29 + -0x14);
        uVar23 = *(undefined4 *)(unaff_x29 + -0x14);
      }
      sVar25 = *(size_t *)(unaff_x29 + -0x50);
      memset(pvVar22,0,sVar25);
      memset(pvVar15,0,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x30),pvVar15);
      lVar11 = *plVar34;
      if ((uVar20 & 1) == 0) {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar31 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0x80);
        sVar25 = *(size_t *)(unaff_x29 + -0x50);
        memcpy(pvVar15,pvVar31,sVar25);
        memmove(pvVar22,pvVar31,sVar25);
        memcpy(pvVar13,pvVar22,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x30),pvVar13);
        if ((uVar20 & 1) != 0) goto LAB_041deb1c;
        uVar6 = 0;
      }
      else {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar22 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0x80);
LAB_041deb1c:
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x30);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar34;
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02b76218();
        }
        FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x280),
                     *(undefined8 *)(unaff_x29 + -0x218),pvVar22,0,unaff_x29 + -0x14);
        uVar6 = *(undefined4 *)(unaff_x29 + -0x14);
      }
      sVar25 = *(size_t *)(unaff_x29 + -0x48);
      memset(*(void **)(unaff_x29 + -0x58),0,sVar25);
      memset(*(void **)(unaff_x29 + -0x90),0,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x38),
                            *(undefined8 *)(unaff_x29 + -0x90));
      lVar11 = *plVar34;
      if ((uVar20 & 1) == 0) {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0xa0);
        sVar25 = *(size_t *)(unaff_x29 + -0x48);
        memcpy(*(void **)(unaff_x29 + -0x90),pvVar13,sVar25);
        pvVar15 = *(void **)(unaff_x29 + -0x58);
        memmove(pvVar15,pvVar13,sVar25);
        memcpy(*(void **)(unaff_x29 + -0xf0),pvVar15,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x38),
                              *(undefined8 *)(unaff_x29 + -0xf0));
        if ((uVar20 & 1) != 0) goto LAB_041dec9c;
        uVar8 = 0;
      }
      else {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar16 = thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) +
                                                    0x80) + 0xa0);
        *(undefined8 *)(unaff_x29 + -0x58) = uVar16;
LAB_041dec9c:
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x38);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar34;
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02b76218();
        }
        FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x288),
                     *(undefined8 *)(unaff_x29 + -0x210),*(undefined8 *)(unaff_x29 + -0x58),0,
                     unaff_x29 + -0x14);
        uVar8 = *(undefined4 *)(unaff_x29 + -0x14);
      }
      sVar25 = *(size_t *)(unaff_x29 + -0x40);
      memset(pvVar14,0,sVar25);
      memset(*(void **)(unaff_x29 + -0x68),0,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40),
                            *(undefined8 *)(unaff_x29 + -0x68));
      lVar11 = *plVar34;
      if ((uVar20 & 1) == 0) {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0xc0);
        sVar25 = *(size_t *)(unaff_x29 + -0x40);
        memcpy(*(void **)(unaff_x29 + -0x68),pvVar13,sVar25);
        memmove(pvVar14,pvVar13,sVar25);
        memcpy(*(void **)(unaff_x29 + -200),pvVar14,sVar25);
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40),
                              *(undefined8 *)(unaff_x29 + -200));
        if ((uVar20 & 1) != 0) goto LAB_041dee20;
        uVar7 = 0;
      }
      else {
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        pvVar14 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                       0x10) + 0x80) + 0xc0);
LAB_041dee20:
        lVar11 = *plVar34;
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar34;
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02b76218();
        }
        FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x290),
                     *(undefined8 *)(unaff_x29 + -0x208),pvVar14,0,unaff_x29 + -0x14);
        uVar7 = *(undefined4 *)(unaff_x29 + -0x14);
      }
      uVar9 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
      uVar16 = FUN_04d9a2f8(*(undefined4 *)(unaff_x29 + -0x20),uVar23,uVar6,uVar8,uVar7,uVar9,0);
      goto LAB_041dc2e8;
    }
    if (iVar2 != 5) goto LAB_041dc2e8;
    sVar25 = *(size_t *)(unaff_x29 + -0x28);
    memset(pvVar13,0,sVar25);
    memset(*(void **)(unaff_x29 + -0x88),0,sVar25);
    lVar11 = *plVar34;
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02b76218();
    }
    uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18),
                          *(undefined8 *)(unaff_x29 + -0x88));
    lVar11 = *plVar34;
    if ((uVar20 & 1) == 0) {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar14 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0x20);
      sVar25 = *(size_t *)(unaff_x29 + -0x28);
      memcpy(*(void **)(unaff_x29 + -0x88),pvVar14,sVar25);
      memmove(pvVar13,pvVar14,sVar25);
      pvVar14 = *(void **)(unaff_x29 + -0x140);
      memcpy(pvVar14,pvVar13,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18),pvVar14);
      if ((uVar20 & 1) != 0) goto LAB_041dd4b8;
      *(undefined4 *)(unaff_x29 + -0x28) = 0;
    }
    else {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0x20);
LAB_041dd4b8:
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      lVar12 = *plVar34;
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02b76218();
      }
      FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x268),
                   *(undefined8 *)(unaff_x29 + -0x200),pvVar13,0,unaff_x29 + -0x14);
      *(undefined4 *)(unaff_x29 + -0x28) = *(undefined4 *)(unaff_x29 + -0x14);
    }
    pvVar14 = *(void **)(unaff_x29 + -0xb8);
    sVar25 = *(size_t *)(unaff_x29 + -0x20);
    memset(pvVar14,0,sVar25);
    memset(*(void **)(unaff_x29 + -0xc0),0,sVar25);
    lVar11 = *plVar34;
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02b76218();
    }
    uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x20),
                          *(undefined8 *)(unaff_x29 + -0xc0));
    lVar11 = *plVar34;
    if ((uVar20 & 1) == 0) {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0x40);
      sVar25 = *(size_t *)(unaff_x29 + -0x20);
      memcpy(*(void **)(unaff_x29 + -0xc0),pvVar13,sVar25);
      memmove(pvVar14,pvVar13,sVar25);
      pvVar13 = *(void **)(unaff_x29 + -0x138);
      memcpy(pvVar13,pvVar14,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x20),pvVar13);
      if ((uVar20 & 1) != 0) goto LAB_041de180;
      *(undefined4 *)(unaff_x29 + -0x20) = 0;
    }
    else {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar14 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0x40);
LAB_041de180:
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      lVar12 = *plVar34;
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02b76218();
      }
      FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x270),
                   *(undefined8 *)(unaff_x29 + -0x1f8),pvVar14,0,unaff_x29 + -0x14);
      *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(unaff_x29 + -0x14);
    }
    memset(*(void **)(unaff_x29 + -0x70),0,unaff_x20);
    memset(*(void **)(unaff_x29 + -0x78),0,unaff_x20);
    lVar11 = *plVar34;
    pvVar14 = *(void **)(unaff_x29 + -0xd0);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02b76218();
    }
    uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x28),
                          *(undefined8 *)(unaff_x29 + -0x78));
    lVar11 = *plVar34;
    if ((uVar20 & 1) == 0) {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0x60);
      memcpy(*(void **)(unaff_x29 + -0x78),pvVar13,unaff_x20);
      pvVar15 = *(void **)(unaff_x29 + -0x70);
      memmove(pvVar15,pvVar13,unaff_x20);
      memcpy(*(void **)(unaff_x29 + -0xe8),pvVar15,unaff_x20);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar13 = *(void **)(unaff_x29 + -0xe0);
      pvVar15 = *(void **)(unaff_x29 + -0xd8);
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x28),
                            *(undefined8 *)(unaff_x29 + -0xe8));
      if ((uVar20 & 1) != 0) goto LAB_041de30c;
      uVar23 = 0;
    }
    else {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar13 = *(void **)(unaff_x29 + -0xe0);
      pvVar15 = *(void **)(unaff_x29 + -0xd8);
      uVar16 = thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0x80
                                                  ) + 0x60);
      *(undefined8 *)(unaff_x29 + -0x70) = uVar16;
LAB_041de30c:
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      lVar12 = *plVar34;
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02b76218();
      }
      FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x278),
                   *(undefined8 *)(unaff_x29 + -0x1f0),*(undefined8 *)(unaff_x29 + -0x70),0,
                   unaff_x29 + -0x14);
      uVar23 = *(undefined4 *)(unaff_x29 + -0x14);
    }
    sVar25 = *(size_t *)(unaff_x29 + -0x50);
    memset(pvVar15,0,sVar25);
    memset(pvVar13,0,sVar25);
    lVar11 = *plVar34;
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02b76218();
    }
    uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x30),pvVar13);
    lVar11 = *plVar34;
    if ((uVar20 & 1) == 0) {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar22 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0x80);
      sVar25 = *(size_t *)(unaff_x29 + -0x50);
      memcpy(pvVar13,pvVar22,sVar25);
      memmove(pvVar15,pvVar22,sVar25);
      memcpy(*(void **)(unaff_x29 + -0xf8),pvVar15,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x30),
                            *(undefined8 *)(unaff_x29 + -0xf8));
      if ((uVar20 & 1) != 0) goto LAB_041de488;
      uVar6 = 0;
    }
    else {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar15 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0x80);
LAB_041de488:
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x30);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      lVar12 = *plVar34;
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02b76218();
      }
      FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x280),
                   *(undefined8 *)(unaff_x29 + -0x1e0),pvVar15,0,unaff_x29 + -0x14);
      uVar6 = *(undefined4 *)(unaff_x29 + -0x14);
    }
    sVar25 = *(size_t *)(unaff_x29 + -0x48);
    memset(*(void **)(unaff_x29 + -0x58),0,sVar25);
    memset(pvVar31,0,sVar25);
    lVar11 = *plVar34;
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02b76218();
    }
    uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x38),pvVar31);
    lVar11 = *plVar34;
    if ((uVar20 & 1) == 0) {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0xa0);
      sVar25 = *(size_t *)(unaff_x29 + -0x48);
      memcpy(*(void **)(unaff_x29 + -0x90),pvVar13,sVar25);
      pvVar15 = *(void **)(unaff_x29 + -0x58);
      memmove(pvVar15,pvVar13,sVar25);
      memcpy(*(void **)(unaff_x29 + -0xf0),pvVar15,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x38),
                            *(undefined8 *)(unaff_x29 + -0xf0));
      if ((uVar20 & 1) != 0) goto LAB_041de618;
      uVar8 = 0;
    }
    else {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar16 = thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0x80
                                                  ) + 0xa0);
      *(undefined8 *)(unaff_x29 + -0x58) = uVar16;
LAB_041de618:
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      lVar12 = *plVar34;
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02b76218();
      }
      FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x288),
                   *(undefined8 *)(unaff_x29 + -0x1b8),*(undefined8 *)(unaff_x29 + -0x58),0,
                   unaff_x29 + -0x14);
      uVar8 = *(undefined4 *)(unaff_x29 + -0x14);
    }
    sVar25 = *(size_t *)(unaff_x29 + -0x40);
    memset(pvVar14,0,sVar25);
    memset(*(void **)(unaff_x29 + -0x68),0,sVar25);
    lVar11 = *plVar34;
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02b76218();
    }
    uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40),
                          *(undefined8 *)(unaff_x29 + -0x68));
    lVar11 = *plVar34;
    if ((uVar20 & 1) == 0) {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar13 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0xc0);
      sVar25 = *(size_t *)(unaff_x29 + -0x40);
      memcpy(*(void **)(unaff_x29 + -0x68),pvVar13,sVar25);
      memmove(pvVar14,pvVar13,sVar25);
      memcpy(*(void **)(unaff_x29 + -200),pvVar14,sVar25);
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      uVar20 = FUN_02b3ca74(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40),
                            *(undefined8 *)(unaff_x29 + -200));
      if ((uVar20 & 1) != 0) goto LAB_041de7ac;
      uVar9 = *(undefined4 *)(unaff_x29 + -0x28);
      uVar26 = *(undefined4 *)(unaff_x29 + -0x20);
      uVar7 = 0;
    }
    else {
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      pvVar14 = (void *)thunk_FUN_02b9b29c(uVar27,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                     0x10) + 0x80) + 0xc0);
LAB_041de7ac:
      lVar11 = *plVar34;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      lVar12 = *plVar34;
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02b76218();
      }
      uVar9 = *(undefined4 *)(unaff_x29 + -0x28);
      uVar26 = *(undefined4 *)(unaff_x29 + -0x20);
      FUN_02b3d498(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x290),
                   *(undefined8 *)(unaff_x29 + -0x198),pvVar14,0,unaff_x29 + -0x14);
      uVar7 = *(undefined4 *)(unaff_x29 + -0x14);
    }
    uVar10 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
  }
  uVar16 = FUN_04d9a3a0(uVar9,uVar26,uVar23,uVar6,uVar8,uVar7,uVar10,0);
LAB_041dc2e8:
  if (*(long *)(*(long *)(unaff_x29 + -0x98) + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar16);
  }
  return;
}


