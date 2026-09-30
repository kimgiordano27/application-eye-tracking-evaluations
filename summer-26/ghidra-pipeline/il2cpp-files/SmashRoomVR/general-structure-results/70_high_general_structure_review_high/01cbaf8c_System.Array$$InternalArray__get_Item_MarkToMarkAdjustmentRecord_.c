/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<MarkToMarkAdjustmentRecord>
ENTRY_POINT: 01cbaf8c
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


undefined8 System_Array__InternalArray__get_Item<MarkToMarkAdjustmentRecord>(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  undefined8 unaff_x19;
  long *unaff_x21;
  int iVar17;
  long unaff_x22;
  long unaff_x23;
  long *plVar18;
  long *unaff_x24;
  undefined8 uVar19;
  long unaff_x25;
  uint uVar20;
  long unaff_x26;
  long unaff_x29;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
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
  
code_r0x01cbaf8c:
  puVar8 = (undefined8 *)(param_1 + 0x138);
  while( true ) {
    (*(code *)*puVar8)(&stack0x00000038);
    if ((CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) ||
       (UnityEngine_UIElements_UIR_GradientRemap___ctor
                  (&stack0x00000038,CONCAT44(uStack000000000000003c,uStack0000000000000038),0),
       unaff_x26 == 0)) break;
    FUN_0395c1ec(uStack0000000000000038,uStack000000000000003c,uStack0000000000000040,unaff_x26,0);
    lVar12 = *unaff_x21;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1098) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01cbb028;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ae9f78();
LAB_01cbb028:
                    /* try { // try from 01cbb030 to 01dbb0a3 has its CatchHandler @ 01cbb030
                       catch(type#1 @ 00000000) { ... } // from try @ 01cbb030 with catch @ 01cbb030
                       catch(type#1 @ 00000000) { ... } // from try @ 01cbb2cc with catch @ 01cbb030
                       catch(type#1 @ 00000000) { ... } // from try @ 01cbb308 with catch @ 01cbb030
                       catch(type#1 @ 00000000) { ... } // from try @ 01cbb394 with catch @ 01cbb030
                        */
    (*(code *)*puVar8)(&stack0x00000038);
    if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) break;
    UnityEngine_UIElements_UIR_GradientRemap___ctor
              (&stack0x00000038,CONCAT44(uStack000000000000003c,uStack0000000000000038),0);
    FUN_0395c324(fStack0000000000000044 + fStack0000000000000044,
                 fStack0000000000000048 + fStack0000000000000048,
                 fStack000000000000004c + fStack000000000000004c,unaff_x26,0);
