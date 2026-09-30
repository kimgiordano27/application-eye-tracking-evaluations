/*
FUNCTION_NAME: FullSerializer.Internal.fsIEnumerableConverter$$IsStack
ENTRY_POINT: 00e3ca64
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

void FullSerializer_Internal_fsIEnumerableConverter__IsStack
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  short sVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  double dVar16;
  ulong uVar17;
  float *pfVar18;
  long lVar19;
  long *unaff_x19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  uint *puVar23;
  uint uVar24;
  ulong unaff_x21;
  ulong uVar25;
  uint uVar26;
  undefined8 uVar27;
  uint uVar28;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined **unaff_x25;
  long *plVar29;
  double *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  ulong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  double dVar37;
  float fVar38;
  ulong uVar39;
  float unaff_s8;
  int iVar40;
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
  double *in_stack_00000060;
  float fStack0000000000000070;
  long in_stack_00000078;
  
  while( true ) {
    FUN_00e5b7d8(param_4,param_5);
    fVar31 = (float)FUN_00e4eb50();
    *(float *)((long)unaff_x19 + 0x63c) = fVar31;
    *(float *)(unaff_x19 + 200) = (float)param_2;
    *(float *)((long)unaff_x19 + 0x644) = (float)param_3;
    unaff_x23[6] = CONCAT44((float)param_2 + (float)((ulong)unaff_x23[6] >> 0x20),
                            fVar31 + (float)unaff_x23[6]);
    lVar20 = unaff_x19[0xca];
    *(float *)((long)unaff_x19 + 0x62c) = (float)param_3 + *(float *)((long)unaff_x19 + 0x62c);
    if (lVar20 == 0) break;
    do {
      fVar33 = (float)param_3;
      fVar31 = (float)param_2;
      lVar15 = *(long *)(lVar20 + 0xc0);
      if (lVar15 == 0) goto LAB_00e443fc;
      if (*(char *)(lVar15 + 0x60) != '\0') {
        uVar27 = *(undefined8 *)(lVar15 + 0x68);
        uVar11 = FUN_00e5eda8(lVar20,0);
        fVar32 = (float)FUN_00e4ecc4(uVar11,lVar20,uVar27);
        lVar20 = unaff_x19[0xca];
        *(float *)((long)unaff_x19 + 0x63c) = fVar32;
        *(float *)(unaff_x19 + 200) = fVar31;
        fVar38 = fVar33 + *(float *)(unaff_x19 + 0xc1);
        *(float *)((long)unaff_x19 + 0x644) = fVar33;
        unaff_x19[0xc0] =
             CONCAT44(fVar31 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                      fVar32 + (float)unaff_x19[0xc0]);
        *(float *)(unaff_x19 + 0xc1) = fVar38;
        if ((lVar20 == 0) || (*(long *)(lVar20 + 0xc0) == 0)) goto LAB_00e443fc;
        uVar27 = *(undefined8 *)(*(long *)(lVar20 + 0xc0) + 0x68);
        uVar11 = FUN_00e5b838(lVar20,0);
        fVar31 = (float)FUN_00e4ecc4(uVar11,lVar20,uVar27);
        *(float *)((long)unaff_x19 + 0x63c) = fVar31;
        *(float *)(unaff_x19 + 200) = fVar38;
        *(float *)((long)unaff_x19 + 0x644) = fVar33;
        unaff_x23[3] = CONCAT44(fVar38 + (float)((ulong)unaff_x23[3] >> 0x20),
                                fVar31 + (float)unaff_x23[3]);
        lVar20 = unaff_x19[0xca];
        *(float *)((long)unaff_x19 + 0x614) = fVar33 + *(float *)((long)unaff_x19 + 0x614);
        if ((lVar20 == 0) || (*(long *)(lVar20 + 0xc0) == 0)) goto LAB_00e443fc;
        uVar27 = *(undefined8 *)(*(long *)(lVar20 + 0xc0) + 0x68);
        uVar11 = FUN_00e5eea4(lVar20,0);
        fVar31 = (float)FUN_00e4ecc4(uVar11,lVar20,uVar27);
        lVar20 = unaff_x19[0xca];
        *(float *)((long)unaff_x19 + 0x63c) = fVar31;
        *(float *)(unaff_x19 + 200) = fVar38;
        fVar32 = fVar33 + *(float *)(unaff_x19 + 0xc4);
        *(float *)((long)unaff_x19 + 0x644) = fVar33;
        unaff_x19[0xc3] =
             CONCAT44(fVar38 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                      fVar31 + (float)unaff_x19[0xc3]);
        *(float *)(unaff_x19 + 0xc4) = fVar32;
        if ((lVar20 == 0) || (*(long *)(lVar20 + 0xc0) == 0)) goto LAB_00e443fc;
        uVar27 = *(undefined8 *)(*(long *)(lVar20 + 0xc0) + 0x68);
        uVar11 = FUN_00e5b7d8(lVar20,0);
        fVar31 = (float)FUN_00e4ecc4(uVar11,lVar20,uVar27);
        *(float *)((long)unaff_x19 + 0x63c) = fVar31;
        *(float *)(unaff_x19 + 200) = fVar32;
        *(float *)((long)unaff_x19 + 0x644) = fVar33;
        unaff_x23[6] = CONCAT44(fVar32 + (float)((ulong)unaff_x23[6] >> 0x20),
                                fVar31 + (float)unaff_x23[6]);
        *(float *)((long)unaff_x19 + 0x62c) = fVar33 + *(float *)((long)unaff_x19 + 0x62c);
      }
      do {
        do {
          do {
            uVar6 = (int)unaff_x21 << 2;
            if ((fStack000000000000004c <= 0.0) || ((int)unaff_x19[0x2a] == 2)) {
LAB_00e3cd74:
              if (*(char *)((long)unaff_x19 + 300) == '\0') {
                unaff_x23[0x1e] = unaff_x19[0x24];
              }
              else {
                if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                uVar11 = *(undefined8 *)((long)*unaff_x26 + 0x80);
                unaff_x23[0x1e] =
                     CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) *
                              (float)((ulong)uVar11 >> 0x20),(float)unaff_x19[0x24] * (float)uVar11)
                ;
              }
              lVar20 = unaff_x19[0x5e];
              *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
              if ((lVar20 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
              fVar31 = (float)FUN_00e5eda8(*unaff_x26,0);
              if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_00e44400;
              fVar33 = *(float *)((long)unaff_x19 + 0x674);
              uVar17 = (ulong)(int)uVar6;
              *(float *)(lVar20 + uVar17 * 0xc + 0x20) =
                   fVar31 + fVar33 + *(float *)(unaff_x19 + 0xc0) +
                   *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                   *(float *)((long)unaff_x19 + 0x6e4);
              lVar20 = unaff_x19[0x5e];
              if ((lVar20 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
              FUN_00e5eda8(*unaff_x26,0);
              if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_00e44400;
              fVar31 = *(float *)((long)unaff_x19 + 0x604);
              *(float *)(lVar20 + uVar17 * 0xc + 0x24) =
                   fVar33 + *(float *)(unaff_x19 + 0xcf) + fVar31 + *(float *)(unaff_x19 + 0xbf) +
                   *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
              lVar20 = unaff_x19[0x5e];
              if ((lVar20 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
              FUN_00e5eda8(*unaff_x26,0);
              if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_00e44400;
              *(float *)(lVar20 + uVar17 * 0xc + 0x28) =
                   fVar31 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc1) +
                   *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
                   *(float *)((long)unaff_x19 + 0x6ec);
              lVar20 = unaff_x19[0x5e];
              if ((lVar20 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
              fVar31 = (float)FUN_00e5b838(*unaff_x26,0);
              uVar30 = uVar17 | 1;
              uVar24 = (uint)uVar30;
              if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
              fVar33 = *(float *)((long)unaff_x19 + 0x674);
              *(float *)(lVar20 + uVar30 * 0xc + 0x20) =
                   fVar31 + fVar33 + *(float *)((long)unaff_x19 + 0x60c) +
                   *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                   *(float *)((long)unaff_x19 + 0x6e4);
              lVar20 = unaff_x19[0x5e];
              if ((lVar20 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
              FUN_00e5b838(*unaff_x26,0);
              if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
              fVar31 = *(float *)(unaff_x19 + 0xc2);
              *(float *)(lVar20 + uVar30 * 0xc + 0x24) =
                   fVar33 + *(float *)(unaff_x19 + 0xcf) + fVar31 + *(float *)(unaff_x19 + 0xbf) +
                   *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
              lVar20 = unaff_x19[0x5e];
              if ((lVar20 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
              FUN_00e5b838(*unaff_x26,0);
              if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
              *(float *)(lVar20 + uVar30 * 0xc + 0x28) =
                   fVar31 + *(float *)((long)unaff_x19 + 0x67c) +
                   *(float *)((long)unaff_x19 + 0x614) + *(float *)((long)unaff_x19 + 0x5fc) +
                   *(float *)(unaff_x19 + 199) + *(float *)((long)unaff_x19 + 0x6ec);
              lVar20 = unaff_x19[0x5e];
              if ((lVar20 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
              fVar31 = (float)FUN_00e5eea4(*unaff_x26,0);
              uVar14 = uVar17 | 2;
              uVar26 = (uint)uVar14;
              if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
              fVar33 = *(float *)((long)unaff_x19 + 0x674);
              *(float *)(lVar20 + uVar14 * 0xc + 0x20) =
                   fVar31 + fVar33 + *(float *)(unaff_x19 + 0xc3) +
                   *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                   *(float *)((long)unaff_x19 + 0x6e4);
              lVar20 = unaff_x19[0x5e];
              if ((lVar20 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
              FUN_00e5eea4(*unaff_x26,0);
              if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
              fVar31 = *(float *)((long)unaff_x19 + 0x61c);
              *(float *)(lVar20 + uVar14 * 0xc + 0x24) =
                   fVar33 + *(float *)(unaff_x19 + 0xcf) + fVar31 + *(float *)(unaff_x19 + 0xbf) +
                   *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
              lVar20 = unaff_x19[0x5e];
              if ((lVar20 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
              FUN_00e5eea4(*unaff_x26,0);
              if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
              *(float *)(lVar20 + uVar14 * 0xc + 0x28) =
                   fVar31 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc4) +
                   *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
                   *(float *)((long)unaff_x19 + 0x6ec);
              lVar20 = unaff_x19[0x5e];
              if ((lVar20 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
              fVar31 = (float)FUN_00e5b7d8(*unaff_x26,0);
              uVar25 = uVar17 | 3;
              uVar28 = (uint)uVar25;
              if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_00e44400;
              fVar33 = *(float *)((long)unaff_x19 + 0x674);
              *(float *)(lVar20 + uVar25 * 0xc + 0x20) =
                   fVar31 + fVar33 + *(float *)((long)unaff_x19 + 0x624) +
                   *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                   *(float *)((long)unaff_x19 + 0x6e4);
              lVar20 = unaff_x19[0x5e];
              if ((lVar20 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
              FUN_00e5b7d8(*unaff_x26,0);
              if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_00e44400;
              uVar39 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
              *(float *)(lVar20 + uVar25 * 0xc + 0x24) =
                   fVar33 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
                   *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
                   *(float *)(unaff_x19 + 0xdd);
              lVar20 = unaff_x19[0x5e];
              if ((lVar20 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
              FUN_00e5b7d8(*unaff_x26,0);
              if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_00e44400;
              fVar31 = *(float *)((long)unaff_x19 + 0x62c);
              *(float *)(lVar20 + uVar25 * 0xc + 0x28) =
                   (float)uVar39 + *(float *)((long)unaff_x19 + 0x67c) + fVar31 +
                   *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
                   *(float *)((long)unaff_x19 + 0x6ec);
              lVar20 = unaff_x19[0xca];
              if (lVar20 == 0) goto LAB_00e443fc;
              lVar15 = *unaff_x28;
              if (*(char *)(lVar20 + 0x108) == '\0') {
                uVar36 = FUN_0272b9dc(lVar20 + 0x10,0);
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_00e44400;
                lVar15 = lVar15 + uVar17 * 8;
                *(undefined4 *)(lVar15 + 0x20) = uVar36;
                *(float *)(lVar15 + 0x24) = fVar31;
                if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                lVar20 = *unaff_x28;
                uVar36 = thunk_FUN_0272b8d8((long)*unaff_x26 + 0x10,0);
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                lVar20 = lVar20 + uVar30 * 8;
                *(undefined4 *)(lVar20 + 0x20) = uVar36;
                *(float *)(lVar20 + 0x24) = fVar31;
                if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                lVar20 = *unaff_x28;
                uVar36 = FUN_0272b9c8((long)*unaff_x26 + 0x10,0);
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
                lVar20 = lVar20 + uVar14 * 8;
                *(undefined4 *)(lVar20 + 0x20) = uVar36;
                *(float *)(lVar20 + 0x24) = fVar31;
                if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                lVar20 = *unaff_x28;
                uVar36 = FUN_0272b98c((long)*unaff_x26 + 0x10,0);
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_00e44400;
                lVar20 = lVar20 + uVar25 * 8;
                *(undefined4 *)(lVar20 + 0x20) = uVar36;
                *(float *)(lVar20 + 0x24) = fVar31;
                if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                uVar36 = FUN_00e5ecc0(*unaff_x26,0);
                *(undefined4 *)(unaff_x19 + 0xd9) = uVar36;
                if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                FUN_00e5ecc0(unaff_x19[0xca],0);
                *(float *)((long)unaff_x19 + 0x6cc) = fVar31;
                unaff_x23 = in_stack_00000040;
                unaff_x24 = in_stack_00000030;
              }
              else {
                if ((*(long *)(lVar20 + 0x100) == 0) ||
                   (uVar36 = FUN_00e5dd14(unaff_d14,*(long *)(lVar20 + 0x100),
                                          *(undefined4 *)(lVar20 + 0x10c),0), lVar15 == 0))
                goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_00e44400;
                lVar15 = lVar15 + uVar17 * 8;
                *(undefined4 *)(lVar15 + 0x20) = uVar36;
                *(float *)(lVar15 + 0x24) = fVar31;
                dVar16 = *unaff_x26;
                if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x100) == 0)) goto LAB_00e443fc;
                lVar20 = *unaff_x28;
                uVar36 = FUN_00e5de6c(unaff_d14,*(long *)((long)dVar16 + 0x100),
                                      *(undefined4 *)((long)dVar16 + 0x10c),0);
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                lVar20 = lVar20 + uVar30 * 8;
                *(undefined4 *)(lVar20 + 0x20) = uVar36;
                *(float *)(lVar20 + 0x24) = fVar31;
                dVar16 = *unaff_x26;
                if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x100) == 0)) goto LAB_00e443fc;
                lVar20 = *unaff_x28;
                uVar36 = FUN_00e5dea4(unaff_d14,*(long *)((long)dVar16 + 0x100),
                                      *(undefined4 *)((long)dVar16 + 0x10c),0);
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
                lVar20 = lVar20 + uVar14 * 8;
                *(undefined4 *)(lVar20 + 0x20) = uVar36;
                *(float *)(lVar20 + 0x24) = fVar31;
                dVar16 = *unaff_x26;
                if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x100) == 0)) goto LAB_00e443fc;
                lVar20 = *unaff_x28;
                uVar36 = thunk_FUN_00e5dd60(unaff_d14,*(long *)((long)dVar16 + 0x100),
                                            *(undefined4 *)((long)dVar16 + 0x10c),0);
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_00e44400;
                lVar20 = lVar20 + uVar25 * 8;
                *(undefined4 *)(lVar20 + 0x20) = uVar36;
                *(float *)(lVar20 + 0x24) = fVar31;
                dVar16 = *unaff_x26;
                if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x100) == 0)) goto LAB_00e443fc;
                uVar36 = FUN_00e5dedc(unaff_d14,*(long *)((long)dVar16 + 0x100),
                                      *(undefined4 *)((long)dVar16 + 0x10c),0);
                lVar20 = unaff_x19[0xca];
                *(undefined4 *)(unaff_x19 + 0xd9) = uVar36;
                *(float *)((long)unaff_x19 + 0x6cc) = fVar31;
                if ((lVar20 == 0) || (lVar15 = *(long *)(lVar20 + 0x100), lVar15 == 0))
                goto LAB_00e443fc;
                unaff_x23 = in_stack_00000040;
                unaff_x24 = in_stack_00000030;
                if (((1 < *(int *)(lVar15 + 0x28)) && (0.0 < *(float *)(lVar15 + 0x34))) &&
                   (*(int *)(lVar20 + 0x10c) < 0)) {
                  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                }
              }
            }
            else {
              dVar16 = *unaff_x26;
              if (dVar16 == 0.0) goto LAB_00e443fc;
              uVar39 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
              if ((*(float *)((long)dVar16 + 0x48) + *(float *)((long)dVar16 + 0x84) +
                  *(float *)((long)unaff_x19 + 0x634)) - *(float *)((long)unaff_x19 + 0x53c) <=
                  DAT_028aa038 - *(float *)(unaff_x19 + 0x2f)) goto LAB_00e3cd74;
              lVar20 = *in_stack_00000038;
              if (*(char *)((long)unaff_x25 + 0xd76) == '\0') {
                thunk_FUN_00d48444(unaff_x27);
                *(undefined1 *)((long)unaff_x25 + 0xd76) = 1;
              }
              if (lVar20 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_00e44400;
              uVar36 = *(undefined4 *)(*(undefined8 **)(*unaff_x27 + 0xb8) + 1);
              uVar17 = (ulong)(int)uVar6;
              lVar20 = lVar20 + uVar17 * 0xc;
              *(undefined8 *)(lVar20 + 0x20) = **(undefined8 **)(*unaff_x27 + 0xb8);
              *(undefined4 *)(lVar20 + 0x28) = uVar36;
              lVar20 = *in_stack_00000038;
              if (lVar20 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar20 + 0x18) <= (uint)(uVar17 | 1)) goto LAB_00e44400;
              lVar20 = lVar20 + (uVar17 | 1) * 0xc;
              uVar36 = *(undefined4 *)(*(undefined8 **)(*unaff_x27 + 0xb8) + 1);
              *(undefined8 *)(lVar20 + 0x20) = **(undefined8 **)(*unaff_x27 + 0xb8);
              *(undefined4 *)(lVar20 + 0x28) = uVar36;
              lVar20 = *in_stack_00000038;
              if (lVar20 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar20 + 0x18) <= (uint)(uVar17 | 2)) goto LAB_00e44400;
              lVar20 = lVar20 + (uVar17 | 2) * 0xc;
              uVar36 = *(undefined4 *)(*(undefined8 **)(*unaff_x27 + 0xb8) + 1);
              *(undefined8 *)(lVar20 + 0x20) = **(undefined8 **)(*unaff_x27 + 0xb8);
              *(undefined4 *)(lVar20 + 0x28) = uVar36;
              lVar20 = *in_stack_00000038;
              if (lVar20 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar20 + 0x18) <= (uint)(uVar17 | 3)) goto LAB_00e44400;
              lVar20 = lVar20 + (uVar17 | 3) * 0xc;
              uVar36 = *(undefined4 *)(*(undefined8 **)(*unaff_x27 + 0xb8) + 1);
              *(undefined8 *)(lVar20 + 0x20) = **(undefined8 **)(*unaff_x27 + 0xb8);
              *(undefined4 *)(lVar20 + 0x28) = uVar36;
            }
            if (*unaff_x26 == 0.0) goto LAB_00e443fc;
            uVar11 = *(undefined8 *)((long)*unaff_x26 + 0xf8);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar17 = FUN_02681b9c(uVar11,0,0);
            if ((uVar17 & 1) == 0) {
              lVar20 = unaff_x19[0x10];
            }
            else {
              if ((*unaff_x26 == 0.0) || (lVar20 = *(long *)((long)*unaff_x26 + 0xf8), lVar20 == 0))
              goto LAB_00e443fc;
              lVar20 = *(long *)(lVar20 + 0x18);
            }
            if (((lVar20 == 0) || (lVar20 = FUN_0272bcf4(lVar20,0), lVar20 == 0)) ||
               (plVar12 = (long *)FUN_0267dac8(lVar20,0), plVar12 == (long *)0x0))
            goto LAB_00e443fc;
            iVar10 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
            *(float *)(unaff_x19 + 0xda) = (float)iVar10;
            iVar10 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
            *(float *)((long)unaff_x19 + 0x6d4) = (float)iVar10;
            *(int *)(unaff_x19 + 0xdb) = (int)unaff_x19[0xd9];
            *(undefined4 *)((long)unaff_x19 + 0x6dc) = *(undefined4 *)((long)unaff_x19 + 0x6cc);
            puVar7 = UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
            if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
            _fStack0000000000000070 = (double)CONCAT44((float)iVar10,(int)unaff_x19[0xda]);
            in_stack_00000078 = unaff_x19[0xd9];
            FUN_0132149c(unaff_x19[0x62],uVar6,&stack0x00000070,
                         *(undefined8 *)
                          UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                        );
            if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            uVar17 = (ulong)(int)uVar6;
            uVar30 = uVar17 | 1;
            FUN_0132149c(unaff_x19[0x62],uVar6 | 1,&stack0x00000070,*(undefined8 *)puVar7);
            if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            uVar14 = uVar17 | 2;
            FUN_0132149c(unaff_x19[0x62],uVar14,&stack0x00000070,*(undefined8 *)puVar7);
            if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            uVar25 = uVar17 | 3;
            FUN_0132149c(unaff_x19[0x62],uVar6 | 3,&stack0x00000070,*(undefined8 *)puVar7);
            plVar29 = (long *)StringLiteral_9119;
            lVar20 = unaff_x19[0x60];
            if (lVar20 == 0) goto LAB_00e443fc;
            if ((*(uint *)(lVar20 + 0x18) <= uVar6) ||
               (uVar24 = (uint)uVar25, *(uint *)(lVar20 + 0x18) <= uVar24)) goto LAB_00e44400;
            lVar15 = unaff_x19[0xca];
            fVar31 = unaff_s8;
            if (*(float *)(lVar20 + 0x20 + uVar17 * 8) != *(float *)(lVar20 + 0x20 + uVar25 * 8)) {
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
              iVar40 = *(int *)(lVar15 + 0x160);
              iVar10 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
              uVar39 = 0x3e800000;
              *(float *)(unaff_x19 + 0xdb) = (float)iVar40 / ((float)iVar10 * 0.25);
              if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
              iVar40 = *(int *)(unaff_x19[0xca] + 0x160);
              iVar10 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
              fVar33 = (float)iVar40;
              fVar31 = (float)iVar10;
              puVar21 = (undefined8 *)
                        UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
              ;
            }
            else {
              if (*(long *)(lVar15 + 0x100) == 0) goto LAB_00e443fc;
              fVar31 = (float)FUN_00e5df18(*(long *)(lVar15 + 0x100),0);
              puVar21 = (undefined8 *)
                        UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
              ;
              if (((*in_stack_00000060 == 0.0) ||
                  (lVar20 = *(long *)((long)*in_stack_00000060 + 0x100), lVar20 == 0)) ||
                 (plVar12 = *(long **)(lVar20 + 0x18), plVar12 == (long *)0x0)) goto LAB_00e443fc;
              iVar10 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar20 = *(long *)((long)*in_stack_00000060 + 0x100), lVar20 == 0))
              goto LAB_00e443fc;
              fVar33 = 0.25;
              *(float *)(unaff_x19 + 0xdb) =
                   fVar31 / (*(float *)(lVar20 + 0x40) * (float)iVar10 * 0.25);
              FUN_00e5df18(lVar20,0);
              if ((unaff_x19[0xca] == 0) ||
                 ((lVar20 = *(long *)(unaff_x19[0xca] + 0x100), lVar20 == 0 ||
                  (plVar12 = *(long **)(lVar20 + 0x18), plVar12 == (long *)0x0))))
              goto LAB_00e443fc;
              iVar10 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar20 = *(long *)((long)*in_stack_00000060 + 0x100), lVar20 == 0))
              goto LAB_00e443fc;
              fVar31 = *(float *)(lVar20 + 0x44) * (float)iVar10;
            }
            fVar32 = 0.25;
            fVar33 = fVar33 / (fVar31 * 0.25);
            *(float *)((long)unaff_x19 + 0x6dc) = fVar33;
            if (unaff_x19[99] == 0) goto LAB_00e443fc;
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            in_stack_00000078 = CONCAT44(fVar33,(int)unaff_x19[0xdb]);
            FUN_0132149c(unaff_x19[99],uVar6,&stack0x00000070,*puVar21);
            if (unaff_x19[99] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            FUN_0132149c(unaff_x19[99],uVar6 | 1,&stack0x00000070,*puVar21);
            if (unaff_x19[99] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            FUN_0132149c(unaff_x19[99],uVar6 | 2,&stack0x00000070,*puVar21);
            if (unaff_x19[99] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            FUN_0132149c(unaff_x19[99],uVar6 | 3,&stack0x00000070,*puVar21);
            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
            uVar11 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar13 = FUN_02681b9c(uVar11,0,0);
            fVar33 = (float)uVar39;
            fVar31 = (float)unaff_d14;
            uVar28 = (uint)uVar30;
            uVar26 = (uint)uVar14;
            if ((uVar13 & 1) != 0) {
              if (unaff_x21 == in_stack_00000010) {
                if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                fVar38 = (float)FUN_00e5b838(*in_stack_00000060,0);
                if (DAT_03774d76 == '\0') {
                  thunk_FUN_00d48444(
                                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                    );
                  DAT_03774d76 = '\x01';
                }
                pfVar18 = *(float **)
                           (*(long *)
                             Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                           + 0xb8);
                fVar33 = fVar33 - pfVar18[2];
                uVar39 = (ulong)(uint)fVar33;
                if (fVar33 * fVar33 +
                    (fVar38 - *pfVar18) * (fVar38 - *pfVar18) +
                    (fVar32 - pfVar18[1]) * (fVar32 - pfVar18[1]) < DAT_028aa020) goto LAB_00e3dbd8;
              }
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar20 = *(long *)((long)*in_stack_00000060 + 0xb0), lVar20 == 0))
              goto LAB_00e443fc;
              uVar11 = *(undefined8 *)(lVar20 + 0x38);
              if (DAT_03774d77 == '\0') {
                thunk_FUN_00d48444(
                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                  );
                DAT_03774d77 = '\x01';
              }
              fVar33 = (float)uVar11 -
                       (float)**(undefined8 **)
                                (*(long *)
                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                + 0xb8);
              fVar32 = (float)((ulong)uVar11 >> 0x20) -
                       (float)((ulong)**(undefined8 **)
                                        (*(long *)
                                          Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                        + 0xb8) >> 0x20);
              if (DAT_028aa020 <= fVar33 * fVar33 + fVar32 * fVar32) {
                *(undefined1 *)(unaff_x19 + 0x2e) = 1;
              }
              dVar16 = *in_stack_00000060;
              if ((dVar16 == 0.0) || (lVar20 = *(long *)((long)dVar16 + 0xb0), lVar20 == 0))
              goto LAB_00e443fc;
              fVar38 = fVar31 * *(float *)(lVar20 + 0x38);
              *(float *)(unaff_x19 + 0xc9) = fVar38;
              fVar32 = fVar31 * *(float *)(lVar20 + 0x3c);
              *(float *)((long)unaff_x19 + 0x64c) = fVar32;
              fVar33 = unaff_s10;
              if (*(char *)(lVar20 + 0x25) != '\0') {
                fVar33 = unaff_s10 / *(float *)((long)dVar16 + 0x84);
              }
              lVar20 = *in_stack_00000038;
              if (lVar20 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_00e44400;
              lVar15 = lVar20 + uVar17 * 0xc;
              fVar34 = *(float *)(lVar15 + 0x20);
              uVar11 = *(undefined8 *)(lVar15 + 0x24);
              *(float *)(unaff_x19 + 0xcd) = fVar34;
              unaff_x23[0xf] = uVar11;
              *(float *)(unaff_x19 + 0xd0) = fVar34;
              fVar35 = (float)uVar11;
              *(float *)((long)unaff_x19 + 0x684) = fVar35;
              if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_00e44400;
              lVar15 = lVar20 + uVar30 * 0xc;
              uVar36 = *(undefined4 *)(lVar15 + 0x20);
              uVar11 = *(undefined8 *)(lVar15 + 0x24);
              *(undefined4 *)(unaff_x19 + 0xcd) = uVar36;
              unaff_x23[0xf] = uVar11;
              *(undefined4 *)(unaff_x19 + 0xd2) = uVar36;
              *(int *)((long)unaff_x19 + 0x694) = (int)uVar11;
              if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
              lVar15 = lVar20 + uVar14 * 0xc;
              uVar36 = *(undefined4 *)(lVar15 + 0x20);
              uVar11 = *(undefined8 *)(lVar15 + 0x24);
              *(undefined4 *)(unaff_x19 + 0xcd) = uVar36;
              unaff_x23[0xf] = uVar11;
              *(undefined4 *)(unaff_x19 + 0xd4) = uVar36;
              *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar11;
              if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
              lVar20 = lVar20 + uVar25 * 0xc;
              uVar36 = *(undefined4 *)(lVar20 + 0x20);
              uVar11 = *(undefined8 *)(lVar20 + 0x24);
              *(undefined4 *)(unaff_x19 + 0xcd) = uVar36;
              unaff_x23[0xf] = uVar11;
              *(undefined4 *)(unaff_x19 + 0xd6) = uVar36;
              *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar11;
              lVar20 = *(long *)((long)dVar16 + 0xb0);
              if (lVar20 == 0) goto LAB_00e443fc;
              if (*(char *)(lVar20 + 0x24) == '\0') {
                lVar15 = *in_stack_00000028;
                if (lVar15 == 0) goto LAB_00e443fc;
                uVar4 = *(uint *)(lVar15 + 0x18);
                if (uVar4 <= uVar6) goto LAB_00e44400;
                lVar22 = lVar15 + uVar17 * 8;
                *(float *)(lVar22 + 0x20) = (fVar38 + fVar33 * fVar34) - *(float *)(lVar20 + 0x30);
                *(float *)(lVar22 + 0x24) = (fVar32 + fVar33 * fVar35) - *(float *)(lVar20 + 0x34);
                if (((uVar4 <= uVar28) ||
                    (*(ulong *)(lVar15 + uVar30 * 8 + 0x20) =
                          CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar33 +
                                   (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                   (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20),
                                   ((float)unaff_x19[0xd2] * fVar33 + (float)unaff_x19[0xc9]) -
                                   (float)*(undefined8 *)(lVar20 + 0x30)), uVar4 <= uVar26)) ||
                   (*(ulong *)(lVar15 + uVar14 * 8 + 0x20) =
                         CONCAT44((fVar33 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                                  (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                  (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20),
                                  (fVar33 * (float)unaff_x19[0xd4] + (float)unaff_x19[0xc9]) -
                                  (float)*(undefined8 *)(lVar20 + 0x30)), uVar4 <= uVar24))
                goto LAB_00e44400;
                uVar39 = unaff_x19[0xc9];
                *(ulong *)(lVar15 + uVar25 * 8 + 0x20) =
                     CONCAT44((fVar33 * (float)((ulong)unaff_x19[0xd6] >> 0x20) +
                              (float)(uVar39 >> 0x20)) -
                              (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20),
                              (fVar33 * (float)unaff_x19[0xd6] + (float)uVar39) -
                              (float)*(undefined8 *)(lVar20 + 0x30));
              }
              else {
                fVar2 = *(float *)((long)dVar16 + 0x44);
                *(float *)(unaff_x19 + 0xd8) = fVar2;
                fVar3 = *(float *)((long)dVar16 + 0x48);
                lVar15 = unaff_x19[0x61];
                *(float *)((long)unaff_x19 + 0x6c4) = fVar3;
                if (lVar15 == 0) goto LAB_00e443fc;
                uVar4 = *(uint *)(lVar15 + 0x18);
                if (uVar4 <= uVar6) goto LAB_00e44400;
                lVar22 = lVar15 + uVar17 * 8;
                *(float *)(lVar22 + 0x20) =
                     (fVar38 + fVar33 * (fVar34 - fVar2)) - *(float *)(lVar20 + 0x30);
                *(float *)(lVar22 + 0x24) =
                     (fVar32 + fVar33 * (fVar35 - fVar3)) - *(float *)(lVar20 + 0x34);
                if (((uVar4 <= uVar28) ||
                    (*(ulong *)(lVar15 + uVar30 * 8 + 0x20) =
                          CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                   ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                                   (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar33) -
                                   (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20),
                                   ((float)unaff_x19[0xc9] +
                                   ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) * fVar33) -
                                   (float)*(undefined8 *)(lVar20 + 0x30)), uVar4 <= uVar26)) ||
                   (*(ulong *)(lVar15 + uVar14 * 8 + 0x20) =
                         CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                  fVar33 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                           (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                                  (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20),
                                  ((float)unaff_x19[0xc9] +
                                  fVar33 * ((float)unaff_x19[0xd4] - (float)unaff_x19[0xd8])) -
                                  (float)*(undefined8 *)(lVar20 + 0x30)), uVar4 <= uVar24))
                goto LAB_00e44400;
                uVar39 = unaff_x19[0xd8];
                *(ulong *)(lVar15 + uVar25 * 8 + 0x20) =
                     CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                              fVar33 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) -
                                       (float)(uVar39 >> 0x20))) -
                              (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20),
                              ((float)unaff_x19[0xc9] +
                              fVar33 * ((float)unaff_x19[0xd6] - (float)uVar39)) -
                              (float)*(undefined8 *)(lVar20 + 0x30));
              }
            }
LAB_00e3dbd8:
            dVar16 = *in_stack_00000060;
            if (dVar16 == 0.0) goto LAB_00e443fc;
            if (*(char *)((long)dVar16 + 0x108) != '\0') {
              if (*(long *)((long)dVar16 + 0x100) == 0) goto LAB_00e443fc;
              if (*(char *)(*(long *)((long)dVar16 + 0x100) + 0x20) == '\0') {
                lVar20 = *unaff_x28;
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_00e44400;
                lVar15 = *in_stack_00000028;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_00e44400;
                *(undefined8 *)(lVar15 + uVar17 * 8 + 0x20) =
                     *(undefined8 *)(lVar20 + uVar17 * 8 + 0x20);
                lVar20 = *unaff_x28;
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_00e44400;
                lVar15 = *in_stack_00000028;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_00e44400;
                *(undefined8 *)(lVar15 + (long)(int)uVar28 * 8 + 0x20) =
                     *(undefined8 *)(lVar20 + (long)(int)uVar28 * 8 + 0x20);
                lVar20 = *unaff_x28;
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
                lVar15 = *in_stack_00000028;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
                *(undefined8 *)(lVar15 + (long)(int)uVar26 * 8 + 0x20) =
                     *(undefined8 *)(lVar20 + (long)(int)uVar26 * 8 + 0x20);
                lVar20 = *unaff_x28;
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                lVar15 = *in_stack_00000028;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
                *(undefined8 *)(lVar15 + uVar25 * 8 + 0x20) =
                     *(undefined8 *)(lVar20 + uVar25 * 8 + 0x20);
                dVar16 = *in_stack_00000060;
                if (dVar16 == 0.0) goto LAB_00e443fc;
              }
            }
            dVar37 = DAT_028aa048;
            if (*(char *)((long)dVar16 + 0x108) == '\0') {
LAB_00e3dd34:
              uVar11 = *(undefined8 *)((long)dVar16 + 0xa8);
              if (*(int *)(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar30 = FUN_02681b9c(uVar11,0,0);
              dVar16 = *in_stack_00000060;
              if (dVar16 == 0.0) goto LAB_00e443fc;
              if ((uVar30 & 1) == 0) {
                uVar11 = *(undefined8 *)((long)dVar16 + 0xb0);
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar30 = FUN_02681b9c(uVar11,0,0);
                dVar16 = DAT_028aa048;
                if ((uVar30 & 1) == 0) {
                  if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                  uVar11 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar39 = FUN_02681b9c(uVar11,0,0);
                  lVar20 = *unaff_x24;
                  if ((uVar39 & 1) == 0) {
                    fVar33 = *(float *)((long)unaff_x19 + 0x8c);
                    fVar32 = *(float *)(unaff_x19 + 0x12);
                    fVar34 = *(float *)((long)unaff_x19 + 0x94);
                    fVar38 = *(float *)(unaff_x19 + 0x13);
                    fVar31 = fVar33;
                    if (unaff_s10 < fVar33) {
                      fVar31 = unaff_s10;
                    }
                    fVar31 = fVar31 * 255.0;
                    if (fVar33 < 0.0) {
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
                    fVar33 = fVar32;
                    if (1.0 < fVar32) {
                      fVar33 = 1.0;
                    }
                    fVar33 = fVar33 * 255.0;
                    if (fVar32 < 0.0) {
                      fVar33 = unaff_s8;
                    }
                    dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                    if (0.0 <= fVar33) {
                      if (dVar16 == 0.5) {
                        fVar33 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3fd48;
                      }
                      fVar32 = (float)(int)(fVar33 + 0.5);
                    }
                    else if (dVar16 == -0.5) {
                      fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
                      fVar32 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar32 = fVar33;
                      }
                    }
                    else {
                      fVar32 = (float)(int)(fVar33 + -0.5);
                    }
                    fVar33 = fVar34;
                    if (1.0 < fVar34) {
                      fVar33 = 1.0;
                    }
                    fVar33 = fVar33 * 255.0;
                    if (fVar34 < 0.0) {
                      fVar33 = unaff_s8;
                    }
                    dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                    if (0.0 <= fVar33) {
                      if (dVar16 == 0.5) {
                        fVar33 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar33 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar33 = (float)(int)(fVar33 + 0.5);
                      }
                    }
                    else if (dVar16 == -0.5) {
                      fVar33 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar33 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar33 = (float)(int)(fVar33 + -0.5);
                    }
                    fVar34 = fVar38;
                    if (1.0 < fVar38) {
                      fVar34 = 1.0;
                    }
                    fVar34 = fVar34 * 255.0;
                    if (fVar38 < 0.0) {
                      fVar34 = unaff_s8;
                    }
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
                    if (lVar20 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_00e44400;
                    *(uint *)(lVar20 + uVar17 * 4 + 0x20) =
                         (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                         ((int)fVar33 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                    fVar33 = *(float *)(unaff_x19 + 0x12);
                    lVar20 = unaff_x19[0x5f];
                    fVar38 = *(float *)((long)unaff_x19 + 0x94);
                    fVar32 = *(float *)(unaff_x19 + 0x13);
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
                        fVar33 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e40610;
                      }
                      fVar34 = (float)(int)(fVar34 + 0.5);
                    }
                    else if (dVar16 == -0.5) {
                      fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
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
                        fVar33 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar33 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar33 = (float)(int)(fVar33 + 0.5);
                      }
                    }
                    else if (dVar16 == -0.5) {
                      fVar33 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar33 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar33 = (float)(int)(fVar33 + -0.5);
                    }
                    fVar38 = fVar32;
                    if (1.0 < fVar32) {
                      fVar38 = 1.0;
                    }
                    fVar38 = fVar38 * 255.0;
                    if (fVar32 < 0.0) {
                      fVar38 = unaff_s8;
                    }
                    dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
                    if (0.0 <= fVar38) {
                      if (dVar16 == 0.5) {
                        fVar32 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar32 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar32 = (float)(int)(fVar38 + 0.5);
                      }
                    }
                    else if (dVar16 == -0.5) {
                      fVar32 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar32 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar32 = (float)(int)(fVar38 + -0.5);
                    }
                    if (lVar20 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_00e44400;
                    *(uint *)(lVar20 + (long)(int)uVar28 * 4 + 0x20) =
                         (int)fVar31 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                         ((int)fVar33 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
                    fVar33 = *(float *)(unaff_x19 + 0x12);
                    lVar20 = unaff_x19[0x5f];
                    fVar38 = *(float *)((long)unaff_x19 + 0x94);
                    fVar32 = *(float *)(unaff_x19 + 0x13);
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
                        fVar33 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e40e20;
                      }
                      fVar34 = (float)(int)(fVar34 + 0.5);
                    }
                    else if (dVar16 == -0.5) {
                      fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
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
                        fVar33 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar33 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar33 = (float)(int)(fVar33 + 0.5);
                      }
                    }
                    else if (dVar16 == -0.5) {
                      fVar33 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar33 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar33 = (float)(int)(fVar33 + -0.5);
                    }
                    fVar38 = fVar32;
                    if (1.0 < fVar32) {
                      fVar38 = 1.0;
                    }
                    fVar38 = fVar38 * 255.0;
                    if (fVar32 < 0.0) {
                      fVar38 = unaff_s8;
                    }
                    dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
                    if (0.0 <= fVar38) {
                      if (dVar16 == 0.5) {
                        fVar32 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar32 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar32 = (float)(int)(fVar38 + 0.5);
                      }
                    }
                    else if (dVar16 == -0.5) {
                      fVar32 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar32 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar32 = (float)(int)(fVar38 + -0.5);
                    }
                    if (lVar20 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
                    *(uint *)(lVar20 + (long)(int)uVar26 * 4 + 0x20) =
                         (int)fVar31 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                         ((int)fVar33 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
                    fVar31 = *(float *)((long)unaff_x19 + 0x8c);
                    fVar33 = *(float *)(unaff_x19 + 0x12);
                    lVar20 = unaff_x19[0x5f];
                    fVar38 = *(float *)((long)unaff_x19 + 0x94);
                    fVar32 = *(float *)(unaff_x19 + 0x13);
                  }
                  else {
                    if ((*in_stack_00000060 == 0.0) ||
                       (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0))
                    goto LAB_00e443fc;
                    fVar33 = *(float *)(lVar15 + 0x18);
                    fVar32 = *(float *)(lVar15 + 0x1c);
                    fVar34 = *(float *)(lVar15 + 0x20);
                    fVar38 = *(float *)(lVar15 + 0x24);
                    fVar31 = fVar33;
                    if (unaff_s10 < fVar33) {
                      fVar31 = unaff_s10;
                    }
                    fVar31 = fVar31 * 255.0;
                    if (fVar33 < 0.0) {
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
                    fVar33 = fVar32;
                    if (1.0 < fVar32) {
                      fVar33 = 1.0;
                    }
                    fVar33 = fVar33 * 255.0;
                    if (fVar32 < 0.0) {
                      fVar33 = unaff_s8;
                    }
                    dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                    if (0.0 <= fVar33) {
                      if (dVar16 == 0.5) {
                        fVar33 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3fcc4;
                      }
                      fVar32 = (float)(int)(fVar33 + 0.5);
                    }
                    else if (dVar16 == -0.5) {
                      fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
                      fVar32 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar32 = fVar33;
                      }
                    }
                    else {
                      fVar32 = (float)(int)(fVar33 + -0.5);
                    }
                    fVar33 = fVar34;
                    if (1.0 < fVar34) {
                      fVar33 = 1.0;
                    }
                    fVar33 = fVar33 * 255.0;
                    if (fVar34 < 0.0) {
                      fVar33 = unaff_s8;
                    }
                    dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                    if (0.0 <= fVar33) {
                      if (dVar16 == 0.5) {
                        fVar33 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar33 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar33 = (float)(int)(fVar33 + 0.5);
                      }
                    }
                    else if (dVar16 == -0.5) {
                      fVar33 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar33 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar33 = (float)(int)(fVar33 + -0.5);
                    }
                    fVar34 = fVar38;
                    if (1.0 < fVar38) {
                      fVar34 = 1.0;
                    }
                    fVar34 = fVar34 * 255.0;
                    if (fVar38 < 0.0) {
                      fVar34 = unaff_s8;
                    }
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
                    if (lVar20 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_00e44400;
                    *(uint *)(lVar20 + uVar17 * 4 + 0x20) =
                         (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                         ((int)fVar33 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                    if ((*in_stack_00000060 == 0.0) ||
                       (lVar20 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar20 == 0))
                    goto LAB_00e443fc;
                    fVar33 = *(float *)(lVar20 + 0x1c);
                    lVar15 = *unaff_x24;
                    fVar38 = *(float *)(lVar20 + 0x20);
                    fVar32 = *(float *)(lVar20 + 0x24);
                    fVar31 = *(float *)(lVar20 + 0x18) * 255.0;
                    if (*(float *)(lVar20 + 0x18) < 0.0) {
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
                    fVar34 = fVar34 * 255.0;
                    if (fVar33 < 0.0) {
                      fVar34 = unaff_s8;
                    }
                    dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
                    if (0.0 <= fVar34) {
                      if (dVar16 == 0.5) {
                        fVar33 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e4057c;
                      }
                      fVar34 = (float)(int)(fVar34 + 0.5);
                    }
                    else if (dVar16 == -0.5) {
                      fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
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
                        fVar33 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar33 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar33 = (float)(int)(fVar33 + 0.5);
                      }
                    }
                    else if (dVar16 == -0.5) {
                      fVar33 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar33 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar33 = (float)(int)(fVar33 + -0.5);
                    }
                    fVar38 = fVar32;
                    if (1.0 < fVar32) {
                      fVar38 = 1.0;
                    }
                    fVar38 = fVar38 * 255.0;
                    if (fVar32 < 0.0) {
                      fVar38 = unaff_s8;
                    }
                    dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
                    if (0.0 <= fVar38) {
                      if (dVar16 == 0.5) {
                        fVar32 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar32 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar32 = (float)(int)(fVar38 + 0.5);
                      }
                    }
                    else if (dVar16 == -0.5) {
                      fVar32 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar32 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar32 = (float)(int)(fVar38 + -0.5);
                    }
                    if (lVar15 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_00e44400;
                    *(uint *)(lVar15 + (long)(int)uVar28 * 4 + 0x20) =
                         (int)fVar31 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                         ((int)fVar33 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
                    if ((*in_stack_00000060 == 0.0) ||
                       (lVar20 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar20 == 0))
                    goto LAB_00e443fc;
                    fVar33 = *(float *)(lVar20 + 0x1c);
                    lVar15 = *unaff_x24;
                    fVar38 = *(float *)(lVar20 + 0x20);
                    fVar32 = *(float *)(lVar20 + 0x24);
                    fVar31 = *(float *)(lVar20 + 0x18) * 255.0;
                    if (*(float *)(lVar20 + 0x18) < 0.0) {
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
                    fVar34 = fVar34 * 255.0;
                    if (fVar33 < 0.0) {
                      fVar34 = unaff_s8;
                    }
                    dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
                    if (0.0 <= fVar34) {
                      if (dVar16 == 0.5) {
                        fVar33 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e40d8c;
                      }
                      fVar34 = (float)(int)(fVar34 + 0.5);
                    }
                    else if (dVar16 == -0.5) {
                      fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
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
                        fVar33 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar33 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar33 = (float)(int)(fVar33 + 0.5);
                      }
                    }
                    else if (dVar16 == -0.5) {
                      fVar33 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar33 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar33 = (float)(int)(fVar33 + -0.5);
                    }
                    fVar38 = fVar32;
                    if (1.0 < fVar32) {
                      fVar38 = 1.0;
                    }
                    fVar38 = fVar38 * 255.0;
                    if (fVar32 < 0.0) {
                      fVar38 = unaff_s8;
                    }
                    dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
                    if (0.0 <= fVar38) {
                      if (dVar16 == 0.5) {
                        fVar32 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar32 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar32 = (float)(int)(fVar38 + 0.5);
                      }
                    }
                    else if (dVar16 == -0.5) {
                      fVar32 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar32 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar32 = (float)(int)(fVar38 + -0.5);
                    }
                    if (lVar15 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
                    *(uint *)(lVar15 + (long)(int)uVar26 * 4 + 0x20) =
                         (int)fVar31 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                         ((int)fVar33 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
                    if ((*in_stack_00000060 == 0.0) ||
                       (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0))
                    goto LAB_00e443fc;
                    fVar31 = *(float *)(lVar15 + 0x18);
                    fVar33 = *(float *)(lVar15 + 0x1c);
                    lVar20 = *unaff_x24;
                    fVar38 = *(float *)(lVar15 + 0x20);
                    fVar32 = *(float *)(lVar15 + 0x24);
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
                      fVar33 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e412dc;
                    }
                    fVar34 = (float)(int)(fVar34 + 0.5);
                  }
                  else if (dVar16 == -0.5) {
                    fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
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
                      fVar33 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar33 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar33 = (float)(int)(fVar33 + 0.5);
                    }
                  }
                  else if (dVar16 == -0.5) {
                    fVar33 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar33 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar33 = (float)(int)(fVar33 + -0.5);
                  }
                  uVar39 = 0x3f800000;
                  fVar38 = fVar32;
                  if (1.0 < fVar32) {
                    fVar38 = 1.0;
                  }
                  fVar38 = fVar38 * 255.0;
                  if (fVar32 < 0.0) {
                    fVar38 = unaff_s8;
                  }
                  dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
                  if (0.0 <= fVar38) {
                    if (dVar16 == 0.5) {
                      fVar32 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar32 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar32 = (float)(int)(fVar38 + 0.5);
                    }
                  }
                  else if (dVar16 == -0.5) {
                    fVar32 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar32 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar32 = (float)(int)(fVar38 + -0.5);
                  }
                  if (lVar20 != 0) {
                    if (uVar24 < *(uint *)(lVar20 + 0x18)) {
                      *(uint *)(lVar20 + uVar25 * 4 + 0x20) =
                           (int)fVar31 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                           ((int)fVar33 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
                      goto LAB_00e43400;
                    }
                    goto LAB_00e44400;
                  }
                  goto LAB_00e443fc;
                }
                lVar20 = *unaff_x24;
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
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + unaff_s10;
                  }
                }
                else {
                  fVar33 = 255.0;
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
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = 255.0;
                }
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_00e44400;
                *(uint *)(lVar20 + uVar17 * 4 + 0x20) =
                     (int)fVar31 & 0xffU | ((int)fVar33 & 0xffU) << 8 |
                     ((int)fVar32 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                lVar20 = *unaff_x24;
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
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar33 = 255.0;
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
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_00e44400;
                *(uint *)(lVar20 + (long)(int)uVar28 * 4 + 0x20) =
                     (int)fVar31 & 0xffU | ((int)fVar33 & 0xffU) << 8 |
                     ((int)fVar32 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                lVar20 = *unaff_x24;
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
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar33 = 255.0;
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
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
                *(uint *)(lVar20 + (long)(int)uVar26 * 4 + 0x20) =
                     (int)fVar31 & 0xffU | ((int)fVar33 & 0xffU) << 8 |
                     ((int)fVar32 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                lVar20 = *unaff_x24;
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
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar33 = 255.0;
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
                dVar16 = modf(dVar16,(double *)&stack0x00000070);
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = 255.0;
                }
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                *(uint *)(lVar20 + uVar25 * 4 + 0x20) =
                     (int)fVar31 & 0xffU | ((int)fVar33 & 0xffU) << 8 |
                     ((int)fVar32 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                uVar11 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar30 = FUN_02681b9c(uVar11,0,0);
                if ((uVar30 & 1) == 0) goto LAB_00e43400;
                lVar20 = *unaff_x24;
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_00e44400;
                puVar23 = (uint *)(lVar20 + uVar17 * 4 + 0x20);
                uVar4 = *puVar23;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar20 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar20 == 0))
                goto LAB_00e443fc;
                fVar33 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar20 + 0x18);
                fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar20 + 0x1c);
                fVar38 = *(float *)(lVar20 + 0x20);
                fVar32 = *(float *)(lVar20 + 0x24);
                fVar31 = fVar33 * 255.0;
                if (fVar33 < 0.0) {
                  fVar31 = unaff_s8;
                }
                dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
                if (0.0 <= fVar31) {
                  if (dVar16 == 0.5) {
                    fVar31 = 1.0;
                    goto LAB_00e3ede4;
                  }
                  fVar33 = (float)(int)(fVar31 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar31 = -1.0;
LAB_00e3ede4:
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + fVar31;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar31 + -0.5);
                }
                fVar38 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar38;
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
                fVar34 = fVar38;
                if (1.0 < fVar38) {
                  fVar34 = 1.0;
                }
                fVar32 = ((float)(uVar4 >> 0x18) / 255.0) * fVar32;
                fVar34 = fVar34 * 255.0;
                if (fVar38 < 0.0) {
                  fVar34 = unaff_s8;
                }
                dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
                if (0.0 <= fVar34) {
                  if (dVar16 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3ffb0;
                  }
                  fVar34 = (float)(int)(fVar34 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = fVar38;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar34 + -0.5);
                }
                fVar38 = fVar32;
                if (1.0 < fVar32) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar32 < 0.0) {
                  fVar38 = unaff_s8;
                }
                dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar16 == 0.5) {
                    fVar32 = 1.0;
                    goto LAB_00e40174;
                  }
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar32 = -1.0;
LAB_00e40174:
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + fVar32;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + -0.5);
                }
                *puVar23 = (int)fVar33 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                           ((int)fVar34 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                lVar20 = *unaff_x24;
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_00e44400;
                puVar23 = (uint *)(lVar20 + (long)(int)uVar28 * 4 + 0x20);
                uVar4 = *puVar23;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar20 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar20 == 0))
                goto LAB_00e443fc;
                fVar33 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar20 + 0x18);
                fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar20 + 0x1c);
                fVar38 = *(float *)(lVar20 + 0x20);
                fVar32 = *(float *)(lVar20 + 0x24);
                fVar31 = fVar33 * 255.0;
                if (fVar33 < 0.0) {
                  fVar31 = unaff_s8;
                }
                dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
                if (0.0 <= fVar31) {
                  if (dVar16 == 0.5) {
                    fVar31 = 1.0;
                    goto LAB_00e404dc;
                  }
                  fVar33 = (float)(int)(fVar31 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar31 = -1.0;
LAB_00e404dc:
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + fVar31;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar31 + -0.5);
                }
                fVar38 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar38;
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
                fVar34 = fVar38;
                if (1.0 < fVar38) {
                  fVar34 = 1.0;
                }
                fVar32 = ((float)(uVar4 >> 0x18) / 255.0) * fVar32;
                fVar34 = fVar34 * 255.0;
                if (fVar38 < 0.0) {
                  fVar34 = unaff_s8;
                }
                dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
                if (0.0 <= fVar34) {
                  if (dVar16 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e40888;
                  }
                  fVar34 = (float)(int)(fVar34 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = fVar38;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar34 + -0.5);
                }
                fVar38 = fVar32;
                if (1.0 < fVar32) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar32 < 0.0) {
                  fVar38 = unaff_s8;
                }
                dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar16 == 0.5) {
                    fVar32 = 1.0;
                    goto LAB_00e40a4c;
                  }
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar32 = -1.0;
LAB_00e40a4c:
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + fVar32;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + -0.5);
                }
                *puVar23 = (int)fVar33 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                           ((int)fVar34 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                lVar20 = *unaff_x24;
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
                lVar20 = lVar20 + (long)(int)uVar26 * 4;
              }
              else {
                lVar20 = *(long *)((long)dVar16 + 0xa8);
                if (lVar20 == 0) goto LAB_00e443fc;
                fVar33 = *(float *)(lVar20 + 0x24);
                if (fVar33 != 0.0) {
                  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                }
                plVar29 = (long *)StringLiteral_9119;
                cVar5 = *(char *)(lVar20 + 0x2c);
                lVar22 = *unaff_x24;
                lVar15 = *(long *)(lVar20 + 0x18);
                fVar31 = fVar31 * fVar33;
                if (*(int *)(lVar20 + 0x28) == 1) {
                  if (cVar5 == '\0') {
                    if (lVar15 == 0) goto LAB_00e443fc;
                    fVar32 = *(float *)(lVar20 + 0x20);
                    fVar38 = *(float *)((long)dVar16 + 0x84);
                    fVar31 = fVar31 + (*(float *)((long)dVar16 + 0x48) * fVar32) / fVar38;
                    fVar31 = fVar31 - (float)(int)fVar31;
                    fVar33 = fVar31;
                    if (unaff_s10 < fVar31) {
                      fVar33 = unaff_s10;
                    }
                    fVar34 = fVar33;
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
                    fVar31 = fVar33;
                    if (unaff_s10 < fVar33) {
                      fVar31 = unaff_s10;
                    }
                    fVar31 = fVar31 * 255.0;
                    if (fVar33 < 0.0) {
                      fVar31 = 0.0;
                    }
                    dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
                    if (0.0 <= fVar31) {
                      if (dVar16 == 0.5) {
                        fVar31 = (float)_fStack0000000000000070 + unaff_s10;
                        goto LAB_00e41534;
                      }
                      fVar33 = (float)(int)(fVar31 + 0.5);
                    }
                    else if (dVar16 == -0.5) {
                      fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                      fVar33 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar33 = fVar31;
                      }
                    }
                    else {
                      fVar33 = (float)(int)(fVar31 + -0.5);
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
                      fVar32 = 0.0;
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
                    if (lVar22 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar22 + 0x18) <= uVar6) goto LAB_00e44400;
                    *(uint *)(lVar22 + uVar17 * 4 + 0x20) =
                         (int)fVar34 & 0xffU | ((int)fVar33 & 0xffU) << 8 |
                         ((int)fVar31 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
                    dVar16 = *in_stack_00000060;
                    if (((dVar16 == 0.0) || (lVar20 = *(long *)((long)dVar16 + 0xa8), lVar20 == 0))
                       || (lVar15 = *(long *)(lVar20 + 0x18), lVar15 == 0)) goto LAB_00e443fc;
                    fVar32 = *(float *)((long)dVar16 + 0x48);
                    fVar38 = *(float *)((long)dVar16 + 0x84);
                    lVar22 = *unaff_x24;
                    fVar33 = fStack0000000000000048 * *(float *)(lVar20 + 0x24) +
                             (fVar32 * *(float *)(lVar20 + 0x20)) / fVar38;
                    fVar33 = fVar33 - (float)(int)fVar33;
                    fVar31 = fVar33;
                    if (1.0 < fVar33) {
                      fVar31 = 1.0;
                    }
                  }
                  else {
                    if (lVar15 == 0) goto LAB_00e443fc;
                    fVar32 = *(float *)((long)dVar16 + 0x84);
                    fVar38 = *(float *)(lVar20 + 0x20);
                    fVar31 = fVar31 + ((*(float *)((long)dVar16 + 0x48) + fVar32) * fVar38) / fVar32
                    ;
                    fVar31 = fVar31 - (float)(int)fVar31;
                    fVar33 = fVar31;
                    if (unaff_s10 < fVar31) {
                      fVar33 = unaff_s10;
                    }
                    fVar34 = fVar33;
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
                    fVar31 = fVar33;
                    if (unaff_s10 < fVar33) {
                      fVar31 = unaff_s10;
                    }
                    fVar31 = fVar31 * 255.0;
                    if (fVar33 < 0.0) {
                      fVar31 = 0.0;
                    }
                    dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
                    if (0.0 <= fVar31) {
                      if (dVar16 == 0.5) {
                        fVar31 = (float)_fStack0000000000000070 + unaff_s10;
                        goto LAB_00e3f2ec;
                      }
                      fVar33 = (float)(int)(fVar31 + 0.5);
                    }
                    else if (dVar16 == -0.5) {
                      fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                      fVar33 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar33 = fVar31;
                      }
                    }
                    else {
                      fVar33 = (float)(int)(fVar31 + -0.5);
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
                      fVar32 = 0.0;
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
                    if (lVar22 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar22 + 0x18) <= uVar6) goto LAB_00e44400;
                    *(uint *)(lVar22 + uVar17 * 4 + 0x20) =
                         (int)fVar34 & 0xffU | ((int)fVar33 & 0xffU) << 8 |
                         ((int)fVar31 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
                    dVar16 = *in_stack_00000060;
                    if (((dVar16 == 0.0) || (lVar20 = *(long *)((long)dVar16 + 0xa8), lVar20 == 0))
                       || (lVar15 = *(long *)(lVar20 + 0x18), lVar15 == 0)) goto LAB_00e443fc;
                    fVar32 = *(float *)((long)dVar16 + 0x84);
                    fVar38 = *(float *)(lVar20 + 0x20);
                    lVar22 = *unaff_x24;
                    fVar33 = fStack0000000000000048 * *(float *)(lVar20 + 0x24) +
                             ((*(float *)((long)dVar16 + 0x48) + fVar32) * fVar38) / fVar32;
                    fVar33 = fVar33 - (float)(int)fVar33;
                    fVar31 = fVar33;
                    if (1.0 < fVar33) {
                      fVar31 = 1.0;
                    }
                  }
                  fVar34 = fVar31;
                  if (fVar33 < 0.0) {
                    fVar34 = 0.0;
                  }
                  fVar34 = (float)FUN_0269ad38(fVar34,lVar15,0);
                  fVar33 = fVar34;
                  if (1.0 < fVar34) {
                    fVar33 = 1.0;
                  }
                  fVar33 = fVar33 * 255.0;
                  if (fVar34 < 0.0) {
                    fVar33 = 0.0;
                  }
                  dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                  if (0.0 <= fVar33) {
                    if (dVar16 == 0.5) {
                      fVar33 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e419a4;
                    }
                    fVar34 = (float)(int)(fVar33 + 0.5);
                  }
                  else if (dVar16 == -0.5) {
                    fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
                    fVar34 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar34 = fVar33;
                    }
                  }
                  else {
                    fVar34 = (float)(int)(fVar33 + -0.5);
                  }
                  fVar33 = fVar31;
                  if (1.0 < fVar31) {
                    fVar33 = 1.0;
                  }
                  fVar33 = fVar33 * 255.0;
                  if (fVar31 < 0.0) {
                    fVar33 = 0.0;
                  }
                  dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                  if (0.0 <= fVar33) {
                    if (dVar16 == 0.5) {
                      fVar31 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e41a34;
                    }
                    fVar33 = (float)(int)(fVar33 + 0.5);
                  }
                  else if (dVar16 == -0.5) {
                    fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
                    fVar33 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar33 = fVar31;
                    }
                  }
                  else {
                    fVar33 = (float)(int)(fVar33 + -0.5);
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
                    fVar32 = 0.0;
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
                  if (lVar22 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar22 + 0x18) <= uVar28) goto LAB_00e44400;
                  *(uint *)(lVar22 + (long)(int)uVar28 * 4 + 0x20) =
                       (int)fVar34 & 0xffU | ((int)fVar33 & 0xffU) << 8 |
                       ((int)fVar31 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
                  dVar16 = *in_stack_00000060;
                  if (((dVar16 == 0.0) || (lVar20 = *(long *)((long)dVar16 + 0xa8), lVar20 == 0)) ||
                     (*(long *)(lVar20 + 0x18) == 0)) goto LAB_00e443fc;
                  fVar32 = *(float *)((long)dVar16 + 0x48);
                  fVar38 = *(float *)((long)dVar16 + 0x84);
                  lVar15 = *unaff_x24;
                  fVar33 = fStack0000000000000048 * *(float *)(lVar20 + 0x24) +
                           (fVar32 * *(float *)(lVar20 + 0x20)) / fVar38;
                  fVar33 = fVar33 - (float)(int)fVar33;
                  fVar31 = fVar33;
                  if (1.0 < fVar33) {
                    fVar31 = 1.0;
                  }
                  fVar34 = fVar31;
                  if (fVar33 < 0.0) {
                    fVar34 = 0.0;
                  }
                  fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar20 + 0x18),0);
                  fVar33 = fVar34;
                  if (1.0 < fVar34) {
                    fVar33 = 1.0;
                  }
                  fVar33 = fVar33 * 255.0;
                  if (fVar34 < 0.0) {
                    fVar33 = 0.0;
                  }
                  dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                  if (0.0 <= fVar33) {
                    if (dVar16 == 0.5) {
                      fVar33 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e41cd0;
                    }
                    fVar34 = (float)(int)(fVar33 + 0.5);
                  }
                  else if (dVar16 == -0.5) {
                    fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
                    fVar34 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar34 = fVar33;
                    }
                  }
                  else {
                    fVar34 = (float)(int)(fVar33 + -0.5);
                  }
                  fVar33 = fVar31;
                  if (1.0 < fVar31) {
                    fVar33 = 1.0;
                  }
                  fVar33 = fVar33 * 255.0;
                  if (fVar31 < 0.0) {
                    fVar33 = 0.0;
                  }
                  dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                  if (0.0 <= fVar33) {
                    if (dVar16 == 0.5) {
                      fVar31 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e41d60;
                    }
                    fVar33 = (float)(int)(fVar33 + 0.5);
                  }
                  else if (dVar16 == -0.5) {
                    fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
                    fVar33 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar33 = fVar31;
                    }
                  }
                  else {
                    fVar33 = (float)(int)(fVar33 + -0.5);
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
                    fVar32 = 0.0;
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
                  if (lVar15 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
                  *(uint *)(lVar15 + (long)(int)uVar26 * 4 + 0x20) =
                       (int)fVar34 & 0xffU | ((int)fVar33 & 0xffU) << 8 |
                       ((int)fVar31 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
                  dVar16 = *in_stack_00000060;
                  if (((dVar16 == 0.0) || (lVar20 = *(long *)((long)dVar16 + 0xa8), lVar20 == 0)) ||
                     (*(long *)(lVar20 + 0x18) == 0)) goto LAB_00e443fc;
                  fVar32 = *(float *)((long)dVar16 + 0x48);
                  fVar38 = *(float *)((long)dVar16 + 0x84);
                  lVar15 = *unaff_x24;
                  fVar33 = fStack0000000000000048 * *(float *)(lVar20 + 0x24) +
                           (fVar32 * *(float *)(lVar20 + 0x20)) / fVar38;
                  fVar33 = fVar33 - (float)(int)fVar33;
                  fVar31 = fVar33;
                  if (1.0 < fVar33) {
                    fVar31 = 1.0;
                  }
                  fVar34 = fVar31;
                  if (fVar33 < 0.0) {
                    fVar34 = 0.0;
                  }
                  fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar20 + 0x18),0);
                  fVar33 = fVar34;
                  if (1.0 < fVar34) {
                    fVar33 = 1.0;
                  }
                  uVar39 = 0x437f0000;
                  fVar33 = fVar33 * 255.0;
                  if (fVar34 < 0.0) {
                    fVar33 = 0.0;
                  }
                  dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                  if (0.0 <= fVar33) {
                    if (dVar16 == 0.5) {
                      fVar33 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e41ffc;
                    }
                    fVar34 = (float)(int)(fVar33 + 0.5);
                  }
                  else if (dVar16 == -0.5) {
                    fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
                    fVar34 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar34 = fVar33;
                    }
                  }
                  else {
                    fVar34 = (float)(int)(fVar33 + -0.5);
                  }
                  fVar33 = fVar31;
                  if (1.0 < fVar31) {
                    fVar33 = 1.0;
                  }
                  fVar33 = fVar33 * 255.0;
                  if (fVar31 < 0.0) {
                    fVar33 = 0.0;
                  }
LAB_00e42040:
                  dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                  if (fVar33 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
                  if (dVar16 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070;
                    fVar33 = fVar31 + 1.0;
                    goto LAB_00e425d4;
                  }
                  fVar31 = (float)(int)(fVar33 + 0.5);
                }
                else {
                  lVar19 = *in_stack_00000038;
                  if (lVar19 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar19 + 0x18) <= uVar6) goto LAB_00e44400;
                  if (lVar15 == 0) goto LAB_00e443fc;
                  fVar32 = *(float *)(lVar19 + uVar17 * 0xc + 0x20);
                  fVar38 = *(float *)((long)dVar16 + 0x84);
                  fVar31 = fVar31 + (fVar32 * *(float *)(lVar20 + 0x20)) / fVar38;
                  fVar31 = fVar31 - (float)(int)fVar31;
                  fVar33 = fVar31;
                  if (unaff_s10 < fVar31) {
                    fVar33 = unaff_s10;
                  }
                  fVar34 = fVar33;
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
                  fVar31 = fVar33;
                  if (unaff_s10 < fVar33) {
                    fVar31 = unaff_s10;
                  }
                  fVar31 = fVar31 * 255.0;
                  if (fVar33 < 0.0) {
                    fVar31 = 0.0;
                  }
                  dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
                  if (0.0 <= fVar31) {
                    if (dVar16 == 0.5) {
                      fVar31 = (float)_fStack0000000000000070 + unaff_s10;
                      goto LAB_00e3ee80;
                    }
                    fVar33 = (float)(int)(fVar31 + 0.5);
                  }
                  else if (dVar16 == -0.5) {
                    fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
                    fVar33 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar33 = fVar31;
                    }
                  }
                  else {
                    fVar33 = (float)(int)(fVar31 + -0.5);
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
                    fVar32 = 0.0;
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
                  if (lVar22 == 0) goto LAB_00e443fc;
                  fVar38 = 1.0;
                  if (*(uint *)(lVar22 + 0x18) <= uVar6) goto LAB_00e44400;
                  *(uint *)(lVar22 + uVar17 * 4 + 0x20) =
                       (int)fVar34 & 0xffU | ((int)fVar33 & 0xffU) << 8 |
                       ((int)fVar31 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
                  plVar29 = (long *)StringLiteral_9119;
                  dVar16 = *in_stack_00000060;
                  if (((dVar16 == 0.0) || (lVar20 = *(long *)((long)dVar16 + 0xa8), lVar20 == 0)) ||
                     (lVar15 = *in_stack_00000038, lVar15 == 0)) goto LAB_00e443fc;
                  lVar19 = *unaff_x24;
                  lVar22 = *(long *)(lVar20 + 0x18);
                  fVar31 = fStack0000000000000048 * *(float *)(lVar20 + 0x24);
                  if (cVar5 != '\0') {
                    if (uVar28 < *(uint *)(lVar15 + 0x18)) {
                      if (lVar22 != 0) {
                        fVar32 = *(float *)(lVar15 + (long)(int)uVar28 * 0xc + 0x20);
                        fVar34 = *(float *)((long)dVar16 + 0x84);
                        fVar31 = fVar31 + (fVar32 * *(float *)(lVar20 + 0x20)) / fVar34;
                        fVar31 = fVar31 - (float)(int)fVar31;
                        fVar33 = fVar31;
                        if (1.0 < fVar31) {
                          fVar33 = fVar38;
                        }
                        fVar35 = fVar33;
                        if (fVar31 < 0.0) {
                          fVar35 = 0.0;
                        }
                        fVar35 = (float)FUN_0269ad38(fVar35,lVar22,0);
                        fVar31 = fVar35;
                        if (1.0 < fVar35) {
                          fVar31 = fVar38;
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
                          fVar38 = (float)(int)(fVar31 + 0.5);
                        }
                        else if (dVar16 == -0.5) {
                          fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                          fVar38 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar38 = fVar31;
                          }
                        }
                        else {
                          fVar38 = (float)(int)(fVar31 + -0.5);
                        }
                        fVar31 = fVar33;
                        if (1.0 < fVar33) {
                          fVar31 = 1.0;
                        }
                        fVar31 = fVar31 * 255.0;
                        if (fVar33 < 0.0) {
                          fVar31 = 0.0;
                        }
                        dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
                        if (0.0 <= fVar31) {
                          if (dVar16 == 0.5) {
                            fVar31 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e3f594;
                          }
                          fVar33 = (float)(int)(fVar31 + 0.5);
                        }
                        else if (dVar16 == -0.5) {
                          fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
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
                        if (lVar19 != 0) {
                          if (uVar28 < *(uint *)(lVar19 + 0x18)) {
                            *(uint *)(lVar19 + (long)(int)uVar28 * 4 + 0x20) =
                                 (int)fVar38 & 0xffU | ((int)fVar33 & 0xffU) << 8 |
                                 ((int)fVar31 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
                            dVar16 = *in_stack_00000060;
                            if (((dVar16 != 0.0) &&
                                (lVar20 = *(long *)((long)dVar16 + 0xa8), lVar20 != 0)) &&
                               (lVar15 = *in_stack_00000038, lVar15 != 0)) {
                              if (uVar26 < *(uint *)(lVar15 + 0x18)) {
                                if (*(long *)(lVar20 + 0x18) != 0) {
                                  fVar32 = *(float *)(lVar15 + (long)(int)uVar26 * 0xc + 0x20);
                                  fVar38 = *(float *)((long)dVar16 + 0x84);
                                  lVar15 = *unaff_x24;
                                  fVar33 = fStack0000000000000048 * *(float *)(lVar20 + 0x24) +
                                           (fVar32 * *(float *)(lVar20 + 0x20)) / fVar38;
                                  fVar33 = fVar33 - (float)(int)fVar33;
                                  fVar31 = fVar33;
                                  if (1.0 < fVar33) {
                                    fVar31 = 1.0;
                                  }
                                  fVar34 = fVar31;
                                  if (fVar33 < 0.0) {
                                    fVar34 = 0.0;
                                  }
                                  fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar20 + 0x18),0);
                                  fVar33 = fVar34;
                                  if (1.0 < fVar34) {
                                    fVar33 = 1.0;
                                  }
                                  fVar33 = fVar33 * 255.0;
                                  if (fVar34 < 0.0) {
                                    fVar33 = 0.0;
                                  }
                                  dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                                  if (0.0 <= fVar33) {
                                    if (dVar16 == 0.5) {
                                      fVar33 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e3f858;
                                    }
                                    fVar34 = (float)(int)(fVar33 + 0.5);
                                  }
                                  else if (dVar16 == -0.5) {
                                    fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                                    fVar34 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar34 = fVar33;
                                    }
                                  }
                                  else {
                                    fVar34 = (float)(int)(fVar33 + -0.5);
                                  }
                                  fVar33 = fVar31;
                                  if (1.0 < fVar31) {
                                    fVar33 = 1.0;
                                  }
                                  fVar33 = fVar33 * 255.0;
                                  if (fVar31 < 0.0) {
                                    fVar33 = 0.0;
                                  }
                                  dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                                  if (0.0 <= fVar33) {
                                    if (dVar16 == 0.5) {
                                      fVar31 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e3f8e8;
                                    }
                                    fVar33 = (float)(int)(fVar33 + 0.5);
                                  }
                                  else if (dVar16 == -0.5) {
                                    fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                                    fVar33 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar33 = fVar31;
                                    }
                                  }
                                  else {
                                    fVar33 = (float)(int)(fVar33 + -0.5);
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
                                    fVar32 = 0.0;
                                  }
                                  dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
                                  plVar29 = (long *)StringLiteral_9119;
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
                                  if (lVar15 != 0) {
                                    if (uVar26 < *(uint *)(lVar15 + 0x18)) {
                                      *(uint *)(lVar15 + (long)(int)uVar26 * 4 + 0x20) =
                                           (int)fVar34 & 0xffU | ((int)fVar33 & 0xffU) << 8 |
                                           ((int)fVar31 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
                                      dVar16 = *in_stack_00000060;
                                      if (((dVar16 != 0.0) &&
                                          (lVar20 = *(long *)((long)dVar16 + 0xa8), lVar20 != 0)) &&
                                         (lVar15 = *in_stack_00000038, lVar15 != 0)) {
                                        if (uVar24 < *(uint *)(lVar15 + 0x18)) {
                                          if (*(long *)(lVar20 + 0x18) != 0) {
                                            fVar32 = *(float *)(lVar15 + uVar25 * 0xc + 0x20);
                                            fVar38 = *(float *)((long)dVar16 + 0x84);
                                            lVar15 = *unaff_x24;
                                            fVar33 = fStack0000000000000048 *
                                                     *(float *)(lVar20 + 0x24) +
                                                     (fVar32 * *(float *)(lVar20 + 0x20)) / fVar38;
                                            fVar33 = fVar33 - (float)(int)fVar33;
                                            fVar31 = fVar33;
                                            if (1.0 < fVar33) {
                                              fVar31 = 1.0;
                                            }
                                            fVar34 = fVar31;
                                            if (fVar33 < 0.0) {
                                              fVar34 = 0.0;
                                            }
                                            fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar20 + 
                                                  0x18),0);
                                            fVar33 = fVar34;
                                            if (1.0 < fVar34) {
                                              fVar33 = 1.0;
                                            }
                                            uVar39 = 0x437f0000;
                                            fVar33 = fVar33 * 255.0;
                                            if (fVar34 < 0.0) {
                                              fVar33 = 0.0;
                                            }
                                            dVar16 = modf((double)fVar33,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar33) {
                                              if (dVar16 == 0.5) {
                                                fVar33 = (float)_fStack0000000000000070 + 1.0;
                                                goto LAB_00e3fbd0;
                                              }
                                              fVar34 = (float)(int)(fVar33 + 0.5);
                                            }
                                            else if (dVar16 == -0.5) {
                                              fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                              fVar34 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar34 = fVar33;
                                              }
                                            }
                                            else {
                                              fVar34 = (float)(int)(fVar33 + -0.5);
                                            }
                                            fVar33 = fVar31;
                                            if (1.0 < fVar31) {
                                              fVar33 = 1.0;
                                            }
                                            fVar33 = fVar33 * 255.0;
                                            if (fVar31 < 0.0) {
                                              fVar33 = 0.0;
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
                  if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_00e44400;
                  if (lVar22 == 0) goto LAB_00e443fc;
                  fVar32 = *(float *)(lVar15 + uVar17 * 0xc + 0x20);
                  fVar34 = *(float *)((long)dVar16 + 0x84);
                  fVar31 = fVar31 + (fVar32 * *(float *)(lVar20 + 0x20)) / fVar34;
                  fVar31 = fVar31 - (float)(int)fVar31;
                  fVar33 = fVar31;
                  if (1.0 < fVar31) {
                    fVar33 = fVar38;
                  }
                  fVar35 = fVar33;
                  if (fVar31 < 0.0) {
                    fVar35 = 0.0;
                  }
                  fVar35 = (float)FUN_0269ad38(fVar35,lVar22,0);
                  fVar31 = fVar35;
                  if (1.0 < fVar35) {
                    fVar31 = fVar38;
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
                    fVar38 = (float)(int)(fVar31 + 0.5);
                  }
                  else if (dVar16 == -0.5) {
                    fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = fVar31;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar31 + -0.5);
                  }
                  fVar31 = fVar33;
                  if (1.0 < fVar33) {
                    fVar31 = 1.0;
                  }
                  fVar31 = fVar31 * 255.0;
                  if (fVar33 < 0.0) {
                    fVar31 = 0.0;
                  }
                  dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
                  if (0.0 <= fVar31) {
                    if (dVar16 == 0.5) {
                      fVar31 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e415c4;
                    }
                    fVar33 = (float)(int)(fVar31 + 0.5);
                  }
                  else if (dVar16 == -0.5) {
                    fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
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
                  if (lVar19 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_00e44400;
                  *(uint *)(lVar19 + (long)(int)uVar28 * 4 + 0x20) =
                       (int)fVar38 & 0xffU | ((int)fVar33 & 0xffU) << 8 |
                       ((int)fVar31 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
                  dVar16 = *in_stack_00000060;
                  if (((dVar16 == 0.0) || (lVar20 = *(long *)((long)dVar16 + 0xa8), lVar20 == 0)) ||
                     (lVar15 = *in_stack_00000038, lVar15 == 0)) goto LAB_00e443fc;
                  if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_00e44400;
                  if (*(long *)(lVar20 + 0x18) == 0) goto LAB_00e443fc;
                  fVar32 = *(float *)(lVar15 + uVar17 * 0xc + 0x20);
                  fVar38 = *(float *)((long)dVar16 + 0x84);
                  lVar15 = *unaff_x24;
                  fVar33 = fStack0000000000000048 * *(float *)(lVar20 + 0x24) +
                           (fVar32 * *(float *)(lVar20 + 0x20)) / fVar38;
                  fVar33 = fVar33 - (float)(int)fVar33;
                  fVar31 = fVar33;
                  if (1.0 < fVar33) {
                    fVar31 = 1.0;
                  }
                  fVar34 = fVar31;
                  if (fVar33 < 0.0) {
                    fVar34 = 0.0;
                  }
                  fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar20 + 0x18),0);
                  fVar33 = fVar34;
                  if (1.0 < fVar34) {
                    fVar33 = 1.0;
                  }
                  fVar33 = fVar33 * 255.0;
                  if (fVar34 < 0.0) {
                    fVar33 = 0.0;
                  }
                  dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                  if (0.0 <= fVar33) {
                    if (dVar16 == 0.5) {
                      fVar33 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e421fc;
                    }
                    fVar34 = (float)(int)(fVar33 + 0.5);
                  }
                  else if (dVar16 == -0.5) {
                    fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
                    fVar34 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar34 = fVar33;
                    }
                  }
                  else {
                    fVar34 = (float)(int)(fVar33 + -0.5);
                  }
                  fVar33 = fVar31;
                  if (1.0 < fVar31) {
                    fVar33 = 1.0;
                  }
                  fVar33 = fVar33 * 255.0;
                  if (fVar31 < 0.0) {
                    fVar33 = 0.0;
                  }
                  dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                  if (0.0 <= fVar33) {
                    if (dVar16 == 0.5) {
                      fVar31 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e4228c;
                    }
                    fVar33 = (float)(int)(fVar33 + 0.5);
                  }
                  else if (dVar16 == -0.5) {
                    fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
                    fVar33 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar33 = fVar31;
                    }
                  }
                  else {
                    fVar33 = (float)(int)(fVar33 + -0.5);
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
                    fVar32 = 0.0;
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
                  if (lVar15 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
                  *(uint *)(lVar15 + (long)(int)uVar26 * 4 + 0x20) =
                       (int)fVar34 & 0xffU | ((int)fVar33 & 0xffU) << 8 |
                       ((int)fVar31 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
                  dVar16 = *in_stack_00000060;
                  if (((dVar16 == 0.0) || (lVar20 = *(long *)((long)dVar16 + 0xa8), lVar20 == 0)) ||
                     (lVar15 = *in_stack_00000038, lVar15 == 0)) goto LAB_00e443fc;
                  if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_00e44400;
                  if (*(long *)(lVar20 + 0x18) == 0) goto LAB_00e443fc;
                  fVar32 = *(float *)(lVar15 + uVar17 * 0xc + 0x20);
                  fVar38 = *(float *)((long)dVar16 + 0x84);
                  lVar15 = *unaff_x24;
                  fVar33 = fStack0000000000000048 * *(float *)(lVar20 + 0x24) +
                           (fVar32 * *(float *)(lVar20 + 0x20)) / fVar38;
                  fVar33 = fVar33 - (float)(int)fVar33;
                  fVar31 = fVar33;
                  if (1.0 < fVar33) {
                    fVar31 = 1.0;
                  }
                  fVar34 = fVar31;
                  if (fVar33 < 0.0) {
                    fVar34 = 0.0;
                  }
                  fVar34 = (float)FUN_0269ad38(fVar34,*(long *)(lVar20 + 0x18),0);
                  fVar33 = fVar34;
                  if (1.0 < fVar34) {
                    fVar33 = 1.0;
                  }
                  uVar39 = 0x437f0000;
                  fVar33 = fVar33 * 255.0;
                  if (fVar34 < 0.0) {
                    fVar33 = 0.0;
                  }
                  dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                  if (0.0 <= fVar33) {
                    if (dVar16 == 0.5) {
                      fVar33 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e42560;
                    }
                    fVar34 = (float)(int)(fVar33 + 0.5);
                  }
                  else if (dVar16 == -0.5) {
                    fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
                    fVar34 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar34 = fVar33;
                    }
                  }
                  else {
                    fVar34 = (float)(int)(fVar33 + -0.5);
                  }
                  fVar33 = fVar31;
                  if (1.0 < fVar31) {
                    fVar33 = 1.0;
                  }
                  fVar33 = fVar33 * 255.0;
                  if (fVar31 < 0.0) {
                    fVar33 = 0.0;
                  }
                  dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                  if (0.0 <= fVar33) goto LAB_00e425b8;
LAB_00e4204c:
                  if (dVar16 == -0.5) {
                    fVar31 = (float)_fStack0000000000000070;
                    fVar33 = fVar31 + -1.0;
LAB_00e425d4:
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar31 = fVar33;
                    }
                  }
                  else {
                    fVar31 = (float)(int)(fVar33 + -0.5);
                  }
                }
                unaff_s8 = 0.0;
                fVar33 = fVar32;
                if (1.0 < fVar32) {
                  fVar33 = 1.0;
                }
                fVar33 = fVar33 * 255.0;
                if (fVar32 < 0.0) {
                  fVar33 = 0.0;
                }
                dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                if (0.0 <= fVar33) {
                  if (dVar16 == 0.5) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e42654;
                  }
                  fVar32 = (float)(int)(fVar33 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = fVar33;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar33 + -0.5);
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
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e426e4;
                  }
                  fVar38 = (float)(int)(fVar33 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = fVar33;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar33 + -0.5);
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
                *(uint *)(lVar15 + uVar25 * 4 + 0x20) =
                     (int)fVar34 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                     ((int)fVar32 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                uVar11 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
                unaff_d14 = _fStack0000000000000048 & 0xffffffff;
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar30 = FUN_02681b9c(uVar11,0,0);
                if ((uVar30 & 1) == 0) goto LAB_00e43400;
                lVar20 = *unaff_x24;
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_00e44400;
                puVar23 = (uint *)(lVar20 + uVar17 * 4 + 0x20);
                uVar4 = *puVar23;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar20 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar20 == 0))
                goto LAB_00e443fc;
                fVar31 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar20 + 0x18);
                fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar20 + 0x1c);
                fVar38 = *(float *)(lVar20 + 0x20);
                fVar32 = *(float *)(lVar20 + 0x24);
                fVar33 = fVar31 * 255.0;
                if (fVar31 < 0.0) {
                  fVar33 = 0.0;
                }
                dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                if (0.0 <= fVar33) {
                  if (dVar16 == 0.5) {
                    fVar31 = 1.0;
                    goto LAB_00e4287c;
                  }
                  fVar33 = (float)(int)(fVar33 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar31 = -1.0;
LAB_00e4287c:
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + fVar31;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar33 + -0.5);
                }
                fVar31 = fVar34 * 255.0;
                fVar38 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar38;
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
                fVar34 = fVar38;
                if (1.0 < fVar38) {
                  fVar34 = 1.0;
                }
                fVar34 = fVar34 * 255.0;
                fVar32 = ((float)(uVar4 >> 0x18) / 255.0) * fVar32;
                if (fVar38 < 0.0) {
                  fVar34 = 0.0;
                }
                dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
                if (0.0 <= fVar34) {
                  if (dVar16 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e429c8;
                  }
                  fVar34 = (float)(int)(fVar34 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = fVar38;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar34 + -0.5);
                }
                fVar38 = fVar32;
                if (1.0 < fVar32) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar32 < 0.0) {
                  fVar38 = 0.0;
                }
                dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar16 == 0.5) {
                    fVar32 = 1.0;
                    goto LAB_00e42a44;
                  }
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar32 = -1.0;
LAB_00e42a44:
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + fVar32;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + -0.5);
                }
                *puVar23 = (int)fVar33 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                           ((int)fVar34 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                lVar20 = *unaff_x24;
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_00e44400;
                puVar23 = (uint *)(lVar20 + (long)(int)uVar28 * 4 + 0x20);
                uVar4 = *puVar23;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar20 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar20 == 0))
                goto LAB_00e443fc;
                fVar31 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar20 + 0x18);
                fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar20 + 0x1c);
                fVar38 = *(float *)(lVar20 + 0x20);
                fVar32 = *(float *)(lVar20 + 0x24);
                fVar33 = fVar31 * 255.0;
                if (fVar31 < 0.0) {
                  fVar33 = 0.0;
                }
                dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                if (0.0 <= fVar33) {
                  if (dVar16 == 0.5) {
                    fVar31 = 1.0;
                    goto LAB_00e42b80;
                  }
                  fVar33 = (float)(int)(fVar33 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar31 = -1.0;
LAB_00e42b80:
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + fVar31;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar33 + -0.5);
                }
                fVar31 = fVar34 * 255.0;
                fVar38 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar38;
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
                fVar34 = fVar38;
                if (1.0 < fVar38) {
                  fVar34 = 1.0;
                }
                fVar34 = fVar34 * 255.0;
                fVar32 = ((float)(uVar4 >> 0x18) / 255.0) * fVar32;
                if (fVar38 < 0.0) {
                  fVar34 = 0.0;
                }
                dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
                if (0.0 <= fVar34) {
                  if (dVar16 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e42ccc;
                  }
                  fVar34 = (float)(int)(fVar34 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = fVar38;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar34 + -0.5);
                }
                fVar38 = fVar32;
                if (1.0 < fVar32) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar32 < 0.0) {
                  fVar38 = 0.0;
                }
                dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar16 == 0.5) {
                    fVar32 = 1.0;
                    goto LAB_00e42d48;
                  }
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar32 = -1.0;
LAB_00e42d48:
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + fVar32;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + -0.5);
                }
                *puVar23 = (int)fVar33 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                           ((int)fVar34 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                lVar20 = *unaff_x24;
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
                lVar20 = lVar20 + (long)(int)uVar26 * 4;
              }
              uVar4 = *(uint *)(lVar20 + 0x20);
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0))
              goto LAB_00e443fc;
              fVar33 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
              fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
              fVar38 = *(float *)(lVar15 + 0x20);
              fVar32 = *(float *)(lVar15 + 0x24);
              fVar31 = fVar33 * 255.0;
              if (fVar33 < 0.0) {
                fVar31 = unaff_s8;
              }
              dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar16 == 0.5) {
                  fVar31 = 1.0;
                  goto FUN_00e42e84;
                }
                fVar33 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar31 = -1.0;
FUN_00e42e84:
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + fVar31;
                }
              }
              else {
                fVar33 = (float)(int)(fVar31 + -0.5);
              }
              fVar38 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar38;
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
              fVar34 = fVar38;
              if (1.0 < fVar38) {
                fVar34 = 1.0;
              }
              fVar32 = ((float)(uVar4 >> 0x18) / 255.0) * fVar32;
              fVar34 = fVar34 * 255.0;
              if (fVar38 < 0.0) {
                fVar34 = unaff_s8;
              }
              dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
              if (0.0 <= fVar34) {
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e42fd0;
                }
                fVar34 = (float)(int)(fVar34 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = fVar38;
                }
              }
              else {
                fVar34 = (float)(int)(fVar34 + -0.5);
              }
              fVar38 = fVar32;
              if (1.0 < fVar32) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar32 < 0.0) {
                fVar38 = unaff_s8;
              }
              dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar16 == 0.5) {
                  fVar32 = 1.0;
                  goto LAB_00e4304c;
                }
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar32 = -1.0;
LAB_00e4304c:
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + fVar32;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              *(uint *)(lVar20 + 0x20) =
                   (int)fVar33 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
              lVar20 = *unaff_x24;
              if (lVar20 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
              puVar23 = (uint *)(lVar20 + uVar25 * 4 + 0x20);
              uVar4 = *puVar23;
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar20 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar20 == 0))
              goto LAB_00e443fc;
              fVar33 = (float)(uVar4 & 0xff) / 255.0;
              uVar39 = (ulong)(uint)fVar33;
              fVar33 = fVar33 * *(float *)(lVar20 + 0x18);
              fVar34 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar20 + 0x1c);
              fVar38 = *(float *)(lVar20 + 0x20);
              fVar32 = *(float *)(lVar20 + 0x24);
              fVar31 = fVar33 * 255.0;
              if (fVar33 < 0.0) {
                fVar31 = unaff_s8;
              }
              dVar16 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar16 == 0.5) {
                  fVar31 = 1.0;
                  goto LAB_00e4318c;
                }
                fVar33 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar31 = -1.0;
LAB_00e4318c:
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + fVar31;
                }
              }
              else {
                fVar33 = (float)(int)(fVar31 + -0.5);
              }
              fVar38 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar38;
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
              fVar34 = fVar38;
              if (1.0 < fVar38) {
                fVar34 = 1.0;
              }
              fVar32 = ((float)(uVar4 >> 0x18) / 255.0) * fVar32;
              fVar34 = fVar34 * 255.0;
              if (fVar38 < 0.0) {
                fVar34 = unaff_s8;
              }
              dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
              if (0.0 <= fVar34) {
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e432e0;
                }
                fVar34 = (float)(int)(fVar34 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = fVar38;
                }
              }
              else {
                fVar34 = (float)(int)(fVar34 + -0.5);
              }
              fVar38 = fVar32;
              if (1.0 < fVar32) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar32 < 0.0) {
                fVar38 = unaff_s8;
              }
              dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar16 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar38 + -0.5);
              }
              unaff_d14 = _fStack0000000000000048 & 0xffffffff;
              *puVar23 = (int)fVar33 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                         ((int)fVar34 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
              unaff_s15 = in_stack_00000008._4_4_;
            }
            else {
              if (*(long *)((long)dVar16 + 0x100) == 0) goto LAB_00e443fc;
              if (*(char *)(*(long *)((long)dVar16 + 0x100) + 0x20) != '\0') goto LAB_00e3dd34;
              lVar20 = *unaff_x24;
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
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + unaff_s10;
                }
              }
              else {
                fVar33 = 255.0;
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
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = 255.0;
              }
              if (lVar20 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_00e44400;
              *(uint *)(lVar20 + uVar17 * 4 + 0x20) =
                   (int)fVar31 & 0xffU | ((int)fVar33 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
              lVar20 = *unaff_x24;
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
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar33 = 255.0;
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
              if (lVar20 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_00e44400;
              *(uint *)(lVar20 + (long)(int)uVar28 * 4 + 0x20) =
                   (int)fVar31 & 0xffU | ((int)fVar33 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
              lVar20 = *unaff_x24;
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
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar33 = 255.0;
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
              if (lVar20 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
              *(uint *)(lVar20 + (long)(int)uVar26 * 4 + 0x20) =
                   (int)fVar31 & 0xffU | ((int)fVar33 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
              lVar20 = *unaff_x24;
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
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar33 = 255.0;
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
              if (lVar20 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
              *(uint *)(lVar20 + uVar25 * 4 + 0x20) =
                   (int)fVar31 & 0xffU | ((int)fVar33 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
            }
LAB_00e43400:
            lVar20 = *unaff_x24;
            if (lVar20 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_00e44400;
            lVar20 = lVar20 + uVar17 * 4;
            fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar20 + 0x23));
            *(char *)(lVar20 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar31);
            lVar20 = unaff_x19[0x5f];
            if (lVar20 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_00e44400;
            lVar20 = lVar20 + (long)(int)uVar28 * 4;
            fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar20 + 0x23));
            *(char *)(lVar20 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar31);
            lVar20 = unaff_x19[0x5f];
            if (lVar20 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
            lVar20 = lVar20 + (long)(int)uVar26 * 4;
            fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar20 + 0x23));
            *(char *)(lVar20 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar31);
            lVar20 = unaff_x19[0x5f];
            if (lVar20 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
            lVar20 = lVar20 + uVar25 * 4;
            uVar30 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
            fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar20 + 0x23));
            *(char *)(lVar20 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar31);
            uVar14 = FUN_00e3703c();
            if ((uVar14 & 1) == 0) {
              lVar20 = *plVar29;
              if (*(int *)(lVar20 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar20 = *plVar29;
              }
              if (*(int *)(*(long *)(lVar20 + 0xb8) + 0x20) == 1) {
                lVar20 = *unaff_x24;
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_00e44400;
                puVar23 = (uint *)(lVar20 + uVar17 * 4 + 0x20);
                uVar4 = *puVar23;
                fVar33 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
                fVar32 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,0);
                fVar38 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / 255.0,0);
                fVar31 = fVar33;
                if (1.0 < fVar33) {
                  fVar31 = 1.0;
                }
                fVar31 = fVar31 * 255.0;
                if (fVar33 < 0.0) {
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
                fVar33 = fVar32;
                if (1.0 < fVar32) {
                  fVar33 = 1.0;
                }
                fVar33 = fVar33 * 255.0;
                if (fVar32 < 0.0) {
                  fVar33 = unaff_s8;
                }
                dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                if (0.0 <= fVar33) {
                  if (dVar16 == 0.5) {
                    fVar33 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar33 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar33 = (float)(int)(fVar33 + 0.5);
                  }
                }
                else if (dVar16 == -0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar33 + -0.5);
                }
                fVar32 = fVar38;
                if (1.0 < fVar38) {
                  fVar32 = 1.0;
                }
                fVar34 = (float)(uVar4 >> 0x18) / 255.0;
                fVar32 = fVar32 * 255.0;
                if (fVar38 < 0.0) {
                  fVar32 = unaff_s8;
                }
                dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
                if (0.0 <= fVar32) {
                  if (dVar16 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e43744;
                  }
                  fVar38 = (float)(int)(fVar32 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = fVar32;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar32 + -0.5);
                }
                if (1.0 < fVar34) {
                  fVar34 = 1.0;
                }
                fVar34 = fVar34 * 255.0;
                dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
                if (0.0 <= fVar34) {
                  if (dVar16 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar32 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar32 = (float)(int)(fVar34 + 0.5);
                  }
                }
                else if (dVar16 == -0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar34 + -0.5);
                }
                if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_00e44400;
                *puVar23 = (int)fVar31 & 0xffU | ((int)fVar33 & 0xffU) << 8 |
                           ((int)fVar38 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
                lVar20 = *in_stack_00000030;
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_00e44400;
                puVar23 = (uint *)(lVar20 + (long)(int)uVar28 * 4 + 0x20);
                uVar6 = *puVar23;
                fVar33 = (float)FUN_026982b0((float)(uVar6 & 0xff) / 255.0,0);
                fVar32 = (float)FUN_026982b0((float)(uVar6 >> 8 & 0xff) / 255.0,0);
                fVar38 = (float)FUN_026982b0((float)(uVar6 >> 0x10 & 0xff) / 255.0,0);
                fVar31 = fVar33;
                if (1.0 < fVar33) {
                  fVar31 = 1.0;
                }
                fVar31 = fVar31 * 255.0;
                if (fVar33 < 0.0) {
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
                fVar33 = fVar32;
                if (1.0 < fVar32) {
                  fVar33 = 1.0;
                }
                fVar33 = fVar33 * 255.0;
                if (fVar32 < 0.0) {
                  fVar33 = unaff_s8;
                }
                dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                if (0.0 <= fVar33) {
                  if (dVar16 == 0.5) {
                    fVar33 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar33 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar33 = (float)(int)(fVar33 + 0.5);
                  }
                }
                else if (dVar16 == -0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar33 + -0.5);
                }
                fVar32 = fVar38;
                if (1.0 < fVar38) {
                  fVar32 = 1.0;
                }
                fVar34 = (float)(uVar6 >> 0x18) / 255.0;
                fVar32 = fVar32 * 255.0;
                if (fVar38 < 0.0) {
                  fVar32 = unaff_s8;
                }
                dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
                if (0.0 <= fVar32) {
                  if (dVar16 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e43a84;
                  }
                  fVar38 = (float)(int)(fVar32 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = fVar32;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar32 + -0.5);
                }
                if (1.0 < fVar34) {
                  fVar34 = 1.0;
                }
                fVar34 = fVar34 * 255.0;
                dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
                if (0.0 <= fVar34) {
                  if (dVar16 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar32 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar32 = (float)(int)(fVar34 + 0.5);
                  }
                }
                else if (dVar16 == -0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar34 + -0.5);
                }
                if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_00e44400;
                *puVar23 = (int)fVar31 & 0xffU | ((int)fVar33 & 0xffU) << 8 |
                           ((int)fVar38 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
                lVar20 = *in_stack_00000030;
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
                puVar23 = (uint *)(lVar20 + (long)(int)uVar26 * 4 + 0x20);
                uVar6 = *puVar23;
                fVar33 = (float)FUN_026982b0((float)(uVar6 & 0xff) / 255.0,0);
                fVar32 = (float)FUN_026982b0((float)(uVar6 >> 8 & 0xff) / 255.0,0);
                fVar38 = (float)FUN_026982b0((float)(uVar6 >> 0x10 & 0xff) / 255.0,0);
                fVar31 = fVar33;
                if (1.0 < fVar33) {
                  fVar31 = 1.0;
                }
                fVar31 = fVar31 * 255.0;
                if (fVar33 < 0.0) {
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
                fVar33 = fVar32;
                if (1.0 < fVar32) {
                  fVar33 = 1.0;
                }
                fVar33 = fVar33 * 255.0;
                if (fVar32 < 0.0) {
                  fVar33 = unaff_s8;
                }
                dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                if (0.0 <= fVar33) {
                  if (dVar16 == 0.5) {
                    fVar33 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar33 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar33 = (float)(int)(fVar33 + 0.5);
                  }
                }
                else if (dVar16 == -0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar33 + -0.5);
                }
                fVar32 = fVar38;
                if (1.0 < fVar38) {
                  fVar32 = 1.0;
                }
                fVar34 = (float)(uVar6 >> 0x18) / 255.0;
                fVar32 = fVar32 * 255.0;
                if (fVar38 < 0.0) {
                  fVar32 = unaff_s8;
                }
                dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
                if (0.0 <= fVar32) {
                  if (dVar16 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e43dbc;
                  }
                  fVar38 = (float)(int)(fVar32 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = fVar32;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar32 + -0.5);
                }
                if (1.0 < fVar34) {
                  fVar34 = 1.0;
                }
                fVar34 = fVar34 * 255.0;
                dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
                if (0.0 <= fVar34) {
                  if (dVar16 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar32 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar32 = (float)(int)(fVar34 + 0.5);
                  }
                }
                else if (dVar16 == -0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar34 + -0.5);
                }
                if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_00e44400;
                *puVar23 = (int)fVar31 & 0xffU | ((int)fVar33 & 0xffU) << 8 |
                           ((int)fVar38 & 0xffU) << 0x10 | (int)fVar32 << 0x18;
                lVar20 = *in_stack_00000030;
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                puVar23 = (uint *)(lVar20 + uVar25 * 4 + 0x20);
                uVar6 = *puVar23;
                fVar33 = (float)FUN_026982b0((float)(uVar6 & 0xff) / 255.0,0);
                fVar32 = (float)FUN_026982b0((float)(uVar6 >> 8 & 0xff) / 255.0,0);
                fVar38 = (float)FUN_026982b0((float)(uVar6 >> 0x10 & 0xff) / 255.0,0);
                fVar31 = fVar33;
                if (1.0 < fVar33) {
                  fVar31 = 1.0;
                }
                fVar31 = fVar31 * 255.0;
                if (fVar33 < 0.0) {
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
                uVar39 = 0x3f800000;
                fVar33 = fVar32;
                if (1.0 < fVar32) {
                  fVar33 = 1.0;
                }
                fVar33 = fVar33 * 255.0;
                if (fVar32 < 0.0) {
                  fVar33 = unaff_s8;
                }
                dVar16 = modf((double)fVar33,(double *)&stack0x00000070);
                if (0.0 <= fVar33) {
                  if (dVar16 == 0.5) {
                    fVar33 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar33 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar33 = (float)(int)(fVar33 + 0.5);
                  }
                }
                else if (dVar16 == -0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar33 + -0.5);
                }
                fVar32 = fVar38;
                if (1.0 < fVar38) {
                  fVar32 = 1.0;
                }
                fVar34 = (float)(uVar6 >> 0x18) / 255.0;
                fVar32 = fVar32 * 255.0;
                if (fVar38 < 0.0) {
                  fVar32 = unaff_s8;
                }
                dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
                if (0.0 <= fVar32) {
                  if (dVar16 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e440f4;
                  }
                  fVar38 = (float)(int)(fVar32 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = fVar32;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar32 + -0.5);
                }
                if (1.0 < fVar34) {
                  fVar34 = 1.0;
                }
                fVar34 = fVar34 * 255.0;
                dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
                if (0.0 <= fVar34) {
                  uVar30 = 0;
                  if (dVar16 == 0.5) {
                    fVar32 = 1.0;
                    goto LAB_00e44170;
                  }
                  fVar34 = (float)(int)(fVar34 + 0.5);
                }
                else {
                  uVar30 = 0;
                  if (dVar16 == -0.5) {
                    fVar32 = -1.0;
LAB_00e44170:
                    fVar32 = (float)_fStack0000000000000070 + fVar32;
                    uVar30 = (ulong)(uint)fVar32;
                    fVar34 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar34 = fVar32;
                    }
                  }
                  else {
                    fVar34 = (float)(int)(fVar34 + -0.5);
                  }
                }
                unaff_d14 = _fStack0000000000000048 & 0xffffffff;
                if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                *puVar23 = (int)fVar31 & 0xffU | ((int)fVar33 & 0xffU) << 8 |
                           ((int)fVar38 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
                unaff_x24 = in_stack_00000030;
              }
            }
            puVar8 = StringLiteral_4992;
            puVar7 = OVREyeGaze_TypeInfo;
            unaff_x21 = unaff_x21 + 1;
            unaff_x25 = &PTR_FUN_03774000;
            if (unaff_x21 == in_stack_00000018) {
              if (((unaff_x19[0x58] == 0) || (iVar10 = FUN_026c82cc(unaff_x19[0x58],0), iVar10 < 1))
                 && (unaff_x19[0x59] == 0)) goto LAB_00e443b0;
              puVar7 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
              if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0)) goto LAB_00e443fc;
              iVar10 = *(int *)(unaff_x19[0xf] + 0x10);
              plVar12 = unaff_x19 + 0xcb;
              if (iVar10 != *(int *)(unaff_x19[0xcb] + 0x18)) {
                FUN_010afdd4(plVar12,iVar10,
                             *(undefined8 *)Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
              }
              if ((unaff_x19[0xcc] == 0) || (lVar20 = unaff_x19[0xf], lVar20 == 0))
              goto LAB_00e443fc;
              plVar29 = unaff_x19 + 0xcc;
              if (*(int *)(lVar20 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
                FUN_010afdd4(plVar29,*(int *)(lVar20 + 0x10),*(undefined8 *)puVar7);
                lVar20 = unaff_x19[0xf];
                if (lVar20 == 0) goto LAB_00e443fc;
              }
              uVar6 = *(uint *)(lVar20 + 0x10);
              if ((int)uVar6 < 1) goto LAB_00e44358;
              uVar17 = 0;
              lVar20 = 0x20;
              goto LAB_00e442cc;
            }
            if (unaff_x19[9] == 0) goto LAB_00e443fc;
            FUN_0132138c(unaff_x19[9],unaff_x21 & 0xffffffff,&stack0x00000070,
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
              uVar39 = FUN_0269e56c(0);
              if (((fStack000000000000004c == 0.0) || ((uVar39 & 1) == 0)) ||
                 (1 < (int)unaff_x19[0x2a] - 3U)) {
                if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                iVar10 = *(int *)(unaff_x19[0xf] + 0x10) + -1;
                *(int *)((long)unaff_x19 + 0x38c) = iVar10;
                if ((unaff_x19[9] == 0) ||
                   (FUN_0132138c(unaff_x19[9],iVar10,&stack0x00000070,*(undefined8 *)puVar8),
                   _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
                *(undefined4 *)(unaff_x19 + 0x4a) =
                     *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
                if ((unaff_x19[9] == 0) ||
                   (FUN_0132138c(unaff_x19[9],*(undefined4 *)((long)unaff_x19 + 0x38c),
                                 &stack0x00000070,*(undefined8 *)puVar8),
                   _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
                *(float *)((long)unaff_x19 + 0x254) =
                     *(float *)((long)_fStack0000000000000070 + 0x48) +
                     *(float *)((long)unaff_x19 + 0x50c);
                *(undefined4 *)(unaff_x19 + 0x4b) = *(undefined4 *)((long)unaff_x19 + 0x18c);
              }
            }
            else {
              dVar16 = *in_stack_00000060;
              if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x78) == 0)) goto LAB_00e443fc;
              fVar33 = *(float *)(*(long *)((long)dVar16 + 0x78) + 0x18);
              fVar31 = DAT_028aa034;
              if (fVar33 != 0.0) {
                fVar31 = fVar33;
              }
              if ((0.0 < (unaff_s15 - *(float *)((long)dVar16 + 100)) / fVar31) &&
                 (*(char *)((long)dVar16 + 0x165) == '\0')) {
                *(undefined1 *)((long)dVar16 + 0x165) = 1;
                *(undefined1 *)((long)unaff_x19 + 0x6e1) = 1;
                if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                sVar9 = FUN_015fa29c(unaff_x19[0xf],unaff_x21 & 0xffffffff,0);
                if (sVar9 != 0x200b) {
                  *(undefined1 *)(unaff_x19 + 0xdc) = 1;
                  if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                  sVar9 = FUN_015fa29c(unaff_x19[0xf],unaff_x21 & 0xffffffff,0);
                  if (sVar9 != 0x20) {
                    if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                    sVar9 = FUN_015fa29c(unaff_x19[0xf],unaff_x21 & 0xffffffff,0);
                    if (sVar9 != 10) {
                      lVar20 = unaff_x19[0xca];
                      if (lVar20 == 0) goto LAB_00e443fc;
                      fVar32 = *(float *)(lVar20 + 0x48);
                      fVar31 = *(float *)(unaff_x19 + 0x4b);
                      fVar38 = fVar32 + *(float *)((long)unaff_x19 + 0x50c);
                      fVar33 = *(float *)(unaff_x19 + 0x4a);
                      if (fVar32 <= *(float *)(unaff_x19 + 0x4a)) {
                        fVar33 = fVar32;
                      }
                      *(float *)(unaff_x19 + 0x4a) = fVar33;
                      fVar33 = *(float *)((long)unaff_x19 + 0x254);
                      if (fVar38 <= *(float *)((long)unaff_x19 + 0x254)) {
                        fVar33 = fVar38;
                      }
                      *(float *)((long)unaff_x19 + 0x254) = fVar33;
                      fVar33 = (float)FUN_00e5ef30(*(undefined4 *)((long)unaff_x19 + 0x134),lVar20,0
                                                  );
                      fVar33 = fVar33 + *(float *)(unaff_x19 + 0xa1) +
                               *(float *)((long)unaff_x19 + 0x55c);
                      if (fVar31 <= fVar33) {
                        fVar31 = fVar33;
                      }
                      *(float *)(unaff_x19 + 0x4b) = fVar31;
                    }
                  }
                }
                iVar40 = *(int *)((long)unaff_x19 + 0x38c);
                if (*(int *)((long)unaff_x19 + 0x38c) <= iVar10) {
                  iVar40 = iVar10;
                }
                *(int *)((long)unaff_x19 + 0x38c) = iVar40;
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
              lVar20 = unaff_x19[0x55];
              if (lVar20 != 0) {
                (**(code **)(lVar20 + 0x18))
                          (*(undefined8 *)(lVar20 + 0x40),*(undefined8 *)(lVar20 + 0x28));
              }
            }
            unaff_x19[0xc6] = 0;
            fVar33 = 0.0;
            *(undefined4 *)(unaff_x19 + 199) = 0;
            fVar31 = 0.0;
            if ((((0.0 < fStack000000000000004c) &&
                 (uVar6 = *(uint *)(unaff_x19 + 0x2a), fVar31 = fVar33, uVar6 < 5)) &&
                ((1 << (ulong)(uVar6 & 0x1f) & 0x19U) != 0)) &&
               (*(float *)(unaff_x19 + 0x4a) < -*(float *)((long)unaff_x19 + 0x184))) {
              if (uVar6 == 4) {
                lVar20 = unaff_x19[0xc];
                if (lVar20 == 0) goto LAB_00e443fc;
                if (0 < *(int *)(lVar20 + 0x18)) {
                  iVar10 = 0;
                  do {
                    FUN_0132138c(lVar20,iVar10,&stack0x00000070,*(undefined8 *)puVar7);
                    *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
                    fVar31 = fStack0000000000000070;
                    if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <=
                        fStack0000000000000070) break;
                    lVar20 = unaff_x19[0xc];
                    if (lVar20 == 0) goto LAB_00e443fc;
                    iVar10 = iVar10 + 1;
                  } while (iVar10 < *(int *)(lVar20 + 0x18));
                }
              }
              else {
                lVar20 = unaff_x19[0xb];
                if (lVar20 == 0) goto LAB_00e443fc;
                iVar10 = 0;
                fVar31 = 0.0;
                while (iVar10 < *(int *)(lVar20 + 0x18)) {
                  FUN_0132138c(lVar20,iVar10,&stack0x00000070,*(undefined8 *)puVar7);
                  fVar31 = fVar31 + fStack0000000000000070;
                  *(float *)((long)unaff_x19 + 0x634) = fVar31;
                  if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <= fVar31)
                  break;
                  lVar20 = unaff_x19[0xb];
                  iVar10 = iVar10 + 1;
                  if (lVar20 == 0) goto LAB_00e443fc;
                }
              }
            }
            *(float *)(unaff_x19 + 0xc6) =
                 *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
            if (unaff_x19[9] == 0) goto LAB_00e443fc;
            fVar33 = *(float *)((long)unaff_x19 + 0x53c);
            FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar8);
            if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0)) goto LAB_00e443fc;
            fVar32 = *(float *)((long)_fStack0000000000000070 + 0x5c);
            FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar8);
            if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
            param_3 = (ulong)(uint)*(float *)(unaff_x19 + 0xa8);
            fVar38 = *(float *)(unaff_x19 + 199) + *(float *)(unaff_x19 + 0xa8);
            param_2 = (ulong)(uint)fVar38;
            *(float *)((long)unaff_x19 + 0x634) =
                 fVar31 + fVar33 + (fVar32 + -1.0) *
                                   *(float *)((long)_fStack0000000000000070 + 0x84);
            *(float *)(unaff_x19 + 199) = fVar38;
            unaff_x27 = (long *)
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
            ;
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            unaff_s10 = 1.0;
            uVar36 = *(undefined4 *)(*(undefined8 **)(*unaff_x27 + 0xb8) + 1);
            in_stack_00000040[0x10] = **(undefined8 **)(*unaff_x27 + 0xb8);
            *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar36;
            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
            uVar11 = *(undefined8 *)(unaff_x19[0xca] + 200);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar39 = FUN_02681b9c(uVar11,0,0);
            if ((uVar39 & 1) != 0) {
              lVar20 = __start_il2cpp();
              if (lVar20 == 0) goto LAB_00e443fc;
              if ((*(char *)(lVar20 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')
                 ) {
                *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                uVar36 = FUN_00e4ee40();
                *(undefined4 *)((long)unaff_x19 + 0x674) = uVar36;
                *(int *)(unaff_x19 + 0xcf) = (int)param_2;
                *(int *)((long)unaff_x19 + 0x67c) = (int)param_3;
              }
            }
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(unaff_x27);
              DAT_03774d76 = '\x01';
            }
            lVar15 = *unaff_x27;
            uVar36 = *(undefined4 *)(*(undefined8 **)(lVar15 + 0xb8) + 1);
            *in_stack_00000040 = **(undefined8 **)(lVar15 + 0xb8);
            *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar36;
            lVar20 = (*(long **)(lVar15 + 0xb8))[1];
            unaff_x19[0xc0] = **(long **)(lVar15 + 0xb8);
            *(int *)(unaff_x19 + 0xc1) = (int)lVar20;
            uVar36 = *(undefined4 *)(*(undefined8 **)(lVar15 + 0xb8) + 1);
            in_stack_00000040[3] = **(undefined8 **)(lVar15 + 0xb8);
            *(undefined4 *)((long)unaff_x19 + 0x614) = uVar36;
            lVar20 = (*(long **)(lVar15 + 0xb8))[1];
            unaff_x19[0xc3] = **(long **)(lVar15 + 0xb8);
            *(int *)(unaff_x19 + 0xc4) = (int)lVar20;
            uVar36 = *(undefined4 *)(*(undefined8 **)(lVar15 + 0xb8) + 1);
            in_stack_00000040[6] = **(undefined8 **)(lVar15 + 0xb8);
            *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar36;
            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
            uVar11 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar39 = FUN_02681b9c(uVar11,0,0);
            unaff_x23 = in_stack_00000040;
            unaff_x26 = in_stack_00000060;
            unaff_x28 = in_stack_00000020;
          } while ((uVar39 & 1) == 0);
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
        } while (*(float *)((long)*in_stack_00000060 + 0x84) == 0.0);
        lVar20 = __start_il2cpp();
        if (lVar20 == 0) goto LAB_00e443fc;
      } while ((*(char *)(lVar20 + 0x109) != '\0') || (*(char *)((long)unaff_x19 + 0xa9) != '\0'));
      lVar20 = unaff_x19[0xca];
      *(undefined1 *)(unaff_x19 + 0x2e) = 1;
      if ((lVar20 == 0) || (lVar15 = *(long *)(lVar20 + 0xc0), lVar15 == 0)) goto LAB_00e443fc;
      uVar39 = unaff_d14;
      if (*(char *)(lVar15 + 0x18) != '\0') {
        param_2 = (ulong)(uint)*(float *)(lVar20 + 100);
        uVar39 = (ulong)(uint)(*(float *)((long)unaff_x19 + 0x2ec) - *(float *)(lVar20 + 100));
      }
      if (*(char *)(lVar15 + 0x19) != '\0') {
        uVar36 = FUN_00e4e9f4(uVar39);
        lVar20 = unaff_x19[0xca];
        *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar36;
        *(int *)(unaff_x19 + 0xbf) = (int)param_2;
        *(int *)((long)unaff_x19 + 0x5fc) = (int)param_3;
        if (lVar20 == 0) goto LAB_00e443fc;
      }
      fVar31 = (float)param_2;
      if (*(long *)(lVar20 + 0xc0) == 0) goto LAB_00e443fc;
      if (*(char *)(*(long *)(lVar20 + 0xc0) + 0x28) != '\0') {
        fVar33 = (float)FUN_00e4e9f4(uVar39);
        *(float *)((long)unaff_x19 + 0x63c) = fVar33;
        *(float *)(unaff_x19 + 200) = fVar31;
        fVar32 = (float)param_3 + *(float *)(unaff_x19 + 0xc1);
        *(float *)((long)unaff_x19 + 0x644) = (float)param_3;
        unaff_x19[0xc0] =
             CONCAT44(fVar31 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                      fVar33 + (float)unaff_x19[0xc0]);
        *(float *)(unaff_x19 + 0xc1) = fVar32;
        if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0)) goto LAB_00e443fc;
        fVar31 = (float)FUN_00e4e9f4(uVar39);
        *(float *)((long)unaff_x19 + 0x63c) = fVar31;
        *(float *)(unaff_x19 + 200) = fVar32;
        *(float *)((long)unaff_x19 + 0x644) = (float)param_3;
        in_stack_00000040[3] =
             CONCAT44(fVar32 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                      fVar31 + (float)in_stack_00000040[3]);
        *(float *)((long)unaff_x19 + 0x614) = (float)param_3 + *(float *)((long)unaff_x19 + 0x614);
        if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0)) goto LAB_00e443fc;
        fVar31 = (float)FUN_00e4e9f4(uVar39);
        *(float *)((long)unaff_x19 + 0x63c) = fVar31;
        *(float *)(unaff_x19 + 200) = fVar32;
        fVar33 = (float)param_3 + *(float *)(unaff_x19 + 0xc4);
        param_2 = (ulong)(uint)fVar33;
        *(float *)((long)unaff_x19 + 0x644) = (float)param_3;
        unaff_x19[0xc3] =
             CONCAT44(fVar32 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                      fVar31 + (float)unaff_x19[0xc3]);
        *(float *)(unaff_x19 + 0xc4) = fVar33;
        if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0)) goto LAB_00e443fc;
        fVar31 = (float)FUN_00e4e9f4(uVar39);
        *(float *)((long)unaff_x19 + 0x63c) = fVar31;
        *(float *)(unaff_x19 + 200) = (float)param_2;
        *(float *)((long)unaff_x19 + 0x644) = (float)param_3;
        in_stack_00000040[6] =
             CONCAT44((float)param_2 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                      fVar31 + (float)in_stack_00000040[6]);
        lVar20 = unaff_x19[0xca];
        *(float *)((long)unaff_x19 + 0x62c) = (float)param_3 + *(float *)((long)unaff_x19 + 0x62c);
        if (lVar20 == 0) goto LAB_00e443fc;
      }
      fVar31 = (float)param_2;
      if (*(long *)(lVar20 + 0xc0) == 0) goto LAB_00e443fc;
    } while (*(char *)(*(long *)(lVar20 + 0xc0) + 0x50) == '\0');
    FUN_00e5eda8(lVar20,0);
    fVar33 = (float)FUN_00e4eb50();
    lVar20 = unaff_x19[0xca];
    *(float *)((long)unaff_x19 + 0x63c) = fVar33;
    *(float *)(unaff_x19 + 200) = fVar31;
    fVar32 = (float)param_3 + *(float *)(unaff_x19 + 0xc1);
    *(float *)((long)unaff_x19 + 0x644) = (float)param_3;
    unaff_x19[0xc0] =
         CONCAT44(fVar31 + (float)((ulong)unaff_x19[0xc0] >> 0x20),fVar33 + (float)unaff_x19[0xc0]);
    *(float *)(unaff_x19 + 0xc1) = fVar32;
    if ((lVar20 == 0) || (*(long *)(lVar20 + 0xc0) == 0)) break;
    FUN_00e5b838(lVar20,0);
    fVar31 = (float)FUN_00e4eb50();
    *(float *)((long)unaff_x19 + 0x63c) = fVar31;
    *(float *)(unaff_x19 + 200) = fVar32;
    *(float *)((long)unaff_x19 + 0x644) = (float)param_3;
    in_stack_00000040[3] =
         CONCAT44(fVar32 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                  fVar31 + (float)in_stack_00000040[3]);
    lVar20 = unaff_x19[0xca];
    *(float *)((long)unaff_x19 + 0x614) = (float)param_3 + *(float *)((long)unaff_x19 + 0x614);
    if ((lVar20 == 0) || (*(long *)(lVar20 + 0xc0) == 0)) break;
    FUN_00e5eea4(lVar20,0);
    fVar31 = (float)FUN_00e4eb50();
    param_4 = unaff_x19[0xca];
    *(float *)((long)unaff_x19 + 0x63c) = fVar31;
    *(float *)(unaff_x19 + 200) = fVar32;
    fVar33 = (float)param_3 + *(float *)(unaff_x19 + 0xc4);
    param_2 = (ulong)(uint)fVar33;
    *(float *)((long)unaff_x19 + 0x644) = (float)param_3;
    unaff_x19[0xc3] =
         CONCAT44(fVar32 + (float)((ulong)unaff_x19[0xc3] >> 0x20),fVar31 + (float)unaff_x19[0xc3]);
    *(float *)(unaff_x19 + 0xc4) = fVar33;
    if ((param_4 == 0) || (*(long *)(param_4 + 0xc0) == 0)) break;
    param_5 = 0;
  }
  goto LAB_00e443fc;
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar17 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar8);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar15 = unaff_x19[0xcb];
    uVar36 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar15 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar15 + 0x18) <= uVar17) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar1 = (undefined4 *)(lVar15 + lVar20);
    *puVar1 = uVar36;
    puVar1[1] = (int)uVar30;
    puVar1[2] = (int)uVar39;
    lVar15 = unaff_x19[0xca];
    if ((lVar15 == 0) || (lVar22 = unaff_x19[0xcc], lVar22 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar22 + 0x18) <= uVar17) goto LAB_00e44400;
    uVar36 = *(undefined4 *)(lVar15 + 0x4c);
    uVar17 = uVar17 + 1;
    puVar21 = (undefined8 *)(lVar22 + lVar20);
    lVar20 = lVar20 + 0xc;
    *puVar21 = *(undefined8 *)(lVar15 + 0x44);
    *(undefined4 *)(puVar21 + 1) = uVar36;
  } while (uVar6 != uVar17);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar12,*plVar29,
                 *(undefined8 *)StringLiteral_225);
  }
  lVar20 = unaff_x19[0x59];
  if (lVar20 != 0) {
    (**(code **)(lVar20 + 0x18))
              (*(undefined8 *)(lVar20 + 0x40),*in_stack_00000038,*plVar12,*plVar29,
               *(undefined8 *)(lVar20 + 0x28));
  }
  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
LAB_00e443b0:
  lVar20 = __start_il2cpp();
  if (lVar20 != 0) {
    if ((*(char *)(lVar20 + 0x109) != '\0') || (*(char *)((long)unaff_x19 + 0xa9) != '\0')) {
      *(undefined1 *)(unaff_x19 + 0x2e) = 0;
    }
    return;
  }
LAB_00e443fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


