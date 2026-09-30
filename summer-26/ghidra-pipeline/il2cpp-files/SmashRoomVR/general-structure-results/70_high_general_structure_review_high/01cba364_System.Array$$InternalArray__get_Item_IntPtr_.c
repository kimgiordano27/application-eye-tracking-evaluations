/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<IntPtr>
ENTRY_POINT: 01cba364
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


undefined8 System_Array__InternalArray__get_Item<IntPtr>(void)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  undefined4 *puVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  uint uVar20;
  long *unaff_x21;
  int iVar21;
  long *unaff_x24;
  long *plVar22;
  uint uVar23;
  long unaff_x29;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
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
  
  uVar7 = FUN_02edd6e8();
  lVar8 = thunk_FUN_01afaadc(*(undefined8 *)
                              Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
                    /* catch() { ... } // from try @ 01cba448 with catch @ 01cba380
                       catch() { ... } // from try @ 01cba50c with catch @ 01cba380
                       catch() { ... } // from try @ 01cba594 with catch @ 01cba380 */
  FUN_0391fe00(lVar8,uVar7,0);
  if (lVar8 != 0) {
    lVar9 = FUN_0391fab4(lVar8,0);
    lVar13 = *(long *)(unaff_x29 + 0x38);
    if (lVar13 == 0) {
      if ((*(long *)(unaff_x29 + 0x30) == 0) ||
         (lVar13 = FUN_0391c27c(*(long *)(unaff_x29 + 0x30),0), lVar13 == 0)) goto LAB_01cbb550;
                    /* try { // try from 01cba3c0 to 01dba3c7 has its CatchHandler @ 01cba614 */
      lVar13 = FUN_03928c2c(lVar13,0);
    }
    if (lVar9 != 0) {
      FUN_03929660(lVar9,lVar13,0,0);
      lVar9 = FUN_0391fab4(lVar8,0);
                    /* try { // try from 01cba3ec to 01dba3f7 has its CatchHandler @ 01cba61c */
      if (((*(long *)(unaff_x29 + 0x30) != 0) &&
          (lVar13 = FUN_0391c27c(*(long *)(unaff_x29 + 0x30),0), lVar13 != 0)) &&
         (FUN_03928d34(lVar13,0), lVar9 != 0)) {
        FUN_03928dd4(lVar9,0);
        lVar9 = FUN_0391fab4(lVar8,0);
        if (((*(long *)(unaff_x29 + 0x30) != 0) &&
            (lVar13 = FUN_0391c27c(*(long *)(unaff_x29 + 0x30),0), lVar13 != 0)) &&
           (FUN_039274a0(lVar13,0), lVar9 != 0)) {
          FUN_03928f54(lVar9,0);
          lVar9 = FUN_0391fab4(lVar8,0);
          if (DAT_03fed258 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed258 = '\x01';
          }
          if (lVar9 != 0) {
            lVar13 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
            FUN_039293f4(*(undefined4 *)(lVar13 + 0xc),*(undefined4 *)(lVar13 + 0x10),
                         *(undefined4 *)(lVar13 + 0x14),lVar9,0);
            if ((*(long *)(unaff_x29 + 0x30) != 0) &&
               (lVar9 = FUN_01e8a9f8(*(long *)(unaff_x29 + 0x30),
                                     *(undefined8 *)
                                      Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__),
               lVar9 != 0)) {
              lVar9 = FUN_038fe900(lVar9,0);
              in_stack_000000e8._4_4_ = 0;
              if (unaff_x21 != (long *)0x0) {
                bVar2 = false;
                plVar12 = (long *)StringLiteral_1097;
LAB_01cba504:
                iVar21 = in_stack_000000e8._4_4_;
                lVar13 = *unaff_x21;
                uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar17 != 0) {
                  piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *plVar12) {
                      puVar10 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_01cba550;
                    }
                    uVar17 = uVar17 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar17 != 0);
                }
                puVar10 = (undefined8 *)FUN_01ae9f78();
LAB_01cba550:
                iVar6 = (*(code *)*puVar10)();
                if (iVar6 <= iVar21) {
                  if (*(char *)(unaff_x29 + 0x40) == '\0') {
                    uVar7 = 0;
                  }
                  else {
                    if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
                    FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0);
                    uVar7 = FUN_01cbb564();
                  }
                  uVar25 = FUN_01cbb66c(lVar8);
                  puVar5 = StringLiteral_1095;
                  puVar4 = StringLiteral_1093;
                  puVar3 = StringLiteral_1047;
                  iVar21 = 0;
                  goto LAB_01cbb368;
                }
                if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
                uVar7 = *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x30);
                if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar17 = FUN_0391f968(uVar7,0,0);
                lVar13 = *(long *)(unaff_x29 + 0x30);
                if (lVar13 == 0) goto LAB_01cbb550;
                if ((uVar17 & 1) == 0) {
                  uVar7 = FUN_0391c2b8(lVar13,0);
                }
                else {
                  uVar7 = *(undefined8 *)(lVar13 + 0x30);
                }
                if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                lVar13 = FUN_01f25754(uVar7,*(undefined8 *)
                                             Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__
                                     );
                uVar7 = FUN_0303de64((long)&stack0x000000e8 + 4,0);
                uVar7 = FUN_02edd6e8(*(undefined8 *)StringLiteral_1103,uVar7,0);
                if (lVar13 == 0) goto LAB_01cbb550;
                FUN_0392316c(lVar13,uVar7,0);
                lVar11 = FUN_0391fab4(lVar13,0);
                uVar7 = FUN_0391fab4(lVar8,0);
                if (lVar11 == 0) goto LAB_01cbb550;
                FUN_03929660(lVar11,uVar7,0,0);
                lVar11 = FUN_0391fab4(lVar13,0);
                lVar15 = *unaff_x21;
                uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar17 != 0) {
                  piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_1098) {
                      puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_01cba6b4;
                    }
                    uVar17 = uVar17 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar17 != 0);
                }
                puVar10 = (undefined8 *)FUN_01ae9f78();
