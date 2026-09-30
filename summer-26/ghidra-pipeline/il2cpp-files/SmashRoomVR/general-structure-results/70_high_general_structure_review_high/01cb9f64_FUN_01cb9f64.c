/*
FUNCTION_NAME: FUN_01cb9f64
ENTRY_POINT: 01cb9f64
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


undefined8 FUN_01cb9f64(long param_1)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  undefined4 *puVar20;
  ulong uVar21;
  int *piVar22;
  uint uVar23;
  int iVar24;
  undefined8 uVar25;
  long *plVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  uint local_130;
  float local_12c;
  float fStack_128;
  float local_124;
  int local_120;
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  int local_84;
  
  if ((DAT_03feda3c & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__);
    thunk_FUN_01ad9084(StringLiteral_1090);
    thunk_FUN_01ad9084(StringLiteral_1047);
    thunk_FUN_01ad9084(StringLiteral_1091);
    thunk_FUN_01ad9084(StringLiteral_1092);
    thunk_FUN_01ad9084(StringLiteral_1093);
    thunk_FUN_01ad9084(StringLiteral_1094);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_92__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_93__);
    thunk_FUN_01ad9084(StringLiteral_1095);
    thunk_FUN_01ad9084(StringLiteral_1096);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(StringLiteral_1097);
    thunk_FUN_01ad9084(StringLiteral_1098);
    thunk_FUN_01ad9084(StringLiteral_1099);
    thunk_FUN_01ad9084(StringLiteral_1100);
    thunk_FUN_01ad9084(StringLiteral_1074);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_9__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_1043);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    thunk_FUN_01ad9084(StringLiteral_1010);
    thunk_FUN_01ad9084(StringLiteral_1011);
    thunk_FUN_01ad9084(StringLiteral_1101);
    thunk_FUN_01ad9084(StringLiteral_1102);
    thunk_FUN_01ad9084(StringLiteral_1103);
    thunk_FUN_01ad9084(StringLiteral_1104);
    thunk_FUN_01ad9084(StringLiteral_1105);
    thunk_FUN_01ad9084(StringLiteral_1106);
    DAT_03feda3c = 1;
  }
  local_84 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_01cba214:
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_01cbb550;
    uVar10 = FUN_01d078c8(*(long *)(param_1 + 0x48),0);
    plVar8 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if ((uVar10 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    uVar15 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar10 = FUN_03922f24(uVar15,0,0);
    if ((uVar10 & 1) == 0) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_01cbb550;
      lVar18 = FUN_01d07884(*(long *)(param_1 + 0x48),0);
      if (lVar18 != 0) {
        if (*(long *)(param_1 + 0x48) != 0) {
          uVar10 = FUN_01d078e0(*(long *)(param_1 + 0x48),0);
          if ((uVar10 & 1) != 0) {
            if (*(long *)(param_1 + 0x30) == 0) goto LAB_01cbb550;
            uVar15 = FUN_0391c2b8(*(long *)(param_1 + 0x30),0);
            if (*(int *)(*(long *)StringLiteral_1074 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)StringLiteral_1074);
            }
            FUN_01d08560(7,*(undefined8 *)StringLiteral_1101,uVar15,0);
          }
          if ((*(long *)(param_1 + 0x48) != 0) &&
             (lVar18 = FUN_01d07884(*(long *)(param_1 + 0x48),0), lVar18 != 0)) {
            plVar11 = (long *)FUN_01d09054(lVar18,0);
            if ((*(long *)(param_1 + 0x30) != 0) &&
               (lVar18 = FUN_0391c2b8(*(long *)(param_1 + 0x30),0), lVar18 != 0)) {
              uVar15 = FUN_039230bc(lVar18,0);
              uVar15 = FUN_02edd6e8(uVar15,*(undefined8 *)StringLiteral_1104,0);
              lVar18 = thunk_FUN_01afaadc(*(undefined8 *)
                                           Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__
                                         );
              FUN_0391fe00(lVar18,uVar15,0);
              if (lVar18 != 0) {
                lVar12 = FUN_0391fab4(lVar18,0);
                lVar16 = *(long *)(param_1 + 0x38);
                if (lVar16 == 0) {
                  if ((*(long *)(param_1 + 0x30) == 0) ||
                     (lVar16 = FUN_0391c27c(*(long *)(param_1 + 0x30),0), lVar16 == 0))
                  goto LAB_01cbb550;
                  lVar16 = FUN_03928c2c(lVar16,0);
                }
                if (lVar12 != 0) {
                  FUN_03929660(lVar12,lVar16,0,0);
                  lVar12 = FUN_0391fab4(lVar18,0);
                  if (((*(long *)(param_1 + 0x30) != 0) &&
                      (lVar16 = FUN_0391c27c(*(long *)(param_1 + 0x30),0), lVar16 != 0)) &&
                     (FUN_03928d34(lVar16,0), lVar12 != 0)) {
                    FUN_03928dd4(lVar12,0);
                    lVar12 = FUN_0391fab4(lVar18,0);
                    if (((*(long *)(param_1 + 0x30) != 0) &&
                        (lVar16 = FUN_0391c27c(*(long *)(param_1 + 0x30),0), lVar16 != 0)) &&
                       (FUN_039274a0(lVar16,0), lVar12 != 0)) {
                      FUN_03928f54(lVar12,0);
                      lVar12 = FUN_0391fab4(lVar18,0);
                      if (DAT_03fed258 == '\0') {
                        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                        DAT_03fed258 = '\x01';
                      }
                      if (lVar12 != 0) {
                        lVar16 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__
                                          + 0xb8);
                        FUN_039293f4(*(undefined4 *)(lVar16 + 0xc),*(undefined4 *)(lVar16 + 0x10),
                                     *(undefined4 *)(lVar16 + 0x14),lVar12,0);
                        if ((*(long *)(param_1 + 0x30) != 0) &&
                           (lVar12 = FUN_01e8a9f8(*(long *)(param_1 + 0x30),
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__
                                                 ), lVar12 != 0)) {
                          lVar12 = FUN_038fe900(lVar12,0);
                          local_84 = 0;
                          if (plVar11 != (long *)0x0) {
                            bVar3 = false;
                            plVar26 = (long *)StringLiteral_1097;
LAB_01cba504:
                            iVar24 = local_84;
                            lVar16 = *plVar11;
                            uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
                            if (uVar10 != 0) {
                              piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar22 + -2) == *plVar26) {
                                  puVar13 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
                                  goto LAB_01cba550;
                                }
                                uVar10 = uVar10 - 1;
                                piVar22 = piVar22 + 4;
                              } while (uVar10 != 0);
                            }
                            puVar13 = (undefined8 *)FUN_01ae9f78(plVar11,*plVar26,0);
LAB_01cba550:
                            iVar7 = (*(code *)*puVar13)(plVar11,puVar13[1]);
                            if (iVar7 <= iVar24) {
                              if (*(char *)(param_1 + 0x40) == '\0') {
                                uVar15 = 0;
                              }
                              else {
                                if (*(long *)(param_1 + 0x30) == 0) goto LAB_01cbb550;
                                FUN_0391c2b8(*(long *)(param_1 + 0x30),0);
                                uVar15 = FUN_01cbb564();
                              }
                              uVar9 = FUN_01cbb66c(lVar18);
                              puVar6 = StringLiteral_1095;
                              puVar5 = StringLiteral_1093;
                              puVar4 = StringLiteral_1047;
                              iVar24 = 0;
                              goto LAB_01cbb368;
                            }
                            if (*(long *)(param_1 + 0x30) == 0) goto LAB_01cbb550;
                            uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30);
                            if (*(int *)(*plVar8 + 0xe0) == 0) {
                              thunk_FUN_01ac7298();
                            }
                            uVar10 = FUN_0391f968(uVar15,0,0);
                            lVar16 = *(long *)(param_1 + 0x30);
                            if (lVar16 == 0) goto LAB_01cbb550;
                            if ((uVar10 & 1) == 0) {
                              uVar15 = FUN_0391c2b8(lVar16,0);
                            }
                            else {
                              uVar15 = *(undefined8 *)(lVar16 + 0x30);
                            }
                            if (*(int *)(*plVar8 + 0xe0) == 0) {
                              thunk_FUN_01ac7298();
                            }
                            lVar16 = FUN_01f25754(uVar15,*(undefined8 *)
                                                                                                                    
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__
                                                 );
                            uVar15 = FUN_0303de64(&local_84,0);
                            uVar15 = FUN_02edd6e8(*(undefined8 *)StringLiteral_1103,uVar15,0);
                            if (lVar16 == 0) goto LAB_01cbb550;
                            FUN_0392316c(lVar16,uVar15,0);
                            lVar14 = FUN_0391fab4(lVar16,0);
                            uVar15 = FUN_0391fab4(lVar18,0);
                            if (lVar14 == 0) goto LAB_01cbb550;
                            FUN_03929660(lVar14,uVar15,0,0);
                            lVar14 = FUN_0391fab4(lVar16,0);
                            iVar24 = local_84;
                            lVar19 = *plVar11;
                            uVar10 = (ulong)*(ushort *)(lVar19 + 0x12e);
                            if (uVar10 != 0) {
                              piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_1098) {
                                  puVar13 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                                  goto LAB_01cba6b4;
                                }
                                uVar10 = uVar10 - 1;
                                piVar22 = piVar22 + 4;
                              } while (uVar10 != 0);
                            }
                            puVar13 = (undefined8 *)
                                      FUN_01ae9f78(plVar11,*(long *)StringLiteral_1098,0);
LAB_01cba6b4:
                            (*(code *)*puVar13)(&local_138,plVar11,iVar24,puVar13[1]);
                            if (lVar14 == 0) goto LAB_01cbb550;
                            FUN_039282dc(local_12c,fStack_128,local_124,lVar14,0);
                            lVar14 = FUN_0391fab4(lVar16,0);
                            if (DAT_03fed256 == '\0') {
                              thunk_FUN_01ad9084(
                                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                                );
                              DAT_03fed256 = '\x01';
                            }
                            if (lVar14 == 0) goto LAB_01cbb550;
                            puVar20 = *(undefined4 **)
                                       (*(long *)
                                         Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                       + 0xb8);
                            FUN_03929060(*puVar20,puVar20[1],puVar20[2],puVar20[3],lVar14,0);
                            lVar14 = FUN_0391fab4(lVar16,0);
                            if (DAT_03fed258 == '\0') {
                              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                              DAT_03fed258 = '\x01';
                            }
                            if (lVar14 == 0) goto LAB_01cbb550;
                            lVar19 = *(long *)(*(long *)
                                                Method_Mono_Security_PKCS7_EncryptedData__ctor__ +
                                              0xb8);
                            FUN_039293f4(*(undefined4 *)(lVar19 + 0xc),
                                         *(undefined4 *)(lVar19 + 0x10),
                                         *(undefined4 *)(lVar19 + 0x14),lVar14,0);
                            FUN_0391fb70(lVar16,1,0);
                            iVar24 = local_84;
                            lVar14 = *plVar11;
                            uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                            if (uVar10 != 0) {
                              piVar22 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_1098) {
                                  puVar13 = (undefined8 *)(lVar14 + (long)*piVar22 * 0x10 + 0x138);
                                  goto LAB_01cba7f8;
                                }
                                uVar10 = uVar10 - 1;
                                piVar22 = piVar22 + 4;
                              } while (uVar10 != 0);
                            }
                            puVar13 = (undefined8 *)
                                      FUN_01ae9f78(plVar11,*(long *)StringLiteral_1098,0);
LAB_01cba7f8:
                            (*(code *)*puVar13)(&local_138,plVar11,iVar24,puVar13[1]);
                            lVar14 = CONCAT44(uStack_134,local_138);
                            uVar15 = FUN_039230bc(lVar16,0);
                            if (lVar14 == 0) goto LAB_01cbb550;
                            FUN_0392316c(lVar14,uVar15,0);
                            uVar10 = FUN_01ed84c4(lVar16,&local_90,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_92__
                                                 );
                            iVar24 = local_84;
                            lVar14 = local_90;
                            if ((uVar10 & 1) == 0) {
                              uVar10 = FUN_01ed84c4(lVar16,&local_b0,
                                                    *(undefined8 *)StringLiteral_1096);
                              if ((uVar10 & 1) != 0) {
                                if (!bVar3) {
                                  if (*(long *)(param_1 + 0x30) == 0) goto LAB_01cbb550;
                                  uVar15 = FUN_0391c2b8(*(long *)(param_1 + 0x30),0);
                                  if (*(int *)(*(long *)StringLiteral_1074 + 0xe0) == 0) {
                                    thunk_FUN_01ac7298(*(long *)StringLiteral_1074);
                                  }
                                  FUN_01d08560(6,*(undefined8 *)StringLiteral_1106,uVar15,0);
                                }
                                iVar24 = local_84;
                                lVar14 = local_b0;
                                lVar19 = *plVar11;
                                uVar10 = (ulong)*(ushort *)(lVar19 + 0x12e);
                                if (uVar10 != 0) {
                                  piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_1098) {
                                      puVar13 = (undefined8 *)
                                                (lVar19 + (long)*piVar22 * 0x10 + 0x138);
                                      goto LAB_01cba9a0;
                                    }
                                    uVar10 = uVar10 - 1;
                                    piVar22 = piVar22 + 4;
                                  } while (uVar10 != 0);
                                }
                                puVar13 = (undefined8 *)
                                          FUN_01ae9f78(plVar11,*(long *)StringLiteral_1098,0);
LAB_01cba9a0:
                                (*(code *)*puVar13)(&local_138,plVar11,iVar24,puVar13[1]);
                                if (lVar14 == 0) goto LAB_01cbb550;
                                FUN_03900f94(lVar14,CONCAT44(uStack_134,local_138),0);
                                bVar3 = true;
                              }
                            }
                            else {
                              lVar19 = *plVar11;
                              uVar10 = (ulong)*(ushort *)(lVar19 + 0x12e);
                              if (uVar10 != 0) {
                                piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_1098) {
                                    puVar13 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138)
                                    ;
                                    goto LAB_01cba968;
                                  }
                                  uVar10 = uVar10 - 1;
                                  piVar22 = piVar22 + 4;
                                } while (uVar10 != 0);
                              }
                              puVar13 = (undefined8 *)
                                        FUN_01ae9f78(plVar11,*(long *)StringLiteral_1098,0);
LAB_01cba968:
                              (*(code *)*puVar13)(&local_138,plVar11,iVar24,puVar13[1]);
                              if (lVar14 == 0) goto LAB_01cbb550;
                              FUN_03900dc8(lVar14,CONCAT44(uStack_134,local_138),0);
                            }
                            uVar10 = FUN_01ed84c4(lVar16,&local_98,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_93__
                                                 );
                            iVar24 = local_84;
                            if ((uVar10 & 1) != 0) {
                              lVar14 = *plVar11;
                              uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                              if (uVar10 != 0) {
                                piVar22 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_1098) {
                                    puVar13 = (undefined8 *)(lVar14 + (long)*piVar22 * 0x10 + 0x138)
                                    ;
                                    goto LAB_01cbaa44;
                                  }
                                  uVar10 = uVar10 - 1;
                                  piVar22 = piVar22 + 4;
                                } while (uVar10 != 0);
                              }
                              puVar13 = (undefined8 *)
                                        FUN_01ae9f78(plVar11,*(long *)StringLiteral_1098,0);
LAB_01cbaa44:
                              (*(code *)*puVar13)(&local_138,plVar11,iVar24,puVar13[1]);
                              iVar24 = local_84;
                              if ((local_118 == 0) || (lVar12 == 0)) goto LAB_01cbb550;
                              lVar14 = *plVar11;
                              uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                              uVar27 = *(int *)(local_118 + 0x18) - 1;
                              if (uVar10 != 0) {
                                piVar22 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_1098) {
                                    puVar13 = (undefined8 *)(lVar14 + (long)*piVar22 * 0x10 + 0x138)
                                    ;
                                    goto LAB_01cbaac4;
                                  }
                                  uVar10 = uVar10 - 1;
                                  piVar22 = piVar22 + 4;
                                } while (uVar10 != 0);
                              }
                              puVar13 = (undefined8 *)
                                        FUN_01ae9f78(plVar11,*(long *)StringLiteral_1098,0);
LAB_01cbaac4:
                              (*(code *)*puVar13)(&local_138,plVar11,iVar24,puVar13[1]);
                              plVar8 = (long *)FUN_01b47fd0(*(undefined8 *)
                                                                                                                          
                                                  Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_9__
                                                  ,(*(int *)(lVar12 + 0x18) - local_120) + 1);
                              if ((int)uVar27 < 1) {
                                uVar23 = 0;
                              }
                              else {
                                uVar10 = 0;
                                uVar23 = 0;
                                do {
                                  iVar24 = local_84;
                                  lVar14 = *plVar11;
                                  uVar21 = (ulong)*(ushort *)(lVar14 + 0x12e);
                                  if (uVar21 != 0) {
                                    piVar22 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_1098) {
                                        puVar13 = (undefined8 *)
                                                  (lVar14 + (long)*piVar22 * 0x10 + 0x138);
                                        goto LAB_01cbab6c;
                                      }
                                      uVar21 = uVar21 - 1;
                                      piVar22 = piVar22 + 4;
                                    } while (uVar21 != 0);
                                  }
                                  puVar13 = (undefined8 *)
                                            FUN_01ae9f78(plVar11,*(long *)StringLiteral_1098,0);
LAB_01cbab6c:
                                  (*(code *)*puVar13)(&local_138,plVar11,iVar24,puVar13[1]);
                                  if (local_118 == 0) goto LAB_01cbb550;
                                  uVar21 = FUN_02af26e0(local_118,uVar10 & 0xffffffff,
                                                        *(undefined8 *)StringLiteral_1100);
                                  if ((uVar21 & 1) == 0) {
                                    if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_01cbb554;
                                    if (plVar8 == (long *)0x0) goto LAB_01cbb550;
                                    lVar14 = *(long *)(lVar12 + uVar10 * 8 + 0x20);
                                    if ((lVar14 != 0) &&
                                       (lVar19 = thunk_FUN_01afa9e0(lVar14,*(undefined8 *)
                                                                            (*plVar8 + 0x40)),
                                       lVar19 == 0)) goto LAB_01cbb558;
                                    if (*(uint *)(plVar8 + 3) <= uVar23) goto LAB_01cbb554;
                                    lVar19 = (long)(int)uVar23;
                                    plVar8[lVar19 + 4] = lVar14;
                                    uVar23 = uVar23 + 1;
                                    thunk_FUN_01b4f09c(plVar8 + lVar19 + 4,lVar14);
                                  }
                                  uVar10 = uVar10 + 1;
                                } while (uVar10 != uVar27);
                              }
                              iVar24 = local_84;
                              lVar14 = *plVar11;
                              uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                              if (uVar10 != 0) {
                                piVar22 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_1098) {
                                    puVar13 = (undefined8 *)(lVar14 + (long)*piVar22 * 0x10 + 0x138)
                                    ;
                                    goto LAB_01cbac68;
                                  }
                                  uVar10 = uVar10 - 1;
                                  piVar22 = piVar22 + 4;
                                } while (uVar10 != 0);
                              }
                              puVar13 = (undefined8 *)
                                        FUN_01ae9f78(plVar11,*(long *)StringLiteral_1098,0);
LAB_01cbac68:
                              (*(code *)*puVar13)(&local_138,plVar11,iVar24,puVar13[1]);
                              if (local_118 == 0) goto LAB_01cbb550;
                              uVar10 = FUN_02af26e0(local_118,uVar27,
                                                    *(undefined8 *)StringLiteral_1100);
                              if ((uVar10 & 1) == 0) {
                                if ((*(long *)(param_1 + 0x30) == 0) || (plVar8 == (long *)0x0))
                                goto LAB_01cbb550;
                                lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x20);
                                if ((lVar14 != 0) &&
                                   (lVar19 = thunk_FUN_01afa9e0(lVar14,*(undefined8 *)
                                                                        (*plVar8 + 0x40)),
                                   lVar19 == 0)) {
LAB_01cbb558:
                                  uVar15 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
                                  FUN_01b48050(uVar15,0);
                                }
                                if (*(uint *)(plVar8 + 3) <= uVar23) {
LAB_01cbb554:
                    /* WARNING: Subroutine does not return */
                                  FUN_01b48180();
                                }
                                lVar19 = (long)(int)uVar23;
                                plVar8[lVar19 + 4] = lVar14;
                                uVar23 = uVar23 + 1;
                                thunk_FUN_01b4f09c(plVar8 + lVar19 + 4,lVar14);
                              }
                              uVar17 = *(uint *)(lVar12 + 0x18);
                              if ((int)uVar27 < (int)uVar17) {
                                plVar26 = (long *)(lVar12 + 0x20 + (long)(int)uVar27 * 8);
                                do {
                                  if (uVar17 <= uVar27) goto LAB_01cbb554;
                                  if (plVar8 == (long *)0x0) goto LAB_01cbb550;
                                  lVar14 = *plVar26;
                                  if ((lVar14 != 0) &&
                                     (lVar19 = thunk_FUN_01afa9e0(lVar14,*(undefined8 *)
                                                                          (*plVar8 + 0x40)),
                                     lVar19 == 0)) goto LAB_01cbb558;
                                  if (*(uint *)(plVar8 + 3) <= uVar23) goto LAB_01cbb554;
                                  lVar19 = (long)(int)uVar23;
                                  plVar8[lVar19 + 4] = lVar14;
                                  uVar23 = uVar23 + 1;
                                  thunk_FUN_01b4f09c(plVar8 + lVar19 + 4,lVar14);
                                  uVar17 = *(uint *)(lVar12 + 0x18);
                                  uVar27 = uVar27 + 1;
                                  plVar26 = plVar26 + 1;
                                } while ((int)uVar27 < (int)uVar17);
                              }
                              if (local_98 == 0) goto LAB_01cbb550;
                              thunk_FUN_038fe0f8(local_98,plVar8,0);
                              plVar8 = (long *)
                                       Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              ;
                            }
                            uVar10 = FUN_01ed84c4(lVar16,&local_a0,*(undefined8 *)StringLiteral_1094
                                                 );
                            iVar24 = local_84;
                            if ((uVar10 & 1) != 0) {
                              lVar14 = *plVar11;
                              uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                              if (uVar10 != 0) {
                                piVar22 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_1098) {
                                    puVar13 = (undefined8 *)(lVar14 + (long)*piVar22 * 0x10 + 0x138)
                                    ;
                                    goto LAB_01cbadf0;
                                  }
                                  uVar10 = uVar10 - 1;
                                  piVar22 = piVar22 + 4;
                                } while (uVar10 != 0);
                              }
                              puVar13 = (undefined8 *)
                                        FUN_01ae9f78(plVar11,*(long *)StringLiteral_1098,0);
