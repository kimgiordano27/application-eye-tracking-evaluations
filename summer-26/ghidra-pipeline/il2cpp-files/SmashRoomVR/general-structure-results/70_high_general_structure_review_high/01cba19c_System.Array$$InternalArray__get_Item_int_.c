/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<int>
ENTRY_POINT: 01cba19c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


undefined8 System_Array__InternalArray__get_Item<int>(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  undefined4 *puVar19;
  ulong uVar20;
  long in_x10;
  int *piVar21;
  long in_x11;
  uint uVar22;
  int iVar23;
  undefined8 uVar24;
  long *plVar25;
  uint uVar26;
  long unaff_x29;
  undefined4 uVar27;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  uint uStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  int in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  if (*(long *)(param_1 + in_x11 * 8 + -8) == in_x10) {
    uVar15 = FUN_01d087a4(param_2,0);
    *(undefined8 *)(unaff_x29 + 0x48) = uVar15;
    thunk_FUN_01b4f09c();
    if (*(long *)(unaff_x29 + 0x28) == 0) goto LAB_01cbb550;
    *(undefined8 *)(*(long *)(unaff_x29 + 0x28) + 0x28) = *(undefined8 *)(unaff_x29 + 0x48);
    thunk_FUN_01b4f09c();
    if (*(long *)(unaff_x29 + 0x48) == 0) goto LAB_01cbb550;
    uVar8 = FUN_01d078c8(*(long *)(unaff_x29 + 0x48),0);
    plVar14 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if ((uVar8 & 1) == 0) {
      *(undefined8 *)(unaff_x29 + 0x18) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(unaff_x29 + 0x18),0);
      *(undefined4 *)(unaff_x29 + 0x10) = 1;
      return 1;
    }
    uVar15 = *(undefined8 *)(unaff_x29 + 0x30);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_03922f24(uVar15,0,0);
    if ((uVar8 & 1) == 0) {
      if (*(long *)(unaff_x29 + 0x48) == 0) goto LAB_01cbb550;
      lVar9 = FUN_01d07884(*(long *)(unaff_x29 + 0x48),0);
      if (lVar9 != 0) {
        if (*(long *)(unaff_x29 + 0x48) != 0) {
          uVar8 = FUN_01d078e0(*(long *)(unaff_x29 + 0x48),0);
          if ((uVar8 & 1) != 0) {
            if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
            uVar15 = FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0);
            if (*(int *)(*(long *)StringLiteral_1074 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)StringLiteral_1074);
            }
            FUN_01d08560(7,*(undefined8 *)StringLiteral_1101,uVar15,0);
          }
          if ((*(long *)(unaff_x29 + 0x48) != 0) &&
             (lVar9 = FUN_01d07884(*(long *)(unaff_x29 + 0x48),0), lVar9 != 0)) {
            plVar10 = (long *)FUN_01d09054(lVar9,0);
            if ((*(long *)(unaff_x29 + 0x30) != 0) &&
               (lVar9 = FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0), lVar9 != 0)) {
              uVar15 = FUN_039230bc(lVar9,0);
              uVar15 = FUN_02edd6e8(uVar15,*(undefined8 *)StringLiteral_1104,0);
              lVar9 = thunk_FUN_01afaadc(*(undefined8 *)
                                          Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__
                                        );
              FUN_0391fe00(lVar9,uVar15,0);
              if (lVar9 != 0) {
                lVar11 = FUN_0391fab4(lVar9,0);
                lVar16 = *(long *)(unaff_x29 + 0x38);
                if (lVar16 == 0) {
                  if ((*(long *)(unaff_x29 + 0x30) == 0) ||
                     (lVar16 = FUN_0391c27c(*(long *)(unaff_x29 + 0x30),0), lVar16 == 0))
                  goto LAB_01cbb550;
                  lVar16 = FUN_03928c2c(lVar16,0);
                }
                if (lVar11 != 0) {
                  FUN_03929660(lVar11,lVar16,0,0);
                  lVar11 = FUN_0391fab4(lVar9,0);
                  if (((*(long *)(unaff_x29 + 0x30) != 0) &&
                      (lVar16 = FUN_0391c27c(*(long *)(unaff_x29 + 0x30),0), lVar16 != 0)) &&
                     (FUN_03928d34(lVar16,0), lVar11 != 0)) {
                    FUN_03928dd4(lVar11,0);
                    lVar11 = FUN_0391fab4(lVar9,0);
                    if (((*(long *)(unaff_x29 + 0x30) != 0) &&
                        (lVar16 = FUN_0391c27c(*(long *)(unaff_x29 + 0x30),0), lVar16 != 0)) &&
                       (FUN_039274a0(lVar16,0), lVar11 != 0)) {
                      FUN_03928f54(lVar11,0);
                      lVar11 = FUN_0391fab4(lVar9,0);
                      if (DAT_03fed258 == '\0') {
                        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                        DAT_03fed258 = '\x01';
                      }
                      if (lVar11 != 0) {
                        lVar16 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__
                                          + 0xb8);
                        FUN_039293f4(*(undefined4 *)(lVar16 + 0xc),*(undefined4 *)(lVar16 + 0x10),
                                     *(undefined4 *)(lVar16 + 0x14),lVar11,0);
                        if ((*(long *)(unaff_x29 + 0x30) != 0) &&
                           (lVar11 = FUN_01e8a9f8(*(long *)(unaff_x29 + 0x30),
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__
                                                 ), lVar11 != 0)) {
                          lVar11 = FUN_038fe900(lVar11,0);
                          in_stack_000000e8._4_4_ = 0;
                          if (plVar10 != (long *)0x0) {
                            bVar2 = false;
                            plVar25 = (long *)StringLiteral_1097;
LAB_01cba504:
                            iVar23 = in_stack_000000e8._4_4_;
                            lVar16 = *plVar10;
                            uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
                            if (uVar8 != 0) {
                              piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar21 + -2) == *plVar25) {
                                  puVar12 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
                                  goto LAB_01cba550;
                                }
                                uVar8 = uVar8 - 1;
                                piVar21 = piVar21 + 4;
                              } while (uVar8 != 0);
                            }
                            puVar12 = (undefined8 *)FUN_01ae9f78(plVar10,*plVar25,0);
LAB_01cba550:
                            iVar6 = (*(code *)*puVar12)(plVar10,puVar12[1]);
                            if (iVar6 <= iVar23) {
                              if (*(char *)(unaff_x29 + 0x40) == '\0') {
                                uVar15 = 0;
                              }
                              else {
                                if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
                                FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0);
                                uVar15 = FUN_01cbb564();
                              }
                              uVar7 = FUN_01cbb66c(lVar9);
                              puVar5 = StringLiteral_1095;
                              puVar4 = StringLiteral_1093;
                              puVar3 = StringLiteral_1047;
                              iVar23 = 0;
                              goto LAB_01cbb368;
                            }
                            if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
                            uVar15 = *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x30);
                            if (*(int *)(*plVar14 + 0xe0) == 0) {
                              thunk_FUN_01ac7298();
                            }
                            uVar8 = FUN_0391f968(uVar15,0,0);
                            lVar16 = *(long *)(unaff_x29 + 0x30);
                            if (lVar16 == 0) goto LAB_01cbb550;
                            if ((uVar8 & 1) == 0) {
                              uVar15 = FUN_0391c2b8(lVar16,0);
                            }
                            else {
                              uVar15 = *(undefined8 *)(lVar16 + 0x30);
                            }
                            if (*(int *)(*plVar14 + 0xe0) == 0) {
                              thunk_FUN_01ac7298();
                            }
                            lVar16 = FUN_01f25754(uVar15,*(undefined8 *)
                                                                                                                    
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__
                                                 );
                            uVar15 = FUN_0303de64((long)&stack0x000000e8 + 4,0);
                            uVar15 = FUN_02edd6e8(*(undefined8 *)StringLiteral_1103,uVar15,0);
                            if (lVar16 == 0) goto LAB_01cbb550;
                            FUN_0392316c(lVar16,uVar15,0);
                            lVar13 = FUN_0391fab4(lVar16,0);
                            uVar15 = FUN_0391fab4(lVar9,0);
                            if (lVar13 == 0) goto LAB_01cbb550;
                            FUN_03929660(lVar13,uVar15,0,0);
                            lVar13 = FUN_0391fab4(lVar16,0);
                            iVar23 = in_stack_000000e8._4_4_;
                            lVar18 = *plVar10;
                            uVar8 = (ulong)*(ushort *)(lVar18 + 0x12e);
                            if (uVar8 != 0) {
                              piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_1098) {
                                  puVar12 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                                  goto LAB_01cba6b4;
                                }
                                uVar8 = uVar8 - 1;
                                piVar21 = piVar21 + 4;
                              } while (uVar8 != 0);
                            }
                            puVar12 = (undefined8 *)
                                      FUN_01ae9f78(plVar10,*(long *)StringLiteral_1098,0);
LAB_01cba6b4:
                            (*(code *)*puVar12)(&stack0x00000038,plVar10,iVar23,puVar12[1]);
                            if (lVar13 == 0) goto LAB_01cbb550;
                            FUN_039282dc(fStack0000000000000044,fStack0000000000000048,
                                         fStack000000000000004c,lVar13,0);
                            lVar13 = FUN_0391fab4(lVar16,0);
                            if (DAT_03fed256 == '\0') {
                              thunk_FUN_01ad9084(
                                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                                );
                              DAT_03fed256 = '\x01';
                            }
                            if (lVar13 == 0) goto LAB_01cbb550;
                            puVar19 = *(undefined4 **)
                                       (*(long *)
                                         Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                       + 0xb8);
                            FUN_03929060(*puVar19,puVar19[1],puVar19[2],puVar19[3],lVar13,0);
                            lVar13 = FUN_0391fab4(lVar16,0);
                            if (DAT_03fed258 == '\0') {
                              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                              DAT_03fed258 = '\x01';
                            }
                            if (lVar13 == 0) goto LAB_01cbb550;
                            lVar18 = *(long *)(*(long *)
                                                Method_Mono_Security_PKCS7_EncryptedData__ctor__ +
                                              0xb8);
                            FUN_039293f4(*(undefined4 *)(lVar18 + 0xc),
                                         *(undefined4 *)(lVar18 + 0x10),
                                         *(undefined4 *)(lVar18 + 0x14),lVar13,0);
                            FUN_0391fb70(lVar16,1,0);
                            iVar23 = in_stack_000000e8._4_4_;
                            lVar13 = *plVar10;
                            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
                            if (uVar8 != 0) {
                              piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_1098) {
                                  puVar12 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                                  goto LAB_01cba7f8;
                                }
                                uVar8 = uVar8 - 1;
                                piVar21 = piVar21 + 4;
                              } while (uVar8 != 0);
                            }
                            puVar12 = (undefined8 *)
                                      FUN_01ae9f78(plVar10,*(long *)StringLiteral_1098,0);
