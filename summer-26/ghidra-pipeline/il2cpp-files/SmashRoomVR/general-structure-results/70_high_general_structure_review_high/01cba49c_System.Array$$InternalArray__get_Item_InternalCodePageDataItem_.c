/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<InternalCodePageDataItem>
ENTRY_POINT: 01cba49c
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


undefined8 System_Array__InternalArray__get_Item<InternalCodePageDataItem>(long *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  uint uVar18;
  undefined8 unaff_x19;
  long *unaff_x21;
  int iVar19;
  long unaff_x22;
  long *unaff_x24;
  long *plVar20;
  undefined8 uVar21;
  uint uVar22;
  long unaff_x29;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
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
  
  lVar11 = *(long *)(*param_1 + 0xb8);
  FUN_039293f4(*(undefined4 *)(lVar11 + 0xc),*(undefined4 *)(lVar11 + 0x10),
               *(undefined4 *)(lVar11 + 0x14));
                    /* try { // try from 01cba4c4 to 01dba50b has its CatchHandler @ 01cba614 */
  if ((*(long *)(unaff_x29 + 0x30) != 0) &&
     (lVar11 = FUN_01e8a9f8(*(long *)(unaff_x29 + 0x30),
                            *(undefined8 *)Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__)
     , lVar11 != 0)) {
    lVar11 = FUN_038fe900(lVar11,0);
    in_stack_000000e8._4_4_ = 0;
    if (unaff_x21 != (long *)0x0) {
      bVar2 = false;
      plVar9 = (long *)StringLiteral_1097;
LAB_01cba504:
      iVar19 = in_stack_000000e8._4_4_;
      lVar12 = *unaff_x21;
                    /* try { // try from 01cba50c to 01dba587 has its CatchHandler @ 01cba380 */
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *plVar9) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01cba550;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cba550:
      iVar6 = (*(code *)*puVar7)();
      if (iVar6 <= iVar19) {
        if (*(char *)(unaff_x29 + 0x40) == '\0') {
          uVar21 = 0;
        }
        else {
          if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
          FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0);
          uVar21 = FUN_01cbb564();
        }
        uVar24 = FUN_01cbb66c(unaff_x19);
        puVar5 = StringLiteral_1095;
        puVar4 = StringLiteral_1093;
        puVar3 = StringLiteral_1047;
        iVar19 = 0;
        goto LAB_01cbb368;
      }
      if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
      uVar21 = *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x30);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar15 = FUN_0391f968(uVar21,0,0);
      lVar12 = *(long *)(unaff_x29 + 0x30);
      if (lVar12 == 0) goto LAB_01cbb550;
      if ((uVar15 & 1) == 0) {
        uVar21 = FUN_0391c2b8(lVar12,0);
      }
      else {
        uVar21 = *(undefined8 *)(lVar12 + 0x30);
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar12 = FUN_01f25754(uVar21,*(undefined8 *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
      uVar21 = FUN_0303de64((long)&stack0x000000e8 + 4,0);
      uVar21 = FUN_02edd6e8(*(undefined8 *)StringLiteral_1103,uVar21,0);
      if (lVar12 == 0) goto LAB_01cbb550;
      FUN_0392316c(lVar12,uVar21,0);
      lVar8 = FUN_0391fab4(lVar12,0);
      uVar21 = FUN_0391fab4(unaff_x19,0);
      if (lVar8 == 0) goto LAB_01cbb550;
      FUN_03929660(lVar8,uVar21,0,0);
      lVar8 = FUN_0391fab4(lVar12,0);
      lVar13 = *unaff_x21;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_1098) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01cba6b4;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cba6b4:
      (*(code *)*puVar7)(&stack0x00000038);
      if (lVar8 == 0) goto LAB_01cbb550;
      FUN_039282dc(fStack0000000000000044,fStack0000000000000048,fStack000000000000004c,lVar8,0);
      lVar8 = FUN_0391fab4(lVar12,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      if (lVar8 == 0) goto LAB_01cbb550;
      puVar14 = *(undefined4 **)
                 (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                 0xb8);
      FUN_03929060(*puVar14,puVar14[1],puVar14[2],puVar14[3],lVar8,0);
      lVar8 = FUN_0391fab4(lVar12,0);
      if (*(char *)(unaff_x22 + 600) == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        *(undefined1 *)(unaff_x22 + 600) = 1;
      }
      if (lVar8 == 0) goto LAB_01cbb550;
      lVar13 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      FUN_039293f4(*(undefined4 *)(lVar13 + 0xc),*(undefined4 *)(lVar13 + 0x10),
                   *(undefined4 *)(lVar13 + 0x14),lVar8,0);
      FUN_0391fb70(lVar12,1,0);
      lVar8 = *unaff_x21;
      uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_1098) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01cba7f8;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cba7f8:
      (*(code *)*puVar7)(&stack0x00000038);
      lVar8 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      uVar21 = FUN_039230bc(lVar12,0);
      if (lVar8 == 0) goto LAB_01cbb550;
      FUN_0392316c(lVar8,uVar21,0);
      uVar15 = FUN_01ed84c4(lVar12,&stack0x000000e0,
                            *(undefined8 *)
                             Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_92__);
      lVar8 = in_stack_000000e0;
      if ((uVar15 & 1) == 0) {
        uVar15 = FUN_01ed84c4(lVar12,&stack0x000000c0,*(undefined8 *)StringLiteral_1096);
        if ((uVar15 & 1) != 0) {
          if (!bVar2) {
            if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
            uVar21 = FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0);
            if (*(int *)(*(long *)StringLiteral_1074 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)StringLiteral_1074);
            }
            FUN_01d08560(6,*(undefined8 *)StringLiteral_1106,uVar21,0);
          }
          lVar8 = in_stack_000000c0;
          lVar13 = *unaff_x21;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_1098) {
                puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_01cba9a0;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cba9a0:
          (*(code *)*puVar7)(&stack0x00000038);
          if (lVar8 == 0) goto LAB_01cbb550;
          FUN_03900f94(lVar8,CONCAT44(uStack000000000000003c,uStack0000000000000038),0);
          bVar2 = true;
        }
      }
      else {
        lVar13 = *unaff_x21;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_1098) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_01cba968;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cba968:
        (*(code *)*puVar7)(&stack0x00000038);
        if (lVar8 == 0) goto LAB_01cbb550;
        FUN_03900dc8(lVar8,CONCAT44(uStack000000000000003c,uStack0000000000000038),0);
      }
      uVar15 = FUN_01ed84c4(lVar12,&stack0x000000d8,
                            *(undefined8 *)
                             Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_93__);
      if ((uVar15 & 1) != 0) {
        lVar8 = *unaff_x21;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_1098) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_01cbaa44;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbaa44:
        (*(code *)*puVar7)(&stack0x00000038);
        if ((in_stack_00000058 == 0) || (lVar11 == 0)) goto LAB_01cbb550;
        lVar8 = *unaff_x21;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
        uVar22 = *(int *)(in_stack_00000058 + 0x18) - 1;
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_1098) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_01cbaac4;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbaac4:
        (*(code *)*puVar7)(&stack0x00000038);
        plVar9 = (long *)FUN_01b47fd0(*(undefined8 *)
                                       Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_9__
                                      ,(*(int *)(lVar11 + 0x18) - in_stack_00000050) + 1);
        if ((int)uVar22 < 1) {
          uVar18 = 0;
        }
        else {
          uVar15 = 0;
          uVar18 = 0;
          do {
            lVar8 = *unaff_x21;
            uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_1098) {
                  puVar7 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_01cbab6c;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbab6c:
            (*(code *)*puVar7)(&stack0x00000038);
            if (in_stack_00000058 == 0) goto LAB_01cbb550;
            uVar16 = FUN_02af26e0(in_stack_00000058,uVar15 & 0xffffffff,
                                  *(undefined8 *)StringLiteral_1100);
            if ((uVar16 & 1) == 0) {
              if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_01cbb554;
              if (plVar9 == (long *)0x0) goto LAB_01cbb550;
              lVar8 = *(long *)(lVar11 + uVar15 * 8 + 0x20);
              if ((lVar8 != 0) &&
                 (lVar13 = thunk_FUN_01afa9e0(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0))
              goto LAB_01cbb558;
              if (*(uint *)(plVar9 + 3) <= uVar18) goto LAB_01cbb554;
              lVar13 = (long)(int)uVar18;
              plVar9[lVar13 + 4] = lVar8;
              uVar18 = uVar18 + 1;
              thunk_FUN_01b4f09c(plVar9 + lVar13 + 4,lVar8);
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar22);
        }
        lVar8 = *unaff_x21;
        unaff_x22 = 0x3fed000;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_1098) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_01cbac68;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbac68:
        (*(code *)*puVar7)(&stack0x00000038);
        if (in_stack_00000058 == 0) goto LAB_01cbb550;
        uVar15 = FUN_02af26e0(in_stack_00000058,uVar22,*(undefined8 *)StringLiteral_1100);
        if ((uVar15 & 1) == 0) {
          if ((*(long *)(unaff_x29 + 0x30) == 0) || (plVar9 == (long *)0x0)) goto LAB_01cbb550;
          lVar8 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x20);
          if ((lVar8 != 0) &&
             (lVar13 = thunk_FUN_01afa9e0(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0)) {
LAB_01cbb558:
            uVar21 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
            FUN_01b48050(uVar21,0);
          }
          if (*(uint *)(plVar9 + 3) <= uVar18) {
LAB_01cbb554:
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          lVar13 = (long)(int)uVar18;
          plVar9[lVar13 + 4] = lVar8;
          uVar18 = uVar18 + 1;
          thunk_FUN_01b4f09c(plVar9 + lVar13 + 4,lVar8);
        }
        uVar10 = *(uint *)(lVar11 + 0x18);
        if ((int)uVar22 < (int)uVar10) {
          plVar20 = (long *)(lVar11 + 0x20 + (long)(int)uVar22 * 8);
          do {
            if (uVar10 <= uVar22) goto LAB_01cbb554;
            if (plVar9 == (long *)0x0) goto LAB_01cbb550;
            lVar8 = *plVar20;
            if ((lVar8 != 0) &&
               (lVar13 = thunk_FUN_01afa9e0(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0))
            goto LAB_01cbb558;
            if (*(uint *)(plVar9 + 3) <= uVar18) goto LAB_01cbb554;
            lVar13 = (long)(int)uVar18;
            plVar9[lVar13 + 4] = lVar8;
            uVar18 = uVar18 + 1;
            thunk_FUN_01b4f09c(plVar9 + lVar13 + 4,lVar8);
            uVar10 = *(uint *)(lVar11 + 0x18);
            uVar22 = uVar22 + 1;
            plVar20 = plVar20 + 1;
          } while ((int)uVar22 < (int)uVar10);
        }
        if (in_stack_000000d8 == 0) goto LAB_01cbb550;
        thunk_FUN_038fe0f8(in_stack_000000d8,plVar9,0);
        unaff_x24 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      }
      uVar15 = FUN_01ed84c4(lVar12,&stack0x000000d0,*(undefined8 *)StringLiteral_1094);
      if ((uVar15 & 1) != 0) {
        lVar8 = *unaff_x21;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_1098) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_01cbadf0;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbadf0:
        (*(code *)*puVar7)(&stack0x00000038);
        if ((uStack0000000000000040 & 1) == 0) {
          lVar8 = *unaff_x21;
          uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_1098) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_01cbae64;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbae64:
          (*(code *)*puVar7)(&stack0x00000038);
          if ((uStack0000000000000040 >> 1 & 1) != 0) goto LAB_01cbae80;
        }
        else {
LAB_01cbae80:
          if ((*(long *)(unaff_x29 + 0x48) == 0) ||
             (lVar8 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38), lVar8 == 0)) goto LAB_01cbb550;
          iVar19 = *(int *)(lVar8 + 0x38);
          if (iVar19 != 0) {
            if (iVar19 != 2) goto LAB_01cbb070;
            if (*(int *)(*(long *)
                          Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar15 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
            lVar8 = in_stack_000000d0;
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*unaff_x24);
            }
            if ((uVar15 & 1) == 0) {
              FUN_03923b4c(lVar8,0);
            }
            else {
              FUN_03923a90();
            }
            lVar8 = FUN_01ed7044(lVar12,*(undefined8 *)StringLiteral_1090);
            lVar13 = *unaff_x21;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_1098) {
                  puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_01cbaf90;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbaf90:
            (*(code *)*puVar7)(&stack0x00000038);
            if ((CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) ||
               (UnityEngine_UIElements_UIR_GradientRemap___ctor
                          (&stack0x00000038,CONCAT44(uStack000000000000003c,uStack0000000000000038),
                           0), lVar8 == 0)) goto LAB_01cbb550;
            FUN_0395c1ec(uStack0000000000000038,uStack000000000000003c,uStack0000000000000040,lVar8,
                         0);
            lVar13 = *unaff_x21;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_1098) {
                  puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_01cbb028;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbb028:
            (*(code *)*puVar7)(&stack0x00000038);
            if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_01cbb550;
            UnityEngine_UIElements_UIR_GradientRemap___ctor
                      (&stack0x00000038,CONCAT44(uStack000000000000003c,uStack0000000000000038),0);
            FUN_0395c324(fStack0000000000000044 + fStack0000000000000044,
                         fStack0000000000000048 + fStack0000000000000048,
                         fStack000000000000004c + fStack000000000000004c,lVar8,0);
            goto LAB_01cbb070;
          }
        }
        lVar8 = in_stack_000000d0;
        if ((in_stack_000000e0 == 0) || (uVar21 = FUN_03900d8c(in_stack_000000e0,0), lVar8 == 0))
        goto LAB_01cbb550;
        FUN_0395bdc0(lVar8,uVar21,0);
      }
