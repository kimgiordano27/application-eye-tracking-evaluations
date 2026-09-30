/*
FUNCTION_NAME: FullSerializer.Internal.fsKeyValuePairConverter$$TrySerialize
ENTRY_POINT: 00e3d7cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 117
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x00e40474) */
/* WARNING: Removing unreachable block (ram,0x00e411d8) */
/* WARNING: Removing unreachable block (ram,0x00e40b00) */
/* WARNING: Removing unreachable block (ram,0x00e4022c) */
/* WARNING: Removing unreachable block (ram,0x00e40338) */
/* WARNING: Removing unreachable block (ram,0x00e3ecf8) */
/* WARNING: Removing unreachable block (ram,0x00e3fd64) */
/* WARNING: Removing unreachable block (ram,0x00e4063c) */
/* WARNING: Removing unreachable block (ram,0x00e42814) */
/* WARNING: Removing unreachable block (ram,0x00e40c08) */
/* WARNING: Removing unreachable block (ram,0x00e428b4) */
/* WARNING: Removing unreachable block (ram,0x00e42b18) */
/* WARNING: Removing unreachable block (ram,0x00e42bb8) */
/* WARNING: Removing unreachable block (ram,0x00e42e1c) */
/* WARNING: Removing unreachable block (ram,0x00e42ebc) */
/* WARNING: Removing unreachable block (ram,0x00e43124) */
/* WARNING: Removing unreachable block (ram,0x00e431c4) */

