/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<long>
ENTRY_POINT: 01cba2cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


undefined8 System_Array__InternalArray__get_Item<long>(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  undefined4 *puVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  uint uVar21;
  int iVar22;
  long *unaff_x24;
  long *plVar23;
  uint uVar24;
  long unaff_x29;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
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
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  if (param_1 != 0) {
    uVar7 = FUN_0391c2b8(param_1,0);
    if (*(int *)(*(long *)StringLiteral_1074 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)StringLiteral_1074);
    }
    FUN_01d08560(7,*(undefined8 *)StringLiteral_1101,uVar7,0);
    if ((*(long *)(unaff_x29 + 0x48) != 0) &&
       (lVar8 = FUN_01d07884(*(long *)(unaff_x29 + 0x48),0), lVar8 != 0)) {
      plVar9 = (long *)FUN_01d09054(lVar8,0);
      if ((*(long *)(unaff_x29 + 0x30) != 0) &&
         (lVar8 = FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0), lVar8 != 0)) {
        uVar7 = FUN_039230bc(lVar8,0);
        uVar7 = FUN_02edd6e8(uVar7,*(undefined8 *)StringLiteral_1104,0);
        lVar8 = thunk_FUN_01afaadc(*(undefined8 *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
        FUN_0391fe00(lVar8,uVar7,0);
        if (lVar8 != 0) {
          lVar10 = FUN_0391fab4(lVar8,0);
          lVar14 = *(long *)(unaff_x29 + 0x38);
          if (lVar14 == 0) {
            if ((*(long *)(unaff_x29 + 0x30) == 0) ||
               (lVar14 = FUN_0391c27c(*(long *)(unaff_x29 + 0x30),0), lVar14 == 0))
            goto LAB_01cbb550;
            lVar14 = FUN_03928c2c(lVar14,0);
          }
          if (lVar10 != 0) {
            FUN_03929660(lVar10,lVar14,0,0);
            lVar10 = FUN_0391fab4(lVar8,0);
            if (((*(long *)(unaff_x29 + 0x30) != 0) &&
                (lVar14 = FUN_0391c27c(*(long *)(unaff_x29 + 0x30),0), lVar14 != 0)) &&
               (FUN_03928d34(lVar14,0), lVar10 != 0)) {
              FUN_03928dd4(lVar10,0);
              lVar10 = FUN_0391fab4(lVar8,0);
              if (((*(long *)(unaff_x29 + 0x30) != 0) &&
                  (lVar14 = FUN_0391c27c(*(long *)(unaff_x29 + 0x30),0), lVar14 != 0)) &&
                 (FUN_039274a0(lVar14,0), lVar10 != 0)) {
                FUN_03928f54(lVar10,0);
                lVar10 = FUN_0391fab4(lVar8,0);
                if (DAT_03fed258 == '\0') {
                  thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                  DAT_03fed258 = '\x01';
                }
                if (lVar10 != 0) {
                  lVar14 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ +
                                    0xb8);
                  FUN_039293f4(*(undefined4 *)(lVar14 + 0xc),*(undefined4 *)(lVar14 + 0x10),
                               *(undefined4 *)(lVar14 + 0x14),lVar10,0);
                  if ((*(long *)(unaff_x29 + 0x30) != 0) &&
                     (lVar10 = FUN_01e8a9f8(*(long *)(unaff_x29 + 0x30),
                                            *(undefined8 *)
                                             Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__
                                           ), lVar10 != 0)) {
                    lVar10 = FUN_038fe900(lVar10,0);
                    in_stack_000000e8._4_4_ = 0;
                    if (plVar9 != (long *)0x0) {
                      bVar2 = false;
                      plVar13 = (long *)StringLiteral_1097;
LAB_01cba504:
                      iVar22 = in_stack_000000e8._4_4_;
                      lVar14 = *plVar9;
                      uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
                      if (uVar18 != 0) {
                        piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) == *plVar13) {
                            puVar11 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
                            goto LAB_01cba550;
                          }
                          uVar18 = uVar18 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_01ae9f78(plVar9,*plVar13,0);
LAB_01cba550:
                      iVar6 = (*(code *)*puVar11)(plVar9,puVar11[1]);
                      if (iVar6 <= iVar22) {
                        if (*(char *)(unaff_x29 + 0x40) == '\0') {
                          uVar7 = 0;
                        }
                        else {
                          if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
                          FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0);
                          uVar7 = FUN_01cbb564();
                        }
                        uVar26 = FUN_01cbb66c(lVar8);
                        puVar5 = StringLiteral_1095;
                        puVar4 = StringLiteral_1093;
                        puVar3 = StringLiteral_1047;
                        iVar22 = 0;
                        goto LAB_01cbb368;
                      }
                      if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
                      uVar7 = *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x30);
                      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar18 = FUN_0391f968(uVar7,0,0);
                      lVar14 = *(long *)(unaff_x29 + 0x30);
                      if (lVar14 == 0) goto LAB_01cbb550;
                      if ((uVar18 & 1) == 0) {
                        uVar7 = FUN_0391c2b8(lVar14,0);
                      }
                      else {
                        uVar7 = *(undefined8 *)(lVar14 + 0x30);
                      }
                      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      lVar14 = FUN_01f25754(uVar7,*(undefined8 *)
                                                                                                      
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__
                                           );
                      uVar7 = FUN_0303de64((long)&stack0x000000e8 + 4,0);
                      uVar7 = FUN_02edd6e8(*(undefined8 *)StringLiteral_1103,uVar7,0);
                      if (lVar14 == 0) goto LAB_01cbb550;
                      FUN_0392316c(lVar14,uVar7,0);
                      lVar12 = FUN_0391fab4(lVar14,0);
                      uVar7 = FUN_0391fab4(lVar8,0);
                      if (lVar12 == 0) goto LAB_01cbb550;
                      FUN_03929660(lVar12,uVar7,0,0);
                      lVar12 = FUN_0391fab4(lVar14,0);
                      iVar22 = in_stack_000000e8._4_4_;
                      lVar16 = *plVar9;
                      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                      if (uVar18 != 0) {
                        piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_1098) {
                            puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                            goto LAB_01cba6b4;
                          }
                          uVar18 = uVar18 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)StringLiteral_1098,0);
LAB_01cba6b4:
                      (*(code *)*puVar11)(&stack0x00000038,plVar9,iVar22,puVar11[1]);
                      if (lVar12 == 0) goto LAB_01cbb550;
                      FUN_039282dc(fStack0000000000000044,fStack0000000000000048,
                                   fStack000000000000004c,lVar12,0);
                      lVar12 = FUN_0391fab4(lVar14,0);
                      if (DAT_03fed256 == '\0') {
                        thunk_FUN_01ad9084(
                                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                          );
                        DAT_03fed256 = '\x01';
                      }
                      if (lVar12 == 0) goto LAB_01cbb550;
                      puVar17 = *(undefined4 **)
                                 (*(long *)
                                   Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                 + 0xb8);
                      FUN_03929060(*puVar17,puVar17[1],puVar17[2],puVar17[3],lVar12,0);
                      lVar12 = FUN_0391fab4(lVar14,0);
                      if (DAT_03fed258 == '\0') {
                        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                        DAT_03fed258 = '\x01';
                      }
                      if (lVar12 == 0) goto LAB_01cbb550;
                      lVar16 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ +
                                        0xb8);
                      FUN_039293f4(*(undefined4 *)(lVar16 + 0xc),*(undefined4 *)(lVar16 + 0x10),
                                   *(undefined4 *)(lVar16 + 0x14),lVar12,0);
                      FUN_0391fb70(lVar14,1,0);
                      iVar22 = in_stack_000000e8._4_4_;
                      lVar12 = *plVar9;
                      uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
                      if (uVar18 != 0) {
                        piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_1098) {
                            puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                            goto LAB_01cba7f8;
                          }
                          uVar18 = uVar18 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)StringLiteral_1098,0);
LAB_01cba7f8:
                      (*(code *)*puVar11)(&stack0x00000038,plVar9,iVar22,puVar11[1]);
                      lVar12 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
                      uVar7 = FUN_039230bc(lVar14,0);
                      if (lVar12 == 0) goto LAB_01cbb550;
                      FUN_0392316c(lVar12,uVar7,0);
                      uVar18 = FUN_01ed84c4(lVar14,&stack0x000000e0,
                                            *(undefined8 *)
                                             Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_92__
                                           );
                      iVar22 = in_stack_000000e8._4_4_;
                      lVar12 = in_stack_000000e0;
                      if ((uVar18 & 1) == 0) {
                        uVar18 = FUN_01ed84c4(lVar14,&stack0x000000c0,
                                              *(undefined8 *)StringLiteral_1096);
                        if ((uVar18 & 1) != 0) {
                          if (!bVar2) {
                            if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
                            uVar7 = FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0);
                            if (*(int *)(*(long *)StringLiteral_1074 + 0xe0) == 0) {
                              thunk_FUN_01ac7298(*(long *)StringLiteral_1074);
                            }
                            FUN_01d08560(6,*(undefined8 *)StringLiteral_1106,uVar7,0);
                          }
                          iVar22 = in_stack_000000e8._4_4_;
                          lVar12 = in_stack_000000c0;
                          lVar16 = *plVar9;
                          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                          if (uVar18 != 0) {
                            piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_1098) {
                                puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                                goto LAB_01cba9a0;
                              }
                              uVar18 = uVar18 - 1;
                              piVar20 = piVar20 + 4;
                            } while (uVar18 != 0);
                          }
                          puVar11 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)StringLiteral_1098,0)
                          ;