LAB_01cba7f8:
                            (*(code *)*puVar12)(&stack0x00000038,plVar10,iVar23,puVar12[1]);
                            lVar13 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
                            uVar15 = FUN_039230bc(lVar16,0);
                            if (lVar13 == 0) goto LAB_01cbb550;
                            FUN_0392316c(lVar13,uVar15,0);
                            uVar8 = FUN_01ed84c4(lVar16,&stack0x000000e0,
                                                 *(undefined8 *)
                                                  Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_92__
                                                );
                            iVar23 = in_stack_000000e8._4_4_;
                            lVar13 = in_stack_000000e0;
                            if ((uVar8 & 1) == 0) {
                              uVar8 = FUN_01ed84c4(lVar16,&stack0x000000c0,
                                                   *(undefined8 *)StringLiteral_1096);
                              if ((uVar8 & 1) != 0) {
                                if (!bVar2) {
                                  if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
                                  uVar15 = FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0);
                                  if (*(int *)(*(long *)StringLiteral_1074 + 0xe0) == 0) {
                                    thunk_FUN_01ac7298(*(long *)StringLiteral_1074);
                                  }
                                  FUN_01d08560(6,*(undefined8 *)StringLiteral_1106,uVar15,0);
                                }
                                iVar23 = in_stack_000000e8._4_4_;
                                lVar13 = in_stack_000000c0;
                                lVar18 = *plVar10;
                                uVar8 = (ulong)*(ushort *)(lVar18 + 0x12e);
                                if (uVar8 != 0) {
                                  piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_1098) {
                                      puVar12 = (undefined8 *)
                                                (lVar18 + (long)*piVar21 * 0x10 + 0x138);
                                      goto LAB_01cba9a0;
                                    }
                                    uVar8 = uVar8 - 1;
                                    piVar21 = piVar21 + 4;
                                  } while (uVar8 != 0);
                                }
                                puVar12 = (undefined8 *)
                                          FUN_01ae9f78(plVar10,*(long *)StringLiteral_1098,0);
