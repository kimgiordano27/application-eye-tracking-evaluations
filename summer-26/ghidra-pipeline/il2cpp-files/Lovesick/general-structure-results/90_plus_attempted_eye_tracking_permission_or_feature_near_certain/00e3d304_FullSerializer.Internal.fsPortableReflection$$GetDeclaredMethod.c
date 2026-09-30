/*
FUNCTION_NAME: FullSerializer.Internal.fsPortableReflection$$GetDeclaredMethod
ENTRY_POINT: 00e3d304
PROGRAM: Lovesick-libil2cpp.so
SCORE: 112
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
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

void FullSerializer_Internal_fsPortableReflection__GetDeclaredMethod
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],ulong param_4)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  short sVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  float *pfVar16;
  double dVar17;
  long lVar18;
  long *unaff_x19;
  undefined8 uVar19;
  undefined8 *puVar20;
  long lVar21;
  uint *puVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  undefined8 uVar27;
  ulong unaff_x22;
  uint uVar28;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *plVar29;
  double *unaff_x26;
  long *unaff_x28;
  ulong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar38;
  double dVar37;
  float unaff_s8;
  int iVar39;
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
  float fStack0000000000000070;
  long in_stack_00000078;
  
  do {
    if ((!(bool)in_ZR && in_NG == in_OV) && (*(int *)(param_1 + 0x10c) < 0)) {
                    /* try { // try from 00e3d314 to 00f3d31b has its CatchHandler @ 00e3d344 */
      *(undefined1 *)(unaff_x19 + 0x2e) = 1;
    }
LAB_00e3d404:
    do {
      if (*unaff_x26 == 0.0) goto LAB_00e443fc;
      uVar19 = *(undefined8 *)((long)*unaff_x26 + 0xf8);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_02681b9c(uVar19,0,0);
      if ((uVar10 & 1) == 0) {
        lVar14 = unaff_x19[0x10];
      }
      else {
        if ((*unaff_x26 == 0.0) || (lVar14 = *(long *)((long)*unaff_x26 + 0xf8), lVar14 == 0))
        goto LAB_00e443fc;
        lVar14 = *(long *)(lVar14 + 0x18);
      }
      if (((lVar14 == 0) || (lVar14 = FUN_0272bcf4(lVar14,0), lVar14 == 0)) ||
         (plVar11 = (long *)FUN_0267dac8(lVar14,0), plVar11 == (long *)0x0)) goto LAB_00e443fc;
      iVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
      *(float *)(unaff_x19 + 0xda) = (float)iVar9;
      iVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
      *(float *)((long)unaff_x19 + 0x6d4) = (float)iVar9;
      *(int *)(unaff_x19 + 0xdb) = (int)unaff_x19[0xd9];
      *(undefined4 *)((long)unaff_x19 + 0x6dc) = *(undefined4 *)((long)unaff_x19 + 0x6cc);
      puVar6 = UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      _fStack0000000000000070 = (double)CONCAT44((float)iVar9,(int)unaff_x19[0xda]);
      in_stack_00000078 = unaff_x19[0xd9];
      FUN_0132149c(unaff_x19[0x62],unaff_x22 & 0xffffffff,&stack0x00000070,
                   *(undefined8 *)
                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo);
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      uVar26 = (uint)unaff_x22;
      uVar10 = (ulong)(int)uVar26;
      uVar30 = uVar10 | 1;
      FUN_0132149c(unaff_x19[0x62],unaff_x22 & 0xffffffff | 1,&stack0x00000070,*(undefined8 *)puVar6
                  );
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      uVar13 = uVar10 | 2;
      FUN_0132149c(unaff_x19[0x62],uVar13,&stack0x00000070,*(undefined8 *)puVar6);
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      uVar24 = uVar10 | 3;
      FUN_0132149c(unaff_x19[0x62],unaff_x22 & 0xffffffff | 3,&stack0x00000070,*(undefined8 *)puVar6
                  );
      plVar29 = (long *)StringLiteral_9119;
      lVar14 = unaff_x19[0x60];
      if (lVar14 == 0) goto LAB_00e443fc;
      if ((*(uint *)(lVar14 + 0x18) <= uVar26) ||
         (uVar23 = (uint)uVar24, *(uint *)(lVar14 + 0x18) <= uVar23)) goto LAB_00e44400;
      lVar15 = unaff_x19[0xca];
      fVar31 = unaff_s8;
      if (*(float *)(lVar14 + 0x20 + uVar10 * 8) != *(float *)(lVar14 + 0x20 + uVar24 * 8)) {
        fVar31 = unaff_s10;
      }
      *(float *)(unaff_x19 + 0xda) = fVar31;
      if (lVar15 == 0) goto LAB_00e443fc;
      cVar5 = *(char *)(lVar15 + 0x108);
      fVar31 = unaff_s10;
      if (cVar5 != '\0' || 0x7fffffff < *(uint *)(lVar15 + 0x138)) {
        fVar31 = -1.0;
      }
      *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar15 + 0x84) * fVar31;
      if (cVar5 == '\0') {
        iVar39 = *(int *)(lVar15 + 0x160);
        iVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
        param_4 = 0x3e800000;
        *(float *)(unaff_x19 + 0xdb) = (float)iVar39 / ((float)iVar9 * 0.25);
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        iVar39 = *(int *)(unaff_x19[0xca] + 0x160);
        iVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
        fVar32 = (float)iVar39;
        fVar31 = (float)iVar9;
        puVar20 = (undefined8 *)
                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
      }
      else {
        if (*(long *)(lVar15 + 0x100) == 0) goto LAB_00e443fc;
        fVar31 = (float)FUN_00e5df18(*(long *)(lVar15 + 0x100),0);
        puVar20 = (undefined8 *)
                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
        if (((*in_stack_00000060 == 0.0) ||
            (lVar14 = *(long *)((long)*in_stack_00000060 + 0x100), lVar14 == 0)) ||
           (plVar11 = *(long **)(lVar14 + 0x18), plVar11 == (long *)0x0)) goto LAB_00e443fc;
        iVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
        if ((*in_stack_00000060 == 0.0) ||
           (lVar14 = *(long *)((long)*in_stack_00000060 + 0x100), lVar14 == 0)) goto LAB_00e443fc;
        fVar32 = 0.25;
        *(float *)(unaff_x19 + 0xdb) = fVar31 / (*(float *)(lVar14 + 0x40) * (float)iVar9 * 0.25);
        FUN_00e5df18(lVar14,0);
        if ((unaff_x19[0xca] == 0) ||
           ((lVar14 = *(long *)(unaff_x19[0xca] + 0x100), lVar14 == 0 ||
            (plVar11 = *(long **)(lVar14 + 0x18), plVar11 == (long *)0x0)))) goto LAB_00e443fc;
        iVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
        if ((*in_stack_00000060 == 0.0) ||
           (lVar14 = *(long *)((long)*in_stack_00000060 + 0x100), lVar14 == 0)) goto LAB_00e443fc;
        fVar31 = *(float *)(lVar14 + 0x44) * (float)iVar9;
      }
      fVar38 = 0.25;
      fVar32 = fVar32 / (fVar31 * 0.25);
      *(float *)((long)unaff_x19 + 0x6dc) = fVar32;
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      in_stack_00000078 = CONCAT44(fVar32,(int)unaff_x19[0xdb]);
      FUN_0132149c(unaff_x19[99],unaff_x22,&stack0x00000070,*puVar20);
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      FUN_0132149c(unaff_x19[99],unaff_x22 & 0xffffffff | 1,&stack0x00000070,*puVar20);
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      FUN_0132149c(unaff_x19[99],unaff_x22 & 0xffffffff | 2,&stack0x00000070,*puVar20);
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      FUN_0132149c(unaff_x19[99],unaff_x22 & 0xffffffff | 3,&stack0x00000070,*puVar20);
      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
      uVar19 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_02681b9c(uVar19,0,0);
      fVar32 = (float)param_4;
      fVar31 = (float)unaff_d14;
      uVar28 = (uint)uVar30;
      uVar25 = (uint)uVar13;
      if ((uVar12 & 1) != 0) {
        if (in_stack_00000050 == in_stack_00000010) {
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          fVar33 = (float)FUN_00e5b838(*in_stack_00000060,0);
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          pfVar16 = *(float **)
                     (*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
          fVar32 = fVar32 - pfVar16[2];
          param_4 = (ulong)(uint)fVar32;
          if (fVar32 * fVar32 +
              (fVar33 - *pfVar16) * (fVar33 - *pfVar16) +
              (fVar38 - pfVar16[1]) * (fVar38 - pfVar16[1]) < DAT_028aa020) goto LAB_00e3dbd8;
        }
        if ((*in_stack_00000060 == 0.0) ||
           (lVar14 = *(long *)((long)*in_stack_00000060 + 0xb0), lVar14 == 0)) goto LAB_00e443fc;
        uVar19 = *(undefined8 *)(lVar14 + 0x38);
        if (DAT_03774d77 == '\0') {
          thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__)
          ;
          DAT_03774d77 = '\x01';
        }
        fVar32 = (float)uVar19 -
                 (float)**(undefined8 **)
                          (*(long *)
                            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__ +
                          0xb8);
        fVar38 = (float)((ulong)uVar19 >> 0x20) -
                 (float)((ulong)**(undefined8 **)
                                  (*(long *)
                                    Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                  + 0xb8) >> 0x20);
        if (DAT_028aa020 <= fVar32 * fVar32 + fVar38 * fVar38) {
          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
        }
        dVar17 = *in_stack_00000060;
        if ((dVar17 == 0.0) || (lVar14 = *(long *)((long)dVar17 + 0xb0), lVar14 == 0))
        goto LAB_00e443fc;
        fVar33 = fVar31 * *(float *)(lVar14 + 0x38);
        *(float *)(unaff_x19 + 0xc9) = fVar33;
        fVar38 = fVar31 * *(float *)(lVar14 + 0x3c);
        *(float *)((long)unaff_x19 + 0x64c) = fVar38;
        fVar32 = unaff_s10;
        if (*(char *)(lVar14 + 0x25) != '\0') {
          fVar32 = unaff_s10 / *(float *)((long)dVar17 + 0x84);
        }
        lVar14 = *in_stack_00000038;
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
        lVar15 = lVar14 + uVar10 * 0xc;
        fVar34 = *(float *)(lVar15 + 0x20);
        uVar19 = *(undefined8 *)(lVar15 + 0x24);
        *(float *)(unaff_x19 + 0xcd) = fVar34;
        unaff_x23[0xf] = uVar19;
        *(float *)(unaff_x19 + 0xd0) = fVar34;
        fVar35 = (float)uVar19;
        *(float *)((long)unaff_x19 + 0x684) = fVar35;
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
        lVar15 = lVar14 + uVar30 * 0xc;
        uVar36 = *(undefined4 *)(lVar15 + 0x20);
        uVar19 = *(undefined8 *)(lVar15 + 0x24);
        *(undefined4 *)(unaff_x19 + 0xcd) = uVar36;
        unaff_x23[0xf] = uVar19;
        *(undefined4 *)(unaff_x19 + 0xd2) = uVar36;
        *(int *)((long)unaff_x19 + 0x694) = (int)uVar19;
        if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
        lVar15 = lVar14 + uVar13 * 0xc;
        uVar36 = *(undefined4 *)(lVar15 + 0x20);
        uVar19 = *(undefined8 *)(lVar15 + 0x24);
        *(undefined4 *)(unaff_x19 + 0xcd) = uVar36;
        unaff_x23[0xf] = uVar19;
        *(undefined4 *)(unaff_x19 + 0xd4) = uVar36;
        *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar19;
        if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
        lVar14 = lVar14 + uVar24 * 0xc;
        uVar36 = *(undefined4 *)(lVar14 + 0x20);
        uVar19 = *(undefined8 *)(lVar14 + 0x24);
        *(undefined4 *)(unaff_x19 + 0xcd) = uVar36;
        unaff_x23[0xf] = uVar19;
        *(undefined4 *)(unaff_x19 + 0xd6) = uVar36;
        *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar19;
        lVar14 = *(long *)((long)dVar17 + 0xb0);
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(char *)(lVar14 + 0x24) == '\0') {
          lVar15 = *in_stack_00000028;
          if (lVar15 == 0) goto LAB_00e443fc;
          uVar4 = *(uint *)(lVar15 + 0x18);
          if (uVar4 <= uVar26) goto LAB_00e44400;
          lVar21 = lVar15 + uVar10 * 8;
          *(float *)(lVar21 + 0x20) = (fVar33 + fVar32 * fVar34) - *(float *)(lVar14 + 0x30);
          *(float *)(lVar21 + 0x24) = (fVar38 + fVar32 * fVar35) - *(float *)(lVar14 + 0x34);
          if (((uVar4 <= uVar28) ||
              (*(ulong *)(lVar15 + uVar30 * 8 + 0x20) =
                    CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar32 +
                             (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                             (float)((ulong)*(undefined8 *)(lVar14 + 0x30) >> 0x20),
                             ((float)unaff_x19[0xd2] * fVar32 + (float)unaff_x19[0xc9]) -
                             (float)*(undefined8 *)(lVar14 + 0x30)), uVar4 <= uVar25)) ||
             (*(ulong *)(lVar15 + uVar13 * 8 + 0x20) =
                   CONCAT44((fVar32 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                            (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                            (float)((ulong)*(undefined8 *)(lVar14 + 0x30) >> 0x20),
                            (fVar32 * (float)unaff_x19[0xd4] + (float)unaff_x19[0xc9]) -
                            (float)*(undefined8 *)(lVar14 + 0x30)), uVar4 <= uVar23))
          goto LAB_00e44400;
          param_4 = unaff_x19[0xc9];
          *(ulong *)(lVar15 + uVar24 * 8 + 0x20) =
               CONCAT44((fVar32 * (float)((ulong)unaff_x19[0xd6] >> 0x20) + (float)(param_4 >> 0x20)
                        ) - (float)((ulong)*(undefined8 *)(lVar14 + 0x30) >> 0x20),
                        (fVar32 * (float)unaff_x19[0xd6] + (float)param_4) -
                        (float)*(undefined8 *)(lVar14 + 0x30));
        }
        else {
          fVar2 = *(float *)((long)dVar17 + 0x44);
          *(float *)(unaff_x19 + 0xd8) = fVar2;
          fVar3 = *(float *)((long)dVar17 + 0x48);
          lVar15 = unaff_x19[0x61];
          *(float *)((long)unaff_x19 + 0x6c4) = fVar3;
          if (lVar15 == 0) goto LAB_00e443fc;
          uVar4 = *(uint *)(lVar15 + 0x18);
          if (uVar4 <= uVar26) goto LAB_00e44400;
          lVar21 = lVar15 + uVar10 * 8;
          *(float *)(lVar21 + 0x20) =
               (fVar33 + fVar32 * (fVar34 - fVar2)) - *(float *)(lVar14 + 0x30);
          *(float *)(lVar21 + 0x24) =
               (fVar38 + fVar32 * (fVar35 - fVar3)) - *(float *)(lVar14 + 0x34);
          if (((uVar4 <= uVar28) ||
              (*(ulong *)(lVar15 + uVar30 * 8 + 0x20) =
                    CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                             ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                             (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar32) -
                             (float)((ulong)*(undefined8 *)(lVar14 + 0x30) >> 0x20),
                             ((float)unaff_x19[0xc9] +
                             ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) * fVar32) -
                             (float)*(undefined8 *)(lVar14 + 0x30)), uVar4 <= uVar25)) ||
             (*(ulong *)(lVar15 + uVar13 * 8 + 0x20) =
                   CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                            fVar32 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                     (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                            (float)((ulong)*(undefined8 *)(lVar14 + 0x30) >> 0x20),
                            ((float)unaff_x19[0xc9] +
                            fVar32 * ((float)unaff_x19[0xd4] - (float)unaff_x19[0xd8])) -
                            (float)*(undefined8 *)(lVar14 + 0x30)), uVar4 <= uVar23))
          goto LAB_00e44400;
          param_4 = unaff_x19[0xd8];
          *(ulong *)(lVar15 + uVar24 * 8 + 0x20) =
               CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                        fVar32 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) - (float)(param_4 >> 0x20)
                                 )) - (float)((ulong)*(undefined8 *)(lVar14 + 0x30) >> 0x20),
                        ((float)unaff_x19[0xc9] + fVar32 * ((float)unaff_x19[0xd6] - (float)param_4)
                        ) - (float)*(undefined8 *)(lVar14 + 0x30));
        }
      }