LAB_01cba6b4:
                (*(code *)*puVar10)(&stack0x00000038);
                if (lVar11 == 0) goto LAB_01cbb550;
                FUN_039282dc(fStack0000000000000044,fStack0000000000000048,fStack000000000000004c,
                             lVar11,0);
                lVar11 = FUN_0391fab4(lVar13,0);
                if (DAT_03fed256 == '\0') {
                  thunk_FUN_01ad9084(
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                    );
                  DAT_03fed256 = '\x01';
                }
                if (lVar11 == 0) goto LAB_01cbb550;
                puVar16 = *(undefined4 **)
                           (*(long *)
                             Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                           + 0xb8);
                FUN_03929060(*puVar16,puVar16[1],puVar16[2],puVar16[3],lVar11,0);
                lVar11 = FUN_0391fab4(lVar13,0);
                if (DAT_03fed258 == '\0') {
                  thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                  DAT_03fed258 = '\x01';
                }
                if (lVar11 == 0) goto LAB_01cbb550;
                lVar15 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
                ;
                FUN_039293f4(*(undefined4 *)(lVar15 + 0xc),*(undefined4 *)(lVar15 + 0x10),
                             *(undefined4 *)(lVar15 + 0x14),lVar11,0);
                FUN_0391fb70(lVar13,1,0);
                lVar11 = *unaff_x21;
                uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar17 != 0) {
                  piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_1098) {
                      puVar10 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_01cba7f8;
                    }
                    uVar17 = uVar17 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar17 != 0);
                }
                puVar10 = (undefined8 *)FUN_01ae9f78();