LAB_01cba9a0:
                          (*(code *)*puVar11)(&stack0x00000038,plVar9,iVar22,puVar11[1]);
                          if (lVar12 == 0) goto LAB_01cbb550;
                          FUN_03900f94(lVar12,CONCAT44(uStack000000000000003c,uStack0000000000000038
                                                      ),0);
                          bVar2 = true;
                        }
                      }
                      else {
                        lVar16 = *plVar9;
                        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                        if (uVar18 != 0) {
                          piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_1098) {
                              puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                              goto LAB_01cba968;
                            }
                            uVar18 = uVar18 - 1;
                            piVar20 = piVar20 + 4;
                          } while (uVar18 != 0);
                        }
                        puVar11 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)StringLiteral_1098,0);
LAB_01cba968:
                        (*(code *)*puVar11)(&stack0x00000038,plVar9,iVar22,puVar11[1]);
                        if (lVar12 == 0) goto LAB_01cbb550;
                        FUN_03900dc8(lVar12,CONCAT44(uStack000000000000003c,uStack0000000000000038),
                                     0);
                      }
                      uVar18 = FUN_01ed84c4(lVar14,&stack0x000000d8,
                                            *(undefined8 *)
                                             Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_93__
                                           );
                      iVar22 = in_stack_000000e8._4_4_;
                      if ((uVar18 & 1) != 0) {
                        lVar12 = *plVar9;
                        uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
                        if (uVar18 != 0) {
                          piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_1098) {
                              puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                              goto LAB_01cbaa44;
                            }
                            uVar18 = uVar18 - 1;
                            piVar20 = piVar20 + 4;
                          } while (uVar18 != 0);
                        }
                        puVar11 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)StringLiteral_1098,0);
