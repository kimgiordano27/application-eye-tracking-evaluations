/*
FUNCTION_NAME: FUN_02df68b0
ENTRY_POINT: 02df68b0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_02df68b0(long *param_1,long param_2)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  float *pfVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  if ((DAT_03ff004c & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_1085AB18045526E0E6BC49579C2783F82561DA676F694D26D184D6EB7F99118F
                      );
    thunk_FUN_01ad9084(StringLiteral_4389);
    thunk_FUN_01ad9084(StringLiteral_4390);
    thunk_FUN_01ad9084(StringLiteral_4391);
    thunk_FUN_01ad9084(StringLiteral_4375);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__);
    thunk_FUN_01ad9084(StringLiteral_4392);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_4__);
    thunk_FUN_01ad9084(StringLiteral_4367);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_4393);
    thunk_FUN_01ad9084(StringLiteral_4394);
    thunk_FUN_01ad9084(StringLiteral_4395);
    DAT_03ff004c = 1;
  }
  local_110 = 0;
  local_108 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  if ((param_1[0x14] != 0) && (param_1[6] != 0)) {
    if (*(int *)(param_1[0x14] + 0x18) < *(int *)(param_1[6] + 0x28)) {
      if (param_2 == 0) goto LAB_02df752c;
      iVar4 = FUN_039548f8(param_2,0);
      puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      fVar1 = DAT_00b55370;
      if (0 < iVar4) {
        iVar4 = 0;
        puVar24 = (undefined8 *)Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_4__;
        do {
          FUN_03954b9c(&local_d0,param_2,iVar4,0);
          uStack_f8 = uStack_c8;
          local_100 = local_d0;
          uStack_e8 = uStack_b8;
          local_f0 = uStack_c0;
          uStack_d8 = uStack_a8;
          local_e0 = local_b0;
          lVar17 = param_1[0xc];
          if (lVar17 == 0) goto LAB_02df752c;
          if (0 < (int)*(ulong *)(lVar17 + 0x18)) {
            uVar19 = 0;
            uVar20 = 0;
            uVar11 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
            uVar9 = uStack_c0;
            uVar23 = local_b0;
            do {
              if (uVar11 <= uVar20) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              uVar18 = *(undefined8 *)(lVar17 + 0x20 + uVar20 * 8);
              uVar7 = FUN_0395ee54(&local_100,0);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)puVar2);
              }
              uVar5 = FUN_03922f24(uVar18,uVar7,0);
              fVar40 = (float)uVar23;
              fVar39 = (float)uVar9;
              uVar11 = (ulong)*(uint *)(lVar17 + 0x18);
              uVar20 = uVar20 + 1;
              uVar19 = uVar19 | uVar5;
            } while ((long)uVar20 < (long)(int)*(uint *)(lVar17 + 0x18));
            if ((uVar19 & 1) != 0) {
              lVar17 = FUN_0395eecc(&local_100,0);
              if (lVar17 == 0) goto LAB_02df752c;
              lVar17 = FUN_03959e14(lVar17,0);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)puVar2);
              }
              uVar20 = FUN_03923030(lVar17,0);
              lVar8 = lVar17;
              if ((uVar20 & 1) == 0) {
                lVar8 = FUN_0395eecc(&local_100,0);
              }
              if (lVar8 == 0) goto LAB_02df752c;
              lVar8 = FUN_0391c2b8(lVar8,0);
              if (param_1[0x16] == 0) goto LAB_02df752c;
              uVar20 = FUN_02b59d74(param_1[0x16],lVar8,*puVar24);
              if ((uVar20 & 1) == 0) {
                if (lVar8 == 0) goto LAB_02df752c;
                FUN_01ed84c4(lVar8,&local_108,*(undefined8 *)StringLiteral_4390);
                FUN_01ed84c4(lVar8,&local_110,*(undefined8 *)StringLiteral_4389);
                lVar22 = local_108;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar20 = FUN_03923030(lVar22,0);
                uVar9 = local_110;
                if ((uVar20 & 1) == 0) {
                  if ((char)param_1[7] != '\0') {
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar20 = FUN_03923030(uVar9,0);
                    plVar10 = param_1 + 8;
                    if ((uVar20 & 1) == 0) goto LAB_02df6be8;
                  }
                }
                else {
                  if (local_108 == 0) goto LAB_02df752c;
                  uVar20 = FUN_0391b750(local_108,0);
                  if ((uVar20 & 1) == 0) {
                    if (*(char *)((long)param_1 + 0x6d) == '\0') {
                      return;
                    }
                    if (local_108 != 0) {
                      uVar9 = FUN_039230bc(local_108,0);
                      uVar9 = FUN_02edd6e8(uVar9,*(undefined8 *)StringLiteral_4394,0);
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298(*(long *)
                                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                          );
                      }
                      FUN_038f2acc(uVar9,0);
                      return;
                    }
                    goto LAB_02df752c;
                  }
                  if (local_108 == 0) goto LAB_02df752c;
                  plVar10 = (long *)(local_108 + 0x20);
LAB_02df6be8:
                  lVar22 = *plVar10;
                  fVar25 = (float)FUN_02df5658(param_1);
                  puVar3 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
                  fVar38 = fVar40;
                  if (DAT_03fed25d == '\0') {
                    thunk_FUN_01ad9084(
                                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                      );
                    DAT_03fed25d = '\x01';
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  fVar33 = fVar40 * fVar40;
                  fVar26 = SQRT(fVar33 + fVar25 * fVar25 + fVar39 * fVar39);
                  if (fVar26 <= fVar1) {
                    if (DAT_03fed257 == '\0') {
                      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                      DAT_03fed257 = '\x01';
                    }
                    pfVar12 = *(float **)
                               (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
                    fVar25 = *pfVar12;
                    fVar39 = pfVar12[1];
                    fVar40 = pfVar12[2];
                  }
                  else {
                    fVar25 = fVar25 / fVar26;
                    fVar39 = fVar39 / fVar26;
                    fVar40 = fVar40 / fVar26;
                  }
                  lVar21 = param_1[4];
                  fVar27 = (float)FUN_02df5658(param_1);
                  fVar26 = fVar38;
                  if (DAT_03fed25d == '\0') {
                    thunk_FUN_01ad9084(puVar3);
                    DAT_03fed25d = '\x01';
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  fVar34 = fVar38 * fVar38;
                  fVar28 = SQRT(fVar34 + fVar27 * fVar27 + fVar33 * fVar33);
                  if (fVar28 <= fVar1) {
                    if (DAT_03fed257 == '\0') {
                      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                      DAT_03fed257 = '\x01';
                    }
                    pfVar12 = *(float **)
                               (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
                    fVar27 = *pfVar12;
                    fVar33 = pfVar12[1];
                    fVar38 = pfVar12[2];
                  }
                  else {
                    fVar27 = fVar27 / fVar28;
                    fVar33 = fVar33 / fVar28;
                    fVar38 = fVar38 / fVar28;
                  }
                  fVar28 = (float)FUN_0395ee48(&local_100,0);
                  if (param_1[6] == 0) goto LAB_02df752c;
                  fVar38 = fVar38 * fVar26;
                  fVar33 = (fVar33 * -fVar34 - fVar27 * fVar28) - fVar38;
                  if (*(float *)(param_1[6] + 0x18) <= fVar33) {
LAB_02df7004:
                    if (*(char *)((long)param_1 + 0x39) == '\0') {
                      fVar33 = (float)FUN_039544e8(param_2,0);
                      if (DAT_03fed25c == '\0') {
                        thunk_FUN_01ad9084(puVar3);
                        DAT_03fed25c = '\x01';
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      if (lVar22 == 0) goto LAB_02df752c;
                      fVar27 = *(float *)(lVar22 + 0x1c);
                      fVar26 = fVar26 * fVar26;
                      if (SQRT(fVar26 + fVar33 * fVar33 + fVar38 * fVar38) < fVar27) {
                        if (*(char *)((long)param_1 + 0x6f) == '\0') goto LAB_02df7484;
                        fVar39 = (float)FUN_039544e8(param_2,0);
                        puVar3 = 
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
                        if (DAT_03fed25c == '\0') {
                          thunk_FUN_01ad9084(
                                            Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                            );
                          DAT_03fed25c = '\x01';
                        }
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
                        local_d0 = CONCAT44(local_d0._4_4_,
                                            SQRT(fVar27 * fVar27 + fVar39 * fVar39 + fVar26 * fVar26
                                                ));
                        uVar9 = thunk_FUN_01afa70c(*(undefined8 *)
                                                                                                        
                                                  Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                                                  ,&local_d0);
                        puVar14 = (undefined8 *)StringLiteral_4393;
                        goto LAB_02df710c;
                      }
                    }
                    if (param_1[0x13] == 0) goto LAB_02df752c;
                    FUN_03959ef0((int)param_1[0x18],*(undefined4 *)((long)param_1 + 0xc4),
                                 (int)param_1[0x19],param_1[0x13],0);
                    lVar13 = local_108;
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar20 = FUN_03923030(lVar13,0);
                    if ((uVar20 & 1) != 0) {
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar20 = FUN_03923030(lVar17,0);
                      if ((uVar20 & 1) != 0) {
                        if ((local_108 == 0) || (lVar17 == 0)) goto LAB_02df752c;
                        FUN_03959ef0(*(undefined4 *)(local_108 + 0x50),
                                     *(undefined4 *)(local_108 + 0x54),
                                     *(undefined4 *)(local_108 + 0x58),lVar17,0);
                      }
                    }
                    uVar9 = (**(code **)(*param_1 + 0x1b8))
                                      (param_1,lVar22,lVar21,lVar17,
                                       *(undefined8 *)(*param_1 + 0x1c0));
                    lVar13 = param_1[0x16];
                    if (lVar13 == 0) goto LAB_02df752c;
                    lVar15 = *(long *)(lVar13 + 0x10);
                    lVar16 = *(long *)Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__;
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                    if (lVar15 == 0) goto LAB_02df752c;
                    uVar19 = *(uint *)(lVar13 + 0x18);
                    if (uVar19 < *(uint *)(lVar15 + 0x18)) {
                      *(uint *)(lVar13 + 0x18) = uVar19 + 1;
                      plVar10 = (long *)(lVar15 + (long)(int)uVar19 * 8 + 0x20);
                      *plVar10 = lVar8;
                      thunk_FUN_01b4f09c(plVar10,lVar8);
                    }
                    else {
                      FUN_02b599e4(lVar13,lVar8,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar13 = local_108;
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar20 = FUN_03923030(lVar13,0);
                    if ((uVar20 & 1) != 0) {
                      lVar13 = param_1[0x17];
                      if (lVar13 == 0) goto LAB_02df752c;
                      lVar15 = *(long *)(lVar13 + 0x10);
                      lVar16 = *(long *)StringLiteral_4392;
                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                      if (lVar15 == 0) goto LAB_02df752c;
                      uVar19 = *(uint *)(lVar13 + 0x18);
                      if (uVar19 < *(uint *)(lVar15 + 0x18)) {
                        *(uint *)(lVar13 + 0x18) = uVar19 + 1;
                        plVar10 = (long *)(lVar15 + (long)(int)uVar19 * 8 + 0x20);
                        *plVar10 = local_108;
                        thunk_FUN_01b4f09c(plVar10);
                      }
                      else {
                        FUN_02b599e4(lVar13,local_108,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                    lVar13 = local_108;
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar20 = FUN_03923030(lVar13,0);
                    if ((uVar20 & 1) == 0) {
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar20 = FUN_03923030(lVar17,0);
                      if ((uVar20 & 1) == 0) {
                        lVar17 = FUN_0395eecc(&local_100,0);
                        if (lVar17 == 0) goto LAB_02df752c;
                        uVar23 = FUN_0391c2b8(lVar17,0);
                        uVar23 = FUN_02deeb04(uVar23,0);
                      }
                      else {
                        uVar23 = FUN_02deec30(lVar17,0);
                        uVar23 = FUN_01ec6884(uVar23,*(undefined8 *)
                                                                                                            
                                                  Field_<PrivateImplementationDetails>_1085AB18045526E0E6BC49579C2783F82561DA676F694D26D184D6EB7F99118F
                                             );
                      }
                    }
                    else {
                      if (local_108 == 0) goto LAB_02df752c;
                      uVar23 = *(undefined8 *)(local_108 + 0x28);
                    }
                    FUN_02df60e8(param_1,uVar23,1);
                    lVar17 = local_108;
                    uVar7 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_4391);
                    FUN_02df7530(fVar25,fVar39,fVar40,uVar7,param_1,lVar17,lVar22,uVar9,lVar8,lVar21
                                 ,uVar23);
                    lVar17 = param_1[0x14];
                    if (lVar17 == 0) goto LAB_02df752c;
                    lVar8 = *(long *)(lVar17 + 0x10);
                    lVar22 = *(long *)StringLiteral_4375;
                    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                    puVar24 = (undefined8 *)
                              Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_4__;
                    if (lVar8 == 0) goto LAB_02df752c;
                    uVar19 = *(uint *)(lVar17 + 0x18);
                    if (uVar19 < *(uint *)(lVar8 + 0x18)) {
                      *(uint *)(lVar17 + 0x18) = uVar19 + 1;
                      puVar14 = (undefined8 *)(lVar8 + (long)(int)uVar19 * 8 + 0x20);
                      *puVar14 = uVar7;
                      thunk_FUN_01b4f09c(puVar14,uVar7);
                    }
                    else {
                      FUN_02b599e4(lVar17,uVar7,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                    }
                    uStack_c8 = uStack_f8;
                    local_d0 = local_100;
                    uStack_b8 = uStack_e8;
                    uStack_c0 = local_f0;
                    uStack_a8 = uStack_d8;
                    local_b0 = local_e0;
                    (**(code **)(*param_1 + 0x188))
                              (param_1,local_108,param_2,&local_d0,*(undefined8 *)(*param_1 + 400));
                  }
                  else if (*(char *)((long)param_1 + 0x54) == '\0') {
                    if (*(char *)((long)param_1 + 0x6e) != '\0') {
                      goto LAB_02df6fdc;
                    }
                  }
                  else {
                    fVar27 = (float)FUN_0395ee3c(&local_100,0);
                    if (param_1[4] == 0) goto LAB_02df752c;
                    fVar34 = fVar26;
                    fVar35 = fVar38;
                    fVar29 = (float)FUN_03928d34(param_1[4],0);
                    fVar28 = fVar34;
                    fVar32 = fVar35;
                    if (DAT_03fed25e == '\0') {
                      thunk_FUN_01ad9084(puVar3);
                      DAT_03fed25e = '\x01';
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    fVar30 = (float)FUN_0395ee3c(&local_100,0);
                    if (param_1[5] == 0) goto LAB_02df752c;
                    fVar37 = fVar28;
                    fVar36 = fVar32;
                    fVar31 = (float)FUN_03928d34(param_1[5],0);
                    if (DAT_03fed25e == '\0') {
                      thunk_FUN_01ad9084(puVar3);
                      DAT_03fed25e = '\x01';
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    fVar26 = (fVar26 - fVar34) * (fVar26 - fVar34);
                    fVar28 = SQRT((fVar28 - fVar37) * (fVar28 - fVar37) +
                                  (fVar30 - fVar31) * (fVar30 - fVar31) +
                                  (fVar32 - fVar36) * (fVar32 - fVar36));
                    if (fVar28 <= SQRT(fVar26 + (fVar27 - fVar29) * (fVar27 - fVar29) +
                                                (fVar38 - fVar35) * (fVar38 - fVar35))) {
                      fVar34 = (float)FUN_02df5658(param_1);
                      fVar27 = fVar26;
                      if (DAT_03fed25d == '\0') {
                        thunk_FUN_01ad9084(puVar3);
                        DAT_03fed25d = '\x01';
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      fVar38 = fVar26 * fVar26;
                      fVar32 = SQRT(fVar38 + fVar34 * fVar34 + fVar28 * fVar28);
                      if (fVar32 <= fVar1) {
                        if (DAT_03fed257 == '\0') {
                          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                          DAT_03fed257 = '\x01';
                        }
                        pfVar12 = *(float **)
                                   (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8
                                   );
                        fVar34 = *pfVar12;
                        fVar28 = pfVar12[1];
                        fVar26 = pfVar12[2];
                      }
                      else {
                        fVar34 = fVar34 / fVar32;
                        fVar28 = fVar28 / fVar32;
                        fVar26 = fVar26 / fVar32;
                      }
                      fVar32 = (float)FUN_0395ee48(&local_100,0);
                      if (param_1[6] == 0) goto LAB_02df752c;
                      fVar38 = fVar28 * fVar38;
                      fVar26 = fVar26 * fVar27;
                      if (*(float *)(param_1[6] + 0x18) <= fVar26 + fVar34 * fVar32 + fVar38) {
                        lVar21 = param_1[5];
                        fVar25 = -fVar25;
                        fVar39 = -fVar39;
                        fVar40 = -fVar40;
                        goto LAB_02df7004;
                      }
                    }
                    if (*(char *)((long)param_1 + 0x6e) != '\0') {
LAB_02df6fdc:
                      local_d0 = CONCAT44(local_d0._4_4_,fVar33);
                      uVar9 = thunk_FUN_01afa70c(*(undefined8 *)
                                                  Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                                                 ,&local_d0);
                      puVar14 = (undefined8 *)StringLiteral_4395;
LAB_02df710c:
                      uVar9 = FUN_02ede300(*puVar14,uVar9,0);
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298(*(long *)
                                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                          );
                      }
                      FUN_038f2acc(uVar9,0);
                    }
                  }
                }
              }
            }
          }
LAB_02df7484:
          iVar4 = iVar4 + 1;
          iVar6 = FUN_039548f8(param_2,0);
        } while (iVar4 < iVar6);
      }
    }
    return;
  }
LAB_02df752c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