void FullSerializer_Internal_fsKeyValuePairConverter__TrySerialize
               (undefined1 param_1 [16],undefined8 param_2,ulong param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  short sVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  double dVar16;
  long lVar17;
  long lVar18;
  long *unaff_x19;
  undefined8 *puVar19;
  undefined8 unaff_x20;
  long lVar20;
  uint *puVar21;
  uint uVar22;
  ulong unaff_x21;
  uint uVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong unaff_x22;
  uint uVar26;
  ulong uVar27;
  undefined8 *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  ulong unaff_x29;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  double dVar34;
  float fVar35;
  float unaff_s8;
  int iVar36;
  undefined8 uVar37;
  float unaff_s10;
  ulong unaff_d14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  undefined8 *in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  ulong in_stack_00000050;
  double *in_stack_00000060;
  uint in_stack_00000068;
  float fStack0000000000000070;
  long in_stack_00000078;
  
  do {
    thunk_FUN_00d32864();
    do {
      fVar29 = (float)param_2;
      uVar12 = FUN_02681b9c(unaff_x20,0,0);
      fVar35 = (float)param_3;
      uVar22 = (uint)unaff_x21;
      uVar26 = (uint)unaff_x29;
      fVar30 = (float)unaff_d14;
      uVar23 = (uint)unaff_x28;
      if ((uVar12 & 1) != 0) {
        if (in_stack_00000050 == in_stack_00000010) {
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          fVar28 = (float)FUN_00e5b838(*in_stack_00000060,0);
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
                    /* try { // try from 00e3d840 to 00f3d86f has its CatchHandler @ 00e3d840
                       catch() { ... } // from try @ 00e3d840 with catch @ 00e3d840
                       catch() { ... } // from try @ 00e3d87c with catch @ 00e3d840 */
          pfVar14 = *(float **)
                     (*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
          fVar35 = fVar35 - pfVar14[2];
          param_3 = (ulong)(uint)fVar35;
                    /* try { // try from 00e3d870 to 00f3d87b has its CatchHandler @ 00e3d894 */
                    /* try { // try from 00e3d87c to 00f3d8a7 has its CatchHandler @ 00e3d840 */
          if (fVar35 * fVar35 +
              (fVar28 - *pfVar14) * (fVar28 - *pfVar14) +
              (fVar29 - pfVar14[1]) * (fVar29 - pfVar14[1]) < DAT_028aa020) goto LAB_00e3dbd8;
        }
        if ((*in_stack_00000060 == 0.0) ||
           (lVar15 = *(long *)((long)*in_stack_00000060 + 0xb0), lVar15 == 0)) goto LAB_00e443fc;
                    /* catch() { ... } // from try @ 00e3d870 with catch @ 00e3d894 */
        uVar37 = *(undefined8 *)(lVar15 + 0x38);
        if (DAT_03774d77 == '\0') {
                    /* catch() { ... } // from try @ 00e3d934 with catch @ 00e3d8a8 */
          thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__)
          ;
          DAT_03774d77 = '\x01';
        }
        fVar29 = (float)uVar37 -
                 (float)**(undefined8 **)
                          (*(long *)
                            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__ +
                          0xb8);
        fVar35 = (float)((ulong)uVar37 >> 0x20) -
                 (float)((ulong)**(undefined8 **)
                                  (*(long *)
                                    Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                  + 0xb8) >> 0x20);
        if (DAT_028aa020 <= fVar29 * fVar29 + fVar35 * fVar35) {
                    /* try { // try from 00e3d8f0 to 00f3d8ff has its CatchHandler @ 00e3d958 */
          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
        }
        dVar16 = *in_stack_00000060;
        if ((dVar16 == 0.0) || (lVar15 = *(long *)((long)dVar16 + 0xb0), lVar15 == 0))
        goto LAB_00e443fc;
        fVar28 = fVar30 * *(float *)(lVar15 + 0x38);
        *(float *)(unaff_x19 + 0xc9) = fVar28;
        fVar35 = fVar30 * *(float *)(lVar15 + 0x3c);
        *(float *)((long)unaff_x19 + 0x64c) = fVar35;
                    /* try { // try from 00e3d920 to 00f3d933 has its CatchHandler @ 00e3d948 */
        fVar29 = unaff_s10;
        if (*(char *)(lVar15 + 0x25) != '\0') {
          fVar29 = unaff_s10 / *(float *)((long)dVar16 + 0x84);
        }
                    /* try { // try from 00e3d934 to 00f3d963 has its CatchHandler @ 00e3d8a8 */
        lVar15 = *in_stack_00000038;
        if (lVar15 == 0) goto LAB_00e443fc;
                    /* catch() { ... } // from try @ 00e3d920 with catch @ 00e3d948 */
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
        lVar18 = lVar15 + unaff_x22 * 0xc;
                    /* catch() { ... } // from try @ 00e3d8f0 with catch @ 00e3d958 */
        fVar31 = *(float *)(lVar18 + 0x20);
        uVar37 = *(undefined8 *)(lVar18 + 0x24);
        *(float *)(unaff_x19 + 0xcd) = fVar31;
        unaff_x23[0xf] = uVar37;
        *(float *)(unaff_x19 + 0xd0) = fVar31;
        fVar32 = (float)uVar37;
        *(float *)((long)unaff_x19 + 0x684) = fVar32;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
        lVar18 = lVar15 + unaff_x28 * 0xc;
        uVar33 = *(undefined4 *)(lVar18 + 0x20);
        uVar37 = *(undefined8 *)(lVar18 + 0x24);
        *(undefined4 *)(unaff_x19 + 0xcd) = uVar33;
        unaff_x23[0xf] = uVar37;
        *(undefined4 *)(unaff_x19 + 0xd2) = uVar33;
        *(int *)((long)unaff_x19 + 0x694) = (int)uVar37;
        if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
        lVar18 = lVar15 + unaff_x29 * 0xc;
        uVar33 = *(undefined4 *)(lVar18 + 0x20);
        uVar37 = *(undefined8 *)(lVar18 + 0x24);
        *(undefined4 *)(unaff_x19 + 0xcd) = uVar33;
        unaff_x23[0xf] = uVar37;
        *(undefined4 *)(unaff_x19 + 0xd4) = uVar33;
        *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar37;
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_00e44400;
        lVar15 = lVar15 + unaff_x21 * 0xc;
        uVar33 = *(undefined4 *)(lVar15 + 0x20);
        uVar37 = *(undefined8 *)(lVar15 + 0x24);
        unaff_x24 = 0xc;
        *(undefined4 *)(unaff_x19 + 0xcd) = uVar33;
        unaff_x23[0xf] = uVar37;
        *(undefined4 *)(unaff_x19 + 0xd6) = uVar33;
        *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar37;
        lVar15 = *(long *)((long)dVar16 + 0xb0);
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(char *)(lVar15 + 0x24) == '\0') {
          lVar18 = *in_stack_00000028;
          if (lVar18 == 0) goto LAB_00e443fc;
          uVar5 = *(uint *)(lVar18 + 0x18);
          if (uVar5 <= in_stack_00000068) goto LAB_00e44400;
          lVar20 = lVar18 + unaff_x22 * 8;
          *(float *)(lVar20 + 0x20) = (fVar28 + fVar29 * fVar31) - *(float *)(lVar15 + 0x30);
          *(float *)(lVar20 + 0x24) = (fVar35 + fVar29 * fVar32) - *(float *)(lVar15 + 0x34);
          if (((uVar5 <= uVar23) ||
              (*(ulong *)(lVar18 + unaff_x28 * 8 + 0x20) =
                    CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar29 +
                             (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                             (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                             ((float)unaff_x19[0xd2] * fVar29 + (float)unaff_x19[0xc9]) -
                             (float)*(undefined8 *)(lVar15 + 0x30)), uVar5 <= uVar26)) ||
             (*(ulong *)(lVar18 + unaff_x29 * 8 + 0x20) =
                   CONCAT44((fVar29 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                            (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                            (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                            (fVar29 * (float)unaff_x19[0xd4] + (float)unaff_x19[0xc9]) -
                            (float)*(undefined8 *)(lVar15 + 0x30)), uVar5 <= uVar22))
          goto LAB_00e44400;
          param_3 = unaff_x19[0xc9];
          *(ulong *)(lVar18 + unaff_x21 * 8 + 0x20) =
               CONCAT44((fVar29 * (float)((ulong)unaff_x19[0xd6] >> 0x20) + (float)(param_3 >> 0x20)
                        ) - (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                        (fVar29 * (float)unaff_x19[0xd6] + (float)param_3) -
                        (float)*(undefined8 *)(lVar15 + 0x30));
        }
        else {
          fVar3 = *(float *)((long)dVar16 + 0x44);
          *(float *)(unaff_x19 + 0xd8) = fVar3;
          fVar4 = *(float *)((long)dVar16 + 0x48);
          lVar18 = unaff_x19[0x61];
          *(float *)((long)unaff_x19 + 0x6c4) = fVar4;
          if (lVar18 == 0) goto LAB_00e443fc;
          uVar5 = *(uint *)(lVar18 + 0x18);
          if (uVar5 <= in_stack_00000068) goto LAB_00e44400;
          lVar20 = lVar18 + unaff_x22 * 8;
          *(float *)(lVar20 + 0x20) =
               (fVar28 + fVar29 * (fVar31 - fVar3)) - *(float *)(lVar15 + 0x30);
          *(float *)(lVar20 + 0x24) =
               (fVar35 + fVar29 * (fVar32 - fVar4)) - *(float *)(lVar15 + 0x34);
          if (((uVar5 <= uVar23) ||
              (*(ulong *)(lVar18 + unaff_x28 * 8 + 0x20) =
                    CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                             ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                             (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar29) -
                             (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                             ((float)unaff_x19[0xc9] +
                             ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) * fVar29) -
                             (float)*(undefined8 *)(lVar15 + 0x30)), uVar5 <= uVar26)) ||
             (*(ulong *)(lVar18 + unaff_x29 * 8 + 0x20) =
                   CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                            fVar29 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                     (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                            (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                            ((float)unaff_x19[0xc9] +
                            fVar29 * ((float)unaff_x19[0xd4] - (float)unaff_x19[0xd8])) -
                            (float)*(undefined8 *)(lVar15 + 0x30)), uVar5 <= uVar22))
          goto LAB_00e44400;
          param_3 = unaff_x19[0xd8];
          *(ulong *)(lVar18 + unaff_x21 * 8 + 0x20) =
               CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                        fVar29 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) - (float)(param_3 >> 0x20)
                                 )) - (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                        ((float)unaff_x19[0xc9] + fVar29 * ((float)unaff_x19[0xd6] - (float)param_3)
                        ) - (float)*(undefined8 *)(lVar15 + 0x30));
        }
      }
LAB_00e3dbd8:
      dVar16 = *in_stack_00000060;
      if (dVar16 == 0.0) goto LAB_00e443fc;
      if (*(char *)((long)dVar16 + 0x108) != '\0') {
        if (*(long *)((long)dVar16 + 0x100) == 0) goto LAB_00e443fc;
        if (*(char *)(*(long *)((long)dVar16 + 0x100) + 0x20) == '\0') {
          lVar15 = *unaff_x27;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          lVar18 = *in_stack_00000028;
          if (lVar18 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          *(undefined8 *)(lVar18 + unaff_x22 * 8 + 0x20) =
               *(undefined8 *)(lVar15 + unaff_x22 * 8 + 0x20);
          lVar15 = *unaff_x27;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
          lVar18 = *in_stack_00000028;
          if (lVar18 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
          *(undefined8 *)(lVar18 + (long)(int)uVar23 * 8 + 0x20) =
               *(undefined8 *)(lVar15 + (long)(int)uVar23 * 8 + 0x20);
          lVar15 = *unaff_x27;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
          lVar18 = *in_stack_00000028;
          if (lVar18 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_00e44400;
          *(undefined8 *)(lVar18 + (long)(int)uVar26 * 8 + 0x20) =
               *(undefined8 *)(lVar15 + (long)(int)uVar26 * 8 + 0x20);
          lVar15 = *unaff_x27;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_00e44400;
          lVar18 = *in_stack_00000028;
          if (lVar18 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_00e44400;
          *(undefined8 *)(lVar18 + unaff_x21 * 8 + 0x20) =
               *(undefined8 *)(lVar15 + unaff_x21 * 8 + 0x20);
          dVar16 = *in_stack_00000060;
          if (dVar16 == 0.0) goto LAB_00e443fc;
        }
      }
      dVar34 = DAT_028aa048;
      if (*(char *)((long)dVar16 + 0x108) == '\0') {
LAB_00e3dd34:
        uVar37 = *(undefined8 *)((long)dVar16 + 0xa8);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_02681b9c(uVar37,0,0);
        dVar16 = *in_stack_00000060;
        if (dVar16 == 0.0) goto LAB_00e443fc;
        if ((uVar12 & 1) == 0) {
          uVar37 = *(undefined8 *)((long)dVar16 + 0xb0);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_02681b9c(uVar37,0,0);
          dVar16 = DAT_028aa048;
          if ((uVar12 & 1) == 0) {
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            uVar37 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_02681b9c(uVar37,0,0);
            lVar15 = *unaff_x26;
            if ((uVar12 & 1) == 0) {
              fVar29 = *(float *)((long)unaff_x19 + 0x8c);
              fVar35 = *(float *)(unaff_x19 + 0x12);
              fVar31 = *(float *)((long)unaff_x19 + 0x94);
              fVar28 = *(float *)(unaff_x19 + 0x13);
              fVar30 = fVar29;
              if (unaff_s10 < fVar29) {
                fVar30 = unaff_s10;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar29 < 0.0) {
                fVar30 = unaff_s8;
              }
              dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar16 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar29 = fVar35;
              if (1.0 < fVar35) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar35 < 0.0) {
                fVar29 = unaff_s8;
              }
              dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar16 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3fd48;
                }
                fVar35 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = fVar29;
                }
              }
              else {
                fVar35 = (float)(int)(fVar29 + -0.5);
              }
              fVar29 = fVar31;
              if (1.0 < fVar31) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar31 < 0.0) {
                fVar29 = unaff_s8;
              }
              dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar16 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar29 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar29 = (float)(int)(fVar29 + -0.5);
              }
              fVar31 = fVar28;
              if (1.0 < fVar28) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar28 < 0.0) {
                fVar31 = unaff_s8;
              }
              dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar16 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar28 = (float)(int)(fVar31 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar31 + -0.5);
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              *(uint *)(lVar15 + unaff_x22 * 4 + 0x20) =
                   (int)fVar30 & 0xffU | ((int)fVar35 & 0xffU) << 8 | ((int)fVar29 & 0xffU) << 0x10
                   | (int)fVar28 << 0x18;
              fVar29 = *(float *)(unaff_x19 + 0x12);
              lVar15 = unaff_x19[0x5f];
              fVar28 = *(float *)((long)unaff_x19 + 0x94);
              fVar35 = *(float *)(unaff_x19 + 0x13);
              fVar30 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
              if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                fVar30 = unaff_s8;
              }
              dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar16 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar31 = fVar29;
              if (1.0 < fVar29) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar29 < 0.0) {
                fVar31 = unaff_s8;
              }
              dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar16 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e40610;
                }
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = fVar29;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              fVar29 = fVar28;
              if (1.0 < fVar28) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar28 < 0.0) {
                fVar29 = unaff_s8;
              }
              dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar16 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar29 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar29 = (float)(int)(fVar29 + -0.5);
              }
              fVar28 = fVar35;
              if (1.0 < fVar35) {
                fVar28 = 1.0;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar35 < 0.0) {
                fVar28 = unaff_s8;
              }
              dVar16 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar16 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar28 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar28 + -0.5);
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
              *(uint *)(lVar15 + (long)(int)uVar23 * 4 + 0x20) =
                   (int)fVar30 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar29 & 0xffU) << 0x10
                   | (int)fVar35 << 0x18;
              fVar29 = *(float *)(unaff_x19 + 0x12);
              lVar15 = unaff_x19[0x5f];
              fVar28 = *(float *)((long)unaff_x19 + 0x94);
              fVar35 = *(float *)(unaff_x19 + 0x13);
              fVar30 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
              if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                fVar30 = unaff_s8;
              }
              dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar16 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar31 = fVar29;
              if (1.0 < fVar29) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar29 < 0.0) {
                fVar31 = unaff_s8;
              }
              dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar16 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e40e20;
                }
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = fVar29;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              fVar29 = fVar28;
              if (1.0 < fVar28) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar28 < 0.0) {
                fVar29 = unaff_s8;
              }
              dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar16 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar29 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar29 = (float)(int)(fVar29 + -0.5);
              }
              fVar28 = fVar35;
              if (1.0 < fVar35) {
                fVar28 = 1.0;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar35 < 0.0) {
                fVar28 = unaff_s8;
              }
              dVar16 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar16 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar28 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar28 + -0.5);
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
              *(uint *)(lVar15 + (long)(int)uVar26 * 4 + 0x20) =
                   (int)fVar30 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar29 & 0xffU) << 0x10
                   | (int)fVar35 << 0x18;
              fVar30 = *(float *)((long)unaff_x19 + 0x8c);
              fVar29 = *(float *)(unaff_x19 + 0x12);
              lVar15 = unaff_x19[0x5f];
              fVar28 = *(float *)((long)unaff_x19 + 0x94);
              fVar35 = *(float *)(unaff_x19 + 0x13);
            }
            else {
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar18 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar18 == 0))
              goto LAB_00e443fc;
              fVar29 = *(float *)(lVar18 + 0x18);
              fVar35 = *(float *)(lVar18 + 0x1c);
              fVar31 = *(float *)(lVar18 + 0x20);
              fVar28 = *(float *)(lVar18 + 0x24);
              fVar30 = fVar29;
              if (unaff_s10 < fVar29) {
                fVar30 = unaff_s10;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar29 < 0.0) {
                fVar30 = unaff_s8;
              }
              dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar16 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar29 = fVar35;
              if (1.0 < fVar35) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar35 < 0.0) {
                fVar29 = unaff_s8;
              }
              dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar16 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3fcc4;
                }
                fVar35 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = fVar29;
                }
              }
              else {
                fVar35 = (float)(int)(fVar29 + -0.5);
              }
              fVar29 = fVar31;
              if (1.0 < fVar31) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar31 < 0.0) {
                fVar29 = unaff_s8;
              }
              dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar16 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar29 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar29 = (float)(int)(fVar29 + -0.5);
              }
              fVar31 = fVar28;
              if (1.0 < fVar28) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar28 < 0.0) {
                fVar31 = unaff_s8;
              }
              dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar16 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar28 = (float)(int)(fVar31 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar31 + -0.5);
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              *(uint *)(lVar15 + unaff_x22 * 4 + 0x20) =
                   (int)fVar30 & 0xffU | ((int)fVar35 & 0xffU) << 8 | ((int)fVar29 & 0xffU) << 0x10
                   | (int)fVar28 << 0x18;
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0))
              goto LAB_00e443fc;
              fVar29 = *(float *)(lVar15 + 0x1c);
              lVar18 = *unaff_x26;
              fVar28 = *(float *)(lVar15 + 0x20);
              fVar35 = *(float *)(lVar15 + 0x24);
              fVar30 = *(float *)(lVar15 + 0x18) * 255.0;
              if (*(float *)(lVar15 + 0x18) < 0.0) {
                fVar30 = unaff_s8;
              }
              dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar16 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar31 = fVar29;
              if (1.0 < fVar29) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar29 < 0.0) {
                fVar31 = unaff_s8;
              }
              dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar16 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e4057c;
                }
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = fVar29;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              fVar29 = fVar28;
              if (1.0 < fVar28) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar28 < 0.0) {
                fVar29 = unaff_s8;
              }
              dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar16 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar29 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar29 = (float)(int)(fVar29 + -0.5);
              }
              fVar28 = fVar35;
              if (1.0 < fVar35) {
                fVar28 = 1.0;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar35 < 0.0) {
                fVar28 = unaff_s8;
              }
              dVar16 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar16 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar28 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar28 + -0.5);
              }
              if (lVar18 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
              *(uint *)(lVar18 + (long)(int)uVar23 * 4 + 0x20) =
                   (int)fVar30 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar29 & 0xffU) << 0x10
                   | (int)fVar35 << 0x18;
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0))
              goto LAB_00e443fc;
              fVar29 = *(float *)(lVar15 + 0x1c);
              lVar18 = *unaff_x26;
              fVar28 = *(float *)(lVar15 + 0x20);
              fVar35 = *(float *)(lVar15 + 0x24);
              fVar30 = *(float *)(lVar15 + 0x18) * 255.0;
              if (*(float *)(lVar15 + 0x18) < 0.0) {
                fVar30 = unaff_s8;
              }
              dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar16 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar31 = fVar29;
              if (1.0 < fVar29) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar29 < 0.0) {
                fVar31 = unaff_s8;
              }
              dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar16 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e40d8c;
                }
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = fVar29;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              fVar29 = fVar28;
              if (1.0 < fVar28) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar28 < 0.0) {
                fVar29 = unaff_s8;
              }
              dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar16 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar29 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar29 = (float)(int)(fVar29 + -0.5);
              }
              fVar28 = fVar35;
              if (1.0 < fVar35) {
                fVar28 = 1.0;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar35 < 0.0) {
                fVar28 = unaff_s8;
              }
              dVar16 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar16 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar28 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar28 + -0.5);
              }
              if (lVar18 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_00e44400;
              *(uint *)(lVar18 + (long)(int)uVar26 * 4 + 0x20) =
                   (int)fVar30 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar29 & 0xffU) << 0x10
                   | (int)fVar35 << 0x18;
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar18 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar18 == 0))
              goto LAB_00e443fc;
              fVar30 = *(float *)(lVar18 + 0x18);
              fVar29 = *(float *)(lVar18 + 0x1c);
              lVar15 = *unaff_x26;
              fVar28 = *(float *)(lVar18 + 0x20);
              fVar35 = *(float *)(lVar18 + 0x24);
            }
            fVar31 = fVar30 * 255.0;
            if (fVar30 < 0.0) {
              fVar31 = unaff_s8;
            }
            dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar16 == 0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar31 + -0.5);
            }
            fVar31 = fVar29;
            if (1.0 < fVar29) {
              fVar31 = 1.0;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar29 < 0.0) {
              fVar31 = unaff_s8;
            }
            dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar16 == 0.5) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e412dc;
              }
              fVar31 = (float)(int)(fVar31 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = fVar29;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + -0.5);
            }
            fVar29 = fVar28;
            if (1.0 < fVar28) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar28 < 0.0) {
              fVar29 = unaff_s8;
            }
            dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar16 == 0.5) {
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar29 = (float)(int)(fVar29 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + -0.5);
            }
            param_3 = 0x3f800000;
            fVar28 = fVar35;
            if (1.0 < fVar35) {
              fVar28 = 1.0;
            }
            fVar28 = fVar28 * 255.0;
            if (fVar35 < 0.0) {
              fVar28 = unaff_s8;
            }
            dVar16 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar16 == 0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar28 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar28 + -0.5);
            }
            if (lVar15 != 0) {
              if (uVar22 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar15 + unaff_x21 * 4 + 0x20) =
                     (int)fVar30 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                goto LAB_00e43400;
              }
              goto LAB_00e44400;
            }
            goto LAB_00e443fc;
          }
          lVar15 = *unaff_x26;
          dVar34 = modf(DAT_028aa048,(double *)&stack0x00000070);
          if (dVar34 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + unaff_s10;
            }
          }
          else {
            fVar30 = 255.0;
          }
          dVar34 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar34 == 0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + unaff_s10;
            }
          }
          else {
            fVar29 = 255.0;
          }
          dVar34 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar34 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + unaff_s10;
            }
          }
          else {
            fVar35 = 255.0;
          }
          dVar34 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar34 == 0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar28 = 255.0;
          }
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          *(uint *)(lVar15 + unaff_x22 * 4 + 0x20) =
               (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
               (int)fVar28 << 0x18;
          lVar15 = *unaff_x26;
          dVar34 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar34 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar30 = 255.0;
          }
          dVar34 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar34 == 0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar29 = 255.0;
          }
          dVar34 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar34 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = 255.0;
          }
          dVar34 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar34 == 0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar28 = 255.0;
          }
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
          *(uint *)(lVar15 + (long)(int)uVar23 * 4 + 0x20) =
               (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
               (int)fVar28 << 0x18;
          lVar15 = *unaff_x26;
          dVar34 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar34 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar30 = 255.0;
          }
          dVar34 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar34 == 0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar29 = 255.0;
          }
          dVar34 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar34 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = 255.0;
          }
          dVar34 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar34 == 0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar28 = 255.0;
          }
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
          *(uint *)(lVar15 + (long)(int)uVar26 * 4 + 0x20) =
               (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
               (int)fVar28 << 0x18;
          lVar15 = *unaff_x26;
          dVar34 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar34 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar30 = 255.0;
          }
          dVar34 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar34 == 0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar29 = 255.0;
          }
          dVar34 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar34 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = 255.0;
          }
          dVar16 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar16 == 0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar28 = 255.0;
          }
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_00e44400;
          *(uint *)(lVar15 + unaff_x21 * 4 + 0x20) =
               (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
               (int)fVar28 << 0x18;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          uVar37 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_02681b9c(uVar37,0,0);
          if ((uVar12 & 1) == 0) goto LAB_00e43400;
          lVar15 = *unaff_x26;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          puVar21 = (uint *)(lVar15 + unaff_x22 * 4 + 0x20);
          uVar5 = *puVar21;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) goto LAB_00e443fc;
          fVar29 = ((float)(uVar5 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
          fVar31 = ((float)(uVar5 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
          fVar28 = *(float *)(lVar15 + 0x20);
          fVar35 = *(float *)(lVar15 + 0x24);
          fVar30 = fVar29 * 255.0;
          if (fVar29 < 0.0) {
            fVar30 = unaff_s8;
          }
          dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar16 == 0.5) {
              fVar30 = 1.0;
              goto LAB_00e3ede4;
            }
            fVar29 = (float)(int)(fVar30 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar30 = -1.0;
LAB_00e3ede4:
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + fVar30;
            }
          }
          else {
            fVar29 = (float)(int)(fVar30 + -0.5);
          }
          fVar28 = ((float)(uVar5 >> 0x10 & 0xff) / 255.0) * fVar28;
          fVar30 = fVar31 * 255.0;
          if (fVar31 < 0.0) {
            fVar30 = unaff_s8;
          }
          dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar16 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + -0.5);
          }
          fVar31 = fVar28;
          if (1.0 < fVar28) {
            fVar31 = 1.0;
          }
          fVar35 = ((float)(uVar5 >> 0x18) / 255.0) * fVar35;
          fVar31 = fVar31 * 255.0;
          if (fVar28 < 0.0) {
            fVar31 = unaff_s8;
          }
          dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar16 == 0.5) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e3ffb0;
            }
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = fVar28;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + -0.5);
          }
          fVar28 = fVar35;
          if (1.0 < fVar35) {
            fVar28 = 1.0;
          }
          fVar28 = fVar28 * 255.0;
          if (fVar35 < 0.0) {
            fVar28 = unaff_s8;
          }
          dVar16 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar16 == 0.5) {
              fVar35 = 1.0;
              goto LAB_00e40174;
            }
            fVar28 = (float)(int)(fVar28 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar35 = -1.0;
LAB_00e40174:
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + fVar35;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          *puVar21 = (int)fVar29 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar28 << 0x18;
          lVar15 = *unaff_x26;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
          puVar21 = (uint *)(lVar15 + (long)(int)uVar23 * 4 + 0x20);
          uVar5 = *puVar21;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) goto LAB_00e443fc;
          fVar29 = ((float)(uVar5 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
          fVar31 = ((float)(uVar5 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
          fVar28 = *(float *)(lVar15 + 0x20);
          fVar35 = *(float *)(lVar15 + 0x24);
          fVar30 = fVar29 * 255.0;
          if (fVar29 < 0.0) {
            fVar30 = unaff_s8;
          }
          dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar16 == 0.5) {
              fVar30 = 1.0;
              goto LAB_00e404dc;
            }
            fVar29 = (float)(int)(fVar30 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar30 = -1.0;
LAB_00e404dc:
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + fVar30;
            }
          }
          else {
            fVar29 = (float)(int)(fVar30 + -0.5);
          }
          fVar28 = ((float)(uVar5 >> 0x10 & 0xff) / 255.0) * fVar28;
          fVar30 = fVar31 * 255.0;
          if (fVar31 < 0.0) {
            fVar30 = unaff_s8;
          }
          dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar16 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + -0.5);
          }
          fVar31 = fVar28;
          if (1.0 < fVar28) {
            fVar31 = 1.0;
          }
          fVar35 = ((float)(uVar5 >> 0x18) / 255.0) * fVar35;
          fVar31 = fVar31 * 255.0;
          if (fVar28 < 0.0) {
            fVar31 = unaff_s8;
          }
          dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar16 == 0.5) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e40888;
            }
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = fVar28;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + -0.5);
          }
          fVar28 = fVar35;
          if (1.0 < fVar35) {
            fVar28 = 1.0;
          }
          fVar28 = fVar28 * 255.0;
          if (fVar35 < 0.0) {
            fVar28 = unaff_s8;
          }
          dVar16 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar16 == 0.5) {
              fVar35 = 1.0;
              goto LAB_00e40a4c;
            }
            fVar28 = (float)(int)(fVar28 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar35 = -1.0;
LAB_00e40a4c:
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + fVar35;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          *puVar21 = (int)fVar29 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar28 << 0x18;
          lVar15 = *unaff_x26;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
          lVar15 = lVar15 + (long)(int)uVar26 * 4;
        }
        else {
          lVar15 = *(long *)((long)dVar16 + 0xa8);
          if (lVar15 == 0) goto LAB_00e443fc;
          fVar29 = *(float *)(lVar15 + 0x24);
          if (fVar29 != 0.0) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          }
          unaff_x25 = (long *)StringLiteral_9119;
          cVar6 = *(char *)(lVar15 + 0x2c);
          lVar20 = *unaff_x26;
          lVar18 = *(long *)(lVar15 + 0x18);
          fVar30 = fVar30 * fVar29;
          if (*(int *)(lVar15 + 0x28) == 1) {
            if (cVar6 == '\0') {
              if (lVar18 == 0) goto LAB_00e443fc;
              fVar35 = *(float *)(lVar15 + 0x20);
              fVar28 = *(float *)((long)dVar16 + 0x84);
              fVar30 = fVar30 + (*(float *)((long)dVar16 + 0x48) * fVar35) / fVar28;
              fVar30 = fVar30 - (float)(int)fVar30;
              fVar29 = fVar30;
              if (unaff_s10 < fVar30) {
                fVar29 = unaff_s10;
              }
              fVar31 = fVar29;
              if (fVar30 < 0.0) {
                fVar31 = 0.0;
              }
              fVar31 = (float)FUN_0269ad38(fVar31,lVar18,0);
              fVar30 = fVar31;
              if (unaff_s10 < fVar31) {
                fVar30 = unaff_s10;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar31 < 0.0) {
                fVar30 = 0.0;
              }
              dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar16 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + unaff_s10;
                  goto LAB_00e3eeac;
                }
                fVar31 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = fVar30;
                }
              }
              else {
                fVar31 = (float)(int)(fVar30 + -0.5);
              }
              fVar30 = fVar29;
              if (unaff_s10 < fVar29) {
                fVar30 = unaff_s10;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar29 < 0.0) {
                fVar30 = 0.0;
              }
              dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar16 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + unaff_s10;
                  goto LAB_00e41534;
                }
                fVar29 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar30;
                }
              }
              else {
                fVar29 = (float)(int)(fVar30 + -0.5);
              }
              fVar30 = fVar35;
              if (unaff_s10 < fVar35) {
                fVar30 = unaff_s10;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar35 < 0.0) {
                fVar30 = 0.0;
              }
              dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar16 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar35 = fVar28;
              if (1.0 < fVar28) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar28 < 0.0) {
                fVar35 = 0.0;
              }
              dVar16 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar16 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar35 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + -0.5);
              }
              if (lVar20 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              *(uint *)(lVar20 + unaff_x22 * 4 + 0x20) =
                   (int)fVar31 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10
                   | (int)fVar35 << 0x18;
              dVar16 = *in_stack_00000060;
              if (((dVar16 == 0.0) || (lVar15 = *(long *)((long)dVar16 + 0xa8), lVar15 == 0)) ||
                 (lVar18 = *(long *)(lVar15 + 0x18), lVar18 == 0)) goto LAB_00e443fc;
              fVar35 = *(float *)((long)dVar16 + 0x48);
              fVar28 = *(float *)((long)dVar16 + 0x84);
              lVar20 = *unaff_x26;
              fVar29 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                       (fVar35 * *(float *)(lVar15 + 0x20)) / fVar28;
              fVar29 = fVar29 - (float)(int)fVar29;
              fVar30 = fVar29;
              if (1.0 < fVar29) {
                fVar30 = 1.0;
              }
            }
            else {
              if (lVar18 == 0) goto LAB_00e443fc;
              fVar35 = *(float *)((long)dVar16 + 0x84);
              fVar28 = *(float *)(lVar15 + 0x20);
              fVar30 = fVar30 + ((*(float *)((long)dVar16 + 0x48) + fVar35) * fVar28) / fVar35;
              fVar30 = fVar30 - (float)(int)fVar30;
              fVar29 = fVar30;
              if (unaff_s10 < fVar30) {
                fVar29 = unaff_s10;
              }
              fVar31 = fVar29;
              if (fVar30 < 0.0) {
                fVar31 = 0.0;
              }
              fVar31 = (float)FUN_0269ad38(fVar31,lVar18,0);
              fVar30 = fVar31;
              if (unaff_s10 < fVar31) {
                fVar30 = unaff_s10;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar31 < 0.0) {
                fVar30 = 0.0;
              }
              dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar16 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + unaff_s10;
                  goto LAB_00e3ed6c;
                }
                fVar31 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = fVar30;
                }
              }
              else {
                fVar31 = (float)(int)(fVar30 + -0.5);
              }
              fVar30 = fVar29;
              if (unaff_s10 < fVar29) {
                fVar30 = unaff_s10;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar29 < 0.0) {
                fVar30 = 0.0;
              }
              dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar16 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + unaff_s10;
                  goto LAB_00e3f2ec;
                }
                fVar29 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar30;
                }
              }
              else {
                fVar29 = (float)(int)(fVar30 + -0.5);
              }
              fVar30 = fVar35;
              if (unaff_s10 < fVar35) {
                fVar30 = unaff_s10;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar35 < 0.0) {
                fVar30 = 0.0;
              }
              dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar16 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar35 = fVar28;
              if (1.0 < fVar28) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar28 < 0.0) {
                fVar35 = 0.0;
              }
              dVar16 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar16 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar35 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + -0.5);
              }
              if (lVar20 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              *(uint *)(lVar20 + unaff_x22 * 4 + 0x20) =
                   (int)fVar31 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10
                   | (int)fVar35 << 0x18;
              dVar16 = *in_stack_00000060;
              if (((dVar16 == 0.0) || (lVar15 = *(long *)((long)dVar16 + 0xa8), lVar15 == 0)) ||
                 (lVar18 = *(long *)(lVar15 + 0x18), lVar18 == 0)) goto LAB_00e443fc;
              fVar35 = *(float *)((long)dVar16 + 0x84);
              fVar28 = *(float *)(lVar15 + 0x20);
              lVar20 = *unaff_x26;
              fVar29 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                       ((*(float *)((long)dVar16 + 0x48) + fVar35) * fVar28) / fVar35;
              fVar29 = fVar29 - (float)(int)fVar29;
              fVar30 = fVar29;
              if (1.0 < fVar29) {
                fVar30 = 1.0;
              }
            }
            fVar31 = fVar30;
            if (fVar29 < 0.0) {
              fVar31 = 0.0;
            }
            fVar31 = (float)FUN_0269ad38(fVar31,lVar18,0);
            fVar29 = fVar31;
            if (1.0 < fVar31) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar31 < 0.0) {
              fVar29 = 0.0;
            }
            dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar16 == 0.5) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e419a4;
              }
              fVar31 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = fVar29;
              }
            }
            else {
              fVar31 = (float)(int)(fVar29 + -0.5);
            }
            fVar29 = fVar30;
            if (1.0 < fVar30) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar30 < 0.0) {
              fVar29 = 0.0;
            }
            dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar16 == 0.5) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41a34;
              }
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = fVar30;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + -0.5);
            }
            fVar30 = fVar35;
            if (1.0 < fVar35) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar35 < 0.0) {
              fVar30 = 0.0;
            }
            dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar16 == 0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + -0.5);
            }
            fVar35 = fVar28;
            if (1.0 < fVar28) {
              fVar35 = 1.0;
            }
            fVar35 = fVar35 * 255.0;
            if (fVar28 < 0.0) {
              fVar35 = 0.0;
            }
            dVar16 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar16 == 0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + -0.5);
            }
            if (lVar20 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
            *(uint *)(lVar20 + (long)(int)uVar23 * 4 + 0x20) =
                 (int)fVar31 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10 |
                 (int)fVar35 << 0x18;
            dVar16 = *in_stack_00000060;
            if (((dVar16 == 0.0) || (lVar15 = *(long *)((long)dVar16 + 0xa8), lVar15 == 0)) ||
               (*(long *)(lVar15 + 0x18) == 0)) goto LAB_00e443fc;
            fVar35 = *(float *)((long)dVar16 + 0x48);
            fVar28 = *(float *)((long)dVar16 + 0x84);
            lVar18 = *unaff_x26;
            fVar29 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                     (fVar35 * *(float *)(lVar15 + 0x20)) / fVar28;
            fVar29 = fVar29 - (float)(int)fVar29;
            fVar30 = fVar29;
            if (1.0 < fVar29) {
              fVar30 = 1.0;
            }
            fVar31 = fVar30;
            if (fVar29 < 0.0) {
              fVar31 = 0.0;
            }
            fVar31 = (float)FUN_0269ad38(fVar31,*(long *)(lVar15 + 0x18),0);
            fVar29 = fVar31;
            if (1.0 < fVar31) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar31 < 0.0) {
              fVar29 = 0.0;
            }
            dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar16 == 0.5) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41cd0;
              }
              fVar31 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = fVar29;
              }
            }
            else {
              fVar31 = (float)(int)(fVar29 + -0.5);
            }
            fVar29 = fVar30;
            if (1.0 < fVar30) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar30 < 0.0) {
              fVar29 = 0.0;
            }
            dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar16 == 0.5) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41d60;
              }
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = fVar30;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + -0.5);
            }
            fVar30 = fVar35;
            if (1.0 < fVar35) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar35 < 0.0) {
              fVar30 = 0.0;
            }
            dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar16 == 0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + -0.5);
            }
            fVar35 = fVar28;
            if (1.0 < fVar28) {
              fVar35 = 1.0;
            }
            fVar35 = fVar35 * 255.0;
            if (fVar28 < 0.0) {
              fVar35 = 0.0;
            }
            dVar16 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar16 == 0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + -0.5);
            }
            if (lVar18 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_00e44400;
            *(uint *)(lVar18 + (long)(int)uVar26 * 4 + 0x20) =
                 (int)fVar31 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10 |
                 (int)fVar35 << 0x18;
            dVar16 = *in_stack_00000060;
            if (((dVar16 == 0.0) || (lVar15 = *(long *)((long)dVar16 + 0xa8), lVar15 == 0)) ||
               (*(long *)(lVar15 + 0x18) == 0)) goto LAB_00e443fc;
            fVar35 = *(float *)((long)dVar16 + 0x48);
            fVar28 = *(float *)((long)dVar16 + 0x84);
            lVar18 = *unaff_x26;
            fVar29 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                     (fVar35 * *(float *)(lVar15 + 0x20)) / fVar28;
            fVar29 = fVar29 - (float)(int)fVar29;
            fVar30 = fVar29;
            if (1.0 < fVar29) {
              fVar30 = 1.0;
            }
            fVar31 = fVar30;
            if (fVar29 < 0.0) {
              fVar31 = 0.0;
            }
            fVar31 = (float)FUN_0269ad38(fVar31,*(long *)(lVar15 + 0x18),0);
            fVar29 = fVar31;
            if (1.0 < fVar31) {
              fVar29 = 1.0;
            }
            param_3 = 0x437f0000;
            fVar29 = fVar29 * 255.0;
            if (fVar31 < 0.0) {
              fVar29 = 0.0;
            }
            dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar16 == 0.5) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41ffc;
              }
              fVar31 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = fVar29;
              }
            }
            else {
              fVar31 = (float)(int)(fVar29 + -0.5);
            }
            fVar29 = fVar30;
            if (1.0 < fVar30) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar30 < 0.0) {
              fVar29 = 0.0;
            }