LAB_01cbadf0:
                              (*(code *)*puVar13)(&local_138,plVar11,iVar24,puVar13[1]);
                              iVar24 = local_84;
                              if ((local_130 & 1) == 0) {
                                lVar14 = *plVar11;
                                uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                                if (uVar10 != 0) {
                                  piVar22 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_1098) {
                                      puVar13 = (undefined8 *)
                                                (lVar14 + (long)*piVar22 * 0x10 + 0x138);
                                      goto LAB_01cbae64;
                                    }
                                    uVar10 = uVar10 - 1;
                                    piVar22 = piVar22 + 4;
                                  } while (uVar10 != 0);
                                }
                                puVar13 = (undefined8 *)
                                          FUN_01ae9f78(plVar11,*(long *)StringLiteral_1098,0);
LAB_01cbae64:
                                (*(code *)*puVar13)(&local_138,plVar11,iVar24,puVar13[1]);
                                if ((local_130 >> 1 & 1) != 0) goto LAB_01cbae80;
                              }
                              else {
LAB_01cbae80:
                                if ((*(long *)(param_1 + 0x48) == 0) ||
                                   (lVar14 = *(long *)(*(long *)(param_1 + 0x48) + 0x38),
                                   lVar14 == 0)) goto LAB_01cbb550;
                                iVar24 = *(int *)(lVar14 + 0x38);
                                if (iVar24 != 0) {
                                  if (iVar24 != 2) goto LAB_01cbb070;
                                  if (*(int *)(*(long *)
                                                Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                                              + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  uVar10 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove
                                                     (0);
                                  lVar14 = local_a0;
                                  if (*(int *)(*plVar8 + 0xe0) == 0) {
                                    thunk_FUN_01ac7298(*plVar8);
                                  }
                                  if ((uVar10 & 1) == 0) {
                                    FUN_03923b4c(lVar14,0);
                                  }
                                  else {
                                    FUN_03923a90();
                                  }
                                  lVar14 = FUN_01ed7044(lVar16,*(undefined8 *)StringLiteral_1090);
                                  iVar24 = local_84;
                                  lVar19 = *plVar11;
                                  uVar10 = (ulong)*(ushort *)(lVar19 + 0x12e);
                                  if (uVar10 != 0) {
                                    piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_1098) {
                                        puVar13 = (undefined8 *)
                                                  (lVar19 + (long)*piVar22 * 0x10 + 0x138);
                                        goto LAB_01cbaf90;
                                      }
                                      uVar10 = uVar10 - 1;
                                      piVar22 = piVar22 + 4;
                                    } while (uVar10 != 0);
                                  }
                                  puVar13 = (undefined8 *)
                                            FUN_01ae9f78(plVar11,*(long *)StringLiteral_1098,0);
LAB_01cbaf90:
                                  (*(code *)*puVar13)(&local_138,plVar11,iVar24,puVar13[1]);
                                  if ((CONCAT44(uStack_134,local_138) == 0) ||
                                     (UnityEngine_UIElements_UIR_GradientRemap___ctor
                                                (&local_138,CONCAT44(uStack_134,local_138),0),
                                     lVar14 == 0)) goto LAB_01cbb550;
                                  FUN_0395c1ec(local_138,uStack_134,local_130,lVar14,0);
                                  iVar24 = local_84;
                                  lVar19 = *plVar11;
                                  uVar10 = (ulong)*(ushort *)(lVar19 + 0x12e);
                                  if (uVar10 != 0) {
                                    piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_1098) {
                                        puVar13 = (undefined8 *)
                                                  (lVar19 + (long)*piVar22 * 0x10 + 0x138);
                                        goto LAB_01cbb028;
                                      }
                                      uVar10 = uVar10 - 1;
                                      piVar22 = piVar22 + 4;
                                    } while (uVar10 != 0);
                                  }
                                  puVar13 = (undefined8 *)
                                            FUN_01ae9f78(plVar11,*(long *)StringLiteral_1098,0);
