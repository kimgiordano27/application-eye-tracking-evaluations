/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<LinkInfo>
ENTRY_POINT: 01cbac38
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


undefined8
System_Array__InternalArray__get_Item<LinkInfo>(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong in_x9;
  int *piVar13;
  int *in_x10;
  long in_x11;
  uint unaff_w19;
  long *unaff_x21;
  int iVar14;
  long unaff_x22;
  long unaff_x23;
  long *plVar15;
  undefined8 uVar16;
  long unaff_x25;
  uint unaff_w26;
  long *unaff_x27;
  long lVar17;
  long unaff_x29;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
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
  
code_r0x01cbac38:
  if (in_x11 == param_3) {
    puVar7 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    goto LAB_01cbac68;
  }
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 == 0) {
LAB_01cbac4c:
    puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbac68:
    (*(code *)*puVar7)(&stack0x00000038);
    if (in_stack_00000058 == 0) goto LAB_01cbb550;
    uVar8 = FUN_02af26e0(in_stack_00000058,unaff_w26,*(undefined8 *)StringLiteral_1100);
    if ((uVar8 & 1) == 0) {
      if ((*(long *)(unaff_x29 + 0x30) == 0) || (unaff_x27 == (long *)0x0)) goto LAB_01cbb550;
      lVar17 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x20);
      if ((lVar17 != 0) &&
         (lVar9 = thunk_FUN_01afa9e0(lVar17,*(undefined8 *)(*unaff_x27 + 0x40)), lVar9 == 0)) {
LAB_01cbb558:
        uVar16 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar16,0);
      }
      if (*(uint *)(unaff_x27 + 3) <= unaff_w19) {
LAB_01cbb554:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar9 = (long)(int)unaff_w19;
      unaff_x27[lVar9 + 4] = lVar17;
      unaff_w19 = unaff_w19 + 1;
      thunk_FUN_01b4f09c(unaff_x27 + lVar9 + 4,lVar17);
    }
    uVar10 = *(uint *)(unaff_x23 + 0x18);
    if ((int)unaff_w26 < (int)uVar10) {
      plVar15 = (long *)(in_stack_00000008 + (long)(int)unaff_w26 * 8);
      do {
        if (uVar10 <= unaff_w26) goto LAB_01cbb554;
        if (unaff_x27 == (long *)0x0) goto LAB_01cbb550;
        lVar17 = *plVar15;
        if ((lVar17 != 0) &&
           (lVar9 = thunk_FUN_01afa9e0(lVar17,*(undefined8 *)(*unaff_x27 + 0x40)), lVar9 == 0))
        goto LAB_01cbb558;
        if (*(uint *)(unaff_x27 + 3) <= unaff_w19) goto LAB_01cbb554;
        lVar9 = (long)(int)unaff_w19;
        unaff_x27[lVar9 + 4] = lVar17;
        unaff_w19 = unaff_w19 + 1;
        thunk_FUN_01b4f09c(unaff_x27 + lVar9 + 4,lVar17);
        uVar10 = *(uint *)(unaff_x23 + 0x18);
        unaff_w26 = unaff_w26 + 1;
        plVar15 = plVar15 + 1;
      } while ((int)unaff_w26 < (int)uVar10);
    }
    if (in_stack_000000d8 != 0) {
      thunk_FUN_038fe0f8(in_stack_000000d8,unaff_x27,0);
      puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
LAB_01cbad7c:
      uVar8 = FUN_01ed84c4(unaff_x25,&stack0x000000d0,*(undefined8 *)StringLiteral_1094);
      if ((uVar8 & 1) != 0) {
        lVar17 = *unaff_x21;
        uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar8 != 0) {
          piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_1098) {
              puVar7 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_01cbadf0;
            }
            uVar8 = uVar8 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbadf0:
        (*(code *)*puVar7)(&stack0x00000038);
        if ((uStack0000000000000040 & 1) == 0) {
          lVar17 = *unaff_x21;
          uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_1098) {
                puVar7 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_01cbae64;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbae64:
          (*(code *)*puVar7)(&stack0x00000038);
          if ((uStack0000000000000040 >> 1 & 1) != 0) goto LAB_01cbae80;
        }
        else {
LAB_01cbae80:
          if ((*(long *)(unaff_x29 + 0x48) == 0) ||
             (lVar17 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38), lVar17 == 0))
          goto LAB_01cbb550;
          iVar14 = *(int *)(lVar17 + 0x38);
          if (iVar14 != 0) {
            if (iVar14 != 2) goto LAB_01cbb070;
            if (*(int *)(*(long *)
                          Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar8 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
            lVar17 = in_stack_000000d0;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar2);
            }
            if ((uVar8 & 1) == 0) {
              FUN_03923b4c(lVar17,0);
            }
            else {
              FUN_03923a90();
            }
            lVar17 = FUN_01ed7044(unaff_x25,*(undefined8 *)StringLiteral_1090);
            lVar9 = *unaff_x21;
            uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_1098) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_01cbaf90;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbaf90:
            (*(code *)*puVar7)(&stack0x00000038);
            if ((CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) ||
               (UnityEngine_UIElements_UIR_GradientRemap___ctor
                          (&stack0x00000038,CONCAT44(uStack000000000000003c,uStack0000000000000038),
                           0), lVar17 == 0)) goto LAB_01cbb550;
            FUN_0395c1ec(uStack0000000000000038,uStack000000000000003c,uStack0000000000000040,lVar17
                         ,0);
            lVar9 = *unaff_x21;
            uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_1098) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_01cbb028;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbb028:
            (*(code *)*puVar7)(&stack0x00000038);
            if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_01cbb550;
            UnityEngine_UIElements_UIR_GradientRemap___ctor
                      (&stack0x00000038,CONCAT44(uStack000000000000003c,uStack0000000000000038),0);
            FUN_0395c324(fStack0000000000000044 + fStack0000000000000044,
                         fStack0000000000000048 + fStack0000000000000048,
                         fStack000000000000004c + fStack000000000000004c,lVar17,0);
            goto LAB_01cbb070;
          }
        }
        lVar17 = in_stack_000000d0;
        if ((in_stack_000000e0 == 0) || (uVar16 = FUN_03900d8c(in_stack_000000e0,0), lVar17 == 0))
        goto LAB_01cbb550;
        FUN_0395bdc0(lVar17,uVar16,0);
      }