LAB_00e42040:
            dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
            if (fVar29 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
            if (dVar16 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              fVar29 = fVar30 + 1.0;
              goto LAB_00e425d4;
            }
            fVar30 = (float)(int)(fVar29 + 0.5);
          }
          else {
            lVar17 = *in_stack_00000038;
            if (lVar17 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar17 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            if (lVar18 == 0) goto LAB_00e443fc;
            fVar35 = *(float *)(lVar17 + unaff_x22 * unaff_x24 + 0x20);
            fVar28 = *(float *)((long)dVar16 + 0x84);
            fVar30 = fVar30 + (fVar35 * *(float *)(lVar15 + 0x20)) / fVar28;
            fVar30 = fVar30 - (float)(int)fVar30;
            fVar29 = fVar30;
            if (unaff_s10 < fVar30) {
              fVar29 = unaff_s10;
            }
            fVar31 = fVar29;
            if (fVar30 < 0.0) {
              fVar31 = 0.0;
            }
            fVar31 = (float)FUN_0269ad38(fVar31,lVar18,0);
            fVar30 = fVar31;
            if (unaff_s10 < fVar31) {
              fVar30 = unaff_s10;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar31 < 0.0) {
              fVar30 = 0.0;
            }
            dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar16 == 0.5) {
                fVar30 = (float)_fStack0000000000000070 + unaff_s10;
                goto LAB_00e3e0b0;
              }
              fVar31 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = fVar30;
              }
            }
            else {
              fVar31 = (float)(int)(fVar30 + -0.5);
            }
            fVar30 = fVar29;
            if (unaff_s10 < fVar29) {
              fVar30 = unaff_s10;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar29 < 0.0) {
              fVar30 = 0.0;
            }
            dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar16 == 0.5) {
                fVar30 = (float)_fStack0000000000000070 + unaff_s10;
                goto LAB_00e3ee80;
              }
              fVar29 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = fVar30;
              }
            }
            else {
              fVar29 = (float)(int)(fVar30 + -0.5);
            }
            fVar30 = fVar35;
            if (unaff_s10 < fVar35) {
              fVar30 = unaff_s10;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar35 < 0.0) {
              fVar30 = 0.0;
            }
            dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar16 == 0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + -0.5);
            }
            fVar35 = fVar28;
            if (1.0 < fVar28) {
              fVar35 = 1.0;
            }
            fVar35 = fVar35 * 255.0;
            if (fVar28 < 0.0) {
              fVar35 = 0.0;
            }
            dVar16 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar16 == 0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + -0.5);
            }
            if (lVar20 == 0) goto LAB_00e443fc;
            fVar28 = 1.0;
            if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            *(uint *)(lVar20 + unaff_x22 * 4 + 0x20) =
                 (int)fVar31 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10 |
                 (int)fVar35 << 0x18;
            unaff_x25 = (long *)StringLiteral_9119;
            dVar16 = *in_stack_00000060;
            if (((dVar16 == 0.0) || (lVar15 = *(long *)((long)dVar16 + 0xa8), lVar15 == 0)) ||
               (lVar18 = *in_stack_00000038, lVar18 == 0)) goto LAB_00e443fc;
            lVar17 = *unaff_x26;
            lVar20 = *(long *)(lVar15 + 0x18);
            fVar30 = fStack0000000000000048 * *(float *)(lVar15 + 0x24);
            if (cVar6 != '\0') {
              if (uVar23 < *(uint *)(lVar18 + 0x18)) {
                if (lVar20 != 0) {
                  fVar35 = *(float *)(lVar18 + (int)uVar23 * unaff_x24 + 0x20);
                  fVar31 = *(float *)((long)dVar16 + 0x84);
                  fVar30 = fVar30 + (fVar35 * *(float *)(lVar15 + 0x20)) / fVar31;
                  fVar30 = fVar30 - (float)(int)fVar30;
                  fVar29 = fVar30;
                  if (1.0 < fVar30) {
                    fVar29 = fVar28;
                  }
                  fVar32 = fVar29;
                  if (fVar30 < 0.0) {
                    fVar32 = 0.0;
                  }
                  fVar32 = (float)FUN_0269ad38(fVar32,lVar20,0);
                  fVar30 = fVar32;
                  if (1.0 < fVar32) {
                    fVar30 = fVar28;
                  }
                  fVar30 = fVar30 * 255.0;
                  if (fVar32 < 0.0) {
                    fVar30 = 0.0;
                  }
                  dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
                  if (0.0 <= fVar30) {
                    if (dVar16 == 0.5) {
                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e3f234;
                    }
                    fVar28 = (float)(int)(fVar30 + 0.5);
                  }
                  else if (dVar16 == -0.5) {
                    fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                    fVar28 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar28 = fVar30;
                    }
                  }
                  else {
                    fVar28 = (float)(int)(fVar30 + -0.5);
                  }
                  fVar30 = fVar29;
                  if (1.0 < fVar29) {
                    fVar30 = 1.0;
                  }
                  fVar30 = fVar30 * 255.0;
                  if (fVar29 < 0.0) {
                    fVar30 = 0.0;
                  }
                  dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
                  if (0.0 <= fVar30) {
                    if (dVar16 == 0.5) {
                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e3f594;
                    }
                    fVar29 = (float)(int)(fVar30 + 0.5);
                  }
                  else if (dVar16 == -0.5) {
                    fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                    fVar29 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar29 = fVar30;
                    }
                  }
                  else {
                    fVar29 = (float)(int)(fVar30 + -0.5);
                  }
                  fVar30 = fVar35;
                  if (1.0 < fVar35) {
                    fVar30 = 1.0;
                  }
                  fVar30 = fVar30 * 255.0;
                  if (fVar35 < 0.0) {
                    fVar30 = 0.0;
                  }
                  dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
                  if (0.0 <= fVar30) {
                    if (dVar16 == 0.5) {
                      fVar30 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar30 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar30 = (float)(int)(fVar30 + 0.5);
                    }
                  }
                  else if (dVar16 == -0.5) {
                    fVar30 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar30 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar30 = (float)(int)(fVar30 + -0.5);
                  }
                  fVar35 = fVar31;
                  if (1.0 < fVar31) {
                    fVar35 = 1.0;
                  }
                  fVar35 = fVar35 * 255.0;
                  if (fVar31 < 0.0) {
                    fVar35 = 0.0;
                  }
                  dVar16 = modf((double)fVar35,(double *)&stack0x00000070);
                  if (0.0 <= fVar35) {
                    if (dVar16 == 0.5) {
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar35 + 0.5);
                    }
                  }
                  else if (dVar16 == -0.5) {
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar35 + -0.5);
                  }
                  if (lVar17 != 0) {
                    if (uVar23 < *(uint *)(lVar17 + 0x18)) {
                      *(uint *)(lVar17 + (long)(int)uVar23 * 4 + 0x20) =
                           (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                           ((int)fVar30 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                      dVar16 = *in_stack_00000060;
                      if (((dVar16 != 0.0) && (lVar15 = *(long *)((long)dVar16 + 0xa8), lVar15 != 0)
                          ) && (lVar18 = *in_stack_00000038, lVar18 != 0)) {
                        if (uVar26 < *(uint *)(lVar18 + 0x18)) {
                          if (*(long *)(lVar15 + 0x18) != 0) {
                            fVar35 = *(float *)(lVar18 + (int)uVar26 * unaff_x24 + 0x20);
                            fVar28 = *(float *)((long)dVar16 + 0x84);
                            lVar18 = *unaff_x26;
                            fVar29 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                                     (fVar35 * *(float *)(lVar15 + 0x20)) / fVar28;
                            fVar29 = fVar29 - (float)(int)fVar29;
                            fVar30 = fVar29;
                            if (1.0 < fVar29) {
                              fVar30 = 1.0;
                            }
                            fVar31 = fVar30;
                            if (fVar29 < 0.0) {
                              fVar31 = 0.0;
                            }
                            fVar31 = (float)FUN_0269ad38(fVar31,*(long *)(lVar15 + 0x18),0);
                            fVar29 = fVar31;
                            if (1.0 < fVar31) {
                              fVar29 = 1.0;
                            }
                            fVar29 = fVar29 * 255.0;
                            if (fVar31 < 0.0) {
                              fVar29 = 0.0;
                            }
                            dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
                            if (0.0 <= fVar29) {
                              if (dVar16 == 0.5) {
                                fVar29 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3f858;
                              }
                              fVar31 = (float)(int)(fVar29 + 0.5);
                            }
                            else if (dVar16 == -0.5) {
                              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                              fVar31 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar31 = fVar29;
                              }
                            }
                            else {
                              fVar31 = (float)(int)(fVar29 + -0.5);
                            }
                            fVar29 = fVar30;
                            if (1.0 < fVar30) {
                              fVar29 = 1.0;
                            }
                            fVar29 = fVar29 * 255.0;
                            if (fVar30 < 0.0) {
                              fVar29 = 0.0;
                            }
                            dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
                            if (0.0 <= fVar29) {
                              if (dVar16 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3f8e8;
                              }
                              fVar29 = (float)(int)(fVar29 + 0.5);
                            }
                            else if (dVar16 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                              fVar29 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar29 = fVar30;
                              }
                            }
                            else {
                              fVar29 = (float)(int)(fVar29 + -0.5);
                            }
                            fVar30 = fVar35;
                            if (1.0 < fVar35) {
                              fVar30 = 1.0;
                            }
                            fVar30 = fVar30 * 255.0;
                            if (fVar35 < 0.0) {
                              fVar30 = 0.0;
                            }
                            dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
                            if (0.0 <= fVar30) {
                              if (dVar16 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + 0.5);
                              }
                            }
                            else if (dVar16 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar30 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar30 = (float)(int)(fVar30 + -0.5);
                            }
                            fVar35 = fVar28;
                            if (1.0 < fVar28) {
                              fVar35 = 1.0;
                            }
                            fVar35 = fVar35 * 255.0;
                            if (fVar28 < 0.0) {
                              fVar35 = 0.0;
                            }
                            dVar16 = modf((double)fVar35,(double *)&stack0x00000070);
                            unaff_x25 = (long *)StringLiteral_9119;
                            if (0.0 <= fVar35) {
                              if (dVar16 == 0.5) {
                                fVar35 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar35 = (float)(int)(fVar35 + 0.5);
                              }
                            }
                            else if (dVar16 == -0.5) {
                              fVar35 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar35 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar35 = (float)(int)(fVar35 + -0.5);
                            }
                            if (lVar18 != 0) {
                              if (uVar26 < *(uint *)(lVar18 + 0x18)) {
                                *(uint *)(lVar18 + (long)(int)uVar26 * 4 + 0x20) =
                                     (int)fVar31 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                     ((int)fVar30 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                                dVar16 = *in_stack_00000060;
                                if (((dVar16 != 0.0) &&
                                    (lVar15 = *(long *)((long)dVar16 + 0xa8), lVar15 != 0)) &&
                                   (lVar18 = *in_stack_00000038, lVar18 != 0)) {
                                  if (uVar22 < *(uint *)(lVar18 + 0x18)) {
                                    if (*(long *)(lVar15 + 0x18) != 0) {
                                      fVar35 = *(float *)(lVar18 + unaff_x21 * unaff_x24 + 0x20);
                                      fVar28 = *(float *)((long)dVar16 + 0x84);
                                      lVar18 = *unaff_x26;
                                      fVar29 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                                               (fVar35 * *(float *)(lVar15 + 0x20)) / fVar28;
                                      fVar29 = fVar29 - (float)(int)fVar29;
                                      fVar30 = fVar29;
                                      if (1.0 < fVar29) {
                                        fVar30 = 1.0;
                                      }
                                      fVar31 = fVar30;
                                      if (fVar29 < 0.0) {
                                        fVar31 = 0.0;
                                      }
                                      fVar31 = (float)FUN_0269ad38(fVar31,*(long *)(lVar15 + 0x18),0
                                                                  );
                                      fVar29 = fVar31;
                                      if (1.0 < fVar31) {
                                        fVar29 = 1.0;
                                      }
                                      param_3 = 0x437f0000;
                                      fVar29 = fVar29 * 255.0;
                                      if (fVar31 < 0.0) {
                                        fVar29 = 0.0;
                                      }
                                      dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
                                      if (0.0 <= fVar29) {
                                        if (dVar16 == 0.5) {
                                          fVar29 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e3fbd0;
                                        }
                                        fVar31 = (float)(int)(fVar29 + 0.5);
                                      }
                                      else if (dVar16 == -0.5) {
                                        fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                        fVar31 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar31 = fVar29;
                                        }
                                      }
                                      else {
                                        fVar31 = (float)(int)(fVar29 + -0.5);
                                      }
                                      fVar29 = fVar30;
                                      if (1.0 < fVar30) {
                                        fVar29 = 1.0;
                                      }
                                      fVar29 = fVar29 * 255.0;
                                      if (fVar30 < 0.0) {
                                        fVar29 = 0.0;
                                      }
                                      goto LAB_00e42040;
                                    }
                                    goto LAB_00e443fc;
                                  }
                                  goto LAB_00e44400;
                                }
                                goto LAB_00e443fc;
                              }
                              goto LAB_00e44400;
                            }
                          }
                          goto LAB_00e443fc;
                        }
                        goto LAB_00e44400;
                      }
                      goto LAB_00e443fc;
                    }
                    goto LAB_00e44400;
                  }
                }
                goto LAB_00e443fc;
              }
              goto LAB_00e44400;
            }
            if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            if (lVar20 == 0) goto LAB_00e443fc;
            fVar35 = *(float *)(lVar18 + unaff_x22 * unaff_x24 + 0x20);
            fVar31 = *(float *)((long)dVar16 + 0x84);
            fVar30 = fVar30 + (fVar35 * *(float *)(lVar15 + 0x20)) / fVar31;
            fVar30 = fVar30 - (float)(int)fVar30;
            fVar29 = fVar30;
            if (1.0 < fVar30) {
              fVar29 = fVar28;
            }
            fVar32 = fVar29;
            if (fVar30 < 0.0) {
              fVar32 = 0.0;
            }
            fVar32 = (float)FUN_0269ad38(fVar32,lVar20,0);
            fVar30 = fVar32;
            if (1.0 < fVar32) {
              fVar30 = fVar28;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar32 < 0.0) {
              fVar30 = 0.0;
            }
            dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar16 == 0.5) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3f25c;
              }
              fVar28 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = fVar30;
              }
            }
            else {
              fVar28 = (float)(int)(fVar30 + -0.5);
            }
            fVar30 = fVar29;
            if (1.0 < fVar29) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar29 < 0.0) {
              fVar30 = 0.0;
            }
            dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar16 == 0.5) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e415c4;
              }
              fVar29 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = fVar30;
              }
            }
            else {
              fVar29 = (float)(int)(fVar30 + -0.5);
            }
            fVar30 = fVar35;
            if (1.0 < fVar35) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar35 < 0.0) {
              fVar30 = 0.0;
            }
            dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar16 == 0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + -0.5);
            }
            fVar35 = fVar31;
            if (1.0 < fVar31) {
              fVar35 = 1.0;
            }
            fVar35 = fVar35 * 255.0;
            if (fVar31 < 0.0) {
              fVar35 = 0.0;
            }
            dVar16 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar16 == 0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + -0.5);
            }
            if (lVar17 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_00e44400;
            *(uint *)(lVar17 + (long)(int)uVar23 * 4 + 0x20) =
                 (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10 |
                 (int)fVar35 << 0x18;
            dVar16 = *in_stack_00000060;
            if (((dVar16 == 0.0) || (lVar15 = *(long *)((long)dVar16 + 0xa8), lVar15 == 0)) ||
               (lVar18 = *in_stack_00000038, lVar18 == 0)) goto LAB_00e443fc;
            if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            if (*(long *)(lVar15 + 0x18) == 0) goto LAB_00e443fc;
            fVar35 = *(float *)(lVar18 + unaff_x22 * unaff_x24 + 0x20);
            fVar28 = *(float *)((long)dVar16 + 0x84);
            lVar18 = *unaff_x26;
            fVar29 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                     (fVar35 * *(float *)(lVar15 + 0x20)) / fVar28;
            fVar29 = fVar29 - (float)(int)fVar29;
            fVar30 = fVar29;
            if (1.0 < fVar29) {
              fVar30 = 1.0;
            }
            fVar31 = fVar30;
            if (fVar29 < 0.0) {
              fVar31 = 0.0;
            }
            fVar31 = (float)FUN_0269ad38(fVar31,*(long *)(lVar15 + 0x18),0);
            fVar29 = fVar31;
            if (1.0 < fVar31) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar31 < 0.0) {
              fVar29 = 0.0;
            }
            dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar16 == 0.5) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e421fc;
              }
              fVar31 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = fVar29;
              }
            }
            else {
              fVar31 = (float)(int)(fVar29 + -0.5);
            }
            fVar29 = fVar30;
            if (1.0 < fVar30) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar30 < 0.0) {
              fVar29 = 0.0;
            }
            dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar16 == 0.5) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e4228c;
              }
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = fVar30;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + -0.5);
            }
            fVar30 = fVar35;
            if (1.0 < fVar35) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar35 < 0.0) {
              fVar30 = 0.0;
            }
            dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar16 == 0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + -0.5);
            }
            fVar35 = fVar28;
            if (1.0 < fVar28) {
              fVar35 = 1.0;
            }
            fVar35 = fVar35 * 255.0;
            if (fVar28 < 0.0) {
              fVar35 = 0.0;
            }
            dVar16 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar16 == 0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + -0.5);
            }
            if (lVar18 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_00e44400;
            *(uint *)(lVar18 + (long)(int)uVar26 * 4 + 0x20) =
                 (int)fVar31 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10 |
                 (int)fVar35 << 0x18;
            dVar16 = *in_stack_00000060;
            if (((dVar16 == 0.0) || (lVar15 = *(long *)((long)dVar16 + 0xa8), lVar15 == 0)) ||
               (lVar18 = *in_stack_00000038, lVar18 == 0)) goto LAB_00e443fc;
            if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            if (*(long *)(lVar15 + 0x18) == 0) goto LAB_00e443fc;
            fVar35 = *(float *)(lVar18 + unaff_x22 * unaff_x24 + 0x20);
            fVar28 = *(float *)((long)dVar16 + 0x84);
            lVar18 = *unaff_x26;
            fVar29 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                     (fVar35 * *(float *)(lVar15 + 0x20)) / fVar28;
            fVar29 = fVar29 - (float)(int)fVar29;
            fVar30 = fVar29;
            if (1.0 < fVar29) {
              fVar30 = 1.0;
            }
            fVar31 = fVar30;
            if (fVar29 < 0.0) {
              fVar31 = 0.0;
            }
            fVar31 = (float)FUN_0269ad38(fVar31,*(long *)(lVar15 + 0x18),0);
            fVar29 = fVar31;
            if (1.0 < fVar31) {
              fVar29 = 1.0;
            }
            param_3 = 0x437f0000;
            fVar29 = fVar29 * 255.0;
            if (fVar31 < 0.0) {
              fVar29 = 0.0;
            }
            dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar16 == 0.5) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e42560;
              }
              fVar31 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = fVar29;
              }
            }
            else {
              fVar31 = (float)(int)(fVar29 + -0.5);
            }
            fVar29 = fVar30;
            if (1.0 < fVar30) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar30 < 0.0) {
              fVar29 = 0.0;
            }
            dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) goto LAB_00e425b8;
