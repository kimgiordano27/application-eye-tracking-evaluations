/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$RegisterControl
ENTRY_POINT: 052d0a30
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__RegisterControl
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  long unaff_x19;
  uint uVar16;
  long *plVar17;
  long *unaff_x23;
  undefined4 uVar18;
  
                    /* catch() { ... } // from try @ 052d0a20 with catch @ 052d0a30 */
                    /* catch() { ... } // from try @ 052d0a1c with catch @ 052d0a34 */
                    /* catch() { ... } // from try @ 052d0a0c with catch @ 052d0a44 */
                    /* catch() { ... } // from try @ 052d08b4 with catch @ 052d0a48 */
  uVar8 = FUN_037f1860(param_6,**(undefined8 **)(param_1 + 0x680));
                    /* catch() { ... } // from try @ 052d0894 with catch @ 052d0a4c */
                    /* catch() { ... } // from try @ 052d07dc with catch @ 052d0a50 */
                    /* catch() { ... } // from try @ 052d081c with catch @ 052d0a54 */
  *(undefined8 *)(unaff_x19 + 0x118) = uVar8;
  thunk_FUN_02f411dc();
  uVar8 = *(undefined8 *)(unaff_x19 + 0x130);
                    /* try { // try from 052d0a64 to 053d0a67 has its CatchHandler @ 052d0a80 */
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  plVar17 = (long *)(unaff_x19 + 0x130);
  uVar9 = FUN_066cd30c(uVar8,0);
                    /* catch() { ... } // from try @ 052d0a64 with catch @ 052d0a80 */
  if ((uVar9 & 1) == 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x180);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar9 = FUN_066cd30c(uVar8,0);
    if (((uVar9 & 1) != 0) && (*(long *)(unaff_x19 + 0x180) == 0)) goto LAB_052d1304;
    lVar10 = FUN_037f1860();
    *plVar17 = lVar10;
    thunk_FUN_02f411dc(plVar17,lVar10);
  }
                    /* try { // try from 052d0ae0 to 053d0aeb has its CatchHandler @ 052d0570 */
  uVar8 = *(undefined8 *)(unaff_x19 + 0x120);
                    /* try { // try from 052d0aec to 053d0af3 has its CatchHandler @ 052d0af4 */
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
                    /* catch() { ... } // from try @ 052d0ab8 with catch @ 052d0af4
                       catch() { ... } // from try @ 052d0aec with catch @ 052d0af4 */
  uVar9 = FUN_066cd30c(uVar8,0);
  if ((uVar9 & 1) == 0) {
    uVar8 = FUN_037f1860();
    *(undefined8 *)(unaff_x19 + 0x120) = uVar8;
    thunk_FUN_02f411dc(unaff_x19 + 0x120,uVar8);
  }
  if (*plVar17 == 0) goto LAB_052d1304;
  *(undefined8 *)(unaff_x19 + 0x370) = *(undefined8 *)(*plVar17 + 0x30);
  thunk_FUN_02f411dc(unaff_x19 + 0x370);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x180);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar9 = FUN_066cd30c(uVar8,0);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_052d1304;
    uVar8 = FUN_066d47b8(*(long *)(unaff_x19 + 0x180),0);
    *(undefined8 *)(unaff_x19 + 0x228) = uVar8;
    thunk_FUN_02f411dc(unaff_x19 + 0x228);
    if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_052d1304;
    uVar18 = FUN_066d3ed0(*(long *)(unaff_x19 + 0x180),0);
    *(undefined4 *)(unaff_x19 + 0x230) = uVar18;
    *(undefined4 *)(unaff_x19 + 0x234) = param_3;
    *(undefined4 *)(unaff_x19 + 0x238) = param_4;
    if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_052d1304;
    uVar18 = FUN_066d4b64(*(long *)(unaff_x19 + 0x180),0);
    *(undefined4 *)(unaff_x19 + 0x23c) = uVar18;
    *(undefined4 *)(unaff_x19 + 0x240) = param_3;
    *(undefined4 *)(unaff_x19 + 0x244) = param_4;
    *(undefined4 *)(unaff_x19 + 0x248) = param_5;
    if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_052d1304;
    uVar18 = FUN_066d4ee0(*(long *)(unaff_x19 + 0x180),0);
    *(undefined4 *)(unaff_x19 + 0x24c) = uVar18;
    *(undefined4 *)(unaff_x19 + 0x250) = param_3;
    *(undefined4 *)(unaff_x19 + 0x254) = param_4;
    if (*(char *)(unaff_x19 + 200) == '\0') {
      if (*(char *)(unaff_x19 + 0xf0) != '\0') {
        if ((*(long *)(unaff_x19 + 0x180) == 0) ||
           (lVar10 = FUN_037f22a4(*(long *)(unaff_x19 + 0x180),*(undefined8 *)PTR_DAT_06d03aa8),
           lVar10 == 0)) goto LAB_052d1304;
        if (*(long *)(lVar10 + 0x18) == 0) goto LAB_052d0bf0;
        if (*(char *)(unaff_x19 + 0xf0) != '\0') {
          if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_052d1304;
          uVar8 = FUN_066c67ec(*(long *)(unaff_x19 + 0x180),0);
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_02f12b58(*unaff_x23);
          }
          lVar10 = FUN_03b4e5cc(uVar8,*(undefined8 *)PTR_DAT_06d036c0);
          if ((lVar10 == 0) ||
             (lVar12 = FUN_03a86fb0(lVar10,*(undefined8 *)PTR_DAT_06d3d6c0), lVar12 == 0))
          goto LAB_052d1304;
          uVar13 = *(uint *)(lVar12 + 0x18);
          if (0 < (int)uVar13) {
            uVar16 = 0;
            do {
              if (uVar13 <= uVar16) goto LAB_052d1308;
              lVar11 = *(long *)(lVar12 + (long)(int)uVar16 * 8 + 0x20);
              if (lVar11 == 0) goto LAB_052d1304;
              uVar8 = FUN_066c67ec(lVar11,0);
              if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                thunk_FUN_02f12b58(*unaff_x23);
              }
              FUN_066cdd04(uVar8,0);
              uVar13 = *(uint *)(lVar12 + 0x18);
              uVar16 = uVar16 + 1;
            } while ((int)uVar16 < (int)uVar13);
          }
          lVar12 = FUN_03a86fb0(lVar10,*(undefined8 *)PTR_DAT_06d3d6b8);
          puVar7 = PTR_DAT_06d3d6e0;
          puVar6 = PTR_DAT_06d3d6d8;
          puVar5 = PTR_DAT_06d3d6c8;
          puVar4 = PTR_DAT_06d14908;
          puVar3 = PTR_DAT_06d033a8;
          if (lVar12 == 0) goto LAB_052d1304;
          if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
            uVar9 = 0;
            uVar14 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
            do {
              if (uVar14 <= uVar9) goto LAB_052d1308;
              plVar17 = *(long **)(lVar12 + 0x20 + uVar9 * 8);
              if (plVar17 == (long *)0x0) {
LAB_052d0e10:
                if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                FUN_066cdd04(plVar17,0);
              }
              else {
                lVar11 = *plVar17;
                bVar1 = *(byte *)(lVar11 + 0x130);
                bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
                if ((bVar1 < bVar2) ||
                   (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4))
                {
                  bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
                  if ((bVar1 < bVar2) ||
                     (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar7)
                     ) {
                    bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
                    if ((bVar1 < bVar2) ||
                       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
                        *(long *)puVar5)) {
                      bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
                      if ((bVar1 < bVar2) ||
                         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
                          *(long *)puVar3)) {
                        bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
                        if ((bVar1 < bVar2) ||
                           (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
                            *(long *)puVar6)) goto LAB_052d0e10;
                      }
                    }
                  }
                }
              }
              uVar14 = (ulong)*(uint *)(lVar12 + 0x18);
              uVar9 = uVar9 + 1;
            } while ((long)uVar9 < (long)(int)*(uint *)(lVar12 + 0x18));
          }
          if ((*(long *)(unaff_x19 + 0x180) == 0) ||
             (lVar12 = FUN_037f22a4(*(long *)(unaff_x19 + 0x180),*(undefined8 *)PTR_DAT_06d03aa8),
             lVar12 == 0)) goto LAB_052d1304;
          uVar13 = *(uint *)(lVar12 + 0x18);
          if (0 < (int)uVar13) {
            uVar16 = 0;
            do {
              if (uVar13 <= uVar16) {
LAB_052d1308:
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              lVar11 = *(long *)(lVar12 + (long)(int)uVar16 * 8 + 0x20);
              if (lVar11 == 0) goto LAB_052d1304;
              uVar9 = FUN_06742b28(lVar11,0);
              if ((uVar9 & 1) == 0) {
                if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                FUN_066cdd04(lVar11,0);
              }
              uVar13 = *(uint *)(lVar12 + 0x18);
              uVar16 = uVar16 + 1;
            } while ((int)uVar16 < (int)uVar13);
          }
          uVar8 = FUN_066c9a48(lVar10,0);
          *(undefined8 *)(unaff_x19 + 800) = uVar8;
          thunk_FUN_02f411dc(unaff_x19 + 800);
          FUN_052d130c();
          if (*(long *)(unaff_x19 + 800) == 0) goto LAB_052d1304;
          uVar8 = FUN_037f1860(*(long *)(unaff_x19 + 800),*(undefined8 *)PTR_DAT_06d3d680);
          *(undefined8 *)(unaff_x19 + 0x328) = uVar8;
          thunk_FUN_02f411dc(unaff_x19 + 0x328);
          if (*(long *)(unaff_x19 + 800) == 0) goto LAB_052d1304;
          uVar8 = FUN_037f15fc(*(long *)(unaff_x19 + 800),*(undefined8 *)PTR_DAT_06d3d320);
          *(undefined8 *)(unaff_x19 + 0x378) = uVar8;
          thunk_FUN_02f411dc(unaff_x19 + 0x378);
        }
      }
    }
    else if (*(char *)(unaff_x19 + 0xf0) != '\0') {
LAB_052d0bf0:
      *(undefined1 *)(unaff_x19 + 0xf0) = 0;
    }
    FUN_052d13e8();
    puVar3 = PTR_DAT_06d01fb8;
    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d01fb8);
    FUN_066c9ce0(lVar10,*(undefined8 *)PTR_DAT_06d3d6f0,0);
    if (lVar10 == 0) goto LAB_052d1304;
    lVar12 = FUN_066c9a48(lVar10,0);
    uVar8 = FUN_066c67b0();
    if (lVar12 == 0) goto LAB_052d1304;
    FUN_066d5054(lVar12,uVar8,0);
    lVar12 = FUN_066c9a48(lVar10,0);
    if (lVar12 == 0) goto LAB_052d1304;
    FUN_066d3f5c(*(undefined4 *)(unaff_x19 + 0x230),*(undefined4 *)(unaff_x19 + 0x234),
                 *(undefined4 *)(unaff_x19 + 0x238),lVar12,0);
    lVar12 = FUN_066c9a48(lVar10,0);
    if (lVar12 == 0) goto LAB_052d1304;
    FUN_066d4bec(*(undefined4 *)(unaff_x19 + 0x23c),*(undefined4 *)(unaff_x19 + 0x240),
                 *(undefined4 *)(unaff_x19 + 0x244),*(undefined4 *)(unaff_x19 + 0x248),lVar12,0);
    uVar8 = FUN_066c9a48(lVar10,0);
    *(undefined8 *)(unaff_x19 + 0x338) = uVar8;
    thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x338),uVar8);
    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
    FUN_066c9ce0(lVar10,*(undefined8 *)PTR_DAT_06d3d6e8,0);
    if ((lVar10 == 0) || (lVar12 = FUN_066c9a48(lVar10,0), lVar12 == 0)) goto LAB_052d1304;
    FUN_066d5054(lVar12,*(undefined8 *)(unaff_x19 + 0x338),0);
    lVar12 = FUN_066c9a48(lVar10,0);
    if (DAT_071babf5 == '\0') {
      FUN_02f07e70(PTR_DAT_06d02c10);
      DAT_071babf5 = '\x01';
    }
    if (lVar12 == 0) goto LAB_052d1304;
    puVar15 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
    FUN_066d3f5c(*puVar15,puVar15[1],puVar15[2],lVar12,0);
    lVar12 = FUN_066c9a48(lVar10,0);
    if (DAT_071bab7c == '\0') {
      FUN_02f07e70(PTR_DAT_06d02bd8);
      DAT_071bab7c = '\x01';
    }
    if (lVar12 == 0) goto LAB_052d1304;
    puVar15 = *(undefined4 **)(*(long *)PTR_DAT_06d02bd8 + 0xb8);
    FUN_066d4bec(*puVar15,puVar15[1],puVar15[2],puVar15[3],lVar12,0);
    uVar8 = FUN_066c9a48(lVar10,0);
    *(undefined8 *)(unaff_x19 + 0x340) = uVar8;
    thunk_FUN_02f411dc(unaff_x19 + 0x340);
  }
  puVar3 = PTR_DAT_06d3c1e0;
  thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d08068);
  FUN_0555e110();
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_0527d318();
  uVar8 = *(undefined8 *)(unaff_x19 + 0x1a8);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar9 = FUN_066cd30c(uVar8,0);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x1a8) == 0) goto LAB_052d1304;
    uVar8 = FUN_037f15fc(*(long *)(unaff_x19 + 0x1a8),*(undefined8 *)PTR_DAT_06d06c70);
    *(undefined8 *)(unaff_x19 + 0x2f8) = uVar8;
    thunk_FUN_02f411dc(unaff_x19 + 0x2f8);
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 0xc0);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar9 = FUN_066cd30c(uVar8,0);
  if ((uVar9 & 1) == 0) {
    uVar8 = FUN_037f1860();
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar8;
    thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0xc0),uVar8);
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 0x1d8);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar9 = FUN_066cd30c(uVar8,0);
  if ((uVar9 & 1) == 0) {
    uVar8 = FUN_037f1860();
    *(undefined8 *)(unaff_x19 + 0x1d8) = uVar8;
    thunk_FUN_02f411dc(unaff_x19 + 0x1d8,uVar8);
  }
  FUN_052d1490();
  uVar8 = *(undefined8 *)(unaff_x19 + 0x140);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar9 = FUN_066cd30c(uVar8,0);
  if ((uVar9 & 1) == 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x198);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar9 = FUN_066cd30c(uVar8,0);
    if ((uVar9 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x198) != 0) {
        uVar8 = FUN_037f1860(*(long *)(unaff_x19 + 0x198),*(undefined8 *)PTR_DAT_06d3d670);
        *(undefined8 *)(unaff_x19 + 0x140) = uVar8;
        thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x140),uVar8);
        return;
      }
LAB_052d1304:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  }
  return;
}