LAB_01cba7f8:
                (*(code *)*puVar10)(&stack0x00000038);
                lVar11 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
                uVar7 = FUN_039230bc(lVar13,0);
                if (lVar11 == 0) goto LAB_01cbb550;
                FUN_0392316c(lVar11,uVar7,0);
                uVar17 = FUN_01ed84c4(lVar13,&stack0x000000e0,
                                      *(undefined8 *)
                                       Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_92__
                                     );
                lVar11 = in_stack_000000e0;
                if ((uVar17 & 1) == 0) {
                  uVar17 = FUN_01ed84c4(lVar13,&stack0x000000c0,*(undefined8 *)StringLiteral_1096);
                  if ((uVar17 & 1) != 0) {
                    if (!bVar2) {
                      if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
                      uVar7 = FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0);
                      if (*(int *)(*(long *)StringLiteral_1074 + 0xe0) == 0) {
                        thunk_FUN_01ac7298(*(long *)StringLiteral_1074);
                      }
                      FUN_01d08560(6,*(undefined8 *)StringLiteral_1106,uVar7,0);
                    }
                    lVar11 = in_stack_000000c0;
                    lVar15 = *unaff_x21;
                    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
                    if (uVar17 != 0) {
                      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_1098) {
                          puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                          goto LAB_01cba9a0;
                        }
                        uVar17 = uVar17 - 1;
                        piVar19 = piVar19 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar10 = (undefined8 *)FUN_01ae9f78();
LAB_01cba9a0:
                    (*(code *)*puVar10)(&stack0x00000038);
                    if (lVar11 == 0) goto LAB_01cbb550;
                    FUN_03900f94(lVar11,CONCAT44(uStack000000000000003c,uStack0000000000000038),0);
                    bVar2 = true;
                  }
                }
                else {
                  lVar15 = *unaff_x21;
                  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar17 != 0) {
                    piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_1098) {
                        puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                        goto LAB_01cba968;
                      }
                      uVar17 = uVar17 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_01ae9f78();
LAB_01cba968:
                  (*(code *)*puVar10)(&stack0x00000038);
                  if (lVar11 == 0) goto LAB_01cbb550;
                  FUN_03900dc8(lVar11,CONCAT44(uStack000000000000003c,uStack0000000000000038),0);
                }
                uVar17 = FUN_01ed84c4(lVar13,&stack0x000000d8,
                                      *(undefined8 *)
                                       Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_93__
                                     );
                if ((uVar17 & 1) != 0) {
                  lVar11 = *unaff_x21;
                  uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar17 != 0) {
                    piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_1098) {
                        puVar10 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
                        goto LAB_01cbaa44;
                      }
                      uVar17 = uVar17 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_01ae9f78();
LAB_01cbaa44:
                  (*(code *)*puVar10)(&stack0x00000038);
                  if ((in_stack_00000058 == 0) || (lVar9 == 0)) goto LAB_01cbb550;
                  lVar11 = *unaff_x21;
                  uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  uVar23 = *(int *)(in_stack_00000058 + 0x18) - 1;
                  if (uVar17 != 0) {
                    piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_1098) {
                        puVar10 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
                        goto LAB_01cbaac4;
                      }
                      uVar17 = uVar17 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_01ae9f78();
LAB_01cbaac4:
                  (*(code *)*puVar10)(&stack0x00000038);
                  plVar12 = (long *)FUN_01b47fd0(*(undefined8 *)
                                                  Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_9__
                                                 ,(*(int *)(lVar9 + 0x18) - in_stack_00000050) + 1);
                  if ((int)uVar23 < 1) {
                    uVar20 = 0;
                  }
                  else {
                    uVar17 = 0;
                    uVar20 = 0;
                    do {
                      lVar11 = *unaff_x21;
                      uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
                      if (uVar18 != 0) {
                        piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_1098) {
                            puVar10 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
                            goto LAB_01cbab6c;
                          }
                          uVar18 = uVar18 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar10 = (undefined8 *)FUN_01ae9f78();
LAB_01cbab6c:
                      (*(code *)*puVar10)(&stack0x00000038);
                      if (in_stack_00000058 == 0) goto LAB_01cbb550;
                      uVar18 = FUN_02af26e0(in_stack_00000058,uVar17 & 0xffffffff,
                                            *(undefined8 *)StringLiteral_1100);
                      if ((uVar18 & 1) == 0) {
                        if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_01cbb554;
                        if (plVar12 == (long *)0x0) goto LAB_01cbb550;
                        lVar11 = *(long *)(lVar9 + uVar17 * 8 + 0x20);
                        if ((lVar11 != 0) &&
                           (lVar15 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                           lVar15 == 0)) goto LAB_01cbb558;
                        if (*(uint *)(plVar12 + 3) <= uVar20) goto LAB_01cbb554;
                        lVar15 = (long)(int)uVar20;
                        plVar12[lVar15 + 4] = lVar11;
                        uVar20 = uVar20 + 1;
                        thunk_FUN_01b4f09c(plVar12 + lVar15 + 4,lVar11);
                      }
                      uVar17 = uVar17 + 1;
                    } while (uVar17 != uVar23);
                  }
                  lVar11 = *unaff_x21;
                  uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar17 != 0) {
                    piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_1098) {
                        puVar10 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
                        goto LAB_01cbac68;
                      }
                      uVar17 = uVar17 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_01ae9f78();