LAB_01cbb070:
      if (*(int *)(*(long *)
                    Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar15 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
      if (((uVar15 & 1) != 0) &&
         (uVar15 = FUN_01ed84c4(lVar12,&stack0x000000b8,*(undefined8 *)StringLiteral_1091),
         (uVar15 & 1) != 0)) {
        if (in_stack_000000b8 == 0) goto LAB_01cbb550;
        *(undefined1 *)(in_stack_000000b8 + 0x20) = 1;
      }
      uVar15 = FUN_01ed84c4(lVar12,&stack0x000000c8,*(undefined8 *)StringLiteral_1092);
      if ((uVar15 & 1) != 0) {
        if ((*(long *)(unaff_x29 + 0x30) == 0) || (in_stack_000000c8 == 0)) goto LAB_01cbb550;
        *(undefined8 *)(in_stack_000000c8 + 0x20) =
             *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x20);
        thunk_FUN_01b4f09c();
        if ((*(long *)(unaff_x29 + 0x30) == 0) || (in_stack_000000c8 == 0)) goto LAB_01cbb550;
        *(undefined8 *)(in_stack_000000c8 + 0x30) =
             *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x30);
        thunk_FUN_01b4f09c();
        if ((*(long *)(unaff_x29 + 0x30) == 0) || (in_stack_000000c8 == 0)) goto LAB_01cbb550;
        *(undefined8 *)(in_stack_000000c8 + 0x38) =
             *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x38);
        thunk_FUN_01b4f09c();
        lVar8 = *(long *)(unaff_x29 + 0x30);
        if ((lVar8 == 0) || (in_stack_000000c8 == 0)) goto LAB_01cbb550;
        *(uint *)(in_stack_000000c8 + 0x5c) =
             *(int *)(lVar8 + 0x5c) - (uint)(0 < *(int *)(lVar8 + 0x5c));
        uVar1 = *(undefined1 *)(lVar8 + 0x80);
        *(undefined4 *)(in_stack_000000c8 + 0x98) = 1;
        *(undefined1 *)(in_stack_000000c8 + 0x80) = uVar1;
      }
      lVar8 = *unaff_x21;
      uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_1098) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01cbb1bc;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbb1bc:
      (*(code *)*puVar7)(&stack0x00000038);
      plVar9 = (long *)StringLiteral_1097;
      if (uStack0000000000000040 != 0) {
        if ((*(long *)(unaff_x29 + 0x48) == 0) ||
           (lVar8 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38), lVar8 == 0)) goto LAB_01cbb550;
        if (*(int *)(lVar8 + 0x38) == 1) {
          FUN_0391fb70(lVar12,0,0);
        }
      }
      in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ + 1;
      goto LAB_01cba504;
    }
  }