LAB_01cbb028:
                                  (*(code *)*puVar13)(&local_138,plVar11,iVar24,puVar13[1]);
                                  if (CONCAT44(uStack_134,local_138) == 0) goto LAB_01cbb550;
                                  UnityEngine_UIElements_UIR_GradientRemap___ctor
                                            (&local_138,CONCAT44(uStack_134,local_138),0);
                                  FUN_0395c324(local_12c + local_12c,fStack_128 + fStack_128,
                                               local_124 + local_124,lVar14,0);
                                  goto LAB_01cbb070;
                                }
                              }
                              lVar14 = local_a0;
                              if ((local_90 == 0) ||
                                 (uVar15 = FUN_03900d8c(local_90,0), lVar14 == 0))
                              goto LAB_01cbb550;
                              FUN_0395bdc0(lVar14,uVar15,0);
                            }
LAB_01cbb070:
                            if (*(int *)(*(long *)
                                          Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                                        + 0xe0) == 0) {
                              thunk_FUN_01ac7298();
                            }
                            uVar10 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove
                                               (0);
                            if (((uVar10 & 1) != 0) &&
                               (uVar10 = FUN_01ed84c4(lVar16,&local_b8,
                                                      *(undefined8 *)StringLiteral_1091),
                               (uVar10 & 1) != 0)) {
                              if (local_b8 == 0) goto LAB_01cbb550;
                              *(undefined1 *)(local_b8 + 0x20) = 1;
                            }
                            uVar10 = FUN_01ed84c4(lVar16,&local_a8,*(undefined8 *)StringLiteral_1092
                                                 );
                            if ((uVar10 & 1) != 0) {
                              if ((*(long *)(param_1 + 0x30) == 0) || (local_a8 == 0))
                              goto LAB_01cbb550;
                              *(undefined8 *)(local_a8 + 0x20) =
                                   *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
                              thunk_FUN_01b4f09c();
                              if ((*(long *)(param_1 + 0x30) == 0) || (local_a8 == 0))
                              goto LAB_01cbb550;
                              *(undefined8 *)(local_a8 + 0x30) =
                                   *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30);
                              thunk_FUN_01b4f09c();
                              if ((*(long *)(param_1 + 0x30) == 0) || (local_a8 == 0))
                              goto LAB_01cbb550;
                              *(undefined8 *)(local_a8 + 0x38) =
                                   *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38);
                              thunk_FUN_01b4f09c();
                              lVar14 = *(long *)(param_1 + 0x30);
                              if ((lVar14 == 0) || (local_a8 == 0)) goto LAB_01cbb550;
                              *(uint *)(local_a8 + 0x5c) =
                                   *(int *)(lVar14 + 0x5c) - (uint)(0 < *(int *)(lVar14 + 0x5c));
                              uVar2 = *(undefined1 *)(lVar14 + 0x80);
                              *(undefined4 *)(local_a8 + 0x98) = 1;
                              *(undefined1 *)(local_a8 + 0x80) = uVar2;
                            }
                            iVar24 = local_84;
                            lVar14 = *plVar11;
                            uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                            if (uVar10 != 0) {
                              piVar22 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_1098) {
                                  puVar13 = (undefined8 *)(lVar14 + (long)*piVar22 * 0x10 + 0x138);
                                  goto LAB_01cbb1bc;
                                }
                                uVar10 = uVar10 - 1;
                                piVar22 = piVar22 + 4;
                              } while (uVar10 != 0);
                            }
                            puVar13 = (undefined8 *)
                                      FUN_01ae9f78(plVar11,*(long *)StringLiteral_1098,0);