LAB_01cbac68:
                  (*(code *)*puVar10)(&stack0x00000038);
                  if (in_stack_00000058 == 0) goto LAB_01cbb550;
                  uVar17 = FUN_02af26e0(in_stack_00000058,uVar23,*(undefined8 *)StringLiteral_1100);
                  if ((uVar17 & 1) == 0) {
                    if ((*(long *)(unaff_x29 + 0x30) == 0) || (plVar12 == (long *)0x0))
                    goto LAB_01cbb550;
                    lVar11 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x20);
                    if ((lVar11 != 0) &&
                       (lVar15 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar15 == 0)) {
LAB_01cbb558:
                      uVar7 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
                      FUN_01b48050(uVar7,0);
                    }
                    if (*(uint *)(plVar12 + 3) <= uVar20) {
LAB_01cbb554:
                    /* WARNING: Subroutine does not return */
                      FUN_01b48180();
                    }
                    lVar15 = (long)(int)uVar20;
                    plVar12[lVar15 + 4] = lVar11;
                    uVar20 = uVar20 + 1;
                    thunk_FUN_01b4f09c(plVar12 + lVar15 + 4,lVar11);
                  }
                  uVar14 = *(uint *)(lVar9 + 0x18);
                  if ((int)uVar23 < (int)uVar14) {
                    plVar22 = (long *)(lVar9 + 0x20 + (long)(int)uVar23 * 8);
                    do {
                      if (uVar14 <= uVar23) goto LAB_01cbb554;
                      if (plVar12 == (long *)0x0) goto LAB_01cbb550;
                      lVar11 = *plVar22;
                      if ((lVar11 != 0) &&
                         (lVar15 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                         lVar15 == 0)) goto LAB_01cbb558;
                      if (*(uint *)(plVar12 + 3) <= uVar20) goto LAB_01cbb554;
                      lVar15 = (long)(int)uVar20;
                      plVar12[lVar15 + 4] = lVar11;
                      uVar20 = uVar20 + 1;
                      thunk_FUN_01b4f09c(plVar12 + lVar15 + 4,lVar11);
                      uVar14 = *(uint *)(lVar9 + 0x18);
                      uVar23 = uVar23 + 1;
                      plVar22 = plVar22 + 1;
                    } while ((int)uVar23 < (int)uVar14);
                  }
                  if (in_stack_000000d8 == 0) goto LAB_01cbb550;
                  thunk_FUN_038fe0f8(in_stack_000000d8,plVar12,0);
                  unaff_x24 = (long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                  ;
                }
                uVar17 = FUN_01ed84c4(lVar13,&stack0x000000d0,*(undefined8 *)StringLiteral_1094);
                if ((uVar17 & 1) != 0) {
                  lVar11 = *unaff_x21;
                  uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar17 != 0) {
                    piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_1098) {
                        puVar10 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
                        goto LAB_01cbadf0;
                      }
                      uVar17 = uVar17 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_01ae9f78();