LAB_01cbaa44:
                        (*(code *)*puVar11)(&stack0x00000038,plVar9,iVar22,puVar11[1]);
                        iVar22 = in_stack_000000e8._4_4_;
                        if ((in_stack_00000058 == 0) || (lVar10 == 0)) goto LAB_01cbb550;
                        lVar12 = *plVar9;
                        uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
                        uVar24 = *(int *)(in_stack_00000058 + 0x18) - 1;
                        if (uVar18 != 0) {
                          piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_1098) {
                              puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                              goto LAB_01cbaac4;
                            }
                            uVar18 = uVar18 - 1;
                            piVar20 = piVar20 + 4;
                          } while (uVar18 != 0);
                        }
                        puVar11 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)StringLiteral_1098,0);
LAB_01cbaac4:
                        (*(code *)*puVar11)(&stack0x00000038,plVar9,iVar22,puVar11[1]);
                        plVar13 = (long *)FUN_01b47fd0(*(undefined8 *)
                                                                                                                
                                                  Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_9__
                                                  ,(*(int *)(lVar10 + 0x18) - in_stack_00000050) + 1
                                                  );
                        if ((int)uVar24 < 1) {
                          uVar21 = 0;
                        }
                        else {
                          uVar18 = 0;
                          uVar21 = 0;
                          do {
                            iVar22 = in_stack_000000e8._4_4_;
                            lVar12 = *plVar9;
                            uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
                            if (uVar19 != 0) {
                              piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_1098) {
                                  puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                                  goto LAB_01cbab6c;
                                }
                                uVar19 = uVar19 - 1;
                                piVar20 = piVar20 + 4;
                              } while (uVar19 != 0);
                            }
                            puVar11 = (undefined8 *)
                                      FUN_01ae9f78(plVar9,*(long *)StringLiteral_1098,0);