LAB_00e3dbd8:
      dVar17 = *in_stack_00000060;
      if (dVar17 == 0.0) goto LAB_00e443fc;
      if (*(char *)((long)dVar17 + 0x108) != '\0') {
        if (*(long *)((long)dVar17 + 0x100) == 0) goto LAB_00e443fc;
        if (*(char *)(*(long *)((long)dVar17 + 0x100) + 0x20) == '\0') {
          lVar14 = *unaff_x28;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          lVar15 = *in_stack_00000028;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
          *(undefined8 *)(lVar15 + uVar10 * 8 + 0x20) = *(undefined8 *)(lVar14 + uVar10 * 8 + 0x20);
          lVar14 = *unaff_x28;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
          lVar15 = *in_stack_00000028;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_00e44400;
          *(undefined8 *)(lVar15 + (long)(int)uVar28 * 8 + 0x20) =
               *(undefined8 *)(lVar14 + (long)(int)uVar28 * 8 + 0x20);
          lVar14 = *unaff_x28;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
          lVar15 = *in_stack_00000028;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar25) goto LAB_00e44400;
          *(undefined8 *)(lVar15 + (long)(int)uVar25 * 8 + 0x20) =
               *(undefined8 *)(lVar14 + (long)(int)uVar25 * 8 + 0x20);
          lVar14 = *unaff_x28;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
          lVar15 = *in_stack_00000028;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
          *(undefined8 *)(lVar15 + uVar24 * 8 + 0x20) = *(undefined8 *)(lVar14 + uVar24 * 8 + 0x20);
          dVar17 = *in_stack_00000060;
          if (dVar17 == 0.0) goto LAB_00e443fc;
        }
      }
      dVar37 = DAT_028aa048;
      if (*(char *)((long)dVar17 + 0x108) == '\0') {
LAB_00e3dd34:
        uVar19 = *(undefined8 *)((long)dVar17 + 0xa8);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar30 = FUN_02681b9c(uVar19,0,0);
        dVar17 = *in_stack_00000060;
        if (dVar17 == 0.0) goto LAB_00e443fc;
        if ((uVar30 & 1) == 0) {
          uVar19 = *(undefined8 *)((long)dVar17 + 0xb0);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar30 = FUN_02681b9c(uVar19,0,0);
          dVar17 = DAT_028aa048;
          if ((uVar30 & 1) == 0) {
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar30 = FUN_02681b9c(uVar19,0,0);
            lVar14 = *unaff_x24;
            if ((uVar30 & 1) == 0) {
              fVar32 = *(float *)((long)unaff_x19 + 0x8c);
              fVar38 = *(float *)(unaff_x19 + 0x12);
              fVar34 = *(float *)((long)unaff_x19 + 0x94);
              fVar33 = *(float *)(unaff_x19 + 0x13);
              fVar31 = fVar32;
              if (unaff_s10 < fVar32) {
                fVar31 = unaff_s10;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar32 < 0.0) {
                fVar31 = unaff_s8;
              }
              dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar17 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              fVar32 = fVar38;
              if (1.0 < fVar38) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar38 < 0.0) {
                fVar32 = unaff_s8;
              }
              dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar17 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3fd48;
                }
                fVar38 = (float)(int)(fVar32 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = fVar32;
                }
              }
              else {
                fVar38 = (float)(int)(fVar32 + -0.5);
              }
              fVar32 = fVar34;
              if (1.0 < fVar34) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar34 < 0.0) {
                fVar32 = unaff_s8;
              }
              dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar17 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              fVar34 = fVar33;
              if (1.0 < fVar33) {
                fVar34 = 1.0;
              }
              fVar34 = fVar34 * 255.0;
              if (fVar33 < 0.0) {
                fVar34 = unaff_s8;
              }
              dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
              if (0.0 <= fVar34) {
                if (dVar17 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar34 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar34 + -0.5);
              }
              if (lVar14 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
              *(uint *)(lVar14 + uVar10 * 4 + 0x20) =
                   (int)fVar31 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10
                   | (int)fVar33 << 0x18;
              fVar32 = *(float *)(unaff_x19 + 0x12);
              lVar14 = unaff_x19[0x5f];
              fVar33 = *(float *)((long)unaff_x19 + 0x94);
              fVar38 = *(float *)(unaff_x19 + 0x13);
              fVar31 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
              if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                fVar31 = unaff_s8;
              }
              dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar17 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              fVar34 = fVar32;
              if (1.0 < fVar32) {
                fVar34 = 1.0;
              }
              fVar34 = fVar34 * 255.0;
              if (fVar32 < 0.0) {
                fVar34 = unaff_s8;
              }
              dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
              if (0.0 <= fVar34) {
                if (dVar17 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e40610;
                }
                fVar34 = (float)(int)(fVar34 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = fVar32;
                }
              }
              else {
                fVar34 = (float)(int)(fVar34 + -0.5);
              }
              fVar32 = fVar33;
              if (1.0 < fVar33) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar33 < 0.0) {
                fVar32 = unaff_s8;
              }
              dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar17 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              fVar33 = fVar38;
              if (1.0 < fVar38) {
                fVar33 = 1.0;
              }
              fVar33 = fVar33 * 255.0;
              if (fVar38 < 0.0) {
                fVar33 = unaff_s8;
              }
              dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
              if (0.0 <= fVar33) {
                if (dVar17 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar33 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar33 + -0.5);
              }
              if (lVar14 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
              *(uint *)(lVar14 + (long)(int)uVar28 * 4 + 0x20) =
                   (int)fVar31 & 0xffU | ((int)fVar34 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
              fVar32 = *(float *)(unaff_x19 + 0x12);
              lVar14 = unaff_x19[0x5f];
              fVar33 = *(float *)((long)unaff_x19 + 0x94);
              fVar38 = *(float *)(unaff_x19 + 0x13);
              fVar31 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
              if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                fVar31 = unaff_s8;
              }
              dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar17 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              fVar34 = fVar32;
              if (1.0 < fVar32) {
                fVar34 = 1.0;
              }
              fVar34 = fVar34 * 255.0;
              if (fVar32 < 0.0) {
                fVar34 = unaff_s8;
              }
              dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
              if (0.0 <= fVar34) {
                if (dVar17 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e40e20;
                }
                fVar34 = (float)(int)(fVar34 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = fVar32;
                }
              }
              else {
                fVar34 = (float)(int)(fVar34 + -0.5);
              }
              fVar32 = fVar33;
              if (1.0 < fVar33) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar33 < 0.0) {
                fVar32 = unaff_s8;
              }
              dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar17 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              fVar33 = fVar38;
              if (1.0 < fVar38) {
                fVar33 = 1.0;
              }
              fVar33 = fVar33 * 255.0;
              if (fVar38 < 0.0) {
                fVar33 = unaff_s8;
              }
              dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
              if (0.0 <= fVar33) {
                if (dVar17 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar33 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar33 + -0.5);
              }
              if (lVar14 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
              *(uint *)(lVar14 + (long)(int)uVar25 * 4 + 0x20) =
                   (int)fVar31 & 0xffU | ((int)fVar34 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
              fVar31 = *(float *)((long)unaff_x19 + 0x8c);
              fVar32 = *(float *)(unaff_x19 + 0x12);
              lVar14 = unaff_x19[0x5f];
              fVar33 = *(float *)((long)unaff_x19 + 0x94);
              fVar38 = *(float *)(unaff_x19 + 0x13);
            }
            else {
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0))
              goto LAB_00e443fc;
              fVar32 = *(float *)(lVar15 + 0x18);
              fVar38 = *(float *)(lVar15 + 0x1c);
              fVar34 = *(float *)(lVar15 + 0x20);
              fVar33 = *(float *)(lVar15 + 0x24);
              fVar31 = fVar32;
              if (unaff_s10 < fVar32) {
                fVar31 = unaff_s10;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar32 < 0.0) {
                fVar31 = unaff_s8;
              }
              dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar17 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              fVar32 = fVar38;
              if (1.0 < fVar38) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar38 < 0.0) {
                fVar32 = unaff_s8;
              }
              dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar17 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3fcc4;
                }
                fVar38 = (float)(int)(fVar32 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = fVar32;
                }
              }
              else {
                fVar38 = (float)(int)(fVar32 + -0.5);
              }
              fVar32 = fVar34;
              if (1.0 < fVar34) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar34 < 0.0) {
                fVar32 = unaff_s8;
              }
              dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar17 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              fVar34 = fVar33;
              if (1.0 < fVar33) {
                fVar34 = 1.0;
              }
              fVar34 = fVar34 * 255.0;
              if (fVar33 < 0.0) {
                fVar34 = unaff_s8;
              }
              dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
              if (0.0 <= fVar34) {
                if (dVar17 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar34 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar34 + -0.5);
              }
              if (lVar14 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
              *(uint *)(lVar14 + uVar10 * 4 + 0x20) =
                   (int)fVar31 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10
                   | (int)fVar33 << 0x18;
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0))
              goto LAB_00e443fc;
              fVar32 = *(float *)(lVar14 + 0x1c);
              lVar15 = *unaff_x24;
              fVar33 = *(float *)(lVar14 + 0x20);
              fVar38 = *(float *)(lVar14 + 0x24);
              fVar31 = *(float *)(lVar14 + 0x18) * 255.0;
              if (*(float *)(lVar14 + 0x18) < 0.0) {
                fVar31 = unaff_s8;
              }
              dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar17 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              fVar34 = fVar32;
              if (1.0 < fVar32) {
                fVar34 = 1.0;
              }
              fVar34 = fVar34 * 255.0;
              if (fVar32 < 0.0) {
                fVar34 = unaff_s8;
              }
              dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
              if (0.0 <= fVar34) {
                if (dVar17 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e4057c;
                }
                fVar34 = (float)(int)(fVar34 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = fVar32;
                }
              }
              else {
                fVar34 = (float)(int)(fVar34 + -0.5);
              }
              fVar32 = fVar33;
              if (1.0 < fVar33) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar33 < 0.0) {
                fVar32 = unaff_s8;
              }
              dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar17 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              fVar33 = fVar38;
              if (1.0 < fVar38) {
                fVar33 = 1.0;
              }
              fVar33 = fVar33 * 255.0;
              if (fVar38 < 0.0) {
                fVar33 = unaff_s8;
              }
              dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
              if (0.0 <= fVar33) {
                if (dVar17 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar33 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar33 + -0.5);
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_00e44400;
              *(uint *)(lVar15 + (long)(int)uVar28 * 4 + 0x20) =
                   (int)fVar31 & 0xffU | ((int)fVar34 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0))
              goto LAB_00e443fc;
              fVar32 = *(float *)(lVar14 + 0x1c);
              lVar15 = *unaff_x24;
              fVar33 = *(float *)(lVar14 + 0x20);
              fVar38 = *(float *)(lVar14 + 0x24);
              fVar31 = *(float *)(lVar14 + 0x18) * 255.0;
              if (*(float *)(lVar14 + 0x18) < 0.0) {
                fVar31 = unaff_s8;
              }
              dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar17 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              fVar34 = fVar32;
              if (1.0 < fVar32) {
                fVar34 = 1.0;
              }
              fVar34 = fVar34 * 255.0;
              if (fVar32 < 0.0) {
                fVar34 = unaff_s8;
              }
              dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
              if (0.0 <= fVar34) {
                if (dVar17 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e40d8c;
                }
                fVar34 = (float)(int)(fVar34 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = fVar32;
                }
              }
              else {
                fVar34 = (float)(int)(fVar34 + -0.5);
              }
              fVar32 = fVar33;
              if (1.0 < fVar33) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar33 < 0.0) {
                fVar32 = unaff_s8;
              }
              dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar17 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              fVar33 = fVar38;
              if (1.0 < fVar38) {
                fVar33 = 1.0;
              }
              fVar33 = fVar33 * 255.0;
              if (fVar38 < 0.0) {
                fVar33 = unaff_s8;
              }
              dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
              if (0.0 <= fVar33) {
                if (dVar17 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar33 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar33 + -0.5);
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar25) goto LAB_00e44400;
              *(uint *)(lVar15 + (long)(int)uVar25 * 4 + 0x20) =
                   (int)fVar31 & 0xffU | ((int)fVar34 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0))
              goto LAB_00e443fc;
              fVar31 = *(float *)(lVar15 + 0x18);
              fVar32 = *(float *)(lVar15 + 0x1c);
              lVar14 = *unaff_x24;
              fVar33 = *(float *)(lVar15 + 0x20);
              fVar38 = *(float *)(lVar15 + 0x24);
            }
            fVar34 = fVar31 * 255.0;
            if (fVar31 < 0.0) {
              fVar34 = unaff_s8;
            }
            dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
            if (0.0 <= fVar34) {
              if (dVar17 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar34 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar34 + -0.5);
            }
            fVar34 = fVar32;
            if (1.0 < fVar32) {
              fVar34 = 1.0;
            }
            fVar34 = fVar34 * 255.0;
            if (fVar32 < 0.0) {
              fVar34 = unaff_s8;
            }
            dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
            if (0.0 <= fVar34) {
              if (dVar17 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e412dc;
              }
              fVar34 = (float)(int)(fVar34 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = fVar32;
              }
            }
            else {
              fVar34 = (float)(int)(fVar34 + -0.5);
            }
            fVar32 = fVar33;
            if (1.0 < fVar33) {
              fVar32 = 1.0;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar33 < 0.0) {
              fVar32 = unaff_s8;
            }
            dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar17 == 0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + -0.5);
            }
            param_4 = 0x3f800000;
            fVar33 = fVar38;
            if (1.0 < fVar38) {
              fVar33 = 1.0;
            }
            fVar33 = fVar33 * 255.0;
            if (fVar38 < 0.0) {
              fVar33 = unaff_s8;
            }
            dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
            if (0.0 <= fVar33) {
              if (dVar17 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar33 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar33 + -0.5);
            }
            if (lVar14 != 0) {
              if (uVar23 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar14 + uVar24 * 4 + 0x20) =
                     (int)fVar31 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                     ((int)fVar32 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                goto LAB_00e43400;
              }
              goto LAB_00e44400;
            }
            goto LAB_00e443fc;
          }
          lVar14 = *unaff_x24;
          dVar37 = modf(DAT_028aa048,(double *)&stack0x00000070);
          if (dVar37 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + unaff_s10;
            }
          }
          else {
            fVar31 = 255.0;
          }
          dVar37 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar37 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + unaff_s10;
            }
          }
          else {
            fVar32 = 255.0;
          }
          dVar37 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar37 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + unaff_s10;
            }
          }
          else {
            fVar38 = 255.0;
          }
          dVar37 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar37 == 0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar33 = 255.0;
          }
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          *(uint *)(lVar14 + uVar10 * 4 + 0x20) =
               (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
               (int)fVar33 << 0x18;
          lVar14 = *unaff_x24;
          dVar37 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar37 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = 255.0;
          }
          dVar37 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar37 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar32 = 255.0;
          }
          dVar37 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar37 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          dVar37 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar37 == 0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar33 = 255.0;
          }
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
          *(uint *)(lVar14 + (long)(int)uVar28 * 4 + 0x20) =
               (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
               (int)fVar33 << 0x18;
          lVar14 = *unaff_x24;
          dVar37 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar37 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = 255.0;
          }
          dVar37 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar37 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar32 = 255.0;
          }
          dVar37 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar37 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          dVar37 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar37 == 0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar33 = 255.0;
          }
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
          *(uint *)(lVar14 + (long)(int)uVar25 * 4 + 0x20) =
               (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
               (int)fVar33 << 0x18;
          lVar14 = *unaff_x24;
          dVar37 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar37 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = 255.0;
          }
          dVar37 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar37 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar32 = 255.0;
          }
          dVar37 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar37 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          dVar17 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar17 == 0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar33 = 255.0;
          }
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
          *(uint *)(lVar14 + uVar24 * 4 + 0x20) =
               (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
               (int)fVar33 << 0x18;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar30 = FUN_02681b9c(uVar19,0,0);
          if ((uVar30 & 1) == 0) goto LAB_00e43400;
          lVar14 = *unaff_x24;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          puVar22 = (uint *)(lVar14 + uVar10 * 4 + 0x20);
          uVar4 = *puVar22;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) goto LAB_00e443fc;
          fVar32 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar14 + 0x18);
          fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar14 + 0x1c);
          fVar33 = *(float *)(lVar14 + 0x20);
          fVar38 = *(float *)(lVar14 + 0x24);
          fVar31 = fVar32 * 255.0;
          if (fVar32 < 0.0) {
            fVar31 = unaff_s8;
          }
          dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar17 == 0.5) {
              fVar31 = 1.0;
              goto LAB_00e3ede4;
            }
            fVar32 = (float)(int)(fVar31 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar31 = -1.0;
LAB_00e3ede4:
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + fVar31;
            }
          }
          else {
            fVar32 = (float)(int)(fVar31 + -0.5);
          }
          fVar33 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar33;
          fVar31 = fVar34 * 255.0;
          if (fVar34 < 0.0) {
            fVar31 = unaff_s8;
          }
          dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar17 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + -0.5);
          }
          fVar34 = fVar33;
          if (1.0 < fVar33) {
            fVar34 = 1.0;
          }
          fVar38 = ((float)(uVar4 >> 0x18) / 255.0) * fVar38;
          fVar34 = fVar34 * 255.0;
          if (fVar33 < 0.0) {
            fVar34 = unaff_s8;
          }
          dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
          if (0.0 <= fVar34) {
            if (dVar17 == 0.5) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e3ffb0;
            }
            fVar34 = (float)(int)(fVar34 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = fVar33;
            }
          }
          else {
            fVar34 = (float)(int)(fVar34 + -0.5);
          }
          fVar33 = fVar38;
          if (1.0 < fVar38) {
            fVar33 = 1.0;
          }
          fVar33 = fVar33 * 255.0;
          if (fVar38 < 0.0) {
            fVar33 = unaff_s8;
          }
          dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
          if (0.0 <= fVar33) {
            if (dVar17 == 0.5) {
              fVar38 = 1.0;
              goto LAB_00e40174;
            }
            fVar33 = (float)(int)(fVar33 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar38 = -1.0;
LAB_00e40174:
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + fVar38;
            }
          }
          else {
            fVar33 = (float)(int)(fVar33 + -0.5);
          }
          *puVar22 = (int)fVar32 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                     ((int)fVar34 & 0xffU) << 0x10 | (int)fVar33 << 0x18;
          lVar14 = *unaff_x24;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
          puVar22 = (uint *)(lVar14 + (long)(int)uVar28 * 4 + 0x20);
          uVar4 = *puVar22;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) goto LAB_00e443fc;
          fVar32 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar14 + 0x18);
          fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar14 + 0x1c);
          fVar33 = *(float *)(lVar14 + 0x20);
          fVar38 = *(float *)(lVar14 + 0x24);
          fVar31 = fVar32 * 255.0;
          if (fVar32 < 0.0) {
            fVar31 = unaff_s8;
          }
          dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar17 == 0.5) {
              fVar31 = 1.0;
              goto LAB_00e404dc;
            }
            fVar32 = (float)(int)(fVar31 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar31 = -1.0;
LAB_00e404dc:
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + fVar31;
            }
          }
          else {
            fVar32 = (float)(int)(fVar31 + -0.5);
          }
          fVar33 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar33;
          fVar31 = fVar34 * 255.0;
          if (fVar34 < 0.0) {
            fVar31 = unaff_s8;
          }
          dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar17 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + -0.5);
          }
          fVar34 = fVar33;
          if (1.0 < fVar33) {
            fVar34 = 1.0;
          }
          fVar38 = ((float)(uVar4 >> 0x18) / 255.0) * fVar38;
          fVar34 = fVar34 * 255.0;
          if (fVar33 < 0.0) {
            fVar34 = unaff_s8;
          }
          dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
          if (0.0 <= fVar34) {
            if (dVar17 == 0.5) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e40888;
            }
            fVar34 = (float)(int)(fVar34 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = fVar33;
            }
          }
          else {
            fVar34 = (float)(int)(fVar34 + -0.5);
          }
          fVar33 = fVar38;
          if (1.0 < fVar38) {
            fVar33 = 1.0;
          }
          fVar33 = fVar33 * 255.0;
          if (fVar38 < 0.0) {
            fVar33 = unaff_s8;
          }
          dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
          if (0.0 <= fVar33) {
            if (dVar17 == 0.5) {
              fVar38 = 1.0;
              goto LAB_00e40a4c;
            }
            fVar33 = (float)(int)(fVar33 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar38 = -1.0;
LAB_00e40a4c:
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + fVar38;
            }
          }
          else {
            fVar33 = (float)(int)(fVar33 + -0.5);
          }
          *puVar22 = (int)fVar32 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                     ((int)fVar34 & 0xffU) << 0x10 | (int)fVar33 << 0x18;
          lVar14 = *unaff_x24;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
          lVar14 = lVar14 + (long)(int)uVar25 * 4;
        }
        else {
          lVar14 = *(long *)((long)dVar17 + 0xa8);
          if (lVar14 == 0) goto LAB_00e443fc;
          fVar32 = *(float *)(lVar14 + 0x24);
          if (fVar32 != 0.0) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          }
          plVar29 = (long *)StringLiteral_9119;
          cVar5 = *(char *)(lVar14 + 0x2c);
          lVar21 = *unaff_x24;
          lVar15 = *(long *)(lVar14 + 0x18);
          fVar31 = fVar31 * fVar32;
          if (*(int *)(lVar14 + 0x28) == 1) {
            if (cVar5 == '\0') {
              if (lVar15 == 0) goto LAB_00e443fc;
              fVar38 = *(float *)(lVar14 + 0x20);
              fVar33 = *(float *)((long)dVar17 + 0x84);
              fVar31 = fVar31 + (*(float *)((long)dVar17 + 0x48) * fVar38) / fVar33;
              fVar31 = fVar31 - (float)(int)fVar31;
              fVar32 = fVar31;
              if (unaff_s10 < fVar31) {
                fVar32 = unaff_s10;
              }
              fVar34 = fVar32;
              if (fVar31 < 0.0) {
                fVar34 = 0.0;
              }
              fVar34 = (float)FUN_0269ad38(fVar34,lVar15,0);
              fVar31 = fVar34;
              if (unaff_s10 < fVar34) {
                fVar31 = unaff_s10;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar34 < 0.0) {
                fVar31 = 0.0;
              }
              dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar17 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070 + unaff_s10;
                  goto LAB_00e3eeac;
                }
                fVar34 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = fVar31;
                }
              }
              else {
                fVar34 = (float)(int)(fVar31 + -0.5);
              }
              fVar31 = fVar32;
              if (unaff_s10 < fVar32) {
                fVar31 = unaff_s10;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar32 < 0.0) {
                fVar31 = 0.0;
              }
              dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar17 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070 + unaff_s10;
                  goto LAB_00e41534;
                }
                fVar32 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = fVar31;
                }
              }
              else {
                fVar32 = (float)(int)(fVar31 + -0.5);
              }
              fVar31 = fVar38;
              if (unaff_s10 < fVar38) {
                fVar31 = unaff_s10;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar38 < 0.0) {
                fVar31 = 0.0;
              }
              dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar17 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              fVar38 = fVar33;
              if (1.0 < fVar33) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar33 < 0.0) {
                fVar38 = 0.0;
              }
              dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar17 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              if (lVar21 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar21 + 0x18) <= uVar26) goto LAB_00e44400;
              *(uint *)(lVar21 + uVar10 * 4 + 0x20) =
                   (int)fVar34 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
              dVar17 = *in_stack_00000060;
              if (((dVar17 == 0.0) || (lVar14 = *(long *)((long)dVar17 + 0xa8), lVar14 == 0)) ||
                 (lVar15 = *(long *)(lVar14 + 0x18), lVar15 == 0)) goto LAB_00e443fc;
              fVar38 = *(float *)((long)dVar17 + 0x48);
              fVar33 = *(float *)((long)dVar17 + 0x84);
              lVar21 = *unaff_x24;
              fVar32 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                       (fVar38 * *(float *)(lVar14 + 0x20)) / fVar33;
              fVar32 = fVar32 - (float)(int)fVar32;
              fVar31 = fVar32;
              if (1.0 < fVar32) {
                fVar31 = 1.0;
              }
            }
            else {
              if (lVar15 == 0) goto LAB_00e443fc;
              fVar38 = *(float *)((long)dVar17 + 0x84);
              fVar33 = *(float *)(lVar14 + 0x20);
              fVar31 = fVar31 + ((*(float *)((long)dVar17 + 0x48) + fVar38) * fVar33) / fVar38;
              fVar31 = fVar31 - (float)(int)fVar31;
              fVar32 = fVar31;
              if (unaff_s10 < fVar31) {
                fVar32 = unaff_s10;
              }
              fVar34 = fVar32;
              if (fVar31 < 0.0) {
                fVar34 = 0.0;
              }
              fVar34 = (float)FUN_0269ad38(fVar34,lVar15,0);
              fVar31 = fVar34;
              if (unaff_s10 < fVar34) {
                fVar31 = unaff_s10;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar34 < 0.0) {
                fVar31 = 0.0;
              }
              dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar17 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070 + unaff_s10;
                  goto LAB_00e3ed6c;
                }
                fVar34 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = fVar31;
                }
              }
              else {
                fVar34 = (float)(int)(fVar31 + -0.5);
              }
              fVar31 = fVar32;
              if (unaff_s10 < fVar32) {
                fVar31 = unaff_s10;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar32 < 0.0) {
                fVar31 = 0.0;
              }
              dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar17 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070 + unaff_s10;
                  goto LAB_00e3f2ec;
                }
                fVar32 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = fVar31;
                }
              }
              else {
                fVar32 = (float)(int)(fVar31 + -0.5);
              }
              fVar31 = fVar38;
              if (unaff_s10 < fVar38) {
                fVar31 = unaff_s10;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar38 < 0.0) {
                fVar31 = 0.0;
              }
              dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar17 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              fVar38 = fVar33;
              if (1.0 < fVar33) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar33 < 0.0) {
                fVar38 = 0.0;
              }
              dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar17 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              if (lVar21 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar21 + 0x18) <= uVar26) goto LAB_00e44400;
              *(uint *)(lVar21 + uVar10 * 4 + 0x20) =
                   (int)fVar34 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
              dVar17 = *in_stack_00000060;
              if (((dVar17 == 0.0) || (lVar14 = *(long *)((long)dVar17 + 0xa8), lVar14 == 0)) ||
                 (lVar15 = *(long *)(lVar14 + 0x18), lVar15 == 0)) goto LAB_00e443fc;
              fVar38 = *(float *)((long)dVar17 + 0x84);
              fVar33 = *(float *)(lVar14 + 0x20);
              lVar21 = *unaff_x24;
              fVar32 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                       ((*(float *)((long)dVar17 + 0x48) + fVar38) * fVar33) / fVar38;
              fVar32 = fVar32 - (float)(int)fVar32;
              fVar31 = fVar32;
              if (1.0 < fVar32) {
                fVar31 = 1.0;
              }
            }
            fVar34 = fVar31;
            if (fVar32 < 0.0) {
              fVar34 = 0.0;
            }
            fVar34 = (float)FUN_0269ad38(fVar34,lVar15,0);
            fVar32 = fVar34;
            if (1.0 < fVar34) {
              fVar32 = 1.0;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar34 < 0.0) {
              fVar32 = 0.0;
            }
            dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar17 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e419a4;
              }
              fVar34 = (float)(int)(fVar32 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = fVar32;
              }
            }
            else {
              fVar34 = (float)(int)(fVar32 + -0.5);
            }
            fVar32 = fVar31;
            if (1.0 < fVar31) {
              fVar32 = 1.0;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar31 < 0.0) {
              fVar32 = 0.0;
            }
            dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar17 == 0.5) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41a34;
              }
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = fVar31;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + -0.5);
            }
            fVar31 = fVar38;
            if (1.0 < fVar38) {
              fVar31 = 1.0;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar38 < 0.0) {
              fVar31 = 0.0;
            }
            dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar17 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + -0.5);
            }
            fVar38 = fVar33;
            if (1.0 < fVar33) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar33 < 0.0) {
              fVar38 = 0.0;
            }
            dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar17 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar28) goto LAB_00e44400;
            *(uint *)(lVar21 + (long)(int)uVar28 * 4 + 0x20) =
                 (int)fVar34 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
            dVar17 = *in_stack_00000060;
            if (((dVar17 == 0.0) || (lVar14 = *(long *)((long)dVar17 + 0xa8), lVar14 == 0)) ||
               (*(long *)(lVar14 + 0x18) == 0)) goto LAB_00e443fc;
            fVar38 = *(float *)((long)dVar17 + 0x48);
            fVar33 = *(float *)((long)dVar17 + 0x84);
            lVar15 = *unaff_x24;
            fVar32 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                     (fVar38 * *(float *)(lVar14 + 0x20)) / fVar33;
            fVar32 = fVar32 - (float)(int)fVar32;
            fVar31 = fVar32;
            if (1.0 < fVar32) {
              fVar31 = 1.0;
            }
            fVar34 = fVar31;
            if (fVar32 < 0.0) {
              fVar34 = 0.0;
            }
            fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar14 + 0x18),0);
            fVar32 = fVar34;
            if (1.0 < fVar34) {
              fVar32 = 1.0;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar34 < 0.0) {
              fVar32 = 0.0;
            }
            dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar17 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41cd0;
              }
              fVar34 = (float)(int)(fVar32 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = fVar32;
              }
            }
            else {
              fVar34 = (float)(int)(fVar32 + -0.5);
            }
            fVar32 = fVar31;
            if (1.0 < fVar31) {
              fVar32 = 1.0;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar31 < 0.0) {
              fVar32 = 0.0;
            }
            dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar17 == 0.5) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41d60;
              }
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = fVar31;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + -0.5);
            }
            fVar31 = fVar38;
            if (1.0 < fVar38) {
              fVar31 = 1.0;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar38 < 0.0) {
              fVar31 = 0.0;
            }
            dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar17 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + -0.5);
            }
            fVar38 = fVar33;
            if (1.0 < fVar33) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar33 < 0.0) {
              fVar38 = 0.0;
            }
            dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar17 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            if (lVar15 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar15 + 0x18) <= uVar25) goto LAB_00e44400;
            *(uint *)(lVar15 + (long)(int)uVar25 * 4 + 0x20) =
                 (int)fVar34 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
            dVar17 = *in_stack_00000060;
            if (((dVar17 == 0.0) || (lVar14 = *(long *)((long)dVar17 + 0xa8), lVar14 == 0)) ||
               (*(long *)(lVar14 + 0x18) == 0)) goto LAB_00e443fc;
            fVar38 = *(float *)((long)dVar17 + 0x48);
            fVar33 = *(float *)((long)dVar17 + 0x84);
            lVar15 = *unaff_x24;
            fVar32 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                     (fVar38 * *(float *)(lVar14 + 0x20)) / fVar33;
            fVar32 = fVar32 - (float)(int)fVar32;
            fVar31 = fVar32;
            if (1.0 < fVar32) {
              fVar31 = 1.0;
            }
            fVar34 = fVar31;
            if (fVar32 < 0.0) {
              fVar34 = 0.0;
            }
            fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar14 + 0x18),0);
            fVar32 = fVar34;
            if (1.0 < fVar34) {
              fVar32 = 1.0;
            }
            param_4 = 0x437f0000;
            fVar32 = fVar32 * 255.0;
            if (fVar34 < 0.0) {
              fVar32 = 0.0;
            }
            dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar17 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41ffc;
              }
              fVar34 = (float)(int)(fVar32 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = fVar32;
              }
            }
            else {
              fVar34 = (float)(int)(fVar32 + -0.5);
            }
            fVar32 = fVar31;
            if (1.0 < fVar31) {
              fVar32 = 1.0;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar31 < 0.0) {
              fVar32 = 0.0;
            }
