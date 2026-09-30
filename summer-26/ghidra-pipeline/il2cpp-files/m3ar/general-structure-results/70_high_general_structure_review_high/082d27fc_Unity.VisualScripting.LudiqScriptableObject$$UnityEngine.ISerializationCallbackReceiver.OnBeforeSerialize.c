/*
FUNCTION_NAME: Unity.VisualScripting.LudiqScriptableObject$$UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
ENTRY_POINT: 082d27fc
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined4
Unity_VisualScripting_LudiqScriptableObject__UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
          (undefined1 param_1 [16],ulong param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  byte bVar2;
  float fVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined4 *puVar22;
  long unaff_x19;
  uint uVar23;
  long unaff_x20;
  undefined8 uVar24;
  ulong uVar25;
  uint unaff_w21;
  long *plVar26;
  int unaff_w22;
  long *plVar27;
  undefined8 uVar28;
  long *plVar29;
  uint *puVar30;
  long unaff_x23;
  int unaff_w24;
  uint uVar31;
  ulong uVar32;
  undefined4 unaff_w25;
  long unaff_x26;
  uint unaff_w27;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  uint in_stack_00000020;
  uint uStack0000000000000024;
  int in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
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
  undefined4 in_stack_000000e0;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  long in_stack_00000138;
  uint uStack0000000000000148;
  undefined1 uStack000000000000014c;
  
code_r0x082d27fc:
  lVar12 = FUN_08325f94(param_3,param_4);
  if (lVar12 != 0) {
                    /* try { // try from 082d2804 to 083d2807 has its CatchHandler @ 082d2ba4 */
                    /* try { // try from 082d2808 to 083d280b has its CatchHandler @ 082d1ca4 */
                    /* try { // try from 082d280c to 083d280f has its CatchHandler @ 082d2b4c */
                    /* try { // try from 082d2810 to 083d2813 has its CatchHandler @ 082d2b48 */
                    /* try { // try from 082d2814 to 083d2817 has its CatchHandler @ 082d2b40 */
    uVar13 = FUN_057d50ec(lVar12,*(undefined4 *)(unaff_x19 + 0x6bc),*(undefined8 *)PTR_DAT_08ff6858)
    ;
                    /* try { // try from 082d2818 to 083d281b has its CatchHandler @ 082d1ca4 */
                    /* try { // try from 082d281c to 083d281f has its CatchHandler @ 082d2b58 */
                    /* try { // try from 082d2820 to 083d2823 has its CatchHandler @ 082d2b30 */
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w21) goto LAB_082d4458;
                    /* try { // try from 082d2824 to 083d2827 has its CatchHandler @ 082d2b38 */
                    /* try { // try from 082d2828 to 083d282f has its CatchHandler @ 082d2b34 */
    *(undefined8 *)(unaff_x23 + (long)(int)unaff_w21 * (long)unaff_w24 + 0x10) = uVar13;
                    /* try { // try from 082d2830 to 083d2833 has its CatchHandler @ 082d2aac */
                    /* try { // try from 082d2834 to 083d2837 has its CatchHandler @ 082d2ae4 */
                    /* try { // try from 082d2838 to 083d283f has its CatchHandler @ 082d2ad8 */
    if ((*(long *)(unaff_x19 + 0x3a0) != 0) &&
       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar12 != 0)) {
      uVar9 = *(uint *)(unaff_x19 + 0x4a0);
                    /* try { // try from 082d2840 to 083d2847 has its CatchHandler @ 082d2ab8 */
                    /* try { // try from 082d2848 to 083d284b has its CatchHandler @ 082d2ab4 */
      if (uVar9 < *(uint *)(lVar12 + 0x18)) {
                    /* try { // try from 082d284c to 083d284f has its CatchHandler @ 082d2a08 */
                    /* try { // try from 082d2850 to 083d2857 has its CatchHandler @ 082d2a9c */
                    /* try { // try from 082d2858 to 083d285f has its CatchHandler @ 082d2a00 */
        puVar22 = (undefined4 *)(lVar12 + 0x20 + (long)(int)uVar9 * (long)unaff_w24);
                    /* try { // try from 082d2860 to 083d2863 has its CatchHandler @ 082d2980 */
        *puVar22 = *(undefined4 *)(unaff_x19 + 0x65c);
                    /* try { // try from 082d2864 to 083d286b has its CatchHandler @ 082d29e0 */
        puVar22[2] = unaff_w22;
                    /* try { // try from 082d286c to 083d2873 has its CatchHandler @ 082d298c */
        if (unaff_w27 < *(uint *)(unaff_x26 + 0x18)) {
                    /* try { // try from 082d2874 to 083d287b has its CatchHandler @ 082d2984 */
                    /* try { // try from 082d287c to 083d287f has its CatchHandler @ 082d2978 */
                    /* catch() { ... } // from try @ 082d268c with catch @ 082d2880
                       try { // try from 082d2880 to 083d28af has its CatchHandler @ 082d1ca4 */
                    /* catch() { ... } // from try @ 082d25a4 with catch @ 082d2884 */
                    /* catch() { ... } // from try @ 082d24e4 with catch @ 082d2888 */
                    /* catch() { ... } // from try @ 082d2624 with catch @ 082d288c */
                    /* catch() { ... } // from try @ 082d26a0 with catch @ 082d2890 */
          *(int *)(lVar12 + 0x20 + (long)(int)uVar9 * (long)unaff_w24 + 0xc) =
               (*(int *)(in_stack_00000048 + (long)(int)unaff_w27 * 0x10 + 8) - unaff_w22) + 1;
          *(undefined4 *)(unaff_x19 + 0x65c) = 0;
          *(undefined4 *)(unaff_x19 + 0x120) = unaff_w25;
LAB_082d35bc:
          in_stack_00000038 = in_stack_00000038 + 1;
LAB_082d3ad0:
          *(uint *)(unaff_x19 + 0x4a0) = uVar9 + 1;
          uVar9 = unaff_w27;
          while( true ) {
            uVar6 = *(uint *)(unaff_x26 + 0x18);
            uVar23 = uVar9 + 1;
            if ((int)uVar6 <= (int)uVar23) break;
            if (uVar6 <= uVar23) goto LAB_082d4458;
            puVar30 = (uint *)(in_stack_00000048 + (long)(int)uVar23 * 0x10 + 4);
            if (*puVar30 == 0) break;
            if (*(long *)(unaff_x19 + 0x3a0) == 0) goto LAB_082d43c0;
            plVar27 = (long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38);
            lVar12 = *plVar27;
            iVar10 = *(int *)(unaff_x19 + 0x4a0);
            if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) <= iVar10)) {
              if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              FUN_04d0f664(plVar27,iVar10 + 1,1,*(undefined8 *)PTR_DAT_08ff6878);
              uVar6 = *(uint *)(unaff_x26 + 0x18);
            }
            if (uVar6 <= uVar23) goto LAB_082d4458;
            uVar6 = *puVar30;
            unaff_w25 = *(undefined4 *)(unaff_x19 + 0x120);
            if ((*(char *)(unaff_x19 + 0x33a) == '\0') || (uVar6 != 0x3c)) goto LAB_082d28b0;
            uVar25 = FUN_083025c8();
            unaff_w27 = uStack0000000000000148;
            if ((uVar25 & 1) == 0) goto LAB_082d28ac;
            if (*(uint *)(unaff_x26 + 0x18) <= uVar23) goto LAB_082d4458;
            unaff_w24 = 0x178;
            unaff_w22 = *(int *)(in_stack_00000048 + (long)(int)uVar23 * 0x10 + 8);
            if ((*(byte *)(unaff_x19 + 0x284) & 1) != 0) {
              *(undefined1 *)(unaff_x19 + 0x292) = 1;
            }
            puVar4 = PTR_DAT_08fc16b0;
            uVar9 = uStack0000000000000148;
            if (*(int *)(unaff_x19 + 0x65c) == 1) {
              lVar12 = *(long *)PTR_DAT_08fc16b0;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_0408f364();
                lVar12 = *(long *)puVar4;
              }
              lVar12 = **(long **)(lVar12 + 0xb8);
              if (lVar12 == 0) goto LAB_082d43c0;
              if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_082d4458;
              lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
              *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
              if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
                 (unaff_x20 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), unaff_x20 == 0))
              goto LAB_082d43c0;
              unaff_w21 = *(uint *)(unaff_x19 + 0x4a0);
              if (*(uint *)(unaff_x20 + 0x18) <= unaff_w21) goto LAB_082d4458;
              unaff_x23 = unaff_x20 + 0x20;
              lVar12 = unaff_x23 + (long)(int)unaff_w21 * 0x178;
              *(short *)(lVar12 + 4) = *(short *)(unaff_x19 + 0x6bc) + -0x2000;
              *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(unaff_x19 + 0x100);
              *(undefined4 *)(lVar12 + 0x30) = *(undefined4 *)(unaff_x19 + 0x120);
              param_3 = *(long *)(unaff_x19 + 0x6b0);
              if (param_3 == 0) goto LAB_082d43c0;
              param_4 = 0;
              goto code_r0x082d27fc;
            }
          }
          goto LAB_082d3af0;
        }
      }
      goto LAB_082d4458;
    }
  }
  goto LAB_082d43c0;