LAB_01cbb070:
    do {
      do {
        if (*(int *)(*(long *)
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar14 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
        if (((uVar14 & 1) != 0) &&
           (uVar14 = FUN_01ed84c4(unaff_x25,&stack0x000000b8,*(undefined8 *)StringLiteral_1091),
           (uVar14 & 1) != 0)) {
          if (in_stack_000000b8 == 0) goto LAB_01cbb550;
          *(undefined1 *)(in_stack_000000b8 + 0x20) = 1;
        }
        uVar14 = FUN_01ed84c4(unaff_x25,&stack0x000000c8,*(undefined8 *)StringLiteral_1092);
        if ((uVar14 & 1) != 0) {
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
          lVar12 = *(long *)(unaff_x29 + 0x30);
          if ((lVar12 == 0) || (in_stack_000000c8 == 0)) goto LAB_01cbb550;
          *(uint *)(in_stack_000000c8 + 0x5c) =
               *(int *)(lVar12 + 0x5c) - (uint)(0 < *(int *)(lVar12 + 0x5c));
          uVar1 = *(undefined1 *)(lVar12 + 0x80);
          *(undefined4 *)(in_stack_000000c8 + 0x98) = 1;
          *(undefined1 *)(in_stack_000000c8 + 0x80) = uVar1;
        }
        lVar12 = *unaff_x21;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1098) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01cbb1bc;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ae9f78();
LAB_01cbb1bc:
        (*(code *)*puVar8)(&stack0x00000038);
        puVar5 = StringLiteral_1097;
        if (uStack0000000000000040 != 0) {
          if ((*(long *)(unaff_x29 + 0x48) == 0) ||
             (lVar12 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38), lVar12 == 0))
          goto LAB_01cbb550;
          if (*(int *)(lVar12 + 0x38) == 1) {
            FUN_0391fb70(unaff_x25,0,0);
          }
        }
        iVar17 = in_stack_000000e8._4_4_ + 1;
        lVar12 = *unaff_x21;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        in_stack_000000e8._4_4_ = iVar17;
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01cba550;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ae9f78();
LAB_01cba550:
        iVar6 = (*(code *)*puVar8)();
        if (iVar6 <= iVar17) {
          if (*(char *)(unaff_x29 + 0x40) == '\0') {
            uVar19 = 0;
          }
          else {
            if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
            FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0);
            uVar19 = FUN_01cbb564();
          }
          uVar22 = FUN_01cbb66c(unaff_x19);
          puVar4 = StringLiteral_1095;
          puVar3 = StringLiteral_1093;
          puVar2 = StringLiteral_1047;
          iVar17 = 0;
          goto LAB_01cbb368;
        }
        if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
        uVar19 = *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x30);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar14 = FUN_0391f968(uVar19,0,0);
        lVar12 = *(long *)(unaff_x29 + 0x30);
        if (lVar12 == 0) goto LAB_01cbb550;
        if ((uVar14 & 1) == 0) {
          uVar19 = FUN_0391c2b8(lVar12,0);
        }
        else {
          uVar19 = *(undefined8 *)(lVar12 + 0x30);
        }
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        unaff_x25 = FUN_01f25754(uVar19,*(undefined8 *)
                                         Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__
                                );
        uVar19 = FUN_0303de64((long)&stack0x000000e8 + 4,0);
        uVar19 = FUN_02edd6e8(*(undefined8 *)StringLiteral_1103,uVar19,0);
        if (unaff_x25 == 0) goto LAB_01cbb550;
        FUN_0392316c(unaff_x25,uVar19,0);
        lVar12 = FUN_0391fab4(unaff_x25,0);
        uVar19 = FUN_0391fab4(unaff_x19,0);
        if (lVar12 == 0) goto LAB_01cbb550;
        FUN_03929660(lVar12,uVar19,0,0);
        lVar12 = FUN_0391fab4(unaff_x25,0);
        lVar10 = *unaff_x21;
        uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1098) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01cba6b4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ae9f78();
LAB_01cba6b4:
        (*(code *)*puVar8)(&stack0x00000038);
        if (lVar12 == 0) goto LAB_01cbb550;
        FUN_039282dc(fStack0000000000000044,fStack0000000000000048,fStack000000000000004c,lVar12,0);
        lVar12 = FUN_0391fab4(unaff_x25,0);
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
        if (lVar12 == 0) goto LAB_01cbb550;
        puVar11 = *(undefined4 **)
                   (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                   + 0xb8);
        FUN_03929060(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar12,0);
        lVar12 = FUN_0391fab4(unaff_x25,0);
        if (*(char *)(unaff_x22 + 600) == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          *(undefined1 *)(unaff_x22 + 600) = 1;
        }
        if (lVar12 == 0) goto LAB_01cbb550;
        lVar10 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        FUN_039293f4(*(undefined4 *)(lVar10 + 0xc),*(undefined4 *)(lVar10 + 0x10),
                     *(undefined4 *)(lVar10 + 0x14),lVar12,0);
        FUN_0391fb70(unaff_x25,1,0);
        lVar12 = *unaff_x21;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1098) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01cba7f8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ae9f78();
