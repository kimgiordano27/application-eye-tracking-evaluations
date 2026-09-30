/*
FUNCTION_NAME: FullSerializer.Internal.fsKeyValuePairConverter$$TryDeserialize
ENTRY_POINT: 00e3d4e8
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

void FullSerializer_Internal_fsKeyValuePairConverter__TryDeserialize
               (float param_1,undefined1 param_2 [16],ulong param_3,long param_4,ulong param_5,
               undefined1 *param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  short sVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 in_w8;
  long lVar13;
  long lVar14;
  float *pfVar15;
  undefined4 in_w9;
  double dVar16;
  undefined4 in_w10;
  long lVar17;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  uint *puVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  undefined8 uVar27;
  ulong unaff_x22;
  uint uVar28;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *plVar29;
  long *unaff_x26;
  long *unaff_x27;
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
  long lStack0000000000000078;
  
  while( true ) {
    _fStack0000000000000070 = (double)CONCAT44(param_1,in_w8);
    lStack0000000000000078 = CONCAT44(in_w10,in_w9);
    FUN_0132149c(param_4,param_5,param_6,param_7);
    if (unaff_x19[0x62] == 0) break;
    lStack0000000000000078 = unaff_x19[0xdb];
    _fStack0000000000000070 = (double)unaff_x19[0xda];
    uVar26 = (uint)unaff_x22;
    uVar23 = (ulong)(int)uVar26;
    uVar30 = uVar23 | 1;
                    /* catch() { ... } // from try @ 00e3d61c with catch @ 00e3d520 */
    FUN_0132149c(unaff_x19[0x62],unaff_x22 & 0xffffffff | 1,&stack0x00000070,*unaff_x25);
    if (unaff_x19[0x62] == 0) break;
    lStack0000000000000078 = unaff_x19[0xdb];
    _fStack0000000000000070 = (double)unaff_x19[0xda];
    uVar12 = uVar23 | 2;
    FUN_0132149c(unaff_x19[0x62],uVar12,&stack0x00000070,*unaff_x25);
    if (unaff_x19[0x62] == 0) break;
    lStack0000000000000078 = unaff_x19[0xdb];
    _fStack0000000000000070 = (double)unaff_x19[0xda];
    uVar24 = uVar23 | 3;
    FUN_0132149c(unaff_x19[0x62],unaff_x22 & 0xffffffff | 3,&stack0x00000070,*unaff_x25);
    plVar29 = (long *)StringLiteral_9119;
    lVar13 = unaff_x19[0x60];
    if (lVar13 == 0) break;
    if ((*(uint *)(lVar13 + 0x18) <= uVar26) ||
       (uVar22 = (uint)uVar24, *(uint *)(lVar13 + 0x18) <= uVar22)) goto LAB_00e44400;
                    /* try { // try from 00e3d5a0 to 00f3d5ab has its CatchHandler @ 00e3d65c */
    lVar14 = unaff_x19[0xca];
    fVar31 = unaff_s8;
    if (*(float *)(lVar13 + 0x20 + uVar23 * 8) != *(float *)(lVar13 + 0x20 + uVar24 * 8)) {
      fVar31 = unaff_s10;
    }
    *(float *)(unaff_x19 + 0xda) = fVar31;
    if (lVar14 == 0) break;
    cVar5 = *(char *)(lVar14 + 0x108);
    fVar31 = unaff_s10;
    if (cVar5 != '\0' || 0x7fffffff < *(uint *)(lVar14 + 0x138)) {
      fVar31 = -1.0;
    }
    *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar14 + 0x84) * fVar31;
    if (cVar5 == '\0') {
      iVar39 = *(int *)(lVar14 + 0x160);
      iVar9 = (**(code **)(*unaff_x20 + 0x188))(unaff_x20,*(undefined8 *)(*unaff_x20 + 400));
      param_3 = 0x3e800000;
      *(float *)(unaff_x19 + 0xdb) = (float)iVar39 / ((float)iVar9 * 0.25);
      if (unaff_x19[0xca] == 0) break;
      iVar39 = *(int *)(unaff_x19[0xca] + 0x160);
      iVar9 = (**(code **)(*unaff_x20 + 0x1a8))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x1b0));
      fVar32 = (float)iVar39;
      fVar31 = (float)iVar9;
      puVar18 = (undefined8 *)
                UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
    }
    else {
                    /* try { // try from 00e3d5f0 to 00f3d5fb has its CatchHandler @ 00e3d648 */
      if (*(long *)(lVar14 + 0x100) == 0) break;
      fVar31 = (float)FUN_00e5df18(*(long *)(lVar14 + 0x100),0);
      puVar18 = (undefined8 *)
                UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
                    /* try { // try from 00e3d610 to 00f3d61b has its CatchHandler @ 00e3d640 */
                    /* try { // try from 00e3d61c to 00f3d66b has its CatchHandler @ 00e3d520 */
      if (((*in_stack_00000060 == 0.0) ||
          (lVar13 = *(long *)((long)*in_stack_00000060 + 0x100), lVar13 == 0)) ||
         (plVar10 = *(long **)(lVar13 + 0x18), plVar10 == (long *)0x0)) break;
      iVar9 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
                    /* catch() { ... } // from try @ 00e3d610 with catch @ 00e3d640 */
      if ((*in_stack_00000060 == 0.0) ||
         (lVar13 = *(long *)((long)*in_stack_00000060 + 0x100), lVar13 == 0)) break;
                    /* catch() { ... } // from try @ 00e3d5f0 with catch @ 00e3d648 */
      fVar32 = 0.25;
                    /* catch() { ... } // from try @ 00e3d5a0 with catch @ 00e3d65c */
      *(float *)(unaff_x19 + 0xdb) = fVar31 / (*(float *)(lVar13 + 0x40) * (float)iVar9 * 0.25);
      FUN_00e5df18(lVar13,0);
      if ((unaff_x19[0xca] == 0) ||
         ((lVar13 = *(long *)(unaff_x19[0xca] + 0x100), lVar13 == 0 ||
          (plVar10 = *(long **)(lVar13 + 0x18), plVar10 == (long *)0x0)))) break;
      iVar9 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
      if ((*in_stack_00000060 == 0.0) ||
         (lVar13 = *(long *)((long)*in_stack_00000060 + 0x100), lVar13 == 0)) break;
      fVar31 = *(float *)(lVar13 + 0x44) * (float)iVar9;
    }
    fVar38 = 0.25;
    fVar32 = fVar32 / (fVar31 * 0.25);
    *(float *)((long)unaff_x19 + 0x6dc) = fVar32;
    if (unaff_x19[99] == 0) break;
    _fStack0000000000000070 = (double)unaff_x19[0xda];
    lStack0000000000000078 = CONCAT44(fVar32,(int)unaff_x19[0xdb]);
    FUN_0132149c(unaff_x19[99],unaff_x22,&stack0x00000070,*puVar18);
    if (unaff_x19[99] == 0) break;
    lStack0000000000000078 = unaff_x19[0xdb];
    _fStack0000000000000070 = (double)unaff_x19[0xda];
    FUN_0132149c(unaff_x19[99],unaff_x22 & 0xffffffff | 1,&stack0x00000070,*puVar18);
    if (unaff_x19[99] == 0) break;
    lStack0000000000000078 = unaff_x19[0xdb];
    _fStack0000000000000070 = (double)unaff_x19[0xda];
    FUN_0132149c(unaff_x19[99],unaff_x22 & 0xffffffff | 2,&stack0x00000070,*puVar18);
    if (unaff_x19[99] == 0) break;
    lStack0000000000000078 = unaff_x19[0xdb];
    _fStack0000000000000070 = (double)unaff_x19[0xda];
    FUN_0132149c(unaff_x19[99],unaff_x22 & 0xffffffff | 3,&stack0x00000070,*puVar18);
    if (unaff_x19[0xca] == 0) break;
    uVar19 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_02681b9c(uVar19,0,0);
    fVar32 = (float)param_3;
    fVar31 = (float)unaff_d14;
    uVar28 = (uint)uVar30;
    uVar25 = (uint)uVar12;
    if ((uVar11 & 1) != 0) {
      if (in_stack_00000050 == in_stack_00000010) {
        if (*in_stack_00000060 == 0.0) break;
        fVar33 = (float)FUN_00e5b838(*in_stack_00000060,0);
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        pfVar15 = *(float **)
                   (*(long *)
                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                   + 0xb8);
        fVar32 = fVar32 - pfVar15[2];
        param_3 = (ulong)(uint)fVar32;
        if (fVar32 * fVar32 +
            (fVar33 - *pfVar15) * (fVar33 - *pfVar15) +
            (fVar38 - pfVar15[1]) * (fVar38 - pfVar15[1]) < DAT_028aa020) goto LAB_00e3dbd8;
      }
      if ((*in_stack_00000060 == 0.0) ||
         (lVar13 = *(long *)((long)*in_stack_00000060 + 0xb0), lVar13 == 0)) break;
      uVar19 = *(undefined8 *)(lVar13 + 0x38);
      if (DAT_03774d77 == '\0') {
        thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__);
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
      dVar16 = *in_stack_00000060;
      if ((dVar16 == 0.0) || (lVar13 = *(long *)((long)dVar16 + 0xb0), lVar13 == 0)) break;
      fVar33 = fVar31 * *(float *)(lVar13 + 0x38);
      *(float *)(unaff_x19 + 0xc9) = fVar33;
      fVar38 = fVar31 * *(float *)(lVar13 + 0x3c);
      *(float *)((long)unaff_x19 + 0x64c) = fVar38;
      fVar32 = unaff_s10;
      if (*(char *)(lVar13 + 0x25) != '\0') {
        fVar32 = unaff_s10 / *(float *)((long)dVar16 + 0x84);
      }
      lVar13 = *in_stack_00000038;
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_00e44400;
      lVar14 = lVar13 + uVar23 * 0xc;
      fVar34 = *(float *)(lVar14 + 0x20);
      uVar19 = *(undefined8 *)(lVar14 + 0x24);
      *(float *)(unaff_x19 + 0xcd) = fVar34;
      unaff_x23[0xf] = uVar19;
      *(float *)(unaff_x19 + 0xd0) = fVar34;
      fVar35 = (float)uVar19;
      *(float *)((long)unaff_x19 + 0x684) = fVar35;
      if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_00e44400;
      lVar14 = lVar13 + uVar30 * 0xc;
      uVar36 = *(undefined4 *)(lVar14 + 0x20);
      uVar19 = *(undefined8 *)(lVar14 + 0x24);
      *(undefined4 *)(unaff_x19 + 0xcd) = uVar36;
      unaff_x23[0xf] = uVar19;
      *(undefined4 *)(unaff_x19 + 0xd2) = uVar36;
      *(int *)((long)unaff_x19 + 0x694) = (int)uVar19;
      if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_00e44400;
      lVar14 = lVar13 + uVar12 * 0xc;
      uVar36 = *(undefined4 *)(lVar14 + 0x20);
      uVar19 = *(undefined8 *)(lVar14 + 0x24);
      *(undefined4 *)(unaff_x19 + 0xcd) = uVar36;
      unaff_x23[0xf] = uVar19;
      *(undefined4 *)(unaff_x19 + 0xd4) = uVar36;
      *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar19;
      if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_00e44400;
      lVar13 = lVar13 + uVar24 * 0xc;
      uVar36 = *(undefined4 *)(lVar13 + 0x20);
      uVar19 = *(undefined8 *)(lVar13 + 0x24);
      unaff_x24 = 0xc;
      *(undefined4 *)(unaff_x19 + 0xcd) = uVar36;
      unaff_x23[0xf] = uVar19;
      *(undefined4 *)(unaff_x19 + 0xd6) = uVar36;
      *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar19;
      lVar13 = *(long *)((long)dVar16 + 0xb0);
      if (lVar13 == 0) break;
      if (*(char *)(lVar13 + 0x24) == '\0') {
        lVar14 = *in_stack_00000028;
        if (lVar14 == 0) break;
        uVar4 = *(uint *)(lVar14 + 0x18);
        if (uVar4 <= uVar26) goto LAB_00e44400;
        lVar20 = lVar14 + uVar23 * 8;
        *(float *)(lVar20 + 0x20) = (fVar33 + fVar32 * fVar34) - *(float *)(lVar13 + 0x30);
        *(float *)(lVar20 + 0x24) = (fVar38 + fVar32 * fVar35) - *(float *)(lVar13 + 0x34);
        if (((uVar4 <= uVar28) ||
            (*(ulong *)(lVar14 + uVar30 * 8 + 0x20) =
                  CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar32 +
                           (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                           (float)((ulong)*(undefined8 *)(lVar13 + 0x30) >> 0x20),
                           ((float)unaff_x19[0xd2] * fVar32 + (float)unaff_x19[0xc9]) -
                           (float)*(undefined8 *)(lVar13 + 0x30)), uVar4 <= uVar25)) ||
           (*(ulong *)(lVar14 + uVar12 * 8 + 0x20) =
                 CONCAT44((fVar32 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                          (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                          (float)((ulong)*(undefined8 *)(lVar13 + 0x30) >> 0x20),
                          (fVar32 * (float)unaff_x19[0xd4] + (float)unaff_x19[0xc9]) -
                          (float)*(undefined8 *)(lVar13 + 0x30)), uVar4 <= uVar22))
        goto LAB_00e44400;
        param_3 = unaff_x19[0xc9];
        *(ulong *)(lVar14 + uVar24 * 8 + 0x20) =
             CONCAT44((fVar32 * (float)((ulong)unaff_x19[0xd6] >> 0x20) + (float)(param_3 >> 0x20))
                      - (float)((ulong)*(undefined8 *)(lVar13 + 0x30) >> 0x20),
                      (fVar32 * (float)unaff_x19[0xd6] + (float)param_3) -
                      (float)*(undefined8 *)(lVar13 + 0x30));
      }
      else {
        fVar2 = *(float *)((long)dVar16 + 0x44);
        *(float *)(unaff_x19 + 0xd8) = fVar2;
        fVar3 = *(float *)((long)dVar16 + 0x48);
        lVar14 = unaff_x19[0x61];
        *(float *)((long)unaff_x19 + 0x6c4) = fVar3;
        if (lVar14 == 0) break;
        uVar4 = *(uint *)(lVar14 + 0x18);
        if (uVar4 <= uVar26) goto LAB_00e44400;
        lVar20 = lVar14 + uVar23 * 8;
        *(float *)(lVar20 + 0x20) = (fVar33 + fVar32 * (fVar34 - fVar2)) - *(float *)(lVar13 + 0x30)
        ;
        *(float *)(lVar20 + 0x24) = (fVar38 + fVar32 * (fVar35 - fVar3)) - *(float *)(lVar13 + 0x34)
        ;
        if (((uVar4 <= uVar28) ||
            (*(ulong *)(lVar14 + uVar30 * 8 + 0x20) =
                  CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                           ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                           (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar32) -
                           (float)((ulong)*(undefined8 *)(lVar13 + 0x30) >> 0x20),
                           ((float)unaff_x19[0xc9] +
                           ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) * fVar32) -
                           (float)*(undefined8 *)(lVar13 + 0x30)), uVar4 <= uVar25)) ||
           (*(ulong *)(lVar14 + uVar12 * 8 + 0x20) =
                 CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                          fVar32 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                   (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                          (float)((ulong)*(undefined8 *)(lVar13 + 0x30) >> 0x20),
                          ((float)unaff_x19[0xc9] +
                          fVar32 * ((float)unaff_x19[0xd4] - (float)unaff_x19[0xd8])) -
                          (float)*(undefined8 *)(lVar13 + 0x30)), uVar4 <= uVar22))
        goto LAB_00e44400;
        param_3 = unaff_x19[0xd8];
        *(ulong *)(lVar14 + uVar24 * 8 + 0x20) =
             CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                      fVar32 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) - (float)(param_3 >> 0x20)))
                      - (float)((ulong)*(undefined8 *)(lVar13 + 0x30) >> 0x20),
                      ((float)unaff_x19[0xc9] + fVar32 * ((float)unaff_x19[0xd6] - (float)param_3))
                      - (float)*(undefined8 *)(lVar13 + 0x30));
      }
    }
