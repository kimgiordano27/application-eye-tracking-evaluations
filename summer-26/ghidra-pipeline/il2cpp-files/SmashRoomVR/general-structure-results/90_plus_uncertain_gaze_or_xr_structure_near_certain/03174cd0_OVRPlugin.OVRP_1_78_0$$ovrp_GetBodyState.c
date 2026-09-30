/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyState
ENTRY_POINT: 03174cd0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_19;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetBodyState(long param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar21;
  undefined8 *unaff_x22;
  long *plVar22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_00000020;
  int iStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  long in_stack_00000078;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0xb70));
  *(undefined1 *)(unaff_x23 + 299) = 1;
  in_stack_00000078 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  uVar12 = FUN_01b47fd0(*unaff_x22,0x13);
  *(undefined8 *)(unaff_x19 + 0x68) = uVar12;
  thunk_FUN_01b4f09c();
  lVar13 = thunk_FUN_01afaadc(*unaff_x21);
  FUN_0391fe00(lVar13,*unaff_x20,0);
  if (lVar13 != 0) {
    lVar13 = FUN_0391fab4(lVar13,0);
    uVar12 = FUN_0391c27c();
    if (lVar13 != 0) {
      FUN_03929660(lVar13,uVar12,0,0);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      puVar16 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      FUN_039282dc(*puVar16,puVar16[1],puVar16[2],lVar13,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      puVar16 = *(undefined4 **)
                 (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                 0xb8);
      FUN_03929060(*puVar16,puVar16[1],puVar16[2],puVar16[3],lVar13,0);
      lVar13 = FUN_0391c2b8(lVar13,0);
      puVar6 = PTR_DAT_03d80b68;
      puVar5 = PTR_DAT_03d80b60;
      if (lVar13 != 0) {
        FUN_0391fb2c(lVar13,*(undefined4 *)(unaff_x19 + 0x3c),0);
        lVar13 = thunk_FUN_01afaadc(*(undefined8 *)puVar6);
        FUN_02b59220(lVar13,0x18,*(undefined8 *)puVar5);
        plVar22 = (long *)(unaff_x19 + 0x58);
        *plVar22 = lVar13;
        thunk_FUN_01b4f09c(plVar22,lVar13);
        puVar8 = PTR_DAT_03d80b50;
        puVar7 = PTR_DAT_03d80b48;
        puVar6 = PTR_DAT_03d7f3e0;
        puVar5 = StringLiteral_13729;
        if (*plVar22 != 0) {
          uVar12 = FUN_02b59c0c(*plVar22,*(undefined8 *)PTR_DAT_03d80b58);
          *(undefined8 *)(unaff_x19 + 0x60) = uVar12;
          thunk_FUN_01b4f09c();
          uVar21 = 2;
          do {
            lVar13 = *(long *)puVar6;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar13 = *(long *)puVar6;
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
            if (lVar13 == 0) goto LAB_031751a8;
            if (*(uint *)(lVar13 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            iVar1 = *(int *)(lVar13 + uVar21 * 4 + 0x20);
            if ((iVar1 != -1) &&
               ((*(uint *)(unaff_x19 + 0x40) >> (ulong)((uint)uVar21 & 0x1f) & 1) != 0)) {
              plVar22 = *(long **)(unaff_x19 + 0x28);
              if (plVar22 == (long *)0x0) goto LAB_031751a8;
              lVar17 = *plVar22;
              lVar13 = *(long *)puVar5;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == lVar13) {
                    puVar14 = (undefined8 *)(lVar17 + (long)(*piVar20 + 4) * 0x10 + 0x138);
                    goto LAB_03174f2c;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              puVar14 = (undefined8 *)FUN_01ae9f78(plVar22,lVar13,4);
LAB_03174f2c:
              (*(code *)*puVar14)(&stack0x00000030,plVar22,uVar21 & 0xffffffff,0,puVar14[1]);
              uVar11 = uStack0000000000000038;
              uVar10 = uStack0000000000000034;
              iVar9 = iStack0000000000000030;
              uVar18 = FUN_031751b0();
              if ((uVar18 & 1) == 0) {
                plVar22 = *(long **)(unaff_x19 + 0x28);
                if (plVar22 == (long *)0x0) goto LAB_031751a8;
                lVar17 = *plVar22;
                lVar13 = *(long *)puVar5;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar18 != 0) {
                  piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == lVar13) {
                      puVar14 = (undefined8 *)(lVar17 + (long)(*piVar20 + 4) * 0x10 + 0x138);
                      goto LAB_03174fb8;
                    }
                    uVar18 = uVar18 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar18 != 0);
                }
                puVar14 = (undefined8 *)FUN_01ae9f78(plVar22,lVar13,4);
LAB_03174fb8:
                (*(code *)*puVar14)(&stack0x00000030,plVar22,iVar1,0,puVar14[1]);
                in_stack_00000010 = CONCAT44(uStack0000000000000034,iStack0000000000000030);
                uStack0000000000000064 = (undefined4)uStack0000000000000044;
                in_stack_00000068 = SUB84(uStack0000000000000044,4);
                in_stack_00000060 = uStack0000000000000040;
                in_stack_00000058 = uStack0000000000000038;
                uStack000000000000005c = uStack000000000000003c;
                in_stack_00000018 = uStack0000000000000038;
                in_stack_00000020 = uStack0000000000000040;
                in_stack_00000050 = in_stack_00000010;
                in_stack_00000078 = FUN_03175250();
              }
              iStack0000000000000030 = iVar1;
              uVar12 = thunk_FUN_01afa70c(*(undefined8 *)puVar7,&stack0x00000030);
              in_stack_00000008._4_4_ = (uint)uVar21;
              uVar15 = thunk_FUN_01afa70c(*(undefined8 *)puVar7,(long)&stack0x00000008 + 4);
              FUN_02ee7120(*(undefined8 *)PTR_DAT_03d80b70,uVar12,uVar15,0);
              if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_031751a8;
              uVar12 = FUN_0317544c(*(long *)(unaff_x19 + 0x30),iVar1);
              if (in_stack_00000078 == 0) goto LAB_031751a8;
              fVar3 = (float)uVar12;
              if (iVar1 != 0) {
                fVar3 = 0.0;
              }
              fVar4 = -(float)uVar12;
              if (uVar21 < 0x13) {
                fVar4 = fVar3;
              }
              FUN_0391c27c(in_stack_00000078,0);
              uVar12 = FUN_031754c4(iVar9,uVar10,uVar11,uVar12,fVar4);
              lVar13 = in_stack_00000078;
              uVar15 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d80b40);
              FUN_03175740(uVar15,iVar1,uVar21 & 0xffffffff,lVar13,uVar12);
              lVar13 = *(long *)(unaff_x19 + 0x58);
              if (lVar13 == 0) goto LAB_031751a8;
              lVar17 = *(long *)(lVar13 + 0x10);
              lVar19 = *(long *)puVar8;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_031751a8;
              uVar2 = *(uint *)(lVar13 + 0x18);
              if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                puVar14 = (undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
                *puVar14 = uVar15;
                thunk_FUN_01b4f09c(puVar14,uVar15);
              }
              else {
                FUN_02b599e4(lVar13,uVar15,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 != 0x18);
          FUN_03175798();
          lVar13 = *(long *)(unaff_x19 + 0x48);
          *(undefined2 *)(unaff_x19 + 0x70) = 0x100;
          if (lVar13 != 0) {
            (**(code **)(lVar13 + 0x18))
                      (*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
            return;
          }
        }
      }
    }
  }
LAB_031751a8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