LAB_01cba9a0:
                                (*(code *)*puVar12)(&stack0x00000038,plVar10,iVar23,puVar12[1]);
                                if (lVar13 == 0) goto LAB_01cbb550;
                                FUN_03900f94(lVar13,CONCAT44(uStack000000000000003c,
                                                             uStack0000000000000038),0);
                                bVar2 = true;
                              }
                            }
                            else {
                              lVar18 = *plVar10;
                              uVar8 = (ulong)*(ushort *)(lVar18 + 0x12e);
                              if (uVar8 != 0) {
                                piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_1098) {
                                    puVar12 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138)
                                    ;
                                    goto LAB_01cba968;
                                  }
                                  uVar8 = uVar8 - 1;
                                  piVar21 = piVar21 + 4;
                                } while (uVar8 != 0);
                              }
                              puVar12 = (undefined8 *)
                                        FUN_01ae9f78(plVar10,*(long *)StringLiteral_1098,0);
LAB_01cba968:
                              (*(code *)*puVar12)(&stack0x00000038,plVar10,iVar23,puVar12[1]);
                              if (lVar13 == 0) goto LAB_01cbb550;
                              FUN_03900dc8(lVar13,CONCAT44(uStack000000000000003c,
                                                           uStack0000000000000038),0);
                            }
                            uVar8 = FUN_01ed84c4(lVar16,&stack0x000000d8,
                                                 *(undefined8 *)
                                                  Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_93__
                                                );
                            iVar23 = in_stack_000000e8._4_4_;
                            if ((uVar8 & 1) != 0) {
                              lVar13 = *plVar10;
                              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
                              if (uVar8 != 0) {
                                piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_1098) {
                                    puVar12 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138)
                                    ;
                                    goto LAB_01cbaa44;
                                  }
                                  uVar8 = uVar8 - 1;
                                  piVar21 = piVar21 + 4;
                                } while (uVar8 != 0);
                              }
                              puVar12 = (undefined8 *)
                                        FUN_01ae9f78(plVar10,*(long *)StringLiteral_1098,0);
