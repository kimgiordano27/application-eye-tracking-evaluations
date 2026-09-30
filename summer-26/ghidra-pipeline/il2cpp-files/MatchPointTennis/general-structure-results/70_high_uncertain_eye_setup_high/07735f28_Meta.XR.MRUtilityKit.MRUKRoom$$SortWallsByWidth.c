/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$SortWallsByWidth
ENTRY_POINT: 07735f28
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__SortWallsByWidth(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  float *pfVar8;
  long in_x9;
  ulong uVar9;
  int *in_x10;
  int *piVar10;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  int in_stack_0000029c;
  
                    /* try { // try from 07735f28 to 07835f2f has its CatchHandler @ 07735f78 */
  while (in_x11 != param_3) {
                    /* try { // try from 07735f30 to 07835f37 has its CatchHandler @ 07735f88 */
    in_x9 = in_x9 + -1;
                    /* try { // try from 07735f38 to 07835f3b has its CatchHandler @ 07735f54 */
    if (in_x9 == 0) {
                    /* try { // try from 07735f3c to 07835f3f has its CatchHandler @ 07735f50 */
                    /* catch() { ... } // from try @ 077359dc with catch @ 07735f40
                       try { // try from 07735f40 to 07835feb has its CatchHandler @ 07735764 */
                    /* catch() { ... } // from try @ 077359b8 with catch @ 07735f44 */
      puVar4 = (undefined8 *)FUN_044822ac();
                    /* catch() { ... } // from try @ 07735924 with catch @ 07735f48 */
      goto LAB_07735f5c;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
                    /* catch() { ... } // from try @ 07735994 with catch @ 07735f4c */
                    /* catch() { ... } // from try @ 07735f3c with catch @ 07735f50 */
                    /* catch() { ... } // from try @ 07735f38 with catch @ 07735f54 */
                    /* catch() { ... } // from try @ 07735a28 with catch @ 07735f58 */
  puVar4 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x26) * 0x10 + 0x138);
LAB_07735f5c:
                    /* catch() { ... } // from try @ 077359f4 with catch @ 07735f5c */
                    /* catch() { ... } // from try @ 07735f24 with catch @ 07735f60 */
                    /* catch() { ... } // from try @ 07735934 with catch @ 07735f64 */
  uVar5 = (*(code *)*puVar4)();
                    /* catch() { ... } // from try @ 07735e4c with catch @ 07735f68 */
                    /* catch() { ... } // from try @ 07735e20 with catch @ 07735f6c */
  if ((unaff_x20 != 0) && ((uVar5 & 1) != 0)) {
                    /* catch() { ... } // from try @ 07735ab4 with catch @ 07735f70 */
    lVar7 = *(long *)(unaff_x27 + 0xd8);
                    /* catch() { ... } // from try @ 0773594c with catch @ 07735f74 */
    if (lVar7 == 0) goto LAB_07736620;
                    /* catch() { ... } // from try @ 07735e7c with catch @ 07735f78
                       catch() { ... } // from try @ 07735f28 with catch @ 07735f78 */
    if (*(int *)(lVar7 + 0x18) == 0) {
LAB_0773661c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
                    /* catch() { ... } // from try @ 07735a68 with catch @ 07735f84
                       catch() { ... } // from try @ 07735f20 with catch @ 07735f84 */
    if (*(long *)(unaff_x27 + 0x18) == 0) goto LAB_07736620;
                    /* catch() { ... } // from try @ 07735dd4 with catch @ 07735f88
                       catch() { ... } // from try @ 07735f30 with catch @ 07735f88 */
    uVar11 = *(undefined8 *)(lVar7 + 0x20);
    uVar6 = FUN_0952a094(*(long *)(unaff_x27 + 0x18),0);
                    /* catch() { ... } // from try @ 07735c18 with catch @ 07735f94 */
                    /* catch() { ... } // from try @ 07735bf4 with catch @ 07735f98 */
                    /* catch() { ... } // from try @ 07735c30 with catch @ 07735f9c */
                    /* catch() { ... } // from try @ 07735c4c with catch @ 07735fa0 */
                    /* catch() { ... } // from try @ 07735edc with catch @ 07735fa4 */
                    /* catch() { ... } // from try @ 07735ed8 with catch @ 07735fa8 */
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 07735cb4 with catch @ 07735fac */
                    /* catch() { ... } // from try @ 07735ecc with catch @ 07735fb0 */
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
    }
                    /* catch() { ... } // from try @ 07735bd0 with catch @ 07735fb4 */
                    /* catch() { ... } // from try @ 07735ce8 with catch @ 07735fb8 */
                    /* catch() { ... } // from try @ 07735b98 with catch @ 07735fbc */
                    /* catch() { ... } // from try @ 07735b34 with catch @ 07735fc0 */
    uVar5 = FUN_09531730(uVar11,uVar6,0);
                    /* catch() { ... } // from try @ 07735ec0 with catch @ 07735fc4
                       catch() { ... } // from try @ 07735ec8 with catch @ 07735fc4 */
    if ((uVar5 & 1) != 0) {
                    /* catch() { ... } // from try @ 07735c60 with catch @ 07735fc8 */
                    /* catch() { ... } // from try @ 07735d04 with catch @ 07735fcc */
      if (*(long *)(unaff_x27 + 0xe0) != 0) {
                    /* catch() { ... } // from try @ 07735ebc with catch @ 07735fd0
                       catch() { ... } // from try @ 07735ec4 with catch @ 07735fd0
                       catch() { ... } // from try @ 07735ed0 with catch @ 07735fd0 */
        FUN_05b4c354(&stack0x00000190,*(long *)(unaff_x27 + 0xe0),0,*(undefined8 *)PTR_DAT_09f31928)
        ;
                    /* try { // try from 07735fec to 07835fef has its CatchHandler @ 07736128 */
        in_stack_000001d8 = in_stack_00000198;
        in_stack_000001d0 = in_stack_00000190;
        in_stack_000001e8 = in_stack_000001a8;
        in_stack_000001e0 = in_stack_000001a0;
        FUN_09512574(&stack0x00000150,&stack0x000001d0,0);
        in_stack_00000198 = in_stack_00000158;
        in_stack_00000190 = in_stack_00000150;
        in_stack_000001a8 = in_stack_00000168;
        in_stack_000001a0 = in_stack_00000160;
        in_stack_000001b8 = in_stack_00000178;
        in_stack_000001b0 = in_stack_00000170;
        in_stack_000001c8 = in_stack_00000188;
        in_stack_000001c0 = in_stack_00000180;
        lVar7 = *(long *)(unaff_x27 + 0xd8);
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x18) == 0) goto LAB_0773661c;
          if (*(long *)(lVar7 + 0x20) != 0) {
            FUN_0953ae04(&stack0x00000150,*(long *)(lVar7 + 0x20),0);
                    /* try { // try from 0773603c to 07836063 has its CatchHandler @ 07736138 */
            in_stack_00000098 = in_stack_00000158;
            in_stack_00000090 = in_stack_00000150;
            in_stack_000000a8 = in_stack_00000168;
            in_stack_000000a0 = in_stack_00000160;
            in_stack_000000b8 = in_stack_00000178;
            in_stack_000000b0 = in_stack_00000170;
            in_stack_000000c8 = in_stack_00000188;
            in_stack_000000c0 = in_stack_00000180;
                    /* try { // try from 07736064 to 0783607b has its CatchHandler @ 07735764 */
            in_stack_000000d8 = in_stack_00000198;
            in_stack_000000d0 = in_stack_00000190;
            in_stack_000000e8 = in_stack_000001a8;
            in_stack_000000e0 = in_stack_000001a0;
            in_stack_000000f8 = in_stack_000001b8;
            in_stack_000000f0 = in_stack_000001b0;
            in_stack_00000108 = in_stack_000001c8;
            in_stack_00000100 = in_stack_000001c0;
            FUN_09513338(&stack0x00000110,&stack0x000000d0,&stack0x00000090,0);
            in_stack_00000158 = in_stack_00000118;
            in_stack_00000150 = in_stack_00000110;
            in_stack_00000168 = in_stack_00000128;
            in_stack_00000160 = in_stack_00000120;
                    /* try { // try from 0773607c to 0783607f has its CatchHandler @ 077360f0 */
            in_stack_00000178 = in_stack_00000138;
            in_stack_00000170 = in_stack_00000130;
            in_stack_00000188 = in_stack_00000148;
            in_stack_00000180 = in_stack_00000140;
            if ((*(long *)(unaff_x27 + 0x18) != 0) &&
               (lVar7 = FUN_0952a094(*(long *)(unaff_x27 + 0x18),0), lVar7 != 0)) {
                    /* try { // try from 07736094 to 0783609b has its CatchHandler @ 07736138 */
                    /* try { // try from 0773609c to 078360b3 has its CatchHandler @ 07735764 */
              FUN_09539898(&stack0x00000110,lVar7,0);
              in_stack_00000018 = in_stack_00000118;
              in_stack_00000010 = in_stack_00000110;
              in_stack_00000028 = in_stack_00000128;
              in_stack_00000020 = in_stack_00000120;
                    /* try { // try from 077360b4 to 078360b7 has its CatchHandler @ 077360fc */
                    /* try { // try from 077360b8 to 078360d7 has its CatchHandler @ 07735764 */
              in_stack_00000038 = in_stack_00000138;
              in_stack_00000030 = in_stack_00000130;
              in_stack_00000048 = in_stack_00000148;
              in_stack_00000040 = in_stack_00000140;
              in_stack_00000058 = in_stack_00000158;
              in_stack_00000050 = in_stack_00000150;
              in_stack_00000068 = in_stack_00000168;
              in_stack_00000060 = in_stack_00000160;
              in_stack_00000078 = in_stack_00000178;
              in_stack_00000070 = in_stack_00000170;
              in_stack_00000088 = in_stack_00000188;
              in_stack_00000080 = in_stack_00000180;
              FUN_09513338(&stack0x00000110,&stack0x00000050,&stack0x00000010,0);
                    /* try { // try from 077360d8 to 07836113 has its CatchHandler @ 07736138 */
                    /* catch() { ... } // from try @ 0773607c with catch @ 077360f0 */
                    /* catch() { ... } // from try @ 077360b4 with catch @ 077360fc */
              FUN_09512d4c(0,&stack0x00000210,0xe,0);
              FUN_09512d4c(0,&stack0x00000210,0xd,0);
                    /* try { // try from 07736114 to 0783611f has its CatchHandler @ 07735764 */
                    /* try { // try from 07736120 to 07836127 has its CatchHandler @ 07736138 */
              FUN_09512d4c(0,&stack0x00000210,0xc,0);
                    /* catch() { ... } // from try @ 07735fec with catch @ 07736128 */
              FUN_09512574(&stack0x00000110,&stack0x00000210,0);
                    /* catch() { ... } // from try @ 0773603c with catch @ 07736138
                       catch() { ... } // from try @ 07736094 with catch @ 07736138
                       catch() { ... } // from try @ 077360d8 with catch @ 07736138
                       catch() { ... } // from try @ 07736120 with catch @ 07736138 */
              in_stack_000001d8 = in_stack_00000118;
              in_stack_000001d0 = in_stack_00000110;
              in_stack_000001e8 = in_stack_00000128;
              in_stack_000001e0 = in_stack_00000120;
              FUN_095126ac(&stack0x00000110,&stack0x000001d0,0);
              fVar2 = DAT_01c7607c;
              lVar7 = *(long *)(unaff_x27 + 0xc0);
              if (lVar7 != 0) {
                uVar5 = 0;
                do {
                  iVar3 = FUN_094f3ae4(lVar7,0);
                  if ((long)iVar3 <= (long)uVar5) {
                    return;
                  }
                  uVar1 = (int)uVar5 + in_stack_0000029c;
                  if (unaff_x24 != 0) {
                    if (unaff_x19 == 0) break;
                    if (*(uint *)(unaff_x19 + 0x18) <= uVar5) goto LAB_0773661c;
                    lVar7 = unaff_x19 + uVar5 * 0xc;
                    uVar14 = *(undefined4 *)(lVar7 + 0x24);
                    uVar16 = *(undefined4 *)(lVar7 + 0x28);
                    uVar12 = FUN_09513720(*(undefined4 *)(lVar7 + 0x20),&stack0x00000250,0);
                    if (*(uint *)(unaff_x24 + 0x18) <= uVar1) goto LAB_0773661c;
                    lVar7 = unaff_x24 + (long)(int)uVar1 * 0xc;
                    *(undefined4 *)(lVar7 + 0x20) = uVar12;
                    *(undefined4 *)(lVar7 + 0x24) = uVar14;
                    *(undefined4 *)(lVar7 + 0x28) = uVar16;
                  }
                  lVar7 = *unaff_x22;
                  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar9 != 0) {
                    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f30ab8) {
                        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                        goto LAB_0773623c;
                      }
                      uVar9 = uVar9 - 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar4 = (undefined8 *)FUN_044822ac();
LAB_0773623c:
                  uVar9 = (*(code *)*puVar4)();
                  if ((unaff_x25 != 0) && ((uVar9 & 1) != 0)) {
                    if (*(uint *)(unaff_x25 + 0x18) <= uVar5) goto LAB_0773661c;
                    lVar7 = unaff_x25 + uVar5 * 0xc;
                    fVar15 = *(float *)(lVar7 + 0x24);
                    fVar17 = *(float *)(lVar7 + 0x28);
                    fVar13 = (float)FUN_09513720(*(undefined4 *)(lVar7 + 0x20),&stack0x00000210,0);
                    if (DAT_0a51bf42 == '\0') {
                      FUN_04447ba8(PTR_DAT_09f1e748);
                      DAT_0a51bf42 = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    fVar18 = SQRT(fVar17 * fVar17 + fVar13 * fVar13 + fVar15 * fVar15);
                    if (fVar18 <= fVar2) {
                      if (DAT_0a51bf43 == '\0') {
                        FUN_04447ba8(PTR_DAT_09f1e740);
                        DAT_0a51bf43 = '\x01';
                      }
                      pfVar8 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
                      fVar13 = *pfVar8;
                      fVar15 = pfVar8[1];
                      fVar17 = pfVar8[2];
                    }
                    else {
                      fVar13 = fVar13 / fVar18;
                      fVar15 = fVar15 / fVar18;
                      fVar17 = fVar17 / fVar18;
                    }
                    if (unaff_x23 == 0) break;
                    if (*(uint *)(unaff_x23 + 0x18) <= uVar1) goto LAB_0773661c;
                    lVar7 = unaff_x23 + (long)(int)uVar1 * 0xc;
                    *(float *)(lVar7 + 0x20) = fVar13;
                    *(float *)(lVar7 + 0x24) = fVar15;
                    *(float *)(lVar7 + 0x28) = fVar17;
                  }
                  lVar7 = *unaff_x22;
                  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar9 != 0) {
                    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f30ab8) {
                        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 6) * 0x10 + 0x138);
                        goto LAB_077363a4;
                      }
                      uVar9 = uVar9 - 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar4 = (undefined8 *)FUN_044822ac();
LAB_077363a4:
                  uVar9 = (*(code *)*puVar4)();
                  if ((unaff_x21 != 0) && ((uVar9 & 1) != 0)) {
                    if (*(uint *)(unaff_x21 + 0x18) <= uVar5) goto LAB_0773661c;
                    lVar7 = unaff_x21 + uVar5 * 0x10;
                    fVar15 = *(float *)(lVar7 + 0x24);
                    fVar17 = *(float *)(lVar7 + 0x28);
                    uVar12 = *(undefined4 *)(lVar7 + 0x2c);
                    fVar13 = (float)FUN_09513720(*(undefined4 *)(lVar7 + 0x20),&stack0x00000210,0);
                    if (DAT_0a51bf42 == '\0') {
                      FUN_04447ba8(PTR_DAT_09f1e748);
                      DAT_0a51bf42 = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    fVar18 = SQRT(fVar17 * fVar17 + fVar13 * fVar13 + fVar15 * fVar15);
                    if (fVar18 <= fVar2) {
                      if (DAT_0a51bf43 == '\0') {
                        FUN_04447ba8(PTR_DAT_09f1e740);
                        DAT_0a51bf43 = '\x01';
                      }
                      pfVar8 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
                      fVar13 = *pfVar8;
                      fVar15 = pfVar8[1];
                      fVar17 = pfVar8[2];
                    }
                    else {
                      fVar13 = fVar13 / fVar18;
                      fVar15 = fVar15 / fVar18;
                      fVar17 = fVar17 / fVar18;
                    }
                    if (unaff_x26 == 0) break;
                    if (*(uint *)(unaff_x26 + 0x18) <= uVar1) goto LAB_0773661c;
                    lVar7 = unaff_x26 + (long)(int)uVar1 * 0x10;
                    *(undefined4 *)(lVar7 + 0x2c) = 0;
                    *(float *)(lVar7 + 0x20) = fVar13;
                    *(float *)(lVar7 + 0x24) = fVar15;
                    *(float *)(lVar7 + 0x28) = fVar17;
                    if (*(uint *)(unaff_x26 + 0x18) <= uVar1) goto LAB_0773661c;
                    *(undefined4 *)(lVar7 + 0x2c) = uVar12;
                  }
                  lVar7 = *(long *)(unaff_x27 + 0xc0);
                  uVar5 = uVar5 + 1;
                } while (lVar7 != 0);
              }
            }
          }
        }
      }
      goto LAB_07736620;
    }
  }
  lVar7 = *unaff_x22;
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f30ab8) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
        goto LAB_0773652c;
      }
      uVar5 = uVar5 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_044822ac();
LAB_0773652c:
  uVar5 = (*(code *)*puVar4)();
  if ((unaff_x25 != 0) && ((uVar5 & 1) != 0)) {
    FUN_07a61200();
  }
  lVar7 = *unaff_x22;
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f30ab8) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 6) * 0x10 + 0x138);
        goto LAB_077365ac;
      }
      uVar5 = uVar5 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_044822ac();
LAB_077365ac:
  uVar5 = (*(code *)*puVar4)();
  if ((unaff_x21 != 0) && ((uVar5 & 1) != 0)) {
    FUN_07a61200();
  }
  if (unaff_x24 != 0) {
    if (unaff_x19 == 0) {
LAB_07736620:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_07a61200();
  }
  return;
}


