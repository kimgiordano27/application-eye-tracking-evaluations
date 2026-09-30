/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceState
ENTRY_POINT: 03174de0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFaceState(void)

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
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long unaff_x19;
  ulong uVar20;
  long *plVar21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  int iStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
  FUN_03929060();
  lVar12 = FUN_0391c2b8();
  puVar6 = PTR_DAT_03d80b68;
  puVar5 = PTR_DAT_03d80b60;
  if (lVar12 != 0) {
    FUN_0391fb2c(lVar12,*(undefined4 *)(unaff_x19 + 0x3c),0);
    lVar12 = thunk_FUN_01afaadc(*(undefined8 *)puVar6);
    FUN_02b59220(lVar12,0x18,*(undefined8 *)puVar5);
    plVar21 = (long *)(unaff_x19 + 0x58);
    *plVar21 = lVar12;
    thunk_FUN_01b4f09c(plVar21,lVar12);
    puVar8 = PTR_DAT_03d80b50;
    puVar7 = PTR_DAT_03d80b48;
    puVar6 = PTR_DAT_03d7f3e0;
    puVar5 = StringLiteral_13729;
    if (*plVar21 != 0) {
      uVar13 = FUN_02b59c0c(*plVar21,*(undefined8 *)PTR_DAT_03d80b58);
      *(undefined8 *)(unaff_x19 + 0x60) = uVar13;
      thunk_FUN_01b4f09c();
      uVar20 = 2;
      do {
        lVar12 = *(long *)puVar6;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar12 = *(long *)puVar6;
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
        if (lVar12 == 0) goto LAB_031751a8;
        if (*(uint *)(lVar12 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        iVar1 = *(int *)(lVar12 + uVar20 * 4 + 0x20);
        if ((iVar1 != -1) &&
           ((*(uint *)(unaff_x19 + 0x40) >> (ulong)((uint)uVar20 & 0x1f) & 1) != 0)) {
          plVar21 = *(long **)(unaff_x19 + 0x28);
          if (plVar21 == (long *)0x0) goto LAB_031751a8;
          lVar16 = *plVar21;
          lVar12 = *(long *)puVar5;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar12) {
                puVar14 = (undefined8 *)(lVar16 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                goto LAB_03174f2c;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar14 = (undefined8 *)FUN_01ae9f78(plVar21,lVar12,4);
LAB_03174f2c:
          (*(code *)*puVar14)(&stack0x00000030,plVar21,uVar20 & 0xffffffff,0,puVar14[1]);
          uVar11 = in_stack_00000038;
          uVar10 = uStack0000000000000034;
          iVar9 = iStack0000000000000030;
          uVar17 = FUN_031751b0();
          if ((uVar17 & 1) == 0) {
            plVar21 = *(long **)(unaff_x19 + 0x28);
            if (plVar21 == (long *)0x0) goto LAB_031751a8;
            lVar16 = *plVar21;
            lVar12 = *(long *)puVar5;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == lVar12) {
                  puVar14 = (undefined8 *)(lVar16 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                  goto LAB_03174fb8;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar14 = (undefined8 *)FUN_01ae9f78(plVar21,lVar12,4);
LAB_03174fb8:
            (*(code *)*puVar14)(&stack0x00000030,plVar21,iVar1,0,puVar14[1]);
            in_stack_00000010 = CONCAT44(uStack0000000000000034,iStack0000000000000030);
            uStack0000000000000064 = uStack0000000000000044;
            uStack0000000000000060 = uStack0000000000000040;
            in_stack_00000058 = in_stack_00000038;
            in_stack_00000018 = in_stack_00000038;
            uStack0000000000000024 = uStack0000000000000044;
            uStack0000000000000020 = uStack0000000000000040;
            in_stack_00000050 = in_stack_00000010;
            in_stack_00000078 = FUN_03175250();
          }
          iStack0000000000000030 = iVar1;
          uVar13 = thunk_FUN_01afa70c(*(undefined8 *)puVar7,&stack0x00000030);
          in_stack_00000008._4_4_ = (uint)uVar20;
          uVar15 = thunk_FUN_01afa70c(*(undefined8 *)puVar7,(long)&stack0x00000008 + 4);
          FUN_02ee7120(*(undefined8 *)PTR_DAT_03d80b70,uVar13,uVar15,0);
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_031751a8;
          uVar13 = FUN_0317544c(*(long *)(unaff_x19 + 0x30),iVar1);
          if (in_stack_00000078 == 0) goto LAB_031751a8;
          fVar3 = (float)uVar13;
          if (iVar1 != 0) {
            fVar3 = 0.0;
          }
          fVar4 = -(float)uVar13;
          if (uVar20 < 0x13) {
            fVar4 = fVar3;
          }
          FUN_0391c27c(in_stack_00000078,0);
          uVar13 = FUN_031754c4(iVar9,uVar10,uVar11,uVar13,fVar4);
          lVar12 = in_stack_00000078;
          uVar15 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d80b40);
          FUN_03175740(uVar15,iVar1,uVar20 & 0xffffffff,lVar12,uVar13);
          lVar12 = *(long *)(unaff_x19 + 0x58);
          if (lVar12 == 0) goto LAB_031751a8;
          lVar16 = *(long *)(lVar12 + 0x10);
          lVar18 = *(long *)puVar8;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_031751a8;
          uVar2 = *(uint *)(lVar12 + 0x18);
          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
            puVar14 = (undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
            *puVar14 = uVar15;
            thunk_FUN_01b4f09c(puVar14,uVar15);
          }
          else {
            FUN_02b599e4(lVar12,uVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != 0x18);
      FUN_03175798();
      lVar12 = *(long *)(unaff_x19 + 0x48);
      *(undefined2 *)(unaff_x19 + 0x70) = 0x100;
      if (lVar12 != 0) {
        (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
        return;
      }
    }
  }
LAB_031751a8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


