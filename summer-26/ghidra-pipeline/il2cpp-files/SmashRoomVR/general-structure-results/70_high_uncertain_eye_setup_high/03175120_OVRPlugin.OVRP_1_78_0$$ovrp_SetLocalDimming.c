/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetLocalDimming
ENTRY_POINT: 03175120
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetLocalDimming(long param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  ulong unaff_x21;
  long *plVar15;
  undefined8 unaff_x23;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float unaff_s13;
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
  
  do {
    *(undefined8 *)(param_1 + 0x20) = unaff_x23;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x20),unaff_x23);
LAB_03175148:
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x18) {
        FUN_03175798();
        lVar11 = *(long *)(unaff_x19 + 0x48);
        *(undefined2 *)(unaff_x19 + 0x70) = 0x100;
        if (lVar11 != 0) {
          (**(code **)(lVar11 + 0x18))
                    (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
          return;
        }
        goto LAB_031751a8;
      }
      lVar11 = *unaff_x26;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar11 = *unaff_x26;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
      if (lVar11 == 0) goto LAB_031751a8;
      if (*(uint *)(lVar11 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      iVar1 = *(int *)(lVar11 + unaff_x21 * 4 + 0x20);
    } while ((iVar1 == -1) ||
            ((*(uint *)(unaff_x19 + 0x40) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
    plVar15 = *(long **)(unaff_x19 + 0x28);
    if (plVar15 == (long *)0x0) {
LAB_031751a8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar11 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x27) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
          goto LAB_03174f2c;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ae9f78(plVar15,*unaff_x27,4);
LAB_03174f2c:
    (*(code *)*puVar8)(&stack0x00000030,plVar15,unaff_x21 & 0xffffffff,0,puVar8[1]);
    uVar7 = in_stack_00000038;
    uVar6 = uStack0000000000000034;
    iVar5 = iStack0000000000000030;
    uVar12 = FUN_031751b0();
    if ((uVar12 & 1) == 0) {
      plVar15 = *(long **)(unaff_x19 + 0x28);
      if (plVar15 == (long *)0x0) goto LAB_031751a8;
      lVar11 = *plVar15;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x27) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
            goto LAB_03174fb8;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ae9f78(plVar15,*unaff_x27,4);
LAB_03174fb8:
      (*(code *)*puVar8)(&stack0x00000030,plVar15,iVar1,0,puVar8[1]);
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
    uVar9 = thunk_FUN_01afa70c(*unaff_x28,&stack0x00000030);
    in_stack_00000008._4_4_ = (uint)unaff_x21;
    uVar10 = thunk_FUN_01afa70c(*unaff_x28,(long)&stack0x00000008 + 4);
    FUN_02ee7120(*(undefined8 *)PTR_DAT_03d80b70,uVar9,uVar10,0);
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_031751a8;
    uVar9 = FUN_0317544c(*(long *)(unaff_x19 + 0x30),iVar1);
    if (in_stack_00000078 == 0) goto LAB_031751a8;
    fVar4 = (float)uVar9;
    if (iVar1 != 0) {
      fVar4 = unaff_s13;
    }
    fVar3 = -(float)uVar9;
    if (unaff_x21 < 0x13) {
      fVar3 = fVar4;
    }
    FUN_0391c27c(in_stack_00000078,0);
    uVar9 = FUN_031754c4(iVar5,uVar6,uVar7,uVar9,fVar3);
    lVar11 = in_stack_00000078;
    unaff_x23 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d80b40);
    FUN_03175740(unaff_x23,iVar1,unaff_x21 & 0xffffffff,lVar11,uVar9);
    lVar11 = *(long *)(unaff_x19 + 0x58);
    if (lVar11 == 0) goto LAB_031751a8;
    param_1 = *(long *)(lVar11 + 0x10);
    lVar13 = *unaff_x29;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_031751a8;
    uVar2 = *(uint *)(lVar11 + 0x18);
    if (*(uint *)(param_1 + 0x18) <= uVar2) {
      FUN_02b599e4(lVar11,unaff_x23,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      goto LAB_03175148;
    }
    param_1 = param_1 + (long)(int)uVar2 * 8;
    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
  } while( true );
}


