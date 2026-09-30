/*
FUNCTION_NAME: System.Array$$BinarySearch<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03657610
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array__BinarySearch<OVRPlugin_Qpl_Annotation_Builder_Entry>(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int in_w8;
  uint uVar7;
  ulong in_x9;
  long *plVar8;
  size_t unaff_x19;
  int iVar9;
  long unaff_x20;
  int iVar10;
  long *unaff_x21;
  void *pvVar11;
  undefined8 unaff_x22;
  void *pvVar12;
  ulong __n;
  int iVar13;
  void *unaff_x24;
  void *pvVar14;
  ulong uVar15;
  void *__dest;
  long unaff_x29;
  
  if ((in_x9 & 1) == 0) {
    lVar3 = FUN_02dcfd18();
    unaff_x21 = *(long **)(unaff_x20 + 0x38);
    in_w8 = *(int *)(lVar3 + 0xfc);
  }
  lVar3 = (long)&stack0x00000000 - ((ulong)(in_w8 + 0x10) + 0xf & 0x1fffffff0);
                    /* try { // try from 03657634 to 03757643 has its CatchHandler @ 03657674 */
  uVar7 = *(uint *)(unaff_x21[2] + 0xfc);
  uVar15 = (ulong)uVar7;
                    /* try { // try from 0365764c to 03757653 has its CatchHandler @ 03657670 */
  if ((*(ushort *)(unaff_x21[2] + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18();
                    /* try { // try from 03657654 to 0375768f has its CatchHandler @ 036575d0 */
    unaff_x21 = *(long **)(unaff_x20 + 0x38);
    uVar7 = *(uint *)(lVar4 + 0xfc);
  }
  *(undefined8 *)(unaff_x29 + -0x38) = unaff_x22;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0365764c with catch @ 03657670
                        */
  lVar4 = lVar3 - ((ulong)(uVar7 + 0x10) + 0xf & 0x1fffffff0);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 03657634 with catch @ 03657674
                        */
  *(long *)(unaff_x29 + -0x50) = lVar4;
  uVar7 = *(uint *)(unaff_x21[4] + 0xfc);
  __n = (ulong)uVar7;
                    /* try { // try from 03657690 to 03757693 has its CatchHandler @ 036576ac */
  if ((*(ushort *)(unaff_x21[4] + 0x135) & 1) == 0) {
                    /* try { // try from 03657694 to 037576af has its CatchHandler @ 036575d0 */
    lVar5 = FUN_02dcfd18();
    unaff_x21 = *(long **)(unaff_x20 + 0x38);
    uVar7 = *(uint *)(lVar5 + 0xfc);
  }
                    /* catch() { ... } // from try @ 03657690 with catch @ 036576ac */
                    /* try { // try from 036576b0 to 037576b7 has its CatchHandler @ 036576c0 */
  lVar4 = lVar4 - ((ulong)(uVar7 + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x48) = lVar4;
                    /* try { // try from 036576b8 to 037576c3 has its CatchHandler @ 036575d0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036576b0 with catch @ 036576c0
                        */
                    /* try { // try from 036576c4 to 03757727 has its CatchHandler @ 036576c4
                       catch() { ... } // from try @ 036576c4 with catch @ 036576c4
                       catch() { ... } // from try @ 03657748 with catch @ 036576c4
                       catch() { ... } // from try @ 03657788 with catch @ 036576c4
                       catch() { ... } // from try @ 036577ac with catch @ 036576c4 */
  pvVar14 = (void *)(lVar4 - (unaff_x19 + 0xf & 0x1fffffff0));
  pvVar12 = (void *)((long)pvVar14 - (uVar15 + 0xf & 0x1fffffff0));
  __dest = (void *)((long)pvVar12 - (__n + 0xf & 0x1fffffff0));
  pvVar11 = unaff_x24;
  if (-1 < *(int *)(*unaff_x21 + 0x28)) {
    pvVar11 = (void *)(unaff_x29 + -0x18);
  }
  memcpy(pvVar14,pvVar11,unaff_x19);
  uVar6 = FUN_02d96810(*unaff_x21,pvVar14);
  if ((uVar6 & 1) == 0) {
    pvVar11 = *(void **)(unaff_x29 + -0x40);
    iVar13 = 0xc;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 03657740 with catch @ 03657764
                        */
  }
  else {
                    /* try { // try from 03657728 to 03757737 has its CatchHandler @ 03657768 */
    plVar8 = *(long **)(unaff_x20 + 0x38);
    pvVar11 = *(void **)(unaff_x29 + -0x40);
    lVar5 = *plVar8;
    lVar4 = lVar5;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 03657740 to 03757747 has its CatchHandler @ 03657764 */
      lVar5 = FUN_02dcfd18(lVar5);
                    /* try { // try from 03657748 to 03757783 has its CatchHandler @ 036576c4 */
      plVar8 = *(long **)(unaff_x20 + 0x38);
      lVar4 = *plVar8;
    }
                    /* try { // try from 03657784 to 03757787 has its CatchHandler @ 036577a0 */
                    /* try { // try from 03657788 to 037577a3 has its CatchHandler @ 036576c4 */
    if (-1 < *(int *)(lVar4 + 0x28)) {
      unaff_x24 = (void *)(unaff_x29 + -0x18);
    }
    FUN_02d97234(lVar5,plVar8[1],lVar3,unaff_x24,0,unaff_x29 + -0xc);
                    /* catch() { ... } // from try @ 03657784 with catch @ 036577a0 */
    iVar13 = *(int *)(unaff_x29 + -0xc) * -0x3d4d51c3 + 0xc;
  }
                    /* try { // try from 036577a4 to 037577ab has its CatchHandler @ 036577b4 */
                    /* try { // try from 036577ac to 037577b7 has its CatchHandler @ 036576c4 */
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036577a4 with catch @ 036577b4
                        */
                    /* try { // try from 036577b8 to 0375781b has its CatchHandler @ 036577b8
                       catch() { ... } // from try @ 036577b8 with catch @ 036577b8
                       catch() { ... } // from try @ 0365783c with catch @ 036577b8
                       catch() { ... } // from try @ 0365787c with catch @ 036577b8
                       catch() { ... } // from try @ 036578a0 with catch @ 036577b8 */
  pvVar14 = pvVar11;
  if (-1 < *(int *)(lVar3 + 0x28)) {
    pvVar14 = (void *)(unaff_x29 + -0x20);
  }
  memcpy(pvVar12,pvVar14,uVar15);
  uVar15 = FUN_02d96810(lVar3,pvVar12);
  if ((uVar15 & 1) == 0) {
    pvVar12 = *(void **)(unaff_x29 + -0x38);
    iVar10 = 0;
  }
  else {
    lVar5 = *(long *)(unaff_x20 + 0x38);
    pvVar12 = *(void **)(unaff_x29 + -0x38);
    lVar4 = *(long *)(lVar5 + 0x10);
    lVar3 = lVar4;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
      lVar5 = *(long *)(unaff_x20 + 0x38);
      lVar3 = *(long *)(lVar5 + 0x10);
    }
                    /* try { // try from 0365781c to 0375782b has its CatchHandler @ 0365785c */
    if (-1 < *(int *)(lVar3 + 0x28)) {
      pvVar11 = (void *)(unaff_x29 + -0x20);
    }
                    /* try { // try from 03657834 to 0375783b has its CatchHandler @ 03657858 */
    FUN_02d97234(lVar4,*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(unaff_x29 + -0x50),pvVar11,0,
                 unaff_x29 + -0xc);
                    /* try { // try from 0365783c to 03757877 has its CatchHandler @ 036577b8 */
    iVar10 = *(int *)(unaff_x29 + -0xc) * -0x3d4d51c3;
  }
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 03657834 with catch @ 03657858
                        */
  pvVar11 = pvVar12;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0365781c with catch @ 0365785c
                        */
  if (-1 < *(int *)(lVar3 + 0x28)) {
    pvVar11 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(__dest,pvVar11,__n);
  uVar15 = FUN_02d96810(lVar3,__dest);
  if ((uVar15 & 1) == 0) {
    iVar9 = 0;
  }
  else {
    lVar5 = *(long *)(unaff_x20 + 0x38);
                    /* try { // try from 03657878 to 0375787b has its CatchHandler @ 03657894 */
    lVar4 = *(long *)(lVar5 + 0x20);
                    /* try { // try from 0365787c to 03757897 has its CatchHandler @ 036577b8 */
    lVar3 = lVar4;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
      lVar5 = *(long *)(unaff_x20 + 0x38);
      lVar3 = *(long *)(lVar5 + 0x20);
    }
    if (-1 < *(int *)(lVar3 + 0x28)) {
      pvVar12 = (void *)(unaff_x29 + -0x28);
    }
    FUN_02d97234(lVar4,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(unaff_x29 + -0x48),pvVar12,0,
                 unaff_x29 + -0xc);
    iVar9 = *(int *)(unaff_x29 + -0xc) * -0x3d4d51c3;
  }
  puVar1 = PTR_DAT_06a0db38;
  if (*(int *)(*(long *)PTR_DAT_06a0db38 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  iVar2 = FUN_054e2d6c(0);
  if (DAT_06db5974 == '\0') {
    FUN_02d965b8(PTR_DAT_06a0db38);
    DAT_06db5974 = '\x01';
  }
  if ((*(int *)(*(long *)puVar1 + 0xe4) == 0) && (thunk_FUN_02df485c(), DAT_06db5974 == '\0')) {
    FUN_02d965b8(PTR_DAT_06a0db38);
    DAT_06db5974 = '\x01';
  }
  if ((*(int *)(*(long *)puVar1 + 0xe4) == 0) && (thunk_FUN_02df485c(), DAT_06db5974 == '\0')) {
    FUN_02d965b8(PTR_DAT_06a0db38);
    DAT_06db5974 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar7 = iVar10 + ((uint)(iVar13 + iVar2) >> 0xf | (iVar13 + iVar2) * 0x20000) * 0x27d4eb2f;
  uVar7 = iVar9 + (uVar7 >> 0xf | uVar7 * 0x20000) * 0x27d4eb2f;
  uVar7 = (uVar7 >> 0xf | uVar7 * 0x20000) * 0x27d4eb2f;
  uVar7 = (uVar7 ^ uVar7 >> 0xf) * -0x7a143589;
  uVar7 = (uVar7 ^ uVar7 >> 0xd) * -0x3d4d51c3;
  return uVar7 ^ uVar7 >> 0x10;
}