LAB_01cbadf0:
                  (*(code *)*puVar10)(&stack0x00000038);
                  if ((uStack0000000000000040 & 1) == 0) {
                    lVar11 = *unaff_x21;
                    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    if (uVar17 != 0) {
                      piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_1098) {
                          puVar10 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
                          goto LAB_01cbae64;
                        }
                        uVar17 = uVar17 - 1;
                        piVar19 = piVar19 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar10 = (undefined8 *)FUN_01ae9f78();
LAB_01cbae64:
                    (*(code *)*puVar10)(&stack0x00000038);
                    if ((uStack0000000000000040 >> 1 & 1) != 0) goto LAB_01cbae80;
                  }
                  else {
LAB_01cbae80:
                    if ((*(long *)(unaff_x29 + 0x48) == 0) ||
                       (lVar11 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38), lVar11 == 0))
                    goto LAB_01cbb550;
                    iVar21 = *(int *)(lVar11 + 0x38);
                    if (iVar21 != 0) {
                      if (iVar21 != 2) goto LAB_01cbb070;
                      if (*(int *)(*(long *)
                                    Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar17 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove
                                         (0);
                      lVar11 = in_stack_000000d0;
                      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                        thunk_FUN_01ac7298(*unaff_x24);
                      }
                      if ((uVar17 & 1) == 0) {
                        FUN_03923b4c(lVar11,0);
                      }
                      else {
                        FUN_03923a90();
                      }
                      lVar11 = FUN_01ed7044(lVar13,*(undefined8 *)StringLiteral_1090);
                      lVar15 = *unaff_x21;
                      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
                      if (uVar17 != 0) {
                        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_1098) {
                            puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                            goto LAB_01cbaf90;
                          }
                          uVar17 = uVar17 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar10 = (undefined8 *)FUN_01ae9f78();
LAB_01cbaf90:
                      (*(code *)*puVar10)(&stack0x00000038);
                      if ((CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) ||
                         (UnityEngine_UIElements_UIR_GradientRemap___ctor
                                    (&stack0x00000038,
                                     CONCAT44(uStack000000000000003c,uStack0000000000000038),0),
                         lVar11 == 0)) goto LAB_01cbb550;
                      FUN_0395c1ec(uStack0000000000000038,uStack000000000000003c,
                                   uStack0000000000000040,lVar11,0);
                      lVar15 = *unaff_x21;
                      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
                      if (uVar17 != 0) {
                        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_1098) {
                            puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                            goto LAB_01cbb028;
                          }
                          uVar17 = uVar17 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar10 = (undefined8 *)FUN_01ae9f78();
LAB_01cbb028:
                      (*(code *)*puVar10)(&stack0x00000038);
                      if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0)
                      goto LAB_01cbb550;
                      UnityEngine_UIElements_UIR_GradientRemap___ctor
                                (&stack0x00000038,
                                 CONCAT44(uStack000000000000003c,uStack0000000000000038),0);
                      FUN_0395c324(fStack0000000000000044 + fStack0000000000000044,
                                   fStack0000000000000048 + fStack0000000000000048,
                                   fStack000000000000004c + fStack000000000000004c,lVar11,0);
                      goto LAB_01cbb070;
                    }
                  }
                  lVar11 = in_stack_000000d0;
                  if ((in_stack_000000e0 == 0) ||
                     (uVar7 = FUN_03900d8c(in_stack_000000e0,0), lVar11 == 0)) goto LAB_01cbb550;
                  FUN_0395bdc0(lVar11,uVar7,0);
                }
LAB_01cbb070:
                if (*(int *)(*(long *)
                              Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar17 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove
                                   (0);
                if (((uVar17 & 1) != 0) &&
                   (uVar17 = FUN_01ed84c4(lVar13,&stack0x000000b8,*(undefined8 *)StringLiteral_1091)
                   , (uVar17 & 1) != 0)) {
                  if (in_stack_000000b8 == 0) goto LAB_01cbb550;
                  *(undefined1 *)(in_stack_000000b8 + 0x20) = 1;
                }
                uVar17 = FUN_01ed84c4(lVar13,&stack0x000000c8,*(undefined8 *)StringLiteral_1092);
                if ((uVar17 & 1) != 0) {
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
                  lVar11 = *(long *)(unaff_x29 + 0x30);
                  if ((lVar11 == 0) || (in_stack_000000c8 == 0)) goto LAB_01cbb550;
                  *(uint *)(in_stack_000000c8 + 0x5c) =
                       *(int *)(lVar11 + 0x5c) - (uint)(0 < *(int *)(lVar11 + 0x5c));
                  uVar1 = *(undefined1 *)(lVar11 + 0x80);
                  *(undefined4 *)(in_stack_000000c8 + 0x98) = 1;
                  *(undefined1 *)(in_stack_000000c8 + 0x80) = uVar1;
                }
                lVar11 = *unaff_x21;
                uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar17 != 0) {
                  piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_1098) {
                      puVar10 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_01cbb1bc;
                    }
                    uVar17 = uVar17 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar17 != 0);
                }
                puVar10 = (undefined8 *)FUN_01ae9f78();