LAB_01cbab6c:
                            (*(code *)*puVar11)(&stack0x00000038,plVar9,iVar22,puVar11[1]);
                            if (in_stack_00000058 == 0) goto LAB_01cbb550;
                            uVar19 = FUN_02af26e0(in_stack_00000058,uVar18 & 0xffffffff,
                                                  *(undefined8 *)StringLiteral_1100);
                            if ((uVar19 & 1) == 0) {
                              if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_01cbb554;
                              if (plVar13 == (long *)0x0) goto LAB_01cbb550;
                              lVar12 = *(long *)(lVar10 + uVar18 * 8 + 0x20);
                              if ((lVar12 != 0) &&
                                 (lVar16 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)
                                                                      (*plVar13 + 0x40)),
                                 lVar16 == 0)) goto LAB_01cbb558;
                              if (*(uint *)(plVar13 + 3) <= uVar21) goto LAB_01cbb554;
                              lVar16 = (long)(int)uVar21;
                              plVar13[lVar16 + 4] = lVar12;
                              uVar21 = uVar21 + 1;
                              thunk_FUN_01b4f09c(plVar13 + lVar16 + 4,lVar12);
                            }
                            uVar18 = uVar18 + 1;
                          } while (uVar18 != uVar24);
                        }
                        iVar22 = in_stack_000000e8._4_4_;
                        lVar12 = *plVar9;
                        uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
                        if (uVar18 != 0) {
                          piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_1098) {
                              puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                              goto LAB_01cbac68;
                            }
                            uVar18 = uVar18 - 1;
                            piVar20 = piVar20 + 4;
                          } while (uVar18 != 0);
                        }
                        puVar11 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)StringLiteral_1098,0);