LAB_082d28ac:
  unaff_w25 = *(undefined4 *)(unaff_x19 + 0x120);
LAB_082d28b0:
                    /* try { // try from 082d28b0 to 083d28b3 has its CatchHandler @ 082d28bc */
  uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x118);
                    /* catch() { ... } // from try @ 082d28b0 with catch @ 082d28bc */
  uStack000000000000014c = 0;
                    /* try { // try from 082d28c4 to 083d28cb has its CatchHandler @ 082d2c50 */
  if (*(int *)(unaff_x19 + 0x65c) != 0) goto LAB_082d2978;
  uVar31 = *(uint *)(unaff_x19 + 0x284);
                    /* try { // try from 082d28cc to 083d28f7 has its CatchHandler @ 082d1ca4 */
  if ((uVar31 >> 4 & 1) == 0) {
                    /* catch() { ... } // from try @ 082d266c with catch @ 082d28d0 */
    if ((uVar31 >> 3 & 1) == 0) {
                    /* catch() { ... } // from try @ 082d22ec with catch @ 082d28d4 */
      if ((uVar31 >> 5 & 1) != 0) goto LAB_082d28d8;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
                    /* try { // try from 082d2944 to 083d2947 has its CatchHandler @ 082d2954 */
      uVar25 = FUN_0745015c(uVar6,0);
      if ((uVar25 & 1) != 0) {
                    /* catch() { ... } // from try @ 082d2944 with catch @ 082d2954 */
                    /* try { // try from 082d295c to 083d2963 has its CatchHandler @ 082d2c50 */
        if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
                    /* try { // try from 082d2964 to 083d29b7 has its CatchHandler @ 082d1ca4 */
          thunk_FUN_0408f364();
        }
                    /* catch() { ... } // from try @ 082d24c4 with catch @ 082d2968 */
                    /* catch() { ... } // from try @ 082d26e0 with catch @ 082d296c */
                    /* catch() { ... } // from try @ 082d26cc with catch @ 082d2970 */
        uVar6 = FUN_074505fc(uVar6,0);
        goto LAB_082d2974;
      }
    }
  }
  else {
LAB_082d28d8:
                    /* catch() { ... } // from try @ 082d25b8 with catch @ 082d28d8 */
    if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
                    /* try { // try from 082d28f8 to 083d28fb has its CatchHandler @ 082d2908 */
    uVar25 = System_Threading_Monitor__TryEnter(uVar6,0);
    if ((uVar25 & 1) != 0) {
                    /* catch() { ... } // from try @ 082d28f8 with catch @ 082d2908 */
                    /* try { // try from 082d2910 to 083d2917 has its CatchHandler @ 082d2c50 */
      if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
                    /* try { // try from 082d2918 to 083d2943 has its CatchHandler @ 082d1ca4 */
                    /* catch() { ... } // from try @ 082d2584 with catch @ 082d291c */
                    /* catch() { ... } // from try @ 082d2398 with catch @ 082d2920 */
      uVar6 = FUN_07450484(uVar6,0);
                    /* catch() { ... } // from try @ 082d24f8 with catch @ 082d2924 */
LAB_082d2974:
                    /* catch() { ... } // from try @ 082d2634 with catch @ 082d2974 */
      uVar6 = uVar6 & 0xffff;
    }
  }