LAB_01cbaa44:
                              (*(code *)*puVar12)(&stack0x00000038,plVar10,iVar23,puVar12[1]);
                              iVar23 = in_stack_000000e8._4_4_;
                              if ((in_stack_00000058 == 0) || (lVar11 == 0)) goto LAB_01cbb550;
                              lVar13 = *plVar10;
                              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
                              uVar26 = *(int *)(in_stack_00000058 + 0x18) - 1;
                              if (uVar8 != 0) {
                                piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_1098) {
                                    puVar12 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138)
                                    ;
                                    goto LAB_01cbaac4;
                                  }
                                  uVar8 = uVar8 - 1;
                                  piVar21 = piVar21 + 4;
                                } while (uVar8 != 0);
                              }
                              puVar12 = (undefined8 *)
                                        FUN_01ae9f78(plVar10,*(long *)StringLiteral_1098,0);
LAB_01cbaac4:
                              (*(code *)*puVar12)(&stack0x00000038,plVar10,iVar23,puVar12[1]);
                              plVar14 = (long *)FUN_01b47fd0(*(undefined8 *)
                                                                                                                            
                                                  Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_9__
                                                  ,(*(int *)(lVar11 + 0x18) - in_stack_00000050) + 1
                                                  );
                              if ((int)uVar26 < 1) {
                                uVar22 = 0;
                              }
                              else {
                                uVar8 = 0;
                                uVar22 = 0;
                                do {
                                  iVar23 = in_stack_000000e8._4_4_;
                                  lVar13 = *plVar10;
                                  uVar20 = (ulong)*(ushort *)(lVar13 + 0x12e);
                                  if (uVar20 != 0) {
                                    piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_1098) {
                                        puVar12 = (undefined8 *)
                                                  (lVar13 + (long)*piVar21 * 0x10 + 0x138);
                                        goto LAB_01cbab6c;
                                      }
                                      uVar20 = uVar20 - 1;
                                      piVar21 = piVar21 + 4;
                                    } while (uVar20 != 0);
                                  }
                                  puVar12 = (undefined8 *)
                                            FUN_01ae9f78(plVar10,*(long *)StringLiteral_1098,0);
LAB_01cbab6c:
                                  (*(code *)*puVar12)(&stack0x00000038,plVar10,iVar23,puVar12[1]);
                                  if (in_stack_00000058 == 0) goto LAB_01cbb550;
                                  uVar20 = FUN_02af26e0(in_stack_00000058,uVar8 & 0xffffffff,
                                                        *(undefined8 *)StringLiteral_1100);
                                  if ((uVar20 & 1) == 0) {
                                    if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_01cbb554;
                                    if (plVar14 == (long *)0x0) goto LAB_01cbb550;
                                    lVar13 = *(long *)(lVar11 + uVar8 * 8 + 0x20);
                                    if ((lVar13 != 0) &&
                                       (lVar18 = thunk_FUN_01afa9e0(lVar13,*(undefined8 *)
                                                                            (*plVar14 + 0x40)),
                                       lVar18 == 0)) goto LAB_01cbb558;
                                    if (*(uint *)(plVar14 + 3) <= uVar22) goto LAB_01cbb554;
                                    lVar18 = (long)(int)uVar22;
                                    plVar14[lVar18 + 4] = lVar13;
                                    uVar22 = uVar22 + 1;
                                    thunk_FUN_01b4f09c(plVar14 + lVar18 + 4,lVar13);
                                  }
                                  uVar8 = uVar8 + 1;
                                } while (uVar8 != uVar26);
                              }
                              iVar23 = in_stack_000000e8._4_4_;
                              lVar13 = *plVar10;
                              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
                              if (uVar8 != 0) {
                                piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_1098) {
                                    puVar12 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138)
                                    ;
                                    goto LAB_01cbac68;
                                  }
                                  uVar8 = uVar8 - 1;
                                  piVar21 = piVar21 + 4;
                                } while (uVar8 != 0);
                              }
                              puVar12 = (undefined8 *)
                                        FUN_01ae9f78(plVar10,*(long *)StringLiteral_1098,0);
