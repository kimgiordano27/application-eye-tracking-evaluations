/*
FUNCTION_NAME: FUN_02e0cf60
ENTRY_POINT: 02e0cf60
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_20;validity_or_gating_hits_21;telemetry_or_network_hits_10
*/


void FUN_02e0cf60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 float param_5,float param_6,long *param_7,ulong param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char cVar12;
  long lVar13;
  long lVar14;
  char cVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined4 uVar33;
  float fVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float local_124;
  ulong local_120;
  uint local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  ulong local_100;
  uint local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  uint local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  uint local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_58;
  undefined4 local_54;
  ulong uVar32;
  
  uVar5 = param_4;
  uVar21 = param_3;
  if ((DAT_03ff00f2 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_4545);
    DAT_03ff00f2 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  fVar43 = (float)uVar5;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_f0 = 0;
  local_f8 = 0;
  uStack_108 = 0;
  local_100 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if (*(char *)((long)param_7 + 0x1d9) == '\0') {
    lVar9 = param_7[9];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(lVar9,0);
    if ((uVar4 & 1) != 0) {
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
      uStack_a8 = (*(undefined8 **)
                    (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                    + 0xb8))[1];
      local_b0 = **(undefined8 **)
                   (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                   + 0xb8);
      cVar12 = '\x01';
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
        cVar12 = DAT_03fed256;
      }
      puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
      local_c0 = **(ulong **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      local_b8 = (uint)(*(ulong **)
                         (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8))[1];
      cVar15 = '\x01';
      if (cVar12 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
        cVar15 = DAT_03fed257;
      }
      uStack_c8 = (*(undefined8 **)(*(long *)puVar2 + 0xb8))[1];
      local_d0 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
      cVar12 = '\x01';
      if (cVar15 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
        cVar12 = DAT_03fed256;
      }
      local_e0 = **(ulong **)(*(long *)puVar3 + 0xb8);
      local_d8 = (uint)(*(ulong **)(*(long *)puVar3 + 0xb8))[1];
      cVar15 = '\x01';
      if (cVar12 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
        cVar15 = DAT_03fed257;
      }
      uStack_e8 = (*(undefined8 **)(*(long *)puVar2 + 0xb8))[1];
      local_f0 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
      cVar12 = '\x01';
      if (cVar15 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
        cVar12 = DAT_03fed256;
      }
      local_100 = **(ulong **)(*(long *)puVar3 + 0xb8);
      local_f8 = (uint)(*(ulong **)(*(long *)puVar3 + 0xb8))[1];
      cVar15 = '\x01';
      if (cVar12 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
        cVar15 = DAT_03fed257;
      }
      uStack_108 = (*(undefined8 **)(*(long *)puVar2 + 0xb8))[1];
      local_110 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
      if (cVar15 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      local_120 = **(ulong **)(*(long *)puVar3 + 0xb8);
      uVar26 = (uint)(*(ulong **)(*(long *)puVar3 + 0xb8))[1];
      lVar9 = param_7[7];
      local_118 = uVar26;
      if ((lVar9 != 0) && (param_7[8] != 0)) {
        lVar13 = *(long *)(lVar9 + 0x98);
        lVar11 = *(long *)(param_7[8] + 0x98);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03923030(lVar9,0);
        if ((uVar4 & 1) != 0) {
          FUN_02df075c(param_7[7],param_7[9],&local_c0,&local_b0,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar4 = FUN_03923030(lVar13,0);
          if ((uVar4 & 1) != 0) {
            if (lVar13 == 0) goto LAB_02e0dbf0;
            uVar5 = FUN_02ddfea0(lVar13,0);
            FUN_02df075c(uVar5,param_7[7],&local_100,&local_f0,0);
          }
        }
        lVar9 = param_7[8];
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03923030(lVar9,0);
        if ((uVar4 & 1) != 0) {
          FUN_02df075c(param_7[8],param_7[9],&local_e0,&local_d0,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar4 = FUN_03923030(lVar11,0);
          if ((uVar4 & 1) != 0) {
            if (lVar11 == 0) goto LAB_02e0dbf0;
            uVar5 = FUN_02ddfea0(lVar11,0);
            FUN_02df075c(uVar5,param_7[8],&local_120,&local_110,0);
          }
        }
        if ((param_7[7] != 0) && (lVar9 = *(long *)(param_7[7] + 0x78), lVar9 != 0)) {
          uVar16 = FUN_03959e50(lVar9,0);
          if ((param_7[8] != 0) && (lVar9 = *(long *)(param_7[8] + 0x78), lVar9 != 0)) {
            uVar27 = uVar26;
            uVar33 = uVar21;
            uVar17 = FUN_03959e50(lVar9,0);
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed257 = '\x01';
            }
            puVar8 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
            local_54 = *puVar8;
            local_58 = (float)puVar8[1];
            local_124 = (float)puVar8[2];
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar4 = FUN_03923030(lVar13,0);
            lVar9 = 0;
            if ((uVar4 & 1) != 0) {
              if (lVar13 == 0) goto LAB_02e0dbf0;
              lVar9 = *(long *)(lVar13 + 0xa8);
            }
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar4 = FUN_03923030(lVar11,0);
            lVar10 = 0;
            if ((uVar4 & 1) != 0) {
              if (lVar11 == 0) goto LAB_02e0dbf0;
              lVar10 = *(long *)(lVar11 + 0xa8);
            }
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar4 = FUN_03923030(lVar9,0);
            uVar18 = local_54;
            fVar28 = local_58;
            fVar23 = local_124;
            if ((uVar4 & 1) != 0) {
              if (lVar9 == 0) goto LAB_02e0dbf0;
              uVar18 = FUN_03959e50(lVar9,0);
            }
            fVar22 = fVar28;
            fVar41 = fVar23;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar4 = FUN_03923030(lVar10,0);
            if ((uVar4 & 1) != 0) {
              if (lVar10 == 0) goto LAB_02e0dbf0;
              local_58 = fVar22;
              local_124 = fVar41;
              local_54 = FUN_03959e50(lVar10,0);
              fVar22 = local_58;
              fVar41 = local_124;
            }
            lVar14 = param_7[0x25];
            (**(code **)(*param_7 + 0x528))(param_7,*(undefined8 *)(*param_7 + 0x530));
            puVar2 = StringLiteral_4545;
            if (lVar14 != 0) {
              FUN_022228a0(lVar14,*(undefined8 *)StringLiteral_4545);
              if ((param_7[9] != 0) && (lVar14 = FUN_0391c27c(param_7[9],0), lVar14 != 0)) {
                uVar5 = FUN_039274a0(lVar14,0);
                fVar44 = fVar43;
                fVar45 = fVar22;
                fVar34 = fVar41;
                if ((param_8 & 1) != 0) {
                  if (param_7[9] == 0) goto LAB_02e0dbf0;
                  fVar45 = param_5;
                  fVar34 = param_6;
                  FUN_02e045dc(param_4,param_7[9],0);
                }
                if ((param_7[9] != 0) && (lVar14 = FUN_0391c27c(param_7[9],0), lVar14 != 0)) {
                  fVar19 = (float)FUN_039274a0(lVar14,0);
                  fVar20 = (float)FUN_03914250(uVar5,0);
                  fVar42 = (fVar45 * fVar41 + fVar44 * fVar20 + fVar19 * fVar43) - fVar34 * fVar22;
                  uVar31 = (ulong)(uint)((fVar34 * fVar20 + fVar44 * fVar22 + fVar45 * fVar43) -
                                        fVar19 * fVar41);
                  uVar38 = (ulong)(uint)((fVar19 * fVar22 + fVar44 * fVar41 + fVar34 * fVar43) -
                                        fVar45 * fVar20);
                  fVar43 = ((fVar44 * fVar43 - fVar19 * fVar20) - fVar45 * fVar22) - fVar34 * fVar41
                  ;
                  uVar4 = uVar31;
                  uVar35 = uVar38;
                  uVar5 = FUN_03914a7c(fVar42,uVar31,uVar38,fVar43,uVar16,uVar26,uVar21,0);
                  uVar29 = uVar31;
                  uVar36 = uVar38;
                  uVar21 = FUN_03914a7c(fVar42,uVar31,uVar38,fVar43,uVar17,uVar27,uVar33,0);
                  uVar30 = uVar31;
                  uVar37 = uVar38;
                  uVar16 = FUN_03914a7c(fVar42,uVar31,uVar38,fVar43,uVar18,fVar28,fVar23,0);
                  uVar24 = FUN_03914a7c(fVar42,uVar31,uVar38,fVar43,local_54,local_58,local_124,0);
                  lVar14 = param_7[7];
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar6 = FUN_03923030(lVar14,0);
                  if ((uVar6 & 1) != 0) {
                    if (param_7[7] == 0) goto LAB_02e0dbf0;
                    lVar14 = FUN_0391c27c(param_7[7],0);
                    if ((param_7[9] == 0) || (lVar7 = FUN_0391c27c(param_7[9],0), lVar7 == 0))
                    goto LAB_02e0dbf0;
                    uVar6 = local_c0 >> 0x20;
                    uVar39 = (ulong)local_b8;
                    uVar25 = FUN_03927438(local_c0 & 0xffffffff,uVar6,uVar39,lVar7,0);
                    if (param_7[9] == 0) goto LAB_02e0dbf0;
                    uVar32 = uVar6;
                    uVar40 = uVar39;
                    lVar7 = FUN_0391c27c(param_7[9],0);
                    fVar23 = (float)uVar40;
                    fVar28 = (float)uVar32;
                    if ((lVar7 == 0) || (fVar22 = (float)FUN_039274a0(lVar7,0), lVar14 == 0))
                    goto LAB_02e0dbf0;
                    fVar44 = fVar43 * uStack_a8._4_4_;
                    fVar45 = fVar43 * (float)uStack_a8;
                    fVar41 = fVar43 * local_b0._4_4_;
                    fVar43 = (fVar28 * (float)uStack_a8 +
                             fVar43 * (float)local_b0 + fVar22 * uStack_a8._4_4_) -
                             fVar23 * local_b0._4_4_;
                    FUN_039297a8(uVar25,uVar6,uVar39,fVar43,
                                 (fVar23 * (float)local_b0 + fVar41 + fVar28 * uStack_a8._4_4_) -
                                 fVar22 * (float)uStack_a8,
                                 (fVar22 * local_b0._4_4_ + fVar45 + fVar23 * uStack_a8._4_4_) -
                                 fVar28 * (float)local_b0,
                                 ((fVar44 - fVar22 * (float)local_b0) - fVar28 * local_b0._4_4_) -
                                 fVar23 * (float)uStack_a8,lVar14,0);
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar6 = FUN_03923030(lVar13,0);
                    if ((uVar6 & 1) != 0) {
                      if (lVar13 == 0) goto LAB_02e0dbf0;
                      lVar13 = FUN_02ddfea0(lVar13,0);
                      if ((param_7[7] == 0) || (lVar14 = FUN_0391c27c(param_7[7],0), lVar14 == 0))
                      goto LAB_02e0dbf0;
                      uVar6 = local_100 >> 0x20;
                      uVar39 = (ulong)local_f8;
                      uVar25 = FUN_03927438(local_100 & 0xffffffff,uVar6,uVar39,lVar14,0);
                      if (param_7[7] == 0) goto LAB_02e0dbf0;
                      uVar32 = uVar6;
                      uVar40 = uVar39;
                      lVar14 = FUN_0391c27c(param_7[7],0);
                      fVar23 = (float)uVar40;
                      fVar28 = (float)uVar32;
                      if ((lVar14 == 0) || (fVar22 = (float)FUN_039274a0(lVar14,0), lVar13 == 0))
                      goto LAB_02e0dbf0;
                      fVar44 = fVar43 * uStack_e8._4_4_;
                      fVar45 = fVar43 * (float)uStack_e8;
                      fVar41 = fVar43 * local_f0._4_4_;
                      fVar43 = (fVar28 * (float)uStack_e8 +
                               fVar43 * (float)local_f0 + fVar22 * uStack_e8._4_4_) -
                               fVar23 * local_f0._4_4_;
                      FUN_039297a8(uVar25,uVar6,uVar39,fVar43,
                                   (fVar23 * (float)local_f0 + fVar41 + fVar28 * uStack_e8._4_4_) -
                                   fVar22 * (float)uStack_e8,
                                   (fVar22 * local_f0._4_4_ + fVar45 + fVar23 * uStack_e8._4_4_) -
                                   fVar28 * (float)local_f0,
                                   ((fVar44 - fVar22 * (float)local_f0) - fVar28 * local_f0._4_4_) -
                                   fVar23 * (float)uStack_e8,lVar13,0);
                    }
                  }
                  lVar13 = param_7[8];
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar6 = FUN_03923030(lVar13,0);
                  if ((uVar6 & 1) != 0) {
                    if (param_7[8] == 0) goto LAB_02e0dbf0;
                    lVar13 = FUN_0391c27c(param_7[8],0);
                    if ((param_7[9] == 0) || (lVar14 = FUN_0391c27c(param_7[9],0), lVar14 == 0))
                    goto LAB_02e0dbf0;
                    uVar6 = local_e0 >> 0x20;
                    uVar39 = (ulong)local_d8;
                    uVar25 = FUN_03927438(local_e0 & 0xffffffff,uVar6,uVar39,lVar14,0);
                    if (param_7[9] == 0) goto LAB_02e0dbf0;
                    uVar32 = uVar6;
                    uVar40 = uVar39;
                    lVar14 = FUN_0391c27c(param_7[9],0);
                    fVar23 = (float)uVar40;
                    fVar28 = (float)uVar32;
                    if ((lVar14 == 0) || (fVar22 = (float)FUN_039274a0(lVar14,0), lVar13 == 0))
                    goto LAB_02e0dbf0;
                    fVar41 = (fVar28 * (float)uStack_c8 +
                             fVar43 * (float)local_d0 + fVar22 * uStack_c8._4_4_) -
                             fVar23 * local_d0._4_4_;
                    FUN_039297a8(uVar25,uVar6,uVar39,fVar41,
                                 (fVar23 * (float)local_d0 +
                                 fVar43 * local_d0._4_4_ + fVar28 * uStack_c8._4_4_) -
                                 fVar22 * (float)uStack_c8,
                                 (fVar22 * local_d0._4_4_ +
                                 fVar43 * (float)uStack_c8 + fVar23 * uStack_c8._4_4_) -
                                 fVar28 * (float)local_d0,
                                 ((fVar43 * uStack_c8._4_4_ - fVar22 * (float)local_d0) -
                                 fVar28 * local_d0._4_4_) - fVar23 * (float)uStack_c8,lVar13,0);
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar6 = FUN_03923030(lVar11,0);
                    if ((uVar6 & 1) != 0) {
                      if (lVar11 == 0) goto LAB_02e0dbf0;
                      lVar11 = FUN_02ddfea0(lVar11,0);
                      if ((param_7[8] == 0) || (lVar13 = FUN_0391c27c(param_7[8],0), lVar13 == 0))
                      goto LAB_02e0dbf0;
                      uVar6 = local_120 >> 0x20;
                      uVar39 = (ulong)local_118;
                      uVar25 = FUN_03927438(local_120 & 0xffffffff,uVar6,uVar39,lVar13,0);
                      if (param_7[8] == 0) goto LAB_02e0dbf0;
                      uVar32 = uVar6;
                      uVar40 = uVar39;
                      lVar13 = FUN_0391c27c(param_7[8],0);
                      fVar28 = (float)uVar40;
                      fVar43 = (float)uVar32;
                      if ((lVar13 == 0) || (fVar23 = (float)FUN_039274a0(lVar13,0), lVar11 == 0))
                      goto LAB_02e0dbf0;
                      FUN_039297a8(uVar25,uVar6,uVar39,
                                   (fVar43 * (float)uStack_108 +
                                   fVar41 * (float)local_110 + fVar23 * uStack_108._4_4_) -
                                   fVar28 * local_110._4_4_,
                                   (fVar28 * (float)local_110 +
                                   fVar41 * local_110._4_4_ + fVar43 * uStack_108._4_4_) -
                                   fVar23 * (float)uStack_108,
                                   (fVar23 * local_110._4_4_ +
                                   fVar41 * (float)uStack_108 + fVar28 * uStack_108._4_4_) -
                                   fVar43 * (float)local_110,
                                   ((fVar41 * uStack_108._4_4_ - fVar23 * (float)local_110) -
                                   fVar43 * local_110._4_4_) - fVar28 * (float)uStack_108,lVar11,0);
                    }
                  }
                  (**(code **)(*param_7 + 0x4b8))
                            (param_1,param_2,param_3,param_7,*(undefined8 *)(*param_7 + 0x4c0));
                  lVar11 = param_7[0x27];
                  (**(code **)(*param_7 + 0x528))(param_7,*(undefined8 *)(*param_7 + 0x530));
                  if (lVar11 != 0) {
                    FUN_022228a0(lVar11,*(undefined8 *)puVar2);
                    if (param_7[0x26] != 0) {
                      FUN_0392e738(param_7[0x26],0);
                      if ((param_7[7] != 0) && (lVar11 = *(long *)(param_7[7] + 0x78), lVar11 != 0))
                      {
                        FUN_03959ef0(uVar5,uVar4,uVar35 & 0xffffffff,lVar11,0);
                        if ((param_7[8] != 0) &&
                           (lVar11 = *(long *)(param_7[8] + 0x78), lVar11 != 0)) {
                          FUN_03959ef0(uVar21,uVar29 & 0xffffffff,uVar36 & 0xffffffff,lVar11,0);
                          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                            thunk_FUN_01ac7298();
                          }
                          uVar4 = FUN_03923030(lVar9,0);
                          if ((uVar4 & 1) != 0) {
                            if (lVar9 == 0) goto LAB_02e0dbf0;
                            FUN_03959ef0(uVar16,uVar30 & 0xffffffff,uVar37 & 0xffffffff,lVar9,0);
                          }
                          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                            thunk_FUN_01ac7298();
                          }
                          uVar4 = FUN_03923030(lVar10,0);
                          if ((uVar4 & 1) == 0) {
                            return;
                          }
                          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                            thunk_FUN_01ac7298();
                          }
                          uVar4 = FUN_0391f968(lVar10,lVar9,0);
                          if ((uVar4 & 1) == 0) {
                            return;
                          }
                          if (lVar10 != 0) {
                            FUN_03959ef0(uVar24,uVar31,uVar38,lVar10,0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_02e0dbf0:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