LAB_082d2978:
                    /* catch() { ... } // from try @ 082d2604 with catch @ 082d2978
                       catch() { ... } // from try @ 082d287c with catch @ 082d2978 */
                    /* catch() { ... } // from try @ 082d25f8 with catch @ 082d297c */
  uVar9 = uVar9 + 2;
                    /* catch() { ... } // from try @ 082d2860 with catch @ 082d2980 */
                    /* catch() { ... } // from try @ 082d26bc with catch @ 082d2984
                       catch() { ... } // from try @ 082d2874 with catch @ 082d2984 */
  if ((int)uVar9 < (int)*(uint *)(unaff_x26 + 0x18)) {
                    /* catch() { ... } // from try @ 082d254c with catch @ 082d2988 */
    if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_082d4458;
                    /* catch() { ... } // from try @ 082d25d8 with catch @ 082d298c
                       catch() { ... } // from try @ 082d286c with catch @ 082d298c */
                    /* catch() { ... } // from try @ 082d248c with catch @ 082d2990 */
                    /* catch() { ... } // from try @ 082d2454 with catch @ 082d2994 */
    uVar31 = *(uint *)(in_stack_00000048 + (long)(int)uVar9 * 0x10 + 4);
                    /* catch() { ... } // from try @ 082d2300 with catch @ 082d2998 */
  }
  else {
    uVar31 = 0;
  }
  uStack0000000000000024 = uVar6;
  if (*(char *)(unaff_x19 + 0x33b) == '\0') {
LAB_082d2afc:
    lVar12 = FUN_0830d168();
    if (lVar12 == 0) {
      if (*(uint *)(unaff_x26 + 0x18) <= uVar23) goto LAB_082d4458;
      FUN_0830d810();
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      iVar10 = FUN_08322014(0);
      bVar5 = *(uint *)(unaff_x26 + 0x18) <= uVar23;
      if (iVar10 == 0) {
        if (bVar5) goto LAB_082d4458;
        uStack0000000000000024 = 0x25a1;
      }
      else {
        if (bVar5) goto LAB_082d4458;
        if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uStack0000000000000024 = FUN_08322014(0);
      }
      *puVar30 = uStack0000000000000024;
      uVar28 = *(undefined8 *)(unaff_x19 + 0x100);
      if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar12 = FUN_082eacf4(uStack0000000000000024,uVar28,1,0,400,(long)&stack0x00000148 + 4,0);
      if (lVar12 == 0) {
        if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar12 = FUN_08322588(0);
        if (lVar12 != 0) {
          if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          lVar12 = FUN_08322588(0);
          if (lVar12 == 0) goto LAB_082d43c0;
          if (0 < *(int *)(lVar12 + 0x18)) {
            uVar28 = *(undefined8 *)(unaff_x19 + 0x100);
            if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            uVar14 = FUN_08322588(0);
            if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
              thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
            }
            lVar12 = FUN_082eb454(uStack0000000000000024,uVar28,uVar14,1,0,400,
                                  (long)&stack0x00000148 + 4,0);
            unaff_x26 = in_stack_00000040;
            if (lVar12 != 0) goto LAB_082d2f0c;
          }
        }
        if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar28 = FUN_08322188(0);
        if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
          thunk_FUN_0408f364(*(long *)PTR_DAT_08f65598);
        }
        uVar25 = FUN_0858816c(uVar28,0,0);
        if ((uVar25 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uVar28 = FUN_08322188(0);
          if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
            thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
          }
          lVar12 = FUN_082eacf4(uStack0000000000000024,uVar28,1,0,400,(long)&stack0x00000148 + 4,0);
          if (lVar12 != 0) goto LAB_082d2f0c;
        }
        if (*(uint *)(unaff_x26 + 0x18) <= uVar23) goto LAB_082d4458;
        *puVar30 = 0x20;
        uVar28 = *(undefined8 *)(unaff_x19 + 0x100);
        if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uStack0000000000000024 = 0x20;
        lVar12 = FUN_082eacf4(0x20,uVar28,1,0,400,(long)&stack0x00000148 + 4,0);
        if (lVar12 == 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar23) goto LAB_082d4458;
          *puVar30 = 3;
          uVar28 = *(undefined8 *)(unaff_x19 + 0x100);
          if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uStack0000000000000024 = 3;
          lVar12 = FUN_082eacf4(3,uVar28,1,0,400,(long)&stack0x00000148 + 4,0);
        }
      }