LAB_00e3dbd8:
    dVar16 = *in_stack_00000060;
    if (dVar16 == 0.0) break;
    if (*(char *)((long)dVar16 + 0x108) != '\0') {
      if (*(long *)((long)dVar16 + 0x100) == 0) break;
      if (*(char *)(*(long *)((long)dVar16 + 0x100) + 0x20) == '\0') {
        lVar13 = *unaff_x27;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_00e44400;
        lVar14 = *in_stack_00000028;
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
        *(undefined8 *)(lVar14 + uVar23 * 8 + 0x20) = *(undefined8 *)(lVar13 + uVar23 * 8 + 0x20);
        lVar13 = *unaff_x27;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_00e44400;
        lVar14 = *in_stack_00000028;
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
        *(undefined8 *)(lVar14 + (long)(int)uVar28 * 8 + 0x20) =
             *(undefined8 *)(lVar13 + (long)(int)uVar28 * 8 + 0x20);
        lVar13 = *unaff_x27;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_00e44400;
        lVar14 = *in_stack_00000028;
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
        *(undefined8 *)(lVar14 + (long)(int)uVar25 * 8 + 0x20) =
             *(undefined8 *)(lVar13 + (long)(int)uVar25 * 8 + 0x20);
        lVar13 = *unaff_x27;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_00e44400;
        lVar14 = *in_stack_00000028;
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_00e44400;
        *(undefined8 *)(lVar14 + uVar24 * 8 + 0x20) = *(undefined8 *)(lVar13 + uVar24 * 8 + 0x20);
        dVar16 = *in_stack_00000060;
        if (dVar16 == 0.0) break;
      }
    }
    dVar37 = DAT_028aa048;
    if (*(char *)((long)dVar16 + 0x108) == '\0') {
LAB_00e3dd34:
      uVar19 = *(undefined8 *)((long)dVar16 + 0xa8);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar30 = FUN_02681b9c(uVar19,0,0);
      dVar16 = *in_stack_00000060;
      if (dVar16 == 0.0) break;
      if ((uVar30 & 1) == 0) {
        uVar19 = *(undefined8 *)((long)dVar16 + 0xb0);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar30 = FUN_02681b9c(uVar19,0,0);
        dVar16 = DAT_028aa048;
        if ((uVar30 & 1) == 0) {
          if (*in_stack_00000060 == 0.0) break;
          uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar30 = FUN_02681b9c(uVar19,0,0);
          lVar13 = *unaff_x26;
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
            dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar16 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3fd48;
              }
              fVar38 = (float)(int)(fVar32 + 0.5);
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
            if (0.0 <= fVar34) {
              if (dVar16 == 0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar34 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar34 + -0.5);
            }
            if (lVar13 == 0) break;
            if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_00e44400;
            *(uint *)(lVar13 + uVar23 * 4 + 0x20) =
                 (int)fVar31 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10 |
                 (int)fVar33 << 0x18;
            fVar32 = *(float *)(unaff_x19 + 0x12);
            lVar13 = unaff_x19[0x5f];
            fVar33 = *(float *)((long)unaff_x19 + 0x94);
            fVar38 = *(float *)(unaff_x19 + 0x13);
            fVar31 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
            if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
              fVar31 = unaff_s8;
            }
            dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar16 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
            if (0.0 <= fVar34) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e40610;
              }
              fVar34 = (float)(int)(fVar34 + 0.5);
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
            if (0.0 <= fVar33) {
              if (dVar16 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar33 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar33 + -0.5);
            }
            if (lVar13 == 0) break;
            if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_00e44400;
            *(uint *)(lVar13 + (long)(int)uVar28 * 4 + 0x20) =
                 (int)fVar31 & 0xffU | ((int)fVar34 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
            fVar32 = *(float *)(unaff_x19 + 0x12);
            lVar13 = unaff_x19[0x5f];
            fVar33 = *(float *)((long)unaff_x19 + 0x94);
            fVar38 = *(float *)(unaff_x19 + 0x13);
            fVar31 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
            if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
              fVar31 = unaff_s8;
            }
            dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar16 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
            if (0.0 <= fVar34) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e40e20;
              }
              fVar34 = (float)(int)(fVar34 + 0.5);
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
            if (0.0 <= fVar33) {
              if (dVar16 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar33 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar33 + -0.5);
            }
            if (lVar13 == 0) break;
            if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_00e44400;
            *(uint *)(lVar13 + (long)(int)uVar25 * 4 + 0x20) =
                 (int)fVar31 & 0xffU | ((int)fVar34 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
            fVar31 = *(float *)((long)unaff_x19 + 0x8c);
            fVar32 = *(float *)(unaff_x19 + 0x12);
            lVar13 = unaff_x19[0x5f];
            fVar33 = *(float *)((long)unaff_x19 + 0x94);
            fVar38 = *(float *)(unaff_x19 + 0x13);
          }
          else {
            if ((*in_stack_00000060 == 0.0) ||
               (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) break;
            fVar32 = *(float *)(lVar14 + 0x18);
            fVar38 = *(float *)(lVar14 + 0x1c);
            fVar34 = *(float *)(lVar14 + 0x20);
            fVar33 = *(float *)(lVar14 + 0x24);
            fVar31 = fVar32;
            if (unaff_s10 < fVar32) {
              fVar31 = unaff_s10;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar32 < 0.0) {
              fVar31 = unaff_s8;
            }
            dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar16 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3fcc4;
              }
              fVar38 = (float)(int)(fVar32 + 0.5);
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
            if (0.0 <= fVar34) {
              if (dVar16 == 0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar34 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar34 + -0.5);
            }
            if (lVar13 == 0) break;
            if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_00e44400;
            *(uint *)(lVar13 + uVar23 * 4 + 0x20) =
                 (int)fVar31 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10 |
                 (int)fVar33 << 0x18;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar13 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar13 == 0)) break;
            fVar32 = *(float *)(lVar13 + 0x1c);
            lVar14 = *unaff_x26;
            fVar33 = *(float *)(lVar13 + 0x20);
            fVar38 = *(float *)(lVar13 + 0x24);
            fVar31 = *(float *)(lVar13 + 0x18) * 255.0;
            if (*(float *)(lVar13 + 0x18) < 0.0) {
              fVar31 = unaff_s8;
            }
            dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar16 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
            if (0.0 <= fVar34) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e4057c;
              }
              fVar34 = (float)(int)(fVar34 + 0.5);
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
            if (0.0 <= fVar33) {
              if (dVar16 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar33 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar33 + -0.5);
            }
            if (lVar14 == 0) break;
            if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
            *(uint *)(lVar14 + (long)(int)uVar28 * 4 + 0x20) =
                 (int)fVar31 & 0xffU | ((int)fVar34 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar13 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar13 == 0)) break;
            fVar32 = *(float *)(lVar13 + 0x1c);
            lVar14 = *unaff_x26;
            fVar33 = *(float *)(lVar13 + 0x20);
            fVar38 = *(float *)(lVar13 + 0x24);
            fVar31 = *(float *)(lVar13 + 0x18) * 255.0;
            if (*(float *)(lVar13 + 0x18) < 0.0) {
              fVar31 = unaff_s8;
            }
            dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar16 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
            if (0.0 <= fVar34) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e40d8c;
              }
              fVar34 = (float)(int)(fVar34 + 0.5);
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
            if (0.0 <= fVar33) {
              if (dVar16 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar33 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar33 + -0.5);
            }
            if (lVar14 == 0) break;
            if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
            *(uint *)(lVar14 + (long)(int)uVar25 * 4 + 0x20) =
                 (int)fVar31 & 0xffU | ((int)fVar34 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) break;
            fVar31 = *(float *)(lVar14 + 0x18);
            fVar32 = *(float *)(lVar14 + 0x1c);
            lVar13 = *unaff_x26;
            fVar33 = *(float *)(lVar14 + 0x20);
            fVar38 = *(float *)(lVar14 + 0x24);
          }
          fVar34 = fVar31 * 255.0;
          if (fVar31 < 0.0) {
            fVar34 = unaff_s8;
          }
          dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
          if (0.0 <= fVar34) {
            if (dVar16 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar34 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
          if (0.0 <= fVar34) {
            if (dVar16 == 0.5) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e412dc;
            }
            fVar34 = (float)(int)(fVar34 + 0.5);
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + -0.5);
          }
          param_3 = 0x3f800000;
          fVar33 = fVar38;
          if (1.0 < fVar38) {
            fVar33 = 1.0;
          }
          fVar33 = fVar33 * 255.0;
          if (fVar38 < 0.0) {
            fVar33 = unaff_s8;
          }
          dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
          if (0.0 <= fVar33) {
            if (dVar16 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar33 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar33 + -0.5);
          }
          if (lVar13 != 0) {
            if (uVar22 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar13 + uVar24 * 4 + 0x20) =
                   (int)fVar31 & 0xffU | ((int)fVar34 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
              goto LAB_00e43400;
            }
            goto LAB_00e44400;
          }
          break;
        }
        lVar13 = *unaff_x26;
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
        dVar37 = modf(dVar16,(double *)&stack0x00000070);
        if (dVar37 == 0.5) {
          fVar32 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar32 = (float)_fStack0000000000000070 + unaff_s10;
          }
        }
        else {
          fVar32 = 255.0;
        }
        dVar37 = modf(dVar16,(double *)&stack0x00000070);
        if (dVar37 == 0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + unaff_s10;
          }
        }
        else {
          fVar38 = 255.0;
        }
        dVar37 = modf(dVar16,(double *)&stack0x00000070);
        if (dVar37 == 0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar33 = 255.0;
        }
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_00e44400;
        *(uint *)(lVar13 + uVar23 * 4 + 0x20) =
             (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
             (int)fVar33 << 0x18;
        lVar13 = *unaff_x26;
        dVar37 = modf(dVar16,(double *)&stack0x00000070);
        if (dVar37 == 0.5) {
          fVar31 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar31 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar31 = 255.0;
        }
        dVar37 = modf(dVar16,(double *)&stack0x00000070);
        if (dVar37 == 0.5) {
          fVar32 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar32 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar32 = 255.0;
        }
        dVar37 = modf(dVar16,(double *)&stack0x00000070);
        if (dVar37 == 0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar38 = 255.0;
        }
        dVar37 = modf(dVar16,(double *)&stack0x00000070);
        if (dVar37 == 0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar33 = 255.0;
        }
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_00e44400;
        *(uint *)(lVar13 + (long)(int)uVar28 * 4 + 0x20) =
             (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
             (int)fVar33 << 0x18;
        lVar13 = *unaff_x26;
        dVar37 = modf(dVar16,(double *)&stack0x00000070);
        if (dVar37 == 0.5) {
          fVar31 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar31 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar31 = 255.0;
        }
        dVar37 = modf(dVar16,(double *)&stack0x00000070);
        if (dVar37 == 0.5) {
          fVar32 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar32 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar32 = 255.0;
        }
        dVar37 = modf(dVar16,(double *)&stack0x00000070);
        if (dVar37 == 0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar38 = 255.0;
        }
        dVar37 = modf(dVar16,(double *)&stack0x00000070);
        if (dVar37 == 0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar33 = 255.0;
        }
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_00e44400;
        *(uint *)(lVar13 + (long)(int)uVar25 * 4 + 0x20) =
             (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
             (int)fVar33 << 0x18;
        lVar13 = *unaff_x26;
        dVar37 = modf(dVar16,(double *)&stack0x00000070);
        if (dVar37 == 0.5) {
          fVar31 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar31 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar31 = 255.0;
        }
        dVar37 = modf(dVar16,(double *)&stack0x00000070);
        if (dVar37 == 0.5) {
          fVar32 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar32 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar32 = 255.0;
        }
        dVar37 = modf(dVar16,(double *)&stack0x00000070);
        if (dVar37 == 0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar38 = 255.0;
        }
        dVar16 = modf(dVar16,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar33 = 255.0;
        }
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_00e44400;
        *(uint *)(lVar13 + uVar24 * 4 + 0x20) =
             (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
             (int)fVar33 << 0x18;
        if (*in_stack_00000060 == 0.0) break;
        uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar30 = FUN_02681b9c(uVar19,0,0);
        if ((uVar30 & 1) == 0) goto LAB_00e43400;
        lVar13 = *unaff_x26;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_00e44400;
        puVar21 = (uint *)(lVar13 + uVar23 * 4 + 0x20);
        uVar4 = *puVar21;
        if ((*in_stack_00000060 == 0.0) ||
           (lVar13 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar13 == 0)) break;
        fVar32 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar13 + 0x18);
        fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar13 + 0x1c);
        fVar33 = *(float *)(lVar13 + 0x20);
        fVar38 = *(float *)(lVar13 + 0x24);
        fVar31 = fVar32 * 255.0;
        if (fVar32 < 0.0) {
          fVar31 = unaff_s8;
        }
        dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
        if (0.0 <= fVar31) {
          if (dVar16 == 0.5) {
            fVar31 = 1.0;
            goto LAB_00e3ede4;
          }
          fVar32 = (float)(int)(fVar31 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
        if (0.0 <= fVar31) {
          if (dVar16 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
        if (0.0 <= fVar34) {
          if (dVar16 == 0.5) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e3ffb0;
          }
          fVar34 = (float)(int)(fVar34 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
        if (0.0 <= fVar33) {
          if (dVar16 == 0.5) {
            fVar38 = 1.0;
            goto LAB_00e40174;
          }
          fVar33 = (float)(int)(fVar33 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        *puVar21 = (int)fVar32 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10
                   | (int)fVar33 << 0x18;
        lVar13 = *unaff_x26;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_00e44400;
        puVar21 = (uint *)(lVar13 + (long)(int)uVar28 * 4 + 0x20);
        uVar4 = *puVar21;
        if ((*in_stack_00000060 == 0.0) ||
           (lVar13 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar13 == 0)) break;
        fVar32 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar13 + 0x18);
        fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar13 + 0x1c);
        fVar33 = *(float *)(lVar13 + 0x20);
        fVar38 = *(float *)(lVar13 + 0x24);
        fVar31 = fVar32 * 255.0;
        if (fVar32 < 0.0) {
          fVar31 = unaff_s8;
        }
        dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
        if (0.0 <= fVar31) {
          if (dVar16 == 0.5) {
            fVar31 = 1.0;
            goto LAB_00e404dc;
          }
          fVar32 = (float)(int)(fVar31 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
        if (0.0 <= fVar31) {
          if (dVar16 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
        if (0.0 <= fVar34) {
          if (dVar16 == 0.5) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e40888;
          }
          fVar34 = (float)(int)(fVar34 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
        if (0.0 <= fVar33) {
          if (dVar16 == 0.5) {
            fVar38 = 1.0;
            goto LAB_00e40a4c;
          }
          fVar33 = (float)(int)(fVar33 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        *puVar21 = (int)fVar32 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10
                   | (int)fVar33 << 0x18;
        lVar13 = *unaff_x26;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_00e44400;
        lVar13 = lVar13 + (long)(int)uVar25 * 4;
      }
      else {
        lVar13 = *(long *)((long)dVar16 + 0xa8);
        if (lVar13 == 0) break;
        fVar32 = *(float *)(lVar13 + 0x24);
        if (fVar32 != 0.0) {
          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
        }
        plVar29 = (long *)StringLiteral_9119;
        cVar5 = *(char *)(lVar13 + 0x2c);
        lVar20 = *unaff_x26;
        lVar14 = *(long *)(lVar13 + 0x18);
        fVar31 = fVar31 * fVar32;
        if (*(int *)(lVar13 + 0x28) == 1) {
          if (cVar5 == '\0') {
            if (lVar14 == 0) break;
            fVar38 = *(float *)(lVar13 + 0x20);
            fVar33 = *(float *)((long)dVar16 + 0x84);
            fVar31 = fVar31 + (*(float *)((long)dVar16 + 0x48) * fVar38) / fVar33;
            fVar31 = fVar31 - (float)(int)fVar31;
            fVar32 = fVar31;
            if (unaff_s10 < fVar31) {
              fVar32 = unaff_s10;
            }
            fVar34 = fVar32;
            if (fVar31 < 0.0) {
              fVar34 = 0.0;
            }
            fVar34 = (float)FUN_0269ad38(fVar34,lVar14,0);
            fVar31 = fVar34;
            if (unaff_s10 < fVar34) {
              fVar31 = unaff_s10;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar34 < 0.0) {
              fVar31 = 0.0;
            }
            dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar16 == 0.5) {
                fVar31 = (float)_fStack0000000000000070 + unaff_s10;
                goto LAB_00e3eeac;
              }
              fVar34 = (float)(int)(fVar31 + 0.5);
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar16 == 0.5) {
                fVar31 = (float)_fStack0000000000000070 + unaff_s10;
                goto LAB_00e41534;
              }
              fVar32 = (float)(int)(fVar31 + 0.5);
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar16 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar16 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            if (lVar20 == 0) break;
            if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
            *(uint *)(lVar20 + uVar23 * 4 + 0x20) =
                 (int)fVar34 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
            dVar16 = *in_stack_00000060;
            if (((dVar16 == 0.0) || (lVar13 = *(long *)((long)dVar16 + 0xa8), lVar13 == 0)) ||
               (lVar14 = *(long *)(lVar13 + 0x18), lVar14 == 0)) break;
            fVar38 = *(float *)((long)dVar16 + 0x48);
            fVar33 = *(float *)((long)dVar16 + 0x84);
            lVar20 = *unaff_x26;
            fVar32 = fStack0000000000000048 * *(float *)(lVar13 + 0x24) +
                     (fVar38 * *(float *)(lVar13 + 0x20)) / fVar33;
            fVar32 = fVar32 - (float)(int)fVar32;
            fVar31 = fVar32;
            if (1.0 < fVar32) {
              fVar31 = 1.0;
            }
          }
          else {
            if (lVar14 == 0) break;
            fVar38 = *(float *)((long)dVar16 + 0x84);
            fVar33 = *(float *)(lVar13 + 0x20);
            fVar31 = fVar31 + ((*(float *)((long)dVar16 + 0x48) + fVar38) * fVar33) / fVar38;
            fVar31 = fVar31 - (float)(int)fVar31;
            fVar32 = fVar31;
            if (unaff_s10 < fVar31) {
              fVar32 = unaff_s10;
            }
            fVar34 = fVar32;
            if (fVar31 < 0.0) {
              fVar34 = 0.0;
            }
            fVar34 = (float)FUN_0269ad38(fVar34,lVar14,0);
            fVar31 = fVar34;
            if (unaff_s10 < fVar34) {
              fVar31 = unaff_s10;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar34 < 0.0) {
              fVar31 = 0.0;
            }
            dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar16 == 0.5) {
                fVar31 = (float)_fStack0000000000000070 + unaff_s10;
                goto LAB_00e3ed6c;
              }
              fVar34 = (float)(int)(fVar31 + 0.5);
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar16 == 0.5) {
                fVar31 = (float)_fStack0000000000000070 + unaff_s10;
                goto LAB_00e3f2ec;
              }
              fVar32 = (float)(int)(fVar31 + 0.5);
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar16 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
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
            dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar16 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            if (lVar20 == 0) break;
            if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
            *(uint *)(lVar20 + uVar23 * 4 + 0x20) =
                 (int)fVar34 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
            dVar16 = *in_stack_00000060;
            if (((dVar16 == 0.0) || (lVar13 = *(long *)((long)dVar16 + 0xa8), lVar13 == 0)) ||
               (lVar14 = *(long *)(lVar13 + 0x18), lVar14 == 0)) break;
            fVar38 = *(float *)((long)dVar16 + 0x84);
            fVar33 = *(float *)(lVar13 + 0x20);
            lVar20 = *unaff_x26;
            fVar32 = fStack0000000000000048 * *(float *)(lVar13 + 0x24) +
                     ((*(float *)((long)dVar16 + 0x48) + fVar38) * fVar33) / fVar38;
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
          fVar34 = (float)FUN_0269ad38(fVar34,lVar14,0);
          fVar32 = fVar34;
          if (1.0 < fVar34) {
            fVar32 = 1.0;
          }
          fVar32 = fVar32 * 255.0;
          if (fVar34 < 0.0) {
            fVar32 = 0.0;
          }
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e419a4;
            }
            fVar34 = (float)(int)(fVar32 + 0.5);
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e41a34;
            }
            fVar32 = (float)(int)(fVar32 + 0.5);
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar16 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar16 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          if (lVar20 == 0) break;
          if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_00e44400;
          *(uint *)(lVar20 + (long)(int)uVar28 * 4 + 0x20) =
               (int)fVar34 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10 |
               (int)fVar38 << 0x18;
          dVar16 = *in_stack_00000060;
          if (((dVar16 == 0.0) || (lVar13 = *(long *)((long)dVar16 + 0xa8), lVar13 == 0)) ||
             (*(long *)(lVar13 + 0x18) == 0)) break;
          fVar38 = *(float *)((long)dVar16 + 0x48);
          fVar33 = *(float *)((long)dVar16 + 0x84);
          lVar14 = *unaff_x26;
          fVar32 = fStack0000000000000048 * *(float *)(lVar13 + 0x24) +
                   (fVar38 * *(float *)(lVar13 + 0x20)) / fVar33;
          fVar32 = fVar32 - (float)(int)fVar32;
          fVar31 = fVar32;
          if (1.0 < fVar32) {
            fVar31 = 1.0;
          }
          fVar34 = fVar31;
          if (fVar32 < 0.0) {
            fVar34 = 0.0;
          }
          fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar13 + 0x18),0);
          fVar32 = fVar34;
          if (1.0 < fVar34) {
            fVar32 = 1.0;
          }
          fVar32 = fVar32 * 255.0;
          if (fVar34 < 0.0) {
            fVar32 = 0.0;
          }
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e41cd0;
            }
            fVar34 = (float)(int)(fVar32 + 0.5);
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e41d60;
            }
            fVar32 = (float)(int)(fVar32 + 0.5);
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar16 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar16 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          if (lVar14 == 0) break;
          if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
          *(uint *)(lVar14 + (long)(int)uVar25 * 4 + 0x20) =
               (int)fVar34 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10 |
               (int)fVar38 << 0x18;
          dVar16 = *in_stack_00000060;
          if (((dVar16 == 0.0) || (lVar13 = *(long *)((long)dVar16 + 0xa8), lVar13 == 0)) ||
             (*(long *)(lVar13 + 0x18) == 0)) break;
          fVar38 = *(float *)((long)dVar16 + 0x48);
          fVar33 = *(float *)((long)dVar16 + 0x84);
          lVar14 = *unaff_x26;
          fVar32 = fStack0000000000000048 * *(float *)(lVar13 + 0x24) +
                   (fVar38 * *(float *)(lVar13 + 0x20)) / fVar33;
          fVar32 = fVar32 - (float)(int)fVar32;
          fVar31 = fVar32;
          if (1.0 < fVar32) {
            fVar31 = 1.0;
          }
          fVar34 = fVar31;
          if (fVar32 < 0.0) {
            fVar34 = 0.0;
          }
          fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar13 + 0x18),0);
          fVar32 = fVar34;
          if (1.0 < fVar34) {
            fVar32 = 1.0;
          }
          param_3 = 0x437f0000;
          fVar32 = fVar32 * 255.0;
          if (fVar34 < 0.0) {
            fVar32 = 0.0;
          }
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e41ffc;
            }
            fVar34 = (float)(int)(fVar32 + 0.5);
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (fVar32 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
          if (dVar16 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            fVar32 = fVar31 + 1.0;
            goto LAB_00e425d4;
          }
          fVar31 = (float)(int)(fVar32 + 0.5);
        }
        else {
          lVar17 = *in_stack_00000038;
          if (lVar17 == 0) break;
          if (*(uint *)(lVar17 + 0x18) <= uVar26) goto LAB_00e44400;
          if (lVar14 == 0) break;
          fVar38 = *(float *)(lVar17 + uVar23 * unaff_x24 + 0x20);
          fVar33 = *(float *)((long)dVar16 + 0x84);
          fVar31 = fVar31 + (fVar38 * *(float *)(lVar13 + 0x20)) / fVar33;
          fVar31 = fVar31 - (float)(int)fVar31;
          fVar32 = fVar31;
          if (unaff_s10 < fVar31) {
            fVar32 = unaff_s10;
          }
          fVar34 = fVar32;
          if (fVar31 < 0.0) {
            fVar34 = 0.0;
          }
          fVar34 = (float)FUN_0269ad38(fVar34,lVar14,0);
          fVar31 = fVar34;
          if (unaff_s10 < fVar34) {
            fVar31 = unaff_s10;
          }
          fVar31 = fVar31 * 255.0;
          if (fVar34 < 0.0) {
            fVar31 = 0.0;
          }
          dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar16 == 0.5) {
              fVar31 = (float)_fStack0000000000000070 + unaff_s10;
              goto LAB_00e3e0b0;
            }
            fVar34 = (float)(int)(fVar31 + 0.5);
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar16 == 0.5) {
              fVar31 = (float)_fStack0000000000000070 + unaff_s10;
              goto LAB_00e3ee80;
            }
            fVar32 = (float)(int)(fVar31 + 0.5);
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar16 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar16 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          if (lVar20 == 0) break;
          fVar33 = 1.0;
          if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
          *(uint *)(lVar20 + uVar23 * 4 + 0x20) =
               (int)fVar34 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10 |
               (int)fVar38 << 0x18;
          plVar29 = (long *)StringLiteral_9119;
          dVar16 = *in_stack_00000060;
          if (((dVar16 == 0.0) || (lVar13 = *(long *)((long)dVar16 + 0xa8), lVar13 == 0)) ||
             (lVar14 = *in_stack_00000038, lVar14 == 0)) break;
          lVar17 = *unaff_x26;
          lVar20 = *(long *)(lVar13 + 0x18);
          fVar31 = fStack0000000000000048 * *(float *)(lVar13 + 0x24);
          if (cVar5 != '\0') {
            if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
            if (lVar20 != 0) {
              fVar38 = *(float *)(lVar14 + (int)uVar28 * unaff_x24 + 0x20);
              fVar34 = *(float *)((long)dVar16 + 0x84);
              fVar31 = fVar31 + (fVar38 * *(float *)(lVar13 + 0x20)) / fVar34;
              fVar31 = fVar31 - (float)(int)fVar31;
              fVar32 = fVar31;
              if (1.0 < fVar31) {
                fVar32 = fVar33;
              }
              fVar35 = fVar32;
              if (fVar31 < 0.0) {
                fVar35 = 0.0;
              }
              fVar35 = (float)FUN_0269ad38(fVar35,lVar20,0);
              fVar31 = fVar35;
              if (1.0 < fVar35) {
                fVar31 = fVar33;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar35 < 0.0) {
                fVar31 = 0.0;
              }
              dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar16 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3f234;
                }
                fVar33 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar16 == -0.5) {
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
              dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar16 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3f594;
                }
                fVar32 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar16 == -0.5) {
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
              dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar16 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
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
              dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              if (lVar17 != 0) {
                if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_00e44400;
                *(uint *)(lVar17 + (long)(int)uVar28 * 4 + 0x20) =
                     (int)fVar33 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                dVar16 = *in_stack_00000060;
                if (((dVar16 != 0.0) && (lVar13 = *(long *)((long)dVar16 + 0xa8), lVar13 != 0)) &&
                   (lVar14 = *in_stack_00000038, lVar14 != 0)) {
                  if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
                  if (*(long *)(lVar13 + 0x18) != 0) {
                    fVar38 = *(float *)(lVar14 + (int)uVar25 * unaff_x24 + 0x20);
                    fVar33 = *(float *)((long)dVar16 + 0x84);
                    lVar14 = *unaff_x26;
                    fVar32 = fStack0000000000000048 * *(float *)(lVar13 + 0x24) +
                             (fVar38 * *(float *)(lVar13 + 0x20)) / fVar33;
                    fVar32 = fVar32 - (float)(int)fVar32;
                    fVar31 = fVar32;
                    if (1.0 < fVar32) {
                      fVar31 = 1.0;
                    }
                    fVar34 = fVar31;
                    if (fVar32 < 0.0) {
                      fVar34 = 0.0;
                    }
                    fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar13 + 0x18),0);
                    fVar32 = fVar34;
                    if (1.0 < fVar34) {
                      fVar32 = 1.0;
                    }
                    fVar32 = fVar32 * 255.0;
                    if (fVar34 < 0.0) {
                      fVar32 = 0.0;
                    }
                    dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
                    if (0.0 <= fVar32) {
                      if (dVar16 == 0.5) {
                        fVar32 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3f858;
                      }
                      fVar34 = (float)(int)(fVar32 + 0.5);
                    }
                    else if (dVar16 == -0.5) {
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
                    dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
                    if (0.0 <= fVar32) {
                      if (dVar16 == 0.5) {
                        fVar31 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3f8e8;
                      }
                      fVar32 = (float)(int)(fVar32 + 0.5);
                    }
                    else if (dVar16 == -0.5) {
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
                    dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
                    if (0.0 <= fVar31) {
                      if (dVar16 == 0.5) {
                        fVar31 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar31 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar31 = (float)(int)(fVar31 + 0.5);
                      }
                    }
                    else if (dVar16 == -0.5) {
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
                    dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
                    plVar29 = (long *)StringLiteral_9119;
                    if (0.0 <= fVar38) {
                      if (dVar16 == 0.5) {
                        fVar38 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar38 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar38 = (float)(int)(fVar38 + 0.5);
                      }
                    }
                    else if (dVar16 == -0.5) {
                      fVar38 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar38 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar38 = (float)(int)(fVar38 + -0.5);
                    }
                    if (lVar14 != 0) {
                      if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
                      *(uint *)(lVar14 + (long)(int)uVar25 * 4 + 0x20) =
                           (int)fVar34 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                           ((int)fVar31 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                      dVar16 = *in_stack_00000060;
                      if (((dVar16 != 0.0) && (lVar13 = *(long *)((long)dVar16 + 0xa8), lVar13 != 0)
                          ) && (lVar14 = *in_stack_00000038, lVar14 != 0)) {
                        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_00e44400;
                        if (*(long *)(lVar13 + 0x18) != 0) {
                          fVar38 = *(float *)(lVar14 + uVar24 * unaff_x24 + 0x20);
                          fVar33 = *(float *)((long)dVar16 + 0x84);
                          lVar14 = *unaff_x26;
                          fVar32 = fStack0000000000000048 * *(float *)(lVar13 + 0x24) +
                                   (fVar38 * *(float *)(lVar13 + 0x20)) / fVar33;
                          fVar32 = fVar32 - (float)(int)fVar32;
                          fVar31 = fVar32;
                          if (1.0 < fVar32) {
                            fVar31 = 1.0;
                          }
                          fVar34 = fVar31;
                          if (fVar32 < 0.0) {
                            fVar34 = 0.0;
                          }
                          fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar13 + 0x18),0);
                          fVar32 = fVar34;
                          if (1.0 < fVar34) {
                            fVar32 = 1.0;
                          }
                          param_3 = 0x437f0000;
                          fVar32 = fVar32 * 255.0;
                          if (fVar34 < 0.0) {
                            fVar32 = 0.0;
                          }
                          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
                          if (0.0 <= fVar32) {
                            if (dVar16 == 0.5) {
                              fVar32 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e3fbd0;
                            }
                            fVar34 = (float)(int)(fVar32 + 0.5);
                          }
                          else if (dVar16 == -0.5) {
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
                      }
                    }
                  }
                }
              }
            }
            break;
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          if (lVar20 == 0) break;
          fVar38 = *(float *)(lVar14 + uVar23 * unaff_x24 + 0x20);
          fVar34 = *(float *)((long)dVar16 + 0x84);
          fVar31 = fVar31 + (fVar38 * *(float *)(lVar13 + 0x20)) / fVar34;
          fVar31 = fVar31 - (float)(int)fVar31;
          fVar32 = fVar31;
          if (1.0 < fVar31) {
            fVar32 = fVar33;
          }
          fVar35 = fVar32;
          if (fVar31 < 0.0) {
            fVar35 = 0.0;
          }
          fVar35 = (float)FUN_0269ad38(fVar35,lVar20,0);
          fVar31 = fVar35;
          if (1.0 < fVar35) {
            fVar31 = fVar33;
          }
          fVar31 = fVar31 * 255.0;
          if (fVar35 < 0.0) {
            fVar31 = 0.0;
          }
          dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar16 == 0.5) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e3f25c;
            }
            fVar33 = (float)(int)(fVar31 + 0.5);
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar16 == 0.5) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e415c4;
            }
            fVar32 = (float)(int)(fVar31 + 0.5);
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar16 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar16 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          if (lVar17 == 0) break;
          if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_00e44400;
          *(uint *)(lVar17 + (long)(int)uVar28 * 4 + 0x20) =
               (int)fVar33 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10 |
               (int)fVar38 << 0x18;
          dVar16 = *in_stack_00000060;
          if (((dVar16 == 0.0) || (lVar13 = *(long *)((long)dVar16 + 0xa8), lVar13 == 0)) ||
             (lVar14 = *in_stack_00000038, lVar14 == 0)) break;
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          if (*(long *)(lVar13 + 0x18) == 0) break;
          fVar38 = *(float *)(lVar14 + uVar23 * unaff_x24 + 0x20);
          fVar33 = *(float *)((long)dVar16 + 0x84);
          lVar14 = *unaff_x26;
          fVar32 = fStack0000000000000048 * *(float *)(lVar13 + 0x24) +
                   (fVar38 * *(float *)(lVar13 + 0x20)) / fVar33;
          fVar32 = fVar32 - (float)(int)fVar32;
          fVar31 = fVar32;
          if (1.0 < fVar32) {
            fVar31 = 1.0;
          }
          fVar34 = fVar31;
          if (fVar32 < 0.0) {
            fVar34 = 0.0;
          }
          fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar13 + 0x18),0);
          fVar32 = fVar34;
          if (1.0 < fVar34) {
            fVar32 = 1.0;
          }
          fVar32 = fVar32 * 255.0;
          if (fVar34 < 0.0) {
            fVar32 = 0.0;
          }
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e421fc;
            }
            fVar34 = (float)(int)(fVar32 + 0.5);
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e4228c;
            }
            fVar32 = (float)(int)(fVar32 + 0.5);
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar16 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar16 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          if (lVar14 == 0) break;
          if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
          *(uint *)(lVar14 + (long)(int)uVar25 * 4 + 0x20) =
               (int)fVar34 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10 |
               (int)fVar38 << 0x18;
          dVar16 = *in_stack_00000060;
          if (((dVar16 == 0.0) || (lVar13 = *(long *)((long)dVar16 + 0xa8), lVar13 == 0)) ||
             (lVar14 = *in_stack_00000038, lVar14 == 0)) break;
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          if (*(long *)(lVar13 + 0x18) == 0) break;
          fVar38 = *(float *)(lVar14 + uVar23 * unaff_x24 + 0x20);
          fVar33 = *(float *)((long)dVar16 + 0x84);
          lVar14 = *unaff_x26;
          fVar32 = fStack0000000000000048 * *(float *)(lVar13 + 0x24) +
                   (fVar38 * *(float *)(lVar13 + 0x20)) / fVar33;
          fVar32 = fVar32 - (float)(int)fVar32;
          fVar31 = fVar32;
          if (1.0 < fVar32) {
            fVar31 = 1.0;
          }
          fVar34 = fVar31;
          if (fVar32 < 0.0) {
            fVar34 = 0.0;
          }
          fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar13 + 0x18),0);
          fVar32 = fVar34;
          if (1.0 < fVar34) {
            fVar32 = 1.0;
          }
          param_3 = 0x437f0000;
          fVar32 = fVar32 * 255.0;
          if (fVar34 < 0.0) {
            fVar32 = 0.0;
          }
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42560;
            }
            fVar34 = (float)(int)(fVar32 + 0.5);
          }
          else if (dVar16 == -0.5) {
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
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) goto LAB_00e425b8;
LAB_00e4204c:
          if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
        if (0.0 <= fVar32) {
          if (dVar16 == 0.5) {
            fVar32 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e42654;
          }
          fVar38 = (float)(int)(fVar32 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
        if (0.0 <= fVar32) {
          if (dVar16 == 0.5) {
            fVar32 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e426e4;
          }
          fVar33 = (float)(int)(fVar32 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_00e44400;
        *(uint *)(lVar14 + uVar24 * 4 + 0x20) =
             (int)fVar34 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
             (int)fVar33 << 0x18;
        if (*in_stack_00000060 == 0.0) break;
        uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
        unaff_d14 = _fStack0000000000000048 & 0xffffffff;
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar30 = FUN_02681b9c(uVar19,0,0);
        if ((uVar30 & 1) == 0) goto LAB_00e43400;
        lVar13 = *unaff_x26;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_00e44400;
        puVar21 = (uint *)(lVar13 + uVar23 * 4 + 0x20);
        uVar4 = *puVar21;
        if ((*in_stack_00000060 == 0.0) ||
           (lVar13 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar13 == 0)) break;
        fVar31 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar13 + 0x18);
        fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar13 + 0x1c);
        fVar33 = *(float *)(lVar13 + 0x20);
        fVar38 = *(float *)(lVar13 + 0x24);
        fVar32 = fVar31 * 255.0;
        if (fVar31 < 0.0) {
          fVar32 = 0.0;
        }
        dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
        if (0.0 <= fVar32) {
          if (dVar16 == 0.5) {
            fVar31 = 1.0;
            goto LAB_00e4287c;
          }
          fVar32 = (float)(int)(fVar32 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
        if (0.0 <= fVar31) {
          if (dVar16 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
        if (0.0 <= fVar34) {
          if (dVar16 == 0.5) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e429c8;
          }
          fVar34 = (float)(int)(fVar34 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
        if (0.0 <= fVar33) {
          if (dVar16 == 0.5) {
            fVar38 = 1.0;
            goto LAB_00e42a44;
          }
          fVar33 = (float)(int)(fVar33 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        *puVar21 = (int)fVar32 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10
                   | (int)fVar33 << 0x18;
        lVar13 = *unaff_x26;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_00e44400;
        puVar21 = (uint *)(lVar13 + (long)(int)uVar28 * 4 + 0x20);
        uVar4 = *puVar21;
        if ((*in_stack_00000060 == 0.0) ||
           (lVar13 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar13 == 0)) break;
        fVar31 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar13 + 0x18);
        fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar13 + 0x1c);
        fVar33 = *(float *)(lVar13 + 0x20);
        fVar38 = *(float *)(lVar13 + 0x24);
        fVar32 = fVar31 * 255.0;
        if (fVar31 < 0.0) {
          fVar32 = 0.0;
        }
        dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
        if (0.0 <= fVar32) {
          if (dVar16 == 0.5) {
            fVar31 = 1.0;
            goto LAB_00e42b80;
          }
          fVar32 = (float)(int)(fVar32 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
        if (0.0 <= fVar31) {
          if (dVar16 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
        if (0.0 <= fVar34) {
          if (dVar16 == 0.5) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e42ccc;
          }
          fVar34 = (float)(int)(fVar34 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
        if (0.0 <= fVar33) {
          if (dVar16 == 0.5) {
            fVar38 = 1.0;
            goto LAB_00e42d48;
          }
          fVar33 = (float)(int)(fVar33 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        *puVar21 = (int)fVar32 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10
                   | (int)fVar33 << 0x18;
        lVar13 = *unaff_x26;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_00e44400;
        lVar13 = lVar13 + (long)(int)uVar25 * 4;
      }
      uVar4 = *(uint *)(lVar13 + 0x20);
      if ((*in_stack_00000060 == 0.0) ||
         (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) break;
      fVar32 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar14 + 0x18);
      fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar14 + 0x1c);
      fVar33 = *(float *)(lVar14 + 0x20);
      fVar38 = *(float *)(lVar14 + 0x24);
      fVar31 = fVar32 * 255.0;
      if (fVar32 < 0.0) {
        fVar31 = unaff_s8;
      }
      dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
      if (0.0 <= fVar31) {
        if (dVar16 == 0.5) {
          fVar31 = 1.0;
          goto FUN_00e42e84;
        }
        fVar32 = (float)(int)(fVar31 + 0.5);
      }
      else if (dVar16 == -0.5) {
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
      dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
      if (0.0 <= fVar31) {
        if (dVar16 == 0.5) {
          fVar31 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar31 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar31 = (float)(int)(fVar31 + 0.5);
        }
      }
      else if (dVar16 == -0.5) {
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
      dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
      if (0.0 <= fVar34) {
        if (dVar16 == 0.5) {
          fVar33 = (float)_fStack0000000000000070 + 1.0;
          goto LAB_00e42fd0;
        }
        fVar34 = (float)(int)(fVar34 + 0.5);
      }
      else if (dVar16 == -0.5) {
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
      dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
      if (0.0 <= fVar33) {
        if (dVar16 == 0.5) {
          fVar38 = 1.0;
          goto LAB_00e4304c;
        }
        fVar33 = (float)(int)(fVar33 + 0.5);
      }
      else if (dVar16 == -0.5) {
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
      *(uint *)(lVar13 + 0x20) =
           (int)fVar32 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
           (int)fVar33 << 0x18;
      lVar13 = *unaff_x26;
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_00e44400;
      puVar21 = (uint *)(lVar13 + uVar24 * 4 + 0x20);
      uVar4 = *puVar21;
      if ((*in_stack_00000060 == 0.0) ||
         (lVar13 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar13 == 0)) break;
      fVar32 = (float)(uVar4 & 0xff) / 255.0;
      param_3 = (ulong)(uint)fVar32;
      fVar32 = fVar32 * *(float *)(lVar13 + 0x18);
      fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar13 + 0x1c);
      fVar33 = *(float *)(lVar13 + 0x20);
      fVar38 = *(float *)(lVar13 + 0x24);
      fVar31 = fVar32 * 255.0;
      if (fVar32 < 0.0) {
        fVar31 = unaff_s8;
      }
      dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
      if (0.0 <= fVar31) {
        if (dVar16 == 0.5) {
          fVar31 = 1.0;
          goto LAB_00e4318c;
        }
        fVar32 = (float)(int)(fVar31 + 0.5);
      }
      else if (dVar16 == -0.5) {
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
      dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
      if (0.0 <= fVar31) {
        if (dVar16 == 0.5) {
          fVar31 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar31 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar31 = (float)(int)(fVar31 + 0.5);
        }
      }
      else if (dVar16 == -0.5) {
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
      dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
      if (0.0 <= fVar34) {
        if (dVar16 == 0.5) {
          fVar33 = (float)_fStack0000000000000070 + 1.0;
          goto LAB_00e432e0;
        }
        fVar34 = (float)(int)(fVar34 + 0.5);
      }
      else if (dVar16 == -0.5) {
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
      dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
      if (0.0 <= fVar33) {
        if (dVar16 == 0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar38 = (float)(int)(fVar33 + 0.5);
        }
      }
      else if (dVar16 == -0.5) {
        fVar38 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar38 = (float)_fStack0000000000000070 + -1.0;
        }
      }
      else {
        fVar38 = (float)(int)(fVar33 + -0.5);
      }
      unaff_d14 = _fStack0000000000000048 & 0xffffffff;
      *puVar21 = (int)fVar32 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
      unaff_s15 = in_stack_00000008._4_4_;
    }
    else {
      if (*(long *)((long)dVar16 + 0x100) == 0) break;
      if (*(char *)(*(long *)((long)dVar16 + 0x100) + 0x20) != '\0') goto LAB_00e3dd34;
      lVar13 = *unaff_x26;
      dVar16 = modf(DAT_028aa048,(double *)&stack0x00000070);
      if (dVar16 == 0.5) {
        fVar31 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar31 = (float)_fStack0000000000000070 + unaff_s10;
        }
      }
      else {
        fVar31 = 255.0;
      }
      dVar16 = modf(dVar37,(double *)&stack0x00000070);
      if (dVar16 == 0.5) {
        fVar32 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar32 = (float)_fStack0000000000000070 + unaff_s10;
        }
      }
      else {
        fVar32 = 255.0;
      }
      dVar16 = modf(dVar37,(double *)&stack0x00000070);
      if (dVar16 == 0.5) {
        fVar38 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar38 = (float)_fStack0000000000000070 + unaff_s10;
        }
      }
      else {
        fVar38 = 255.0;
      }
      dVar16 = modf(dVar37,(double *)&stack0x00000070);
      if (dVar16 == 0.5) {
        fVar33 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar33 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar33 = 255.0;
      }
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_00e44400;
      *(uint *)(lVar13 + uVar23 * 4 + 0x20) =
           (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
           (int)fVar33 << 0x18;
      lVar13 = *unaff_x26;
      dVar16 = modf(dVar37,(double *)&stack0x00000070);
      if (dVar16 == 0.5) {
        fVar31 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar31 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar31 = 255.0;
      }
      dVar16 = modf(dVar37,(double *)&stack0x00000070);
      if (dVar16 == 0.5) {
        fVar32 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar32 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar32 = 255.0;
      }
      dVar16 = modf(dVar37,(double *)&stack0x00000070);
      if (dVar16 == 0.5) {
        fVar38 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar38 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar38 = 255.0;
      }
      dVar16 = modf(dVar37,(double *)&stack0x00000070);
      if (dVar16 == 0.5) {
        fVar33 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar33 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar33 = 255.0;
      }
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_00e44400;
      *(uint *)(lVar13 + (long)(int)uVar28 * 4 + 0x20) =
           (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
           (int)fVar33 << 0x18;
      lVar13 = *unaff_x26;
      dVar16 = modf(dVar37,(double *)&stack0x00000070);
      if (dVar16 == 0.5) {
        fVar31 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar31 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar31 = 255.0;
      }
      dVar16 = modf(dVar37,(double *)&stack0x00000070);
      if (dVar16 == 0.5) {
        fVar32 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar32 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar32 = 255.0;
      }
      dVar16 = modf(dVar37,(double *)&stack0x00000070);
      if (dVar16 == 0.5) {
        fVar38 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar38 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar38 = 255.0;
      }
      dVar16 = modf(dVar37,(double *)&stack0x00000070);
      if (dVar16 == 0.5) {
        fVar33 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar33 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar33 = 255.0;
      }
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_00e44400;
      *(uint *)(lVar13 + (long)(int)uVar25 * 4 + 0x20) =
           (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
           (int)fVar33 << 0x18;
      lVar13 = *unaff_x26;
      dVar16 = modf(dVar37,(double *)&stack0x00000070);
      if (dVar16 == 0.5) {
        fVar31 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar31 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar31 = 255.0;
      }
      dVar16 = modf(dVar37,(double *)&stack0x00000070);
      if (dVar16 == 0.5) {
        fVar32 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar32 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar32 = 255.0;
      }
      dVar16 = modf(dVar37,(double *)&stack0x00000070);
      if (dVar16 == 0.5) {
        fVar38 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar38 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar38 = 255.0;
      }
      dVar16 = modf(dVar37,(double *)&stack0x00000070);
      if (dVar16 == 0.5) {
        fVar33 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar33 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar33 = 255.0;
      }
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_00e44400;
      *(uint *)(lVar13 + uVar24 * 4 + 0x20) =
           (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
           (int)fVar33 << 0x18;
    }
LAB_00e43400:
    lVar13 = *unaff_x26;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_00e44400;
    lVar13 = lVar13 + uVar23 * 4;
    fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar13 + 0x23));
    *(char *)(lVar13 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar31);
    lVar13 = unaff_x19[0x5f];
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_00e44400;
    lVar13 = lVar13 + (long)(int)uVar28 * 4;
    fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar13 + 0x23));
    *(char *)(lVar13 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar31);
    lVar13 = unaff_x19[0x5f];
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_00e44400;
    lVar13 = lVar13 + (long)(int)uVar25 * 4;
    fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar13 + 0x23));
    *(char *)(lVar13 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar31);
    lVar13 = unaff_x19[0x5f];
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_00e44400;
    lVar13 = lVar13 + uVar24 * 4;
    uVar30 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
    fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar13 + 0x23));
    *(char *)(lVar13 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar31);
    uVar12 = FUN_00e3703c();
    if ((uVar12 & 1) == 0) {
      lVar13 = *plVar29;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar13 = *plVar29;
      }
      if (*(int *)(*(long *)(lVar13 + 0xb8) + 0x20) == 1) {
        lVar13 = *unaff_x26;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_00e44400;
        puVar21 = (uint *)(lVar13 + uVar23 * 4 + 0x20);
        uVar4 = *puVar21;
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
        dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
        if (0.0 <= fVar31) {
          if (dVar16 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
        if (0.0 <= fVar32) {
          if (dVar16 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
        if (0.0 <= fVar38) {
          if (dVar16 == 0.5) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e43744;
          }
          fVar33 = (float)(int)(fVar38 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
        if (0.0 <= fVar34) {
          if (dVar16 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar34 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar38 = (float)(int)(fVar34 + -0.5);
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_00e44400;
        *puVar21 = (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
        lVar13 = *in_stack_00000030;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_00e44400;
        puVar21 = (uint *)(lVar13 + (long)(int)uVar28 * 4 + 0x20);
        uVar26 = *puVar21;
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
        dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
        if (0.0 <= fVar31) {
          if (dVar16 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
        if (0.0 <= fVar32) {
          if (dVar16 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
        if (0.0 <= fVar38) {
          if (dVar16 == 0.5) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e43a84;
          }
          fVar33 = (float)(int)(fVar38 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
        if (0.0 <= fVar34) {
          if (dVar16 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar34 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar38 = (float)(int)(fVar34 + -0.5);
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_00e44400;
        *puVar21 = (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
        lVar13 = *in_stack_00000030;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_00e44400;
        puVar21 = (uint *)(lVar13 + (long)(int)uVar25 * 4 + 0x20);
        uVar26 = *puVar21;
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
        dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
        if (0.0 <= fVar31) {
          if (dVar16 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
        if (0.0 <= fVar32) {
          if (dVar16 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
        if (0.0 <= fVar38) {
          if (dVar16 == 0.5) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e43dbc;
          }
          fVar33 = (float)(int)(fVar38 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
        if (0.0 <= fVar34) {
          if (dVar16 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar34 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar38 = (float)(int)(fVar34 + -0.5);
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_00e44400;
        *puVar21 = (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
        lVar13 = *in_stack_00000030;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_00e44400;
        puVar21 = (uint *)(lVar13 + uVar24 * 4 + 0x20);
        uVar26 = *puVar21;
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
        dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
        if (0.0 <= fVar31) {
          if (dVar16 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
          fVar31 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar31 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar31 = (float)(int)(fVar31 + -0.5);
        }
        param_3 = 0x3f800000;
        fVar32 = fVar38;
        if (1.0 < fVar38) {
          fVar32 = 1.0;
        }
        fVar32 = fVar32 * 255.0;
        if (fVar38 < 0.0) {
          fVar32 = unaff_s8;
        }
        dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
        if (0.0 <= fVar32) {
          if (dVar16 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
        if (0.0 <= fVar38) {
          if (dVar16 == 0.5) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e440f4;
          }
          fVar33 = (float)(int)(fVar38 + 0.5);
        }
        else if (dVar16 == -0.5) {
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
        dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
        if (0.0 <= fVar34) {
          uVar30 = 0;
          if (dVar16 == 0.5) {
            fVar38 = 1.0;
            goto LAB_00e44170;
          }
          fVar34 = (float)(int)(fVar34 + 0.5);
        }
        else {
          uVar30 = 0;
          if (dVar16 == -0.5) {
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
        if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_00e44400;
        *puVar21 = (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10
                   | (int)fVar34 << 0x18;
        unaff_x26 = in_stack_00000030;
      }
    }
    puVar7 = StringLiteral_4992;
    puVar6 = OVREyeGaze_TypeInfo;
    in_stack_00000050 = in_stack_00000050 + 1;
    if (in_stack_00000050 == in_stack_00000018) {
      if (((unaff_x19[0x58] == 0) || (iVar9 = FUN_026c82cc(unaff_x19[0x58],0), iVar9 < 1)) &&
         (unaff_x19[0x59] == 0)) goto LAB_00e443b0;
      puVar6 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
      if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0)) break;
      iVar9 = *(int *)(unaff_x19[0xf] + 0x10);
      plVar29 = unaff_x19 + 0xcb;
      if (iVar9 != *(int *)(unaff_x19[0xcb] + 0x18)) {
        FUN_010afdd4(plVar29,iVar9,
                     *(undefined8 *)Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
      }
      if ((unaff_x19[0xcc] == 0) || (lVar13 = unaff_x19[0xf], lVar13 == 0)) break;
      plVar10 = unaff_x19 + 0xcc;
      if (*(int *)(lVar13 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
        FUN_010afdd4(plVar10,*(int *)(lVar13 + 0x10),*(undefined8 *)puVar6);
        lVar13 = unaff_x19[0xf];
        if (lVar13 == 0) break;
      }
      uVar26 = *(uint *)(lVar13 + 0x10);
      if ((int)uVar26 < 1) goto LAB_00e44358;
      uVar23 = 0;
      lVar13 = 0x20;
      goto LAB_00e442cc;
    }
    if (unaff_x19[9] == 0) break;
    FUN_0132138c(unaff_x19[9],in_stack_00000050 & 0xffffffff,&stack0x00000070,
                 *(undefined8 *)StringLiteral_4992);
    *in_stack_00000060 = _fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) break;
    iVar9 = FUN_00e4e99c();
    if (iVar9 <= *(int *)((long)unaff_x19 + 0x38c)) {
      if (*in_stack_00000060 == 0.0) break;
      *(undefined1 *)((long)*in_stack_00000060 + 0x165) = 1;
    }
    if (*(float *)(unaff_x19 + 0x14) == 0.0) {
      FUN_00e45d2c();
    }
    *(undefined2 *)(unaff_x19 + 0xdc) = 0;
    if (*(char *)((long)unaff_x19 + 0xf6) == '\0') {
      uVar23 = FUN_0269e56c(0);
      if (((fStack000000000000004c == 0.0) || ((uVar23 & 1) == 0)) ||
         (1 < (int)unaff_x19[0x2a] - 3U)) {
        if (unaff_x19[0xf] == 0) break;
        iVar9 = *(int *)(unaff_x19[0xf] + 0x10) + -1;
        *(int *)((long)unaff_x19 + 0x38c) = iVar9;
        if ((unaff_x19[9] == 0) ||
           (FUN_0132138c(unaff_x19[9],iVar9,&stack0x00000070,*(undefined8 *)puVar7),
           _fStack0000000000000070 == 0.0)) break;
        *(undefined4 *)(unaff_x19 + 0x4a) = *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
        if ((unaff_x19[9] == 0) ||
           (FUN_0132138c(unaff_x19[9],*(undefined4 *)((long)unaff_x19 + 0x38c),&stack0x00000070,
                         *(undefined8 *)puVar7), _fStack0000000000000070 == 0.0)) break;
        *(float *)((long)unaff_x19 + 0x254) =
             *(float *)((long)_fStack0000000000000070 + 0x48) + *(float *)((long)unaff_x19 + 0x50c);
        *(undefined4 *)(unaff_x19 + 0x4b) = *(undefined4 *)((long)unaff_x19 + 0x18c);
      }
    }
    else {
      dVar16 = *in_stack_00000060;
      if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x78) == 0)) break;
      fVar32 = *(float *)(*(long *)((long)dVar16 + 0x78) + 0x18);
      fVar31 = DAT_028aa034;
      if (fVar32 != 0.0) {
        fVar31 = fVar32;
      }
      if ((0.0 < (unaff_s15 - *(float *)((long)dVar16 + 100)) / fVar31) &&
         (*(char *)((long)dVar16 + 0x165) == '\0')) {
        *(undefined1 *)((long)dVar16 + 0x165) = 1;
        *(undefined1 *)((long)unaff_x19 + 0x6e1) = 1;
        if (unaff_x19[0xf] == 0) break;
        sVar8 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
        if (sVar8 != 0x200b) {
          *(undefined1 *)(unaff_x19 + 0xdc) = 1;
          if (unaff_x19[0xf] == 0) break;
          sVar8 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
          if (sVar8 != 0x20) {
            if (unaff_x19[0xf] == 0) break;
            sVar8 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
            if (sVar8 != 10) {
              lVar13 = unaff_x19[0xca];
              if (lVar13 == 0) break;
              fVar38 = *(float *)(lVar13 + 0x48);
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
              fVar32 = (float)FUN_00e5ef30(*(undefined4 *)((long)unaff_x19 + 0x134),lVar13,0);
              fVar32 = fVar32 + *(float *)(unaff_x19 + 0xa1) + *(float *)((long)unaff_x19 + 0x55c);
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
      lVar13 = unaff_x19[0x55];
      if (lVar13 != 0) {
        (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
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
        lVar13 = unaff_x19[0xc];
        if (lVar13 == 0) break;
        if (0 < *(int *)(lVar13 + 0x18)) {
          iVar9 = 0;
          do {
            FUN_0132138c(lVar13,iVar9,&stack0x00000070,*(undefined8 *)puVar6);
            *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
            fVar31 = fStack0000000000000070;
            if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <=
                fStack0000000000000070) break;
            lVar13 = unaff_x19[0xc];
            if (lVar13 == 0) goto LAB_00e443fc;
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(lVar13 + 0x18));
        }
      }
      else {
        lVar13 = unaff_x19[0xb];
        if (lVar13 == 0) break;
        iVar9 = 0;
        fVar31 = 0.0;
        while (iVar9 < *(int *)(lVar13 + 0x18)) {
          FUN_0132138c(lVar13,iVar9,&stack0x00000070,*(undefined8 *)puVar6);
          fVar31 = fVar31 + fStack0000000000000070;
          *(float *)((long)unaff_x19 + 0x634) = fVar31;
          if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <= fVar31) break;
          lVar13 = unaff_x19[0xb];
          iVar9 = iVar9 + 1;
          if (lVar13 == 0) goto LAB_00e443fc;
        }
      }
    }
    *(float *)(unaff_x19 + 0xc6) = *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
    if (unaff_x19[9] == 0) break;
    fVar32 = *(float *)((long)unaff_x19 + 0x53c);
    FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar7);
    if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0)) break;
    fVar38 = *(float *)((long)_fStack0000000000000070 + 0x5c);
    FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar7);
    if (_fStack0000000000000070 == 0.0) break;
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
    if (unaff_x19[0xca] == 0) break;
    uVar19 = *(undefined8 *)(unaff_x19[0xca] + 200);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar23 = FUN_02681b9c(uVar19,0,0);
    if ((uVar23 & 1) != 0) {
      lVar13 = __start_il2cpp();
      if (lVar13 == 0) break;
      if ((*(char *)(lVar13 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
        *(undefined1 *)(unaff_x19 + 0x2e) = 1;
        if (unaff_x19[0xca] == 0) break;
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
    lVar14 = *(long *)puVar6;
    uVar36 = *(undefined4 *)(*(undefined8 **)(lVar14 + 0xb8) + 1);
    *in_stack_00000040 = **(undefined8 **)(lVar14 + 0xb8);
    *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar36;
    lVar13 = (*(long **)(lVar14 + 0xb8))[1];
    unaff_x19[0xc0] = **(long **)(lVar14 + 0xb8);
    *(int *)(unaff_x19 + 0xc1) = (int)lVar13;
    uVar36 = *(undefined4 *)(*(undefined8 **)(lVar14 + 0xb8) + 1);
    in_stack_00000040[3] = **(undefined8 **)(lVar14 + 0xb8);
    *(undefined4 *)((long)unaff_x19 + 0x614) = uVar36;
    lVar13 = (*(long **)(lVar14 + 0xb8))[1];
    unaff_x19[0xc3] = **(long **)(lVar14 + 0xb8);
    *(int *)(unaff_x19 + 0xc4) = (int)lVar13;
    uVar36 = *(undefined4 *)(*(undefined8 **)(lVar14 + 0xb8) + 1);
    in_stack_00000040[6] = **(undefined8 **)(lVar14 + 0xb8);
    *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar36;
    if (unaff_x19[0xca] == 0) break;
    uVar19 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar23 = FUN_02681b9c(uVar19,0,0);
    if ((uVar23 & 1) != 0) {
      if (*in_stack_00000060 == 0.0) break;
      if (*(float *)((long)*in_stack_00000060 + 0x84) != 0.0) {
        lVar13 = __start_il2cpp();
        if (lVar13 == 0) break;
        if ((*(char *)(lVar13 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
          lVar13 = unaff_x19[0xca];
          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          if ((lVar13 == 0) || (lVar14 = *(long *)(lVar13 + 0xc0), lVar14 == 0)) break;
          uVar23 = unaff_d14;
          if (*(char *)(lVar14 + 0x18) != '\0') {
            fVar33 = *(float *)(lVar13 + 100);
            uVar23 = (ulong)(uint)(*(float *)((long)unaff_x19 + 0x2ec) - fVar33);
          }
          if (*(char *)(lVar14 + 0x19) != '\0') {
            uVar36 = FUN_00e4e9f4(uVar23);
            lVar13 = unaff_x19[0xca];
            *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar36;
            *(float *)(unaff_x19 + 0xbf) = fVar33;
            *(float *)((long)unaff_x19 + 0x5fc) = fVar34;
            if (lVar13 == 0) break;
          }
          if (*(long *)(lVar13 + 0xc0) == 0) break;
          if (*(char *)(*(long *)(lVar13 + 0xc0) + 0x28) != '\0') {
            fVar31 = (float)FUN_00e4e9f4(uVar23);
            *(float *)((long)unaff_x19 + 0x63c) = fVar31;
            *(float *)(unaff_x19 + 200) = fVar33;
            fVar32 = fVar34 + *(float *)(unaff_x19 + 0xc1);
            *(float *)((long)unaff_x19 + 0x644) = fVar34;
            unaff_x19[0xc0] =
                 CONCAT44(fVar33 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                          fVar31 + (float)unaff_x19[0xc0]);
            *(float *)(unaff_x19 + 0xc1) = fVar32;
            if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0)) break;
            fVar31 = (float)FUN_00e4e9f4(uVar23);
            *(float *)((long)unaff_x19 + 0x63c) = fVar31;
            *(float *)(unaff_x19 + 200) = fVar32;
            *(float *)((long)unaff_x19 + 0x644) = fVar34;
            in_stack_00000040[3] =
                 CONCAT44(fVar32 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                          fVar31 + (float)in_stack_00000040[3]);
            *(float *)((long)unaff_x19 + 0x614) = fVar34 + *(float *)((long)unaff_x19 + 0x614);
            if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0)) break;
            fVar31 = (float)FUN_00e4e9f4(uVar23);
            *(float *)((long)unaff_x19 + 0x63c) = fVar31;
            *(float *)(unaff_x19 + 200) = fVar32;
            fVar33 = fVar34 + *(float *)(unaff_x19 + 0xc4);
            *(float *)((long)unaff_x19 + 0x644) = fVar34;
            unaff_x19[0xc3] =
                 CONCAT44(fVar32 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                          fVar31 + (float)unaff_x19[0xc3]);
            *(float *)(unaff_x19 + 0xc4) = fVar33;
            if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0)) break;
            fVar31 = (float)FUN_00e4e9f4(uVar23);
            *(float *)((long)unaff_x19 + 0x63c) = fVar31;
            *(float *)(unaff_x19 + 200) = fVar33;
            *(float *)((long)unaff_x19 + 0x644) = fVar34;
            in_stack_00000040[6] =
                 CONCAT44(fVar33 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                          fVar31 + (float)in_stack_00000040[6]);
            lVar13 = unaff_x19[0xca];
            *(float *)((long)unaff_x19 + 0x62c) = fVar34 + *(float *)((long)unaff_x19 + 0x62c);
            if (lVar13 == 0) break;
          }
          if (*(long *)(lVar13 + 0xc0) == 0) break;
          if (*(char *)(*(long *)(lVar13 + 0xc0) + 0x50) != '\0') {
            FUN_00e5eda8(lVar13,0);
            fVar31 = (float)FUN_00e4eb50();
            lVar13 = unaff_x19[0xca];
            *(float *)((long)unaff_x19 + 0x63c) = fVar31;
            *(float *)(unaff_x19 + 200) = fVar33;
            fVar32 = fVar34 + *(float *)(unaff_x19 + 0xc1);
            *(float *)((long)unaff_x19 + 0x644) = fVar34;
            unaff_x19[0xc0] =
                 CONCAT44(fVar33 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                          fVar31 + (float)unaff_x19[0xc0]);
            *(float *)(unaff_x19 + 0xc1) = fVar32;
            if ((lVar13 == 0) || (*(long *)(lVar13 + 0xc0) == 0)) break;
            FUN_00e5b838(lVar13,0);
            fVar31 = (float)FUN_00e4eb50();
            *(float *)((long)unaff_x19 + 0x63c) = fVar31;
            *(float *)(unaff_x19 + 200) = fVar32;
            *(float *)((long)unaff_x19 + 0x644) = fVar34;
            in_stack_00000040[3] =
                 CONCAT44(fVar32 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                          fVar31 + (float)in_stack_00000040[3]);
            lVar13 = unaff_x19[0xca];
            *(float *)((long)unaff_x19 + 0x614) = fVar34 + *(float *)((long)unaff_x19 + 0x614);
            if ((lVar13 == 0) || (*(long *)(lVar13 + 0xc0) == 0)) break;
            FUN_00e5eea4(lVar13,0);
            fVar31 = (float)FUN_00e4eb50();
            lVar13 = unaff_x19[0xca];
            *(float *)((long)unaff_x19 + 0x63c) = fVar31;
            *(float *)(unaff_x19 + 200) = fVar32;
            fVar33 = fVar34 + *(float *)(unaff_x19 + 0xc4);
            *(float *)((long)unaff_x19 + 0x644) = fVar34;
            unaff_x19[0xc3] =
                 CONCAT44(fVar32 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                          fVar31 + (float)unaff_x19[0xc3]);
            *(float *)(unaff_x19 + 0xc4) = fVar33;
            if ((lVar13 == 0) || (*(long *)(lVar13 + 0xc0) == 0)) break;
            FUN_00e5b7d8(lVar13,0);
            fVar31 = (float)FUN_00e4eb50();
            *(float *)((long)unaff_x19 + 0x63c) = fVar31;
            *(float *)(unaff_x19 + 200) = fVar33;
            *(float *)((long)unaff_x19 + 0x644) = fVar34;
            in_stack_00000040[6] =
                 CONCAT44(fVar33 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                          fVar31 + (float)in_stack_00000040[6]);
            lVar13 = unaff_x19[0xca];
            *(float *)((long)unaff_x19 + 0x62c) = fVar34 + *(float *)((long)unaff_x19 + 0x62c);
            if (lVar13 == 0) break;
          }
          lVar14 = *(long *)(lVar13 + 0xc0);
          if (lVar14 == 0) break;
          if (*(char *)(lVar14 + 0x60) != '\0') {
            uVar27 = *(undefined8 *)(lVar14 + 0x68);
            uVar19 = FUN_00e5eda8(lVar13,0);
            fVar31 = (float)FUN_00e4ecc4(uVar19,lVar13,uVar27);
            lVar13 = unaff_x19[0xca];
            *(float *)((long)unaff_x19 + 0x63c) = fVar31;
            *(float *)(unaff_x19 + 200) = fVar33;
            fVar32 = fVar34 + *(float *)(unaff_x19 + 0xc1);
            *(float *)((long)unaff_x19 + 0x644) = fVar34;
            unaff_x19[0xc0] =
                 CONCAT44(fVar33 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                          fVar31 + (float)unaff_x19[0xc0]);
            *(float *)(unaff_x19 + 0xc1) = fVar32;
            if ((lVar13 == 0) || (*(long *)(lVar13 + 0xc0) == 0)) break;
            uVar27 = *(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x68);
            uVar19 = FUN_00e5b838(lVar13,0);
            fVar31 = (float)FUN_00e4ecc4(uVar19,lVar13,uVar27);
            *(float *)((long)unaff_x19 + 0x63c) = fVar31;
            *(float *)(unaff_x19 + 200) = fVar32;
            *(float *)((long)unaff_x19 + 0x644) = fVar34;
            in_stack_00000040[3] =
                 CONCAT44(fVar32 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                          fVar31 + (float)in_stack_00000040[3]);
            lVar13 = unaff_x19[0xca];
            *(float *)((long)unaff_x19 + 0x614) = fVar34 + *(float *)((long)unaff_x19 + 0x614);
            if ((lVar13 == 0) || (*(long *)(lVar13 + 0xc0) == 0)) break;
            uVar27 = *(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x68);
            uVar19 = FUN_00e5eea4(lVar13,0);
            fVar31 = (float)FUN_00e4ecc4(uVar19,lVar13,uVar27);
            lVar13 = unaff_x19[0xca];
            *(float *)((long)unaff_x19 + 0x63c) = fVar31;
            *(float *)(unaff_x19 + 200) = fVar32;
            fVar38 = fVar34 + *(float *)(unaff_x19 + 0xc4);
            *(float *)((long)unaff_x19 + 0x644) = fVar34;
            unaff_x19[0xc3] =
                 CONCAT44(fVar32 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                          fVar31 + (float)unaff_x19[0xc3]);
            *(float *)(unaff_x19 + 0xc4) = fVar38;
            if ((lVar13 == 0) || (*(long *)(lVar13 + 0xc0) == 0)) break;
            uVar27 = *(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x68);
            uVar19 = FUN_00e5b7d8(lVar13,0);
            fVar31 = (float)FUN_00e4ecc4(uVar19,lVar13,uVar27);
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
    param_5 = (ulong)uVar26;
    if ((fStack000000000000004c <= 0.0) || ((int)unaff_x19[0x2a] == 2)) {
LAB_00e3cd74:
      if (*(char *)((long)unaff_x19 + 300) == '\0') {
        in_stack_00000040[0x1e] = unaff_x19[0x24];
      }
      else {
        if (*in_stack_00000060 == 0.0) break;
        uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0x80);
        in_stack_00000040[0x1e] =
             CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) * (float)((ulong)uVar19 >> 0x20),
                      (float)unaff_x19[0x24] * (float)uVar19);
      }
      lVar13 = unaff_x19[0x5e];
      *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
      if ((lVar13 == 0) || (*in_stack_00000060 == 0.0)) break;
      fVar31 = (float)FUN_00e5eda8(*in_stack_00000060,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_00e44400;
      fVar32 = *(float *)((long)unaff_x19 + 0x674);
      uVar23 = (ulong)(int)uVar26;
      *(float *)(lVar13 + uVar23 * 0xc + 0x20) =
           fVar31 + fVar32 + *(float *)(unaff_x19 + 0xc0) + *(float *)((long)unaff_x19 + 0x5f4) +
           *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
      lVar13 = unaff_x19[0x5e];
      if ((lVar13 == 0) || (*in_stack_00000060 == 0.0)) break;
      FUN_00e5eda8(*in_stack_00000060,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_00e44400;
      fVar31 = *(float *)((long)unaff_x19 + 0x604);
      *(float *)(lVar13 + uVar23 * 0xc + 0x24) =
           fVar32 + *(float *)(unaff_x19 + 0xcf) + fVar31 + *(float *)(unaff_x19 + 0xbf) +
           *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
      lVar13 = unaff_x19[0x5e];
      if ((lVar13 == 0) || (*in_stack_00000060 == 0.0)) break;
      FUN_00e5eda8(*in_stack_00000060,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_00e44400;
      *(float *)(lVar13 + uVar23 * 0xc + 0x28) =
           fVar31 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc1) +
           *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
           *(float *)((long)unaff_x19 + 0x6ec);
      lVar13 = unaff_x19[0x5e];
      if ((lVar13 == 0) || (*in_stack_00000060 == 0.0)) break;
      fVar31 = (float)FUN_00e5b838(*in_stack_00000060,0);
      uVar30 = uVar23 | 1;
      uVar22 = (uint)uVar30;
      if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_00e44400;
      fVar32 = *(float *)((long)unaff_x19 + 0x674);
      *(float *)(lVar13 + uVar30 * 0xc + 0x20) =
           fVar31 + fVar32 + *(float *)((long)unaff_x19 + 0x60c) +
           *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
           *(float *)((long)unaff_x19 + 0x6e4);
      lVar13 = unaff_x19[0x5e];
      if ((lVar13 == 0) || (*in_stack_00000060 == 0.0)) break;
      FUN_00e5b838(*in_stack_00000060,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_00e44400;
      fVar31 = *(float *)(unaff_x19 + 0xc2);
      *(float *)(lVar13 + uVar30 * 0xc + 0x24) =
           fVar32 + *(float *)(unaff_x19 + 0xcf) + fVar31 + *(float *)(unaff_x19 + 0xbf) +
           *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
      lVar13 = unaff_x19[0x5e];
      if ((lVar13 == 0) || (*in_stack_00000060 == 0.0)) break;
      FUN_00e5b838(*in_stack_00000060,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_00e44400;
      *(float *)(lVar13 + uVar30 * 0xc + 0x28) =
           fVar31 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)((long)unaff_x19 + 0x614) +
           *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
           *(float *)((long)unaff_x19 + 0x6ec);
      lVar13 = unaff_x19[0x5e];
      if ((lVar13 == 0) || (*in_stack_00000060 == 0.0)) break;
      fVar31 = (float)FUN_00e5eea4(*in_stack_00000060,0);
      uVar12 = uVar23 | 2;
      uVar25 = (uint)uVar12;
      if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_00e44400;
      fVar32 = *(float *)((long)unaff_x19 + 0x674);
      *(float *)(lVar13 + uVar12 * 0xc + 0x20) =
           fVar31 + fVar32 + *(float *)(unaff_x19 + 0xc3) + *(float *)((long)unaff_x19 + 0x5f4) +
           *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
      lVar13 = unaff_x19[0x5e];
      if ((lVar13 == 0) || (*in_stack_00000060 == 0.0)) break;
      FUN_00e5eea4(*in_stack_00000060,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_00e44400;
      fVar31 = *(float *)((long)unaff_x19 + 0x61c);
      *(float *)(lVar13 + uVar12 * 0xc + 0x24) =
           fVar32 + *(float *)(unaff_x19 + 0xcf) + fVar31 + *(float *)(unaff_x19 + 0xbf) +
           *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
      lVar13 = unaff_x19[0x5e];
      if ((lVar13 == 0) || (*in_stack_00000060 == 0.0)) break;
      FUN_00e5eea4(*in_stack_00000060,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_00e44400;
      *(float *)(lVar13 + uVar12 * 0xc + 0x28) =
           fVar31 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc4) +
           *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
           *(float *)((long)unaff_x19 + 0x6ec);
      lVar13 = unaff_x19[0x5e];
      if ((lVar13 == 0) || (*in_stack_00000060 == 0.0)) break;
      fVar31 = (float)FUN_00e5b7d8(*in_stack_00000060,0);
      uVar24 = uVar23 | 3;
      uVar28 = (uint)uVar24;
      if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_00e44400;
      fVar32 = *(float *)((long)unaff_x19 + 0x674);
      *(float *)(lVar13 + uVar24 * 0xc + 0x20) =
           fVar31 + fVar32 + *(float *)((long)unaff_x19 + 0x624) +
           *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
           *(float *)((long)unaff_x19 + 0x6e4);
      lVar13 = unaff_x19[0x5e];
      if ((lVar13 == 0) || (*in_stack_00000060 == 0.0)) break;
      FUN_00e5b7d8(*in_stack_00000060,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_00e44400;
      param_3 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
      *(float *)(lVar13 + uVar24 * 0xc + 0x24) =
           fVar32 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
           *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
           *(float *)(unaff_x19 + 0xdd);
      lVar13 = unaff_x19[0x5e];
      if ((lVar13 == 0) || (*in_stack_00000060 == 0.0)) break;
      FUN_00e5b7d8(*in_stack_00000060,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_00e44400;
      fVar31 = *(float *)((long)unaff_x19 + 0x62c);
      *(float *)(lVar13 + uVar24 * 0xc + 0x28) =
           (float)param_3 + *(float *)((long)unaff_x19 + 0x67c) + fVar31 +
           *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
           *(float *)((long)unaff_x19 + 0x6ec);
      lVar13 = unaff_x19[0xca];
      if (lVar13 == 0) break;
      lVar14 = *in_stack_00000020;
      if (*(char *)(lVar13 + 0x108) == '\0') {
        uVar36 = FUN_0272b9dc(lVar13 + 0x10,0);
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
        lVar14 = lVar14 + uVar23 * 8;
        *(undefined4 *)(lVar14 + 0x20) = uVar36;
        *(float *)(lVar14 + 0x24) = fVar31;
        if (*in_stack_00000060 == 0.0) break;
        lVar13 = *in_stack_00000020;
        uVar36 = thunk_FUN_0272b8d8((long)*in_stack_00000060 + 0x10,0);
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_00e44400;
        lVar13 = lVar13 + uVar30 * 8;
        *(undefined4 *)(lVar13 + 0x20) = uVar36;
        *(float *)(lVar13 + 0x24) = fVar31;
        if (*in_stack_00000060 == 0.0) break;
        lVar13 = *in_stack_00000020;
        uVar36 = FUN_0272b9c8((long)*in_stack_00000060 + 0x10,0);
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_00e44400;
        lVar13 = lVar13 + uVar12 * 8;
        *(undefined4 *)(lVar13 + 0x20) = uVar36;
        *(float *)(lVar13 + 0x24) = fVar31;
        if (*in_stack_00000060 == 0.0) break;
        lVar13 = *in_stack_00000020;
        uVar36 = FUN_0272b98c((long)*in_stack_00000060 + 0x10,0);
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_00e44400;
        lVar13 = lVar13 + uVar24 * 8;
        *(undefined4 *)(lVar13 + 0x20) = uVar36;
        *(float *)(lVar13 + 0x24) = fVar31;
        if (*in_stack_00000060 == 0.0) break;
        uVar36 = FUN_00e5ecc0(*in_stack_00000060,0);
        *(undefined4 *)(unaff_x19 + 0xd9) = uVar36;
        if (unaff_x19[0xca] == 0) break;
        FUN_00e5ecc0(unaff_x19[0xca],0);
        *(float *)((long)unaff_x19 + 0x6cc) = fVar31;
        unaff_x26 = in_stack_00000030;
      }
      else {
        if ((*(long *)(lVar13 + 0x100) == 0) ||
           (uVar36 = FUN_00e5dd14(unaff_d14,*(long *)(lVar13 + 0x100),
                                  *(undefined4 *)(lVar13 + 0x10c),0), lVar14 == 0)) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
        lVar14 = lVar14 + uVar23 * 8;
        *(undefined4 *)(lVar14 + 0x20) = uVar36;
        *(float *)(lVar14 + 0x24) = fVar31;
        dVar16 = *in_stack_00000060;
        if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x100) == 0)) break;
        lVar13 = *in_stack_00000020;
        uVar36 = FUN_00e5de6c(unaff_d14,*(long *)((long)dVar16 + 0x100),
                              *(undefined4 *)((long)dVar16 + 0x10c),0);
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_00e44400;
        lVar13 = lVar13 + uVar30 * 8;
        *(undefined4 *)(lVar13 + 0x20) = uVar36;
        *(float *)(lVar13 + 0x24) = fVar31;
        dVar16 = *in_stack_00000060;
        if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x100) == 0)) break;
        lVar13 = *in_stack_00000020;
        uVar36 = FUN_00e5dea4(unaff_d14,*(long *)((long)dVar16 + 0x100),
                              *(undefined4 *)((long)dVar16 + 0x10c),0);
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_00e44400;
        lVar13 = lVar13 + uVar12 * 8;
        *(undefined4 *)(lVar13 + 0x20) = uVar36;
        *(float *)(lVar13 + 0x24) = fVar31;
        dVar16 = *in_stack_00000060;
        if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x100) == 0)) break;
        lVar13 = *in_stack_00000020;
        uVar36 = thunk_FUN_00e5dd60(unaff_d14,*(long *)((long)dVar16 + 0x100),
                                    *(undefined4 *)((long)dVar16 + 0x10c),0);
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_00e44400;
        lVar13 = lVar13 + uVar24 * 8;
        *(undefined4 *)(lVar13 + 0x20) = uVar36;
        *(float *)(lVar13 + 0x24) = fVar31;
        dVar16 = *in_stack_00000060;
        if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x100) == 0)) break;
        uVar36 = FUN_00e5dedc(unaff_d14,*(long *)((long)dVar16 + 0x100),
                              *(undefined4 *)((long)dVar16 + 0x10c),0);
        lVar13 = unaff_x19[0xca];
        *(undefined4 *)(unaff_x19 + 0xd9) = uVar36;
        *(float *)((long)unaff_x19 + 0x6cc) = fVar31;
        if ((lVar13 == 0) || (lVar14 = *(long *)(lVar13 + 0x100), lVar14 == 0)) break;
        unaff_x26 = in_stack_00000030;
        if (((1 < *(int *)(lVar14 + 0x28)) && (0.0 < *(float *)(lVar14 + 0x34))) &&
           (*(int *)(lVar13 + 0x10c) < 0)) {
          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
        }
      }
    }
    else {
      dVar16 = *in_stack_00000060;
      if (dVar16 == 0.0) break;
      param_3 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
      if ((*(float *)((long)dVar16 + 0x48) + *(float *)((long)dVar16 + 0x84) +
          *(float *)((long)unaff_x19 + 0x634)) - *(float *)((long)unaff_x19 + 0x53c) <=
          DAT_028aa038 - *(float *)(unaff_x19 + 0x2f)) goto LAB_00e3cd74;
      lVar13 = *in_stack_00000038;
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(puVar6);
        DAT_03774d76 = '\x01';
      }
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_00e44400;
      uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
      uVar23 = (ulong)(int)uVar26;
      lVar13 = lVar13 + uVar23 * 0xc;
      *(undefined8 *)(lVar13 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
      *(undefined4 *)(lVar13 + 0x28) = uVar36;
      lVar13 = *in_stack_00000038;
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= (uint)(uVar23 | 1)) goto LAB_00e44400;
      lVar13 = lVar13 + (uVar23 | 1) * 0xc;
      uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
      *(undefined8 *)(lVar13 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
      *(undefined4 *)(lVar13 + 0x28) = uVar36;
      lVar13 = *in_stack_00000038;
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= (uint)(uVar23 | 2)) goto LAB_00e44400;
      lVar13 = lVar13 + (uVar23 | 2) * 0xc;
      uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
      *(undefined8 *)(lVar13 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
      *(undefined4 *)(lVar13 + 0x28) = uVar36;
      lVar13 = *in_stack_00000038;
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= (uint)(uVar23 | 3)) goto LAB_00e44400;
      lVar13 = lVar13 + (uVar23 | 3) * 0xc;
      uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
      *(undefined8 *)(lVar13 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
      *(undefined4 *)(lVar13 + 0x28) = uVar36;
    }
    if (*in_stack_00000060 == 0.0) break;
    uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xf8);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar23 = FUN_02681b9c(uVar19,0,0);
    if ((uVar23 & 1) == 0) {
      lVar13 = unaff_x19[0x10];
    }
    else {
      if ((*in_stack_00000060 == 0.0) ||
         (lVar13 = *(long *)((long)*in_stack_00000060 + 0xf8), lVar13 == 0)) break;
      lVar13 = *(long *)(lVar13 + 0x18);
    }
    if (((lVar13 == 0) || (lVar13 = FUN_0272bcf4(lVar13,0), lVar13 == 0)) ||
       (unaff_x20 = (long *)FUN_0267dac8(lVar13,0), unaff_x20 == (long *)0x0)) break;
    unaff_x24 = 0xc;
    iVar9 = (**(code **)(*unaff_x20 + 0x188))(unaff_x20,*(undefined8 *)(*unaff_x20 + 400));
    *(float *)(unaff_x19 + 0xda) = (float)iVar9;
    iVar9 = (**(code **)(*unaff_x20 + 0x1a8))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x1b0));
    in_w9 = (undefined4)unaff_x19[0xd9];
    in_w10 = *(undefined4 *)((long)unaff_x19 + 0x6cc);
    param_4 = unaff_x19[0x62];
    param_1 = (float)iVar9;
    *(float *)((long)unaff_x19 + 0x6d4) = param_1;
    *(undefined4 *)(unaff_x19 + 0xdb) = in_w9;
    *(undefined4 *)((long)unaff_x19 + 0x6dc) = in_w10;
    if (param_4 == 0) break;
    in_w8 = (undefined4)unaff_x19[0xda];
    param_6 = (undefined1 *)&stack0x00000070;
    param_7 = *(undefined8 *)
               UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
    unaff_x22 = param_5;
    unaff_x23 = in_stack_00000040;
    unaff_x25 = (undefined8 *)
                UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
    unaff_x27 = in_stack_00000020;
  }
  goto LAB_00e443fc;
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar23 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar7);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar14 = unaff_x19[0xcb];
    uVar36 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar14 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar14 + 0x18) <= uVar23) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar1 = (undefined4 *)(lVar14 + lVar13);
    *puVar1 = uVar36;
    puVar1[1] = (int)uVar30;
    puVar1[2] = (int)param_3;
    lVar14 = unaff_x19[0xca];
    if ((lVar14 == 0) || (lVar20 = unaff_x19[0xcc], lVar20 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
    uVar36 = *(undefined4 *)(lVar14 + 0x4c);
    uVar23 = uVar23 + 1;
    puVar18 = (undefined8 *)(lVar20 + lVar13);
    lVar13 = lVar13 + 0xc;
    *puVar18 = *(undefined8 *)(lVar14 + 0x44);
    *(undefined4 *)(puVar18 + 1) = uVar36;
  } while (uVar26 != uVar23);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar29,*plVar10,
                 *(undefined8 *)StringLiteral_225);
  }
  lVar13 = unaff_x19[0x59];
  if (lVar13 != 0) {
    (**(code **)(lVar13 + 0x18))
              (*(undefined8 *)(lVar13 + 0x40),*in_stack_00000038,*plVar29,*plVar10,
               *(undefined8 *)(lVar13 + 0x28));
  }
  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
LAB_00e443b0:
  lVar13 = __start_il2cpp();
  if (lVar13 != 0) {
    if ((*(char *)(lVar13 + 0x109) != '\0') || (*(char *)((long)unaff_x19 + 0xa9) != '\0')) {
      *(undefined1 *)(unaff_x19 + 0x2e) = 0;
    }
    return;
  }
LAB_00e443fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