LAB_01cbac68:
                              (*(code *)*puVar12)(&stack0x00000038,plVar10,iVar23,puVar12[1]);
                              if (in_stack_00000058 == 0) goto LAB_01cbb550;
                              uVar8 = FUN_02af26e0(in_stack_00000058,uVar26,
                                                   *(undefined8 *)StringLiteral_1100);
                              if ((uVar8 & 1) == 0) {
                                if ((*(long *)(unaff_x29 + 0x30) == 0) || (plVar14 == (long *)0x0))
                                goto LAB_01cbb550;
                                lVar13 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x20);
                                if ((lVar13 != 0) &&
                                   (lVar18 = thunk_FUN_01afa9e0(lVar13,*(undefined8 *)
                                                                        (*plVar14 + 0x40)),
                                   lVar18 == 0)) {
LAB_01cbb558:
                                  uVar15 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
                                  FUN_01b48050(uVar15,0);
                                }
                                if (*(uint *)(plVar14 + 3) <= uVar22) {
LAB_01cbb554:
                    /* WARNING: Subroutine does not return */
                                  FUN_01b48180();
                                }
                                lVar18 = (long)(int)uVar22;
                                plVar14[lVar18 + 4] = lVar13;
                                uVar22 = uVar22 + 1;
                                thunk_FUN_01b4f09c(plVar14 + lVar18 + 4,lVar13);
                              }
                              uVar17 = *(uint *)(lVar11 + 0x18);
                              if ((int)uVar26 < (int)uVar17) {
                                plVar25 = (long *)(lVar11 + 0x20 + (long)(int)uVar26 * 8);
                                do {
                                  if (uVar17 <= uVar26) goto LAB_01cbb554;
                                  if (plVar14 == (long *)0x0) goto LAB_01cbb550;
                                  lVar13 = *plVar25;
                                  if ((lVar13 != 0) &&
                                     (lVar18 = thunk_FUN_01afa9e0(lVar13,*(undefined8 *)
                                                                          (*plVar14 + 0x40)),
                                     lVar18 == 0)) goto LAB_01cbb558;
                                  if (*(uint *)(plVar14 + 3) <= uVar22) goto LAB_01cbb554;
                                  lVar18 = (long)(int)uVar22;
                                  plVar14[lVar18 + 4] = lVar13;
                                  uVar22 = uVar22 + 1;
                                  thunk_FUN_01b4f09c(plVar14 + lVar18 + 4,lVar13);
                                  uVar17 = *(uint *)(lVar11 + 0x18);
                                  uVar26 = uVar26 + 1;
                                  plVar25 = plVar25 + 1;
                                } while ((int)uVar26 < (int)uVar17);
                              }
                              if (in_stack_000000d8 == 0) goto LAB_01cbb550;
                              thunk_FUN_038fe0f8(in_stack_000000d8,plVar14,0);
                              plVar14 = (long *)
                                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              ;
                            }
                            uVar8 = FUN_01ed84c4(lVar16,&stack0x000000d0,
                                                 *(undefined8 *)StringLiteral_1094);
                            iVar23 = in_stack_000000e8._4_4_;
                            if ((uVar8 & 1) != 0) {
                              lVar13 = *plVar10;
                              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
                              if (uVar8 != 0) {
                                piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_1098) {
                                    puVar12 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138)
                                    ;
                                    goto LAB_01cbadf0;
                                  }
                                  uVar8 = uVar8 - 1;
                                  piVar21 = piVar21 + 4;
                                } while (uVar8 != 0);
                              }
                              puVar12 = (undefined8 *)
                                        FUN_01ae9f78(plVar10,*(long *)StringLiteral_1098,0);