LAB_082d2f0c:
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar25 = FUN_0832212c(0);
      if ((uVar25 & 1) == 0) {
        plVar27 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08f65d88,4);
        if (uVar6 >> 0x10 == 0) {
          in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,uVar6);
          lVar15 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x00000050);
          if (plVar27 == (long *)0x0) goto LAB_082d43c0;
          if ((lVar15 != 0) &&
             (lVar19 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar27 + 0x40)), lVar19 == 0))
          goto LAB_082d445c;
          if ((int)plVar27[3] == 0) goto LAB_082d4458;
          plVar27[4] = lVar15;
          if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_082d43c0;
          lVar15 = thunk_FUN_0858dfc0(*(long *)(unaff_x19 + 0xf8),0);
          if ((lVar15 != 0) &&
             (lVar19 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar27 + 0x40)), lVar19 == 0))
          goto LAB_082d445c;
          if ((*(uint *)(plVar27 + 3) & 0xfffffffe) == 0) goto LAB_082d4458;
          plVar27[5] = lVar15;
          if (lVar12 == 0) goto LAB_082d43c0;
          in_stack_000000e0 = *(undefined4 *)(lVar12 + 0x14);
          lVar15 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x000000e0);
          if ((lVar15 != 0) &&
             (lVar19 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar27 + 0x40)), lVar19 == 0))
          goto LAB_082d445c;
          if (*(uint *)(plVar27 + 3) < 3) goto LAB_082d4458;
          plVar27[6] = lVar15;
          lVar15 = thunk_FUN_0858dfc0();
          if ((lVar15 != 0) &&
             (lVar19 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar27 + 0x40)), lVar19 == 0))
          goto LAB_082d445c;
          if ((*(uint *)(plVar27 + 3) & 0xfffffffc) == 0) goto LAB_082d4458;
          plVar27[7] = lVar15;
          puVar18 = (undefined8 *)PTR_DAT_08ff6898;
        }
        else {
          in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,uVar6);
          lVar15 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x00000050);
          if (plVar27 == (long *)0x0) goto LAB_082d43c0;
          if ((lVar15 != 0) &&
             (lVar19 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar27 + 0x40)), lVar19 == 0))
          goto LAB_082d445c;
          if ((int)plVar27[3] == 0) goto LAB_082d4458;
          plVar27[4] = lVar15;
          if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_082d43c0;
          lVar15 = thunk_FUN_0858dfc0(*(long *)(unaff_x19 + 0xf8),0);
          if ((lVar15 != 0) &&
             (lVar19 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar27 + 0x40)), lVar19 == 0))
          goto LAB_082d445c;
          if ((*(uint *)(plVar27 + 3) & 0xfffffffe) == 0) goto LAB_082d4458;
          plVar27[5] = lVar15;
          if (lVar12 == 0) goto LAB_082d43c0;
          in_stack_000000e0 = *(undefined4 *)(lVar12 + 0x14);
          lVar15 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x000000e0);
          if ((lVar15 != 0) &&
             (lVar19 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar27 + 0x40)), lVar19 == 0))
          goto LAB_082d445c;
          if (*(uint *)(plVar27 + 3) < 3) goto LAB_082d4458;
          plVar27[6] = lVar15;
          lVar15 = thunk_FUN_0858dfc0();
          if ((lVar15 != 0) &&
             (lVar19 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar27 + 0x40)), lVar19 == 0))
          goto LAB_082d445c;
          if ((*(uint *)(plVar27 + 3) & 0xfffffffc) == 0) goto LAB_082d4458;
          plVar27[7] = lVar15;
          puVar18 = (undefined8 *)PTR_DAT_08ff6890;
        }
        uVar28 = FUN_0736a31c(*puVar18,plVar27,0);
        if (*(int *)(*(long *)PTR_DAT_08f655a0 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        FUN_085392e4(uVar28);
        unaff_x26 = in_stack_00000040;
      }
    }
  }
  else {
                    /* try { // try from 082d29b8 to 083d29bb has its CatchHandler @ 082d29c8 */
    if (*(int *)(*(long *)PTR_DAT_08ff65e0 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
                    /* catch() { ... } // from try @ 082d29b8 with catch @ 082d29c8 */
                    /* try { // try from 082d29d0 to 083d29d7 has its CatchHandler @ 082d2c50 */
    uVar25 = FUN_0832c2a4(uVar6,0);
                    /* try { // try from 082d29d8 to 083d2a27 has its CatchHandler @ 082d1ca4 */
                    /* catch() { ... } // from try @ 082d22cc with catch @ 082d29dc */
                    /* catch() { ... } // from try @ 082d2518 with catch @ 082d29e0
                       catch() { ... } // from try @ 082d2864 with catch @ 082d29e0 */
    if (((uVar25 & 1) == 0) || (uVar31 == 0xfe0e)) {
                    /* catch() { ... } // from try @ 082d2464 with catch @ 082d29e4 */
                    /* catch() { ... } // from try @ 082d2440 with catch @ 082d29e8 */
                    /* catch() { ... } // from try @ 082d2378 with catch @ 082d29ec */
                    /* catch() { ... } // from try @ 082d2358 with catch @ 082d29f0 */
      if (*(int *)(*(long *)PTR_DAT_08ff65e0 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar25 = FUN_0832c224(uVar6,0);
      if (((uVar25 & 1) == 0) || (uVar31 != 0xfe0f)) goto LAB_082d2afc;
    }
    if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar12 = FUN_08322990(0);
    if (lVar12 == 0) goto LAB_082d2afc;
    if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar12 = FUN_08322990(0);
    if (lVar12 == 0) goto LAB_082d43c0;
    if (*(int *)(lVar12 + 0x18) < 1) goto LAB_082d2afc;
    uVar28 = *(undefined8 *)(unaff_x19 + 0x100);
    if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar14 = FUN_08322990(0);
    uVar8 = *(undefined4 *)(unaff_x19 + 0x280);
    uVar1 = *(undefined4 *)(unaff_x19 + 0x238);
    if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
    }
    lVar12 = FUN_082eb668(uVar6,uVar28,uVar14,1,uVar8,uVar1,(long)&stack0x00000148 + 4,0);
    unaff_x26 = in_stack_00000040;
    if (lVar12 == 0) goto LAB_082d2afc;
  }
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar15 == 0)) goto LAB_082d43c0;
  if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_082d4458;
  *(undefined8 *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) = 0;
  if (lVar12 == 0) goto LAB_082d43c0;
  unaff_w27 = uVar23;
  if (*(char *)(lVar12 + 0x10) == '\x01') {
    if (*(long *)(lVar12 + 0x18) == 0) goto LAB_082d43c0;
    iVar10 = FUN_082d75b4(*(long *)(lVar12 + 0x18),0);
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
    iVar11 = FUN_082d75b4(*(long *)(unaff_x19 + 0x100),0);
    bVar5 = iVar10 != iVar11;
    if (bVar5) {
      plVar27 = *(long **)(lVar12 + 0x18);
      if (plVar27 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_08fc1610 + 0x130);
        if (*(byte *)(*plVar27 + 0x130) < bVar2) {
          plVar27 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar2 * 8 + -8) !=
                 *(long *)PTR_DAT_08fc1610) {
          plVar27 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x100) = plVar27;
    }
    if ((uVar31 >> 4 == 0xfe0) || (uVar31 - 0xe0100 < 0xf0)) {
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
      iVar10 = FUN_082e450c(*(long *)(unaff_x19 + 0x100),uStack0000000000000024,uVar31,0);
      if (iVar10 != 0) {
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
        uVar25 = FUN_082e6834(*(long *)(unaff_x19 + 0x100),iVar10,&stack0x00000130,0);
        if ((uVar25 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
             (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar15 == 0))
          goto LAB_082d43c0;
          if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_082d4458;
          *(undefined8 *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
               in_stack_00000130;
        }
      }
      if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_082d4458;
      *(undefined4 *)(in_stack_00000048 + (long)(int)uVar9 * 0x10 + 4) = 0x1a;
      unaff_w27 = uVar9;
    }
    if ((in_stack_00000020 & 1) != 0) {
      if (((*(long *)(unaff_x19 + 0x100) == 0) ||
          (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar15 == 0)) ||
         (lVar15 = *(long *)(lVar15 + 0x38), lVar15 == 0)) goto LAB_082d43c0;
      uVar25 = FUN_070b305c(lVar15,*(undefined4 *)(lVar12 + 0x28),&stack0x00000138,
                            *(undefined8 *)PTR_DAT_08ff6838);
      if ((uVar25 & 1) != 0) {
        if (in_stack_00000138 == 0) {
LAB_082d3af0:
          plVar27 = (long *)PTR_DAT_08fc16b0;
          if (*(char *)(unaff_x19 + 0x42d) != '\0') {
            *(undefined1 *)(unaff_x19 + 0x42d) = 0;
            goto LAB_082d3afc;
          }
          lVar12 = *(long *)(unaff_x19 + 0x3a0);
          if (lVar12 == 0) goto LAB_082d43c0;
          lVar15 = *(long *)PTR_DAT_08fc16b0;
          *(int *)(lVar12 + 0x1c) = in_stack_00000038;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar15 = *plVar27;
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
          if (lVar15 == 0) goto LAB_082d43c0;
          uVar9 = FUN_06ee1f14(lVar15,*(undefined8 *)PTR_DAT_08f76d38);
          *(uint *)(lVar12 + 0x34) = uVar9;
          if (*(long *)(unaff_x19 + 0x3a0) == 0) goto LAB_082d43c0;
          plVar26 = (long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60);
          lVar12 = *plVar26;
          if (lVar12 == 0) goto LAB_082d43c0;
          uVar25 = (ulong)uVar9;
          if (*(int *)(lVar12 + 0x18) < (int)uVar9) {
            if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<quaternion>
                      (plVar26,uVar25,0,*(undefined8 *)PTR_DAT_08ff6880);
          }
          if (*(long *)(unaff_x19 + 0x720) == 0) goto LAB_082d43c0;
          plVar26 = (long *)(unaff_x19 + 0x720);
          if (*(int *)(*(long *)(unaff_x19 + 0x720) + 0x18) < (int)uVar9) {
            uVar23 = uVar9 | (int)uVar9 >> 0x10;
            uVar23 = uVar23 | (int)uVar23 >> 8;
            uVar23 = uVar23 | (int)uVar23 >> 4;
            uVar23 = uVar23 | (int)uVar23 >> 2;
            if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            FUN_04d0f434(plVar26,(uVar23 | (int)uVar23 >> 1) + 1,*(undefined8 *)PTR_DAT_08ff69b8);
          }
          if (*(char *)(unaff_x19 + 0x359) != '\0') {
            if (*(long *)(unaff_x19 + 0x3a0) == 0) goto LAB_082d43c0;
            plVar29 = (long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38);
            lVar12 = *plVar29;
            if (lVar12 == 0) goto LAB_082d43c0;
            iVar10 = *(int *)(unaff_x19 + 0x4a0);
            if (0x100 < *(int *)(lVar12 + 0x18) - iVar10) {
              iVar11 = 0x100;
              if (0x100 < iVar10 + 1) {
                iVar11 = iVar10 + 1;
              }
              if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              FUN_04d0f664(plVar29,iVar11,1,*(undefined8 *)PTR_DAT_08ff6878);
            }
          }
          puVar4 = PTR_DAT_08ff65a8;
          fVar3 = DAT_01a2e7f0;
          if ((int)uVar9 < 1) goto LAB_082d4308;
          lVar12 = 0;
          uVar32 = 0;
          lVar15 = 0x54;
          goto LAB_082d3cbc;
        }
        iVar10 = 0;
        while (unaff_x26 = in_stack_00000040, iVar10 < *(int *)(in_stack_00000138 + 0x18)) {
          auVar37 = FUN_057805a8(in_stack_00000138,iVar10,*(undefined8 *)PTR_DAT_08ff6860);
          lVar15 = auVar37._0_8_;
          if (lVar15 == 0) goto LAB_082d43c0;
          uVar25 = *(ulong *)(lVar15 + 0x18);
          iVar11 = (int)uVar25;
          if (1 < iVar11) {
            lVar19 = 0;
            do {
              uVar9 = unaff_w27 + 1 + (int)lVar19;
              if (*(uint *)(in_stack_00000040 + 0x18) <= uVar9) goto LAB_082d4458;
              if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
              iVar7 = FUN_082e4430(*(long *)(unaff_x19 + 0x100),
                                   *(undefined4 *)(in_stack_00000048 + (long)(int)uVar9 * 0x10 + 4),
                                   0);
              if (*(uint *)(lVar15 + 0x18) <= (int)lVar19 + 1U) goto LAB_082d4458;
              if (iVar7 != *(int *)(lVar15 + 0x24 + lVar19 * 4)) goto LAB_082d338c;
              lVar19 = lVar19 + 1;
            } while (iVar11 + -1 != (int)lVar19);
          }
          if (auVar37._8_4_ != 0) {
            if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
            uVar32 = FUN_082e6834(*(long *)(unaff_x19 + 0x100),auVar37._8_8_ & 0xffffffff,
                                  &stack0x00000128,0);
            if ((uVar32 & 1) != 0) {
              if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
                 (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar15 == 0))
              goto LAB_082d43c0;
              if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_082d4458;
              *(undefined8 *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
                   in_stack_00000128;
              if (iVar11 < 1) goto LAB_082d3454;
              uVar32 = 0;
              goto LAB_082d3410;
            }
          }
LAB_082d338c:
          iVar10 = iVar10 + 1;
          if (in_stack_00000138 == 0) goto LAB_082d43c0;
        }
      }
    }
  }
  else {
    bVar5 = false;
  }
  goto LAB_082d345c;
LAB_082d3410:
  do {
    if (uVar32 == 0) {
      if (*(uint *)(in_stack_00000040 + 0x18) <= unaff_w27) goto LAB_082d4458;
      *(int *)(in_stack_00000048 + (long)(int)unaff_w27 * 0x10 + 0xc) = iVar11;
    }
    else {
      uVar9 = unaff_w27 + (int)uVar32;
      if (*(uint *)(in_stack_00000040 + 0x18) <= uVar9) goto LAB_082d4458;
      *(undefined4 *)(in_stack_00000048 + (long)(int)uVar9 * 0x10 + 4) = 0x1a;
    }
    uVar32 = uVar32 + 1;
  } while ((uVar25 & 0xffffffff) != uVar32);
LAB_082d3454:
  unaff_w27 = (unaff_w27 + iVar11) - 1;
LAB_082d345c:
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar15 == 0)) goto LAB_082d43c0;
  uVar9 = *(uint *)(unaff_x19 + 0x4a0);
  if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_082d4458;
  puVar22 = (undefined4 *)(lVar15 + 0x20 + (long)(int)uVar9 * 0x178);
  *puVar22 = 0;
  *(long *)(puVar22 + 4) = lVar12;
  *(short *)(puVar22 + 1) = (short)uStack0000000000000024;
  *(undefined1 *)(puVar22 + 0xd) = uStack000000000000014c;
  if (*(uint *)(unaff_x26 + 0x18) <= unaff_w27) goto LAB_082d4458;
  lVar19 = lVar15 + 0x20 + (long)(int)uVar9 * 0x178;
  *(undefined8 *)(lVar19 + 8) = *(undefined8 *)(in_stack_00000048 + (long)(int)unaff_w27 * 0x10 + 8)
  ;
  lVar15 = *(long *)(unaff_x19 + 0x100);
  *(long *)(lVar19 + 0x20) = lVar15;
  puVar4 = PTR_DAT_08fc16b0;
  if (*(char *)(lVar12 + 0x10) == '\x02') goto code_r0x082d34d0;
  if (bVar5) {
    if (lVar15 == 0) goto LAB_082d43c0;
    iVar10 = FUN_082d75b4(lVar15,0);
    if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_082d43c0;
    iVar11 = FUN_082d75b4(*(long *)(unaff_x19 + 0xf8),0);
    if (iVar10 != iVar11) {
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar25 = FUN_08322644(0);
      if ((uVar25 & 1) == 0) {
        lVar15 = *(long *)(unaff_x19 + 0x100);
        if (lVar15 == 0) goto LAB_082d43c0;
        uVar28 = *(undefined8 *)(lVar15 + 0x88);
      }
      else {
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
        uVar28 = *(undefined8 *)(unaff_x19 + 0x118);
        uVar14 = *(undefined8 *)(*(long *)(unaff_x19 + 0x100) + 0x88);
        if (*(int *)(*(long *)PTR_DAT_08ff6870 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar28 = UnityEngine_XR_Interaction_Toolkit_XRInteractionManager__ClearInteractorHover
                           (uVar28,uVar14,0);
        lVar15 = *(long *)(unaff_x19 + 0x100);
      }
      puVar4 = PTR_DAT_08fc16b0;
      *(undefined8 *)(unaff_x19 + 0x118) = uVar28;
      lVar19 = *(long *)puVar4;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar19 = *(long *)puVar4;
      }
      uVar8 = FUN_082c61e4(uVar28,lVar15,*(long *)(lVar19 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
      *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
    }
  }
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar15 == 0)) goto LAB_082d43c0;
  if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_082d4458;
  lVar15 = *(long *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38);
  if ((lVar15 == 0) && (lVar15 = *(long *)(lVar12 + 0x20), lVar15 == 0)) goto LAB_082d43c0;
  iVar10 = FUN_086475ac(lVar15,0);
  if (0 < iVar10) {
    uVar28 = *(undefined8 *)(unaff_x19 + 0x100);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x118);
    if (*(int *)(*(long *)PTR_DAT_08ff6870 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar28 = FUN_0831d274(uVar28,uVar14,iVar10,0);
    puVar4 = PTR_DAT_08fc16b0;
    *(undefined8 *)(unaff_x19 + 0x118) = uVar28;
    uVar14 = *(undefined8 *)(unaff_x19 + 0x100);
    lVar12 = *(long *)puVar4;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar12 = *(long *)puVar4;
    }
    uVar8 = FUN_082c61e4(uVar28,uVar14,*(long *)(lVar12 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
    bVar5 = true;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
  }
  if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar25 = FUN_0744db94(uStack0000000000000024,0);
  puVar4 = PTR_DAT_08fc16b0;
  if (((uVar25 & 1) != 0) || (uStack0000000000000024 == 0x200b)) goto LAB_082d39f8;
  lVar12 = *(long *)PTR_DAT_08fc16b0;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar12 = *(long *)puVar4;
  }
  lVar15 = **(long **)(lVar12 + 0xb8);
  if (lVar15 == 0) goto LAB_082d43c0;
  uVar9 = *(uint *)(unaff_x19 + 0x120);
  if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_082d4458;
  if (*(int *)(lVar15 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      plVar27 = *(long **)(*(long *)PTR_DAT_08fc16b0 + 0xb8);
      goto Unity_VisualScripting_CoroutineRunner__Awake;
    }
LAB_082d3964:
    uVar9 = *(uint *)(unaff_x19 + 0x120);
  }
  else {
    if (bVar5) {
      if (*(long *)(unaff_x19 + 0x7b8) == 0) goto LAB_082d43c0;
      uVar25 = FUN_06ee3b1c(*(long *)(unaff_x19 + 0x7b8),(long)(int)uVar9,(long)&stack0x00000120 + 4
                            ,*(undefined8 *)PTR_DAT_08fc5190);
      puVar4 = PTR_DAT_08fc16b0;
      if ((uVar25 & 1) == 0) {
LAB_082d3890:
        uVar14 = *(undefined8 *)(unaff_x19 + 0x118);
        uVar28 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f68540);
        FUN_0854ff98(uVar28,uVar14,0);
        puVar4 = PTR_DAT_08fc16b0;
        uVar14 = *(undefined8 *)(unaff_x19 + 0x100);
        lVar12 = *(long *)PTR_DAT_08fc16b0;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar12 = *(long *)puVar4;
        }
        uVar9 = FUN_082c61e4(uVar28,uVar14,*(long *)(lVar12 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
        if (*(long *)(unaff_x19 + 0x7b8) == 0) goto LAB_082d43c0;
        FUN_06ee2204(*(long *)(unaff_x19 + 0x7b8),*(undefined4 *)(unaff_x19 + 0x120),uVar9,
                     *(undefined8 *)PTR_DAT_08f7cfc8);
        lVar12 = *(long *)PTR_DAT_08fc16b0;
      }
      else {
        lVar12 = *(long *)PTR_DAT_08fc16b0;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar12 = *(long *)puVar4;
        }
        lVar15 = **(long **)(lVar12 + 0xb8);
        if (lVar15 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000120._4_4_) goto LAB_082d4458;
        uVar9 = in_stack_00000120._4_4_;
        if (0x3ffe < *(int *)(lVar15 + (long)(int)in_stack_00000120._4_4_ * 0x38 + 0x54))
        goto LAB_082d3890;
      }
      *(uint *)(unaff_x19 + 0x120) = uVar9;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar12 = *(long *)PTR_DAT_08fc16b0;
      }
      plVar27 = *(long **)(lVar12 + 0xb8);
Unity_VisualScripting_CoroutineRunner__Awake:
      lVar15 = *plVar27;
      if (lVar15 == 0) goto LAB_082d43c0;
      goto LAB_082d3964;
    }
    uVar14 = *(undefined8 *)(unaff_x19 + 0x118);
    uVar28 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f68540);
    FUN_0854ff98(uVar28,uVar14,0);
    puVar4 = PTR_DAT_08fc16b0;
    uVar14 = *(undefined8 *)(unaff_x19 + 0x100);
    lVar12 = *(long *)PTR_DAT_08fc16b0;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar12 = *(long *)puVar4;
    }
    uVar9 = FUN_082c61e4(uVar28,uVar14,*(long *)(lVar12 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
    lVar12 = *(long *)puVar4;
    *(uint *)(unaff_x19 + 0x120) = uVar9;
    lVar15 = **(long **)(lVar12 + 0xb8);
    if (lVar15 == 0) goto LAB_082d43c0;
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_082d4458;
  lVar15 = lVar15 + (long)(int)uVar9 * 0x38;
  *(int *)(lVar15 + 0x54) = *(int *)(lVar15 + 0x54) + 1;
LAB_082d39f8:
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar12 == 0)) goto LAB_082d43c0;
  if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_082d4458;
  lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
  *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)(unaff_x19 + 0x118);
  *(undefined4 *)(lVar12 + 0x50) = *(undefined4 *)(unaff_x19 + 0x120);
  puVar4 = PTR_DAT_08fc16b0;
  lVar12 = *(long *)PTR_DAT_08fc16b0;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar12 = *(long *)puVar4;
  }
  lVar15 = **(long **)(lVar12 + 0xb8);
  if (lVar15 == 0) goto LAB_082d43c0;
  if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_082d4458;
  *(bool *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38 + 0x41) = bVar5;
  if (bVar5) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar15 = **(long **)(*(long *)PTR_DAT_08fc16b0 + 0xb8);
      if (lVar15 == 0) goto LAB_082d43c0;
    }
    if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_082d4458;
    *(undefined8 *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38 + 0x48) = uVar13;
    *(undefined8 *)(unaff_x19 + 0x118) = uVar13;
    *(undefined8 *)(unaff_x19 + 0x100) = uVar24;
    *(undefined4 *)(unaff_x19 + 0x120) = unaff_w25;
  }
  uVar9 = *(uint *)(unaff_x19 + 0x4a0);
  goto LAB_082d3ad0;