LAB_01cbac68:
                        (*(code *)*puVar11)(&stack0x00000038,plVar9,iVar22,puVar11[1]);
                        if (in_stack_00000058 == 0) goto LAB_01cbb550;
                        uVar18 = FUN_02af26e0(in_stack_00000058,uVar24,
                                              *(undefined8 *)StringLiteral_1100);
                        if ((uVar18 & 1) == 0) {
                          if ((*(long *)(unaff_x29 + 0x30) == 0) || (plVar13 == (long *)0x0))
                          goto LAB_01cbb550;
                          lVar12 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x20);
                          if ((lVar12 != 0) &&
                             (lVar16 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)(*plVar13 + 0x40)),
                             lVar16 == 0)) {
LAB_01cbb558:
                            uVar7 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
                            FUN_01b48050(uVar7,0);
                          }
                          if (*(uint *)(plVar13 + 3) <= uVar21) {
LAB_01cbb554:
                    /* WARNING: Subroutine does not return */
                            FUN_01b48180();
                          }
                          lVar16 = (long)(int)uVar21;
                          plVar13[lVar16 + 4] = lVar12;
                          uVar21 = uVar21 + 1;
                          thunk_FUN_01b4f09c(plVar13 + lVar16 + 4,lVar12);
                        }
                        uVar15 = *(uint *)(lVar10 + 0x18);
                        if ((int)uVar24 < (int)uVar15) {
                          plVar23 = (long *)(lVar10 + 0x20 + (long)(int)uVar24 * 8);
                          do {
                            if (uVar15 <= uVar24) goto LAB_01cbb554;
                            if (plVar13 == (long *)0x0) goto LAB_01cbb550;
                            lVar12 = *plVar23;
                            if ((lVar12 != 0) &&
                               (lVar16 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)(*plVar13 + 0x40))
                               , lVar16 == 0)) goto LAB_01cbb558;
                            if (*(uint *)(plVar13 + 3) <= uVar21) goto LAB_01cbb554;
                            lVar16 = (long)(int)uVar21;
                            plVar13[lVar16 + 4] = lVar12;
                            uVar21 = uVar21 + 1;
                            thunk_FUN_01b4f09c(plVar13 + lVar16 + 4,lVar12);
                            uVar15 = *(uint *)(lVar10 + 0x18);
                            uVar24 = uVar24 + 1;
                            plVar23 = plVar23 + 1;
                          } while ((int)uVar24 < (int)uVar15);
                        }
                        if (in_stack_000000d8 == 0) goto LAB_01cbb550;
                        thunk_FUN_038fe0f8(in_stack_000000d8,plVar13,0);
                        unaff_x24 = (long *)
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                        ;
                      }
                      uVar18 = FUN_01ed84c4(lVar14,&stack0x000000d0,
                                            *(undefined8 *)StringLiteral_1094);
                      iVar22 = in_stack_000000e8._4_4_;
                      if ((uVar18 & 1) != 0) {
                        lVar12 = *plVar9;
                        uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
                        if (uVar18 != 0) {
                          piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_1098) {
                              puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                              goto LAB_01cbadf0;
                            }
                            uVar18 = uVar18 - 1;
                            piVar20 = piVar20 + 4;
                          } while (uVar18 != 0);
                        }
                        puVar11 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)StringLiteral_1098,0);
LAB_01cbadf0:
                        (*(code *)*puVar11)(&stack0x00000038,plVar9,iVar22,puVar11[1]);
                        iVar22 = in_stack_000000e8._4_4_;
                        if ((uStack0000000000000040 & 1) == 0) {
                          lVar12 = *plVar9;
                          uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
                          if (uVar18 != 0) {
                            piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_1098) {
                                puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                                goto LAB_01cbae64;
                              }
                              uVar18 = uVar18 - 1;
                              piVar20 = piVar20 + 4;
                            } while (uVar18 != 0);
                          }
                          puVar11 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)StringLiteral_1098,0)
                          ;
LAB_01cbae64:
                          (*(code *)*puVar11)(&stack0x00000038,plVar9,iVar22,puVar11[1]);
                          if ((uStack0000000000000040 >> 1 & 1) != 0) goto LAB_01cbae80;
                        }
                        else {
LAB_01cbae80:
                          if ((*(long *)(unaff_x29 + 0x48) == 0) ||
                             (lVar12 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38), lVar12 == 0))
                          goto LAB_01cbb550;
                          iVar22 = *(int *)(lVar12 + 0x38);
                          if (iVar22 != 0) {
                            if (iVar22 != 2) goto LAB_01cbb070;
                            if (*(int *)(*(long *)
                                          Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                                        + 0xe0) == 0) {
                              thunk_FUN_01ac7298();
                            }
                            uVar18 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove
                                               (0);
                            lVar12 = in_stack_000000d0;
                            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                              thunk_FUN_01ac7298(*unaff_x24);
                            }
                            if ((uVar18 & 1) == 0) {
                              FUN_03923b4c(lVar12,0);
                            }
                            else {
                              FUN_03923a90();
                            }
                            lVar12 = FUN_01ed7044(lVar14,*(undefined8 *)StringLiteral_1090);
                            iVar22 = in_stack_000000e8._4_4_;
                            lVar16 = *plVar9;
                            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                            if (uVar18 != 0) {
                              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_1098) {
                                  puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                                  goto LAB_01cbaf90;
                                }
                                uVar18 = uVar18 - 1;
                                piVar20 = piVar20 + 4;
                              } while (uVar18 != 0);
                            }
                            puVar11 = (undefined8 *)
                                      FUN_01ae9f78(plVar9,*(long *)StringLiteral_1098,0);