LAB_01cbadf0:
                              (*(code *)*puVar12)(&stack0x00000038,plVar10,iVar23,puVar12[1]);
                              iVar23 = in_stack_000000e8._4_4_;
                              if ((uStack0000000000000040 & 1) == 0) {
                                lVar13 = *plVar10;
                                uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
                                if (uVar8 != 0) {
                                  piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_1098) {
                                      puVar12 = (undefined8 *)
                                                (lVar13 + (long)*piVar21 * 0x10 + 0x138);
                                      goto LAB_01cbae64;
                                    }
                                    uVar8 = uVar8 - 1;
                                    piVar21 = piVar21 + 4;
                                  } while (uVar8 != 0);
                                }
                                puVar12 = (undefined8 *)
                                          FUN_01ae9f78(plVar10,*(long *)StringLiteral_1098,0);
LAB_01cbae64:
                                (*(code *)*puVar12)(&stack0x00000038,plVar10,iVar23,puVar12[1]);
                                if ((uStack0000000000000040 >> 1 & 1) != 0) goto LAB_01cbae80;
                              }
                              else {
LAB_01cbae80:
                                if ((*(long *)(unaff_x29 + 0x48) == 0) ||
                                   (lVar13 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38),
                                   lVar13 == 0)) goto LAB_01cbb550;
                                iVar23 = *(int *)(lVar13 + 0x38);
                                if (iVar23 != 0) {
                                  if (iVar23 != 2) goto LAB_01cbb070;
                                  if (*(int *)(*(long *)
                                                Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                                              + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  uVar8 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove
                                                    (0);
                                  lVar13 = in_stack_000000d0;
                                  if (*(int *)(*plVar14 + 0xe0) == 0) {
                                    thunk_FUN_01ac7298(*plVar14);
                                  }
                                  if ((uVar8 & 1) == 0) {
                                    FUN_03923b4c(lVar13,0);
                                  }
                                  else {
                                    FUN_03923a90();
                                  }
                                  lVar13 = FUN_01ed7044(lVar16,*(undefined8 *)StringLiteral_1090);
                                  iVar23 = in_stack_000000e8._4_4_;
                                  lVar18 = *plVar10;
                                  uVar8 = (ulong)*(ushort *)(lVar18 + 0x12e);
                                  if (uVar8 != 0) {
                                    piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_1098) {
                                        puVar12 = (undefined8 *)
                                                  (lVar18 + (long)*piVar21 * 0x10 + 0x138);
                                        goto LAB_01cbaf90;
                                      }
                                      uVar8 = uVar8 - 1;
                                      piVar21 = piVar21 + 4;
                                    } while (uVar8 != 0);
                                  }
                                  puVar12 = (undefined8 *)
                                            FUN_01ae9f78(plVar10,*(long *)StringLiteral_1098,0);
LAB_01cbaf90:
                                  (*(code *)*puVar12)(&stack0x00000038,plVar10,iVar23,puVar12[1]);
                                  if ((CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0)
                                     || (UnityEngine_UIElements_UIR_GradientRemap___ctor
                                                   (&stack0x00000038,
                                                    CONCAT44(uStack000000000000003c,
                                                             uStack0000000000000038),0), lVar13 == 0
                                        )) goto LAB_01cbb550;
                                  FUN_0395c1ec(uStack0000000000000038,uStack000000000000003c,
                                               uStack0000000000000040,lVar13,0);
                                  iVar23 = in_stack_000000e8._4_4_;
                                  lVar18 = *plVar10;
                                  uVar8 = (ulong)*(ushort *)(lVar18 + 0x12e);
                                  if (uVar8 != 0) {
                                    piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_1098) {
                                        puVar12 = (undefined8 *)
                                                  (lVar18 + (long)*piVar21 * 0x10 + 0x138);
                                        goto LAB_01cbb028;
                                      }
                                      uVar8 = uVar8 - 1;
                                      piVar21 = piVar21 + 4;
                                    } while (uVar8 != 0);
                                  }
                                  puVar12 = (undefined8 *)
                                            FUN_01ae9f78(plVar10,*(long *)StringLiteral_1098,0);
LAB_01cbb028:
                                  (*(code *)*puVar12)(&stack0x00000038,plVar10,iVar23,puVar12[1]);
                                  if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0)
                                  goto LAB_01cbb550;
                                  UnityEngine_UIElements_UIR_GradientRemap___ctor
                                            (&stack0x00000038,
                                             CONCAT44(uStack000000000000003c,uStack0000000000000038)
                                             ,0);
                                  FUN_0395c324(fStack0000000000000044 + fStack0000000000000044,
                                               fStack0000000000000048 + fStack0000000000000048,
                                               fStack000000000000004c + fStack000000000000004c,
                                               lVar13,0);
                                  goto LAB_01cbb070;
                                }
                              }
                              lVar13 = in_stack_000000d0;
                              if ((in_stack_000000e0 == 0) ||
                                 (uVar15 = FUN_03900d8c(in_stack_000000e0,0), lVar13 == 0))
                              goto LAB_01cbb550;
                              FUN_0395bdc0(lVar13,uVar15,0);
                            }