code_r0x082d34d0:
  plVar27 = *(long **)(lVar12 + 0x18);
  if (plVar27 == (long *)0x0) goto LAB_082d43c0;
  bVar2 = *(byte *)(*(long *)PTR_DAT_08fc1658 + 0x130);
  if ((*(byte *)(*plVar27 + 0x130) < bVar2) ||
     (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_08fc1658))
  goto LAB_082d43c0;
  lVar15 = plVar27[0x11];
  lVar12 = *(long *)PTR_DAT_08fc16b0;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar12 = *(long *)puVar4;
  }
  uVar9 = FUN_082c63fc(lVar15,plVar27,*(long *)(lVar12 + 0xb8),
                       *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
  lVar12 = *(long *)puVar4;
  *(uint *)(unaff_x19 + 0x120) = uVar9;
  lVar12 = **(long **)(lVar12 + 0xb8);
  if (lVar12 == 0) goto LAB_082d43c0;
  if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_082d4458;
  lVar12 = lVar12 + (long)(int)uVar9 * 0x38;
  *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar12 == 0)) goto LAB_082d43c0;
  uVar9 = *(uint *)(unaff_x19 + 0x4a0);
  if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_082d4458;
  lVar12 = lVar12 + (long)(int)uVar9 * 0x178;
  *(undefined4 *)(lVar12 + 0x20) = 1;
  *(undefined4 *)(lVar12 + 0x50) = *(undefined4 *)(unaff_x19 + 0x120);
  *(undefined4 *)(unaff_x19 + 0x65c) = 0;
  *(undefined4 *)(unaff_x19 + 0x120) = unaff_w25;
  goto LAB_082d35bc;
