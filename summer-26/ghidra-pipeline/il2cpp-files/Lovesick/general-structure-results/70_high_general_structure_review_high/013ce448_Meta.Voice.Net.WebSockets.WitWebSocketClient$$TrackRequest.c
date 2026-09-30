/*
FUNCTION_NAME: Meta.Voice.Net.WebSockets.WitWebSocketClient$$TrackRequest
ENTRY_POINT: 013ce448
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Meta_Voice_Net_WebSockets_WitWebSocketClient__TrackRequest(void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  ulong unaff_x19;
  long *plVar11;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  void *pvVar12;
  undefined8 unaff_x23;
  void *__dest;
  undefined4 unaff_w24;
  ulong __n;
  ulong __n_00;
  void *__src;
  ulong uVar13;
  long *plVar14;
  long unaff_x29;
  
  uVar3 = thunk_FUN_00d42afc();
  lVar9 = (long)&stack0x00000000 - ((uVar3 & 0xffffffff) + 0xf & 0x1fffffff0);
                    /* try { // try from 013ce460 to 014ce473 has its CatchHandler @ 013ce4a8 */
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe0);
                    /* try { // try from 013ce474 to 014ce4bf has its CatchHandler @ 013ce430 */
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  iVar1 = *(int *)(lVar4 + 0x28);
  *(undefined8 *)(unaff_x29 + -0x78) = unaff_x23;
  *(undefined4 *)(unaff_x29 + -0x7c) = unaff_w24;
  *(long *)(unaff_x29 + -0xb8) = lVar9;
  if (iVar1 < 0) {
    uVar3 = thunk_FUN_00d42afc();
  }
  else {
    uVar3 = 0x18;
  }
                    /* catch(type#1 @ 03274860) { ... } // from try @ 013ce460 with catch @ 013ce4a8
                        */
  lVar9 = lVar9 - ((uVar3 & 0xffffffff) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xb0) = lVar9;
  __n_00 = unaff_x19 & 0xffffffff;
                    /* try { // try from 013ce4c0 to 014ce4c3 has its CatchHandler @ 013ce4d4 */
  uVar3 = __n_00 + 0xf & 0x1fffffff0;
  __src = (void *)(lVar9 - uVar3);
                    /* catch() { ... } // from try @ 013ce4c0 with catch @ 013ce4d4 */
  __dest = (void *)((long)__src - uVar3);
                    /* try { // try from 013ce4dc to 014ce4eb has its CatchHandler @ 013ce500 */
  __n = unaff_x22 & 0xffffffff;
  uVar13 = __n + 0xf & 0x1fffffff0;
                    /* try { // try from 013ce4ec to 014ce4f7 has its CatchHandler @ 013ce430 */
  *(ulong *)(unaff_x29 + -0xa8) = (long)__dest - uVar13;
                    /* try { // try from 013ce4f8 to 014ce4ff has its CatchHandler @ 013ce500 */
  lVar4 = ((long)__dest - uVar13) - uVar13;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 013ce4dc with catch @ 013ce500
                       catch(type#2 @ 00000000) { ... } // from try @ 013ce4f8 with catch @ 013ce500
                        */
  *(long *)(unaff_x29 + -0x98) = lVar4;
  pvVar12 = (void *)(lVar4 - uVar3);
  memset(pvVar12,0,__n_00);
  pvVar5 = (void *)((long)pvVar12 - uVar13);
                    /* catch() { ... } // from try @ 013ce7d8 with catch @ 013ce534
                       catch() { ... } // from try @ 013ce80c with catch @ 013ce534
                       catch() { ... } // from try @ 013ce87c with catch @ 013ce534
                       catch() { ... } // from try @ 013ce8f8 with catch @ 013ce534 */
  *(void **)(unaff_x29 + -0xa0) = pvVar5;
  memset(pvVar5,0,__n);
  pvVar5 = (void *)((long)pvVar5 - uVar3);
  memset(pvVar5,0,__n_00);
  *(void **)(unaff_x29 + -0x90) = (void *)((long)pvVar5 - uVar13);
  memset((void *)((long)pvVar5 - uVar13),0,__n);
  if (unaff_x21 == (long *)0x0) {
LAB_013ce9f4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* try { // try from 013ce584 to 014ce587 has its CatchHandler @ 013ce8ac */
                    /* try { // try from 013ce594 to 014ce5cf has its CatchHandler @ 013ce8b0 */
  (**(code **)(*(long *)(*unaff_x21 + 400) + 0x10))
            (*(undefined8 *)(*(long *)(*unaff_x21 + 400) + 8));
  lVar4 = *(long *)(*unaff_x21 + 400);
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x60);
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8));
  puVar2 = StringLiteral_3033;
  plVar14 = *(long **)(unaff_x29 + -0x60);
  if (plVar14 == (long *)0x0) goto LAB_013ce9f4;
  lVar4 = *plVar14;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar3 != 0) {
    piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
                    /* try { // try from 013ce5ec to 014ce5fb has its CatchHandler @ 013ce8a8 */
      if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_11440) {
        puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_013ce620;
      }
      uVar3 = uVar3 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar3 != 0);
  }
  puVar6 = (undefined8 *)FUN_00d59724(plVar14,*(long *)StringLiteral_11440,0);
                    /* try { // try from 013ce610 to 014ce613 has its CatchHandler @ 013ce8a0 */