LAB_01cbb070:
                            if (*(int *)(*(long *)
                                          Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                                        + 0xe0) == 0) {
                              thunk_FUN_01ac7298();
                            }
                            uVar8 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove
                                              (0);
                            if (((uVar8 & 1) != 0) &&
                               (uVar8 = FUN_01ed84c4(lVar16,&stack0x000000b8,
                                                     *(undefined8 *)StringLiteral_1091),
                               (uVar8 & 1) != 0)) {
                              if (in_stack_000000b8 == 0) goto LAB_01cbb550;
                              *(undefined1 *)(in_stack_000000b8 + 0x20) = 1;
                            }
                            uVar8 = FUN_01ed84c4(lVar16,&stack0x000000c8,
                                                 *(undefined8 *)StringLiteral_1092);
                            if ((uVar8 & 1) != 0) {
                              if ((*(long *)(unaff_x29 + 0x30) == 0) || (in_stack_000000c8 == 0))
                              goto LAB_01cbb550;
                              *(undefined8 *)(in_stack_000000c8 + 0x20) =
                                   *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x20);
                              thunk_FUN_01b4f09c();
                              if ((*(long *)(unaff_x29 + 0x30) == 0) || (in_stack_000000c8 == 0))
                              goto LAB_01cbb550;
                              *(undefined8 *)(in_stack_000000c8 + 0x30) =
                                   *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x30);
                              thunk_FUN_01b4f09c();
                              if ((*(long *)(unaff_x29 + 0x30) == 0) || (in_stack_000000c8 == 0))
                              goto LAB_01cbb550;
                              *(undefined8 *)(in_stack_000000c8 + 0x38) =
                                   *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x38);
                              thunk_FUN_01b4f09c();
                              lVar13 = *(long *)(unaff_x29 + 0x30);
                              if ((lVar13 == 0) || (in_stack_000000c8 == 0)) goto LAB_01cbb550;
                              *(uint *)(in_stack_000000c8 + 0x5c) =
                                   *(int *)(lVar13 + 0x5c) - (uint)(0 < *(int *)(lVar13 + 0x5c));
                              uVar1 = *(undefined1 *)(lVar13 + 0x80);
                              *(undefined4 *)(in_stack_000000c8 + 0x98) = 1;
                              *(undefined1 *)(in_stack_000000c8 + 0x80) = uVar1;
                            }
                            iVar23 = in_stack_000000e8._4_4_;
                            lVar13 = *plVar10;
                            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
                            if (uVar8 != 0) {
                              piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_1098) {
                                  puVar12 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                                  goto LAB_01cbb1bc;
                                }
                                uVar8 = uVar8 - 1;
                                piVar21 = piVar21 + 4;
                              } while (uVar8 != 0);
                            }
                            puVar12 = (undefined8 *)
                                      FUN_01ae9f78(plVar10,*(long *)StringLiteral_1098,0);
LAB_01cbb1bc:
                            (*(code *)*puVar12)(&stack0x00000038,plVar10,iVar23,puVar12[1]);
                            plVar25 = (long *)StringLiteral_1097;
                            if (uStack0000000000000040 != 0) {
                              if ((*(long *)(unaff_x29 + 0x48) == 0) ||
                                 (lVar13 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38),
                                 lVar13 == 0)) goto LAB_01cbb550;
                              if (*(int *)(lVar13 + 0x38) == 1) {
                                FUN_0391fb70(lVar16,0,0);
                              }
                            }
                            in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ + 1;
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
      if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
      uVar15 = FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0);
      if (*(int *)(*(long *)StringLiteral_1074 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)StringLiteral_1074);
      }
      FUN_01d08560(7,*(undefined8 *)StringLiteral_1102,uVar15,0);
      lVar9 = *(long *)(unaff_x29 + 0x28);
      uVar15 = *(undefined8 *)(unaff_x29 + 0x30);
      uVar24 = *(undefined8 *)(unaff_x29 + 0x20);
      uVar7 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_1043);
      in_stack_00000068 = 0;
      in_stack_00000070 = 0;
      in_stack_00000060 = 0;
      puVar12 = &stack0x00000060;
    }
    else {
      lVar9 = *(long *)(unaff_x29 + 0x28);
      uVar15 = *(undefined8 *)(unaff_x29 + 0x30);
      uVar24 = *(undefined8 *)(unaff_x29 + 0x20);
      uVar7 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_1043);
      in_stack_00000080 = 0;
      in_stack_00000088 = 0;
      in_stack_00000078 = 0;
      puVar12 = &stack0x00000078;
    }
  }
  else {
    if (*(int *)(*(long *)StringLiteral_1074 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_01d08560(7,*(undefined8 *)StringLiteral_1105,0,0);
    lVar9 = *(long *)(unaff_x29 + 0x28);
    uVar15 = *(undefined8 *)(unaff_x29 + 0x30);
    uVar24 = *(undefined8 *)(unaff_x29 + 0x20);
    uVar7 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_1043);
    puVar12 = &stack0x00000090;
    in_stack_00000098 = 0;
    in_stack_000000a0 = 0;
    in_stack_00000090 = 0;
  }
  FUN_01cb6400(uVar7,uVar15,puVar12,0,uVar24);
  if (lVar9 != 0) {
    FUN_01cb8d90(lVar9,uVar7);
    return 0;
  }
LAB_01cbb550:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_01cbb368:
  lVar11 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar8 != 0) {
    piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *plVar25) {
        puVar12 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_01cbb3b4;
      }
      uVar8 = uVar8 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar8 != 0);
  }
  puVar12 = (undefined8 *)FUN_01ae9f78(plVar10,*plVar25,0);