LAB_082d3cbc:
  do {
    fVar36 = (float)param_2;
    if (uVar32 == 0) {
      lVar19 = *plVar27;
    }
    else {
      lVar19 = *plVar26;
      if (lVar19 == 0) goto LAB_082d43c0;
      if (*(uint *)(lVar19 + 0x18) <= uVar32) goto LAB_082d4458;
      uVar13 = *(undefined8 *)(lVar19 + uVar32 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar16 = FUN_08589e5c(uVar13,0,0);
      if ((uVar16 & 1) != 0) {
        lVar19 = *plVar27;
        plVar29 = (long *)*plVar26;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar19 = *plVar27;
        }
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar19 + 0x18) <= uVar32) goto LAB_082d4458;
        lVar19 = lVar19 + lVar15;
        in_stack_000000d0 = *(undefined8 *)(lVar19 + -4);
        in_stack_000000c8 = *(undefined8 *)(lVar19 + -0xc);
        in_stack_000000c0 = *(undefined8 *)(lVar19 + -0x14);
        in_stack_000000a8 = *(undefined8 *)(lVar19 + -0x2c);
        uVar13 = *(undefined8 *)(lVar19 + -0x34);
        in_stack_000000b8 = *(undefined8 *)(lVar19 + -0x1c);
        in_stack_000000b0 = *(undefined8 *)(lVar19 + -0x24);
        in_stack_000000a0 = uVar13;
        lVar19 = FUN_08329e2c();
        fVar36 = (float)uVar13;
        if (plVar29 == (long *)0x0) goto LAB_082d43c0;
        if ((lVar19 != 0) &&
           (lVar17 = thunk_FUN_0406ddbc(lVar19,*(undefined8 *)(*plVar29 + 0x40)), lVar17 == 0)) {
LAB_082d445c:
          uVar13 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
          FUN_04031750(uVar13,0);
        }
        if (*(uint *)(plVar29 + 3) <= uVar32) goto LAB_082d4458;
        plVar29[uVar32 + 4] = lVar19;
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60), lVar19 == 0))
        goto LAB_082d43c0;
        if (*(uint *)(lVar19 + 0x18) <= uVar32) goto LAB_082d4458;
        *(undefined8 *)(lVar19 + lVar12 + 0x30) = 0;
      }
      if (*(long *)(unaff_x19 + 0x3b8) == 0) goto LAB_082d43c0;
      fVar33 = (float)FUN_08597b2c(*(long *)(unaff_x19 + 0x3b8),0);
      lVar19 = *plVar26;
      if (lVar19 == 0) goto LAB_082d43c0;
      if (*(uint *)(lVar19 + 0x18) <= uVar32) goto LAB_082d4458;
      lVar19 = *(long *)(lVar19 + uVar32 * 8 + 0x20);
      if ((lVar19 == 0) ||
         (fVar35 = fVar36,
         lVar19 = UnityEngine_UIElements_StyleSheets_StylePropertyReader__ReadFloat(lVar19,0),
         lVar19 == 0)) goto LAB_082d43c0;
      fVar34 = (float)FUN_08597b2c(lVar19,0);
      fVar36 = (fVar36 - fVar35) * (fVar36 - fVar35);
      param_2 = (ulong)(uint)fVar36;
      if (fVar3 <= (fVar33 - fVar34) * (fVar33 - fVar34) + fVar36) {
        lVar19 = *plVar26;
        if (lVar19 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar19 + 0x18) <= uVar32) goto LAB_082d4458;
        lVar19 = *(long *)(lVar19 + uVar32 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_082d43c0;
        lVar19 = UnityEngine_UIElements_StyleSheets_StylePropertyReader__ReadFloat(lVar19,0);
        if ((*(long *)(unaff_x19 + 0x3b8) == 0) ||
           (FUN_08597b2c(*(long *)(unaff_x19 + 0x3b8),0), lVar19 == 0)) goto LAB_082d43c0;
        FUN_08597bf4(lVar19,0);
      }
      lVar19 = *plVar26;
      if (lVar19 == 0) goto LAB_082d43c0;
      if (*(uint *)(lVar19 + 0x18) <= uVar32) goto LAB_082d4458;
      lVar19 = *(long *)(lVar19 + uVar32 * 8 + 0x20);
      if (lVar19 == 0) goto LAB_082d43c0;
      uVar13 = *(undefined8 *)(lVar19 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar16 = FUN_08589e5c(uVar13,0,0);
      if ((uVar16 & 1) == 0) {
        lVar19 = *plVar26;
        if (lVar19 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar19 + 0x18) <= uVar32) goto LAB_082d4458;
        lVar19 = *(long *)(lVar19 + uVar32 * 8 + 0x20);
        if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0xf0), lVar19 == 0)) goto LAB_082d43c0;
        iVar10 = FUN_0858dd10(lVar19,0);
        lVar19 = *plVar27;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_0408f364(lVar19);
          lVar19 = *plVar27;
        }
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar19 + 0x18) <= uVar32) goto LAB_082d4458;
        lVar19 = *(long *)(lVar19 + lVar15 + -0x1c);
        if (lVar19 == 0) goto LAB_082d43c0;
        iVar11 = FUN_0858dd10(lVar19,0);
        if (iVar10 != iVar11) goto LAB_082d3f50;
        lVar19 = *plVar27;
      }
      else {
LAB_082d3f50:
        lVar19 = *plVar26;
        if (lVar19 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar19 + 0x18) <= uVar32) goto LAB_082d4458;
        lVar17 = *plVar27;
        lVar19 = *(long *)(lVar19 + uVar32 * 8 + 0x20);
        if (*(int *)(lVar17 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar17 = *plVar27;
        }
        lVar17 = **(long **)(lVar17 + 0xb8);
        if (lVar17 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_082d4458;
        if (lVar19 == 0) goto LAB_082d43c0;
        FUN_08329aa4(lVar19,*(undefined8 *)(lVar17 + lVar15 + -0x1c),0);
        lVar17 = *plVar26;
        if (lVar17 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_082d4458;
        lVar19 = *plVar27;
        lVar20 = **(long **)(lVar19 + 0xb8);
        if (lVar20 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar20 + 0x18) <= uVar32) goto LAB_082d4458;
        lVar17 = lVar17 + uVar32 * 8;
        lVar21 = *(long *)(lVar17 + 0x20);
        if (lVar21 == 0) goto LAB_082d43c0;
        *(undefined8 *)(lVar21 + 0xd8) = *(undefined8 *)(lVar20 + lVar15 + -0x2c);
        lVar17 = *(long *)(lVar17 + 0x20);
        if (lVar17 == 0) goto LAB_082d43c0;
        *(undefined8 *)(lVar17 + 0xe0) = *(undefined8 *)(lVar20 + lVar15 + -0x24);
      }
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar19 = *plVar27;
      }
      lVar17 = **(long **)(lVar19 + 0xb8);
      if (lVar17 == 0) goto LAB_082d43c0;
      if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_082d4458;
      if (*(char *)(lVar17 + lVar15 + -0x13) != '\0') {
        lVar20 = *plVar26;
        if (lVar20 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar20 + 0x18) <= uVar32) goto LAB_082d4458;
        lVar20 = *(long *)(lVar20 + uVar32 * 8 + 0x20);
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar17 = **(long **)(*plVar27 + 0xb8);
          if (lVar17 == 0) goto LAB_082d43c0;
        }
        if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_082d4458;
        if (lVar20 == 0) goto LAB_082d43c0;
        FUN_08329b0c(lVar20,*(undefined8 *)(lVar17 + lVar15 + -0x1c),0);
        lVar17 = *plVar26;
        if (lVar17 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_082d4458;
        lVar19 = *plVar27;
        lVar20 = **(long **)(lVar19 + 0xb8);
        if (lVar20 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar20 + 0x18) <= uVar32) goto LAB_082d4458;
        lVar17 = *(long *)(lVar17 + uVar32 * 8 + 0x20);
        if (lVar17 == 0) goto LAB_082d43c0;
        *(undefined8 *)(lVar17 + 0x100) = *(undefined8 *)(lVar20 + lVar15 + -0xc);
      }
    }
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar19 = *plVar27;
    }
    plVar27 = (long *)PTR_DAT_08fc16b0;
    lVar19 = **(long **)(lVar19 + 0xb8);
    if (lVar19 == 0) goto LAB_082d43c0;
    if (*(uint *)(lVar19 + 0x18) <= uVar32) goto LAB_082d4458;
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60), lVar17 == 0)) goto LAB_082d43c0;
    if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_082d4458;
    uVar23 = *(uint *)(lVar19 + lVar15);
    lVar19 = *(long *)(lVar17 + lVar12 + 0x30);
    if (lVar19 == 0) {
      if (uVar32 == 0) {
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        in_stack_00000078 = 0;
        in_stack_00000070 = 0;
        in_stack_00000088 = 0;
        in_stack_00000080 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        in_stack_00000058 = 0;
        in_stack_00000050 = 0;
        FUN_0831e2c8(&stack0x00000050,*(undefined8 *)(unaff_x19 + 0x3d8),uVar23 + 1,0);
        if (*(int *)(lVar17 + 0x18) == 0) goto LAB_082d4458;
      }
      else {
        lVar19 = *plVar26;
        if (lVar19 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar19 + 0x18) <= uVar32) goto LAB_082d4458;
        lVar19 = *(long *)(lVar19 + uVar32 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_082d43c0;
        uVar13 = FUN_08329ce0(lVar19,0);
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        in_stack_00000078 = 0;
        in_stack_00000070 = 0;
        in_stack_00000088 = 0;
        in_stack_00000080 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        in_stack_00000058 = 0;
        in_stack_00000050 = 0;
        FUN_0831e2c8(&stack0x00000050,uVar13,uVar23 + 1,0);
        if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_082d4458;
        lVar17 = lVar17 + lVar12;
      }
      memmove((void *)(lVar17 + 0x20),&stack0x00000050,0x50);
      plVar27 = (long *)PTR_DAT_08fc16b0;
    }
    else {
      iVar10 = *(int *)(lVar19 + 0x18);
      if (iVar10 < (int)(uVar23 * 4)) {
        if ((int)uVar23 < 0x401) {
          uVar23 = uVar23 | (int)uVar23 >> 0x10;
          uVar23 = uVar23 | (int)uVar23 >> 8;
          uVar23 = uVar23 | (int)uVar23 >> 4;
          uVar23 = uVar23 | (int)uVar23 >> 2;
          uVar23 = uVar23 | (int)uVar23 >> 1;
LAB_082d4230:
          iVar10 = uVar23 + 1;
        }
        else {
LAB_082d4158:
          iVar10 = uVar23 + 0x100;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        FUN_0831ef9c(lVar17 + lVar12 + 0x20,iVar10,0);
      }
      else if ((*(char *)(unaff_x19 + 0x359) != '\0') && (0 < (int)uVar23)) {
        iVar11 = iVar10 + 3;
        if (-1 < iVar10) {
          iVar11 = iVar10;
        }
        if (0x100 < (int)((iVar11 >> 2) - uVar23)) {
          if (uVar23 < 0x401) {
            uVar23 = uVar23 >> 4 | uVar23 >> 8 | uVar23;
            uVar23 = uVar23 | uVar23 >> 2;
            uVar23 = uVar23 | uVar23 >> 1;
            goto LAB_082d4230;
          }
          goto LAB_082d4158;
        }
      }
    }
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60), lVar19 == 0)) goto LAB_082d43c0;
    lVar17 = *plVar27;
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar17 = *plVar27;
    }
    lVar17 = **(long **)(lVar17 + 0xb8);
    if (lVar17 == 0) goto LAB_082d43c0;
    if ((*(uint *)(lVar17 + 0x18) <= uVar32) || (*(uint *)(lVar19 + 0x18) <= uVar32))
    goto LAB_082d4458;
    lVar17 = lVar17 + lVar15;
    uVar32 = uVar32 + 1;
    lVar19 = lVar19 + lVar12;
    lVar12 = lVar12 + 0x50;
    lVar15 = lVar15 + 0x38;
    *(undefined8 *)(lVar19 + 0x68) = *(undefined8 *)(lVar17 + -0x1c);
  } while (uVar25 != uVar32);