LAB_01cbb070:
      if (*(int *)(*(long *)
                    Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
      if (((uVar8 & 1) != 0) &&
         (uVar8 = FUN_01ed84c4(unaff_x25,&stack0x000000b8,*(undefined8 *)StringLiteral_1091),
         (uVar8 & 1) != 0)) {
        if (in_stack_000000b8 == 0) goto LAB_01cbb550;
        *(undefined1 *)(in_stack_000000b8 + 0x20) = 1;
      }
      uVar8 = FUN_01ed84c4(unaff_x25,&stack0x000000c8,*(undefined8 *)StringLiteral_1092);
      if ((uVar8 & 1) != 0) {
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
        lVar17 = *(long *)(unaff_x29 + 0x30);
        if ((lVar17 == 0) || (in_stack_000000c8 == 0)) goto LAB_01cbb550;
        *(uint *)(in_stack_000000c8 + 0x5c) =
             *(int *)(lVar17 + 0x5c) - (uint)(0 < *(int *)(lVar17 + 0x5c));
        uVar1 = *(undefined1 *)(lVar17 + 0x80);
        *(undefined4 *)(in_stack_000000c8 + 0x98) = 1;
        *(undefined1 *)(in_stack_000000c8 + 0x80) = uVar1;
      }
      lVar17 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar8 != 0) {
        piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_1098) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_01cbb1bc;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbb1bc:
      (*(code *)*puVar7)(&stack0x00000038);
      puVar5 = StringLiteral_1097;
      if (uStack0000000000000040 != 0) {
        if ((*(long *)(unaff_x29 + 0x48) == 0) ||
           (lVar17 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38), lVar17 == 0)) goto LAB_01cbb550;
        if (*(int *)(lVar17 + 0x38) == 1) {
          FUN_0391fb70(unaff_x25,0,0);
        }
      }
      iVar14 = in_stack_000000e8._4_4_ + 1;
      lVar17 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
      in_stack_000000e8._4_4_ = iVar14;
      if (uVar8 != 0) {
        piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_01cba550;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cba550:
      iVar6 = (*(code *)*puVar7)();
      if (iVar6 <= iVar14) {
        if (*(char *)(unaff_x29 + 0x40) == '\0') {
          uVar16 = 0;
        }
        else {
          if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
          FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0);
          uVar16 = FUN_01cbb564();
        }
        uVar19 = FUN_01cbb66c(in_stack_00000010);
        puVar4 = StringLiteral_1095;
        puVar3 = StringLiteral_1093;
        puVar2 = StringLiteral_1047;
        iVar14 = 0;
        goto LAB_01cbb368;
      }
      if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
      uVar16 = *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x30);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_0391f968(uVar16,0,0);
      lVar17 = *(long *)(unaff_x29 + 0x30);
      if (lVar17 == 0) goto LAB_01cbb550;
      if ((uVar8 & 1) == 0) {
        uVar16 = FUN_0391c2b8(lVar17,0);
      }
      else {
        uVar16 = *(undefined8 *)(lVar17 + 0x30);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      unaff_x25 = FUN_01f25754(uVar16,*(undefined8 *)
                                       Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
      uVar16 = FUN_0303de64((long)&stack0x000000e8 + 4,0);
      uVar16 = FUN_02edd6e8(*(undefined8 *)StringLiteral_1103,uVar16,0);
      if (unaff_x25 == 0) goto LAB_01cbb550;
      FUN_0392316c(unaff_x25,uVar16,0);
      lVar17 = FUN_0391fab4(unaff_x25,0);
      uVar16 = FUN_0391fab4(in_stack_00000010,0);
      if (lVar17 == 0) goto LAB_01cbb550;
      FUN_03929660(lVar17,uVar16,0,0);
      lVar17 = FUN_0391fab4(unaff_x25,0);
      lVar9 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_1098) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_01cba6b4;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cba6b4:
      (*(code *)*puVar7)(&stack0x00000038);
      if (lVar17 == 0) goto LAB_01cbb550;
      FUN_039282dc(fStack0000000000000044,fStack0000000000000048,fStack000000000000004c,lVar17,0);
      lVar17 = FUN_0391fab4(unaff_x25,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      if (lVar17 == 0) goto LAB_01cbb550;
      puVar11 = *(undefined4 **)
                 (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                 0xb8);
      FUN_03929060(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar17,0);
      lVar17 = FUN_0391fab4(unaff_x25,0);
      if (*(char *)(unaff_x22 + 600) == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        *(undefined1 *)(unaff_x22 + 600) = 1;
      }
      if (lVar17 == 0) goto LAB_01cbb550;
      lVar9 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      FUN_039293f4(*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
                   *(undefined4 *)(lVar9 + 0x14),lVar17,0);
      FUN_0391fb70(unaff_x25,1,0);
      lVar17 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar8 != 0) {
        piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_1098) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_01cba7f8;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cba7f8:
      (*(code *)*puVar7)(&stack0x00000038);
      lVar17 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      uVar16 = FUN_039230bc(unaff_x25,0);
      if (lVar17 == 0) goto LAB_01cbb550;
      FUN_0392316c(lVar17,uVar16,0);
      uVar8 = FUN_01ed84c4(unaff_x25,&stack0x000000e0,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_92__);
      lVar17 = in_stack_000000e0;
      if ((uVar8 & 1) == 0) {
        uVar8 = FUN_01ed84c4(unaff_x25,&stack0x000000c0,*(undefined8 *)StringLiteral_1096);
        if ((uVar8 & 1) != 0) {
          if ((in_stack_00000018._4_4_ & 1) == 0) {
            if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01cbb550;
            uVar16 = FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0);
            if (*(int *)(*(long *)StringLiteral_1074 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)StringLiteral_1074);
            }
            FUN_01d08560(6,*(undefined8 *)StringLiteral_1106,uVar16,0);
          }
          lVar17 = in_stack_000000c0;
          lVar9 = *unaff_x21;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_1098) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_01cba9a0;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cba9a0:
          (*(code *)*puVar7)(&stack0x00000038);
          if (lVar17 == 0) goto LAB_01cbb550;
          FUN_03900f94(lVar17,CONCAT44(uStack000000000000003c,uStack0000000000000038),0);
          in_stack_00000018._4_4_ = 1;
        }
      }
      else {
        lVar9 = *unaff_x21;
        uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar8 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_1098) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_01cba968;
            }
            uVar8 = uVar8 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cba968:
        (*(code *)*puVar7)(&stack0x00000038);
        if (lVar17 == 0) goto LAB_01cbb550;
        FUN_03900dc8(lVar17,CONCAT44(uStack000000000000003c,uStack0000000000000038),0);
      }
      uVar8 = FUN_01ed84c4(unaff_x25,&stack0x000000d8,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_93__);
      if ((uVar8 & 1) != 0) goto code_r0x01cba9ec;
      goto LAB_01cbad7c;
    }
    goto LAB_01cbb550;
  }
  goto LAB_01cbac34;