LAB_01cba7f8:
        (*(code *)*puVar8)(&stack0x00000038);
        lVar12 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
        uVar19 = FUN_039230bc(unaff_x25,0);
        if (lVar12 == 0) goto LAB_01cbb550;
        FUN_0392316c(lVar12,uVar19,0);
        uVar14 = FUN_01ed84c4(unaff_x25,&stack0x000000e0,
                              *(undefined8 *)
                               Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_92__)
        ;
        lVar12 = in_stack_000000e0;
        if ((uVar14 & 1) == 0) {
          uVar14 = FUN_01ed84c4(unaff_x25,&stack0x000000c0,*(undefined8 *)StringLiteral_1096);
          if ((uVar14 & 1) != 0) {
            if ((in_stack_00000018._4_4_ & 1) == 0) {
              if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
              uVar19 = FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0);
              if (*(int *)(*(long *)StringLiteral_1074 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)StringLiteral_1074);
              }
              FUN_01d08560(6,*(undefined8 *)StringLiteral_1106,uVar19,0);
            }
            lVar12 = in_stack_000000c0;
            lVar10 = *unaff_x21;
            uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1098) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_01cba9a0;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar8 = (undefined8 *)FUN_01ae9f78();
LAB_01cba9a0:
            (*(code *)*puVar8)(&stack0x00000038);
            if (lVar12 == 0) goto LAB_01cbb550;
            FUN_03900f94(lVar12,CONCAT44(uStack000000000000003c,uStack0000000000000038),0);
            in_stack_00000018._4_4_ = 1;
          }
        }
        else {
          lVar10 = *unaff_x21;
          uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1098) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_01cba968;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ae9f78();