LAB_01cbaf90:
                            (*(code *)*puVar11)(&stack0x00000038,plVar9,iVar22,puVar11[1]);
                            if ((CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) ||
                               (UnityEngine_UIElements_UIR_GradientRemap___ctor
                                          (&stack0x00000038,
                                           CONCAT44(uStack000000000000003c,uStack0000000000000038),0
                                          ), lVar12 == 0)) goto LAB_01cbb550;
                            FUN_0395c1ec(uStack0000000000000038,uStack000000000000003c,
                                         uStack0000000000000040,lVar12,0);
                            iVar22 = in_stack_000000e8._4_4_;
                            lVar16 = *plVar9;
                            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                            if (uVar18 != 0) {
                              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_1098) {
                                  puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                                  goto LAB_01cbb028;
                                }
                                uVar18 = uVar18 - 1;
                                piVar20 = piVar20 + 4;
                              } while (uVar18 != 0);
                            }
                            puVar11 = (undefined8 *)
                                      FUN_01ae9f78(plVar9,*(long *)StringLiteral_1098,0);
LAB_01cbb028:
                            (*(code *)*puVar11)(&stack0x00000038,plVar9,iVar22,puVar11[1]);
                            if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0)
                            goto LAB_01cbb550;
                            UnityEngine_UIElements_UIR_GradientRemap___ctor
                                      (&stack0x00000038,
                                       CONCAT44(uStack000000000000003c,uStack0000000000000038),0);
                            FUN_0395c324(fStack0000000000000044 + fStack0000000000000044,
                                         fStack0000000000000048 + fStack0000000000000048,
                                         fStack000000000000004c + fStack000000000000004c,lVar12,0);
                            goto LAB_01cbb070;
                          }
                        }
                        lVar12 = in_stack_000000d0;
                        if ((in_stack_000000e0 == 0) ||
                           (uVar7 = FUN_03900d8c(in_stack_000000e0,0), lVar12 == 0))
                        goto LAB_01cbb550;
                        FUN_0395bdc0(lVar12,uVar7,0);
                      }
LAB_01cbb070:
                      if (*(int *)(*(long *)
                                    Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar18 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove
                                         (0);
                      if (((uVar18 & 1) != 0) &&
                         (uVar18 = FUN_01ed84c4(lVar14,&stack0x000000b8,
                                                *(undefined8 *)StringLiteral_1091),
                         (uVar18 & 1) != 0)) {
                        if (in_stack_000000b8 == 0) goto LAB_01cbb550;
                        *(undefined1 *)(in_stack_000000b8 + 0x20) = 1;
                      }
                      uVar18 = FUN_01ed84c4(lVar14,&stack0x000000c8,
                                            *(undefined8 *)StringLiteral_1092);
                      if ((uVar18 & 1) != 0) {
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
                        lVar12 = *(long *)(unaff_x29 + 0x30);
                        if ((lVar12 == 0) || (in_stack_000000c8 == 0)) goto LAB_01cbb550;
                        *(uint *)(in_stack_000000c8 + 0x5c) =
                             *(int *)(lVar12 + 0x5c) - (uint)(0 < *(int *)(lVar12 + 0x5c));
                        uVar1 = *(undefined1 *)(lVar12 + 0x80);
                        *(undefined4 *)(in_stack_000000c8 + 0x98) = 1;
                        *(undefined1 *)(in_stack_000000c8 + 0x80) = uVar1;
                      }
                      iVar22 = in_stack_000000e8._4_4_;
                      lVar12 = *plVar9;
                      uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
                      if (uVar18 != 0) {
                        piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_1098) {
                            puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                            goto LAB_01cbb1bc;
                          }
                          uVar18 = uVar18 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)StringLiteral_1098,0);