LAB_082d4308:
  lVar12 = *plVar26;
  if (lVar12 != 0) {
    lVar15 = (long)(int)uVar9 + 4;
    do {
      uVar9 = (uint)*(undefined8 *)(lVar12 + 0x18);
      if ((long)(int)uVar9 <= lVar15 + -4) {
LAB_082d3afc:
        return *(undefined4 *)(unaff_x19 + 0x4a0);
      }
      uVar23 = (uint)uVar25;
      if (uVar9 <= uVar23) {
LAB_082d4458:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      uVar13 = *(undefined8 *)(lVar12 + lVar15 * 8);
      if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar25 = FUN_0858816c(uVar13,0,0);
      if ((uVar25 & 1) == 0) goto LAB_082d3afc;
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60), lVar12 == 0)) break;
      if (lVar15 + -4 < (long)*(int *)(lVar12 + 0x18)) {
        lVar12 = *plVar26;
        if (lVar12 == 0) break;
        if (*(uint *)(lVar12 + 0x18) <= uVar23) goto LAB_082d4458;
        lVar12 = *(long *)(lVar12 + lVar15 * 8);
        if ((lVar12 == 0) || (lVar12 = FUN_0869bc74(lVar12,0), lVar12 == 0)) break;
        FUN_08868968(lVar12,0,0);
      }
      lVar12 = *plVar26;
      lVar15 = lVar15 + 1;
      uVar25 = (ulong)(uVar23 + 1);
    } while (lVar12 != 0);
  }
LAB_082d43c0:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