LAB_00e42040:
            dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
            if (fVar32 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
            if (dVar17 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              fVar32 = fVar31 + 1.0;
              goto LAB_00e425d4;
            }
            fVar31 = (float)(int)(fVar32 + 0.5);
          }
          else {
            lVar18 = *in_stack_00000038;
            if (lVar18 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_00e44400;
            if (lVar15 == 0) goto LAB_00e443fc;
            fVar38 = *(float *)(lVar18 + uVar10 * 0xc + 0x20);
            fVar33 = *(float *)((long)dVar17 + 0x84);
            fVar31 = fVar31 + (fVar38 * *(float *)(lVar14 + 0x20)) / fVar33;
            fVar31 = fVar31 - (float)(int)fVar31;
            fVar32 = fVar31;
            if (unaff_s10 < fVar31) {
              fVar32 = unaff_s10;
            }
            fVar34 = fVar32;
            if (fVar31 < 0.0) {
              fVar34 = 0.0;
            }
            fVar34 = (float)FUN_0269ad38(fVar34,lVar15,0);
            fVar31 = fVar34;
            if (unaff_s10 < fVar34) {
              fVar31 = unaff_s10;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar34 < 0.0) {
              fVar31 = 0.0;
            }
            dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar17 == 0.5) {
                fVar31 = (float)_fStack0000000000000070 + unaff_s10;
                goto LAB_00e3e0b0;
              }
              fVar34 = (float)(int)(fVar31 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = fVar31;
              }
            }
            else {
              fVar34 = (float)(int)(fVar31 + -0.5);
            }
            fVar31 = fVar32;
            if (unaff_s10 < fVar32) {
              fVar31 = unaff_s10;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar32 < 0.0) {
              fVar31 = 0.0;
            }
            dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar17 == 0.5) {
                fVar31 = (float)_fStack0000000000000070 + unaff_s10;
                goto LAB_00e3ee80;
              }
              fVar32 = (float)(int)(fVar31 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = fVar31;
              }
            }
            else {
              fVar32 = (float)(int)(fVar31 + -0.5);
            }
            fVar31 = fVar38;
            if (unaff_s10 < fVar38) {
              fVar31 = unaff_s10;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar38 < 0.0) {
              fVar31 = 0.0;
            }
            dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar17 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + -0.5);
            }
            fVar38 = fVar33;
            if (1.0 < fVar33) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar33 < 0.0) {
              fVar38 = 0.0;
            }
            dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar17 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            if (lVar21 == 0) goto LAB_00e443fc;
            fVar33 = 1.0;
            if (*(uint *)(lVar21 + 0x18) <= uVar26) goto LAB_00e44400;
            *(uint *)(lVar21 + uVar10 * 4 + 0x20) =
                 (int)fVar34 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
            plVar29 = (long *)StringLiteral_9119;
            dVar17 = *in_stack_00000060;
            if (((dVar17 == 0.0) || (lVar14 = *(long *)((long)dVar17 + 0xa8), lVar14 == 0)) ||
               (lVar15 = *in_stack_00000038, lVar15 == 0)) goto LAB_00e443fc;
            lVar18 = *unaff_x24;
            lVar21 = *(long *)(lVar14 + 0x18);
            fVar31 = fStack0000000000000048 * *(float *)(lVar14 + 0x24);
            if (cVar5 != '\0') {
              if (uVar28 < *(uint *)(lVar15 + 0x18)) {
                if (lVar21 != 0) {
                  fVar38 = *(float *)(lVar15 + (long)(int)uVar28 * 0xc + 0x20);
                  fVar34 = *(float *)((long)dVar17 + 0x84);
                  fVar31 = fVar31 + (fVar38 * *(float *)(lVar14 + 0x20)) / fVar34;
                  fVar31 = fVar31 - (float)(int)fVar31;
                  fVar32 = fVar31;
                  if (1.0 < fVar31) {
                    fVar32 = fVar33;
                  }
                  fVar35 = fVar32;
                  if (fVar31 < 0.0) {
                    fVar35 = 0.0;
                  }
                  fVar35 = (float)FUN_0269ad38(fVar35,lVar21,0);
                  fVar31 = fVar35;
                  if (1.0 < fVar35) {
                    fVar31 = fVar33;
                  }
                  fVar31 = fVar31 * 255.0;
                  if (fVar35 < 0.0) {
                    fVar31 = 0.0;
                  }
                  dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
                  if (0.0 <= fVar31) {
                    if (dVar17 == 0.5) {
                      fVar31 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e3f234;
                    }
                    fVar33 = (float)(int)(fVar31 + 0.5);
                  }
                  else if (dVar17 == -0.5) {
                    fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                    fVar33 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar33 = fVar31;
                    }
                  }
                  else {
                    fVar33 = (float)(int)(fVar31 + -0.5);
                  }
                  fVar31 = fVar32;
                  if (1.0 < fVar32) {
                    fVar31 = 1.0;
                  }
                  fVar31 = fVar31 * 255.0;
                  if (fVar32 < 0.0) {
                    fVar31 = 0.0;
                  }
                  dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
                  if (0.0 <= fVar31) {
                    if (dVar17 == 0.5) {
                      fVar31 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e3f594;
                    }
                    fVar32 = (float)(int)(fVar31 + 0.5);
                  }
                  else if (dVar17 == -0.5) {
                    fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                    fVar32 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar32 = fVar31;
                    }
                  }
                  else {
                    fVar32 = (float)(int)(fVar31 + -0.5);
                  }
                  fVar31 = fVar38;
                  if (1.0 < fVar38) {
                    fVar31 = 1.0;
                  }
                  fVar31 = fVar31 * 255.0;
                  if (fVar38 < 0.0) {
                    fVar31 = 0.0;
                  }
                  dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
                  if (0.0 <= fVar31) {
                    if (dVar17 == 0.5) {
                      fVar31 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar31 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar31 = (float)(int)(fVar31 + 0.5);
                    }
                  }
                  else if (dVar17 == -0.5) {
                    fVar31 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar31 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar31 = (float)(int)(fVar31 + -0.5);
                  }
                  fVar38 = fVar34;
                  if (1.0 < fVar34) {
                    fVar38 = 1.0;
                  }
                  fVar38 = fVar38 * 255.0;
                  if (fVar34 < 0.0) {
                    fVar38 = 0.0;
                  }
                  dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
                  if (0.0 <= fVar38) {
                    if (dVar17 == 0.5) {
                      fVar38 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar38 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar38 = (float)(int)(fVar38 + 0.5);
                    }
                  }
                  else if (dVar17 == -0.5) {
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar38 + -0.5);
                  }
                  if (lVar18 != 0) {
                    if (uVar28 < *(uint *)(lVar18 + 0x18)) {
                      *(uint *)(lVar18 + (long)(int)uVar28 * 4 + 0x20) =
                           (int)fVar33 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                           ((int)fVar31 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                      dVar17 = *in_stack_00000060;
                      if (((dVar17 != 0.0) && (lVar14 = *(long *)((long)dVar17 + 0xa8), lVar14 != 0)
                          ) && (lVar15 = *in_stack_00000038, lVar15 != 0)) {
                        if (uVar25 < *(uint *)(lVar15 + 0x18)) {
                          if (*(long *)(lVar14 + 0x18) != 0) {
                            fVar38 = *(float *)(lVar15 + (long)(int)uVar25 * 0xc + 0x20);
                            fVar33 = *(float *)((long)dVar17 + 0x84);
                            lVar15 = *unaff_x24;
                            fVar32 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                                     (fVar38 * *(float *)(lVar14 + 0x20)) / fVar33;
                            fVar32 = fVar32 - (float)(int)fVar32;
                            fVar31 = fVar32;
                            if (1.0 < fVar32) {
                              fVar31 = 1.0;
                            }
                            fVar34 = fVar31;
                            if (fVar32 < 0.0) {
                              fVar34 = 0.0;
                            }
                            fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar14 + 0x18),0);
                            fVar32 = fVar34;
                            if (1.0 < fVar34) {
                              fVar32 = 1.0;
                            }
                            fVar32 = fVar32 * 255.0;
                            if (fVar34 < 0.0) {
                              fVar32 = 0.0;
                            }
                            dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
                            if (0.0 <= fVar32) {
                              if (dVar17 == 0.5) {
                                fVar32 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3f858;
                              }
                              fVar34 = (float)(int)(fVar32 + 0.5);
                            }
                            else if (dVar17 == -0.5) {
                              fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                              fVar34 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar34 = fVar32;
                              }
                            }
                            else {
                              fVar34 = (float)(int)(fVar32 + -0.5);
                            }
                            fVar32 = fVar31;
                            if (1.0 < fVar31) {
                              fVar32 = 1.0;
                            }
                            fVar32 = fVar32 * 255.0;
                            if (fVar31 < 0.0) {
                              fVar32 = 0.0;
                            }
                            dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
                            if (0.0 <= fVar32) {
                              if (dVar17 == 0.5) {
                                fVar31 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3f8e8;
                              }
                              fVar32 = (float)(int)(fVar32 + 0.5);
                            }
                            else if (dVar17 == -0.5) {
                              fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                              fVar32 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar32 = fVar31;
                              }
                            }
                            else {
                              fVar32 = (float)(int)(fVar32 + -0.5);
                            }
                            fVar31 = fVar38;
                            if (1.0 < fVar38) {
                              fVar31 = 1.0;
                            }
                            fVar31 = fVar31 * 255.0;
                            if (fVar38 < 0.0) {
                              fVar31 = 0.0;
                            }
                            dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
                            if (0.0 <= fVar31) {
                              if (dVar17 == 0.5) {
                                fVar31 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar31 = (float)(int)(fVar31 + 0.5);
                              }
                            }
                            else if (dVar17 == -0.5) {
                              fVar31 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar31 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar31 = (float)(int)(fVar31 + -0.5);
                            }
                            fVar38 = fVar33;
                            if (1.0 < fVar33) {
                              fVar38 = 1.0;
                            }
                            fVar38 = fVar38 * 255.0;
                            if (fVar33 < 0.0) {
                              fVar38 = 0.0;
                            }
                            dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
                            plVar29 = (long *)StringLiteral_9119;
                            if (0.0 <= fVar38) {
                              if (dVar17 == 0.5) {
                                fVar38 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar38 = (float)(int)(fVar38 + 0.5);
                              }
                            }
                            else if (dVar17 == -0.5) {
                              fVar38 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar38 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar38 = (float)(int)(fVar38 + -0.5);
                            }
                            if (lVar15 != 0) {
                              if (uVar25 < *(uint *)(lVar15 + 0x18)) {
                                *(uint *)(lVar15 + (long)(int)uVar25 * 4 + 0x20) =
                                     (int)fVar34 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                                dVar17 = *in_stack_00000060;
                                if (((dVar17 != 0.0) &&
                                    (lVar14 = *(long *)((long)dVar17 + 0xa8), lVar14 != 0)) &&
                                   (lVar15 = *in_stack_00000038, lVar15 != 0)) {
                                  if (uVar23 < *(uint *)(lVar15 + 0x18)) {
                                    if (*(long *)(lVar14 + 0x18) != 0) {
                                      fVar38 = *(float *)(lVar15 + uVar24 * 0xc + 0x20);
                                      fVar33 = *(float *)((long)dVar17 + 0x84);
                                      lVar15 = *unaff_x24;
                                      fVar32 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                                               (fVar38 * *(float *)(lVar14 + 0x20)) / fVar33;
                                      fVar32 = fVar32 - (float)(int)fVar32;
                                      fVar31 = fVar32;
                                      if (1.0 < fVar32) {
                                        fVar31 = 1.0;
                                      }
                                      fVar34 = fVar31;
                                      if (fVar32 < 0.0) {
                                        fVar34 = 0.0;
                                      }
                                      fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar14 + 0x18),0
                                                                  );
                                      fVar32 = fVar34;
                                      if (1.0 < fVar34) {
                                        fVar32 = 1.0;
                                      }
                                      param_4 = 0x437f0000;
                                      fVar32 = fVar32 * 255.0;
                                      if (fVar34 < 0.0) {
                                        fVar32 = 0.0;
                                      }
                                      dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
                                      if (0.0 <= fVar32) {
                                        if (dVar17 == 0.5) {
                                          fVar32 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e3fbd0;
                                        }
                                        fVar34 = (float)(int)(fVar32 + 0.5);
                                      }
                                      else if (dVar17 == -0.5) {
                                        fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = fVar32;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar32 + -0.5);
                                      }
                                      fVar32 = fVar31;
                                      if (1.0 < fVar31) {
                                        fVar32 = 1.0;
                                      }
                                      fVar32 = fVar32 * 255.0;
                                      if (fVar31 < 0.0) {
                                        fVar32 = 0.0;
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
            if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
            if (lVar21 == 0) goto LAB_00e443fc;
            fVar38 = *(float *)(lVar15 + uVar10 * 0xc + 0x20);
            fVar34 = *(float *)((long)dVar17 + 0x84);
            fVar31 = fVar31 + (fVar38 * *(float *)(lVar14 + 0x20)) / fVar34;
            fVar31 = fVar31 - (float)(int)fVar31;
            fVar32 = fVar31;
            if (1.0 < fVar31) {
              fVar32 = fVar33;
            }
            fVar35 = fVar32;
            if (fVar31 < 0.0) {
              fVar35 = 0.0;
            }
            fVar35 = (float)FUN_0269ad38(fVar35,lVar21,0);
            fVar31 = fVar35;
            if (1.0 < fVar35) {
              fVar31 = fVar33;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar35 < 0.0) {
              fVar31 = 0.0;
            }
            dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar17 == 0.5) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3f25c;
              }
              fVar33 = (float)(int)(fVar31 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = fVar31;
              }
            }
            else {
              fVar33 = (float)(int)(fVar31 + -0.5);
            }
            fVar31 = fVar32;
            if (1.0 < fVar32) {
              fVar31 = 1.0;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar32 < 0.0) {
              fVar31 = 0.0;
            }
            dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar17 == 0.5) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e415c4;
              }
              fVar32 = (float)(int)(fVar31 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = fVar31;
              }
            }
            else {
              fVar32 = (float)(int)(fVar31 + -0.5);
            }
            fVar31 = fVar38;
            if (1.0 < fVar38) {
              fVar31 = 1.0;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar38 < 0.0) {
              fVar31 = 0.0;
            }
            dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar17 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + -0.5);
            }
            fVar38 = fVar34;
            if (1.0 < fVar34) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar34 < 0.0) {
              fVar38 = 0.0;
            }
            dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar17 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            if (lVar18 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_00e44400;
            *(uint *)(lVar18 + (long)(int)uVar28 * 4 + 0x20) =
                 (int)fVar33 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
            dVar17 = *in_stack_00000060;
            if (((dVar17 == 0.0) || (lVar14 = *(long *)((long)dVar17 + 0xa8), lVar14 == 0)) ||
               (lVar15 = *in_stack_00000038, lVar15 == 0)) goto LAB_00e443fc;
            if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
            if (*(long *)(lVar14 + 0x18) == 0) goto LAB_00e443fc;
            fVar38 = *(float *)(lVar15 + uVar10 * 0xc + 0x20);
            fVar33 = *(float *)((long)dVar17 + 0x84);
            lVar15 = *unaff_x24;
            fVar32 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                     (fVar38 * *(float *)(lVar14 + 0x20)) / fVar33;
            fVar32 = fVar32 - (float)(int)fVar32;
            fVar31 = fVar32;
            if (1.0 < fVar32) {
              fVar31 = 1.0;
            }
            fVar34 = fVar31;
            if (fVar32 < 0.0) {
              fVar34 = 0.0;
            }
            fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar14 + 0x18),0);
            fVar32 = fVar34;
            if (1.0 < fVar34) {
              fVar32 = 1.0;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar34 < 0.0) {
              fVar32 = 0.0;
            }
            dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar17 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e421fc;
              }
              fVar34 = (float)(int)(fVar32 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = fVar32;
              }
            }
            else {
              fVar34 = (float)(int)(fVar32 + -0.5);
            }
            fVar32 = fVar31;
            if (1.0 < fVar31) {
              fVar32 = 1.0;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar31 < 0.0) {
              fVar32 = 0.0;
            }
            dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar17 == 0.5) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e4228c;
              }
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = fVar31;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + -0.5);
            }
            fVar31 = fVar38;
            if (1.0 < fVar38) {
              fVar31 = 1.0;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar38 < 0.0) {
              fVar31 = 0.0;
            }
            dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar17 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + -0.5);
            }
            fVar38 = fVar33;
            if (1.0 < fVar33) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar33 < 0.0) {
              fVar38 = 0.0;
            }
            dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar17 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            if (lVar15 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar15 + 0x18) <= uVar25) goto LAB_00e44400;
            *(uint *)(lVar15 + (long)(int)uVar25 * 4 + 0x20) =
                 (int)fVar34 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
            dVar17 = *in_stack_00000060;
            if (((dVar17 == 0.0) || (lVar14 = *(long *)((long)dVar17 + 0xa8), lVar14 == 0)) ||
               (lVar15 = *in_stack_00000038, lVar15 == 0)) goto LAB_00e443fc;
            if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
            if (*(long *)(lVar14 + 0x18) == 0) goto LAB_00e443fc;
            fVar38 = *(float *)(lVar15 + uVar10 * 0xc + 0x20);
            fVar33 = *(float *)((long)dVar17 + 0x84);
            lVar15 = *unaff_x24;
            fVar32 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                     (fVar38 * *(float *)(lVar14 + 0x20)) / fVar33;
            fVar32 = fVar32 - (float)(int)fVar32;
            fVar31 = fVar32;
            if (1.0 < fVar32) {
              fVar31 = 1.0;
            }
            fVar34 = fVar31;
            if (fVar32 < 0.0) {
              fVar34 = 0.0;
            }
            fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar14 + 0x18),0);
            fVar32 = fVar34;
            if (1.0 < fVar34) {
              fVar32 = 1.0;
            }
            param_4 = 0x437f0000;
            fVar32 = fVar32 * 255.0;
            if (fVar34 < 0.0) {
              fVar32 = 0.0;
            }
            dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar17 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e42560;
              }
              fVar34 = (float)(int)(fVar32 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = fVar32;
              }
            }
            else {
              fVar34 = (float)(int)(fVar32 + -0.5);
            }
            fVar32 = fVar31;
            if (1.0 < fVar31) {
              fVar32 = 1.0;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar31 < 0.0) {
              fVar32 = 0.0;
            }
            dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) goto LAB_00e425b8;