LAB_01cbb1bc:
                            (*(code *)*puVar13)(&local_138,plVar11,iVar24,puVar13[1]);
                            plVar26 = (long *)StringLiteral_1097;
                            if (local_130 != 0) {
                              if ((*(long *)(param_1 + 0x48) == 0) ||
                                 (lVar14 = *(long *)(*(long *)(param_1 + 0x48) + 0x38), lVar14 == 0)
                                 ) goto LAB_01cbb550;
                              if (*(int *)(lVar14 + 0x38) == 1) {
                                FUN_0391fb70(lVar16,0,0);
                              }
                            }
                            local_84 = local_84 + 1;
                            goto LAB_01cba504;
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
        goto LAB_01cbb550;
      }
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_01cbb550;
      uVar15 = FUN_0391c2b8(*(long *)(param_1 + 0x30),0);
      if (*(int *)(*(long *)StringLiteral_1074 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)StringLiteral_1074);
      }
      FUN_01d08560(7,*(undefined8 *)StringLiteral_1102,uVar15,0);
      lVar18 = *(long *)(param_1 + 0x28);
      uVar15 = *(undefined8 *)(param_1 + 0x30);
      uVar25 = *(undefined8 *)(param_1 + 0x20);
      uVar9 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_1043);
      local_108 = 0;
      uStack_100 = 0;
      local_110 = 0;
      puVar13 = &local_110;
    }
    else {
      lVar18 = *(long *)(param_1 + 0x28);
      uVar15 = *(undefined8 *)(param_1 + 0x30);
      uVar25 = *(undefined8 *)(param_1 + 0x20);
      uVar9 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_1043);
      local_f0 = 0;
      uStack_e8 = 0;
      local_f8 = 0;
      puVar13 = &local_f8;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    plVar8 = *(long **)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar8 != (long *)0x0) {
      lVar18 = *plVar8;
      bVar1 = *(byte *)(*(long *)StringLiteral_1010 + 0x130);
      if ((*(byte *)(lVar18 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_1010)
         ) {
        bVar1 = *(byte *)(*(long *)StringLiteral_1011 + 0x130);
        if ((*(byte *)(lVar18 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_1011)) goto LAB_01cba1ac;
        uVar15 = FUN_01d087a4(plVar8,0);
      }
      else {
        uVar15 = FUN_01d082b4(plVar8,0);
      }
      *(undefined8 *)(param_1 + 0x48) = uVar15;
      thunk_FUN_01b4f09c();
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_01cbb550;
      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28) = *(undefined8 *)(param_1 + 0x48);
      thunk_FUN_01b4f09c();
      goto LAB_01cba214;
    }
LAB_01cba1ac:
    if (*(int *)(*(long *)StringLiteral_1074 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_01d08560(7,*(undefined8 *)StringLiteral_1105,0,0);
    lVar18 = *(long *)(param_1 + 0x28);
    uVar15 = *(undefined8 *)(param_1 + 0x30);
    uVar25 = *(undefined8 *)(param_1 + 0x20);
    uVar9 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_1043);
    puVar13 = &local_e0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e0 = 0;
  }
  FUN_01cb6400(uVar9,uVar15,puVar13,0,uVar25);
  if (lVar18 != 0) {
    FUN_01cb8d90(lVar18,uVar9);
    return 0;
  }
LAB_01cbb550:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_01cbb368:
  lVar12 = *plVar11;
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *plVar26) {
        puVar13 = (undefined8 *)(lVar12 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_01cbb3b4;
      }
      uVar10 = uVar10 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar10 != 0);
  }
  puVar13 = (undefined8 *)FUN_01ae9f78(plVar11,*plVar26,0);