LAB_01cbb550:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_01cbb368:
  lVar11 = *unaff_x21;
  uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *plVar9) {
        puVar7 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_01cbb3b4;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbb3b4:
  iVar6 = (*(code *)*puVar7)();
  if (iVar6 <= iVar19) {
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03958108(0);
    if (*(long *)(unaff_x29 + 0x48) == 0) goto LAB_01cbb550;
    uVar21 = *(undefined8 *)(unaff_x29 + 0x30);
    lVar11 = FUN_01d07884(*(long *)(unaff_x29 + 0x48),0);
    if (lVar11 == 0) goto LAB_01cbb550;
    in_stack_00000030 = *(undefined8 *)(lVar11 + 0x4c);
    in_stack_00000028 = *(undefined8 *)(lVar11 + 0x44);
    in_stack_00000020 = *(undefined8 *)(lVar11 + 0x3c);
    uVar25 = *(undefined8 *)(unaff_x29 + 0x20);
    uVar24 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_1043);
    FUN_01cb6400(uVar24,uVar21,&stack0x00000020,unaff_x19,uVar25);
    if (*(long *)(unaff_x29 + 0x28) == 0) goto LAB_01cbb550;
    FUN_01cb8d90(*(long *)(unaff_x29 + 0x28),uVar24);
    if (*(char *)(unaff_x29 + 0x41) != '\0') {
      if ((*(long *)(unaff_x29 + 0x30) == 0) ||
         (lVar11 = FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0), lVar11 == 0)) goto LAB_01cbb550;
      FUN_0391fb70(lVar11,0,0);
    }
    return 0;
  }
  lVar11 = FUN_0391fab4(unaff_x19,0);
  if ((lVar11 == 0) || (lVar11 = FUN_0392a9fc(lVar11,iVar19,0), lVar11 == 0)) goto LAB_01cbb550;
  lVar11 = FUN_0391c2b8(lVar11,0);
  uVar25 = FUN_01cbb780();
  if (lVar11 == 0) goto LAB_01cbb550;
  uVar15 = FUN_01ed84c4(lVar11,&stack0x000000b0,*(undefined8 *)puVar5);
  uVar23 = 0;
  if ((uVar15 & 1) != 0) {
    if (*(char *)(unaff_x29 + 0x40) == '\0') {
      if (in_stack_000000b0 == 0) goto LAB_01cbb550;
      uVar23 = FUN_0395a1d0(in_stack_000000b0,0);
    }
    else {
      uVar23 = FUN_01cbbaec(uVar21,uVar24,uVar25,lVar11);
      if (in_stack_000000b0 == 0) goto LAB_01cbb550;
      FUN_0395a20c(in_stack_000000b0,0);
    }
  }
  uVar15 = FUN_01ed84c4(lVar11,&stack0x000000a8,*(undefined8 *)puVar4);
  if ((uVar15 & 1) == 0) {
    in_stack_000000a8 = FUN_01ed7044(lVar11,*(undefined8 *)puVar3);
  }
  if (in_stack_000000a8 == 0) goto LAB_01cbb550;
  iVar19 = iVar19 + 1;
  *(int *)(in_stack_000000a8 + 0x20) = (int)uVar21;
  *(int *)(in_stack_000000a8 + 0x24) = (int)uVar24;
  *(undefined4 *)(in_stack_000000a8 + 0x28) = uVar23;
  *(int *)(in_stack_000000a8 + 0x2c) = (int)uVar25;
  goto LAB_01cbb368;
}