LAB_00e4204c:
            if (dVar16 == -0.5) {
              fVar30 = (float)_fStack0000000000000070;
              fVar29 = fVar30 + -1.0;
LAB_00e425d4:
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = fVar29;
              }
            }
            else {
              fVar30 = (float)(int)(fVar29 + -0.5);
            }
          }
          unaff_s8 = 0.0;
          fVar29 = fVar35;
          if (1.0 < fVar35) {
            fVar29 = 1.0;
          }
          fVar29 = fVar29 * 255.0;
          if (fVar35 < 0.0) {
            fVar29 = 0.0;
          }
          dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar16 == 0.5) {
              fVar29 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42654;
            }
            fVar35 = (float)(int)(fVar29 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = fVar29;
            }
          }
          else {
            fVar35 = (float)(int)(fVar29 + -0.5);
          }
          fVar29 = fVar28;
          if (1.0 < fVar28) {
            fVar29 = 1.0;
          }
          fVar29 = fVar29 * 255.0;
          if (fVar28 < 0.0) {
            fVar29 = 0.0;
          }
          dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar16 == 0.5) {
              fVar29 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e426e4;
            }
            fVar28 = (float)(int)(fVar29 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = fVar29;
            }
          }
          else {
            fVar28 = (float)(int)(fVar29 + -0.5);
          }
          if (lVar18 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_00e44400;
          *(uint *)(lVar18 + unaff_x21 * 4 + 0x20) =
               (int)fVar31 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
               (int)fVar28 << 0x18;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          uVar37 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
          unaff_d14 = _fStack0000000000000048 & 0xffffffff;
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_02681b9c(uVar37,0,0);
          if ((uVar12 & 1) == 0) goto LAB_00e43400;
          lVar15 = *unaff_x26;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          puVar21 = (uint *)(lVar15 + unaff_x22 * 4 + 0x20);
          uVar5 = *puVar21;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) goto LAB_00e443fc;
          fVar30 = ((float)(uVar5 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
          fVar31 = ((float)(uVar5 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
          fVar28 = *(float *)(lVar15 + 0x20);
          fVar35 = *(float *)(lVar15 + 0x24);
          fVar29 = fVar30 * 255.0;
          if (fVar30 < 0.0) {
            fVar29 = 0.0;
          }
          dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar16 == 0.5) {
              fVar30 = 1.0;
              goto LAB_00e4287c;
            }
            fVar29 = (float)(int)(fVar29 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar30 = -1.0;
LAB_00e4287c:
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + fVar30;
            }
          }
          else {
            fVar29 = (float)(int)(fVar29 + -0.5);
          }
          fVar30 = fVar31 * 255.0;
          fVar28 = ((float)(uVar5 >> 0x10 & 0xff) / 255.0) * fVar28;
          if (fVar31 < 0.0) {
            fVar30 = 0.0;
          }
          dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar16 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + -0.5);
          }
          fVar31 = fVar28;
          if (1.0 < fVar28) {
            fVar31 = 1.0;
          }
          fVar31 = fVar31 * 255.0;
          fVar35 = ((float)(uVar5 >> 0x18) / 255.0) * fVar35;
          if (fVar28 < 0.0) {
            fVar31 = 0.0;
          }
          dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar16 == 0.5) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e429c8;
            }
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = fVar28;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + -0.5);
          }
          fVar28 = fVar35;
          if (1.0 < fVar35) {
            fVar28 = 1.0;
          }
          fVar28 = fVar28 * 255.0;
          if (fVar35 < 0.0) {
            fVar28 = 0.0;
          }
          dVar16 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar16 == 0.5) {
              fVar35 = 1.0;
              goto LAB_00e42a44;
            }
            fVar28 = (float)(int)(fVar28 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar35 = -1.0;
LAB_00e42a44:
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + fVar35;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          *puVar21 = (int)fVar29 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar28 << 0x18;
          lVar15 = *unaff_x26;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
          puVar21 = (uint *)(lVar15 + (long)(int)uVar23 * 4 + 0x20);
          uVar5 = *puVar21;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) goto LAB_00e443fc;
          fVar30 = ((float)(uVar5 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
          fVar31 = ((float)(uVar5 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
          fVar28 = *(float *)(lVar15 + 0x20);
          fVar35 = *(float *)(lVar15 + 0x24);
          fVar29 = fVar30 * 255.0;
          if (fVar30 < 0.0) {
            fVar29 = 0.0;
          }
          dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar16 == 0.5) {
              fVar30 = 1.0;
              goto LAB_00e42b80;
            }
            fVar29 = (float)(int)(fVar29 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar30 = -1.0;
LAB_00e42b80:
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + fVar30;
            }
          }
          else {
            fVar29 = (float)(int)(fVar29 + -0.5);
          }
          fVar30 = fVar31 * 255.0;
          fVar28 = ((float)(uVar5 >> 0x10 & 0xff) / 255.0) * fVar28;
          if (fVar31 < 0.0) {
            fVar30 = 0.0;
          }
          dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar16 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + -0.5);
          }
          fVar31 = fVar28;
          if (1.0 < fVar28) {
            fVar31 = 1.0;
          }
          fVar31 = fVar31 * 255.0;
          fVar35 = ((float)(uVar5 >> 0x18) / 255.0) * fVar35;
          if (fVar28 < 0.0) {
            fVar31 = 0.0;
          }
          dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar16 == 0.5) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42ccc;
            }
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = fVar28;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + -0.5);
          }
          fVar28 = fVar35;
          if (1.0 < fVar35) {
            fVar28 = 1.0;
          }
          fVar28 = fVar28 * 255.0;
          if (fVar35 < 0.0) {
            fVar28 = 0.0;
          }
          dVar16 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar16 == 0.5) {
              fVar35 = 1.0;
              goto LAB_00e42d48;
            }
            fVar28 = (float)(int)(fVar28 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar35 = -1.0;
LAB_00e42d48:
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + fVar35;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          *puVar21 = (int)fVar29 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar28 << 0x18;
          lVar15 = *unaff_x26;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
          lVar15 = lVar15 + (long)(int)uVar26 * 4;
        }
        uVar5 = *(uint *)(lVar15 + 0x20);
        if ((*in_stack_00000060 == 0.0) ||
           (lVar18 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar18 == 0)) goto LAB_00e443fc;
        fVar29 = ((float)(uVar5 & 0xff) / 255.0) * *(float *)(lVar18 + 0x18);
        fVar31 = ((float)(uVar5 >> 8 & 0xff) / 255.0) * *(float *)(lVar18 + 0x1c);
        fVar28 = *(float *)(lVar18 + 0x20);
        fVar35 = *(float *)(lVar18 + 0x24);
        fVar30 = fVar29 * 255.0;
        if (fVar29 < 0.0) {
          fVar30 = unaff_s8;
        }
        dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
        if (0.0 <= fVar30) {
          if (dVar16 == 0.5) {
            fVar30 = 1.0;
            goto FUN_00e42e84;
          }
          fVar29 = (float)(int)(fVar30 + 0.5);
        }
        else if (dVar16 == -0.5) {
          fVar30 = -1.0;
FUN_00e42e84:
          fVar29 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar29 = (float)_fStack0000000000000070 + fVar30;
          }
        }
        else {
          fVar29 = (float)(int)(fVar30 + -0.5);
        }
        fVar28 = ((float)(uVar5 >> 0x10 & 0xff) / 255.0) * fVar28;
        fVar30 = fVar31 * 255.0;
        if (fVar31 < 0.0) {
          fVar30 = unaff_s8;
        }
        dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
        if (0.0 <= fVar30) {
          if (dVar16 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
          fVar30 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar30 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar30 = (float)(int)(fVar30 + -0.5);
        }
        fVar31 = fVar28;
        if (1.0 < fVar28) {
          fVar31 = 1.0;
        }
        fVar35 = ((float)(uVar5 >> 0x18) / 255.0) * fVar35;
        fVar31 = fVar31 * 255.0;
        if (fVar28 < 0.0) {
          fVar31 = unaff_s8;
        }
        dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
        if (0.0 <= fVar31) {
          if (dVar16 == 0.5) {
            fVar28 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e42fd0;
          }
          fVar31 = (float)(int)(fVar31 + 0.5);
        }
        else if (dVar16 == -0.5) {
          fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
          fVar31 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar31 = fVar28;
          }
        }
        else {
          fVar31 = (float)(int)(fVar31 + -0.5);
        }
        fVar28 = fVar35;
        if (1.0 < fVar35) {
          fVar28 = 1.0;
        }
        fVar28 = fVar28 * 255.0;
        if (fVar35 < 0.0) {
          fVar28 = unaff_s8;
        }
        dVar16 = modf((double)fVar28,(double *)&stack0x00000070);
        if (0.0 <= fVar28) {
          if (dVar16 == 0.5) {
            fVar35 = 1.0;
            goto LAB_00e4304c;
          }
          fVar28 = (float)(int)(fVar28 + 0.5);
        }
        else if (dVar16 == -0.5) {
          fVar35 = -1.0;
LAB_00e4304c:
          fVar28 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar28 = (float)_fStack0000000000000070 + fVar35;
          }
        }
        else {
          fVar28 = (float)(int)(fVar28 + -0.5);
        }
        *(uint *)(lVar15 + 0x20) =
             (int)fVar29 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10 |
             (int)fVar28 << 0x18;
        lVar15 = *unaff_x26;
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_00e44400;
        puVar21 = (uint *)(lVar15 + unaff_x21 * 4 + 0x20);
        uVar5 = *puVar21;
        if ((*in_stack_00000060 == 0.0) ||
           (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) goto LAB_00e443fc;
        fVar29 = (float)(uVar5 & 0xff) / 255.0;
        param_3 = (ulong)(uint)fVar29;
        fVar29 = fVar29 * *(float *)(lVar15 + 0x18);
        fVar31 = ((float)(uVar5 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
        fVar28 = *(float *)(lVar15 + 0x20);
        fVar35 = *(float *)(lVar15 + 0x24);
        fVar30 = fVar29 * 255.0;
        if (fVar29 < 0.0) {
          fVar30 = unaff_s8;
        }
        dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
        if (0.0 <= fVar30) {
          if (dVar16 == 0.5) {
            fVar30 = 1.0;
            goto LAB_00e4318c;
          }
          fVar29 = (float)(int)(fVar30 + 0.5);
        }
        else if (dVar16 == -0.5) {
          fVar30 = -1.0;
LAB_00e4318c:
          fVar29 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar29 = (float)_fStack0000000000000070 + fVar30;
          }
        }
        else {
          fVar29 = (float)(int)(fVar30 + -0.5);
        }
        fVar28 = ((float)(uVar5 >> 0x10 & 0xff) / 255.0) * fVar28;
        fVar30 = fVar31 * 255.0;
        if (fVar31 < 0.0) {
          fVar30 = unaff_s8;
        }
        dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
        if (0.0 <= fVar30) {
          if (dVar16 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
          fVar30 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar30 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar30 = (float)(int)(fVar30 + -0.5);
        }
        fVar31 = fVar28;
        if (1.0 < fVar28) {
          fVar31 = 1.0;
        }
        fVar35 = ((float)(uVar5 >> 0x18) / 255.0) * fVar35;
        fVar31 = fVar31 * 255.0;
        if (fVar28 < 0.0) {
          fVar31 = unaff_s8;
        }
        dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
        if (0.0 <= fVar31) {
          if (dVar16 == 0.5) {
            fVar28 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e432e0;
          }
          fVar31 = (float)(int)(fVar31 + 0.5);
        }
        else if (dVar16 == -0.5) {
          fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
          fVar31 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar31 = fVar28;
          }
        }
        else {
          fVar31 = (float)(int)(fVar31 + -0.5);
        }
        fVar28 = fVar35;
        if (1.0 < fVar35) {
          fVar28 = 1.0;
        }
        fVar28 = fVar28 * 255.0;
        if (fVar35 < 0.0) {
          fVar28 = unaff_s8;
        }
        dVar16 = modf((double)fVar28,(double *)&stack0x00000070);
        if (0.0 <= fVar28) {
          if (dVar16 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = (float)(int)(fVar28 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar35 = (float)(int)(fVar28 + -0.5);
        }
        unaff_d14 = _fStack0000000000000048 & 0xffffffff;
        *puVar21 = (int)fVar29 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10
                   | (int)fVar35 << 0x18;
        unaff_s15 = in_stack_00000008._4_4_;
      }
      else {
        if (*(long *)((long)dVar16 + 0x100) == 0) goto LAB_00e443fc;
        if (*(char *)(*(long *)((long)dVar16 + 0x100) + 0x20) != '\0') goto LAB_00e3dd34;
        lVar15 = *unaff_x26;
        dVar16 = modf(DAT_028aa048,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar30 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar30 = (float)_fStack0000000000000070 + unaff_s10;
          }
        }
        else {
          fVar30 = 255.0;
        }
        dVar16 = modf(dVar34,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar29 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar29 = (float)_fStack0000000000000070 + unaff_s10;
          }
        }
        else {
          fVar29 = 255.0;
        }
        dVar16 = modf(dVar34,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + unaff_s10;
          }
        }
        else {
          fVar35 = 255.0;
        }
        dVar16 = modf(dVar34,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar28 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar28 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar28 = 255.0;
        }
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
        *(uint *)(lVar15 + unaff_x22 * 4 + 0x20) =
             (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
             (int)fVar28 << 0x18;
        lVar15 = *unaff_x26;
        dVar16 = modf(dVar34,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar30 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar30 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar30 = 255.0;
        }
        dVar16 = modf(dVar34,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar29 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar29 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar29 = 255.0;
        }
        dVar16 = modf(dVar34,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar35 = 255.0;
        }
        dVar16 = modf(dVar34,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar28 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar28 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar28 = 255.0;
        }
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
        *(uint *)(lVar15 + (long)(int)uVar23 * 4 + 0x20) =
             (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
             (int)fVar28 << 0x18;
        lVar15 = *unaff_x26;
        dVar16 = modf(dVar34,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar30 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar30 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar30 = 255.0;
        }
        dVar16 = modf(dVar34,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar29 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar29 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar29 = 255.0;
        }
        dVar16 = modf(dVar34,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar35 = 255.0;
        }
        dVar16 = modf(dVar34,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar28 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar28 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar28 = 255.0;
        }
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
        *(uint *)(lVar15 + (long)(int)uVar26 * 4 + 0x20) =
             (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
             (int)fVar28 << 0x18;
        lVar15 = *unaff_x26;
        dVar16 = modf(dVar34,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar30 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar30 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar30 = 255.0;
        }
        dVar16 = modf(dVar34,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar29 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar29 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar29 = 255.0;
        }
        dVar16 = modf(dVar34,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar35 = 255.0;
        }
        dVar16 = modf(dVar34,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar28 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar28 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar28 = 255.0;
        }
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_00e44400;
        *(uint *)(lVar15 + unaff_x21 * 4 + 0x20) =
             (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
             (int)fVar28 << 0x18;
      }
LAB_00e43400:
      lVar15 = *unaff_x26;
      if (lVar15 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
      lVar15 = lVar15 + unaff_x22 * 4;
      fVar30 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x23));
      *(char *)(lVar15 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar30);
      lVar15 = unaff_x19[0x5f];
      if (lVar15 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
      lVar15 = lVar15 + (long)(int)uVar23 * 4;
      fVar30 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x23));
      *(char *)(lVar15 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar30);
      lVar15 = unaff_x19[0x5f];
      if (lVar15 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
      lVar15 = lVar15 + (long)(int)uVar26 * 4;
      fVar30 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x23));
      *(char *)(lVar15 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar30);
      lVar15 = unaff_x19[0x5f];
      if (lVar15 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_00e44400;
      lVar15 = lVar15 + unaff_x21 * 4;
      uVar12 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
      fVar30 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x23));
      *(char *)(lVar15 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar30);
      uVar13 = FUN_00e3703c();
      if ((uVar13 & 1) == 0) {
        lVar15 = *unaff_x25;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar15 = *unaff_x25;
        }
        if (*(int *)(*(long *)(lVar15 + 0xb8) + 0x20) == 1) {
          lVar15 = *unaff_x26;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          puVar21 = (uint *)(lVar15 + unaff_x22 * 4 + 0x20);
          uVar5 = *puVar21;
          fVar29 = (float)FUN_026982b0((float)(uVar5 & 0xff) / 255.0,0);
          fVar35 = (float)FUN_026982b0((float)(uVar5 >> 8 & 0xff) / 255.0,0);
          fVar28 = (float)FUN_026982b0((float)(uVar5 >> 0x10 & 0xff) / 255.0,0);
          fVar30 = fVar29;
          if (1.0 < fVar29) {
            fVar30 = 1.0;
          }
          fVar30 = fVar30 * 255.0;
          if (fVar29 < 0.0) {
            fVar30 = unaff_s8;
          }
          dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar16 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + -0.5);
          }
          fVar29 = fVar35;
          if (1.0 < fVar35) {
            fVar29 = 1.0;
          }
          fVar29 = fVar29 * 255.0;
          if (fVar35 < 0.0) {
            fVar29 = unaff_s8;
          }
          dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar16 == 0.5) {
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar29 = (float)(int)(fVar29 + -0.5);
          }
          fVar35 = fVar28;
          if (1.0 < fVar28) {
            fVar35 = 1.0;
          }
          fVar31 = (float)(uVar5 >> 0x18) / 255.0;
          fVar35 = fVar35 * 255.0;
          if (fVar28 < 0.0) {
            fVar35 = unaff_s8;
          }
          dVar16 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar16 == 0.5) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43744;
            }
            fVar28 = (float)(int)(fVar35 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = fVar35;
            }
          }
          else {
            fVar28 = (float)(int)(fVar35 + -0.5);
          }
          if (1.0 < fVar31) {
            fVar31 = 1.0;
          }
          fVar31 = fVar31 * 255.0;
          dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar16 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar31 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar35 = (float)(int)(fVar31 + -0.5);
          }
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          *puVar21 = (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                     ((int)fVar28 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
          lVar15 = *in_stack_00000030;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
          puVar21 = (uint *)(lVar15 + (long)(int)uVar23 * 4 + 0x20);
          uVar5 = *puVar21;
          fVar29 = (float)FUN_026982b0((float)(uVar5 & 0xff) / 255.0,0);
          fVar35 = (float)FUN_026982b0((float)(uVar5 >> 8 & 0xff) / 255.0,0);
          fVar28 = (float)FUN_026982b0((float)(uVar5 >> 0x10 & 0xff) / 255.0,0);
          fVar30 = fVar29;
          if (1.0 < fVar29) {
            fVar30 = 1.0;
          }
          fVar30 = fVar30 * 255.0;
          if (fVar29 < 0.0) {
            fVar30 = unaff_s8;
          }
          dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar16 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + -0.5);
          }
          fVar29 = fVar35;
          if (1.0 < fVar35) {
            fVar29 = 1.0;
          }
          fVar29 = fVar29 * 255.0;
          if (fVar35 < 0.0) {
            fVar29 = unaff_s8;
          }
          dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar16 == 0.5) {
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar29 = (float)(int)(fVar29 + -0.5);
          }
          fVar35 = fVar28;
          if (1.0 < fVar28) {
            fVar35 = 1.0;
          }
          fVar31 = (float)(uVar5 >> 0x18) / 255.0;
          fVar35 = fVar35 * 255.0;
          if (fVar28 < 0.0) {
            fVar35 = unaff_s8;
          }
          dVar16 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar16 == 0.5) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43a84;
            }
            fVar28 = (float)(int)(fVar35 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = fVar35;
            }
          }
          else {
            fVar28 = (float)(int)(fVar35 + -0.5);
          }
          if (1.0 < fVar31) {
            fVar31 = 1.0;
          }
          fVar31 = fVar31 * 255.0;
          dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar16 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar31 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar35 = (float)(int)(fVar31 + -0.5);
          }
          if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
          *puVar21 = (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                     ((int)fVar28 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
          lVar15 = *in_stack_00000030;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
          puVar21 = (uint *)(lVar15 + (long)(int)uVar26 * 4 + 0x20);
          uVar23 = *puVar21;
          fVar29 = (float)FUN_026982b0((float)(uVar23 & 0xff) / 255.0,0);
          fVar35 = (float)FUN_026982b0((float)(uVar23 >> 8 & 0xff) / 255.0,0);
          fVar28 = (float)FUN_026982b0((float)(uVar23 >> 0x10 & 0xff) / 255.0,0);
          fVar30 = fVar29;
          if (1.0 < fVar29) {
            fVar30 = 1.0;
          }
          fVar30 = fVar30 * 255.0;
          if (fVar29 < 0.0) {
            fVar30 = unaff_s8;
          }
          dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar16 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + -0.5);
          }
          fVar29 = fVar35;
          if (1.0 < fVar35) {
            fVar29 = 1.0;
          }
          fVar29 = fVar29 * 255.0;
          if (fVar35 < 0.0) {
            fVar29 = unaff_s8;
          }
          dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar16 == 0.5) {
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar29 = (float)(int)(fVar29 + -0.5);
          }
          fVar35 = fVar28;
          if (1.0 < fVar28) {
            fVar35 = 1.0;
          }
          fVar31 = (float)(uVar23 >> 0x18) / 255.0;
          fVar35 = fVar35 * 255.0;
          if (fVar28 < 0.0) {
            fVar35 = unaff_s8;
          }
          dVar16 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar16 == 0.5) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43dbc;
            }
            fVar28 = (float)(int)(fVar35 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = fVar35;
            }
          }
          else {
            fVar28 = (float)(int)(fVar35 + -0.5);
          }
          if (1.0 < fVar31) {
            fVar31 = 1.0;
          }
          fVar31 = fVar31 * 255.0;
          dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar16 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar31 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar35 = (float)(int)(fVar31 + -0.5);
          }
          if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
          *puVar21 = (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                     ((int)fVar28 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
          lVar15 = *in_stack_00000030;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_00e44400;
          puVar21 = (uint *)(lVar15 + unaff_x21 * 4 + 0x20);
          uVar23 = *puVar21;
          fVar29 = (float)FUN_026982b0((float)(uVar23 & 0xff) / 255.0,0);
          fVar35 = (float)FUN_026982b0((float)(uVar23 >> 8 & 0xff) / 255.0,0);
          fVar28 = (float)FUN_026982b0((float)(uVar23 >> 0x10 & 0xff) / 255.0,0);
          fVar30 = fVar29;
          if (1.0 < fVar29) {
            fVar30 = 1.0;
          }
          fVar30 = fVar30 * 255.0;
          if (fVar29 < 0.0) {
            fVar30 = unaff_s8;
          }
          dVar16 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar16 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + -0.5);
          }
          param_3 = 0x3f800000;
          fVar29 = fVar35;
          if (1.0 < fVar35) {
            fVar29 = 1.0;
          }
          fVar29 = fVar29 * 255.0;
          if (fVar35 < 0.0) {
            fVar29 = unaff_s8;
          }
          dVar16 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar16 == 0.5) {
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar29 = (float)(int)(fVar29 + -0.5);
          }
          fVar35 = fVar28;
          if (1.0 < fVar28) {
            fVar35 = 1.0;
          }
          fVar31 = (float)(uVar23 >> 0x18) / 255.0;
          fVar35 = fVar35 * 255.0;
          if (fVar28 < 0.0) {
            fVar35 = unaff_s8;
          }
          dVar16 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar16 == 0.5) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e440f4;
            }
            fVar28 = (float)(int)(fVar35 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = fVar35;
            }
          }
          else {
            fVar28 = (float)(int)(fVar35 + -0.5);
          }
          if (1.0 < fVar31) {
            fVar31 = 1.0;
          }
          fVar31 = fVar31 * 255.0;
          dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            uVar12 = 0;
            if (dVar16 == 0.5) {
              fVar35 = 1.0;
              goto LAB_00e44170;
            }
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
          else {
            uVar12 = 0;
            if (dVar16 == -0.5) {
              fVar35 = -1.0;
LAB_00e44170:
              fVar35 = (float)_fStack0000000000000070 + fVar35;
              uVar12 = (ulong)(uint)fVar35;
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = fVar35;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + -0.5);
            }
          }
          unaff_d14 = _fStack0000000000000048 & 0xffffffff;
          if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_00e44400;
          *puVar21 = (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                     ((int)fVar28 & 0xffU) << 0x10 | (int)fVar31 << 0x18;
          unaff_x26 = in_stack_00000030;
        }
      }
      puVar8 = StringLiteral_4992;
      puVar7 = OVREyeGaze_TypeInfo;
      in_stack_00000050 = in_stack_00000050 + 1;
      if (in_stack_00000050 == in_stack_00000018) {
        if (((unaff_x19[0x58] == 0) || (iVar10 = FUN_026c82cc(unaff_x19[0x58],0), iVar10 < 1)) &&
           (unaff_x19[0x59] == 0)) goto LAB_00e443b0;
        puVar7 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
        if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0)) goto LAB_00e443fc;
        iVar10 = *(int *)(unaff_x19[0xf] + 0x10);
        plVar11 = unaff_x19 + 0xcb;
        if (iVar10 != *(int *)(unaff_x19[0xcb] + 0x18)) {
          FUN_010afdd4(plVar11,iVar10,
                       *(undefined8 *)Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
        }
        if ((unaff_x19[0xcc] == 0) || (lVar15 = unaff_x19[0xf], lVar15 == 0)) goto LAB_00e443fc;
        plVar1 = unaff_x19 + 0xcc;
        if (*(int *)(lVar15 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
          FUN_010afdd4(plVar1,*(int *)(lVar15 + 0x10),*(undefined8 *)puVar7);
          lVar15 = unaff_x19[0xf];
          if (lVar15 == 0) goto LAB_00e443fc;
        }
        uVar22 = *(uint *)(lVar15 + 0x10);
        if ((int)uVar22 < 1) goto LAB_00e44358;
        uVar13 = 0;
        lVar15 = 0x20;
        goto LAB_00e442cc;
      }
      if (unaff_x19[9] == 0) goto LAB_00e443fc;
      FUN_0132138c(unaff_x19[9],in_stack_00000050 & 0xffffffff,&stack0x00000070,
                   *(undefined8 *)StringLiteral_4992);
      *in_stack_00000060 = _fStack0000000000000070;
      if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
      iVar10 = FUN_00e4e99c();
      if (iVar10 <= *(int *)((long)unaff_x19 + 0x38c)) {
        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
        *(undefined1 *)((long)*in_stack_00000060 + 0x165) = 1;
      }
      if (*(float *)(unaff_x19 + 0x14) == 0.0) {
        FUN_00e45d2c();
      }
      *(undefined2 *)(unaff_x19 + 0xdc) = 0;
      if (*(char *)((long)unaff_x19 + 0xf6) == '\0') {
        uVar12 = FUN_0269e56c(0);
        if (((fStack000000000000004c == 0.0) || ((uVar12 & 1) == 0)) ||
           (1 < (int)unaff_x19[0x2a] - 3U)) {
          if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
          iVar10 = *(int *)(unaff_x19[0xf] + 0x10) + -1;
          *(int *)((long)unaff_x19 + 0x38c) = iVar10;
          if ((unaff_x19[9] == 0) ||
             (FUN_0132138c(unaff_x19[9],iVar10,&stack0x00000070,*(undefined8 *)puVar8),
             _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
          *(undefined4 *)(unaff_x19 + 0x4a) = *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
          if ((unaff_x19[9] == 0) ||
             (FUN_0132138c(unaff_x19[9],*(undefined4 *)((long)unaff_x19 + 0x38c),&stack0x00000070,
                           *(undefined8 *)puVar8), _fStack0000000000000070 == 0.0))
          goto LAB_00e443fc;
          *(float *)((long)unaff_x19 + 0x254) =
               *(float *)((long)_fStack0000000000000070 + 0x48) +
               *(float *)((long)unaff_x19 + 0x50c);
          *(undefined4 *)(unaff_x19 + 0x4b) = *(undefined4 *)((long)unaff_x19 + 0x18c);
        }
      }
      else {
        dVar16 = *in_stack_00000060;
        if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x78) == 0)) goto LAB_00e443fc;
        fVar29 = *(float *)(*(long *)((long)dVar16 + 0x78) + 0x18);
        fVar30 = DAT_028aa034;
        if (fVar29 != 0.0) {
          fVar30 = fVar29;
        }
        if ((0.0 < (unaff_s15 - *(float *)((long)dVar16 + 100)) / fVar30) &&
           (*(char *)((long)dVar16 + 0x165) == '\0')) {
          *(undefined1 *)((long)dVar16 + 0x165) = 1;
          *(undefined1 *)((long)unaff_x19 + 0x6e1) = 1;
          if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
          sVar9 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
          if (sVar9 != 0x200b) {
            *(undefined1 *)(unaff_x19 + 0xdc) = 1;
            if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
            sVar9 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
            if (sVar9 != 0x20) {
              if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
              sVar9 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
              if (sVar9 != 10) {
                lVar15 = unaff_x19[0xca];
                if (lVar15 == 0) goto LAB_00e443fc;
                fVar35 = *(float *)(lVar15 + 0x48);
                fVar30 = *(float *)(unaff_x19 + 0x4b);
                fVar28 = fVar35 + *(float *)((long)unaff_x19 + 0x50c);
                fVar29 = *(float *)(unaff_x19 + 0x4a);
                if (fVar35 <= *(float *)(unaff_x19 + 0x4a)) {
                  fVar29 = fVar35;
                }
                *(float *)(unaff_x19 + 0x4a) = fVar29;
                fVar29 = *(float *)((long)unaff_x19 + 0x254);
                if (fVar28 <= *(float *)((long)unaff_x19 + 0x254)) {
                  fVar29 = fVar28;
                }
                *(float *)((long)unaff_x19 + 0x254) = fVar29;
                fVar29 = (float)FUN_00e5ef30(*(undefined4 *)((long)unaff_x19 + 0x134),lVar15,0);
                fVar29 = fVar29 + *(float *)(unaff_x19 + 0xa1) + *(float *)((long)unaff_x19 + 0x55c)
                ;
                if (fVar30 <= fVar29) {
                  fVar30 = fVar29;
                }
                *(float *)(unaff_x19 + 0x4b) = fVar30;
              }
            }
          }
          iVar36 = *(int *)((long)unaff_x19 + 0x38c);
          if (*(int *)((long)unaff_x19 + 0x38c) <= iVar10) {
            iVar36 = iVar10;
          }
          *(int *)((long)unaff_x19 + 0x38c) = iVar36;
        }
      }
      FUN_00e4e52c();
      if (*(char *)((long)unaff_x19 + 0x6e1) != '\0') {
        FUN_00e45d2c();
      }
      if ((char)unaff_x19[0xdc] != '\0') {
        (**(code **)(*unaff_x19 + 0x218))();
        if (unaff_x19[0x54] != 0) {
          FUN_026c868c(unaff_x19[0x54],0);
        }
        lVar15 = unaff_x19[0x55];
        if (lVar15 != 0) {
          (**(code **)(lVar15 + 0x18))
                    (*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(lVar15 + 0x28));
        }
      }
      unaff_x19[0xc6] = 0;
      fVar29 = 0.0;
      *(undefined4 *)(unaff_x19 + 199) = 0;
      fVar30 = 0.0;
      if ((((0.0 < fStack000000000000004c) &&
           (uVar22 = *(uint *)(unaff_x19 + 0x2a), fVar30 = fVar29, uVar22 < 5)) &&
          ((1 << (ulong)(uVar22 & 0x1f) & 0x19U) != 0)) &&
         (*(float *)(unaff_x19 + 0x4a) < -*(float *)((long)unaff_x19 + 0x184))) {
        if (uVar22 == 4) {
          lVar15 = unaff_x19[0xc];
          if (lVar15 == 0) goto LAB_00e443fc;
          if (0 < *(int *)(lVar15 + 0x18)) {
            iVar10 = 0;
            do {
              FUN_0132138c(lVar15,iVar10,&stack0x00000070,*(undefined8 *)puVar7);
              *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
              fVar30 = fStack0000000000000070;
              if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <=
                  fStack0000000000000070) break;
              lVar15 = unaff_x19[0xc];
              if (lVar15 == 0) goto LAB_00e443fc;
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(lVar15 + 0x18));
          }
        }
        else {
          lVar15 = unaff_x19[0xb];
          if (lVar15 == 0) goto LAB_00e443fc;
          iVar10 = 0;
          fVar30 = 0.0;
          while (iVar10 < *(int *)(lVar15 + 0x18)) {
            FUN_0132138c(lVar15,iVar10,&stack0x00000070,*(undefined8 *)puVar7);
            fVar30 = fVar30 + fStack0000000000000070;
            *(float *)((long)unaff_x19 + 0x634) = fVar30;
            if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <= fVar30)
            break;
            lVar15 = unaff_x19[0xb];
            iVar10 = iVar10 + 1;
            if (lVar15 == 0) goto LAB_00e443fc;
          }
        }
      }
      *(float *)(unaff_x19 + 0xc6) = *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
      if (unaff_x19[9] == 0) goto LAB_00e443fc;
      fVar29 = *(float *)((long)unaff_x19 + 0x53c);
      FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar8);
      if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0)) goto LAB_00e443fc;
      fVar35 = *(float *)((long)_fStack0000000000000070 + 0x5c);
      FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar8);
      if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
      fVar31 = *(float *)(unaff_x19 + 0xa8);
      fVar28 = *(float *)(unaff_x19 + 199) + fVar31;
      *(float *)((long)unaff_x19 + 0x634) =
           fVar30 + fVar29 + (fVar35 + -1.0) * *(float *)((long)_fStack0000000000000070 + 0x84);
      *(float *)(unaff_x19 + 199) = fVar28;
      puVar7 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      unaff_s10 = 1.0;
      uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
      in_stack_00000040[0x10] = **(undefined8 **)(*(long *)puVar7 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar33;
      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
      uVar37 = *(undefined8 *)(unaff_x19[0xca] + 200);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_02681b9c(uVar37,0,0);
      if ((uVar12 & 1) != 0) {
        lVar15 = __start_il2cpp();
        if (lVar15 == 0) goto LAB_00e443fc;
        if ((*(char *)(lVar15 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
          uVar33 = FUN_00e4ee40();
          *(undefined4 *)((long)unaff_x19 + 0x674) = uVar33;
          *(float *)(unaff_x19 + 0xcf) = fVar28;
          *(float *)((long)unaff_x19 + 0x67c) = fVar31;
        }
      }
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(puVar7);
        DAT_03774d76 = '\x01';
      }
      lVar18 = *(long *)puVar7;
      uVar33 = *(undefined4 *)(*(undefined8 **)(lVar18 + 0xb8) + 1);
      *in_stack_00000040 = **(undefined8 **)(lVar18 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar33;
      lVar15 = (*(long **)(lVar18 + 0xb8))[1];
      unaff_x19[0xc0] = **(long **)(lVar18 + 0xb8);
      *(int *)(unaff_x19 + 0xc1) = (int)lVar15;
      uVar33 = *(undefined4 *)(*(undefined8 **)(lVar18 + 0xb8) + 1);
      in_stack_00000040[3] = **(undefined8 **)(lVar18 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x614) = uVar33;
      lVar15 = (*(long **)(lVar18 + 0xb8))[1];
      unaff_x19[0xc3] = **(long **)(lVar18 + 0xb8);
      *(int *)(unaff_x19 + 0xc4) = (int)lVar15;
      uVar33 = *(undefined4 *)(*(undefined8 **)(lVar18 + 0xb8) + 1);
      in_stack_00000040[6] = **(undefined8 **)(lVar18 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar33;
      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
      uVar37 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_02681b9c(uVar37,0,0);
      if ((uVar12 & 1) != 0) {
        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
        if (*(float *)((long)*in_stack_00000060 + 0x84) != 0.0) {
          lVar15 = __start_il2cpp();
          if (lVar15 == 0) goto LAB_00e443fc;
          if ((*(char *)(lVar15 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
            lVar15 = unaff_x19[0xca];
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            if ((lVar15 == 0) || (lVar18 = *(long *)(lVar15 + 0xc0), lVar18 == 0))
            goto LAB_00e443fc;
            uVar12 = unaff_d14;
            if (*(char *)(lVar18 + 0x18) != '\0') {
              fVar28 = *(float *)(lVar15 + 100);
              uVar12 = (ulong)(uint)(*(float *)((long)unaff_x19 + 0x2ec) - fVar28);
            }
            if (*(char *)(lVar18 + 0x19) != '\0') {
              uVar33 = FUN_00e4e9f4(uVar12);
              lVar15 = unaff_x19[0xca];
              *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar33;
              *(float *)(unaff_x19 + 0xbf) = fVar28;
              *(float *)((long)unaff_x19 + 0x5fc) = fVar31;
              if (lVar15 == 0) goto LAB_00e443fc;
            }
            if (*(long *)(lVar15 + 0xc0) == 0) goto LAB_00e443fc;
            if (*(char *)(*(long *)(lVar15 + 0xc0) + 0x28) != '\0') {
              fVar30 = (float)FUN_00e4e9f4(uVar12);
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar28;
              fVar29 = fVar31 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar31;
              unaff_x19[0xc0] =
                   CONCAT44(fVar28 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar30 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar29;
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar30 = (float)FUN_00e4e9f4(uVar12);
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar29;
              *(float *)((long)unaff_x19 + 0x644) = fVar31;
              in_stack_00000040[3] =
                   CONCAT44(fVar29 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                            fVar30 + (float)in_stack_00000040[3]);
              *(float *)((long)unaff_x19 + 0x614) = fVar31 + *(float *)((long)unaff_x19 + 0x614);
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar30 = (float)FUN_00e4e9f4(uVar12);
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar29;
              fVar28 = fVar31 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar31;
              unaff_x19[0xc3] =
                   CONCAT44(fVar29 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar30 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar28;
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar30 = (float)FUN_00e4e9f4(uVar12);
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar28;
              *(float *)((long)unaff_x19 + 0x644) = fVar31;
              in_stack_00000040[6] =
                   CONCAT44(fVar28 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                            fVar30 + (float)in_stack_00000040[6]);
              lVar15 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x62c) = fVar31 + *(float *)((long)unaff_x19 + 0x62c);
              if (lVar15 == 0) goto LAB_00e443fc;
            }
            if (*(long *)(lVar15 + 0xc0) == 0) goto LAB_00e443fc;
            if (*(char *)(*(long *)(lVar15 + 0xc0) + 0x50) != '\0') {
              FUN_00e5eda8(lVar15,0);
              fVar30 = (float)FUN_00e4eb50();
              lVar15 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar28;
              fVar29 = fVar31 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar31;
              unaff_x19[0xc0] =
                   CONCAT44(fVar28 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar30 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar29;
              if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5b838(lVar15,0);
              fVar30 = (float)FUN_00e4eb50();
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar29;
              *(float *)((long)unaff_x19 + 0x644) = fVar31;
              in_stack_00000040[3] =
                   CONCAT44(fVar29 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                            fVar30 + (float)in_stack_00000040[3]);
              lVar15 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x614) = fVar31 + *(float *)((long)unaff_x19 + 0x614);
              if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5eea4(lVar15,0);
              fVar30 = (float)FUN_00e4eb50();
              lVar15 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar29;
              fVar28 = fVar31 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar31;
              unaff_x19[0xc3] =
                   CONCAT44(fVar29 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar30 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar28;
              if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5b7d8(lVar15,0);
              fVar30 = (float)FUN_00e4eb50();
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar28;
              *(float *)((long)unaff_x19 + 0x644) = fVar31;
              in_stack_00000040[6] =
                   CONCAT44(fVar28 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                            fVar30 + (float)in_stack_00000040[6]);
              lVar15 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x62c) = fVar31 + *(float *)((long)unaff_x19 + 0x62c);
              if (lVar15 == 0) goto LAB_00e443fc;
            }
            lVar18 = *(long *)(lVar15 + 0xc0);
            if (lVar18 == 0) goto LAB_00e443fc;
            if (*(char *)(lVar18 + 0x60) != '\0') {
              uVar24 = *(undefined8 *)(lVar18 + 0x68);
              uVar37 = FUN_00e5eda8(lVar15,0);
              fVar30 = (float)FUN_00e4ecc4(uVar37,lVar15,uVar24);
              lVar15 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar28;
              fVar29 = fVar31 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar31;
              unaff_x19[0xc0] =
                   CONCAT44(fVar28 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar30 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar29;
              if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar24 = *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x68);
              uVar37 = FUN_00e5b838(lVar15,0);
              fVar30 = (float)FUN_00e4ecc4(uVar37,lVar15,uVar24);
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar29;
              *(float *)((long)unaff_x19 + 0x644) = fVar31;
              in_stack_00000040[3] =
                   CONCAT44(fVar29 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                            fVar30 + (float)in_stack_00000040[3]);
              lVar15 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x614) = fVar31 + *(float *)((long)unaff_x19 + 0x614);
              if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar24 = *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x68);
              uVar37 = FUN_00e5eea4(lVar15,0);
              fVar30 = (float)FUN_00e4ecc4(uVar37,lVar15,uVar24);
              lVar15 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar29;
              fVar35 = fVar31 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar31;
              unaff_x19[0xc3] =
                   CONCAT44(fVar29 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar30 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar35;
              if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar24 = *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x68);
              uVar37 = FUN_00e5b7d8(lVar15,0);
              fVar30 = (float)FUN_00e4ecc4(uVar37,lVar15,uVar24);
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar35;
              *(float *)((long)unaff_x19 + 0x644) = fVar31;
              in_stack_00000040[6] =
                   CONCAT44(fVar35 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                            fVar30 + (float)in_stack_00000040[6]);
              *(float *)((long)unaff_x19 + 0x62c) = fVar31 + *(float *)((long)unaff_x19 + 0x62c);
            }
          }
        }
      }
      in_stack_00000068 = (int)in_stack_00000050 << 2;
      if ((fStack000000000000004c <= 0.0) || ((int)unaff_x19[0x2a] == 2)) {
LAB_00e3cd74:
        if (*(char *)((long)unaff_x19 + 300) == '\0') {
          in_stack_00000040[0x1e] = unaff_x19[0x24];
        }
        else {
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          uVar37 = *(undefined8 *)((long)*in_stack_00000060 + 0x80);
          in_stack_00000040[0x1e] =
               CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) * (float)((ulong)uVar37 >> 0x20),
                        (float)unaff_x19[0x24] * (float)uVar37);
        }
        lVar15 = unaff_x19[0x5e];
        *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
        if ((lVar15 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        fVar30 = (float)FUN_00e5eda8(*in_stack_00000060,0);
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
        fVar29 = *(float *)((long)unaff_x19 + 0x674);
        uVar12 = (ulong)(int)in_stack_00000068;
        *(float *)(lVar15 + uVar12 * 0xc + 0x20) =
             fVar30 + fVar29 + *(float *)(unaff_x19 + 0xc0) + *(float *)((long)unaff_x19 + 0x5f4) +
             *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eda8(*in_stack_00000060,0);
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
        fVar30 = *(float *)((long)unaff_x19 + 0x604);
        *(float *)(lVar15 + uVar12 * 0xc + 0x24) =
             fVar29 + *(float *)(unaff_x19 + 0xcf) + fVar30 + *(float *)(unaff_x19 + 0xbf) +
             *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eda8(*in_stack_00000060,0);
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
        *(float *)(lVar15 + uVar12 * 0xc + 0x28) =
             fVar30 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc1) +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        fVar30 = (float)FUN_00e5b838(*in_stack_00000060,0);
        uVar13 = uVar12 | 1;
        uVar22 = (uint)uVar13;
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_00e44400;
        fVar29 = *(float *)((long)unaff_x19 + 0x674);
        *(float *)(lVar15 + uVar13 * 0xc + 0x20) =
             fVar30 + fVar29 + *(float *)((long)unaff_x19 + 0x60c) +
             *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
             *(float *)((long)unaff_x19 + 0x6e4);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b838(*in_stack_00000060,0);
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_00e44400;
        fVar30 = *(float *)(unaff_x19 + 0xc2);
        *(float *)(lVar15 + uVar13 * 0xc + 0x24) =
             fVar29 + *(float *)(unaff_x19 + 0xcf) + fVar30 + *(float *)(unaff_x19 + 0xbf) +
             *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b838(*in_stack_00000060,0);
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_00e44400;
        *(float *)(lVar15 + uVar13 * 0xc + 0x28) =
             fVar30 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)((long)unaff_x19 + 0x614) +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        fVar30 = (float)FUN_00e5eea4(*in_stack_00000060,0);
        uVar25 = uVar12 | 2;
        uVar23 = (uint)uVar25;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
        fVar29 = *(float *)((long)unaff_x19 + 0x674);
        *(float *)(lVar15 + uVar25 * 0xc + 0x20) =
             fVar30 + fVar29 + *(float *)(unaff_x19 + 0xc3) + *(float *)((long)unaff_x19 + 0x5f4) +
             *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eea4(*in_stack_00000060,0);
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
        fVar30 = *(float *)((long)unaff_x19 + 0x61c);
        *(float *)(lVar15 + uVar25 * 0xc + 0x24) =
             fVar29 + *(float *)(unaff_x19 + 0xcf) + fVar30 + *(float *)(unaff_x19 + 0xbf) +
             *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eea4(*in_stack_00000060,0);
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
        *(float *)(lVar15 + uVar25 * 0xc + 0x28) =
             fVar30 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc4) +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        fVar30 = (float)FUN_00e5b7d8(*in_stack_00000060,0);
        uVar27 = uVar12 | 3;
        uVar26 = (uint)uVar27;
        if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
        fVar29 = *(float *)((long)unaff_x19 + 0x674);
        *(float *)(lVar15 + uVar27 * 0xc + 0x20) =
             fVar30 + fVar29 + *(float *)((long)unaff_x19 + 0x624) +
             *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
             *(float *)((long)unaff_x19 + 0x6e4);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b7d8(*in_stack_00000060,0);
        if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
        param_3 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
        *(float *)(lVar15 + uVar27 * 0xc + 0x24) =
             fVar29 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
             *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
             *(float *)(unaff_x19 + 0xdd);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b7d8(*in_stack_00000060,0);
        if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
        fVar30 = *(float *)((long)unaff_x19 + 0x62c);
        *(float *)(lVar15 + uVar27 * 0xc + 0x28) =
             (float)param_3 + *(float *)((long)unaff_x19 + 0x67c) + fVar30 +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar15 = unaff_x19[0xca];
        if (lVar15 == 0) goto LAB_00e443fc;
        lVar18 = *in_stack_00000020;
        if (*(char *)(lVar15 + 0x108) == '\0') {
          uVar33 = FUN_0272b9dc(lVar15 + 0x10,0);
          if (lVar18 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          lVar18 = lVar18 + uVar12 * 8;
          *(undefined4 *)(lVar18 + 0x20) = uVar33;
          *(float *)(lVar18 + 0x24) = fVar30;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          lVar15 = *in_stack_00000020;
          uVar33 = thunk_FUN_0272b8d8((long)*in_stack_00000060 + 0x10,0);
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_00e44400;
          lVar15 = lVar15 + uVar13 * 8;
          *(undefined4 *)(lVar15 + 0x20) = uVar33;
          *(float *)(lVar15 + 0x24) = fVar30;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          lVar15 = *in_stack_00000020;
          uVar33 = FUN_0272b9c8((long)*in_stack_00000060 + 0x10,0);
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
          lVar15 = lVar15 + uVar25 * 8;
          *(undefined4 *)(lVar15 + 0x20) = uVar33;
          *(float *)(lVar15 + 0x24) = fVar30;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          lVar15 = *in_stack_00000020;
          uVar33 = FUN_0272b98c((long)*in_stack_00000060 + 0x10,0);
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
          lVar15 = lVar15 + uVar27 * 8;
          *(undefined4 *)(lVar15 + 0x20) = uVar33;
          *(float *)(lVar15 + 0x24) = fVar30;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          uVar33 = FUN_00e5ecc0(*in_stack_00000060,0);
          *(undefined4 *)(unaff_x19 + 0xd9) = uVar33;
          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
          FUN_00e5ecc0(unaff_x19[0xca],0);
          *(float *)((long)unaff_x19 + 0x6cc) = fVar30;
          unaff_x26 = in_stack_00000030;
        }
        else {
          if ((*(long *)(lVar15 + 0x100) == 0) ||
             (uVar33 = FUN_00e5dd14(unaff_d14,*(long *)(lVar15 + 0x100),
                                    *(undefined4 *)(lVar15 + 0x10c),0), lVar18 == 0))
          goto LAB_00e443fc;
          if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          lVar18 = lVar18 + uVar12 * 8;
          *(undefined4 *)(lVar18 + 0x20) = uVar33;
          *(float *)(lVar18 + 0x24) = fVar30;
          dVar16 = *in_stack_00000060;
          if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x100) == 0)) goto LAB_00e443fc;
          lVar15 = *in_stack_00000020;
          uVar33 = FUN_00e5de6c(unaff_d14,*(long *)((long)dVar16 + 0x100),
                                *(undefined4 *)((long)dVar16 + 0x10c),0);
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_00e44400;
          lVar15 = lVar15 + uVar13 * 8;
          *(undefined4 *)(lVar15 + 0x20) = uVar33;
          *(float *)(lVar15 + 0x24) = fVar30;
          dVar16 = *in_stack_00000060;
          if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x100) == 0)) goto LAB_00e443fc;
          lVar15 = *in_stack_00000020;
          uVar33 = FUN_00e5dea4(unaff_d14,*(long *)((long)dVar16 + 0x100),
                                *(undefined4 *)((long)dVar16 + 0x10c),0);
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
          lVar15 = lVar15 + uVar25 * 8;
          *(undefined4 *)(lVar15 + 0x20) = uVar33;
          *(float *)(lVar15 + 0x24) = fVar30;
          dVar16 = *in_stack_00000060;
          if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x100) == 0)) goto LAB_00e443fc;
          lVar15 = *in_stack_00000020;
          uVar33 = thunk_FUN_00e5dd60(unaff_d14,*(long *)((long)dVar16 + 0x100),
                                      *(undefined4 *)((long)dVar16 + 0x10c),0);
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
          lVar15 = lVar15 + uVar27 * 8;
          *(undefined4 *)(lVar15 + 0x20) = uVar33;
          *(float *)(lVar15 + 0x24) = fVar30;
          dVar16 = *in_stack_00000060;
          if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x100) == 0)) goto LAB_00e443fc;
          uVar33 = FUN_00e5dedc(unaff_d14,*(long *)((long)dVar16 + 0x100),
                                *(undefined4 *)((long)dVar16 + 0x10c),0);
          lVar15 = unaff_x19[0xca];
          *(undefined4 *)(unaff_x19 + 0xd9) = uVar33;
          *(float *)((long)unaff_x19 + 0x6cc) = fVar30;
          if ((lVar15 == 0) || (lVar18 = *(long *)(lVar15 + 0x100), lVar18 == 0)) goto LAB_00e443fc;
          unaff_x26 = in_stack_00000030;
          if (((1 < *(int *)(lVar18 + 0x28)) && (0.0 < *(float *)(lVar18 + 0x34))) &&
             (*(int *)(lVar15 + 0x10c) < 0)) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          }
        }
      }
      else {
        dVar16 = *in_stack_00000060;
        if (dVar16 == 0.0) goto LAB_00e443fc;
        param_3 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
        if ((*(float *)((long)dVar16 + 0x48) + *(float *)((long)dVar16 + 0x84) +
            *(float *)((long)unaff_x19 + 0x634)) - *(float *)((long)unaff_x19 + 0x53c) <=
            DAT_028aa038 - *(float *)(unaff_x19 + 0x2f)) goto LAB_00e3cd74;
        lVar15 = *in_stack_00000038;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(puVar7);
          DAT_03774d76 = '\x01';
        }
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
        uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
        uVar12 = (ulong)(int)in_stack_00000068;
        lVar15 = lVar15 + uVar12 * 0xc;
        *(undefined8 *)(lVar15 + 0x20) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        *(undefined4 *)(lVar15 + 0x28) = uVar33;
        lVar15 = *in_stack_00000038;
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar15 + 0x18) <= (uint)(uVar12 | 1)) goto LAB_00e44400;
        lVar15 = lVar15 + (uVar12 | 1) * 0xc;
        uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
        *(undefined8 *)(lVar15 + 0x20) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        *(undefined4 *)(lVar15 + 0x28) = uVar33;
        lVar15 = *in_stack_00000038;
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar15 + 0x18) <= (uint)(uVar12 | 2)) goto LAB_00e44400;
        lVar15 = lVar15 + (uVar12 | 2) * 0xc;
        uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
        *(undefined8 *)(lVar15 + 0x20) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        *(undefined4 *)(lVar15 + 0x28) = uVar33;
        lVar15 = *in_stack_00000038;
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar15 + 0x18) <= (uint)(uVar12 | 3)) goto LAB_00e44400;
        lVar15 = lVar15 + (uVar12 | 3) * 0xc;
        uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
        *(undefined8 *)(lVar15 + 0x20) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        *(undefined4 *)(lVar15 + 0x28) = uVar33;
      }
      if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
      uVar37 = *(undefined8 *)((long)*in_stack_00000060 + 0xf8);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_02681b9c(uVar37,0,0);
      if ((uVar12 & 1) == 0) {
        lVar15 = unaff_x19[0x10];
      }
      else {
        if ((*in_stack_00000060 == 0.0) ||
           (lVar15 = *(long *)((long)*in_stack_00000060 + 0xf8), lVar15 == 0)) goto LAB_00e443fc;
        lVar15 = *(long *)(lVar15 + 0x18);
      }
      if (((lVar15 == 0) || (lVar15 = FUN_0272bcf4(lVar15,0), lVar15 == 0)) ||
         (plVar11 = (long *)FUN_0267dac8(lVar15,0), plVar11 == (long *)0x0)) goto LAB_00e443fc;
      unaff_x24 = 0xc;
      iVar10 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
      *(float *)(unaff_x19 + 0xda) = (float)iVar10;
      iVar10 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
      *(float *)((long)unaff_x19 + 0x6d4) = (float)iVar10;
      *(int *)(unaff_x19 + 0xdb) = (int)unaff_x19[0xd9];
      *(undefined4 *)((long)unaff_x19 + 0x6dc) = *(undefined4 *)((long)unaff_x19 + 0x6cc);
      puVar7 = UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      _fStack0000000000000070 = (double)CONCAT44((float)iVar10,(int)unaff_x19[0xda]);
      in_stack_00000078 = unaff_x19[0xd9];
      FUN_0132149c(unaff_x19[0x62],in_stack_00000068,&stack0x00000070,
                   *(undefined8 *)
                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo);
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      unaff_x22 = (ulong)(int)in_stack_00000068;
      unaff_x28 = unaff_x22 | 1;
      FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 1,&stack0x00000070,*(undefined8 *)puVar7);
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      unaff_x29 = unaff_x22 | 2;
      FUN_0132149c(unaff_x19[0x62],unaff_x29,&stack0x00000070,*(undefined8 *)puVar7);
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      unaff_x21 = unaff_x22 | 3;
      FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 3,&stack0x00000070,*(undefined8 *)puVar7);
      unaff_x25 = (long *)StringLiteral_9119;
      lVar15 = unaff_x19[0x60];
      if (lVar15 == 0) goto LAB_00e443fc;
      if ((*(uint *)(lVar15 + 0x18) <= in_stack_00000068) ||
         (*(uint *)(lVar15 + 0x18) <= (uint)unaff_x21)) goto LAB_00e44400;
      lVar18 = unaff_x19[0xca];
      fVar30 = unaff_s8;
      if (*(float *)(lVar15 + 0x20 + unaff_x22 * 8) != *(float *)(lVar15 + 0x20 + unaff_x21 * 8)) {
        fVar30 = 1.0;
      }
      *(float *)(unaff_x19 + 0xda) = fVar30;
      if (lVar18 == 0) goto LAB_00e443fc;
      cVar6 = *(char *)(lVar18 + 0x108);
      fVar30 = 1.0;
      if (cVar6 != '\0' || 0x7fffffff < *(uint *)(lVar18 + 0x138)) {
        fVar30 = -1.0;
      }
      *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar18 + 0x84) * fVar30;
      if (cVar6 == '\0') {
        iVar36 = *(int *)(lVar18 + 0x160);
        iVar10 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
        param_3 = 0x3e800000;
        *(float *)(unaff_x19 + 0xdb) = (float)iVar36 / ((float)iVar10 * 0.25);
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        iVar36 = *(int *)(unaff_x19[0xca] + 0x160);
        iVar10 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
        fVar29 = (float)iVar36;
        fVar30 = (float)iVar10;
        puVar19 = (undefined8 *)
                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
      }
      else {
        if (*(long *)(lVar18 + 0x100) == 0) goto LAB_00e443fc;
        fVar30 = (float)FUN_00e5df18(*(long *)(lVar18 + 0x100),0);
        puVar19 = (undefined8 *)
                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
        if (((*in_stack_00000060 == 0.0) ||
            (lVar15 = *(long *)((long)*in_stack_00000060 + 0x100), lVar15 == 0)) ||
           (plVar11 = *(long **)(lVar15 + 0x18), plVar11 == (long *)0x0)) goto LAB_00e443fc;
        iVar10 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
        if ((*in_stack_00000060 == 0.0) ||
           (lVar15 = *(long *)((long)*in_stack_00000060 + 0x100), lVar15 == 0)) goto LAB_00e443fc;
        fVar29 = 0.25;
        *(float *)(unaff_x19 + 0xdb) = fVar30 / (*(float *)(lVar15 + 0x40) * (float)iVar10 * 0.25);
        FUN_00e5df18(lVar15,0);
        if ((unaff_x19[0xca] == 0) ||
           ((lVar15 = *(long *)(unaff_x19[0xca] + 0x100), lVar15 == 0 ||
            (plVar11 = *(long **)(lVar15 + 0x18), plVar11 == (long *)0x0)))) goto LAB_00e443fc;
        iVar10 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
        if ((*in_stack_00000060 == 0.0) ||
           (lVar15 = *(long *)((long)*in_stack_00000060 + 0x100), lVar15 == 0)) goto LAB_00e443fc;
        fVar30 = *(float *)(lVar15 + 0x44) * (float)iVar10;
      }
      param_2 = 0x3e800000;
      fVar29 = fVar29 / (fVar30 * 0.25);
      *(float *)((long)unaff_x19 + 0x6dc) = fVar29;
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      in_stack_00000078 = CONCAT44(fVar29,(int)unaff_x19[0xdb]);
      FUN_0132149c(unaff_x19[99],in_stack_00000068,&stack0x00000070,*puVar19);
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      FUN_0132149c(unaff_x19[99],in_stack_00000068 | 1,&stack0x00000070,*puVar19);
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      FUN_0132149c(unaff_x19[99],in_stack_00000068 | 2,&stack0x00000070,*puVar19);
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      FUN_0132149c(unaff_x19[99],in_stack_00000068 | 3,&stack0x00000070,*puVar19);
      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
      unaff_x20 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
      unaff_x23 = in_stack_00000040;
      unaff_x27 = in_stack_00000020;
    } while (*(int *)(*(long *)
                       System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo + 0xe0
                     ) != 0);
  } while( true );
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar13 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar8);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar18 = unaff_x19[0xcb];
    uVar33 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar18 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar18 + 0x18) <= uVar13) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar2 = (undefined4 *)(lVar18 + lVar15);
    *puVar2 = uVar33;
    puVar2[1] = (int)uVar12;
    puVar2[2] = (int)param_3;
    lVar18 = unaff_x19[0xca];
    if ((lVar18 == 0) || (lVar20 = unaff_x19[0xcc], lVar20 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar20 + 0x18) <= uVar13) goto LAB_00e44400;
    uVar33 = *(undefined4 *)(lVar18 + 0x4c);
    uVar13 = uVar13 + 1;
    puVar19 = (undefined8 *)(lVar20 + lVar15);
    lVar15 = lVar15 + 0xc;
    *puVar19 = *(undefined8 *)(lVar18 + 0x44);
    *(undefined4 *)(puVar19 + 1) = uVar33;
  } while (uVar22 != uVar13);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar11,*plVar1,
                 *(undefined8 *)StringLiteral_225);
  }
  lVar15 = unaff_x19[0x59];
  if (lVar15 != 0) {
    (**(code **)(lVar15 + 0x18))
              (*(undefined8 *)(lVar15 + 0x40),*in_stack_00000038,*plVar11,*plVar1,
               *(undefined8 *)(lVar15 + 0x28));
  }
  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
LAB_00e443b0:
  lVar15 = __start_il2cpp();
  if (lVar15 != 0) {
    if ((*(char *)(lVar15 + 0x109) != '\0') || (*(char *)((long)unaff_x19 + 0xa9) != '\0')) {
      *(undefined1 *)(unaff_x19 + 0x2e) = 0;
    }
    return;
  }
LAB_00e443fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