LAB_01cbb1bc:
                (*(code *)*puVar10)(&stack0x00000038);
                plVar12 = (long *)StringLiteral_1097;
                if (uStack0000000000000040 != 0) {
                  if ((*(long *)(unaff_x29 + 0x48) == 0) ||
                     (lVar11 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38), lVar11 == 0))
                  goto LAB_01cbb550;
                  if (*(int *)(lVar11 + 0x38) == 1) {
                    FUN_0391fb70(lVar13,0,0);
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
LAB_01cbb550:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_01cbb368:
  lVar9 = *unaff_x21;
  uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar17 != 0) {
    piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *plVar12) {
        puVar10 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_01cbb3b4;
      }
      uVar17 = uVar17 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ae9f78();
LAB_01cbb3b4:
  iVar6 = (*(code *)*puVar10)();
  if (iVar6 <= iVar21) {
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03958108(0);
    if (*(long *)(unaff_x29 + 0x48) == 0) goto LAB_01cbb550;
    uVar7 = *(undefined8 *)(unaff_x29 + 0x30);
    lVar9 = FUN_01d07884(*(long *)(unaff_x29 + 0x48),0);
    if (lVar9 == 0) goto LAB_01cbb550;
    in_stack_00000030 = *(undefined8 *)(lVar9 + 0x4c);
    in_stack_00000028 = *(undefined8 *)(lVar9 + 0x44);
    in_stack_00000020 = *(undefined8 *)(lVar9 + 0x3c);
    uVar26 = *(undefined8 *)(unaff_x29 + 0x20);
    uVar25 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_1043);
    FUN_01cb6400(uVar25,uVar7,&stack0x00000020,lVar8,uVar26);
    if (*(long *)(unaff_x29 + 0x28) == 0) goto LAB_01cbb550;
    FUN_01cb8d90(*(long *)(unaff_x29 + 0x28),uVar25);
    if (*(char *)(unaff_x29 + 0x41) != '\0') {
      if ((*(long *)(unaff_x29 + 0x30) == 0) ||
         (lVar8 = FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0), lVar8 == 0)) goto LAB_01cbb550;
      FUN_0391fb70(lVar8,0,0);
    }
    return 0;
  }
  lVar9 = FUN_0391fab4(lVar8,0);
  if ((lVar9 == 0) || (lVar9 = FUN_0392a9fc(lVar9,iVar21,0), lVar9 == 0)) goto LAB_01cbb550;
  lVar9 = FUN_0391c2b8(lVar9,0);
  uVar26 = FUN_01cbb780();
  if (lVar9 == 0) goto LAB_01cbb550;
  uVar17 = FUN_01ed84c4(lVar9,&stack0x000000b0,*(undefined8 *)puVar5);
  uVar24 = 0;
  if ((uVar17 & 1) != 0) {
    if (*(char *)(unaff_x29 + 0x40) == '\0') {
      if (in_stack_000000b0 == 0) goto LAB_01cbb550;
      uVar24 = FUN_0395a1d0(in_stack_000000b0,0);
    }
    else {
      uVar24 = FUN_01cbbaec(uVar7,uVar25,uVar26,lVar9);
      if (in_stack_000000b0 == 0) goto LAB_01cbb550;
      FUN_0395a20c(in_stack_000000b0,0);
    }
  }
  uVar17 = FUN_01ed84c4(lVar9,&stack0x000000a8,*(undefined8 *)puVar4);
  if ((uVar17 & 1) == 0) {
    in_stack_000000a8 = FUN_01ed7044(lVar9,*(undefined8 *)puVar3);
  }
  if (in_stack_000000a8 == 0) goto LAB_01cbb550;
  iVar21 = iVar21 + 1;
  *(int *)(in_stack_000000a8 + 0x20) = (int)uVar7;
  *(int *)(in_stack_000000a8 + 0x24) = (int)uVar25;
  *(undefined4 *)(in_stack_000000a8 + 0x28) = uVar24;
  *(int *)(in_stack_000000a8 + 0x2c) = (int)uVar26;
  goto LAB_01cbb368;
}