LAB_013ce620:
                    /* try { // try from 013ce620 to 014ce62f has its CatchHandler @ 013ce7dc */
  uVar7 = (*(code *)*puVar6)(plVar14,puVar6[1]);
  plVar14 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,5);
  if (plVar14 == (long *)0x0) goto LAB_013ce9f4;
                    /* try { // try from 013ce644 to 014ce65b has its CatchHandler @ 013ce7e8 */
  lVar4 = 0;
  if (*(long *)(unaff_x29 + -0x70) != 0) {
    lVar9 = thunk_FUN_00d6225c(*(long *)(unaff_x29 + -0x70),*(undefined8 *)(*plVar14 + 0x40));
    lVar4 = *(long *)(unaff_x29 + -0x70);
    if (lVar9 == 0) goto LAB_013ce920;
  }
  lVar9 = plVar14[3];
  *(undefined8 *)(unaff_x29 + -0x70) = uVar7;
  if ((int)lVar9 != 0) {
                    /* try { // try from 013ce674 to 014ce68b has its CatchHandler @ 013ce7e0 */
    plVar14[4] = lVar4;
    puVar6 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xc0);
    uVar7 = *puVar6;
    *(void **)(unaff_x29 + -0x60) = __src;
    puVar2 = System_Collections_Generic_IEnumerator<Expression>_TypeInfo;
                    /* try { // try from 013ce6a0 to 014ce6fb has its CatchHandler @ 013ce7ec */
    (*(code *)puVar6[2])(uVar7);
    memcpy(pvVar12,__src,__n_00);
    memcpy(__dest,pvVar12,__n_00);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_00d5941c();
    }
    uVar3 = FUN_00da5124(lVar4,__dest);
    uVar7 = *(undefined8 *)puVar2;
    if ((uVar3 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      memcpy(pvVar5,pvVar12,__n_00);
      lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                    /* try { // try from 013ce714 to 014ce72f has its CatchHandler @ 013ce7e4 */
        lVar4 = FUN_00d5941c();
        lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      }
      FUN_00da59dc(lVar4,*(undefined8 *)(lVar9 + 200),*(undefined8 *)(unaff_x29 + -0xb8),pvVar5,0,
                   unaff_x29 + -0x60);
      lVar4 = *(long *)(unaff_x29 + -0x60);
                    /* try { // try from 013ce744 to 014ce797 has its CatchHandler @ 013ce7f0 */
      if ((lVar4 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0))
      goto LAB_013ce920;
    }
    if (1 < *(uint *)(plVar14 + 3)) {
      plVar14[5] = lVar4;
      puVar2 = StringLiteral_11109;
      puVar6 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xd0);
      (*(code *)puVar6[2])(*puVar6);
      uVar8 = *(undefined8 *)puVar2;
      *(undefined4 *)(unaff_x29 + -100) = *(undefined4 *)(unaff_x29 + -0x60);
                    /* try { // try from 013ce7a8 to 014ce7b3 has its CatchHandler @ 013ce8a4 */
      lVar4 = thunk_FUN_00d61fa0(uVar8,unaff_x29 + -100);
      if ((lVar4 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0)) {
LAB_013ce920:
        uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar7,0);
      }
                    /* try { // try from 013ce7cc to 014ce7cf has its CatchHandler @ 013ce7f0 */
      if (2 < *(uint *)(plVar14 + 3)) {
                    /* try { // try from 013ce7d4 to 014ce7d7 has its CatchHandler @ 013ce7ec */
        plVar14[6] = lVar4;
        puVar2 = Method_System_Xml_Schema_XmlListConverter_ToArray<double>__;
                    /* try { // try from 013ce7d8 to 014ce807 has its CatchHandler @ 013ce534 */
                    /* catch() { ... } // from try @ 013ce620 with catch @ 013ce7dc */
                    /* catch() { ... } // from try @ 013ce674 with catch @ 013ce7e0 */
                    /* catch() { ... } // from try @ 013ce714 with catch @ 013ce7e4 */
                    /* catch() { ... } // from try @ 013ce644 with catch @ 013ce7e8 */
                    /* catch() { ... } // from try @ 013ce6a0 with catch @ 013ce7ec
                       catch() { ... } // from try @ 013ce7d4 with catch @ 013ce7ec */
                    /* catch() { ... } // from try @ 013ce744 with catch @ 013ce7f0
                       catch() { ... } // from try @ 013ce7cc with catch @ 013ce7f0 */
        puVar6 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
        (*(code *)puVar6[2])(*puVar6);
                    /* try { // try from 013ce808 to 014ce80b has its CatchHandler @ 013ce894 */
        uVar8 = *(undefined8 *)puVar2;
                    /* try { // try from 013ce80c to 014ce853 has its CatchHandler @ 013ce534 */
        *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x60);
        lVar4 = thunk_FUN_00d61fa0(uVar8,unaff_x29 + -0x68);
        if ((lVar4 != 0) &&
           (lVar9 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0))
        goto LAB_013ce920;
        if (3 < *(uint *)(plVar14 + 3)) {
          plVar14[7] = lVar4;
          pvVar5 = *(void **)(unaff_x29 + -0xa8);
                    /* try { // try from 013ce854 to 014ce86b has its CatchHandler @ 013ce90c */
          puVar6 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xd8);
          uVar8 = *puVar6;
          *(void **)(unaff_x29 + -0x60) = pvVar5;
                    /* try { // try from 013ce86c to 014ce86f has its CatchHandler @ 013ce890 */
          (*(code *)puVar6[2])(uVar8);
                    /* try { // try from 013ce870 to 014ce877 has its CatchHandler @ 013ce88c */
          pvVar12 = *(void **)(unaff_x29 + -0xa0);
                    /* try { // try from 013ce878 to 014ce87b has its CatchHandler @ 013ce888 */
                    /* try { // try from 013ce87c to 014ce8cb has its CatchHandler @ 013ce534 */
          memcpy(pvVar12,pvVar5,__n);
          pvVar5 = *(void **)(unaff_x29 + -0x98);
                    /* catch() { ... } // from try @ 013ce878 with catch @ 013ce888 */
                    /* catch() { ... } // from try @ 013ce870 with catch @ 013ce88c */
                    /* catch() { ... } // from try @ 013ce86c with catch @ 013ce890 */
                    /* catch() { ... } // from try @ 013ce808 with catch @ 013ce894 */
          memcpy(pvVar5,pvVar12,__n);
                    /* catch() { ... } // from try @ 013ce610 with catch @ 013ce8a0 */
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe0);
                    /* catch() { ... } // from try @ 013ce7a8 with catch @ 013ce8a4 */
                    /* catch() { ... } // from try @ 013ce5ec with catch @ 013ce8a8 */
          if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                    /* catch() { ... } // from try @ 013ce584 with catch @ 013ce8ac */
            lVar4 = FUN_00d5941c();
          }
                    /* catch() { ... } // from try @ 013ce594 with catch @ 013ce8b0 */
          uVar3 = FUN_00da5124(lVar4,pvVar5);
          if ((uVar3 & 1) == 0) {
            lVar4 = 0;
          }
          else {
            memcpy(*(void **)(unaff_x29 + -0x90),pvVar12,__n);
                    /* try { // try from 013ce8cc to 014ce8cf has its CatchHandler @ 013ce8e0 */
            lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
            lVar4 = *(long *)(lVar9 + 0xe0);
            if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                    /* catch() { ... } // from try @ 013ce8cc with catch @ 013ce8e0 */
              lVar4 = FUN_00d5941c();
                    /* try { // try from 013ce8e8 to 014ce8f7 has its CatchHandler @ 013ce90c */
              lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
            }
                    /* try { // try from 013ce8f8 to 014ce903 has its CatchHandler @ 013ce534 */
            FUN_00da59dc(lVar4,*(undefined8 *)(lVar9 + 0xe8),*(undefined8 *)(unaff_x29 + -0xb0),
                         *(undefined8 *)(unaff_x29 + -0x90),0,unaff_x29 + -0x60);
                    /* try { // try from 013ce904 to 014ce90b has its CatchHandler @ 013ce90c */
            lVar4 = *(long *)(unaff_x29 + -0x60);
                    /* catch() { ... } // from try @ 013ce854 with catch @ 013ce90c
                       catch() { ... } // from try @ 013ce8e8 with catch @ 013ce90c
                       catch() { ... } // from try @ 013ce904 with catch @ 013ce90c */
            if ((lVar4 != 0) &&
               (lVar9 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0))
            goto LAB_013ce920;
          }
          if (4 < *(uint *)(plVar14 + 3)) {
            plVar14[8] = lVar4;
            plVar11 = *(long **)(unaff_x29 + -0x88);
            if (plVar11 != (long *)0x0) {
              lVar4 = *plVar11;
              uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
              if (uVar3 != 0) {
                piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_11440) {
                    puVar6 = (undefined8 *)(lVar4 + (long)(*piVar10 + 0x1b) * 0x10 + 0x138);
                    goto LAB_013ce9a0;
                  }
                  uVar3 = uVar3 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar3 != 0);
              }
              puVar6 = (undefined8 *)FUN_00d59724(plVar11,*(long *)StringLiteral_11440,0x1b);
LAB_013ce9a0:
              (*(code *)*puVar6)(plVar11,*(undefined8 *)(unaff_x29 + -0x70),
                                 *(undefined4 *)(unaff_x29 + -0x7c),uVar7,plVar14,puVar6[1]);
              if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
            goto LAB_013ce9f4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