LAB_01cbb368:
  lVar17 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar8 != 0) {
    piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
        puVar7 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_01cbb3b4;
      }
      uVar8 = uVar8 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbb3b4:
  iVar6 = (*(code *)*puVar7)();
  if (iVar6 <= iVar14) {
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03958108(0);
    if (*(long *)(unaff_x29 + 0x48) == 0) goto LAB_01cbb550;
    uVar16 = *(undefined8 *)(unaff_x29 + 0x30);
    lVar17 = FUN_01d07884(*(long *)(unaff_x29 + 0x48),0);
    if (lVar17 == 0) goto LAB_01cbb550;
    in_stack_00000030 = *(undefined8 *)(lVar17 + 0x4c);
    in_stack_00000028 = *(undefined8 *)(lVar17 + 0x44);
    in_stack_00000020 = *(undefined8 *)(lVar17 + 0x3c);
    uVar20 = *(undefined8 *)(unaff_x29 + 0x20);
    uVar19 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_1043);
    FUN_01cb6400(uVar19,uVar16,&stack0x00000020,in_stack_00000010,uVar20);
    if (*(long *)(unaff_x29 + 0x28) == 0) goto LAB_01cbb550;
    FUN_01cb8d90(*(long *)(unaff_x29 + 0x28),uVar19);
    if (*(char *)(unaff_x29 + 0x41) != '\0') {
      if ((*(long *)(unaff_x29 + 0x30) == 0) ||
         (lVar17 = FUN_0391c2b8(*(long *)(unaff_x29 + 0x30),0), lVar17 == 0)) {
LAB_01cbb550:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_0391fb70(lVar17,0,0);
    }
    return 0;
  }
  lVar17 = FUN_0391fab4(in_stack_00000010,0);
  if ((lVar17 == 0) || (lVar17 = FUN_0392a9fc(lVar17,iVar14,0), lVar17 == 0)) goto LAB_01cbb550;
  lVar17 = FUN_0391c2b8(lVar17,0);
  uVar20 = FUN_01cbb780();
  if (lVar17 == 0) goto LAB_01cbb550;
  uVar8 = FUN_01ed84c4(lVar17,&stack0x000000b0,*(undefined8 *)puVar4);
  uVar18 = 0;
  if ((uVar8 & 1) != 0) {
    if (*(char *)(unaff_x29 + 0x40) == '\0') {
      if (in_stack_000000b0 == 0) goto LAB_01cbb550;
      uVar18 = FUN_0395a1d0(in_stack_000000b0,0);
    }
    else {
      uVar18 = FUN_01cbbaec(uVar16,uVar19,uVar20,lVar17);
      if (in_stack_000000b0 == 0) goto LAB_01cbb550;
      FUN_0395a20c(in_stack_000000b0,0);
    }
  }
  uVar8 = FUN_01ed84c4(lVar17,&stack0x000000a8,*(undefined8 *)puVar3);
  if ((uVar8 & 1) == 0) {
    in_stack_000000a8 = FUN_01ed7044(lVar17,*(undefined8 *)puVar2);
  }
  if (in_stack_000000a8 == 0) goto LAB_01cbb550;
  iVar14 = iVar14 + 1;
  *(int *)(in_stack_000000a8 + 0x20) = (int)uVar16;
  *(int *)(in_stack_000000a8 + 0x24) = (int)uVar19;
  *(undefined4 *)(in_stack_000000a8 + 0x28) = uVar18;
  *(int *)(in_stack_000000a8 + 0x2c) = (int)uVar20;
  goto LAB_01cbb368;
