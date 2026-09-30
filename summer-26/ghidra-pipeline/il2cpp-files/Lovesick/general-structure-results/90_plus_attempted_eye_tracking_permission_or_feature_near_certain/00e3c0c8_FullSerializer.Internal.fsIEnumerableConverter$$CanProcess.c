/*
FUNCTION_NAME: FullSerializer.Internal.fsIEnumerableConverter$$CanProcess
ENTRY_POINT: 00e3c0c8
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

void FullSerializer_Internal_fsIEnumerableConverter__CanProcess
               (undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  double *pdVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  char cVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  short sVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  double dVar20;
  long lVar21;
  float *pfVar22;
  long lVar23;
  long *unaff_x19;
  int unaff_w20;
  undefined8 *puVar24;
  long lVar25;
  uint *puVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  long *unaff_x22;
  undefined8 uVar31;
  uint uVar32;
  long *unaff_x24;
  long *plVar33;
  ulong uVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  double dVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  int iVar45;
  float fVar46;
  ulong unaff_d14;
  ulong uVar47;
  float unaff_s15;
  float fStack000000000000000c;
  long *in_stack_00000028;
  long *in_stack_00000038;
  undefined8 in_stack_00000048;
  float fStack0000000000000070;
  long in_stack_00000078;
  
  puVar11 = Method_TinyJSON_Variant_ToDateTime__;
  puVar10 = Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__;
  puVar9 = Method_System_Collections_Generic_Dictionary<string,_JsonSchemaNode>_GetEnumerator__;
  if (unaff_x19[0x62] != 0) {
    if (*(int *)(unaff_x19[0x62] + 0x18) != unaff_w20) {
      uVar14 = FUN_00da4fb8(*(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__
                            ,unaff_w20);
      lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar11);
      if (lVar15 == 0) goto LAB_00e443fc;
      FUN_01320f6c(lVar15,uVar14,*(undefined8 *)puVar9);
      unaff_x19[0x62] = lVar15;
    }
    if (unaff_x19[99] != 0) {
      if (*(int *)(unaff_x19[99] + 0x18) != unaff_w20) {
        uVar14 = FUN_00da4fb8(*(undefined8 *)puVar10,unaff_w20);
        lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar11);
        if (lVar15 == 0) goto LAB_00e443fc;
        FUN_01320f6c(lVar15,uVar14,*(undefined8 *)puVar9);
        unaff_x19[99] = lVar15;
      }
      if (unaff_x19[0xf] != 0) {
        uVar3 = *(uint *)(unaff_x19[0xf] + 0x10);
        if (0 < (int)uVar3) {
          uVar28 = 0;
          pdVar1 = (double *)(unaff_x19 + 0xca);
          fVar46 = (float)unaff_d14;
          uVar47 = unaff_d14;
          fStack000000000000000c = unaff_s15;
          do {
            puVar10 = StringLiteral_4992;
            puVar9 = OVREyeGaze_TypeInfo;
            fVar37 = 0.0;
            if (unaff_x19[9] == 0) goto LAB_00e443fc;
            FUN_0132138c(unaff_x19[9],uVar28 & 0xffffffff,&stack0x00000070,
                         *(undefined8 *)StringLiteral_4992);
            *pdVar1 = _fStack0000000000000070;
            if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
            iVar13 = FUN_00e4e99c();
            if (iVar13 <= *(int *)((long)unaff_x19 + 0x38c)) {
              if (*pdVar1 == 0.0) goto LAB_00e443fc;
              *(undefined1 *)((long)*pdVar1 + 0x165) = 1;
            }
            if (*(float *)(unaff_x19 + 0x14) == 0.0) {
              FUN_00e45d2c();
            }
            *(undefined2 *)(unaff_x19 + 0xdc) = 0;
            if (*(char *)((long)unaff_x19 + 0xf6) == '\0') {
              uVar16 = FUN_0269e56c(0);
              if (((in_stack_00000048._4_4_ == 0.0) || ((uVar16 & 1) == 0)) ||
                 (1 < (int)unaff_x19[0x2a] - 3U)) {
                if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                iVar13 = *(int *)(unaff_x19[0xf] + 0x10) + -1;
                *(int *)((long)unaff_x19 + 0x38c) = iVar13;
                if ((unaff_x19[9] == 0) ||
                   (FUN_0132138c(unaff_x19[9],iVar13,&stack0x00000070,*(undefined8 *)puVar10),
                   _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
                *(undefined4 *)(unaff_x19 + 0x4a) =
                     *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
                if ((unaff_x19[9] == 0) ||
                   (FUN_0132138c(unaff_x19[9],*(undefined4 *)((long)unaff_x19 + 0x38c),
                                 &stack0x00000070,*(undefined8 *)puVar10),
                   _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
                *(float *)((long)unaff_x19 + 0x254) =
                     *(float *)((long)_fStack0000000000000070 + 0x48) +
                     *(float *)((long)unaff_x19 + 0x50c);
                *(undefined4 *)(unaff_x19 + 0x4b) = *(undefined4 *)((long)unaff_x19 + 0x18c);
              }
            }
            else {
              dVar20 = *pdVar1;
              if ((dVar20 == 0.0) || (*(long *)((long)dVar20 + 0x78) == 0)) goto LAB_00e443fc;
              fVar35 = *(float *)(*(long *)((long)dVar20 + 0x78) + 0x18);
              fVar44 = DAT_028aa034;
              if (fVar35 != 0.0) {
                fVar44 = fVar35;
              }
              if ((0.0 < (unaff_s15 - *(float *)((long)dVar20 + 100)) / fVar44) &&
                 (*(char *)((long)dVar20 + 0x165) == '\0')) {
                *(undefined1 *)((long)dVar20 + 0x165) = 1;
                *(undefined1 *)((long)unaff_x19 + 0x6e1) = 1;
                if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                sVar12 = FUN_015fa29c(unaff_x19[0xf],uVar28 & 0xffffffff,0);
                if (sVar12 != 0x200b) {
                  *(undefined1 *)(unaff_x19 + 0xdc) = 1;
                  if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                  sVar12 = FUN_015fa29c(unaff_x19[0xf],uVar28 & 0xffffffff,0);
                  if (sVar12 != 0x20) {
                    if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                    sVar12 = FUN_015fa29c(unaff_x19[0xf],uVar28 & 0xffffffff,0);
                    if (sVar12 != 10) {
                      lVar15 = unaff_x19[0xca];
                      if (lVar15 == 0) goto LAB_00e443fc;
                      fVar40 = *(float *)(lVar15 + 0x48);
                      fVar44 = *(float *)(unaff_x19 + 0x4b);
                      fVar43 = fVar40 + *(float *)((long)unaff_x19 + 0x50c);
                      fVar35 = *(float *)(unaff_x19 + 0x4a);
                      if (fVar40 <= *(float *)(unaff_x19 + 0x4a)) {
                        fVar35 = fVar40;
                      }
                      *(float *)(unaff_x19 + 0x4a) = fVar35;
                      fVar35 = *(float *)((long)unaff_x19 + 0x254);
                      if (fVar43 <= *(float *)((long)unaff_x19 + 0x254)) {
                        fVar35 = fVar43;
                      }
                      *(float *)((long)unaff_x19 + 0x254) = fVar35;
                      fVar35 = (float)FUN_00e5ef30(*(undefined4 *)((long)unaff_x19 + 0x134),lVar15,0
                                                  );
                      fVar35 = fVar35 + *(float *)(unaff_x19 + 0xa1) +
                               *(float *)((long)unaff_x19 + 0x55c);
                      if (fVar44 <= fVar35) {
                        fVar44 = fVar35;
                      }
                      *(float *)(unaff_x19 + 0x4b) = fVar44;
                    }
                  }
                }
                iVar45 = *(int *)((long)unaff_x19 + 0x38c);
                if (*(int *)((long)unaff_x19 + 0x38c) <= iVar13) {
                  iVar45 = iVar13;
                }
                *(int *)((long)unaff_x19 + 0x38c) = iVar45;
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
            fVar35 = 0.0;
            *(undefined4 *)(unaff_x19 + 199) = 0;
            fVar44 = 0.0;
            if ((((0.0 < in_stack_00000048._4_4_) &&
                 (uVar4 = *(uint *)(unaff_x19 + 0x2a), fVar44 = fVar35, uVar4 < 5)) &&
                ((1 << (ulong)(uVar4 & 0x1f) & 0x19U) != 0)) &&
               (*(float *)(unaff_x19 + 0x4a) < -*(float *)((long)unaff_x19 + 0x184))) {
              if (uVar4 == 4) {
                lVar15 = unaff_x19[0xc];
                if (lVar15 == 0) goto LAB_00e443fc;
                if (0 < *(int *)(lVar15 + 0x18)) {
                  iVar13 = 0;
                  do {
                    FUN_0132138c(lVar15,iVar13,&stack0x00000070,*(undefined8 *)puVar9);
                    *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
                    fVar44 = fStack0000000000000070;
                    if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <=
                        fStack0000000000000070) break;
                    lVar15 = unaff_x19[0xc];
                    if (lVar15 == 0) goto LAB_00e443fc;
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < *(int *)(lVar15 + 0x18));
                }
              }
              else {
                lVar15 = unaff_x19[0xb];
                if (lVar15 == 0) goto LAB_00e443fc;
                iVar13 = 0;
                fVar44 = 0.0;
                while (iVar13 < *(int *)(lVar15 + 0x18)) {
                  FUN_0132138c(lVar15,iVar13,&stack0x00000070,*(undefined8 *)puVar9);
                  fVar44 = fVar44 + fStack0000000000000070;
                  *(float *)((long)unaff_x19 + 0x634) = fVar44;
                  if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <= fVar44)
                  break;
                  lVar15 = unaff_x19[0xb];
                  iVar13 = iVar13 + 1;
                  if (lVar15 == 0) goto LAB_00e443fc;
                }
              }
            }
            *(float *)(unaff_x19 + 0xc6) =
                 *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
            if (unaff_x19[9] == 0) goto LAB_00e443fc;
            fVar35 = *(float *)((long)unaff_x19 + 0x53c);
            FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar10);
            if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0)) goto LAB_00e443fc;
            fVar40 = *(float *)((long)_fStack0000000000000070 + 0x5c);
            FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar10);
            if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
            fVar41 = *(float *)(unaff_x19 + 0xa8);
            fVar43 = *(float *)(unaff_x19 + 199) + fVar41;
            *(float *)((long)unaff_x19 + 0x634) =
                 fVar44 + fVar35 + (fVar40 + -1.0) *
                                   *(float *)((long)_fStack0000000000000070 + 0x84);
            *(float *)(unaff_x19 + 199) = fVar43;
            puVar9 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
            ;
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            fVar35 = 1.0;
            fVar44 = 1.0;
            uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
            *(undefined8 *)((long)unaff_x19 + 0x674) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
            *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar36;
            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
            uVar14 = *(undefined8 *)(unaff_x19[0xca] + 200);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar16 = FUN_02681b9c(uVar14,0,0);
            if ((uVar16 & 1) != 0) {
              lVar15 = __start_il2cpp();
              if (lVar15 == 0) goto LAB_00e443fc;
              if ((*(char *)(lVar15 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')
                 ) {
                *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                uVar36 = FUN_00e4ee40();
                *(undefined4 *)((long)unaff_x19 + 0x674) = uVar36;
                *(float *)(unaff_x19 + 0xcf) = fVar43;
                *(float *)((long)unaff_x19 + 0x67c) = fVar41;
              }
            }
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(puVar9);
              DAT_03774d76 = '\x01';
            }
            lVar21 = *(long *)puVar9;
            uVar36 = *(undefined4 *)(*(undefined8 **)(lVar21 + 0xb8) + 1);
            *(undefined8 *)((long)unaff_x19 + 0x5f4) = **(undefined8 **)(lVar21 + 0xb8);
            *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar36;
            lVar15 = (*(long **)(lVar21 + 0xb8))[1];
            unaff_x19[0xc0] = **(long **)(lVar21 + 0xb8);
            *(int *)(unaff_x19 + 0xc1) = (int)lVar15;
            uVar36 = *(undefined4 *)(*(undefined8 **)(lVar21 + 0xb8) + 1);
            *(undefined8 *)((long)unaff_x19 + 0x60c) = **(undefined8 **)(lVar21 + 0xb8);
            *(undefined4 *)((long)unaff_x19 + 0x614) = uVar36;
            lVar15 = (*(long **)(lVar21 + 0xb8))[1];
            unaff_x19[0xc3] = **(long **)(lVar21 + 0xb8);
            *(int *)(unaff_x19 + 0xc4) = (int)lVar15;
            uVar36 = *(undefined4 *)(*(undefined8 **)(lVar21 + 0xb8) + 1);
            *(undefined8 *)((long)unaff_x19 + 0x624) = **(undefined8 **)(lVar21 + 0xb8);
            *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar36;
            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
            uVar14 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar16 = FUN_02681b9c(uVar14,0,0);
            if ((uVar16 & 1) != 0) {
              if (*pdVar1 == 0.0) goto LAB_00e443fc;
              if (*(float *)((long)*pdVar1 + 0x84) != 0.0) {
                lVar15 = __start_il2cpp();
                if (lVar15 == 0) goto LAB_00e443fc;
                if ((*(char *)(lVar15 + 0x109) == '\0') &&
                   (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                  lVar15 = unaff_x19[0xca];
                  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                  if ((lVar15 == 0) || (lVar21 = *(long *)(lVar15 + 0xc0), lVar21 == 0))
                  goto LAB_00e443fc;
                  uVar16 = uVar47;
                  if (*(char *)(lVar21 + 0x18) != '\0') {
                    fVar43 = *(float *)(lVar15 + 100);
                    uVar16 = (ulong)(uint)(*(float *)((long)unaff_x19 + 0x2ec) - fVar43);
                  }
                  if (*(char *)(lVar21 + 0x19) != '\0') {
                    uVar36 = FUN_00e4e9f4(uVar16);
                    lVar15 = unaff_x19[0xca];
                    *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar36;
                    *(float *)(unaff_x19 + 0xbf) = fVar43;
                    *(float *)((long)unaff_x19 + 0x5fc) = fVar41;
                    if (lVar15 == 0) goto LAB_00e443fc;
                  }
                  if (*(long *)(lVar15 + 0xc0) == 0) goto LAB_00e443fc;
                  if (*(char *)(*(long *)(lVar15 + 0xc0) + 0x28) != '\0') {
                    fVar40 = (float)FUN_00e4e9f4(uVar16);
                    *(float *)((long)unaff_x19 + 0x63c) = fVar40;
                    *(float *)(unaff_x19 + 200) = fVar43;
                    fVar39 = fVar41 + *(float *)(unaff_x19 + 0xc1);
                    *(float *)((long)unaff_x19 + 0x644) = fVar41;
                    unaff_x19[0xc0] =
                         CONCAT44(fVar43 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                  fVar40 + (float)unaff_x19[0xc0]);
                    *(float *)(unaff_x19 + 0xc1) = fVar39;
                    if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                    goto LAB_00e443fc;
                    fVar40 = (float)FUN_00e4e9f4(uVar16);
                    *(float *)((long)unaff_x19 + 0x63c) = fVar40;
                    *(float *)(unaff_x19 + 200) = fVar39;
                    *(float *)((long)unaff_x19 + 0x644) = fVar41;
                    *(ulong *)((long)unaff_x19 + 0x60c) =
                         CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x60c)
                                                  >> 0x20),
                                  fVar40 + (float)*(undefined8 *)((long)unaff_x19 + 0x60c));
                    *(float *)((long)unaff_x19 + 0x614) =
                         fVar41 + *(float *)((long)unaff_x19 + 0x614);
                    if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                    goto LAB_00e443fc;
                    fVar40 = (float)FUN_00e4e9f4(uVar16);
                    *(float *)((long)unaff_x19 + 0x63c) = fVar40;
                    *(float *)(unaff_x19 + 200) = fVar39;
                    fVar43 = fVar41 + *(float *)(unaff_x19 + 0xc4);
                    *(float *)((long)unaff_x19 + 0x644) = fVar41;
                    unaff_x19[0xc3] =
                         CONCAT44(fVar39 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                  fVar40 + (float)unaff_x19[0xc3]);
                    *(float *)(unaff_x19 + 0xc4) = fVar43;
                    if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                    goto LAB_00e443fc;
                    fVar40 = (float)FUN_00e4e9f4(uVar16);
                    *(float *)((long)unaff_x19 + 0x63c) = fVar40;
                    *(float *)(unaff_x19 + 200) = fVar43;
                    *(float *)((long)unaff_x19 + 0x644) = fVar41;
                    *(ulong *)((long)unaff_x19 + 0x624) =
                         CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x624)
                                                  >> 0x20),
                                  fVar40 + (float)*(undefined8 *)((long)unaff_x19 + 0x624));
                    lVar15 = unaff_x19[0xca];
                    *(float *)((long)unaff_x19 + 0x62c) =
                         fVar41 + *(float *)((long)unaff_x19 + 0x62c);
                    if (lVar15 == 0) goto LAB_00e443fc;
                  }
                  if (*(long *)(lVar15 + 0xc0) == 0) goto LAB_00e443fc;
                  if (*(char *)(*(long *)(lVar15 + 0xc0) + 0x50) != '\0') {
                    FUN_00e5eda8(lVar15,0);
                    fVar40 = (float)FUN_00e4eb50();
                    lVar15 = unaff_x19[0xca];
                    *(float *)((long)unaff_x19 + 0x63c) = fVar40;
                    *(float *)(unaff_x19 + 200) = fVar43;
                    fVar39 = fVar41 + *(float *)(unaff_x19 + 0xc1);
                    *(float *)((long)unaff_x19 + 0x644) = fVar41;
                    unaff_x19[0xc0] =
                         CONCAT44(fVar43 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                  fVar40 + (float)unaff_x19[0xc0]);
                    *(float *)(unaff_x19 + 0xc1) = fVar39;
                    if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
                    FUN_00e5b838(lVar15,0);
                    fVar40 = (float)FUN_00e4eb50();
                    *(float *)((long)unaff_x19 + 0x63c) = fVar40;
                    *(float *)(unaff_x19 + 200) = fVar39;
                    *(float *)((long)unaff_x19 + 0x644) = fVar41;
                    *(ulong *)((long)unaff_x19 + 0x60c) =
                         CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x60c)
                                                  >> 0x20),
                                  fVar40 + (float)*(undefined8 *)((long)unaff_x19 + 0x60c));
                    lVar15 = unaff_x19[0xca];
                    *(float *)((long)unaff_x19 + 0x614) =
                         fVar41 + *(float *)((long)unaff_x19 + 0x614);
                    if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
                    FUN_00e5eea4(lVar15,0);
                    fVar40 = (float)FUN_00e4eb50();
                    lVar15 = unaff_x19[0xca];
                    *(float *)((long)unaff_x19 + 0x63c) = fVar40;
                    *(float *)(unaff_x19 + 200) = fVar39;
                    fVar43 = fVar41 + *(float *)(unaff_x19 + 0xc4);
                    *(float *)((long)unaff_x19 + 0x644) = fVar41;
                    unaff_x19[0xc3] =
                         CONCAT44(fVar39 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                  fVar40 + (float)unaff_x19[0xc3]);
                    *(float *)(unaff_x19 + 0xc4) = fVar43;
                    if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
                    FUN_00e5b7d8(lVar15,0);
                    fVar40 = (float)FUN_00e4eb50();
                    *(float *)((long)unaff_x19 + 0x63c) = fVar40;
                    *(float *)(unaff_x19 + 200) = fVar43;
                    *(float *)((long)unaff_x19 + 0x644) = fVar41;
                    *(ulong *)((long)unaff_x19 + 0x624) =
                         CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x624)
                                                  >> 0x20),
                                  fVar40 + (float)*(undefined8 *)((long)unaff_x19 + 0x624));
                    lVar15 = unaff_x19[0xca];
                    *(float *)((long)unaff_x19 + 0x62c) =
                         fVar41 + *(float *)((long)unaff_x19 + 0x62c);
                    if (lVar15 == 0) goto LAB_00e443fc;
                  }
                  lVar21 = *(long *)(lVar15 + 0xc0);
                  if (lVar21 == 0) goto LAB_00e443fc;
                  if (*(char *)(lVar21 + 0x60) != '\0') {
                    uVar31 = *(undefined8 *)(lVar21 + 0x68);
                    uVar14 = FUN_00e5eda8(lVar15,0);
                    fVar40 = (float)FUN_00e4ecc4(uVar14,lVar15,uVar31);
                    lVar15 = unaff_x19[0xca];
                    *(float *)((long)unaff_x19 + 0x63c) = fVar40;
                    *(float *)(unaff_x19 + 200) = fVar43;
                    fVar39 = fVar41 + *(float *)(unaff_x19 + 0xc1);
                    *(float *)((long)unaff_x19 + 0x644) = fVar41;
                    unaff_x19[0xc0] =
                         CONCAT44(fVar43 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                  fVar40 + (float)unaff_x19[0xc0]);
                    *(float *)(unaff_x19 + 0xc1) = fVar39;
                    if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
                    uVar31 = *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x68);
                    uVar14 = FUN_00e5b838(lVar15,0);
                    fVar40 = (float)FUN_00e4ecc4(uVar14,lVar15,uVar31);
                    *(float *)((long)unaff_x19 + 0x63c) = fVar40;
                    *(float *)(unaff_x19 + 200) = fVar39;
                    *(float *)((long)unaff_x19 + 0x644) = fVar41;
                    *(ulong *)((long)unaff_x19 + 0x60c) =
                         CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x60c)
                                                  >> 0x20),
                                  fVar40 + (float)*(undefined8 *)((long)unaff_x19 + 0x60c));
                    lVar15 = unaff_x19[0xca];
                    *(float *)((long)unaff_x19 + 0x614) =
                         fVar41 + *(float *)((long)unaff_x19 + 0x614);
                    if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
                    uVar31 = *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x68);
                    uVar14 = FUN_00e5eea4(lVar15,0);
                    fVar40 = (float)FUN_00e4ecc4(uVar14,lVar15,uVar31);
                    lVar15 = unaff_x19[0xca];
                    *(float *)((long)unaff_x19 + 0x63c) = fVar40;
                    *(float *)(unaff_x19 + 200) = fVar39;
                    fVar43 = fVar41 + *(float *)(unaff_x19 + 0xc4);
                    *(float *)((long)unaff_x19 + 0x644) = fVar41;
                    unaff_x19[0xc3] =
                         CONCAT44(fVar39 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                  fVar40 + (float)unaff_x19[0xc3]);
                    *(float *)(unaff_x19 + 0xc4) = fVar43;
                    if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
                    uVar31 = *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x68);
                    uVar14 = FUN_00e5b7d8(lVar15,0);
                    fVar40 = (float)FUN_00e4ecc4(uVar14,lVar15,uVar31);
                    *(float *)((long)unaff_x19 + 0x63c) = fVar40;
                    *(float *)(unaff_x19 + 200) = fVar43;
                    *(float *)((long)unaff_x19 + 0x644) = fVar41;
                    *(ulong *)((long)unaff_x19 + 0x624) =
                         CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x624)
                                                  >> 0x20),
                                  fVar40 + (float)*(undefined8 *)((long)unaff_x19 + 0x624));
                    *(float *)((long)unaff_x19 + 0x62c) =
                         fVar41 + *(float *)((long)unaff_x19 + 0x62c);
                  }
                }
              }
            }
            uVar4 = (int)uVar28 << 2;
            if ((in_stack_00000048._4_4_ <= 0.0) || ((int)unaff_x19[0x2a] == 2)) {
LAB_00e3cd74:
              if (*(char *)((long)unaff_x19 + 300) == '\0') {
                *(long *)((long)unaff_x19 + 0x6e4) = unaff_x19[0x24];
              }
              else {
                if (*pdVar1 == 0.0) goto LAB_00e443fc;
                uVar14 = *(undefined8 *)((long)*pdVar1 + 0x80);
                *(ulong *)((long)unaff_x19 + 0x6e4) =
                     CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) *
                              (float)((ulong)uVar14 >> 0x20),(float)unaff_x19[0x24] * (float)uVar14)
                ;
              }
              lVar15 = unaff_x19[0x5e];
              *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
              if ((lVar15 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
              fVar40 = (float)FUN_00e5eda8(*pdVar1,0);
              if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
              fVar43 = *(float *)((long)unaff_x19 + 0x674);
              uVar16 = (ulong)(int)uVar4;
              *(float *)(lVar15 + uVar16 * 0xc + 0x20) =
                   fVar40 + fVar43 + *(float *)(unaff_x19 + 0xc0) +
                   *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                   *(float *)((long)unaff_x19 + 0x6e4);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
              FUN_00e5eda8(*pdVar1,0);
              if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
              fVar40 = *(float *)((long)unaff_x19 + 0x604);
              *(float *)(lVar15 + uVar16 * 0xc + 0x24) =
                   fVar43 + *(float *)(unaff_x19 + 0xcf) + fVar40 + *(float *)(unaff_x19 + 0xbf) +
                   *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
              FUN_00e5eda8(*pdVar1,0);
              if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
              *(float *)(lVar15 + uVar16 * 0xc + 0x28) =
                   fVar40 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc1) +
                   *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
                   *(float *)((long)unaff_x19 + 0x6ec);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
              fVar40 = (float)FUN_00e5b838(*pdVar1,0);
              uVar34 = uVar16 | 1;
              uVar27 = (uint)uVar34;
              if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_00e44400;
              fVar43 = *(float *)((long)unaff_x19 + 0x674);
              *(float *)(lVar15 + uVar34 * 0xc + 0x20) =
                   fVar40 + fVar43 + *(float *)((long)unaff_x19 + 0x60c) +
                   *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                   *(float *)((long)unaff_x19 + 0x6e4);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
              FUN_00e5b838(*pdVar1,0);
              if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_00e44400;
              fVar40 = *(float *)(unaff_x19 + 0xc2);
              *(float *)(lVar15 + uVar34 * 0xc + 0x24) =
                   fVar43 + *(float *)(unaff_x19 + 0xcf) + fVar40 + *(float *)(unaff_x19 + 0xbf) +
                   *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
              FUN_00e5b838(*pdVar1,0);
              if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_00e44400;
              *(float *)(lVar15 + uVar34 * 0xc + 0x28) =
                   fVar40 + *(float *)((long)unaff_x19 + 0x67c) +
                   *(float *)((long)unaff_x19 + 0x614) + *(float *)((long)unaff_x19 + 0x5fc) +
                   *(float *)(unaff_x19 + 199) + *(float *)((long)unaff_x19 + 0x6ec);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
              fVar40 = (float)FUN_00e5eea4(*pdVar1,0);
              uVar19 = uVar16 | 2;
              uVar30 = (uint)uVar19;
              if (*(uint *)(lVar15 + 0x18) <= uVar30) goto LAB_00e44400;
              fVar43 = *(float *)((long)unaff_x19 + 0x674);
              *(float *)(lVar15 + uVar19 * 0xc + 0x20) =
                   fVar40 + fVar43 + *(float *)(unaff_x19 + 0xc3) +
                   *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                   *(float *)((long)unaff_x19 + 0x6e4);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
              FUN_00e5eea4(*pdVar1,0);
              if (*(uint *)(lVar15 + 0x18) <= uVar30) goto LAB_00e44400;
              fVar40 = *(float *)((long)unaff_x19 + 0x61c);
              *(float *)(lVar15 + uVar19 * 0xc + 0x24) =
                   fVar43 + *(float *)(unaff_x19 + 0xcf) + fVar40 + *(float *)(unaff_x19 + 0xbf) +
                   *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
              FUN_00e5eea4(*pdVar1,0);
              if (*(uint *)(lVar15 + 0x18) <= uVar30) goto LAB_00e44400;
              *(float *)(lVar15 + uVar19 * 0xc + 0x28) =
                   fVar40 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc4) +
                   *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
                   *(float *)((long)unaff_x19 + 0x6ec);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
              fVar40 = (float)FUN_00e5b7d8(*pdVar1,0);
              uVar29 = uVar16 | 3;
              uVar32 = (uint)uVar29;
              if (*(uint *)(lVar15 + 0x18) <= uVar32) goto LAB_00e44400;
              fVar43 = *(float *)((long)unaff_x19 + 0x674);
              *(float *)(lVar15 + uVar29 * 0xc + 0x20) =
                   fVar40 + fVar43 + *(float *)((long)unaff_x19 + 0x624) +
                   *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                   *(float *)((long)unaff_x19 + 0x6e4);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
              FUN_00e5b7d8(*pdVar1,0);
              if (*(uint *)(lVar15 + 0x18) <= uVar32) goto LAB_00e44400;
              param_3 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
              *(float *)(lVar15 + uVar29 * 0xc + 0x24) =
                   fVar43 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
                   *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
                   *(float *)(unaff_x19 + 0xdd);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
              FUN_00e5b7d8(*pdVar1,0);
              if (*(uint *)(lVar15 + 0x18) <= uVar32) goto LAB_00e44400;
              fVar40 = *(float *)((long)unaff_x19 + 0x62c);
              *(float *)(lVar15 + uVar29 * 0xc + 0x28) =
                   (float)param_3 + *(float *)((long)unaff_x19 + 0x67c) + fVar40 +
                   *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
                   *(float *)((long)unaff_x19 + 0x6ec);
              lVar15 = unaff_x19[0xca];
              if (lVar15 == 0) goto LAB_00e443fc;
              lVar21 = *unaff_x22;
              if (*(char *)(lVar15 + 0x108) == '\0') {
                uVar36 = FUN_0272b9dc(lVar15 + 0x10,0);
                if (lVar21 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
                lVar21 = lVar21 + uVar16 * 8;
                *(undefined4 *)(lVar21 + 0x20) = uVar36;
                *(float *)(lVar21 + 0x24) = fVar40;
                if (*pdVar1 == 0.0) goto LAB_00e443fc;
                lVar15 = *unaff_x22;
                uVar36 = thunk_FUN_0272b8d8((long)*pdVar1 + 0x10,0);
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_00e44400;
                lVar15 = lVar15 + uVar34 * 8;
                *(undefined4 *)(lVar15 + 0x20) = uVar36;
                *(float *)(lVar15 + 0x24) = fVar40;
                if (*pdVar1 == 0.0) goto LAB_00e443fc;
                lVar15 = *unaff_x22;
                uVar36 = FUN_0272b9c8((long)*pdVar1 + 0x10,0);
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar30) goto LAB_00e44400;
                lVar15 = lVar15 + uVar19 * 8;
                *(undefined4 *)(lVar15 + 0x20) = uVar36;
                *(float *)(lVar15 + 0x24) = fVar40;
                if (*pdVar1 == 0.0) goto LAB_00e443fc;
                lVar15 = *unaff_x22;
                uVar36 = FUN_0272b98c((long)*pdVar1 + 0x10,0);
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar32) goto LAB_00e44400;
                lVar15 = lVar15 + uVar29 * 8;
                *(undefined4 *)(lVar15 + 0x20) = uVar36;
                *(float *)(lVar15 + 0x24) = fVar40;
                if (*pdVar1 == 0.0) goto LAB_00e443fc;
                uVar36 = FUN_00e5ecc0(*pdVar1,0);
                *(undefined4 *)(unaff_x19 + 0xd9) = uVar36;
                if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                FUN_00e5ecc0(unaff_x19[0xca],0);
                *(float *)((long)unaff_x19 + 0x6cc) = fVar40;
              }
              else {
                if ((*(long *)(lVar15 + 0x100) == 0) ||
                   (uVar36 = FUN_00e5dd14(uVar47,*(long *)(lVar15 + 0x100),
                                          *(undefined4 *)(lVar15 + 0x10c),0), lVar21 == 0))
                goto LAB_00e443fc;
                if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
                lVar21 = lVar21 + uVar16 * 8;
                *(undefined4 *)(lVar21 + 0x20) = uVar36;
                *(float *)(lVar21 + 0x24) = fVar40;
                dVar20 = *pdVar1;
                if ((dVar20 == 0.0) || (*(long *)((long)dVar20 + 0x100) == 0)) goto LAB_00e443fc;
                lVar15 = *unaff_x22;
                uVar36 = FUN_00e5de6c(uVar47,*(long *)((long)dVar20 + 0x100),
                                      *(undefined4 *)((long)dVar20 + 0x10c),0);
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_00e44400;
                lVar15 = lVar15 + uVar34 * 8;
                *(undefined4 *)(lVar15 + 0x20) = uVar36;
                *(float *)(lVar15 + 0x24) = fVar40;
                dVar20 = *pdVar1;
                if ((dVar20 == 0.0) || (*(long *)((long)dVar20 + 0x100) == 0)) goto LAB_00e443fc;
                lVar15 = *unaff_x22;
                uVar36 = FUN_00e5dea4(uVar47,*(long *)((long)dVar20 + 0x100),
                                      *(undefined4 *)((long)dVar20 + 0x10c),0);
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar30) goto LAB_00e44400;
                lVar15 = lVar15 + uVar19 * 8;
                *(undefined4 *)(lVar15 + 0x20) = uVar36;
                *(float *)(lVar15 + 0x24) = fVar40;
                dVar20 = *pdVar1;
                if ((dVar20 == 0.0) || (*(long *)((long)dVar20 + 0x100) == 0)) goto LAB_00e443fc;
                lVar15 = *unaff_x22;
                uVar36 = thunk_FUN_00e5dd60(uVar47,*(long *)((long)dVar20 + 0x100),
                                            *(undefined4 *)((long)dVar20 + 0x10c),0);
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar32) goto LAB_00e44400;
                lVar15 = lVar15 + uVar29 * 8;
                *(undefined4 *)(lVar15 + 0x20) = uVar36;
                *(float *)(lVar15 + 0x24) = fVar40;
                dVar20 = *pdVar1;
                if ((dVar20 == 0.0) || (*(long *)((long)dVar20 + 0x100) == 0)) goto LAB_00e443fc;
                uVar36 = FUN_00e5dedc(uVar47,*(long *)((long)dVar20 + 0x100),
                                      *(undefined4 *)((long)dVar20 + 0x10c),0);
                lVar15 = unaff_x19[0xca];
                *(undefined4 *)(unaff_x19 + 0xd9) = uVar36;
                *(float *)((long)unaff_x19 + 0x6cc) = fVar40;
                if ((lVar15 == 0) || (lVar21 = *(long *)(lVar15 + 0x100), lVar21 == 0))
                goto LAB_00e443fc;
                if (((1 < *(int *)(lVar21 + 0x28)) && (0.0 < *(float *)(lVar21 + 0x34))) &&
                   (*(int *)(lVar15 + 0x10c) < 0)) {
                  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                }
              }
            }
            else {
              dVar20 = *pdVar1;
              if (dVar20 == 0.0) goto LAB_00e443fc;
              param_3 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
              if ((*(float *)((long)dVar20 + 0x48) + *(float *)((long)dVar20 + 0x84) +
                  *(float *)((long)unaff_x19 + 0x634)) - *(float *)((long)unaff_x19 + 0x53c) <=
                  DAT_028aa038 - *(float *)(unaff_x19 + 0x2f)) goto LAB_00e3cd74;
              lVar15 = *in_stack_00000038;
              if (DAT_03774d76 == '\0') {
                thunk_FUN_00d48444(puVar9);
                DAT_03774d76 = '\x01';
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
              uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
              uVar16 = (ulong)(int)uVar4;
              lVar15 = lVar15 + uVar16 * 0xc;
              *(undefined8 *)(lVar15 + 0x20) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
              *(undefined4 *)(lVar15 + 0x28) = uVar36;
              lVar15 = *in_stack_00000038;
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= (uint)(uVar16 | 1)) goto LAB_00e44400;
              lVar15 = lVar15 + (uVar16 | 1) * 0xc;
              uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
              *(undefined8 *)(lVar15 + 0x20) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
              *(undefined4 *)(lVar15 + 0x28) = uVar36;
              lVar15 = *in_stack_00000038;
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= (uint)(uVar16 | 2)) goto LAB_00e44400;
              lVar15 = lVar15 + (uVar16 | 2) * 0xc;
              uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
              *(undefined8 *)(lVar15 + 0x20) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
              *(undefined4 *)(lVar15 + 0x28) = uVar36;
              lVar15 = *in_stack_00000038;
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= (uint)(uVar16 | 3)) goto LAB_00e44400;
              lVar15 = lVar15 + (uVar16 | 3) * 0xc;
              uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
              *(undefined8 *)(lVar15 + 0x20) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
              *(undefined4 *)(lVar15 + 0x28) = uVar36;
            }
            if (*pdVar1 == 0.0) goto LAB_00e443fc;
            uVar14 = *(undefined8 *)((long)*pdVar1 + 0xf8);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar16 = FUN_02681b9c(uVar14,0,0);
            if ((uVar16 & 1) == 0) {
              lVar15 = unaff_x19[0x10];
            }
            else {
              if ((*pdVar1 == 0.0) || (lVar15 = *(long *)((long)*pdVar1 + 0xf8), lVar15 == 0))
              goto LAB_00e443fc;
              lVar15 = *(long *)(lVar15 + 0x18);
            }
            if (((lVar15 == 0) || (lVar15 = FUN_0272bcf4(lVar15,0), lVar15 == 0)) ||
               (plVar17 = (long *)FUN_0267dac8(lVar15,0), plVar17 == (long *)0x0))
            goto LAB_00e443fc;
            iVar13 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
            *(float *)(unaff_x19 + 0xda) = (float)iVar13;
            iVar13 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
            *(float *)((long)unaff_x19 + 0x6d4) = (float)iVar13;
            *(int *)(unaff_x19 + 0xdb) = (int)unaff_x19[0xd9];
            *(undefined4 *)((long)unaff_x19 + 0x6dc) = *(undefined4 *)((long)unaff_x19 + 0x6cc);
            puVar9 = UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
            if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
            _fStack0000000000000070 = (double)CONCAT44((float)iVar13,(int)unaff_x19[0xda]);
            in_stack_00000078 = unaff_x19[0xd9];
            FUN_0132149c(unaff_x19[0x62],uVar4,&stack0x00000070,
                         *(undefined8 *)
                          UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                        );
            if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            uVar16 = (ulong)(int)uVar4;
            uVar34 = uVar16 | 1;
            FUN_0132149c(unaff_x19[0x62],uVar4 | 1,&stack0x00000070,*(undefined8 *)puVar9);
            if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            uVar19 = uVar16 | 2;
            FUN_0132149c(unaff_x19[0x62],uVar19,&stack0x00000070,*(undefined8 *)puVar9);
            if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            uVar29 = uVar16 | 3;
            FUN_0132149c(unaff_x19[0x62],uVar4 | 3,&stack0x00000070,*(undefined8 *)puVar9);
            plVar33 = (long *)StringLiteral_9119;
            lVar15 = unaff_x19[0x60];
            if (lVar15 == 0) goto LAB_00e443fc;
            if ((*(uint *)(lVar15 + 0x18) <= uVar4) ||
               (uVar27 = (uint)uVar29, *(uint *)(lVar15 + 0x18) <= uVar27)) goto LAB_00e44400;
            lVar21 = unaff_x19[0xca];
            fVar40 = fVar37;
            if (*(float *)(lVar15 + 0x20 + uVar16 * 8) != *(float *)(lVar15 + 0x20 + uVar29 * 8)) {
              fVar40 = fVar35;
            }
            *(float *)(unaff_x19 + 0xda) = fVar40;
            if (lVar21 == 0) goto LAB_00e443fc;
            cVar8 = *(char *)(lVar21 + 0x108);
            fVar40 = fVar35;
            if (cVar8 != '\0' || 0x7fffffff < *(uint *)(lVar21 + 0x138)) {
              fVar40 = -1.0;
            }
            *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar21 + 0x84) * fVar40;
            if (cVar8 == '\0') {
              iVar45 = *(int *)(lVar21 + 0x160);
              iVar13 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
              param_3 = 0x3e800000;
              *(float *)(unaff_x19 + 0xdb) = (float)iVar45 / ((float)iVar13 * 0.25);
              if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
              iVar45 = *(int *)(unaff_x19[0xca] + 0x160);
              iVar13 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
              fVar43 = (float)iVar45;
              fVar40 = (float)iVar13;
              puVar24 = (undefined8 *)
                        UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
              ;
            }
            else {
              if (*(long *)(lVar21 + 0x100) == 0) goto LAB_00e443fc;
              fVar40 = (float)FUN_00e5df18(*(long *)(lVar21 + 0x100),0);
              puVar24 = (undefined8 *)
                        UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
              ;
              if (((*pdVar1 == 0.0) || (lVar15 = *(long *)((long)*pdVar1 + 0x100), lVar15 == 0)) ||
                 (plVar17 = *(long **)(lVar15 + 0x18), plVar17 == (long *)0x0)) goto LAB_00e443fc;
              iVar13 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
              if ((*pdVar1 == 0.0) || (lVar15 = *(long *)((long)*pdVar1 + 0x100), lVar15 == 0))
              goto LAB_00e443fc;
              fVar43 = 0.25;
              *(float *)(unaff_x19 + 0xdb) =
                   fVar40 / (*(float *)(lVar15 + 0x40) * (float)iVar13 * 0.25);
              FUN_00e5df18(lVar15,0);
              if ((unaff_x19[0xca] == 0) ||
                 ((lVar15 = *(long *)(unaff_x19[0xca] + 0x100), lVar15 == 0 ||
                  (plVar17 = *(long **)(lVar15 + 0x18), plVar17 == (long *)0x0))))
              goto LAB_00e443fc;
              iVar13 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
              if ((*pdVar1 == 0.0) || (lVar15 = *(long *)((long)*pdVar1 + 0x100), lVar15 == 0))
              goto LAB_00e443fc;
              fVar40 = *(float *)(lVar15 + 0x44) * (float)iVar13;
            }
            fVar41 = 0.25;
            fVar43 = fVar43 / (fVar40 * 0.25);
            *(float *)((long)unaff_x19 + 0x6dc) = fVar43;
            if (unaff_x19[99] == 0) goto LAB_00e443fc;
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            in_stack_00000078 = CONCAT44(fVar43,(int)unaff_x19[0xdb]);
            FUN_0132149c(unaff_x19[99],uVar4,&stack0x00000070,*puVar24);
            if (unaff_x19[99] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            FUN_0132149c(unaff_x19[99],uVar4 | 1,&stack0x00000070,*puVar24);
            if (unaff_x19[99] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            FUN_0132149c(unaff_x19[99],uVar4 | 2,&stack0x00000070,*puVar24);
            if (unaff_x19[99] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            FUN_0132149c(unaff_x19[99],uVar4 | 3,&stack0x00000070,*puVar24);
            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
            uVar14 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar18 = FUN_02681b9c(uVar14,0,0);
            fVar43 = (float)param_3;
            fVar40 = (float)uVar47;
            uVar32 = (uint)uVar34;
            uVar30 = (uint)uVar19;
            if ((uVar18 & 1) != 0) {
              if (uVar28 == uVar3 - 1) {
                if (*pdVar1 == 0.0) goto LAB_00e443fc;
                fVar39 = (float)FUN_00e5b838(*pdVar1,0);
                if (DAT_03774d76 == '\0') {
                  thunk_FUN_00d48444(
                                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                    );
                  DAT_03774d76 = '\x01';
                }
                pfVar22 = *(float **)
                           (*(long *)
                             Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                           + 0xb8);
                fVar43 = fVar43 - pfVar22[2];
                param_3 = (ulong)(uint)fVar43;
                if (fVar43 * fVar43 +
                    (fVar39 - *pfVar22) * (fVar39 - *pfVar22) +
                    (fVar41 - pfVar22[1]) * (fVar41 - pfVar22[1]) < DAT_028aa020) goto LAB_00e3dbd8;
              }
              if ((*pdVar1 == 0.0) || (lVar15 = *(long *)((long)*pdVar1 + 0xb0), lVar15 == 0))
              goto LAB_00e443fc;
              uVar14 = *(undefined8 *)(lVar15 + 0x38);
              if (DAT_03774d77 == '\0') {
                thunk_FUN_00d48444(
                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                  );
                DAT_03774d77 = '\x01';
              }
              fVar43 = (float)uVar14 -
                       (float)**(undefined8 **)
                                (*(long *)
                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                + 0xb8);
              fVar41 = (float)((ulong)uVar14 >> 0x20) -
                       (float)((ulong)**(undefined8 **)
                                        (*(long *)
                                          Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                        + 0xb8) >> 0x20);
              if (DAT_028aa020 <= fVar43 * fVar43 + fVar41 * fVar41) {
                *(undefined1 *)(unaff_x19 + 0x2e) = 1;
              }
              dVar20 = *pdVar1;
              if ((dVar20 == 0.0) || (lVar15 = *(long *)((long)dVar20 + 0xb0), lVar15 == 0))
              goto LAB_00e443fc;
              fVar41 = fVar40 * *(float *)(lVar15 + 0x38);
              *(float *)(unaff_x19 + 0xc9) = fVar41;
              fVar43 = fVar40 * *(float *)(lVar15 + 0x3c);
              *(float *)((long)unaff_x19 + 0x64c) = fVar43;
              if (*(char *)(lVar15 + 0x25) != '\0') {
                fVar44 = 1.0 / *(float *)((long)dVar20 + 0x84);
              }
              lVar15 = *in_stack_00000038;
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
              lVar21 = lVar15 + uVar16 * 0xc;
              fVar39 = *(float *)(lVar21 + 0x20);
              uVar14 = *(undefined8 *)(lVar21 + 0x24);
              *(float *)(unaff_x19 + 0xcd) = fVar39;
              *(undefined8 *)((long)unaff_x19 + 0x66c) = uVar14;
              *(float *)(unaff_x19 + 0xd0) = fVar39;
              fVar42 = (float)uVar14;
              *(float *)((long)unaff_x19 + 0x684) = fVar42;
              if (*(uint *)(lVar15 + 0x18) <= uVar32) goto LAB_00e44400;
              lVar21 = lVar15 + uVar34 * 0xc;
              uVar36 = *(undefined4 *)(lVar21 + 0x20);
              uVar14 = *(undefined8 *)(lVar21 + 0x24);
              *(undefined4 *)(unaff_x19 + 0xcd) = uVar36;
              *(undefined8 *)((long)unaff_x19 + 0x66c) = uVar14;
              *(undefined4 *)(unaff_x19 + 0xd2) = uVar36;
              *(int *)((long)unaff_x19 + 0x694) = (int)uVar14;
              if (*(uint *)(lVar15 + 0x18) <= uVar30) goto LAB_00e44400;
              lVar21 = lVar15 + uVar19 * 0xc;
              uVar36 = *(undefined4 *)(lVar21 + 0x20);
              uVar14 = *(undefined8 *)(lVar21 + 0x24);
              *(undefined4 *)(unaff_x19 + 0xcd) = uVar36;
              *(undefined8 *)((long)unaff_x19 + 0x66c) = uVar14;
              *(undefined4 *)(unaff_x19 + 0xd4) = uVar36;
              *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar14;
              if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_00e44400;
              lVar15 = lVar15 + uVar29 * 0xc;
              uVar36 = *(undefined4 *)(lVar15 + 0x20);
              uVar14 = *(undefined8 *)(lVar15 + 0x24);
              *(undefined4 *)(unaff_x19 + 0xcd) = uVar36;
              *(undefined8 *)((long)unaff_x19 + 0x66c) = uVar14;
              *(undefined4 *)(unaff_x19 + 0xd6) = uVar36;
              *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar14;
              lVar15 = *(long *)((long)dVar20 + 0xb0);
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(char *)(lVar15 + 0x24) == '\0') {
                lVar21 = *in_stack_00000028;
                if (lVar21 == 0) goto LAB_00e443fc;
                uVar7 = *(uint *)(lVar21 + 0x18);
                if (uVar7 <= uVar4) goto LAB_00e44400;
                lVar25 = lVar21 + uVar16 * 8;
                *(float *)(lVar25 + 0x20) = (fVar41 + fVar44 * fVar39) - *(float *)(lVar15 + 0x30);
                *(float *)(lVar25 + 0x24) = (fVar43 + fVar44 * fVar42) - *(float *)(lVar15 + 0x34);
                if (((uVar7 <= uVar32) ||
                    (*(ulong *)(lVar21 + uVar34 * 8 + 0x20) =
                          CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar44 +
                                   (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                   (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                                   ((float)unaff_x19[0xd2] * fVar44 + (float)unaff_x19[0xc9]) -
                                   (float)*(undefined8 *)(lVar15 + 0x30)), uVar7 <= uVar30)) ||
                   (*(ulong *)(lVar21 + uVar19 * 8 + 0x20) =
                         CONCAT44((fVar44 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                                  (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                  (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                                  (fVar44 * (float)unaff_x19[0xd4] + (float)unaff_x19[0xc9]) -
                                  (float)*(undefined8 *)(lVar15 + 0x30)), uVar7 <= uVar27))
                goto LAB_00e44400;
                param_3 = unaff_x19[0xc9];
                *(ulong *)(lVar21 + uVar29 * 8 + 0x20) =
                     CONCAT44((fVar44 * (float)((ulong)unaff_x19[0xd6] >> 0x20) +
                              (float)(param_3 >> 0x20)) -
                              (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                              (fVar44 * (float)unaff_x19[0xd6] + (float)param_3) -
                              (float)*(undefined8 *)(lVar15 + 0x30));
              }
              else {
                fVar5 = *(float *)((long)dVar20 + 0x44);
                *(float *)(unaff_x19 + 0xd8) = fVar5;
                fVar6 = *(float *)((long)dVar20 + 0x48);
                lVar21 = unaff_x19[0x61];
                *(float *)((long)unaff_x19 + 0x6c4) = fVar6;
                if (lVar21 == 0) goto LAB_00e443fc;
                uVar7 = *(uint *)(lVar21 + 0x18);
                if (uVar7 <= uVar4) goto LAB_00e44400;
                lVar25 = lVar21 + uVar16 * 8;
                *(float *)(lVar25 + 0x20) =
                     (fVar41 + fVar44 * (fVar39 - fVar5)) - *(float *)(lVar15 + 0x30);
                *(float *)(lVar25 + 0x24) =
                     (fVar43 + fVar44 * (fVar42 - fVar6)) - *(float *)(lVar15 + 0x34);
                if (((uVar7 <= uVar32) ||
                    (*(ulong *)(lVar21 + uVar34 * 8 + 0x20) =
                          CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                   ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                                   (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar44) -
                                   (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                                   ((float)unaff_x19[0xc9] +
                                   ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) * fVar44) -
                                   (float)*(undefined8 *)(lVar15 + 0x30)), uVar7 <= uVar30)) ||
                   (*(ulong *)(lVar21 + uVar19 * 8 + 0x20) =
                         CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                  fVar44 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                           (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                                  (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                                  ((float)unaff_x19[0xc9] +
                                  fVar44 * ((float)unaff_x19[0xd4] - (float)unaff_x19[0xd8])) -
                                  (float)*(undefined8 *)(lVar15 + 0x30)), uVar7 <= uVar27))
                goto LAB_00e44400;
                param_3 = unaff_x19[0xd8];
                *(ulong *)(lVar21 + uVar29 * 8 + 0x20) =
                     CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                              fVar44 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) -
                                       (float)(param_3 >> 0x20))) -
                              (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                              ((float)unaff_x19[0xc9] +
                              fVar44 * ((float)unaff_x19[0xd6] - (float)param_3)) -
                              (float)*(undefined8 *)(lVar15 + 0x30));
              }
            }
LAB_00e3dbd8:
            dVar20 = *pdVar1;
            if (dVar20 == 0.0) goto LAB_00e443fc;
            if (*(char *)((long)dVar20 + 0x108) != '\0') {
              if (*(long *)((long)dVar20 + 0x100) == 0) goto LAB_00e443fc;
              if (*(char *)(*(long *)((long)dVar20 + 0x100) + 0x20) == '\0') {
                lVar15 = *unaff_x22;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
                lVar21 = *in_stack_00000028;
                if (lVar21 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
                *(undefined8 *)(lVar21 + uVar16 * 8 + 0x20) =
                     *(undefined8 *)(lVar15 + uVar16 * 8 + 0x20);
                lVar15 = *unaff_x22;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar32) goto LAB_00e44400;
                lVar21 = *in_stack_00000028;
                if (lVar21 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar21 + 0x18) <= uVar32) goto LAB_00e44400;
                *(undefined8 *)(lVar21 + (long)(int)uVar32 * 8 + 0x20) =
                     *(undefined8 *)(lVar15 + (long)(int)uVar32 * 8 + 0x20);
                lVar15 = *unaff_x22;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar30) goto LAB_00e44400;
                lVar21 = *in_stack_00000028;
                if (lVar21 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_00e44400;
                *(undefined8 *)(lVar21 + (long)(int)uVar30 * 8 + 0x20) =
                     *(undefined8 *)(lVar15 + (long)(int)uVar30 * 8 + 0x20);
                lVar15 = *unaff_x22;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_00e44400;
                lVar21 = *in_stack_00000028;
                if (lVar21 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_00e44400;
                *(undefined8 *)(lVar21 + uVar29 * 8 + 0x20) =
                     *(undefined8 *)(lVar15 + uVar29 * 8 + 0x20);
                dVar20 = *pdVar1;
                if (dVar20 == 0.0) goto LAB_00e443fc;
              }
            }
            dVar38 = DAT_028aa048;
            if (*(char *)((long)dVar20 + 0x108) == '\0') {
LAB_00e3dd34:
              uVar14 = *(undefined8 *)((long)dVar20 + 0xa8);
              if (*(int *)(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar34 = FUN_02681b9c(uVar14,0,0);
              dVar20 = *pdVar1;
              if (dVar20 == 0.0) goto LAB_00e443fc;
              if ((uVar34 & 1) == 0) {
                uVar14 = *(undefined8 *)((long)dVar20 + 0xb0);
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar34 = FUN_02681b9c(uVar14,0,0);
                dVar20 = DAT_028aa048;
                if ((uVar34 & 1) == 0) {
                  if (*pdVar1 == 0.0) goto LAB_00e443fc;
                  uVar14 = *(undefined8 *)((long)*pdVar1 + 0xa0);
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar34 = FUN_02681b9c(uVar14,0,0);
                  lVar15 = *unaff_x24;
                  if ((uVar34 & 1) == 0) {
                    fVar35 = *(float *)((long)unaff_x19 + 0x8c);
                    fVar40 = *(float *)(unaff_x19 + 0x12);
                    fVar41 = *(float *)((long)unaff_x19 + 0x94);
                    fVar43 = *(float *)(unaff_x19 + 0x13);
                    fVar44 = fVar35;
                    if (1.0 < fVar35) {
                      fVar44 = 1.0;
                    }
                    fVar44 = fVar44 * 255.0;
                    if (fVar35 < 0.0) {
                      fVar44 = fVar37;
                    }
                    dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                    if (0.0 <= fVar44) {
                      if (dVar20 == 0.5) {
                        fVar44 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar44 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar44 = (float)(int)(fVar44 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar44 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar44 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar44 = (float)(int)(fVar44 + -0.5);
                    }
                    fVar35 = fVar40;
                    if (1.0 < fVar40) {
                      fVar35 = 1.0;
                    }
                    fVar35 = fVar35 * 255.0;
                    if (fVar40 < 0.0) {
                      fVar35 = fVar37;
                    }
                    dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                    if (0.0 <= fVar35) {
                      if (dVar20 == 0.5) {
                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3fd48;
                      }
                      fVar40 = (float)(int)(fVar35 + 0.5);
                    }
                    else if (dVar20 == -0.5) {
                      fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
                      fVar40 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar40 = fVar35;
                      }
                    }
                    else {
                      fVar40 = (float)(int)(fVar35 + -0.5);
                    }
                    fVar35 = fVar41;
                    if (1.0 < fVar41) {
                      fVar35 = 1.0;
                    }
                    fVar35 = fVar35 * 255.0;
                    if (fVar41 < 0.0) {
                      fVar35 = fVar37;
                    }
                    dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                    if (0.0 <= fVar35) {
                      if (dVar20 == 0.5) {
                        fVar35 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar35 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar35 = (float)(int)(fVar35 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar35 + -0.5);
                    }
                    fVar41 = fVar43;
                    if (1.0 < fVar43) {
                      fVar41 = 1.0;
                    }
                    fVar41 = fVar41 * 255.0;
                    if (fVar43 < 0.0) {
                      fVar41 = fVar37;
                    }
                    dVar20 = modf((double)fVar41,(double *)&stack0x00000070);
                    if (0.0 <= fVar41) {
                      if (dVar20 == 0.5) {
                        fVar43 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar43 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar43 = (float)(int)(fVar41 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar43 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar43 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar43 = (float)(int)(fVar41 + -0.5);
                    }
                    if (lVar15 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
                    *(uint *)(lVar15 + uVar16 * 4 + 0x20) =
                         (int)fVar44 & 0xffU | ((int)fVar40 & 0xffU) << 8 |
                         ((int)fVar35 & 0xffU) << 0x10 | (int)fVar43 << 0x18;
                    fVar35 = *(float *)(unaff_x19 + 0x12);
                    lVar15 = unaff_x19[0x5f];
                    fVar43 = *(float *)((long)unaff_x19 + 0x94);
                    fVar40 = *(float *)(unaff_x19 + 0x13);
                    fVar44 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                    if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                      fVar44 = fVar37;
                    }
                    dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                    if (0.0 <= fVar44) {
                      if (dVar20 == 0.5) {
                        fVar44 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar44 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar44 = (float)(int)(fVar44 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar44 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar44 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar44 = (float)(int)(fVar44 + -0.5);
                    }
                    fVar41 = fVar35;
                    if (1.0 < fVar35) {
                      fVar41 = 1.0;
                    }
                    fVar41 = fVar41 * 255.0;
                    if (fVar35 < 0.0) {
                      fVar41 = fVar37;
                    }
                    dVar20 = modf((double)fVar41,(double *)&stack0x00000070);
                    if (0.0 <= fVar41) {
                      if (dVar20 == 0.5) {
                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e40610;
                      }
                      fVar41 = (float)(int)(fVar41 + 0.5);
                    }
                    else if (dVar20 == -0.5) {
                      fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
                      fVar41 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar41 = fVar35;
                      }
                    }
                    else {
                      fVar41 = (float)(int)(fVar41 + -0.5);
                    }
                    fVar35 = fVar43;
                    if (1.0 < fVar43) {
                      fVar35 = 1.0;
                    }
                    fVar35 = fVar35 * 255.0;
                    if (fVar43 < 0.0) {
                      fVar35 = fVar37;
                    }
                    dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                    if (0.0 <= fVar35) {
                      if (dVar20 == 0.5) {
                        fVar35 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar35 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar35 = (float)(int)(fVar35 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar35 + -0.5);
                    }
                    fVar43 = fVar40;
                    if (1.0 < fVar40) {
                      fVar43 = 1.0;
                    }
                    fVar43 = fVar43 * 255.0;
                    if (fVar40 < 0.0) {
                      fVar43 = fVar37;
                    }
                    dVar20 = modf((double)fVar43,(double *)&stack0x00000070);
                    if (0.0 <= fVar43) {
                      if (dVar20 == 0.5) {
                        fVar40 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar40 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar40 = (float)(int)(fVar43 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar40 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar40 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar40 = (float)(int)(fVar43 + -0.5);
                    }
                    if (lVar15 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar15 + 0x18) <= uVar32) goto LAB_00e44400;
                    *(uint *)(lVar15 + (long)(int)uVar32 * 4 + 0x20) =
                         (int)fVar44 & 0xffU | ((int)fVar41 & 0xffU) << 8 |
                         ((int)fVar35 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
                    fVar35 = *(float *)(unaff_x19 + 0x12);
                    lVar15 = unaff_x19[0x5f];
                    fVar43 = *(float *)((long)unaff_x19 + 0x94);
                    fVar40 = *(float *)(unaff_x19 + 0x13);
                    fVar44 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                    if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                      fVar44 = fVar37;
                    }
                    dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                    if (0.0 <= fVar44) {
                      if (dVar20 == 0.5) {
                        fVar44 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar44 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar44 = (float)(int)(fVar44 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar44 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar44 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar44 = (float)(int)(fVar44 + -0.5);
                    }
                    fVar41 = fVar35;
                    if (1.0 < fVar35) {
                      fVar41 = 1.0;
                    }
                    fVar41 = fVar41 * 255.0;
                    if (fVar35 < 0.0) {
                      fVar41 = fVar37;
                    }
                    dVar20 = modf((double)fVar41,(double *)&stack0x00000070);
                    if (0.0 <= fVar41) {
                      if (dVar20 == 0.5) {
                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e40e20;
                      }
                      fVar41 = (float)(int)(fVar41 + 0.5);
                    }
                    else if (dVar20 == -0.5) {
                      fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
                      fVar41 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar41 = fVar35;
                      }
                    }
                    else {
                      fVar41 = (float)(int)(fVar41 + -0.5);
                    }
                    fVar35 = fVar43;
                    if (1.0 < fVar43) {
                      fVar35 = 1.0;
                    }
                    fVar35 = fVar35 * 255.0;
                    if (fVar43 < 0.0) {
                      fVar35 = fVar37;
                    }
                    dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                    if (0.0 <= fVar35) {
                      if (dVar20 == 0.5) {
                        fVar35 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar35 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar35 = (float)(int)(fVar35 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar35 + -0.5);
                    }
                    fVar43 = fVar40;
                    if (1.0 < fVar40) {
                      fVar43 = 1.0;
                    }
                    fVar43 = fVar43 * 255.0;
                    if (fVar40 < 0.0) {
                      fVar43 = fVar37;
                    }
                    dVar20 = modf((double)fVar43,(double *)&stack0x00000070);
                    if (0.0 <= fVar43) {
                      if (dVar20 == 0.5) {
                        fVar40 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar40 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar40 = (float)(int)(fVar43 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar40 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar40 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar40 = (float)(int)(fVar43 + -0.5);
                    }
                    if (lVar15 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar15 + 0x18) <= uVar30) goto LAB_00e44400;
                    *(uint *)(lVar15 + (long)(int)uVar30 * 4 + 0x20) =
                         (int)fVar44 & 0xffU | ((int)fVar41 & 0xffU) << 8 |
                         ((int)fVar35 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
                    fVar44 = *(float *)((long)unaff_x19 + 0x8c);
                    fVar35 = *(float *)(unaff_x19 + 0x12);
                    lVar15 = unaff_x19[0x5f];
                    fVar43 = *(float *)((long)unaff_x19 + 0x94);
                    fVar40 = *(float *)(unaff_x19 + 0x13);
                  }
                  else {
                    if ((*pdVar1 == 0.0) || (lVar21 = *(long *)((long)*pdVar1 + 0xa0), lVar21 == 0))
                    goto LAB_00e443fc;
                    fVar35 = *(float *)(lVar21 + 0x18);
                    fVar40 = *(float *)(lVar21 + 0x1c);
                    fVar41 = *(float *)(lVar21 + 0x20);
                    fVar43 = *(float *)(lVar21 + 0x24);
                    fVar44 = fVar35;
                    if (1.0 < fVar35) {
                      fVar44 = 1.0;
                    }
                    fVar44 = fVar44 * 255.0;
                    if (fVar35 < 0.0) {
                      fVar44 = fVar37;
                    }
                    dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                    if (0.0 <= fVar44) {
                      if (dVar20 == 0.5) {
                        fVar44 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar44 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar44 = (float)(int)(fVar44 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar44 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar44 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar44 = (float)(int)(fVar44 + -0.5);
                    }
                    fVar35 = fVar40;
                    if (1.0 < fVar40) {
                      fVar35 = 1.0;
                    }
                    fVar35 = fVar35 * 255.0;
                    if (fVar40 < 0.0) {
                      fVar35 = fVar37;
                    }
                    dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                    if (0.0 <= fVar35) {
                      if (dVar20 == 0.5) {
                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3fcc4;
                      }
                      fVar40 = (float)(int)(fVar35 + 0.5);
                    }
                    else if (dVar20 == -0.5) {
                      fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
                      fVar40 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar40 = fVar35;
                      }
                    }
                    else {
                      fVar40 = (float)(int)(fVar35 + -0.5);
                    }
                    fVar35 = fVar41;
                    if (1.0 < fVar41) {
                      fVar35 = 1.0;
                    }
                    fVar35 = fVar35 * 255.0;
                    if (fVar41 < 0.0) {
                      fVar35 = fVar37;
                    }
                    dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                    if (0.0 <= fVar35) {
                      if (dVar20 == 0.5) {
                        fVar35 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar35 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar35 = (float)(int)(fVar35 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar35 + -0.5);
                    }
                    fVar41 = fVar43;
                    if (1.0 < fVar43) {
                      fVar41 = 1.0;
                    }
                    fVar41 = fVar41 * 255.0;
                    if (fVar43 < 0.0) {
                      fVar41 = fVar37;
                    }
                    dVar20 = modf((double)fVar41,(double *)&stack0x00000070);
                    if (0.0 <= fVar41) {
                      if (dVar20 == 0.5) {
                        fVar43 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar43 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar43 = (float)(int)(fVar41 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar43 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar43 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar43 = (float)(int)(fVar41 + -0.5);
                    }
                    if (lVar15 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
                    *(uint *)(lVar15 + uVar16 * 4 + 0x20) =
                         (int)fVar44 & 0xffU | ((int)fVar40 & 0xffU) << 8 |
                         ((int)fVar35 & 0xffU) << 0x10 | (int)fVar43 << 0x18;
                    if ((*pdVar1 == 0.0) || (lVar15 = *(long *)((long)*pdVar1 + 0xa0), lVar15 == 0))
                    goto LAB_00e443fc;
                    fVar35 = *(float *)(lVar15 + 0x1c);
                    lVar21 = *unaff_x24;
                    fVar43 = *(float *)(lVar15 + 0x20);
                    fVar40 = *(float *)(lVar15 + 0x24);
                    fVar44 = *(float *)(lVar15 + 0x18) * 255.0;
                    if (*(float *)(lVar15 + 0x18) < 0.0) {
                      fVar44 = fVar37;
                    }
                    dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                    if (0.0 <= fVar44) {
                      if (dVar20 == 0.5) {
                        fVar44 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar44 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar44 = (float)(int)(fVar44 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar44 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar44 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar44 = (float)(int)(fVar44 + -0.5);
                    }
                    fVar41 = fVar35;
                    if (1.0 < fVar35) {
                      fVar41 = 1.0;
                    }
                    fVar41 = fVar41 * 255.0;
                    if (fVar35 < 0.0) {
                      fVar41 = fVar37;
                    }
                    dVar20 = modf((double)fVar41,(double *)&stack0x00000070);
                    if (0.0 <= fVar41) {
                      if (dVar20 == 0.5) {
                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e4057c;
                      }
                      fVar41 = (float)(int)(fVar41 + 0.5);
                    }
                    else if (dVar20 == -0.5) {
                      fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
                      fVar41 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar41 = fVar35;
                      }
                    }
                    else {
                      fVar41 = (float)(int)(fVar41 + -0.5);
                    }
                    fVar35 = fVar43;
                    if (1.0 < fVar43) {
                      fVar35 = 1.0;
                    }
                    fVar35 = fVar35 * 255.0;
                    if (fVar43 < 0.0) {
                      fVar35 = fVar37;
                    }
                    dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                    if (0.0 <= fVar35) {
                      if (dVar20 == 0.5) {
                        fVar35 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar35 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar35 = (float)(int)(fVar35 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar35 + -0.5);
                    }
                    fVar43 = fVar40;
                    if (1.0 < fVar40) {
                      fVar43 = 1.0;
                    }
                    fVar43 = fVar43 * 255.0;
                    if (fVar40 < 0.0) {
                      fVar43 = fVar37;
                    }
                    dVar20 = modf((double)fVar43,(double *)&stack0x00000070);
                    if (0.0 <= fVar43) {
                      if (dVar20 == 0.5) {
                        fVar40 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar40 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar40 = (float)(int)(fVar43 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar40 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar40 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar40 = (float)(int)(fVar43 + -0.5);
                    }
                    if (lVar21 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar21 + 0x18) <= uVar32) goto LAB_00e44400;
                    *(uint *)(lVar21 + (long)(int)uVar32 * 4 + 0x20) =
                         (int)fVar44 & 0xffU | ((int)fVar41 & 0xffU) << 8 |
                         ((int)fVar35 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
                    if ((*pdVar1 == 0.0) || (lVar15 = *(long *)((long)*pdVar1 + 0xa0), lVar15 == 0))
                    goto LAB_00e443fc;
                    fVar35 = *(float *)(lVar15 + 0x1c);
                    lVar21 = *unaff_x24;
                    fVar43 = *(float *)(lVar15 + 0x20);
                    fVar40 = *(float *)(lVar15 + 0x24);
                    fVar44 = *(float *)(lVar15 + 0x18) * 255.0;
                    if (*(float *)(lVar15 + 0x18) < 0.0) {
                      fVar44 = fVar37;
                    }
                    dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                    if (0.0 <= fVar44) {
                      if (dVar20 == 0.5) {
                        fVar44 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar44 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar44 = (float)(int)(fVar44 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar44 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar44 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar44 = (float)(int)(fVar44 + -0.5);
                    }
                    fVar41 = fVar35;
                    if (1.0 < fVar35) {
                      fVar41 = 1.0;
                    }
                    fVar41 = fVar41 * 255.0;
                    if (fVar35 < 0.0) {
                      fVar41 = fVar37;
                    }
                    dVar20 = modf((double)fVar41,(double *)&stack0x00000070);
                    if (0.0 <= fVar41) {
                      if (dVar20 == 0.5) {
                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e40d8c;
                      }
                      fVar41 = (float)(int)(fVar41 + 0.5);
                    }
                    else if (dVar20 == -0.5) {
                      fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
                      fVar41 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar41 = fVar35;
                      }
                    }
                    else {
                      fVar41 = (float)(int)(fVar41 + -0.5);
                    }
                    fVar35 = fVar43;
                    if (1.0 < fVar43) {
                      fVar35 = 1.0;
                    }
                    fVar35 = fVar35 * 255.0;
                    if (fVar43 < 0.0) {
                      fVar35 = fVar37;
                    }
                    dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                    if (0.0 <= fVar35) {
                      if (dVar20 == 0.5) {
                        fVar35 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar35 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar35 = (float)(int)(fVar35 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar35 + -0.5);
                    }
                    fVar43 = fVar40;
                    if (1.0 < fVar40) {
                      fVar43 = 1.0;
                    }
                    fVar43 = fVar43 * 255.0;
                    if (fVar40 < 0.0) {
                      fVar43 = fVar37;
                    }
                    dVar20 = modf((double)fVar43,(double *)&stack0x00000070);
                    if (0.0 <= fVar43) {
                      if (dVar20 == 0.5) {
                        fVar40 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar40 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar40 = (float)(int)(fVar43 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar40 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar40 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar40 = (float)(int)(fVar43 + -0.5);
                    }
                    if (lVar21 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_00e44400;
                    *(uint *)(lVar21 + (long)(int)uVar30 * 4 + 0x20) =
                         (int)fVar44 & 0xffU | ((int)fVar41 & 0xffU) << 8 |
                         ((int)fVar35 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
                    if ((*pdVar1 == 0.0) || (lVar21 = *(long *)((long)*pdVar1 + 0xa0), lVar21 == 0))
                    goto LAB_00e443fc;
                    fVar44 = *(float *)(lVar21 + 0x18);
                    fVar35 = *(float *)(lVar21 + 0x1c);
                    lVar15 = *unaff_x24;
                    fVar43 = *(float *)(lVar21 + 0x20);
                    fVar40 = *(float *)(lVar21 + 0x24);
                  }
                  fVar41 = fVar44 * 255.0;
                  if (fVar44 < 0.0) {
                    fVar41 = fVar37;
                  }
                  dVar20 = modf((double)fVar41,(double *)&stack0x00000070);
                  if (0.0 <= fVar41) {
                    if (dVar20 == 0.5) {
                      fVar44 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar44 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar44 = (float)(int)(fVar41 + 0.5);
                    }
                  }
                  else if (dVar20 == -0.5) {
                    fVar44 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar44 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar44 = (float)(int)(fVar41 + -0.5);
                  }
                  fVar41 = fVar35;
                  if (1.0 < fVar35) {
                    fVar41 = 1.0;
                  }
                  fVar41 = fVar41 * 255.0;
                  if (fVar35 < 0.0) {
                    fVar41 = fVar37;
                  }
                  dVar20 = modf((double)fVar41,(double *)&stack0x00000070);
                  if (0.0 <= fVar41) {
                    if (dVar20 == 0.5) {
                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e412dc;
                    }
                    fVar41 = (float)(int)(fVar41 + 0.5);
                  }
                  else if (dVar20 == -0.5) {
                    fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
                    fVar41 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar41 = fVar35;
                    }
                  }
                  else {
                    fVar41 = (float)(int)(fVar41 + -0.5);
                  }
                  fVar35 = fVar43;
                  if (1.0 < fVar43) {
                    fVar35 = 1.0;
                  }
                  fVar35 = fVar35 * 255.0;
                  if (fVar43 < 0.0) {
                    fVar35 = fVar37;
                  }
                  dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                  if (0.0 <= fVar35) {
                    if (dVar20 == 0.5) {
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar35 + 0.5);
                    }
                  }
                  else if (dVar20 == -0.5) {
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar35 + -0.5);
                  }
                  param_3 = 0x3f800000;
                  fVar43 = fVar40;
                  if (1.0 < fVar40) {
                    fVar43 = 1.0;
                  }
                  fVar43 = fVar43 * 255.0;
                  if (fVar40 < 0.0) {
                    fVar43 = fVar37;
                  }
                  dVar20 = modf((double)fVar43,(double *)&stack0x00000070);
                  if (0.0 <= fVar43) {
                    if (dVar20 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar43 + 0.5);
                    }
                  }
                  else if (dVar20 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar43 + -0.5);
                  }
                  if (lVar15 != 0) {
                    if (uVar27 < *(uint *)(lVar15 + 0x18)) {
                      *(uint *)(lVar15 + uVar29 * 4 + 0x20) =
                           (int)fVar44 & 0xffU | ((int)fVar41 & 0xffU) << 8 |
                           ((int)fVar35 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                      goto LAB_00e43400;
                    }
                    goto LAB_00e44400;
                  }
                  goto LAB_00e443fc;
                }
                lVar15 = *unaff_x24;
                dVar38 = modf(DAT_028aa048,(double *)&stack0x00000070);
                if (dVar38 == 0.5) {
                  fVar44 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar44 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar44 = 255.0;
                }
                dVar38 = modf(dVar20,(double *)&stack0x00000070);
                if (dVar38 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = 255.0;
                }
                dVar38 = modf(dVar20,(double *)&stack0x00000070);
                if (dVar38 == 0.5) {
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar40 = 255.0;
                }
                dVar38 = modf(dVar20,(double *)&stack0x00000070);
                if (dVar38 == 0.5) {
                  fVar43 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar43 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar43 = 255.0;
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
                *(uint *)(lVar15 + uVar16 * 4 + 0x20) =
                     (int)fVar44 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                     ((int)fVar40 & 0xffU) << 0x10 | (int)fVar43 << 0x18;
                lVar15 = *unaff_x24;
                dVar38 = modf(dVar20,(double *)&stack0x00000070);
                if (dVar38 == 0.5) {
                  fVar44 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar44 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar44 = 255.0;
                }
                dVar38 = modf(dVar20,(double *)&stack0x00000070);
                if (dVar38 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = 255.0;
                }
                dVar38 = modf(dVar20,(double *)&stack0x00000070);
                if (dVar38 == 0.5) {
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar40 = 255.0;
                }
                dVar38 = modf(dVar20,(double *)&stack0x00000070);
                if (dVar38 == 0.5) {
                  fVar43 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar43 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar43 = 255.0;
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar32) goto LAB_00e44400;
                *(uint *)(lVar15 + (long)(int)uVar32 * 4 + 0x20) =
                     (int)fVar44 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                     ((int)fVar40 & 0xffU) << 0x10 | (int)fVar43 << 0x18;
                lVar15 = *unaff_x24;
                dVar38 = modf(dVar20,(double *)&stack0x00000070);
                if (dVar38 == 0.5) {
                  fVar44 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar44 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar44 = 255.0;
                }
                dVar38 = modf(dVar20,(double *)&stack0x00000070);
                if (dVar38 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = 255.0;
                }
                dVar38 = modf(dVar20,(double *)&stack0x00000070);
                if (dVar38 == 0.5) {
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar40 = 255.0;
                }
                dVar38 = modf(dVar20,(double *)&stack0x00000070);
                if (dVar38 == 0.5) {
                  fVar43 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar43 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar43 = 255.0;
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar30) goto LAB_00e44400;
                *(uint *)(lVar15 + (long)(int)uVar30 * 4 + 0x20) =
                     (int)fVar44 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                     ((int)fVar40 & 0xffU) << 0x10 | (int)fVar43 << 0x18;
                lVar15 = *unaff_x24;
                dVar38 = modf(dVar20,(double *)&stack0x00000070);
                if (dVar38 == 0.5) {
                  fVar44 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar44 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar44 = 255.0;
                }
                dVar38 = modf(dVar20,(double *)&stack0x00000070);
                if (dVar38 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = 255.0;
                }
                dVar38 = modf(dVar20,(double *)&stack0x00000070);
                if (dVar38 == 0.5) {
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar40 = 255.0;
                }
                dVar20 = modf(dVar20,(double *)&stack0x00000070);
                if (dVar20 == 0.5) {
                  fVar43 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar43 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar43 = 255.0;
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_00e44400;
                *(uint *)(lVar15 + uVar29 * 4 + 0x20) =
                     (int)fVar44 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                     ((int)fVar40 & 0xffU) << 0x10 | (int)fVar43 << 0x18;
                if (*pdVar1 == 0.0) goto LAB_00e443fc;
                uVar14 = *(undefined8 *)((long)*pdVar1 + 0xa0);
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar34 = FUN_02681b9c(uVar14,0,0);
                if ((uVar34 & 1) == 0) goto LAB_00e43400;
                lVar15 = *unaff_x24;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
                puVar26 = (uint *)(lVar15 + uVar16 * 4 + 0x20);
                uVar7 = *puVar26;
                if ((*pdVar1 == 0.0) || (lVar15 = *(long *)((long)*pdVar1 + 0xa0), lVar15 == 0))
                goto LAB_00e443fc;
                fVar35 = ((float)(uVar7 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
                fVar41 = ((float)(uVar7 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
                fVar43 = *(float *)(lVar15 + 0x20);
                fVar40 = *(float *)(lVar15 + 0x24);
                fVar44 = fVar35 * 255.0;
                if (fVar35 < 0.0) {
                  fVar44 = fVar37;
                }
                dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                if (0.0 <= fVar44) {
                  if (dVar20 == 0.5) {
                    fVar44 = 1.0;
                    goto LAB_00e3ede4;
                  }
                  fVar35 = (float)(int)(fVar44 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar44 = -1.0;
LAB_00e3ede4:
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + fVar44;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar44 + -0.5);
                }
                fVar43 = ((float)(uVar7 >> 0x10 & 0xff) / 255.0) * fVar43;
                fVar44 = fVar41 * 255.0;
                if (fVar41 < 0.0) {
                  fVar44 = fVar37;
                }
                dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                if (0.0 <= fVar44) {
                  if (dVar20 == 0.5) {
                    fVar44 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar44 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar44 = (float)(int)(fVar44 + 0.5);
                  }
                }
                else if (dVar20 == -0.5) {
                  fVar44 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar44 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar44 = (float)(int)(fVar44 + -0.5);
                }
                fVar41 = fVar43;
                if (1.0 < fVar43) {
                  fVar41 = 1.0;
                }
                fVar40 = ((float)(uVar7 >> 0x18) / 255.0) * fVar40;
                fVar41 = fVar41 * 255.0;
                if (fVar43 < 0.0) {
                  fVar41 = fVar37;
                }
                dVar20 = modf((double)fVar41,(double *)&stack0x00000070);
                if (0.0 <= fVar41) {
                  if (dVar20 == 0.5) {
                    fVar43 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3ffb0;
                  }
                  fVar41 = (float)(int)(fVar41 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar43 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
                  fVar41 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar41 = fVar43;
                  }
                }
                else {
                  fVar41 = (float)(int)(fVar41 + -0.5);
                }
                fVar43 = fVar40;
                if (1.0 < fVar40) {
                  fVar43 = 1.0;
                }
                fVar43 = fVar43 * 255.0;
                if (fVar40 < 0.0) {
                  fVar43 = fVar37;
                }
                dVar20 = modf((double)fVar43,(double *)&stack0x00000070);
                if (0.0 <= fVar43) {
                  if (dVar20 == 0.5) {
                    fVar40 = 1.0;
                    goto LAB_00e40174;
                  }
                  fVar43 = (float)(int)(fVar43 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar40 = -1.0;
LAB_00e40174:
                  fVar43 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar43 = (float)_fStack0000000000000070 + fVar40;
                  }
                }
                else {
                  fVar43 = (float)(int)(fVar43 + -0.5);
                }
                *puVar26 = (int)fVar35 & 0xffU | ((int)fVar44 & 0xffU) << 8 |
                           ((int)fVar41 & 0xffU) << 0x10 | (int)fVar43 << 0x18;
                lVar15 = *unaff_x24;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar32) goto LAB_00e44400;
                puVar26 = (uint *)(lVar15 + (long)(int)uVar32 * 4 + 0x20);
                uVar7 = *puVar26;
                if ((*pdVar1 == 0.0) || (lVar15 = *(long *)((long)*pdVar1 + 0xa0), lVar15 == 0))
                goto LAB_00e443fc;
                fVar35 = ((float)(uVar7 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
                fVar41 = ((float)(uVar7 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
                fVar43 = *(float *)(lVar15 + 0x20);
                fVar40 = *(float *)(lVar15 + 0x24);
                fVar44 = fVar35 * 255.0;
                if (fVar35 < 0.0) {
                  fVar44 = fVar37;
                }
                dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                if (0.0 <= fVar44) {
                  if (dVar20 == 0.5) {
                    fVar44 = 1.0;
                    goto LAB_00e404dc;
                  }
                  fVar35 = (float)(int)(fVar44 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar44 = -1.0;
LAB_00e404dc:
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + fVar44;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar44 + -0.5);
                }
                fVar43 = ((float)(uVar7 >> 0x10 & 0xff) / 255.0) * fVar43;
                fVar44 = fVar41 * 255.0;
                if (fVar41 < 0.0) {
                  fVar44 = fVar37;
                }
                dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                if (0.0 <= fVar44) {
                  if (dVar20 == 0.5) {
                    fVar44 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar44 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar44 = (float)(int)(fVar44 + 0.5);
                  }
                }
                else if (dVar20 == -0.5) {
                  fVar44 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar44 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar44 = (float)(int)(fVar44 + -0.5);
                }
                fVar41 = fVar43;
                if (1.0 < fVar43) {
                  fVar41 = 1.0;
                }
                fVar40 = ((float)(uVar7 >> 0x18) / 255.0) * fVar40;
                fVar41 = fVar41 * 255.0;
                if (fVar43 < 0.0) {
                  fVar41 = fVar37;
                }
                dVar20 = modf((double)fVar41,(double *)&stack0x00000070);
                if (0.0 <= fVar41) {
                  if (dVar20 == 0.5) {
                    fVar43 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e40888;
                  }
                  fVar41 = (float)(int)(fVar41 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar43 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
                  fVar41 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar41 = fVar43;
                  }
                }
                else {
                  fVar41 = (float)(int)(fVar41 + -0.5);
                }
                fVar43 = fVar40;
                if (1.0 < fVar40) {
                  fVar43 = 1.0;
                }
                fVar43 = fVar43 * 255.0;
                if (fVar40 < 0.0) {
                  fVar43 = fVar37;
                }
                dVar20 = modf((double)fVar43,(double *)&stack0x00000070);
                if (0.0 <= fVar43) {
                  if (dVar20 == 0.5) {
                    fVar37 = 1.0;
                    goto LAB_00e40a4c;
                  }
                  fVar40 = (float)(int)(fVar43 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar37 = -1.0;
LAB_00e40a4c:
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = (float)_fStack0000000000000070 + fVar37;
                  }
                }
                else {
                  fVar40 = (float)(int)(fVar43 + -0.5);
                }
                *puVar26 = (int)fVar35 & 0xffU | ((int)fVar44 & 0xffU) << 8 |
                           ((int)fVar41 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
                lVar15 = *unaff_x24;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar30) goto LAB_00e44400;
                lVar15 = lVar15 + (long)(int)uVar30 * 4;
              }
              else {
                lVar15 = *(long *)((long)dVar20 + 0xa8);
                if (lVar15 == 0) goto LAB_00e443fc;
                fVar37 = *(float *)(lVar15 + 0x24);
                if (fVar37 != 0.0) {
                  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                }
                plVar33 = (long *)StringLiteral_9119;
                cVar8 = *(char *)(lVar15 + 0x2c);
                lVar25 = *unaff_x24;
                lVar21 = *(long *)(lVar15 + 0x18);
                fVar40 = fVar40 * fVar37;
                if (*(int *)(lVar15 + 0x28) == 1) {
                  if (cVar8 == '\0') {
                    if (lVar21 == 0) goto LAB_00e443fc;
                    fVar44 = *(float *)(lVar15 + 0x20);
                    fVar43 = *(float *)((long)dVar20 + 0x84);
                    fVar40 = fVar40 + (*(float *)((long)dVar20 + 0x48) * fVar44) / fVar43;
                    fVar40 = fVar40 - (float)(int)fVar40;
                    fVar37 = fVar40;
                    if (1.0 < fVar40) {
                      fVar37 = fVar35;
                    }
                    fVar41 = fVar37;
                    if (fVar40 < 0.0) {
                      fVar41 = 0.0;
                    }
                    fVar41 = (float)FUN_0269ad38(fVar41,lVar21,0);
                    fVar40 = fVar41;
                    if (1.0 < fVar41) {
                      fVar40 = fVar35;
                    }
                    fVar40 = fVar40 * 255.0;
                    if (fVar41 < 0.0) {
                      fVar40 = 0.0;
                    }
                    dVar20 = modf((double)fVar40,(double *)&stack0x00000070);
                    if (0.0 <= fVar40) {
                      if (dVar20 == 0.5) {
                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3eeac;
                      }
                      fVar40 = (float)(int)(fVar40 + 0.5);
                    }
                    else if (dVar20 == -0.5) {
                      fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                      fVar40 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar40 = fVar35;
                      }
                    }
                    else {
                      fVar40 = (float)(int)(fVar40 + -0.5);
                    }
                    fVar35 = fVar37;
                    if (1.0 < fVar37) {
                      fVar35 = 1.0;
                    }
                    fVar35 = fVar35 * 255.0;
                    if (fVar37 < 0.0) {
                      fVar35 = 0.0;
                    }
                    dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                    if (0.0 <= fVar35) {
                      if (dVar20 == 0.5) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e41534;
                      }
                      fVar35 = (float)(int)(fVar35 + 0.5);
                    }
                    else if (dVar20 == -0.5) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = fVar37;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar35 + -0.5);
                    }
                    fVar37 = fVar44;
                    if (1.0 < fVar44) {
                      fVar37 = 1.0;
                    }
                    fVar37 = fVar37 * 255.0;
                    if (fVar44 < 0.0) {
                      fVar37 = 0.0;
                    }
                    dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                    if (0.0 <= fVar37) {
                      if (dVar20 == 0.5) {
                        fVar37 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar37 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar37 = (float)(int)(fVar37 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar37 + -0.5);
                    }
                    fVar44 = fVar43;
                    if (1.0 < fVar43) {
                      fVar44 = 1.0;
                    }
                    fVar44 = fVar44 * 255.0;
                    if (fVar43 < 0.0) {
                      fVar44 = 0.0;
                    }
                    dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                    if (0.0 <= fVar44) {
                      if (dVar20 == 0.5) {
                        fVar44 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar44 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar44 = (float)(int)(fVar44 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar44 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar44 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar44 = (float)(int)(fVar44 + -0.5);
                    }
                    if (lVar25 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar25 + 0x18) <= uVar4) goto LAB_00e44400;
                    *(uint *)(lVar25 + uVar16 * 4 + 0x20) =
                         (int)fVar40 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                         ((int)fVar37 & 0xffU) << 0x10 | (int)fVar44 << 0x18;
                    dVar20 = *pdVar1;
                    if (((dVar20 == 0.0) || (lVar15 = *(long *)((long)dVar20 + 0xa8), lVar15 == 0))
                       || (lVar21 = *(long *)(lVar15 + 0x18), lVar21 == 0)) goto LAB_00e443fc;
                    fVar35 = *(float *)((long)dVar20 + 0x48);
                    fVar40 = *(float *)((long)dVar20 + 0x84);
                    lVar25 = *unaff_x24;
                    fVar44 = fVar46 * *(float *)(lVar15 + 0x24) +
                             (fVar35 * *(float *)(lVar15 + 0x20)) / fVar40;
                    fVar44 = fVar44 - (float)(int)fVar44;
                    fVar37 = fVar44;
                    if (1.0 < fVar44) {
                      fVar37 = 1.0;
                    }
                  }
                  else {
                    if (lVar21 == 0) goto LAB_00e443fc;
                    fVar44 = *(float *)((long)dVar20 + 0x84);
                    fVar43 = *(float *)(lVar15 + 0x20);
                    fVar40 = fVar40 + ((*(float *)((long)dVar20 + 0x48) + fVar44) * fVar43) / fVar44
                    ;
                    fVar40 = fVar40 - (float)(int)fVar40;
                    fVar37 = fVar40;
                    if (1.0 < fVar40) {
                      fVar37 = fVar35;
                    }
                    fVar41 = fVar37;
                    if (fVar40 < 0.0) {
                      fVar41 = 0.0;
                    }
                    fVar41 = (float)FUN_0269ad38(fVar41,lVar21,0);
                    fVar40 = fVar41;
                    if (1.0 < fVar41) {
                      fVar40 = fVar35;
                    }
                    fVar40 = fVar40 * 255.0;
                    if (fVar41 < 0.0) {
                      fVar40 = 0.0;
                    }
                    dVar20 = modf((double)fVar40,(double *)&stack0x00000070);
                    if (0.0 <= fVar40) {
                      if (dVar20 == 0.5) {
                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3ed6c;
                      }
                      fVar40 = (float)(int)(fVar40 + 0.5);
                    }
                    else if (dVar20 == -0.5) {
                      fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                      fVar40 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar40 = fVar35;
                      }
                    }
                    else {
                      fVar40 = (float)(int)(fVar40 + -0.5);
                    }
                    fVar35 = fVar37;
                    if (1.0 < fVar37) {
                      fVar35 = 1.0;
                    }
                    fVar35 = fVar35 * 255.0;
                    if (fVar37 < 0.0) {
                      fVar35 = 0.0;
                    }
                    dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                    if (0.0 <= fVar35) {
                      if (dVar20 == 0.5) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3f2ec;
                      }
                      fVar35 = (float)(int)(fVar35 + 0.5);
                    }
                    else if (dVar20 == -0.5) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = fVar37;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar35 + -0.5);
                    }
                    fVar37 = fVar44;
                    if (1.0 < fVar44) {
                      fVar37 = 1.0;
                    }
                    fVar37 = fVar37 * 255.0;
                    if (fVar44 < 0.0) {
                      fVar37 = 0.0;
                    }
                    dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                    if (0.0 <= fVar37) {
                      if (dVar20 == 0.5) {
                        fVar37 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar37 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar37 = (float)(int)(fVar37 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar37 + -0.5);
                    }
                    fVar44 = fVar43;
                    if (1.0 < fVar43) {
                      fVar44 = 1.0;
                    }
                    fVar44 = fVar44 * 255.0;
                    if (fVar43 < 0.0) {
                      fVar44 = 0.0;
                    }
                    dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                    if (0.0 <= fVar44) {
                      if (dVar20 == 0.5) {
                        fVar44 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar44 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar44 = (float)(int)(fVar44 + 0.5);
                      }
                    }
                    else if (dVar20 == -0.5) {
                      fVar44 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar44 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar44 = (float)(int)(fVar44 + -0.5);
                    }
                    if (lVar25 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar25 + 0x18) <= uVar4) goto LAB_00e44400;
                    *(uint *)(lVar25 + uVar16 * 4 + 0x20) =
                         (int)fVar40 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                         ((int)fVar37 & 0xffU) << 0x10 | (int)fVar44 << 0x18;
                    dVar20 = *pdVar1;
                    if (((dVar20 == 0.0) || (lVar15 = *(long *)((long)dVar20 + 0xa8), lVar15 == 0))
                       || (lVar21 = *(long *)(lVar15 + 0x18), lVar21 == 0)) goto LAB_00e443fc;
                    fVar35 = *(float *)((long)dVar20 + 0x84);
                    fVar40 = *(float *)(lVar15 + 0x20);
                    lVar25 = *unaff_x24;
                    fVar44 = fVar46 * *(float *)(lVar15 + 0x24) +
                             ((*(float *)((long)dVar20 + 0x48) + fVar35) * fVar40) / fVar35;
                    fVar44 = fVar44 - (float)(int)fVar44;
                    fVar37 = fVar44;
                    if (1.0 < fVar44) {
                      fVar37 = 1.0;
                    }
                  }
                  fVar43 = fVar37;
                  if (fVar44 < 0.0) {
                    fVar43 = 0.0;
                  }
                  fVar43 = (float)FUN_0269ad38(fVar43,lVar21,0);
                  fVar44 = fVar43;
                  if (1.0 < fVar43) {
                    fVar44 = 1.0;
                  }
                  fVar44 = fVar44 * 255.0;
                  if (fVar43 < 0.0) {
                    fVar44 = 0.0;
                  }
                  dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                  if (0.0 <= fVar44) {
                    if (dVar20 == 0.5) {
                      fVar44 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e419a4;
                    }
                    fVar43 = (float)(int)(fVar44 + 0.5);
                  }
                  else if (dVar20 == -0.5) {
                    fVar44 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
                    fVar43 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar43 = fVar44;
                    }
                  }
                  else {
                    fVar43 = (float)(int)(fVar44 + -0.5);
                  }
                  fVar44 = fVar37;
                  if (1.0 < fVar37) {
                    fVar44 = 1.0;
                  }
                  fVar44 = fVar44 * 255.0;
                  if (fVar37 < 0.0) {
                    fVar44 = 0.0;
                  }
                  dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                  if (0.0 <= fVar44) {
                    if (dVar20 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e41a34;
                    }
                    fVar44 = (float)(int)(fVar44 + 0.5);
                  }
                  else if (dVar20 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
                    fVar44 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar44 = fVar37;
                    }
                  }
                  else {
                    fVar44 = (float)(int)(fVar44 + -0.5);
                  }
                  fVar37 = fVar35;
                  if (1.0 < fVar35) {
                    fVar37 = 1.0;
                  }
                  fVar37 = fVar37 * 255.0;
                  if (fVar35 < 0.0) {
                    fVar37 = 0.0;
                  }
                  dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                  if (0.0 <= fVar37) {
                    if (dVar20 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar37 + 0.5);
                    }
                  }
                  else if (dVar20 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + -0.5);
                  }
                  fVar35 = fVar40;
                  if (1.0 < fVar40) {
                    fVar35 = 1.0;
                  }
                  fVar35 = fVar35 * 255.0;
                  if (fVar40 < 0.0) {
                    fVar35 = 0.0;
                  }
                  dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                  if (0.0 <= fVar35) {
                    if (dVar20 == 0.5) {
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar35 + 0.5);
                    }
                  }
                  else if (dVar20 == -0.5) {
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar35 + -0.5);
                  }
                  if (lVar25 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar25 + 0x18) <= uVar32) goto LAB_00e44400;
                  *(uint *)(lVar25 + (long)(int)uVar32 * 4 + 0x20) =
                       (int)fVar43 & 0xffU | ((int)fVar44 & 0xffU) << 8 |
                       ((int)fVar37 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                  dVar20 = *pdVar1;
                  if (((dVar20 == 0.0) || (lVar15 = *(long *)((long)dVar20 + 0xa8), lVar15 == 0)) ||
                     (*(long *)(lVar15 + 0x18) == 0)) goto LAB_00e443fc;
                  fVar35 = *(float *)((long)dVar20 + 0x48);
                  fVar40 = *(float *)((long)dVar20 + 0x84);
                  lVar21 = *unaff_x24;
                  fVar44 = fVar46 * *(float *)(lVar15 + 0x24) +
                           (fVar35 * *(float *)(lVar15 + 0x20)) / fVar40;
                  fVar44 = fVar44 - (float)(int)fVar44;
                  fVar37 = fVar44;
                  if (1.0 < fVar44) {
                    fVar37 = 1.0;
                  }
                  fVar43 = fVar37;
                  if (fVar44 < 0.0) {
                    fVar43 = 0.0;
                  }
                  fVar43 = (float)FUN_0269ad38(fVar43,*(long *)(lVar15 + 0x18),0);
                  fVar44 = fVar43;
                  if (1.0 < fVar43) {
                    fVar44 = 1.0;
                  }
                  fVar44 = fVar44 * 255.0;
                  if (fVar43 < 0.0) {
                    fVar44 = 0.0;
                  }
                  dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                  if (0.0 <= fVar44) {
                    if (dVar20 == 0.5) {
                      fVar44 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e41cd0;
                    }
                    fVar43 = (float)(int)(fVar44 + 0.5);
                  }
                  else if (dVar20 == -0.5) {
                    fVar44 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
                    fVar43 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar43 = fVar44;
                    }
                  }
                  else {
                    fVar43 = (float)(int)(fVar44 + -0.5);
                  }
                  fVar44 = fVar37;
                  if (1.0 < fVar37) {
                    fVar44 = 1.0;
                  }
                  fVar44 = fVar44 * 255.0;
                  if (fVar37 < 0.0) {
                    fVar44 = 0.0;
                  }
                  dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                  if (0.0 <= fVar44) {
                    if (dVar20 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e41d60;
                    }
                    fVar44 = (float)(int)(fVar44 + 0.5);
                  }
                  else if (dVar20 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
                    fVar44 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar44 = fVar37;
                    }
                  }
                  else {
                    fVar44 = (float)(int)(fVar44 + -0.5);
                  }
                  fVar37 = fVar35;
                  if (1.0 < fVar35) {
                    fVar37 = 1.0;
                  }
                  fVar37 = fVar37 * 255.0;
                  if (fVar35 < 0.0) {
                    fVar37 = 0.0;
                  }
                  dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                  if (0.0 <= fVar37) {
                    if (dVar20 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar37 + 0.5);
                    }
                  }
                  else if (dVar20 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + -0.5);
                  }
                  fVar35 = fVar40;
                  if (1.0 < fVar40) {
                    fVar35 = 1.0;
                  }
                  fVar35 = fVar35 * 255.0;
                  if (fVar40 < 0.0) {
                    fVar35 = 0.0;
                  }
                  dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                  if (0.0 <= fVar35) {
                    if (dVar20 == 0.5) {
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar35 + 0.5);
                    }
                  }
                  else if (dVar20 == -0.5) {
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar35 + -0.5);
                  }
                  if (lVar21 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_00e44400;
                  *(uint *)(lVar21 + (long)(int)uVar30 * 4 + 0x20) =
                       (int)fVar43 & 0xffU | ((int)fVar44 & 0xffU) << 8 |
                       ((int)fVar37 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                  dVar20 = *pdVar1;
                  if (((dVar20 == 0.0) || (lVar15 = *(long *)((long)dVar20 + 0xa8), lVar15 == 0)) ||
                     (*(long *)(lVar15 + 0x18) == 0)) goto LAB_00e443fc;
                  fVar35 = *(float *)((long)dVar20 + 0x48);
                  fVar40 = *(float *)((long)dVar20 + 0x84);
                  lVar21 = *unaff_x24;
                  fVar44 = fVar46 * *(float *)(lVar15 + 0x24) +
                           (fVar35 * *(float *)(lVar15 + 0x20)) / fVar40;
                  fVar44 = fVar44 - (float)(int)fVar44;
                  fVar37 = fVar44;
                  if (1.0 < fVar44) {
                    fVar37 = 1.0;
                  }
                  fVar43 = fVar37;
                  if (fVar44 < 0.0) {
                    fVar43 = 0.0;
                  }
                  fVar43 = (float)FUN_0269ad38(fVar43,*(long *)(lVar15 + 0x18),0);
                  fVar44 = fVar43;
                  if (1.0 < fVar43) {
                    fVar44 = 1.0;
                  }
                  param_3 = 0x437f0000;
                  fVar44 = fVar44 * 255.0;
                  if (fVar43 < 0.0) {
                    fVar44 = 0.0;
                  }
                  dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                  if (0.0 <= fVar44) {
                    if (dVar20 == 0.5) {
                      fVar44 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e41ffc;
                    }
                    fVar43 = (float)(int)(fVar44 + 0.5);
                  }
                  else if (dVar20 == -0.5) {
                    fVar44 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
                    fVar43 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar43 = fVar44;
                    }
                  }
                  else {
                    fVar43 = (float)(int)(fVar44 + -0.5);
                  }
                  fVar44 = fVar37;
                  if (1.0 < fVar37) {
                    fVar44 = 1.0;
                  }
                  fVar44 = fVar44 * 255.0;
                  if (fVar37 < 0.0) {
                    fVar44 = 0.0;
                  }
LAB_00e42040:
                  dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                  if (fVar44 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
                  if (dVar20 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    fVar44 = fVar37 + 1.0;
                    goto LAB_00e425d4;
                  }
                  fVar37 = (float)(int)(fVar44 + 0.5);
                }
                else {
                  lVar23 = *in_stack_00000038;
                  if (lVar23 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar23 + 0x18) <= uVar4) goto LAB_00e44400;
                  if (lVar21 == 0) goto LAB_00e443fc;
                  fVar44 = *(float *)(lVar23 + uVar16 * 0xc + 0x20);
                  fVar43 = *(float *)((long)dVar20 + 0x84);
                  fVar40 = fVar40 + (fVar44 * *(float *)(lVar15 + 0x20)) / fVar43;
                  fVar40 = fVar40 - (float)(int)fVar40;
                  fVar37 = fVar40;
                  if (1.0 < fVar40) {
                    fVar37 = fVar35;
                  }
                  fVar41 = fVar37;
                  if (fVar40 < 0.0) {
                    fVar41 = 0.0;
                  }
                  fVar41 = (float)FUN_0269ad38(fVar41,lVar21,0);
                  fVar40 = fVar41;
                  if (1.0 < fVar41) {
                    fVar40 = fVar35;
                  }
                  fVar40 = fVar40 * 255.0;
                  if (fVar41 < 0.0) {
                    fVar40 = 0.0;
                  }
                  dVar20 = modf((double)fVar40,(double *)&stack0x00000070);
                  if (0.0 <= fVar40) {
                    if (dVar20 == 0.5) {
                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e3e0b0;
                    }
                    fVar40 = (float)(int)(fVar40 + 0.5);
                  }
                  else if (dVar20 == -0.5) {
                    fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
                    fVar40 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar40 = fVar35;
                    }
                  }
                  else {
                    fVar40 = (float)(int)(fVar40 + -0.5);
                  }
                  fVar35 = fVar37;
                  if (1.0 < fVar37) {
                    fVar35 = 1.0;
                  }
                  fVar35 = fVar35 * 255.0;
                  if (fVar37 < 0.0) {
                    fVar35 = 0.0;
                  }
                  dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                  if (0.0 <= fVar35) {
                    if (dVar20 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e3ee80;
                    }
                    fVar35 = (float)(int)(fVar35 + 0.5);
                  }
                  else if (dVar20 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = fVar37;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar35 + -0.5);
                  }
                  fVar37 = fVar44;
                  if (1.0 < fVar44) {
                    fVar37 = 1.0;
                  }
                  fVar37 = fVar37 * 255.0;
                  if (fVar44 < 0.0) {
                    fVar37 = 0.0;
                  }
                  dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                  if (0.0 <= fVar37) {
                    if (dVar20 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar37 + 0.5);
                    }
                  }
                  else if (dVar20 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + -0.5);
                  }
                  fVar44 = fVar43;
                  if (1.0 < fVar43) {
                    fVar44 = 1.0;
                  }
                  fVar44 = fVar44 * 255.0;
                  if (fVar43 < 0.0) {
                    fVar44 = 0.0;
                  }
                  dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                  if (0.0 <= fVar44) {
                    if (dVar20 == 0.5) {
                      fVar44 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar44 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar44 = (float)(int)(fVar44 + 0.5);
                    }
                  }
                  else if (dVar20 == -0.5) {
                    fVar44 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar44 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar44 = (float)(int)(fVar44 + -0.5);
                  }
                  if (lVar25 == 0) goto LAB_00e443fc;
                  fVar43 = 1.0;
                  if (*(uint *)(lVar25 + 0x18) <= uVar4) goto LAB_00e44400;
                  *(uint *)(lVar25 + uVar16 * 4 + 0x20) =
                       (int)fVar40 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                       ((int)fVar37 & 0xffU) << 0x10 | (int)fVar44 << 0x18;
                  plVar33 = (long *)StringLiteral_9119;
                  dVar20 = *pdVar1;
                  if (((dVar20 == 0.0) || (lVar15 = *(long *)((long)dVar20 + 0xa8), lVar15 == 0)) ||
                     (lVar21 = *in_stack_00000038, lVar21 == 0)) goto LAB_00e443fc;
                  lVar23 = *unaff_x24;
                  lVar25 = *(long *)(lVar15 + 0x18);
                  fVar37 = fVar46 * *(float *)(lVar15 + 0x24);
                  if (cVar8 != '\0') {
                    if (uVar32 < *(uint *)(lVar21 + 0x18)) {
                      if (lVar25 != 0) {
                        fVar35 = *(float *)(lVar21 + (long)(int)uVar32 * 0xc + 0x20);
                        fVar40 = *(float *)((long)dVar20 + 0x84);
                        fVar37 = fVar37 + (fVar35 * *(float *)(lVar15 + 0x20)) / fVar40;
                        fVar37 = fVar37 - (float)(int)fVar37;
                        fVar44 = fVar37;
                        if (1.0 < fVar37) {
                          fVar44 = fVar43;
                        }
                        fVar41 = fVar44;
                        if (fVar37 < 0.0) {
                          fVar41 = 0.0;
                        }
                        fVar41 = (float)FUN_0269ad38(fVar41,lVar25,0);
                        fVar37 = fVar41;
                        if (1.0 < fVar41) {
                          fVar37 = fVar43;
                        }
                        fVar37 = fVar37 * 255.0;
                        if (fVar41 < 0.0) {
                          fVar37 = 0.0;
                        }
                        dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar20 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e3f234;
                          }
                          fVar43 = (float)(int)(fVar37 + 0.5);
                        }
                        else if (dVar20 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                          fVar43 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar43 = fVar37;
                          }
                        }
                        else {
                          fVar43 = (float)(int)(fVar37 + -0.5);
                        }
                        fVar37 = fVar44;
                        if (1.0 < fVar44) {
                          fVar37 = 1.0;
                        }
                        fVar37 = fVar37 * 255.0;
                        if (fVar44 < 0.0) {
                          fVar37 = 0.0;
                        }
                        dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar20 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e3f594;
                          }
                          fVar44 = (float)(int)(fVar37 + 0.5);
                        }
                        else if (dVar20 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                          fVar44 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar44 = fVar37;
                          }
                        }
                        else {
                          fVar44 = (float)(int)(fVar37 + -0.5);
                        }
                        fVar37 = fVar35;
                        if (1.0 < fVar35) {
                          fVar37 = 1.0;
                        }
                        fVar37 = fVar37 * 255.0;
                        if (fVar35 < 0.0) {
                          fVar37 = 0.0;
                        }
                        dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar20 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar37 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar37 = (float)(int)(fVar37 + 0.5);
                          }
                        }
                        else if (dVar20 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + -0.5);
                        }
                        fVar35 = fVar40;
                        if (1.0 < fVar40) {
                          fVar35 = 1.0;
                        }
                        fVar35 = fVar35 * 255.0;
                        if (fVar40 < 0.0) {
                          fVar35 = 0.0;
                        }
                        dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                        if (0.0 <= fVar35) {
                          if (dVar20 == 0.5) {
                            fVar35 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar35 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar35 = (float)(int)(fVar35 + 0.5);
                          }
                        }
                        else if (dVar20 == -0.5) {
                          fVar35 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar35 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar35 = (float)(int)(fVar35 + -0.5);
                        }
                        if (lVar23 != 0) {
                          if (uVar32 < *(uint *)(lVar23 + 0x18)) {
                            *(uint *)(lVar23 + (long)(int)uVar32 * 4 + 0x20) =
                                 (int)fVar43 & 0xffU | ((int)fVar44 & 0xffU) << 8 |
                                 ((int)fVar37 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                            dVar20 = *pdVar1;
                            if (((dVar20 != 0.0) &&
                                (lVar15 = *(long *)((long)dVar20 + 0xa8), lVar15 != 0)) &&
                               (lVar21 = *in_stack_00000038, lVar21 != 0)) {
                              if (uVar30 < *(uint *)(lVar21 + 0x18)) {
                                if (*(long *)(lVar15 + 0x18) != 0) {
                                  fVar35 = *(float *)(lVar21 + (long)(int)uVar30 * 0xc + 0x20);
                                  fVar40 = *(float *)((long)dVar20 + 0x84);
                                  lVar21 = *unaff_x24;
                                  fVar44 = fVar46 * *(float *)(lVar15 + 0x24) +
                                           (fVar35 * *(float *)(lVar15 + 0x20)) / fVar40;
                                  fVar44 = fVar44 - (float)(int)fVar44;
                                  fVar37 = fVar44;
                                  if (1.0 < fVar44) {
                                    fVar37 = 1.0;
                                  }
                                  fVar43 = fVar37;
                                  if (fVar44 < 0.0) {
                                    fVar43 = 0.0;
                                  }
                                  fVar43 = (float)FUN_0269ad38(fVar43,*(long *)(lVar15 + 0x18),0);
                                  fVar44 = fVar43;
                                  if (1.0 < fVar43) {
                                    fVar44 = 1.0;
                                  }
                                  fVar44 = fVar44 * 255.0;
                                  if (fVar43 < 0.0) {
                                    fVar44 = 0.0;
                                  }
                                  dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                                  if (0.0 <= fVar44) {
                                    if (dVar20 == 0.5) {
                                      fVar44 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e3f858;
                                    }
                                    fVar43 = (float)(int)(fVar44 + 0.5);
                                  }
                                  else if (dVar20 == -0.5) {
                                    fVar44 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                                    fVar43 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar43 = fVar44;
                                    }
                                  }
                                  else {
                                    fVar43 = (float)(int)(fVar44 + -0.5);
                                  }
                                  fVar44 = fVar37;
                                  if (1.0 < fVar37) {
                                    fVar44 = 1.0;
                                  }
                                  fVar44 = fVar44 * 255.0;
                                  if (fVar37 < 0.0) {
                                    fVar44 = 0.0;
                                  }
                                  dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                                  if (0.0 <= fVar44) {
                                    if (dVar20 == 0.5) {
                                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e3f8e8;
                                    }
                                    fVar44 = (float)(int)(fVar44 + 0.5);
                                  }
                                  else if (dVar20 == -0.5) {
                                    fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                                    fVar44 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar44 = fVar37;
                                    }
                                  }
                                  else {
                                    fVar44 = (float)(int)(fVar44 + -0.5);
                                  }
                                  fVar37 = fVar35;
                                  if (1.0 < fVar35) {
                                    fVar37 = 1.0;
                                  }
                                  fVar37 = fVar37 * 255.0;
                                  if (fVar35 < 0.0) {
                                    fVar37 = 0.0;
                                  }
                                  dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                                  if (0.0 <= fVar37) {
                                    if (dVar20 == 0.5) {
                                      fVar37 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar37 = (float)(int)(fVar37 + 0.5);
                                    }
                                  }
                                  else if (dVar20 == -0.5) {
                                    fVar37 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar37 = (float)_fStack0000000000000070 + -1.0;
                                    }
                                  }
                                  else {
                                    fVar37 = (float)(int)(fVar37 + -0.5);
                                  }
                                  fVar35 = fVar40;
                                  if (1.0 < fVar40) {
                                    fVar35 = 1.0;
                                  }
                                  fVar35 = fVar35 * 255.0;
                                  if (fVar40 < 0.0) {
                                    fVar35 = 0.0;
                                  }
                                  dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                                  plVar33 = (long *)StringLiteral_9119;
                                  if (0.0 <= fVar35) {
                                    if (dVar20 == 0.5) {
                                      fVar35 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar35 = (float)(int)(fVar35 + 0.5);
                                    }
                                  }
                                  else if (dVar20 == -0.5) {
                                    fVar35 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar35 = (float)_fStack0000000000000070 + -1.0;
                                    }
                                  }
                                  else {
                                    fVar35 = (float)(int)(fVar35 + -0.5);
                                  }
                                  if (lVar21 != 0) {
                                    if (uVar30 < *(uint *)(lVar21 + 0x18)) {
                                      *(uint *)(lVar21 + (long)(int)uVar30 * 4 + 0x20) =
                                           (int)fVar43 & 0xffU | ((int)fVar44 & 0xffU) << 8 |
                                           ((int)fVar37 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                                      dVar20 = *pdVar1;
                                      if (((dVar20 != 0.0) &&
                                          (lVar15 = *(long *)((long)dVar20 + 0xa8), lVar15 != 0)) &&
                                         (lVar21 = *in_stack_00000038, lVar21 != 0)) {
                                        if (uVar27 < *(uint *)(lVar21 + 0x18)) {
                                          if (*(long *)(lVar15 + 0x18) != 0) {
                                            fVar35 = *(float *)(lVar21 + uVar29 * 0xc + 0x20);
                                            fVar40 = *(float *)((long)dVar20 + 0x84);
                                            lVar21 = *unaff_x24;
                                            fVar44 = fVar46 * *(float *)(lVar15 + 0x24) +
                                                     (fVar35 * *(float *)(lVar15 + 0x20)) / fVar40;
                                            fVar44 = fVar44 - (float)(int)fVar44;
                                            fVar37 = fVar44;
                                            if (1.0 < fVar44) {
                                              fVar37 = 1.0;
                                            }
                                            fVar43 = fVar37;
                                            if (fVar44 < 0.0) {
                                              fVar43 = 0.0;
                                            }
                                            fVar43 = (float)FUN_0269ad38(fVar43,*(long *)(lVar15 + 
                                                  0x18),0);
                                            fVar44 = fVar43;
                                            if (1.0 < fVar43) {
                                              fVar44 = 1.0;
                                            }
                                            param_3 = 0x437f0000;
                                            fVar44 = fVar44 * 255.0;
                                            if (fVar43 < 0.0) {
                                              fVar44 = 0.0;
                                            }
                                            dVar20 = modf((double)fVar44,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar44) {
                                              if (dVar20 == 0.5) {
                                                fVar44 = (float)_fStack0000000000000070 + 1.0;
                                                goto LAB_00e3fbd0;
                                              }
                                              fVar43 = (float)(int)(fVar44 + 0.5);
                                            }
                                            else if (dVar20 == -0.5) {
                                              fVar44 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                              fVar43 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar43 = fVar44;
                                              }
                                            }
                                            else {
                                              fVar43 = (float)(int)(fVar44 + -0.5);
                                            }
                                            fVar44 = fVar37;
                                            if (1.0 < fVar37) {
                                              fVar44 = 1.0;
                                            }
                                            fVar44 = fVar44 * 255.0;
                                            if (fVar37 < 0.0) {
                                              fVar44 = 0.0;
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
                  if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
                  if (lVar25 == 0) goto LAB_00e443fc;
                  fVar35 = *(float *)(lVar21 + uVar16 * 0xc + 0x20);
                  fVar40 = *(float *)((long)dVar20 + 0x84);
                  fVar37 = fVar37 + (fVar35 * *(float *)(lVar15 + 0x20)) / fVar40;
                  fVar37 = fVar37 - (float)(int)fVar37;
                  fVar44 = fVar37;
                  if (1.0 < fVar37) {
                    fVar44 = fVar43;
                  }
                  fVar41 = fVar44;
                  if (fVar37 < 0.0) {
                    fVar41 = 0.0;
                  }
                  fVar41 = (float)FUN_0269ad38(fVar41,lVar25,0);
                  fVar37 = fVar41;
                  if (1.0 < fVar41) {
                    fVar37 = fVar43;
                  }
                  fVar37 = fVar37 * 255.0;
                  if (fVar41 < 0.0) {
                    fVar37 = 0.0;
                  }
                  dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                  if (0.0 <= fVar37) {
                    if (dVar20 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e3f25c;
                    }
                    fVar43 = (float)(int)(fVar37 + 0.5);
                  }
                  else if (dVar20 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
                    fVar43 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar43 = fVar37;
                    }
                  }
                  else {
                    fVar43 = (float)(int)(fVar37 + -0.5);
                  }
                  fVar37 = fVar44;
                  if (1.0 < fVar44) {
                    fVar37 = 1.0;
                  }
                  fVar37 = fVar37 * 255.0;
                  if (fVar44 < 0.0) {
                    fVar37 = 0.0;
                  }
                  dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                  if (0.0 <= fVar37) {
                    if (dVar20 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e415c4;
                    }
                    fVar44 = (float)(int)(fVar37 + 0.5);
                  }
                  else if (dVar20 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
                    fVar44 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar44 = fVar37;
                    }
                  }
                  else {
                    fVar44 = (float)(int)(fVar37 + -0.5);
                  }
                  fVar37 = fVar35;
                  if (1.0 < fVar35) {
                    fVar37 = 1.0;
                  }
                  fVar37 = fVar37 * 255.0;
                  if (fVar35 < 0.0) {
                    fVar37 = 0.0;
                  }
                  dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                  if (0.0 <= fVar37) {
                    if (dVar20 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar37 + 0.5);
                    }
                  }
                  else if (dVar20 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + -0.5);
                  }
                  fVar35 = fVar40;
                  if (1.0 < fVar40) {
                    fVar35 = 1.0;
                  }
                  fVar35 = fVar35 * 255.0;
                  if (fVar40 < 0.0) {
                    fVar35 = 0.0;
                  }
                  dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                  if (0.0 <= fVar35) {
                    if (dVar20 == 0.5) {
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar35 + 0.5);
                    }
                  }
                  else if (dVar20 == -0.5) {
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar35 + -0.5);
                  }
                  if (lVar23 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar23 + 0x18) <= uVar32) goto LAB_00e44400;
                  *(uint *)(lVar23 + (long)(int)uVar32 * 4 + 0x20) =
                       (int)fVar43 & 0xffU | ((int)fVar44 & 0xffU) << 8 |
                       ((int)fVar37 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                  dVar20 = *pdVar1;
                  if (((dVar20 == 0.0) || (lVar15 = *(long *)((long)dVar20 + 0xa8), lVar15 == 0)) ||
                     (lVar21 = *in_stack_00000038, lVar21 == 0)) goto LAB_00e443fc;
                  if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
                  if (*(long *)(lVar15 + 0x18) == 0) goto LAB_00e443fc;
                  fVar35 = *(float *)(lVar21 + uVar16 * 0xc + 0x20);
                  fVar40 = *(float *)((long)dVar20 + 0x84);
                  lVar21 = *unaff_x24;
                  fVar44 = fVar46 * *(float *)(lVar15 + 0x24) +
                           (fVar35 * *(float *)(lVar15 + 0x20)) / fVar40;
                  fVar44 = fVar44 - (float)(int)fVar44;
                  fVar37 = fVar44;
                  if (1.0 < fVar44) {
                    fVar37 = 1.0;
                  }
                  fVar43 = fVar37;
                  if (fVar44 < 0.0) {
                    fVar43 = 0.0;
                  }
                  fVar43 = (float)FUN_0269ad38(fVar43,*(long *)(lVar15 + 0x18),0);
                  fVar44 = fVar43;
                  if (1.0 < fVar43) {
                    fVar44 = 1.0;
                  }
                  fVar44 = fVar44 * 255.0;
                  if (fVar43 < 0.0) {
                    fVar44 = 0.0;
                  }
                  dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                  if (0.0 <= fVar44) {
                    if (dVar20 == 0.5) {
                      fVar44 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e421fc;
                    }
                    fVar43 = (float)(int)(fVar44 + 0.5);
                  }
                  else if (dVar20 == -0.5) {
                    fVar44 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
                    fVar43 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar43 = fVar44;
                    }
                  }
                  else {
                    fVar43 = (float)(int)(fVar44 + -0.5);
                  }
                  fVar44 = fVar37;
                  if (1.0 < fVar37) {
                    fVar44 = 1.0;
                  }
                  fVar44 = fVar44 * 255.0;
                  if (fVar37 < 0.0) {
                    fVar44 = 0.0;
                  }
                  dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                  if (0.0 <= fVar44) {
                    if (dVar20 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e4228c;
                    }
                    fVar44 = (float)(int)(fVar44 + 0.5);
                  }
                  else if (dVar20 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
                    fVar44 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar44 = fVar37;
                    }
                  }
                  else {
                    fVar44 = (float)(int)(fVar44 + -0.5);
                  }
                  fVar37 = fVar35;
                  if (1.0 < fVar35) {
                    fVar37 = 1.0;
                  }
                  fVar37 = fVar37 * 255.0;
                  if (fVar35 < 0.0) {
                    fVar37 = 0.0;
                  }
                  dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                  if (0.0 <= fVar37) {
                    if (dVar20 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar37 + 0.5);
                    }
                  }
                  else if (dVar20 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + -0.5);
                  }
                  fVar35 = fVar40;
                  if (1.0 < fVar40) {
                    fVar35 = 1.0;
                  }
                  fVar35 = fVar35 * 255.0;
                  if (fVar40 < 0.0) {
                    fVar35 = 0.0;
                  }
                  dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                  if (0.0 <= fVar35) {
                    if (dVar20 == 0.5) {
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar35 + 0.5);
                    }
                  }
                  else if (dVar20 == -0.5) {
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar35 + -0.5);
                  }
                  if (lVar21 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_00e44400;
                  *(uint *)(lVar21 + (long)(int)uVar30 * 4 + 0x20) =
                       (int)fVar43 & 0xffU | ((int)fVar44 & 0xffU) << 8 |
                       ((int)fVar37 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                  dVar20 = *pdVar1;
                  if (((dVar20 == 0.0) || (lVar15 = *(long *)((long)dVar20 + 0xa8), lVar15 == 0)) ||
                     (lVar21 = *in_stack_00000038, lVar21 == 0)) goto LAB_00e443fc;
                  if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
                  if (*(long *)(lVar15 + 0x18) == 0) goto LAB_00e443fc;
                  fVar35 = *(float *)(lVar21 + uVar16 * 0xc + 0x20);
                  fVar40 = *(float *)((long)dVar20 + 0x84);
                  lVar21 = *unaff_x24;
                  fVar44 = fVar46 * *(float *)(lVar15 + 0x24) +
                           (fVar35 * *(float *)(lVar15 + 0x20)) / fVar40;
                  fVar44 = fVar44 - (float)(int)fVar44;
                  fVar37 = fVar44;
                  if (1.0 < fVar44) {
                    fVar37 = 1.0;
                  }
                  fVar43 = fVar37;
                  if (fVar44 < 0.0) {
                    fVar43 = 0.0;
                  }
                  fVar43 = (float)FUN_0269ad38(fVar43,*(long *)(lVar15 + 0x18),0);
                  fVar44 = fVar43;
                  if (1.0 < fVar43) {
                    fVar44 = 1.0;
                  }
                  param_3 = 0x437f0000;
                  fVar44 = fVar44 * 255.0;
                  if (fVar43 < 0.0) {
                    fVar44 = 0.0;
                  }
                  dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                  if (0.0 <= fVar44) {
                    if (dVar20 == 0.5) {
                      fVar44 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e42560;
                    }
                    fVar43 = (float)(int)(fVar44 + 0.5);
                  }
                  else if (dVar20 == -0.5) {
                    fVar44 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
                    fVar43 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar43 = fVar44;
                    }
                  }
                  else {
                    fVar43 = (float)(int)(fVar44 + -0.5);
                  }
                  fVar44 = fVar37;
                  if (1.0 < fVar37) {
                    fVar44 = 1.0;
                  }
                  fVar44 = fVar44 * 255.0;
                  if (fVar37 < 0.0) {
                    fVar44 = 0.0;
                  }
                  dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                  if (0.0 <= fVar44) goto LAB_00e425b8;
LAB_00e4204c:
                  if (dVar20 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    fVar44 = fVar37 + -1.0;
LAB_00e425d4:
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = fVar44;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar44 + -0.5);
                  }
                }
                fVar44 = fVar35;
                if (1.0 < fVar35) {
                  fVar44 = 1.0;
                }
                fVar44 = fVar44 * 255.0;
                if (fVar35 < 0.0) {
                  fVar44 = 0.0;
                }
                dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                if (0.0 <= fVar44) {
                  if (dVar20 == 0.5) {
                    fVar44 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e42654;
                  }
                  fVar35 = (float)(int)(fVar44 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar44 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = fVar44;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar44 + -0.5);
                }
                fVar44 = fVar40;
                if (1.0 < fVar40) {
                  fVar44 = 1.0;
                }
                fVar44 = fVar44 * 255.0;
                if (fVar40 < 0.0) {
                  fVar44 = 0.0;
                }
                dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                if (0.0 <= fVar44) {
                  if (dVar20 == 0.5) {
                    fVar44 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e426e4;
                  }
                  fVar40 = (float)(int)(fVar44 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar44 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = fVar44;
                  }
                }
                else {
                  fVar40 = (float)(int)(fVar44 + -0.5);
                }
                if (lVar21 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_00e44400;
                *(uint *)(lVar21 + uVar29 * 4 + 0x20) =
                     (int)fVar43 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                     ((int)fVar35 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
                if (*pdVar1 == 0.0) goto LAB_00e443fc;
                uVar14 = *(undefined8 *)((long)*pdVar1 + 0xa0);
                uVar47 = unaff_d14 & 0xffffffff;
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar34 = FUN_02681b9c(uVar14,0,0);
                if ((uVar34 & 1) == 0) goto LAB_00e43400;
                lVar15 = *unaff_x24;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
                puVar26 = (uint *)(lVar15 + uVar16 * 4 + 0x20);
                uVar7 = *puVar26;
                if ((*pdVar1 == 0.0) || (lVar15 = *(long *)((long)*pdVar1 + 0xa0), lVar15 == 0))
                goto LAB_00e443fc;
                fVar37 = ((float)(uVar7 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
                fVar43 = ((float)(uVar7 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
                fVar40 = *(float *)(lVar15 + 0x20);
                fVar35 = *(float *)(lVar15 + 0x24);
                fVar44 = fVar37 * 255.0;
                if (fVar37 < 0.0) {
                  fVar44 = 0.0;
                }
                dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                if (0.0 <= fVar44) {
                  if (dVar20 == 0.5) {
                    fVar37 = 1.0;
                    goto LAB_00e4287c;
                  }
                  fVar44 = (float)(int)(fVar44 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar37 = -1.0;
LAB_00e4287c:
                  fVar44 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar44 = (float)_fStack0000000000000070 + fVar37;
                  }
                }
                else {
                  fVar44 = (float)(int)(fVar44 + -0.5);
                }
                fVar37 = fVar43 * 255.0;
                fVar40 = ((float)(uVar7 >> 0x10 & 0xff) / 255.0) * fVar40;
                if (fVar43 < 0.0) {
                  fVar37 = 0.0;
                }
                dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar20 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar20 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + -0.5);
                }
                fVar43 = fVar40;
                if (1.0 < fVar40) {
                  fVar43 = 1.0;
                }
                fVar43 = fVar43 * 255.0;
                fVar35 = ((float)(uVar7 >> 0x18) / 255.0) * fVar35;
                if (fVar40 < 0.0) {
                  fVar43 = 0.0;
                }
                dVar20 = modf((double)fVar43,(double *)&stack0x00000070);
                if (0.0 <= fVar43) {
                  if (dVar20 == 0.5) {
                    fVar40 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e429c8;
                  }
                  fVar43 = (float)(int)(fVar43 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar40 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
                  fVar43 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar43 = fVar40;
                  }
                }
                else {
                  fVar43 = (float)(int)(fVar43 + -0.5);
                }
                fVar40 = fVar35;
                if (1.0 < fVar35) {
                  fVar40 = 1.0;
                }
                fVar40 = fVar40 * 255.0;
                if (fVar35 < 0.0) {
                  fVar40 = 0.0;
                }
                dVar20 = modf((double)fVar40,(double *)&stack0x00000070);
                if (0.0 <= fVar40) {
                  if (dVar20 == 0.5) {
                    fVar35 = 1.0;
                    goto LAB_00e42a44;
                  }
                  fVar40 = (float)(int)(fVar40 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar35 = -1.0;
LAB_00e42a44:
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = (float)_fStack0000000000000070 + fVar35;
                  }
                }
                else {
                  fVar40 = (float)(int)(fVar40 + -0.5);
                }
                *puVar26 = (int)fVar44 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                           ((int)fVar43 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
                lVar15 = *unaff_x24;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar32) goto LAB_00e44400;
                puVar26 = (uint *)(lVar15 + (long)(int)uVar32 * 4 + 0x20);
                uVar7 = *puVar26;
                if ((*pdVar1 == 0.0) || (lVar15 = *(long *)((long)*pdVar1 + 0xa0), lVar15 == 0))
                goto LAB_00e443fc;
                fVar37 = ((float)(uVar7 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
                fVar43 = ((float)(uVar7 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
                fVar40 = *(float *)(lVar15 + 0x20);
                fVar35 = *(float *)(lVar15 + 0x24);
                fVar44 = fVar37 * 255.0;
                if (fVar37 < 0.0) {
                  fVar44 = 0.0;
                }
                dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                if (0.0 <= fVar44) {
                  if (dVar20 == 0.5) {
                    fVar37 = 1.0;
                    goto LAB_00e42b80;
                  }
                  fVar44 = (float)(int)(fVar44 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar37 = -1.0;
LAB_00e42b80:
                  fVar44 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar44 = (float)_fStack0000000000000070 + fVar37;
                  }
                }
                else {
                  fVar44 = (float)(int)(fVar44 + -0.5);
                }
                fVar37 = fVar43 * 255.0;
                fVar40 = ((float)(uVar7 >> 0x10 & 0xff) / 255.0) * fVar40;
                if (fVar43 < 0.0) {
                  fVar37 = 0.0;
                }
                dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar20 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar20 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + -0.5);
                }
                fVar43 = fVar40;
                if (1.0 < fVar40) {
                  fVar43 = 1.0;
                }
                fVar43 = fVar43 * 255.0;
                fVar35 = ((float)(uVar7 >> 0x18) / 255.0) * fVar35;
                if (fVar40 < 0.0) {
                  fVar43 = 0.0;
                }
                dVar20 = modf((double)fVar43,(double *)&stack0x00000070);
                if (0.0 <= fVar43) {
                  if (dVar20 == 0.5) {
                    fVar40 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e42ccc;
                  }
                  fVar43 = (float)(int)(fVar43 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar40 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
                  fVar43 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar43 = fVar40;
                  }
                }
                else {
                  fVar43 = (float)(int)(fVar43 + -0.5);
                }
                fVar40 = fVar35;
                if (1.0 < fVar35) {
                  fVar40 = 1.0;
                }
                fVar40 = fVar40 * 255.0;
                if (fVar35 < 0.0) {
                  fVar40 = 0.0;
                }
                dVar20 = modf((double)fVar40,(double *)&stack0x00000070);
                if (0.0 <= fVar40) {
                  if (dVar20 == 0.5) {
                    fVar35 = 1.0;
                    goto LAB_00e42d48;
                  }
                  fVar40 = (float)(int)(fVar40 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar35 = -1.0;
LAB_00e42d48:
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = (float)_fStack0000000000000070 + fVar35;
                  }
                }
                else {
                  fVar40 = (float)(int)(fVar40 + -0.5);
                }
                *puVar26 = (int)fVar44 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                           ((int)fVar43 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
                lVar15 = *unaff_x24;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar30) goto LAB_00e44400;
                lVar15 = lVar15 + (long)(int)uVar30 * 4;
              }
              uVar7 = *(uint *)(lVar15 + 0x20);
              if ((*pdVar1 == 0.0) || (lVar21 = *(long *)((long)*pdVar1 + 0xa0), lVar21 == 0))
              goto LAB_00e443fc;
              fVar37 = ((float)(uVar7 & 0xff) / 255.0) * *(float *)(lVar21 + 0x18);
              fVar43 = ((float)(uVar7 >> 8 & 0xff) / 255.0) * *(float *)(lVar21 + 0x1c);
              fVar40 = *(float *)(lVar21 + 0x20);
              fVar35 = *(float *)(lVar21 + 0x24);
              fVar44 = fVar37 * 255.0;
              if (fVar37 < 0.0) {
                fVar44 = 0.0;
              }
              dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
              if (0.0 <= fVar44) {
                if (dVar20 == 0.5) {
                  fVar37 = 1.0;
                  goto FUN_00e42e84;
                }
                fVar44 = (float)(int)(fVar44 + 0.5);
              }
              else if (dVar20 == -0.5) {
                fVar37 = -1.0;
FUN_00e42e84:
                fVar44 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar44 = (float)_fStack0000000000000070 + fVar37;
                }
              }
              else {
                fVar44 = (float)(int)(fVar44 + -0.5);
              }
              fVar37 = fVar43 * 255.0;
              fVar40 = ((float)(uVar7 >> 0x10 & 0xff) / 255.0) * fVar40;
              if (fVar43 < 0.0) {
                fVar37 = 0.0;
              }
              dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar20 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + 0.5);
                }
              }
              else if (dVar20 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + -0.5);
              }
              fVar43 = fVar40;
              if (1.0 < fVar40) {
                fVar43 = 1.0;
              }
              fVar43 = fVar43 * 255.0;
              fVar35 = ((float)(uVar7 >> 0x18) / 255.0) * fVar35;
              if (fVar40 < 0.0) {
                fVar43 = 0.0;
              }
              dVar20 = modf((double)fVar43,(double *)&stack0x00000070);
              if (0.0 <= fVar43) {
                if (dVar20 == 0.5) {
                  fVar40 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e42fd0;
                }
                fVar43 = (float)(int)(fVar43 + 0.5);
              }
              else if (dVar20 == -0.5) {
                fVar40 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
                fVar43 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar43 = fVar40;
                }
              }
              else {
                fVar43 = (float)(int)(fVar43 + -0.5);
              }
              fVar40 = fVar35;
              if (1.0 < fVar35) {
                fVar40 = 1.0;
              }
              fVar40 = fVar40 * 255.0;
              if (fVar35 < 0.0) {
                fVar40 = 0.0;
              }
              dVar20 = modf((double)fVar40,(double *)&stack0x00000070);
              if (0.0 <= fVar40) {
                if (dVar20 == 0.5) {
                  fVar35 = 1.0;
                  goto LAB_00e4304c;
                }
                fVar40 = (float)(int)(fVar40 + 0.5);
              }
              else if (dVar20 == -0.5) {
                fVar35 = -1.0;
LAB_00e4304c:
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = (float)_fStack0000000000000070 + fVar35;
                }
              }
              else {
                fVar40 = (float)(int)(fVar40 + -0.5);
              }
              *(uint *)(lVar15 + 0x20) =
                   (int)fVar44 & 0xffU | ((int)fVar37 & 0xffU) << 8 | ((int)fVar43 & 0xffU) << 0x10
                   | (int)fVar40 << 0x18;
              lVar15 = *unaff_x24;
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_00e44400;
              puVar26 = (uint *)(lVar15 + uVar29 * 4 + 0x20);
              uVar7 = *puVar26;
              if ((*pdVar1 == 0.0) || (lVar15 = *(long *)((long)*pdVar1 + 0xa0), lVar15 == 0))
              goto LAB_00e443fc;
              fVar37 = (float)(uVar7 & 0xff) / 255.0;
              param_3 = (ulong)(uint)fVar37;
              fVar37 = fVar37 * *(float *)(lVar15 + 0x18);
              fVar43 = ((float)(uVar7 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
              fVar40 = *(float *)(lVar15 + 0x20);
              fVar35 = *(float *)(lVar15 + 0x24);
              fVar44 = fVar37 * 255.0;
              if (fVar37 < 0.0) {
                fVar44 = 0.0;
              }
              dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
              if (0.0 <= fVar44) {
                if (dVar20 == 0.5) {
                  fVar37 = 1.0;
                  goto LAB_00e4318c;
                }
                fVar44 = (float)(int)(fVar44 + 0.5);
              }
              else if (dVar20 == -0.5) {
                fVar37 = -1.0;
LAB_00e4318c:
                fVar44 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar44 = (float)_fStack0000000000000070 + fVar37;
                }
              }
              else {
                fVar44 = (float)(int)(fVar44 + -0.5);
              }
              fVar37 = fVar43 * 255.0;
              fVar40 = ((float)(uVar7 >> 0x10 & 0xff) / 255.0) * fVar40;
              if (fVar43 < 0.0) {
                fVar37 = 0.0;
              }
              dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar20 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + 0.5);
                }
              }
              else if (dVar20 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + -0.5);
              }
              fVar43 = fVar40;
              if (1.0 < fVar40) {
                fVar43 = 1.0;
              }
              fVar43 = fVar43 * 255.0;
              fVar35 = ((float)(uVar7 >> 0x18) / 255.0) * fVar35;
              if (fVar40 < 0.0) {
                fVar43 = 0.0;
              }
              dVar20 = modf((double)fVar43,(double *)&stack0x00000070);
              unaff_s15 = fStack000000000000000c;
              if (0.0 <= fVar43) {
                if (dVar20 == 0.5) {
                  fVar40 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e432e0;
                }
                fVar43 = (float)(int)(fVar43 + 0.5);
              }
              else if (dVar20 == -0.5) {
                fVar40 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
                fVar43 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar43 = fVar40;
                }
              }
              else {
                fVar43 = (float)(int)(fVar43 + -0.5);
              }
              fVar40 = fVar35;
              if (1.0 < fVar35) {
                fVar40 = 1.0;
              }
              fVar40 = fVar40 * 255.0;
              if (fVar35 < 0.0) {
                fVar40 = 0.0;
              }
              dVar20 = modf((double)fVar40,(double *)&stack0x00000070);
              if (0.0 <= fVar40) {
                if (dVar20 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar40 + 0.5);
                }
              }
              else if (dVar20 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar40 + -0.5);
              }
              uVar47 = unaff_d14 & 0xffffffff;
              *puVar26 = (int)fVar44 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                         ((int)fVar43 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
            }
            else {
              if (*(long *)((long)dVar20 + 0x100) == 0) goto LAB_00e443fc;
              if (*(char *)(*(long *)((long)dVar20 + 0x100) + 0x20) != '\0') goto LAB_00e3dd34;
              lVar15 = *unaff_x24;
              dVar20 = modf(DAT_028aa048,(double *)&stack0x00000070);
              if (dVar20 == 0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar37 = 255.0;
              }
              dVar20 = modf(dVar38,(double *)&stack0x00000070);
              if (dVar20 == 0.5) {
                fVar44 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar44 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar44 = 255.0;
              }
              dVar20 = modf(dVar38,(double *)&stack0x00000070);
              if (dVar20 == 0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar35 = 255.0;
              }
              dVar20 = modf(dVar38,(double *)&stack0x00000070);
              if (dVar20 == 0.5) {
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar40 = 255.0;
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
              *(uint *)(lVar15 + uVar16 * 4 + 0x20) =
                   (int)fVar37 & 0xffU | ((int)fVar44 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10
                   | (int)fVar40 << 0x18;
              lVar15 = *unaff_x24;
              dVar20 = modf(dVar38,(double *)&stack0x00000070);
              if (dVar20 == 0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar37 = 255.0;
              }
              dVar20 = modf(dVar38,(double *)&stack0x00000070);
              if (dVar20 == 0.5) {
                fVar44 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar44 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar44 = 255.0;
              }
              dVar20 = modf(dVar38,(double *)&stack0x00000070);
              if (dVar20 == 0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar35 = 255.0;
              }
              dVar20 = modf(dVar38,(double *)&stack0x00000070);
              if (dVar20 == 0.5) {
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar40 = 255.0;
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar32) goto LAB_00e44400;
              *(uint *)(lVar15 + (long)(int)uVar32 * 4 + 0x20) =
                   (int)fVar37 & 0xffU | ((int)fVar44 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10
                   | (int)fVar40 << 0x18;
              lVar15 = *unaff_x24;
              dVar20 = modf(dVar38,(double *)&stack0x00000070);
              if (dVar20 == 0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar37 = 255.0;
              }
              dVar20 = modf(dVar38,(double *)&stack0x00000070);
              if (dVar20 == 0.5) {
                fVar44 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar44 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar44 = 255.0;
              }
              dVar20 = modf(dVar38,(double *)&stack0x00000070);
              if (dVar20 == 0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar35 = 255.0;
              }
              dVar20 = modf(dVar38,(double *)&stack0x00000070);
              if (dVar20 == 0.5) {
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar40 = 255.0;
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar30) goto LAB_00e44400;
              *(uint *)(lVar15 + (long)(int)uVar30 * 4 + 0x20) =
                   (int)fVar37 & 0xffU | ((int)fVar44 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10
                   | (int)fVar40 << 0x18;
              lVar15 = *unaff_x24;
              dVar20 = modf(dVar38,(double *)&stack0x00000070);
              if (dVar20 == 0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar37 = 255.0;
              }
              dVar20 = modf(dVar38,(double *)&stack0x00000070);
              if (dVar20 == 0.5) {
                fVar44 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar44 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar44 = 255.0;
              }
              dVar20 = modf(dVar38,(double *)&stack0x00000070);
              if (dVar20 == 0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar35 = 255.0;
              }
              dVar20 = modf(dVar38,(double *)&stack0x00000070);
              if (dVar20 == 0.5) {
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar40 = 255.0;
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_00e44400;
              *(uint *)(lVar15 + uVar29 * 4 + 0x20) =
                   (int)fVar37 & 0xffU | ((int)fVar44 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10
                   | (int)fVar40 << 0x18;
            }
LAB_00e43400:
            lVar15 = *unaff_x24;
            if (lVar15 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
            lVar15 = lVar15 + uVar16 * 4;
            fVar37 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x23));
            *(char *)(lVar15 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar37);
            lVar15 = unaff_x19[0x5f];
            if (lVar15 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar15 + 0x18) <= uVar32) goto LAB_00e44400;
            lVar15 = lVar15 + (long)(int)uVar32 * 4;
            fVar37 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x23));
            *(char *)(lVar15 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar37);
            lVar15 = unaff_x19[0x5f];
            if (lVar15 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar15 + 0x18) <= uVar30) goto LAB_00e44400;
            lVar15 = lVar15 + (long)(int)uVar30 * 4;
            fVar37 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x23));
            *(char *)(lVar15 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar37);
            lVar15 = unaff_x19[0x5f];
            if (lVar15 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_00e44400;
            lVar15 = lVar15 + uVar29 * 4;
            param_2 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
            fVar37 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x23));
            *(char *)(lVar15 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar37);
            uVar34 = FUN_00e3703c();
            if ((uVar34 & 1) == 0) {
              lVar15 = *plVar33;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar15 = *plVar33;
              }
              if (*(int *)(*(long *)(lVar15 + 0xb8) + 0x20) == 1) {
                lVar15 = *unaff_x24;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
                puVar26 = (uint *)(lVar15 + uVar16 * 4 + 0x20);
                uVar7 = *puVar26;
                fVar44 = (float)FUN_026982b0((float)(uVar7 & 0xff) / 255.0,0);
                fVar35 = (float)FUN_026982b0((float)(uVar7 >> 8 & 0xff) / 255.0,0);
                fVar40 = (float)FUN_026982b0((float)(uVar7 >> 0x10 & 0xff) / 255.0,0);
                fVar37 = fVar44;
                if (1.0 < fVar44) {
                  fVar37 = 1.0;
                }
                fVar37 = fVar37 * 255.0;
                if (fVar44 < 0.0) {
                  fVar37 = 0.0;
                }
                dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar20 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar20 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + -0.5);
                }
                fVar44 = fVar35;
                if (1.0 < fVar35) {
                  fVar44 = 1.0;
                }
                fVar44 = fVar44 * 255.0;
                if (fVar35 < 0.0) {
                  fVar44 = 0.0;
                }
                dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                if (0.0 <= fVar44) {
                  if (dVar20 == 0.5) {
                    fVar44 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar44 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar44 = (float)(int)(fVar44 + 0.5);
                  }
                }
                else if (dVar20 == -0.5) {
                  fVar44 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar44 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar44 = (float)(int)(fVar44 + -0.5);
                }
                fVar35 = fVar40;
                if (1.0 < fVar40) {
                  fVar35 = 1.0;
                }
                fVar35 = fVar35 * 255.0;
                fVar43 = (float)(uVar7 >> 0x18) / 255.0;
                if (fVar40 < 0.0) {
                  fVar35 = 0.0;
                }
                dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                if (0.0 <= fVar35) {
                  if (dVar20 == 0.5) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e43744;
                  }
                  fVar40 = (float)(int)(fVar35 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = fVar35;
                  }
                }
                else {
                  fVar40 = (float)(int)(fVar35 + -0.5);
                }
                if (1.0 < fVar43) {
                  fVar43 = 1.0;
                }
                fVar43 = fVar43 * 255.0;
                dVar20 = modf((double)fVar43,(double *)&stack0x00000070);
                if (0.0 <= fVar43) {
                  if (dVar20 == 0.5) {
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar43 + 0.5);
                  }
                }
                else if (dVar20 == -0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar43 + -0.5);
                }
                if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
                *puVar26 = (int)fVar37 & 0xffU | ((int)fVar44 & 0xffU) << 8 |
                           ((int)fVar40 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                lVar15 = *unaff_x24;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar32) goto LAB_00e44400;
                puVar26 = (uint *)(lVar15 + (long)(int)uVar32 * 4 + 0x20);
                uVar4 = *puVar26;
                fVar44 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
                fVar35 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,0);
                fVar40 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / 255.0,0);
                fVar37 = fVar44;
                if (1.0 < fVar44) {
                  fVar37 = 1.0;
                }
                fVar37 = fVar37 * 255.0;
                if (fVar44 < 0.0) {
                  fVar37 = 0.0;
                }
                dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar20 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar20 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + -0.5);
                }
                fVar44 = fVar35;
                if (1.0 < fVar35) {
                  fVar44 = 1.0;
                }
                fVar44 = fVar44 * 255.0;
                if (fVar35 < 0.0) {
                  fVar44 = 0.0;
                }
                dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                if (0.0 <= fVar44) {
                  if (dVar20 == 0.5) {
                    fVar44 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar44 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar44 = (float)(int)(fVar44 + 0.5);
                  }
                }
                else if (dVar20 == -0.5) {
                  fVar44 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar44 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar44 = (float)(int)(fVar44 + -0.5);
                }
                fVar35 = fVar40;
                if (1.0 < fVar40) {
                  fVar35 = 1.0;
                }
                fVar35 = fVar35 * 255.0;
                fVar43 = (float)(uVar4 >> 0x18) / 255.0;
                if (fVar40 < 0.0) {
                  fVar35 = 0.0;
                }
                dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                if (0.0 <= fVar35) {
                  if (dVar20 == 0.5) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e43a84;
                  }
                  fVar40 = (float)(int)(fVar35 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = fVar35;
                  }
                }
                else {
                  fVar40 = (float)(int)(fVar35 + -0.5);
                }
                if (1.0 < fVar43) {
                  fVar43 = 1.0;
                }
                fVar43 = fVar43 * 255.0;
                dVar20 = modf((double)fVar43,(double *)&stack0x00000070);
                if (0.0 <= fVar43) {
                  if (dVar20 == 0.5) {
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar43 + 0.5);
                  }
                }
                else if (dVar20 == -0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar43 + -0.5);
                }
                if (*(uint *)(lVar15 + 0x18) <= uVar32) goto LAB_00e44400;
                *puVar26 = (int)fVar37 & 0xffU | ((int)fVar44 & 0xffU) << 8 |
                           ((int)fVar40 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                lVar15 = *unaff_x24;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar30) goto LAB_00e44400;
                puVar26 = (uint *)(lVar15 + (long)(int)uVar30 * 4 + 0x20);
                uVar4 = *puVar26;
                fVar44 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
                fVar35 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,0);
                fVar40 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / 255.0,0);
                fVar37 = fVar44;
                if (1.0 < fVar44) {
                  fVar37 = 1.0;
                }
                fVar37 = fVar37 * 255.0;
                if (fVar44 < 0.0) {
                  fVar37 = 0.0;
                }
                dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar20 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar20 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + -0.5);
                }
                fVar44 = fVar35;
                if (1.0 < fVar35) {
                  fVar44 = 1.0;
                }
                fVar44 = fVar44 * 255.0;
                if (fVar35 < 0.0) {
                  fVar44 = 0.0;
                }
                dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                if (0.0 <= fVar44) {
                  if (dVar20 == 0.5) {
                    fVar44 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar44 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar44 = (float)(int)(fVar44 + 0.5);
                  }
                }
                else if (dVar20 == -0.5) {
                  fVar44 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar44 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar44 = (float)(int)(fVar44 + -0.5);
                }
                fVar35 = fVar40;
                if (1.0 < fVar40) {
                  fVar35 = 1.0;
                }
                fVar35 = fVar35 * 255.0;
                fVar43 = (float)(uVar4 >> 0x18) / 255.0;
                if (fVar40 < 0.0) {
                  fVar35 = 0.0;
                }
                dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                if (0.0 <= fVar35) {
                  if (dVar20 == 0.5) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e43dbc;
                  }
                  fVar40 = (float)(int)(fVar35 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = fVar35;
                  }
                }
                else {
                  fVar40 = (float)(int)(fVar35 + -0.5);
                }
                if (1.0 < fVar43) {
                  fVar43 = 1.0;
                }
                fVar43 = fVar43 * 255.0;
                dVar20 = modf((double)fVar43,(double *)&stack0x00000070);
                if (0.0 <= fVar43) {
                  if (dVar20 == 0.5) {
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar43 + 0.5);
                  }
                }
                else if (dVar20 == -0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar43 + -0.5);
                }
                if (*(uint *)(lVar15 + 0x18) <= uVar30) goto LAB_00e44400;
                *puVar26 = (int)fVar37 & 0xffU | ((int)fVar44 & 0xffU) << 8 |
                           ((int)fVar40 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                lVar15 = *unaff_x24;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_00e44400;
                puVar26 = (uint *)(lVar15 + uVar29 * 4 + 0x20);
                uVar4 = *puVar26;
                fVar44 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
                fVar35 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,0);
                fVar40 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / 255.0,0);
                fVar37 = fVar44;
                if (1.0 < fVar44) {
                  fVar37 = 1.0;
                }
                fVar37 = fVar37 * 255.0;
                if (fVar44 < 0.0) {
                  fVar37 = 0.0;
                }
                dVar20 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar20 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar20 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + -0.5);
                }
                param_3 = 0x3f800000;
                fVar44 = fVar35;
                if (1.0 < fVar35) {
                  fVar44 = 1.0;
                }
                fVar44 = fVar44 * 255.0;
                if (fVar35 < 0.0) {
                  fVar44 = 0.0;
                }
                dVar20 = modf((double)fVar44,(double *)&stack0x00000070);
                if (0.0 <= fVar44) {
                  if (dVar20 == 0.5) {
                    fVar44 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar44 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar44 = (float)(int)(fVar44 + 0.5);
                  }
                }
                else if (dVar20 == -0.5) {
                  fVar44 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar44 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar44 = (float)(int)(fVar44 + -0.5);
                }
                fVar35 = fVar40;
                if (1.0 < fVar40) {
                  fVar35 = 1.0;
                }
                fVar35 = fVar35 * 255.0;
                fVar43 = (float)(uVar4 >> 0x18) / 255.0;
                if (fVar40 < 0.0) {
                  fVar35 = 0.0;
                }
                dVar20 = modf((double)fVar35,(double *)&stack0x00000070);
                if (0.0 <= fVar35) {
                  if (dVar20 == 0.5) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e440f4;
                  }
                  fVar40 = (float)(int)(fVar35 + 0.5);
                }
                else if (dVar20 == -0.5) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = fVar35;
                  }
                }
                else {
                  fVar40 = (float)(int)(fVar35 + -0.5);
                }
                if (1.0 < fVar43) {
                  fVar43 = 1.0;
                }
                fVar43 = fVar43 * 255.0;
                dVar20 = modf((double)fVar43,(double *)&stack0x00000070);
                if (0.0 <= fVar43) {
                  param_2 = 0;
                  if (dVar20 == 0.5) {
                    fVar35 = 1.0;
                    goto LAB_00e44170;
                  }
                  fVar43 = (float)(int)(fVar43 + 0.5);
                }
                else {
                  param_2 = 0;
                  if (dVar20 == -0.5) {
                    fVar35 = -1.0;
LAB_00e44170:
                    fVar35 = (float)_fStack0000000000000070 + fVar35;
                    param_2 = (ulong)(uint)fVar35;
                    fVar43 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar43 = fVar35;
                    }
                  }
                  else {
                    fVar43 = (float)(int)(fVar43 + -0.5);
                  }
                }
                uVar47 = unaff_d14 & 0xffffffff;
                if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_00e44400;
                *puVar26 = (int)fVar37 & 0xffU | ((int)fVar44 & 0xffU) << 8 |
                           ((int)fVar40 & 0xffU) << 0x10 | (int)fVar43 << 0x18;
              }
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 != uVar3);
        }
        puVar9 = StringLiteral_4992;
        if (((unaff_x19[0x58] != 0) && (iVar13 = FUN_026c82cc(unaff_x19[0x58],0), 0 < iVar13)) ||
           (unaff_x19[0x59] != 0)) {
          puVar10 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
          if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0)) goto LAB_00e443fc;
          iVar13 = *(int *)(unaff_x19[0xf] + 0x10);
          plVar17 = unaff_x19 + 0xcb;
          if (iVar13 != *(int *)(unaff_x19[0xcb] + 0x18)) {
            FUN_010afdd4(plVar17,iVar13,
                         *(undefined8 *)Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
          }
          if ((unaff_x19[0xcc] == 0) || (lVar15 = unaff_x19[0xf], lVar15 == 0)) goto LAB_00e443fc;
          plVar33 = unaff_x19 + 0xcc;
          if (*(int *)(lVar15 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
            FUN_010afdd4(plVar33,*(int *)(lVar15 + 0x10),*(undefined8 *)puVar10);
            lVar15 = unaff_x19[0xf];
            if (lVar15 == 0) goto LAB_00e443fc;
          }
          uVar3 = *(uint *)(lVar15 + 0x10);
          if (0 < (int)uVar3) {
            uVar28 = 0;
            lVar15 = 0x20;
            do {
              if (unaff_x19[9] == 0) goto LAB_00e443fc;
              FUN_0132138c(unaff_x19[9],uVar28 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar9);
              unaff_x19[0xca] = (long)_fStack0000000000000070;
              if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
              lVar21 = unaff_x19[0xcb];
              uVar36 = FUN_00e58a1c(_fStack0000000000000070,0);
              if (lVar21 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar21 + 0x18) <= uVar28) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              puVar2 = (undefined4 *)(lVar21 + lVar15);
              *puVar2 = uVar36;
              puVar2[1] = (int)param_2;
              puVar2[2] = (int)param_3;
              lVar21 = unaff_x19[0xca];
              if ((lVar21 == 0) || (lVar25 = unaff_x19[0xcc], lVar25 == 0)) goto LAB_00e443fc;
              if (*(uint *)(lVar25 + 0x18) <= uVar28) goto LAB_00e44400;
              uVar36 = *(undefined4 *)(lVar21 + 0x4c);
              uVar28 = uVar28 + 1;
              puVar24 = (undefined8 *)(lVar25 + lVar15);
              lVar15 = lVar15 + 0xc;
              *puVar24 = *(undefined8 *)(lVar21 + 0x44);
              *(undefined4 *)(puVar24 + 1) = uVar36;
            } while (uVar3 != uVar28);
          }
          if (unaff_x19[0x58] != 0) {
            FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar17,*plVar33,
                         *(undefined8 *)StringLiteral_225);
          }
          lVar15 = unaff_x19[0x59];
          if (lVar15 != 0) {
            (**(code **)(lVar15 + 0x18))
                      (*(undefined8 *)(lVar15 + 0x40),*in_stack_00000038,*plVar17,*plVar33,
                       *(undefined8 *)(lVar15 + 0x28));
          }
          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
        }
        lVar15 = __start_il2cpp();
        if (lVar15 != 0) {
          if ((*(char *)(lVar15 + 0x109) != '\0') || (*(char *)((long)unaff_x19 + 0xa9) != '\0')) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 0;
          }
          return;
        }
      }
    }
  }
LAB_00e443fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