LAB_01cbb1bc:
                      (*(code *)*puVar11)(&stack0x00000038,plVar9,iVar22,puVar11[1]);
                      plVar13 = (long *)StringLiteral_1097;
                      if (uStack0000000000000040 != 0) {
                        if ((*(long *)(unaff_x29 + 0x48) == 0) ||
                           (lVar12 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38), lVar12 == 0))
                        goto LAB_01cbb550;
                        if (*(int *)(lVar12 + 0x38) == 1) {
                          FUN_0391fb70(lVar14,0,0);
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
LAB_01cbb550:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_01cbb368:
  lVar10 = *plVar9;
  uVar18 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *plVar13) {
        puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_01cbb3b4;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar11 = (undefined8 *)FUN_01ae9f78(plVar9,*plVar13,0);
LAB_01cbb3b4:
  iVar6 = (*(code *)*puVar11)(plVar9,puVar11[1]);
  if (iVar6 <= iVar22) {
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03958108(0);
    if (*(long *)(unaff_x29 + 0x48) == 0) goto LAB_01cbb550;
    uVar7 = *(undefined8 *)(unaff_x29 + 0x30);
    lVar10 = FUN_01d07884(*(long *)(unaff_x29 + 0x48),0);
    if (lVar10 == 0) goto LAB_01cbb550;
    in_stack_00000030 = *(undefined8 *)(lVar10 + 0x4c);
    in_stack_00000028 = *(undefined8 *)(lVar10 + 0x44);
    in_stack_00000020 = *(undefined8 *)(lVar10 + 0x3c);
    uVar27 = *(undefined8 *)(unaff_x29 + 0x20);
    uVar26 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_1043);
    FUN_01cb6400(uVar26,uVar7,&stack0x00000020,lVar8,uVar27);
    if (*(long *)(unaff_x29 + 0x28) == 0) goto LAB_01cbb550;
    FUN_01cb8d90(*(long *)(unaff_x29 + 0x28),uVar26);
    if (*(char *)(unaff_x29 + 0x41) != '\0') {
      if ((*(long *)(unaff_x29 + 0x30) == 0) ||
         (lVar8 = FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0), lVar8 == 0)) goto LAB_01cbb550;
      FUN_0391fb70(lVar8,0,0);
    }
    return 0;
  }
  lVar10 = FUN_0391fab4(lVar8,0);
  if ((lVar10 == 0) || (lVar10 = FUN_0392a9fc(lVar10,iVar22,0), lVar10 == 0)) goto LAB_01cbb550;
  lVar10 = FUN_0391c2b8(lVar10,0);
  uVar27 = FUN_01cbb780();
  if (lVar10 == 0) goto LAB_01cbb550;
  uVar18 = FUN_01ed84c4(lVar10,&stack0x000000b0,*(undefined8 *)puVar5);
  uVar25 = 0;
  if ((uVar18 & 1) != 0) {
    if (*(char *)(unaff_x29 + 0x40) == '\0') {
      if (in_stack_000000b0 == 0) goto LAB_01cbb550;
      uVar25 = FUN_0395a1d0(in_stack_000000b0,0);
    }
    else {
      uVar25 = FUN_01cbbaec(uVar7,uVar26,uVar27,lVar10);
      if (in_stack_000000b0 == 0) goto LAB_01cbb550;
      FUN_0395a20c(in_stack_000000b0,0);
    }
  }
  uVar18 = FUN_01ed84c4(lVar10,&stack0x000000a8,*(undefined8 *)puVar4);
  if ((uVar18 & 1) == 0) {
    in_stack_000000a8 = FUN_01ed7044(lVar10,*(undefined8 *)puVar3);
  }
  if (in_stack_000000a8 == 0) goto LAB_01cbb550;
  iVar22 = iVar22 + 1;
  *(int *)(in_stack_000000a8 + 0x20) = (int)uVar7;
  *(int *)(in_stack_000000a8 + 0x24) = (int)uVar26;
  *(undefined4 *)(in_stack_000000a8 + 0x28) = uVar25;
  *(int *)(in_stack_000000a8 + 0x2c) = (int)uVar27;
  goto LAB_01cbb368;
}