LAB_01cba968:
          (*(code *)*puVar8)(&stack0x00000038);
          if (lVar12 == 0) goto LAB_01cbb550;
          FUN_03900dc8(lVar12,CONCAT44(uStack000000000000003c,uStack0000000000000038),0);
        }
        uVar14 = FUN_01ed84c4(unaff_x25,&stack0x000000d8,
                              *(undefined8 *)
                               Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_93__)
        ;
        if ((uVar14 & 1) != 0) {
          lVar12 = *unaff_x21;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1098) {
                puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_01cbaa44;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ae9f78();
LAB_01cbaa44:
          (*(code *)*puVar8)(&stack0x00000038);
          if ((in_stack_00000058 == 0) || (unaff_x23 == 0)) goto LAB_01cbb550;
          lVar12 = *unaff_x21;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          uVar20 = *(int *)(in_stack_00000058 + 0x18) - 1;
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1098) {
                puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_01cbaac4;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ae9f78();
LAB_01cbaac4:
          (*(code *)*puVar8)(&stack0x00000038);
          plVar7 = (long *)FUN_01b47fd0(*(undefined8 *)
                                         Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_9__
                                        ,(*(int *)(unaff_x23 + 0x18) - in_stack_00000050) + 1);
          if ((int)uVar20 < 1) {
            uVar16 = 0;
          }
          else {
            uVar14 = 0;
            uVar16 = 0;
            do {
              lVar12 = *unaff_x21;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1098) {
                    puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_01cbab6c;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar8 = (undefined8 *)FUN_01ae9f78();
LAB_01cbab6c:
              (*(code *)*puVar8)(&stack0x00000038);
              if (in_stack_00000058 == 0) goto LAB_01cbb550;
              uVar13 = FUN_02af26e0(in_stack_00000058,uVar14 & 0xffffffff,
                                    *(undefined8 *)StringLiteral_1100);
              if ((uVar13 & 1) == 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= uVar14) goto LAB_01cbb554;
                if (plVar7 == (long *)0x0) goto LAB_01cbb550;
                lVar12 = *(long *)(unaff_x23 + uVar14 * 8 + 0x20);
                if ((lVar12 != 0) &&
                   (lVar10 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0
                   )) goto LAB_01cbb558;
                if (*(uint *)(plVar7 + 3) <= uVar16) goto LAB_01cbb554;
                lVar10 = (long)(int)uVar16;
                plVar7[lVar10 + 4] = lVar12;
                uVar16 = uVar16 + 1;
                thunk_FUN_01b4f09c(plVar7 + lVar10 + 4,lVar12);
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 != uVar20);
          }
          lVar12 = *unaff_x21;
          unaff_x22 = 0x3fed000;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1098) {
                puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_01cbac68;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ae9f78();
LAB_01cbac68:
          (*(code *)*puVar8)(&stack0x00000038);
          if (in_stack_00000058 == 0) goto LAB_01cbb550;
          uVar14 = FUN_02af26e0(in_stack_00000058,uVar20,*(undefined8 *)StringLiteral_1100);
          if ((uVar14 & 1) == 0) {
            if ((*(long *)(unaff_x29 + 0x30) == 0) || (plVar7 == (long *)0x0)) goto LAB_01cbb550;
            lVar12 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x20);
            if ((lVar12 != 0) &&
               (lVar10 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
LAB_01cbb558:
              uVar19 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
              FUN_01b48050(uVar19,0);
            }
            if (*(uint *)(plVar7 + 3) <= uVar16) {
LAB_01cbb554:
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            lVar10 = (long)(int)uVar16;
            plVar7[lVar10 + 4] = lVar12;
            uVar16 = uVar16 + 1;
            thunk_FUN_01b4f09c(plVar7 + lVar10 + 4,lVar12);
          }
          uVar9 = *(uint *)(unaff_x23 + 0x18);
          if ((int)uVar20 < (int)uVar9) {
            plVar18 = (long *)(in_stack_00000008 + (long)(int)uVar20 * 8);
            do {
              if (uVar9 <= uVar20) goto LAB_01cbb554;
              if (plVar7 == (long *)0x0) goto LAB_01cbb550;
              lVar12 = *plVar18;
              if ((lVar12 != 0) &&
                 (lVar10 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
              goto LAB_01cbb558;
              if (*(uint *)(plVar7 + 3) <= uVar16) goto LAB_01cbb554;
              lVar10 = (long)(int)uVar16;
              plVar7[lVar10 + 4] = lVar12;
              uVar16 = uVar16 + 1;
              thunk_FUN_01b4f09c(plVar7 + lVar10 + 4,lVar12);
              uVar9 = *(uint *)(unaff_x23 + 0x18);
              uVar20 = uVar20 + 1;
              plVar18 = plVar18 + 1;
            } while ((int)uVar20 < (int)uVar9);
          }
          if (in_stack_000000d8 == 0) goto LAB_01cbb550;
          thunk_FUN_038fe0f8(in_stack_000000d8,plVar7,0);
          unaff_x19 = in_stack_00000010;
          unaff_x24 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
          ;
        }
        uVar14 = FUN_01ed84c4(unaff_x25,&stack0x000000d0,*(undefined8 *)StringLiteral_1094);
      } while ((uVar14 & 1) == 0);
      lVar12 = *unaff_x21;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1098) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01cbadf0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ae9f78();
LAB_01cbadf0:
      (*(code *)*puVar8)(&stack0x00000038);
      if ((uStack0000000000000040 & 1) == 0) {
        lVar12 = *unaff_x21;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1098) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01cbae64;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ae9f78();
LAB_01cbae64:
        (*(code *)*puVar8)(&stack0x00000038);
        if ((uStack0000000000000040 >> 1 & 1) != 0) goto LAB_01cbae80;
LAB_01cbaef0:
        lVar12 = in_stack_000000d0;
        if ((in_stack_000000e0 == 0) || (uVar19 = FUN_03900d8c(in_stack_000000e0,0), lVar12 == 0))
        goto LAB_01cbb550;
        FUN_0395bdc0(lVar12,uVar19,0);
        goto LAB_01cbb070;
      }