LAB_01cbb3b4:
  iVar6 = (*(code *)*puVar12)(plVar10,puVar12[1]);
  if (iVar6 <= iVar23) {
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03958108(0);
    if (*(long *)(unaff_x29 + 0x48) != 0) {
      uVar15 = *(undefined8 *)(unaff_x29 + 0x30);
      lVar11 = FUN_01d07884(*(long *)(unaff_x29 + 0x48),0);
      if (lVar11 != 0) {
        in_stack_00000030 = *(undefined8 *)(lVar11 + 0x4c);
        in_stack_00000028 = *(undefined8 *)(lVar11 + 0x44);
        in_stack_00000020 = *(undefined8 *)(lVar11 + 0x3c);
        uVar24 = *(undefined8 *)(unaff_x29 + 0x20);
        uVar7 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_1043);
        FUN_01cb6400(uVar7,uVar15,&stack0x00000020,lVar9,uVar24);
        if (*(long *)(unaff_x29 + 0x28) != 0) {
          FUN_01cb8d90(*(long *)(unaff_x29 + 0x28),uVar7);
          if (*(char *)(unaff_x29 + 0x41) == '\0') {
            return 0;
          }
          if ((*(long *)(unaff_x29 + 0x30) != 0) &&
             (lVar9 = FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0), lVar9 != 0)) {
            FUN_0391fb70(lVar9,0,0);
            return 0;
          }
        }
      }
    }
    goto LAB_01cbb550;
  }
  lVar11 = FUN_0391fab4(lVar9,0);
  if ((lVar11 == 0) || (lVar11 = FUN_0392a9fc(lVar11,iVar23,0), lVar11 == 0)) goto LAB_01cbb550;
  lVar11 = FUN_0391c2b8(lVar11,0);
  uVar24 = FUN_01cbb780();
  if (lVar11 == 0) goto LAB_01cbb550;
  uVar8 = FUN_01ed84c4(lVar11,&stack0x000000b0,*(undefined8 *)puVar5);
  uVar27 = 0;
  if ((uVar8 & 1) != 0) {
    if (*(char *)(unaff_x29 + 0x40) == '\0') {
      if (in_stack_000000b0 == 0) goto LAB_01cbb550;
      uVar27 = FUN_0395a1d0(in_stack_000000b0,0);
    }
    else {
      uVar27 = FUN_01cbbaec(uVar15,uVar7,uVar24,lVar11);
      if (in_stack_000000b0 == 0) goto LAB_01cbb550;
      FUN_0395a20c(in_stack_000000b0,0);
    }
  }
  uVar8 = FUN_01ed84c4(lVar11,&stack0x000000a8,*(undefined8 *)puVar4);
  if ((uVar8 & 1) == 0) {
    in_stack_000000a8 = FUN_01ed7044(lVar11,*(undefined8 *)puVar3);
  }
  if (in_stack_000000a8 == 0) goto LAB_01cbb550;
  iVar23 = iVar23 + 1;
  *(int *)(in_stack_000000a8 + 0x20) = (int)uVar15;
  *(int *)(in_stack_000000a8 + 0x24) = (int)uVar7;
  *(undefined4 *)(in_stack_000000a8 + 0x28) = uVar27;
  *(int *)(in_stack_000000a8 + 0x2c) = (int)uVar24;
  goto LAB_01cbb368;
}