LAB_01cbb3b4:
  iVar7 = (*(code *)*puVar13)(plVar11,puVar13[1]);
  if (iVar7 <= iVar24) {
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03958108(0);
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar15 = *(undefined8 *)(param_1 + 0x30);
      lVar12 = FUN_01d07884(*(long *)(param_1 + 0x48),0);
      if (lVar12 != 0) {
        local_140 = *(undefined8 *)(lVar12 + 0x4c);
        uStack_148 = *(undefined8 *)(lVar12 + 0x44);
        local_150 = *(undefined8 *)(lVar12 + 0x3c);
        uVar25 = *(undefined8 *)(param_1 + 0x20);
        uVar9 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_1043);
        FUN_01cb6400(uVar9,uVar15,&local_150,lVar18,uVar25);
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_01cb8d90(*(long *)(param_1 + 0x28),uVar9);
          if (*(char *)(param_1 + 0x41) == '\0') {
            return 0;
          }
          if ((*(long *)(param_1 + 0x30) != 0) &&
             (lVar18 = FUN_0391c2b8(*(long *)(param_1 + 0x30),0), lVar18 != 0)) {
            FUN_0391fb70(lVar18,0,0);
            return 0;
          }
        }
      }
    }
    goto LAB_01cbb550;
  }
  lVar12 = FUN_0391fab4(lVar18,0);
  if ((lVar12 == 0) || (lVar12 = FUN_0392a9fc(lVar12,iVar24,0), lVar12 == 0)) goto LAB_01cbb550;
  lVar12 = FUN_0391c2b8(lVar12,0);
  uVar25 = FUN_01cbb780();
  if (lVar12 == 0) goto LAB_01cbb550;
  uVar10 = FUN_01ed84c4(lVar12,&local_c0,*(undefined8 *)puVar6);
  uVar28 = 0;
  if ((uVar10 & 1) != 0) {
    if (*(char *)(param_1 + 0x40) == '\0') {
      if (local_c0 == 0) goto LAB_01cbb550;
      uVar28 = FUN_0395a1d0(local_c0,0);
    }
    else {
      uVar28 = FUN_01cbbaec(uVar15,uVar9,uVar25,lVar12);
      if (local_c0 == 0) goto LAB_01cbb550;
      FUN_0395a20c(local_c0,0);
    }
  }
  uVar10 = FUN_01ed84c4(lVar12,&local_c8,*(undefined8 *)puVar5);
  if ((uVar10 & 1) == 0) {
    local_c8 = FUN_01ed7044(lVar12,*(undefined8 *)puVar4);
  }
  if (local_c8 == 0) goto LAB_01cbb550;
  iVar24 = iVar24 + 1;
  *(int *)(local_c8 + 0x20) = (int)uVar15;
  *(int *)(local_c8 + 0x24) = (int)uVar9;
  *(undefined4 *)(local_c8 + 0x28) = uVar28;
  *(int *)(local_c8 + 0x2c) = (int)uVar25;
  goto LAB_01cbb368;
}