code_r0x01cba9ec:
  lVar17 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar8 != 0) {
    piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_1098) {
        puVar7 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_01cbaa44;
      }
      uVar8 = uVar8 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbaa44:
  (*(code *)*puVar7)(&stack0x00000038);
  if ((in_stack_00000058 == 0) || (unaff_x23 == 0)) goto LAB_01cbb550;
  lVar17 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
  unaff_w26 = *(int *)(in_stack_00000058 + 0x18) - 1;
  if (uVar8 != 0) {
    piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_1098) {
        puVar7 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_01cbaac4;
      }
      uVar8 = uVar8 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbaac4:
  (*(code *)*puVar7)(&stack0x00000038);
  unaff_x27 = (long *)FUN_01b47fd0(*(undefined8 *)
                                    Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_9__
                                   ,(*(int *)(unaff_x23 + 0x18) - in_stack_00000050) + 1);
  if ((int)unaff_w26 < 1) {
    unaff_w19 = 0;
  }
  else {
    uVar8 = 0;
    unaff_w19 = 0;
    do {
      lVar17 = *unaff_x21;
      uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_1098) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_01cbab6c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78();
LAB_01cbab6c:
      (*(code *)*puVar7)(&stack0x00000038);
      if (in_stack_00000058 == 0) goto LAB_01cbb550;
      uVar12 = FUN_02af26e0(in_stack_00000058,uVar8 & 0xffffffff,*(undefined8 *)StringLiteral_1100);
      if ((uVar12 & 1) == 0) {
        if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_01cbb554;
        if (unaff_x27 == (long *)0x0) goto LAB_01cbb550;
        lVar17 = *(long *)(unaff_x23 + uVar8 * 8 + 0x20);
        if ((lVar17 != 0) &&
           (lVar9 = thunk_FUN_01afa9e0(lVar17,*(undefined8 *)(*unaff_x27 + 0x40)), lVar9 == 0))
        goto LAB_01cbb558;
        if (*(uint *)(unaff_x27 + 3) <= unaff_w19) goto LAB_01cbb554;
        lVar9 = (long)(int)unaff_w19;
        unaff_x27[lVar9 + 4] = lVar17;
        unaff_w19 = unaff_w19 + 1;
        thunk_FUN_01b4f09c(unaff_x27 + lVar9 + 4,lVar17);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != unaff_w26);
  }
  param_1 = *unaff_x21;
  unaff_x22 = 0x3fed000;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  param_3 = *(long *)StringLiteral_1098;
  if (in_x9 != 0) goto code_r0x01cbac2c;
  goto LAB_01cbac4c;
code_r0x01cbac2c:
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_01cbac34:
  in_x11 = *(long *)(in_x10 + -2);
  goto code_r0x01cbac38;
}