LAB_00e4204c:
            if (dVar17 == -0.5) {
              fVar31 = (float)_fStack0000000000000070;
              fVar32 = fVar31 + -1.0;
LAB_00e425d4:
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = fVar32;
              }
            }
            else {
              fVar31 = (float)(int)(fVar32 + -0.5);
            }
          }
          unaff_s8 = 0.0;
          fVar32 = fVar38;
          if (1.0 < fVar38) {
            fVar32 = 1.0;
          }
          fVar32 = fVar32 * 255.0;
          if (fVar38 < 0.0) {
            fVar32 = 0.0;
          }
          dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar17 == 0.5) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42654;
            }
            fVar38 = (float)(int)(fVar32 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = fVar32;
            }
          }
          else {
            fVar38 = (float)(int)(fVar32 + -0.5);
          }
          fVar32 = fVar33;
          if (1.0 < fVar33) {
            fVar32 = 1.0;
          }
          fVar32 = fVar32 * 255.0;
          if (fVar33 < 0.0) {
            fVar32 = 0.0;
          }
          dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar17 == 0.5) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e426e4;
            }
            fVar33 = (float)(int)(fVar32 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = fVar32;
            }
          }
          else {
            fVar33 = (float)(int)(fVar32 + -0.5);
          }
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
          *(uint *)(lVar15 + uVar24 * 4 + 0x20) =
               (int)fVar34 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
               (int)fVar33 << 0x18;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
          unaff_d14 = _fStack0000000000000048 & 0xffffffff;
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar30 = FUN_02681b9c(uVar19,0,0);
          if ((uVar30 & 1) == 0) goto LAB_00e43400;
          lVar14 = *unaff_x24;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          puVar22 = (uint *)(lVar14 + uVar10 * 4 + 0x20);
          uVar4 = *puVar22;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) goto LAB_00e443fc;
          fVar31 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar14 + 0x18);
          fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar14 + 0x1c);
          fVar33 = *(float *)(lVar14 + 0x20);
          fVar38 = *(float *)(lVar14 + 0x24);
          fVar32 = fVar31 * 255.0;
          if (fVar31 < 0.0) {
            fVar32 = 0.0;
          }
          dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar17 == 0.5) {
              fVar31 = 1.0;
              goto LAB_00e4287c;
            }
            fVar32 = (float)(int)(fVar32 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar31 = -1.0;
LAB_00e4287c:
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + fVar31;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + -0.5);
          }
          fVar31 = fVar34 * 255.0;
          fVar33 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar33;
          if (fVar34 < 0.0) {
            fVar31 = 0.0;
          }
          dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar17 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + -0.5);
          }
          fVar34 = fVar33;
          if (1.0 < fVar33) {
            fVar34 = 1.0;
          }
          fVar34 = fVar34 * 255.0;
          fVar38 = ((float)(uVar4 >> 0x18) / 255.0) * fVar38;
          if (fVar33 < 0.0) {
            fVar34 = 0.0;
          }
          dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
          if (0.0 <= fVar34) {
            if (dVar17 == 0.5) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e429c8;
            }
            fVar34 = (float)(int)(fVar34 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = fVar33;
            }
          }
          else {
            fVar34 = (float)(int)(fVar34 + -0.5);
          }
          fVar33 = fVar38;
          if (1.0 < fVar38) {
            fVar33 = 1.0;
          }
          fVar33 = fVar33 * 255.0;
          if (fVar38 < 0.0) {
            fVar33 = 0.0;
          }
          dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
          if (0.0 <= fVar33) {
            if (dVar17 == 0.5) {
              fVar38 = 1.0;
              goto LAB_00e42a44;
            }
            fVar33 = (float)(int)(fVar33 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar38 = -1.0;
LAB_00e42a44:
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + fVar38;
            }
          }
          else {
            fVar33 = (float)(int)(fVar33 + -0.5);
          }
          *puVar22 = (int)fVar32 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                     ((int)fVar34 & 0xffU) << 0x10 | (int)fVar33 << 0x18;
          lVar14 = *unaff_x24;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
          puVar22 = (uint *)(lVar14 + (long)(int)uVar28 * 4 + 0x20);
          uVar4 = *puVar22;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) goto LAB_00e443fc;
          fVar31 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar14 + 0x18);
          fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar14 + 0x1c);
          fVar33 = *(float *)(lVar14 + 0x20);
          fVar38 = *(float *)(lVar14 + 0x24);
          fVar32 = fVar31 * 255.0;
          if (fVar31 < 0.0) {
            fVar32 = 0.0;
          }
          dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar17 == 0.5) {
              fVar31 = 1.0;
              goto LAB_00e42b80;
            }
            fVar32 = (float)(int)(fVar32 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar31 = -1.0;
LAB_00e42b80:
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + fVar31;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + -0.5);
          }
          fVar31 = fVar34 * 255.0;
          fVar33 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar33;
          if (fVar34 < 0.0) {
            fVar31 = 0.0;
          }
          dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar17 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + -0.5);
          }
          fVar34 = fVar33;
          if (1.0 < fVar33) {
            fVar34 = 1.0;
          }
          fVar34 = fVar34 * 255.0;
          fVar38 = ((float)(uVar4 >> 0x18) / 255.0) * fVar38;
          if (fVar33 < 0.0) {
            fVar34 = 0.0;
          }
          dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
          if (0.0 <= fVar34) {
            if (dVar17 == 0.5) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42ccc;
            }
            fVar34 = (float)(int)(fVar34 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = fVar33;
            }
          }
          else {
            fVar34 = (float)(int)(fVar34 + -0.5);
          }
          fVar33 = fVar38;
          if (1.0 < fVar38) {
            fVar33 = 1.0;
          }
          fVar33 = fVar33 * 255.0;
          if (fVar38 < 0.0) {
            fVar33 = 0.0;
          }
          dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
          if (0.0 <= fVar33) {
            if (dVar17 == 0.5) {
              fVar38 = 1.0;
              goto LAB_00e42d48;
            }
            fVar33 = (float)(int)(fVar33 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar38 = -1.0;
LAB_00e42d48:
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + fVar38;
            }
          }
          else {
            fVar33 = (float)(int)(fVar33 + -0.5);
          }
          *puVar22 = (int)fVar32 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                     ((int)fVar34 & 0xffU) << 0x10 | (int)fVar33 << 0x18;
          lVar14 = *unaff_x24;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
          lVar14 = lVar14 + (long)(int)uVar25 * 4;
        }
        uVar4 = *(uint *)(lVar14 + 0x20);
        if ((*in_stack_00000060 == 0.0) ||
           (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) goto LAB_00e443fc;
        fVar32 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
        fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
        fVar33 = *(float *)(lVar15 + 0x20);
        fVar38 = *(float *)(lVar15 + 0x24);
        fVar31 = fVar32 * 255.0;
        if (fVar32 < 0.0) {
          fVar31 = unaff_s8;
        }
        dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
        if (0.0 <= fVar31) {
          if (dVar17 == 0.5) {
            fVar31 = 1.0;
            goto FUN_00e42e84;
          }
          fVar32 = (float)(int)(fVar31 + 0.5);
        }
        else if (dVar17 == -0.5) {
          fVar31 = -1.0;
FUN_00e42e84:
          fVar32 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar32 = (float)_fStack0000000000000070 + fVar31;
          }
        }
        else {
          fVar32 = (float)(int)(fVar31 + -0.5);
        }
        fVar33 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar33;
        fVar31 = fVar34 * 255.0;
        if (fVar34 < 0.0) {
          fVar31 = unaff_s8;
        }
        dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
        if (0.0 <= fVar31) {
          if (dVar17 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
        }
        else if (dVar17 == -0.5) {
          fVar31 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar31 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar31 = (float)(int)(fVar31 + -0.5);
        }
        fVar34 = fVar33;
        if (1.0 < fVar33) {
          fVar34 = 1.0;
        }
        fVar38 = ((float)(uVar4 >> 0x18) / 255.0) * fVar38;
        fVar34 = fVar34 * 255.0;
        if (fVar33 < 0.0) {
          fVar34 = unaff_s8;
        }
        dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
        if (0.0 <= fVar34) {
          if (dVar17 == 0.5) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e42fd0;
          }
          fVar34 = (float)(int)(fVar34 + 0.5);
        }
        else if (dVar17 == -0.5) {
          fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
          fVar34 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar34 = fVar33;
          }
        }
        else {
          fVar34 = (float)(int)(fVar34 + -0.5);
        }
        fVar33 = fVar38;
        if (1.0 < fVar38) {
          fVar33 = 1.0;
        }
        fVar33 = fVar33 * 255.0;
        if (fVar38 < 0.0) {
          fVar33 = unaff_s8;
        }
        dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
        if (0.0 <= fVar33) {
          if (dVar17 == 0.5) {
            fVar38 = 1.0;
            goto LAB_00e4304c;
          }
          fVar33 = (float)(int)(fVar33 + 0.5);
        }
        else if (dVar17 == -0.5) {
          fVar38 = -1.0;
LAB_00e4304c:
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + fVar38;
          }
        }
        else {
          fVar33 = (float)(int)(fVar33 + -0.5);
        }
        *(uint *)(lVar14 + 0x20) =
             (int)fVar32 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
             (int)fVar33 << 0x18;
        lVar14 = *unaff_x24;
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
        puVar22 = (uint *)(lVar14 + uVar24 * 4 + 0x20);
        uVar4 = *puVar22;
        if ((*in_stack_00000060 == 0.0) ||
           (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) goto LAB_00e443fc;
        fVar32 = (float)(uVar4 & 0xff) / 255.0;
        param_4 = (ulong)(uint)fVar32;
        fVar32 = fVar32 * *(float *)(lVar14 + 0x18);
        fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar14 + 0x1c);
        fVar33 = *(float *)(lVar14 + 0x20);
        fVar38 = *(float *)(lVar14 + 0x24);
        fVar31 = fVar32 * 255.0;
        if (fVar32 < 0.0) {
          fVar31 = unaff_s8;
        }
        dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
        if (0.0 <= fVar31) {
          if (dVar17 == 0.5) {
            fVar31 = 1.0;
            goto LAB_00e4318c;
          }
          fVar32 = (float)(int)(fVar31 + 0.5);
        }
        else if (dVar17 == -0.5) {
          fVar31 = -1.0;
LAB_00e4318c:
          fVar32 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar32 = (float)_fStack0000000000000070 + fVar31;
          }
        }
        else {
          fVar32 = (float)(int)(fVar31 + -0.5);
        }
        fVar33 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar33;
        fVar31 = fVar34 * 255.0;
        if (fVar34 < 0.0) {
          fVar31 = unaff_s8;
        }
        dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
        if (0.0 <= fVar31) {
          if (dVar17 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
        }
        else if (dVar17 == -0.5) {
          fVar31 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar31 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar31 = (float)(int)(fVar31 + -0.5);
        }
        fVar34 = fVar33;
        if (1.0 < fVar33) {
          fVar34 = 1.0;
        }
        fVar38 = ((float)(uVar4 >> 0x18) / 255.0) * fVar38;
        fVar34 = fVar34 * 255.0;
        if (fVar33 < 0.0) {
          fVar34 = unaff_s8;
        }
        dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
        if (0.0 <= fVar34) {
          if (dVar17 == 0.5) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e432e0;
          }
          fVar34 = (float)(int)(fVar34 + 0.5);
        }
        else if (dVar17 == -0.5) {
          fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
          fVar34 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar34 = fVar33;
          }
        }
        else {
          fVar34 = (float)(int)(fVar34 + -0.5);
        }
        fVar33 = fVar38;
        if (1.0 < fVar38) {
          fVar33 = 1.0;
        }
        fVar33 = fVar33 * 255.0;
        if (fVar38 < 0.0) {
          fVar33 = unaff_s8;
        }
        dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
        if (0.0 <= fVar33) {
          if (dVar17 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar33 + 0.5);
          }
        }
        else if (dVar17 == -0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar38 = (float)(int)(fVar33 + -0.5);
        }
        unaff_d14 = _fStack0000000000000048 & 0xffffffff;
        *puVar22 = (int)fVar32 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
        unaff_s15 = in_stack_00000008._4_4_;
      }
      else {
        if (*(long *)((long)dVar17 + 0x100) == 0) goto LAB_00e443fc;
        if (*(char *)(*(long *)((long)dVar17 + 0x100) + 0x20) != '\0') goto LAB_00e3dd34;
        lVar14 = *unaff_x24;
        dVar17 = modf(DAT_028aa048,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar31 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar31 = (float)_fStack0000000000000070 + unaff_s10;
          }
        }
        else {
          fVar31 = 255.0;
        }
        dVar17 = modf(dVar37,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar32 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar32 = (float)_fStack0000000000000070 + unaff_s10;
          }
        }
        else {
          fVar32 = 255.0;
        }
        dVar17 = modf(dVar37,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + unaff_s10;
          }
        }
        else {
          fVar38 = 255.0;
        }
        dVar17 = modf(dVar37,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar33 = 255.0;
        }
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
        *(uint *)(lVar14 + uVar10 * 4 + 0x20) =
             (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
             (int)fVar33 << 0x18;
        lVar14 = *unaff_x24;
        dVar17 = modf(dVar37,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar31 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar31 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar31 = 255.0;
        }
        dVar17 = modf(dVar37,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar32 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar32 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar32 = 255.0;
        }
        dVar17 = modf(dVar37,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar38 = 255.0;
        }
        dVar17 = modf(dVar37,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar33 = 255.0;
        }
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
        *(uint *)(lVar14 + (long)(int)uVar28 * 4 + 0x20) =
             (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
             (int)fVar33 << 0x18;
        lVar14 = *unaff_x24;
        dVar17 = modf(dVar37,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar31 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar31 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar31 = 255.0;
        }
        dVar17 = modf(dVar37,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar32 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar32 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar32 = 255.0;
        }
        dVar17 = modf(dVar37,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar38 = 255.0;
        }
        dVar17 = modf(dVar37,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar33 = 255.0;
        }
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
        *(uint *)(lVar14 + (long)(int)uVar25 * 4 + 0x20) =
             (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
             (int)fVar33 << 0x18;
        lVar14 = *unaff_x24;
        dVar17 = modf(dVar37,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar31 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar31 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar31 = 255.0;
        }
        dVar17 = modf(dVar37,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar32 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar32 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar32 = 255.0;
        }
        dVar17 = modf(dVar37,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar38 = 255.0;
        }
        dVar17 = modf(dVar37,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar33 = 255.0;
        }
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
        *(uint *)(lVar14 + uVar24 * 4 + 0x20) =
             (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
             (int)fVar33 << 0x18;
      }
LAB_00e43400:
      lVar14 = *unaff_x24;
      if (lVar14 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
      lVar14 = lVar14 + uVar10 * 4;
      fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar14 + 0x23));
      *(char *)(lVar14 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar31);
      lVar14 = unaff_x19[0x5f];
      if (lVar14 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
      lVar14 = lVar14 + (long)(int)uVar28 * 4;
      fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar14 + 0x23));
      *(char *)(lVar14 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar31);
      lVar14 = unaff_x19[0x5f];
      if (lVar14 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
      lVar14 = lVar14 + (long)(int)uVar25 * 4;
      fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar14 + 0x23));
      *(char *)(lVar14 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar31);
      lVar14 = unaff_x19[0x5f];
      if (lVar14 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
      lVar14 = lVar14 + uVar24 * 4;
      uVar30 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
      fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar14 + 0x23));
      *(char *)(lVar14 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar31);
      uVar13 = FUN_00e3703c();
      if ((uVar13 & 1) == 0) {
        lVar14 = *plVar29;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar14 = *plVar29;
        }
        if (*(int *)(*(long *)(lVar14 + 0xb8) + 0x20) == 1) {
          lVar14 = *unaff_x24;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          puVar22 = (uint *)(lVar14 + uVar10 * 4 + 0x20);
          uVar4 = *puVar22;
          fVar32 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
          fVar38 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,0);
          fVar33 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / 255.0,0);
          fVar31 = fVar32;
          if (1.0 < fVar32) {
            fVar31 = 1.0;
          }
          fVar31 = fVar31 * 255.0;
          if (fVar32 < 0.0) {
            fVar31 = unaff_s8;
          }
          dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar17 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + -0.5);
          }
          fVar32 = fVar38;
          if (1.0 < fVar38) {
            fVar32 = 1.0;
          }
          fVar32 = fVar32 * 255.0;
          if (fVar38 < 0.0) {
            fVar32 = unaff_s8;
          }
          dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar17 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + -0.5);
          }
          fVar38 = fVar33;
          if (1.0 < fVar33) {
            fVar38 = 1.0;
          }
          fVar34 = (float)(uVar4 >> 0x18) / 255.0;
          fVar38 = fVar38 * 255.0;
          if (fVar33 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar17 == 0.5) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43744;
            }
            fVar33 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = fVar38;
            }
          }
          else {
            fVar33 = (float)(int)(fVar38 + -0.5);
          }
          if (1.0 < fVar34) {
            fVar34 = 1.0;
          }
          fVar34 = fVar34 * 255.0;
          dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
          if (0.0 <= fVar34) {
            if (dVar17 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar34 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar34 + -0.5);
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          *puVar22 = (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                     ((int)fVar33 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
          lVar14 = *in_stack_00000030;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
          puVar22 = (uint *)(lVar14 + (long)(int)uVar28 * 4 + 0x20);
          uVar26 = *puVar22;
          fVar32 = (float)FUN_026982b0((float)(uVar26 & 0xff) / 255.0,0);
          fVar38 = (float)FUN_026982b0((float)(uVar26 >> 8 & 0xff) / 255.0,0);
          fVar33 = (float)FUN_026982b0((float)(uVar26 >> 0x10 & 0xff) / 255.0,0);
          fVar31 = fVar32;
          if (1.0 < fVar32) {
            fVar31 = 1.0;
          }
          fVar31 = fVar31 * 255.0;
          if (fVar32 < 0.0) {
            fVar31 = unaff_s8;
          }
          dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar17 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + -0.5);
          }
          fVar32 = fVar38;
          if (1.0 < fVar38) {
            fVar32 = 1.0;
          }
          fVar32 = fVar32 * 255.0;
          if (fVar38 < 0.0) {
            fVar32 = unaff_s8;
          }
          dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar17 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + -0.5);
          }
          fVar38 = fVar33;
          if (1.0 < fVar33) {
            fVar38 = 1.0;
          }
          fVar34 = (float)(uVar26 >> 0x18) / 255.0;
          fVar38 = fVar38 * 255.0;
          if (fVar33 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar17 == 0.5) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43a84;
            }
            fVar33 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = fVar38;
            }
          }
          else {
            fVar33 = (float)(int)(fVar38 + -0.5);
          }
          if (1.0 < fVar34) {
            fVar34 = 1.0;
          }
          fVar34 = fVar34 * 255.0;
          dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
          if (0.0 <= fVar34) {
            if (dVar17 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar34 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar34 + -0.5);
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
          *puVar22 = (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                     ((int)fVar33 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
          lVar14 = *in_stack_00000030;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
          puVar22 = (uint *)(lVar14 + (long)(int)uVar25 * 4 + 0x20);
          uVar26 = *puVar22;
          fVar32 = (float)FUN_026982b0((float)(uVar26 & 0xff) / 255.0,0);
          fVar38 = (float)FUN_026982b0((float)(uVar26 >> 8 & 0xff) / 255.0,0);
          fVar33 = (float)FUN_026982b0((float)(uVar26 >> 0x10 & 0xff) / 255.0,0);
          fVar31 = fVar32;
          if (1.0 < fVar32) {
            fVar31 = 1.0;
          }
          fVar31 = fVar31 * 255.0;
          if (fVar32 < 0.0) {
            fVar31 = unaff_s8;
          }
          dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar17 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + -0.5);
          }
          fVar32 = fVar38;
          if (1.0 < fVar38) {
            fVar32 = 1.0;
          }
          fVar32 = fVar32 * 255.0;
          if (fVar38 < 0.0) {
            fVar32 = unaff_s8;
          }
          dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar17 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + -0.5);
          }
          fVar38 = fVar33;
          if (1.0 < fVar33) {
            fVar38 = 1.0;
          }
          fVar34 = (float)(uVar26 >> 0x18) / 255.0;
          fVar38 = fVar38 * 255.0;
          if (fVar33 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar17 == 0.5) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43dbc;
            }
            fVar33 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = fVar38;
            }
          }
          else {
            fVar33 = (float)(int)(fVar38 + -0.5);
          }
          if (1.0 < fVar34) {
            fVar34 = 1.0;
          }
          fVar34 = fVar34 * 255.0;
          dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
          if (0.0 <= fVar34) {
            if (dVar17 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar34 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar34 + -0.5);
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
          *puVar22 = (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                     ((int)fVar33 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
          lVar14 = *in_stack_00000030;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
          puVar22 = (uint *)(lVar14 + uVar24 * 4 + 0x20);
          uVar26 = *puVar22;
          fVar32 = (float)FUN_026982b0((float)(uVar26 & 0xff) / 255.0,0);
          fVar38 = (float)FUN_026982b0((float)(uVar26 >> 8 & 0xff) / 255.0,0);
          fVar33 = (float)FUN_026982b0((float)(uVar26 >> 0x10 & 0xff) / 255.0,0);
          fVar31 = fVar32;
          if (1.0 < fVar32) {
            fVar31 = 1.0;
          }
          fVar31 = fVar31 * 255.0;
          if (fVar32 < 0.0) {
            fVar31 = unaff_s8;
          }
          dVar17 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar17 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + -0.5);
          }
          param_4 = 0x3f800000;
          fVar32 = fVar38;
          if (1.0 < fVar38) {
            fVar32 = 1.0;
          }
          fVar32 = fVar32 * 255.0;
          if (fVar38 < 0.0) {
            fVar32 = unaff_s8;
          }
          dVar17 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar17 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + -0.5);
          }
          fVar38 = fVar33;
          if (1.0 < fVar33) {
            fVar38 = 1.0;
          }
          fVar34 = (float)(uVar26 >> 0x18) / 255.0;
          fVar38 = fVar38 * 255.0;
          if (fVar33 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar17 == 0.5) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e440f4;
            }
            fVar33 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = fVar38;
            }
          }
          else {
            fVar33 = (float)(int)(fVar38 + -0.5);
          }
          if (1.0 < fVar34) {
            fVar34 = 1.0;
          }
          fVar34 = fVar34 * 255.0;
          dVar17 = modf((double)fVar34,(double *)&stack0x00000070);
          if (0.0 <= fVar34) {
            uVar30 = 0;
            if (dVar17 == 0.5) {
              fVar38 = 1.0;
              goto LAB_00e44170;
            }
            fVar34 = (float)(int)(fVar34 + 0.5);
          }
          else {
            uVar30 = 0;
            if (dVar17 == -0.5) {
              fVar38 = -1.0;
LAB_00e44170:
              fVar38 = (float)_fStack0000000000000070 + fVar38;
              uVar30 = (ulong)(uint)fVar38;
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = fVar38;
              }
            }
            else {
              fVar34 = (float)(int)(fVar34 + -0.5);
            }
          }
          unaff_d14 = _fStack0000000000000048 & 0xffffffff;
          if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
          *puVar22 = (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                     ((int)fVar33 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
          unaff_x24 = in_stack_00000030;
        }
      }
      puVar7 = StringLiteral_4992;
      puVar6 = OVREyeGaze_TypeInfo;
      in_stack_00000050 = in_stack_00000050 + 1;
      if (in_stack_00000050 == in_stack_00000018) {
        if (((unaff_x19[0x58] == 0) || (iVar9 = FUN_026c82cc(unaff_x19[0x58],0), iVar9 < 1)) &&
           (unaff_x19[0x59] == 0)) goto LAB_00e443b0;
        puVar6 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
        if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0)) goto LAB_00e443fc;
        iVar9 = *(int *)(unaff_x19[0xf] + 0x10);
        plVar11 = unaff_x19 + 0xcb;
        if (iVar9 != *(int *)(unaff_x19[0xcb] + 0x18)) {
          FUN_010afdd4(plVar11,iVar9,
                       *(undefined8 *)Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
        }
        if ((unaff_x19[0xcc] == 0) || (lVar14 = unaff_x19[0xf], lVar14 == 0)) goto LAB_00e443fc;
        plVar29 = unaff_x19 + 0xcc;
        if (*(int *)(lVar14 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
          FUN_010afdd4(plVar29,*(int *)(lVar14 + 0x10),*(undefined8 *)puVar6);
          lVar14 = unaff_x19[0xf];
          if (lVar14 == 0) goto LAB_00e443fc;
        }
        uVar26 = *(uint *)(lVar14 + 0x10);
        if ((int)uVar26 < 1) goto LAB_00e44358;
        uVar10 = 0;
        lVar14 = 0x20;
        goto LAB_00e442cc;
      }
      if (unaff_x19[9] == 0) goto LAB_00e443fc;
      FUN_0132138c(unaff_x19[9],in_stack_00000050 & 0xffffffff,&stack0x00000070,
                   *(undefined8 *)StringLiteral_4992);
      *in_stack_00000060 = _fStack0000000000000070;
      if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
      iVar9 = FUN_00e4e99c();
      if (iVar9 <= *(int *)((long)unaff_x19 + 0x38c)) {
        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
        *(undefined1 *)((long)*in_stack_00000060 + 0x165) = 1;
      }
      if (*(float *)(unaff_x19 + 0x14) == 0.0) {
        FUN_00e45d2c();
      }
      *(undefined2 *)(unaff_x19 + 0xdc) = 0;
      if (*(char *)((long)unaff_x19 + 0xf6) == '\0') {
        uVar10 = FUN_0269e56c(0);
        if (((fStack000000000000004c == 0.0) || ((uVar10 & 1) == 0)) ||
           (1 < (int)unaff_x19[0x2a] - 3U)) {
          if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
          iVar9 = *(int *)(unaff_x19[0xf] + 0x10) + -1;
          *(int *)((long)unaff_x19 + 0x38c) = iVar9;
          if ((unaff_x19[9] == 0) ||
             (FUN_0132138c(unaff_x19[9],iVar9,&stack0x00000070,*(undefined8 *)puVar7),
             _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
          *(undefined4 *)(unaff_x19 + 0x4a) = *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
          if ((unaff_x19[9] == 0) ||
             (FUN_0132138c(unaff_x19[9],*(undefined4 *)((long)unaff_x19 + 0x38c),&stack0x00000070,
                           *(undefined8 *)puVar7), _fStack0000000000000070 == 0.0))
          goto LAB_00e443fc;
          *(float *)((long)unaff_x19 + 0x254) =
               *(float *)((long)_fStack0000000000000070 + 0x48) +
               *(float *)((long)unaff_x19 + 0x50c);
          *(undefined4 *)(unaff_x19 + 0x4b) = *(undefined4 *)((long)unaff_x19 + 0x18c);
        }
      }
      else {
        dVar17 = *in_stack_00000060;
        if ((dVar17 == 0.0) || (*(long *)((long)dVar17 + 0x78) == 0)) goto LAB_00e443fc;
        fVar32 = *(float *)(*(long *)((long)dVar17 + 0x78) + 0x18);
        fVar31 = DAT_028aa034;
        if (fVar32 != 0.0) {
          fVar31 = fVar32;
        }
        if ((0.0 < (unaff_s15 - *(float *)((long)dVar17 + 100)) / fVar31) &&
           (*(char *)((long)dVar17 + 0x165) == '\0')) {
          *(undefined1 *)((long)dVar17 + 0x165) = 1;
          *(undefined1 *)((long)unaff_x19 + 0x6e1) = 1;
          if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
          sVar8 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
          if (sVar8 != 0x200b) {
            *(undefined1 *)(unaff_x19 + 0xdc) = 1;
            if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
            sVar8 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
            if (sVar8 != 0x20) {
              if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
              sVar8 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
              if (sVar8 != 10) {
                lVar14 = unaff_x19[0xca];
                if (lVar14 == 0) goto LAB_00e443fc;
                fVar38 = *(float *)(lVar14 + 0x48);
                fVar31 = *(float *)(unaff_x19 + 0x4b);
                fVar33 = fVar38 + *(float *)((long)unaff_x19 + 0x50c);
                fVar32 = *(float *)(unaff_x19 + 0x4a);
                if (fVar38 <= *(float *)(unaff_x19 + 0x4a)) {
                  fVar32 = fVar38;
                }
                *(float *)(unaff_x19 + 0x4a) = fVar32;
                fVar32 = *(float *)((long)unaff_x19 + 0x254);
                if (fVar33 <= *(float *)((long)unaff_x19 + 0x254)) {
                  fVar32 = fVar33;
                }
                *(float *)((long)unaff_x19 + 0x254) = fVar32;
                fVar32 = (float)FUN_00e5ef30(*(undefined4 *)((long)unaff_x19 + 0x134),lVar14,0);
                fVar32 = fVar32 + *(float *)(unaff_x19 + 0xa1) + *(float *)((long)unaff_x19 + 0x55c)
                ;
                if (fVar31 <= fVar32) {
                  fVar31 = fVar32;
                }
                *(float *)(unaff_x19 + 0x4b) = fVar31;
              }
            }
          }
          iVar39 = *(int *)((long)unaff_x19 + 0x38c);
          if (*(int *)((long)unaff_x19 + 0x38c) <= iVar9) {
            iVar39 = iVar9;
          }
          *(int *)((long)unaff_x19 + 0x38c) = iVar39;
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
        lVar14 = unaff_x19[0x55];
        if (lVar14 != 0) {
          (**(code **)(lVar14 + 0x18))
                    (*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x28));
        }
      }
      unaff_x19[0xc6] = 0;
      fVar32 = 0.0;
      *(undefined4 *)(unaff_x19 + 199) = 0;
      fVar31 = 0.0;
      if ((((0.0 < fStack000000000000004c) &&
           (uVar26 = *(uint *)(unaff_x19 + 0x2a), fVar31 = fVar32, uVar26 < 5)) &&
          ((1 << (ulong)(uVar26 & 0x1f) & 0x19U) != 0)) &&
         (*(float *)(unaff_x19 + 0x4a) < -*(float *)((long)unaff_x19 + 0x184))) {
        if (uVar26 == 4) {
          lVar14 = unaff_x19[0xc];
          if (lVar14 == 0) goto LAB_00e443fc;
          if (0 < *(int *)(lVar14 + 0x18)) {
            iVar9 = 0;
            do {
              FUN_0132138c(lVar14,iVar9,&stack0x00000070,*(undefined8 *)puVar6);
              *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
              fVar31 = fStack0000000000000070;
              if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <=
                  fStack0000000000000070) break;
              lVar14 = unaff_x19[0xc];
              if (lVar14 == 0) goto LAB_00e443fc;
              iVar9 = iVar9 + 1;
            } while (iVar9 < *(int *)(lVar14 + 0x18));
          }
        }
        else {
          lVar14 = unaff_x19[0xb];
          if (lVar14 == 0) goto LAB_00e443fc;
          iVar9 = 0;
          fVar31 = 0.0;
          while (iVar9 < *(int *)(lVar14 + 0x18)) {
            FUN_0132138c(lVar14,iVar9,&stack0x00000070,*(undefined8 *)puVar6);
            fVar31 = fVar31 + fStack0000000000000070;
            *(float *)((long)unaff_x19 + 0x634) = fVar31;
            if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <= fVar31)
            break;
            lVar14 = unaff_x19[0xb];
            iVar9 = iVar9 + 1;
            if (lVar14 == 0) goto LAB_00e443fc;
          }
        }
      }
      *(float *)(unaff_x19 + 0xc6) = *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
      if (unaff_x19[9] == 0) goto LAB_00e443fc;
      fVar32 = *(float *)((long)unaff_x19 + 0x53c);
      FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar7);
      if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0)) goto LAB_00e443fc;
      fVar38 = *(float *)((long)_fStack0000000000000070 + 0x5c);
      FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar7);
      if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
      fVar34 = *(float *)(unaff_x19 + 0xa8);
      fVar33 = *(float *)(unaff_x19 + 199) + fVar34;
      *(float *)((long)unaff_x19 + 0x634) =
           fVar31 + fVar32 + (fVar38 + -1.0) * *(float *)((long)_fStack0000000000000070 + 0x84);
      *(float *)(unaff_x19 + 199) = fVar33;
      puVar6 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      unaff_s10 = 1.0;
      uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
      in_stack_00000040[0x10] = **(undefined8 **)(*(long *)puVar6 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar36;
      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
      uVar19 = *(undefined8 *)(unaff_x19[0xca] + 200);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_02681b9c(uVar19,0,0);
      if ((uVar10 & 1) != 0) {
        lVar14 = __start_il2cpp();
        if (lVar14 == 0) goto LAB_00e443fc;
        if ((*(char *)(lVar14 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
          uVar36 = FUN_00e4ee40();
          *(undefined4 *)((long)unaff_x19 + 0x674) = uVar36;
          *(float *)(unaff_x19 + 0xcf) = fVar33;
          *(float *)((long)unaff_x19 + 0x67c) = fVar34;
        }
      }
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(puVar6);
        DAT_03774d76 = '\x01';
      }
      lVar15 = *(long *)puVar6;
      uVar36 = *(undefined4 *)(*(undefined8 **)(lVar15 + 0xb8) + 1);
      *in_stack_00000040 = **(undefined8 **)(lVar15 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar36;
      lVar14 = (*(long **)(lVar15 + 0xb8))[1];
      unaff_x19[0xc0] = **(long **)(lVar15 + 0xb8);
      *(int *)(unaff_x19 + 0xc1) = (int)lVar14;
      uVar36 = *(undefined4 *)(*(undefined8 **)(lVar15 + 0xb8) + 1);
      in_stack_00000040[3] = **(undefined8 **)(lVar15 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x614) = uVar36;
      lVar14 = (*(long **)(lVar15 + 0xb8))[1];
      unaff_x19[0xc3] = **(long **)(lVar15 + 0xb8);
      *(int *)(unaff_x19 + 0xc4) = (int)lVar14;
      uVar36 = *(undefined4 *)(*(undefined8 **)(lVar15 + 0xb8) + 1);
      in_stack_00000040[6] = **(undefined8 **)(lVar15 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar36;
      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
      uVar19 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_02681b9c(uVar19,0,0);
      if ((uVar10 & 1) != 0) {
        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
        if (*(float *)((long)*in_stack_00000060 + 0x84) != 0.0) {
          lVar14 = __start_il2cpp();
          if (lVar14 == 0) goto LAB_00e443fc;
          if ((*(char *)(lVar14 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
            lVar14 = unaff_x19[0xca];
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            if ((lVar14 == 0) || (lVar15 = *(long *)(lVar14 + 0xc0), lVar15 == 0))
            goto LAB_00e443fc;
            uVar10 = unaff_d14;
            if (*(char *)(lVar15 + 0x18) != '\0') {
              fVar33 = *(float *)(lVar14 + 100);
              uVar10 = (ulong)(uint)(*(float *)((long)unaff_x19 + 0x2ec) - fVar33);
            }
            if (*(char *)(lVar15 + 0x19) != '\0') {
              uVar36 = FUN_00e4e9f4(uVar10);
              lVar14 = unaff_x19[0xca];
              *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar36;
              *(float *)(unaff_x19 + 0xbf) = fVar33;
              *(float *)((long)unaff_x19 + 0x5fc) = fVar34;
              if (lVar14 == 0) goto LAB_00e443fc;
            }
            if (*(long *)(lVar14 + 0xc0) == 0) goto LAB_00e443fc;
            if (*(char *)(*(long *)(lVar14 + 0xc0) + 0x28) != '\0') {
              fVar31 = (float)FUN_00e4e9f4(uVar10);
              *(float *)((long)unaff_x19 + 0x63c) = fVar31;
              *(float *)(unaff_x19 + 200) = fVar33;
              fVar32 = fVar34 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar34;
              unaff_x19[0xc0] =
                   CONCAT44(fVar33 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar31 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar32;
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar31 = (float)FUN_00e4e9f4(uVar10);
              *(float *)((long)unaff_x19 + 0x63c) = fVar31;
              *(float *)(unaff_x19 + 200) = fVar32;
              *(float *)((long)unaff_x19 + 0x644) = fVar34;
              in_stack_00000040[3] =
                   CONCAT44(fVar32 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                            fVar31 + (float)in_stack_00000040[3]);
              *(float *)((long)unaff_x19 + 0x614) = fVar34 + *(float *)((long)unaff_x19 + 0x614);
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar31 = (float)FUN_00e4e9f4(uVar10);
              *(float *)((long)unaff_x19 + 0x63c) = fVar31;
              *(float *)(unaff_x19 + 200) = fVar32;
              fVar33 = fVar34 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar34;
              unaff_x19[0xc3] =
                   CONCAT44(fVar32 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar31 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar33;
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar31 = (float)FUN_00e4e9f4(uVar10);
              *(float *)((long)unaff_x19 + 0x63c) = fVar31;
              *(float *)(unaff_x19 + 200) = fVar33;
              *(float *)((long)unaff_x19 + 0x644) = fVar34;
              in_stack_00000040[6] =
                   CONCAT44(fVar33 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                            fVar31 + (float)in_stack_00000040[6]);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x62c) = fVar34 + *(float *)((long)unaff_x19 + 0x62c);
              if (lVar14 == 0) goto LAB_00e443fc;
            }
            if (*(long *)(lVar14 + 0xc0) == 0) goto LAB_00e443fc;
            if (*(char *)(*(long *)(lVar14 + 0xc0) + 0x50) != '\0') {
              FUN_00e5eda8(lVar14,0);
              fVar31 = (float)FUN_00e4eb50();
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar31;
              *(float *)(unaff_x19 + 200) = fVar33;
              fVar32 = fVar34 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar34;
              unaff_x19[0xc0] =
                   CONCAT44(fVar33 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar31 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar32;
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5b838(lVar14,0);
              fVar31 = (float)FUN_00e4eb50();
              *(float *)((long)unaff_x19 + 0x63c) = fVar31;
              *(float *)(unaff_x19 + 200) = fVar32;
              *(float *)((long)unaff_x19 + 0x644) = fVar34;
              in_stack_00000040[3] =
                   CONCAT44(fVar32 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                            fVar31 + (float)in_stack_00000040[3]);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x614) = fVar34 + *(float *)((long)unaff_x19 + 0x614);
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5eea4(lVar14,0);
              fVar31 = (float)FUN_00e4eb50();
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar31;
              *(float *)(unaff_x19 + 200) = fVar32;
              fVar33 = fVar34 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar34;
              unaff_x19[0xc3] =
                   CONCAT44(fVar32 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar31 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar33;
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5b7d8(lVar14,0);
              fVar31 = (float)FUN_00e4eb50();
              *(float *)((long)unaff_x19 + 0x63c) = fVar31;
              *(float *)(unaff_x19 + 200) = fVar33;
              *(float *)((long)unaff_x19 + 0x644) = fVar34;
              in_stack_00000040[6] =
                   CONCAT44(fVar33 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                            fVar31 + (float)in_stack_00000040[6]);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x62c) = fVar34 + *(float *)((long)unaff_x19 + 0x62c);
              if (lVar14 == 0) goto LAB_00e443fc;
            }
            lVar15 = *(long *)(lVar14 + 0xc0);
            if (lVar15 == 0) goto LAB_00e443fc;
            if (*(char *)(lVar15 + 0x60) != '\0') {
              uVar27 = *(undefined8 *)(lVar15 + 0x68);
              uVar19 = FUN_00e5eda8(lVar14,0);
              fVar31 = (float)FUN_00e4ecc4(uVar19,lVar14,uVar27);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar31;
              *(float *)(unaff_x19 + 200) = fVar33;
              fVar32 = fVar34 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar34;
              unaff_x19[0xc0] =
                   CONCAT44(fVar33 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar31 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar32;
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar27 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x68);
              uVar19 = FUN_00e5b838(lVar14,0);
              fVar31 = (float)FUN_00e4ecc4(uVar19,lVar14,uVar27);
              *(float *)((long)unaff_x19 + 0x63c) = fVar31;
              *(float *)(unaff_x19 + 200) = fVar32;
              *(float *)((long)unaff_x19 + 0x644) = fVar34;
              in_stack_00000040[3] =
                   CONCAT44(fVar32 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                            fVar31 + (float)in_stack_00000040[3]);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x614) = fVar34 + *(float *)((long)unaff_x19 + 0x614);
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar27 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x68);
              uVar19 = FUN_00e5eea4(lVar14,0);
              fVar31 = (float)FUN_00e4ecc4(uVar19,lVar14,uVar27);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar31;
              *(float *)(unaff_x19 + 200) = fVar32;
              fVar38 = fVar34 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar34;
              unaff_x19[0xc3] =
                   CONCAT44(fVar32 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar31 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar38;
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar27 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x68);
              uVar19 = FUN_00e5b7d8(lVar14,0);
              fVar31 = (float)FUN_00e4ecc4(uVar19,lVar14,uVar27);
              *(float *)((long)unaff_x19 + 0x63c) = fVar31;
              *(float *)(unaff_x19 + 200) = fVar38;
              *(float *)((long)unaff_x19 + 0x644) = fVar34;
              in_stack_00000040[6] =
                   CONCAT44(fVar38 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                            fVar31 + (float)in_stack_00000040[6]);
              *(float *)((long)unaff_x19 + 0x62c) = fVar34 + *(float *)((long)unaff_x19 + 0x62c);
            }
          }
        }
      }
      uVar26 = (int)in_stack_00000050 << 2;
      unaff_x22 = (ulong)uVar26;
      unaff_x23 = in_stack_00000040;
      unaff_x26 = in_stack_00000060;
      unaff_x28 = in_stack_00000020;
      if ((0.0 < fStack000000000000004c) && ((int)unaff_x19[0x2a] != 2)) {
        dVar17 = *in_stack_00000060;
        if (dVar17 == 0.0) goto LAB_00e443fc;
        param_4 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
        if (DAT_028aa038 - *(float *)(unaff_x19 + 0x2f) <
            (*(float *)((long)dVar17 + 0x48) + *(float *)((long)dVar17 + 0x84) +
            *(float *)((long)unaff_x19 + 0x634)) - *(float *)((long)unaff_x19 + 0x53c)) {
          lVar14 = *in_stack_00000038;
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(puVar6);
            DAT_03774d76 = '\x01';
          }
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          uVar10 = (ulong)(int)uVar26;
          lVar14 = lVar14 + uVar10 * 0xc;
          *(undefined8 *)(lVar14 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar14 + 0x28) = uVar36;
          lVar14 = *in_stack_00000038;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= (uint)(uVar10 | 1)) goto LAB_00e44400;
          lVar14 = lVar14 + (uVar10 | 1) * 0xc;
          uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          *(undefined8 *)(lVar14 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar14 + 0x28) = uVar36;
          lVar14 = *in_stack_00000038;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= (uint)(uVar10 | 2)) goto LAB_00e44400;
          lVar14 = lVar14 + (uVar10 | 2) * 0xc;
          uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          *(undefined8 *)(lVar14 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar14 + 0x28) = uVar36;
          lVar14 = *in_stack_00000038;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= (uint)(uVar10 | 3)) goto LAB_00e44400;
          lVar14 = lVar14 + (uVar10 | 3) * 0xc;
          uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          *(undefined8 *)(lVar14 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar14 + 0x28) = uVar36;
          goto LAB_00e3d404;
        }
      }
      if (*(char *)((long)unaff_x19 + 300) == '\0') {
        in_stack_00000040[0x1e] = unaff_x19[0x24];
      }
      else {
        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
        uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0x80);
        in_stack_00000040[0x1e] =
             CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) * (float)((ulong)uVar19 >> 0x20),
                      (float)unaff_x19[0x24] * (float)uVar19);
      }
      lVar14 = unaff_x19[0x5e];
      *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
      if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
      fVar31 = (float)FUN_00e5eda8(*in_stack_00000060,0);
      if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
      fVar32 = *(float *)((long)unaff_x19 + 0x674);
      uVar10 = (ulong)(int)uVar26;
      *(float *)(lVar14 + uVar10 * 0xc + 0x20) =
           fVar31 + fVar32 + *(float *)(unaff_x19 + 0xc0) + *(float *)((long)unaff_x19 + 0x5f4) +
           *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
      lVar14 = unaff_x19[0x5e];
      if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
      FUN_00e5eda8(*in_stack_00000060,0);
      if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
      fVar31 = *(float *)((long)unaff_x19 + 0x604);
      *(float *)(lVar14 + uVar10 * 0xc + 0x24) =
           fVar32 + *(float *)(unaff_x19 + 0xcf) + fVar31 + *(float *)(unaff_x19 + 0xbf) +
           *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
      lVar14 = unaff_x19[0x5e];
      if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
      FUN_00e5eda8(*in_stack_00000060,0);
      if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
      *(float *)(lVar14 + uVar10 * 0xc + 0x28) =
           fVar31 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc1) +
           *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
           *(float *)((long)unaff_x19 + 0x6ec);
      lVar14 = unaff_x19[0x5e];
      if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
      fVar31 = (float)FUN_00e5b838(*in_stack_00000060,0);
      uVar30 = uVar10 | 1;
      uVar23 = (uint)uVar30;
      if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
      fVar32 = *(float *)((long)unaff_x19 + 0x674);
      *(float *)(lVar14 + uVar30 * 0xc + 0x20) =
           fVar31 + fVar32 + *(float *)((long)unaff_x19 + 0x60c) +
           *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
           *(float *)((long)unaff_x19 + 0x6e4);
      lVar14 = unaff_x19[0x5e];
      if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
      FUN_00e5b838(*in_stack_00000060,0);
      if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
      fVar31 = *(float *)(unaff_x19 + 0xc2);
      *(float *)(lVar14 + uVar30 * 0xc + 0x24) =
           fVar32 + *(float *)(unaff_x19 + 0xcf) + fVar31 + *(float *)(unaff_x19 + 0xbf) +
           *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
      lVar14 = unaff_x19[0x5e];
      if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
      FUN_00e5b838(*in_stack_00000060,0);
      if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
      *(float *)(lVar14 + uVar30 * 0xc + 0x28) =
           fVar31 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)((long)unaff_x19 + 0x614) +
           *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
           *(float *)((long)unaff_x19 + 0x6ec);
      lVar14 = unaff_x19[0x5e];
      if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
      fVar31 = (float)FUN_00e5eea4(*in_stack_00000060,0);
      uVar13 = uVar10 | 2;
      uVar25 = (uint)uVar13;
      if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
      fVar32 = *(float *)((long)unaff_x19 + 0x674);
      *(float *)(lVar14 + uVar13 * 0xc + 0x20) =
           fVar31 + fVar32 + *(float *)(unaff_x19 + 0xc3) + *(float *)((long)unaff_x19 + 0x5f4) +
           *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
      lVar14 = unaff_x19[0x5e];
      if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
      FUN_00e5eea4(*in_stack_00000060,0);
      if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
      fVar31 = *(float *)((long)unaff_x19 + 0x61c);
      *(float *)(lVar14 + uVar13 * 0xc + 0x24) =
           fVar32 + *(float *)(unaff_x19 + 0xcf) + fVar31 + *(float *)(unaff_x19 + 0xbf) +
           *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
      lVar14 = unaff_x19[0x5e];
      if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
      FUN_00e5eea4(*in_stack_00000060,0);
      if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
      *(float *)(lVar14 + uVar13 * 0xc + 0x28) =
           fVar31 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc4) +
           *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
           *(float *)((long)unaff_x19 + 0x6ec);
      lVar14 = unaff_x19[0x5e];
      if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
      fVar31 = (float)FUN_00e5b7d8(*in_stack_00000060,0);
      uVar24 = uVar10 | 3;
      uVar28 = (uint)uVar24;
      if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
      fVar32 = *(float *)((long)unaff_x19 + 0x674);
      *(float *)(lVar14 + uVar24 * 0xc + 0x20) =
           fVar31 + fVar32 + *(float *)((long)unaff_x19 + 0x624) +
           *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
           *(float *)((long)unaff_x19 + 0x6e4);
      lVar14 = unaff_x19[0x5e];
      if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
      FUN_00e5b7d8(*in_stack_00000060,0);
      if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
      param_4 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
      *(float *)(lVar14 + uVar24 * 0xc + 0x24) =
           fVar32 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
           *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
           *(float *)(unaff_x19 + 0xdd);
      lVar14 = unaff_x19[0x5e];
      if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
      FUN_00e5b7d8(*in_stack_00000060,0);
      if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
      fVar31 = *(float *)((long)unaff_x19 + 0x62c);
      *(float *)(lVar14 + uVar24 * 0xc + 0x28) =
           (float)param_4 + *(float *)((long)unaff_x19 + 0x67c) + fVar31 +
           *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
           *(float *)((long)unaff_x19 + 0x6ec);
      lVar14 = unaff_x19[0xca];
      if (lVar14 == 0) goto LAB_00e443fc;
      lVar15 = *in_stack_00000020;
      if (*(char *)(lVar14 + 0x108) == '\0') {
        uVar36 = FUN_0272b9dc(lVar14 + 0x10,0);
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
        lVar15 = lVar15 + uVar10 * 8;
        *(undefined4 *)(lVar15 + 0x20) = uVar36;
        *(float *)(lVar15 + 0x24) = fVar31;
        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
        lVar14 = *in_stack_00000020;
        uVar36 = thunk_FUN_0272b8d8((long)*in_stack_00000060 + 0x10,0);
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
        lVar14 = lVar14 + uVar30 * 8;
        *(undefined4 *)(lVar14 + 0x20) = uVar36;
        *(float *)(lVar14 + 0x24) = fVar31;
        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
        lVar14 = *in_stack_00000020;
        uVar36 = FUN_0272b9c8((long)*in_stack_00000060 + 0x10,0);
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
        lVar14 = lVar14 + uVar13 * 8;
        *(undefined4 *)(lVar14 + 0x20) = uVar36;
        *(float *)(lVar14 + 0x24) = fVar31;
        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
        lVar14 = *in_stack_00000020;
        uVar36 = FUN_0272b98c((long)*in_stack_00000060 + 0x10,0);
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
        lVar14 = lVar14 + uVar24 * 8;
        *(undefined4 *)(lVar14 + 0x20) = uVar36;
        *(float *)(lVar14 + 0x24) = fVar31;
        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
        uVar36 = FUN_00e5ecc0(*in_stack_00000060,0);
        *(undefined4 *)(unaff_x19 + 0xd9) = uVar36;
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        FUN_00e5ecc0(unaff_x19[0xca],0);
        *(float *)((long)unaff_x19 + 0x6cc) = fVar31;
        unaff_x24 = in_stack_00000030;
        goto LAB_00e3d404;
      }
      if ((*(long *)(lVar14 + 0x100) == 0) ||
         (uVar36 = FUN_00e5dd14(unaff_d14,*(long *)(lVar14 + 0x100),*(undefined4 *)(lVar14 + 0x10c),
                                0), lVar15 == 0)) goto LAB_00e443fc;
      if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
      lVar15 = lVar15 + uVar10 * 8;
      *(undefined4 *)(lVar15 + 0x20) = uVar36;
      *(float *)(lVar15 + 0x24) = fVar31;
      dVar17 = *in_stack_00000060;
      if ((dVar17 == 0.0) || (*(long *)((long)dVar17 + 0x100) == 0)) goto LAB_00e443fc;
      lVar14 = *in_stack_00000020;
      uVar36 = FUN_00e5de6c(unaff_d14,*(long *)((long)dVar17 + 0x100),
                            *(undefined4 *)((long)dVar17 + 0x10c),0);
      if (lVar14 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
      lVar14 = lVar14 + uVar30 * 8;
      *(undefined4 *)(lVar14 + 0x20) = uVar36;
      *(float *)(lVar14 + 0x24) = fVar31;
      dVar17 = *in_stack_00000060;
      if ((dVar17 == 0.0) || (*(long *)((long)dVar17 + 0x100) == 0)) goto LAB_00e443fc;
      lVar14 = *in_stack_00000020;
      uVar36 = FUN_00e5dea4(unaff_d14,*(long *)((long)dVar17 + 0x100),
                            *(undefined4 *)((long)dVar17 + 0x10c),0);
      if (lVar14 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
      lVar14 = lVar14 + uVar13 * 8;
      *(undefined4 *)(lVar14 + 0x20) = uVar36;
      *(float *)(lVar14 + 0x24) = fVar31;
      dVar17 = *in_stack_00000060;
      if ((dVar17 == 0.0) || (*(long *)((long)dVar17 + 0x100) == 0)) goto LAB_00e443fc;
      lVar14 = *in_stack_00000020;
      uVar36 = thunk_FUN_00e5dd60(unaff_d14,*(long *)((long)dVar17 + 0x100),
                                  *(undefined4 *)((long)dVar17 + 0x10c),0);
      if (lVar14 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
      lVar14 = lVar14 + uVar24 * 8;
      *(undefined4 *)(lVar14 + 0x20) = uVar36;
      *(float *)(lVar14 + 0x24) = fVar31;
      dVar17 = *in_stack_00000060;
      if ((dVar17 == 0.0) || (*(long *)((long)dVar17 + 0x100) == 0)) goto LAB_00e443fc;
      uVar36 = FUN_00e5dedc(unaff_d14,*(long *)((long)dVar17 + 0x100),
                            *(undefined4 *)((long)dVar17 + 0x10c),0);
      param_1 = unaff_x19[0xca];
      *(undefined4 *)(unaff_x19 + 0xd9) = uVar36;
      *(float *)((long)unaff_x19 + 0x6cc) = fVar31;
      if ((param_1 == 0) || (lVar14 = *(long *)(param_1 + 0x100), lVar14 == 0)) goto LAB_00e443fc;
      unaff_x24 = in_stack_00000030;
    } while (*(int *)(lVar14 + 0x28) < 2);
    fVar31 = *(float *)(lVar14 + 0x34);
    in_NG = '\0';
    in_ZR = false;
    in_OV = '\x01';
    if (!NAN(fVar31)) {
      in_NG = fVar31 < 0.0;
      in_ZR = fVar31 == 0.0;
      in_OV = '\0';
    }
  } while( true );
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar10 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar7);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar15 = unaff_x19[0xcb];
    uVar36 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar15 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar15 + 0x18) <= uVar10) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar1 = (undefined4 *)(lVar15 + lVar14);
    *puVar1 = uVar36;
    puVar1[1] = (int)uVar30;
    puVar1[2] = (int)param_4;
    lVar15 = unaff_x19[0xca];
    if ((lVar15 == 0) || (lVar21 = unaff_x19[0xcc], lVar21 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar21 + 0x18) <= uVar10) goto LAB_00e44400;
    uVar36 = *(undefined4 *)(lVar15 + 0x4c);
    uVar10 = uVar10 + 1;
    puVar20 = (undefined8 *)(lVar21 + lVar14);
    lVar14 = lVar14 + 0xc;
    *puVar20 = *(undefined8 *)(lVar15 + 0x44);
    *(undefined4 *)(puVar20 + 1) = uVar36;
  } while (uVar26 != uVar10);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar11,*plVar29,
                 *(undefined8 *)StringLiteral_225);
  }
  lVar14 = unaff_x19[0x59];
  if (lVar14 != 0) {
    (**(code **)(lVar14 + 0x18))
              (*(undefined8 *)(lVar14 + 0x40),*in_stack_00000038,*plVar11,*plVar29,
               *(undefined8 *)(lVar14 + 0x28));
  }
  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
LAB_00e443b0:
  lVar14 = __start_il2cpp();
  if (lVar14 != 0) {
    if ((*(char *)(lVar14 + 0x109) != '\0') || (*(char *)((long)unaff_x19 + 0xa9) != '\0')) {
      *(undefined1 *)(unaff_x19 + 0x2e) = 0;
    }
    return;
  }
LAB_00e443fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