LAB_01cbae80:
      if ((*(long *)(unaff_x29 + 0x48) == 0) ||
         (lVar12 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38), lVar12 == 0)) goto LAB_01cbb550;
      iVar17 = *(int *)(lVar12 + 0x38);
      if (iVar17 == 0) goto LAB_01cbaef0;
    } while (iVar17 != 2);
    if (*(int *)(*(long *)
                  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar14 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
    lVar12 = in_stack_000000d0;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*unaff_x24);
    }
    if ((uVar14 & 1) == 0) {
      FUN_03923b4c(lVar12,0);
    }
    else {
      FUN_03923a90();
    }
    unaff_x26 = FUN_01ed7044(unaff_x25,*(undefined8 *)StringLiteral_1090);
    param_1 = *unaff_x21;
    uVar14 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1098) {
          param_1 = param_1 + (long)*piVar15 * 0x10;
          goto code_r0x01cbaf8c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ae9f78();
  }
LAB_01cbb550:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_01cbb368:
  lVar12 = *unaff_x21;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
        puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_01cbb3b4;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ae9f78();
LAB_01cbb3b4:
  iVar6 = (*(code *)*puVar8)();
  if (iVar6 <= iVar17) {
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03958108(0);
    if (*(long *)(unaff_x29 + 0x48) == 0) goto LAB_01cbb550;
    uVar19 = *(undefined8 *)(unaff_x29 + 0x30);
    lVar12 = FUN_01d07884(*(long *)(unaff_x29 + 0x48),0);
    if (lVar12 == 0) goto LAB_01cbb550;
    in_stack_00000030 = *(undefined8 *)(lVar12 + 0x4c);
    in_stack_00000028 = *(undefined8 *)(lVar12 + 0x44);
    in_stack_00000020 = *(undefined8 *)(lVar12 + 0x3c);
    uVar23 = *(undefined8 *)(unaff_x29 + 0x20);
    uVar22 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_1043);
    FUN_01cb6400(uVar22,uVar19,&stack0x00000020,unaff_x19,uVar23);
    if (*(long *)(unaff_x29 + 0x28) == 0) goto LAB_01cbb550;
    FUN_01cb8d90(*(long *)(unaff_x29 + 0x28),uVar22);
    if (*(char *)(unaff_x29 + 0x41) != '\0') {
      if ((*(long *)(unaff_x29 + 0x30) == 0) ||
         (lVar12 = FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0), lVar12 == 0)) goto LAB_01cbb550;
      FUN_0391fb70(lVar12,0,0);
    }
    return 0;
  }
  lVar12 = FUN_0391fab4(unaff_x19,0);
  if ((lVar12 == 0) || (lVar12 = FUN_0392a9fc(lVar12,iVar17,0), lVar12 == 0)) goto LAB_01cbb550;
  lVar12 = FUN_0391c2b8(lVar12,0);
  uVar23 = FUN_01cbb780();
  if (lVar12 == 0) goto LAB_01cbb550;
  uVar14 = FUN_01ed84c4(lVar12,&stack0x000000b0,*(undefined8 *)puVar4);
  uVar21 = 0;
  if ((uVar14 & 1) != 0) {
    if (*(char *)(unaff_x29 + 0x40) == '\0') {
      if (in_stack_000000b0 == 0) goto LAB_01cbb550;
      uVar21 = FUN_0395a1d0(in_stack_000000b0,0);
    }
    else {
      uVar21 = FUN_01cbbaec(uVar19,uVar22,uVar23,lVar12);
      if (in_stack_000000b0 == 0) goto LAB_01cbb550;
      FUN_0395a20c(in_stack_000000b0,0);
    }
  }
  uVar14 = FUN_01ed84c4(lVar12,&stack0x000000a8,*(undefined8 *)puVar3);
  if ((uVar14 & 1) == 0) {
    in_stack_000000a8 = FUN_01ed7044(lVar12,*(undefined8 *)puVar2);
  }
  if (in_stack_000000a8 == 0) goto LAB_01cbb550;
  iVar17 = iVar17 + 1;
  *(int *)(in_stack_000000a8 + 0x20) = (int)uVar19;
  *(int *)(in_stack_000000a8 + 0x24) = (int)uVar22;
  *(undefined4 *)(in_stack_000000a8 + 0x28) = uVar21;
  *(int *)(in_stack_000000a8 + 0x2c) = (int)uVar23;
  goto LAB_01cbb368;
}


