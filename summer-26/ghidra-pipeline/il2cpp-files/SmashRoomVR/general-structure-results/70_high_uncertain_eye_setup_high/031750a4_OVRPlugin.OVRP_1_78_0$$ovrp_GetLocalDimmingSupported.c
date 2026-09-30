/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetLocalDimmingSupported
ENTRY_POINT: 031750a4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetLocalDimmingSupported(ulong param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  ulong unaff_x21;
  uint unaff_w22;
  long *plVar12;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 unaff_d11;
  ulong unaff_d12;
  float unaff_s13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  uint in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  uint in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  uint in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
  while( true ) {
    uVar4 = FUN_031754c4(param_1,param_2,param_3,unaff_d11,unaff_d12);
    lVar6 = in_stack_00000078;
    uVar5 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d80b40);
    FUN_03175740(uVar5,unaff_w22,unaff_x21 & 0xffffffff,lVar6,uVar4);
    lVar6 = *(long *)(unaff_x19 + 0x58);
    if (lVar6 == 0) break;
    lVar7 = *(long *)(lVar6 + 0x10);
    lVar10 = *unaff_x29;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      *puVar8 = uVar5;
      thunk_FUN_01b4f09c(puVar8,uVar5);
    }
    else {
      FUN_02b599e4(lVar6,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x18) {
        FUN_03175798();
        lVar6 = *(long *)(unaff_x19 + 0x48);
        *(undefined2 *)(unaff_x19 + 0x70) = 0x100;
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
          return;
        }
        goto LAB_031751a8;
      }
      lVar6 = *unaff_x26;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *unaff_x26;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_031751a8;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      unaff_w22 = *(uint *)(lVar6 + unaff_x21 * 4 + 0x20);
    } while ((unaff_w22 == 0xffffffff) ||
            ((*(uint *)(unaff_x19 + 0x40) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
    plVar12 = *(long **)(unaff_x19 + 0x28);
    if (plVar12 == (long *)0x0) break;
    lVar6 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x27) {
          puVar8 = (undefined8 *)(lVar6 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_03174f2c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ae9f78(plVar12,*unaff_x27,4);
LAB_03174f2c:
    (*(code *)*puVar8)(&stack0x00000030,plVar12,unaff_x21 & 0xffffffff,0,puVar8[1]);
    param_1 = (ulong)uStack0000000000000030;
    param_2 = (ulong)uStack0000000000000034;
    param_3 = (ulong)in_stack_00000038;
    uVar9 = FUN_031751b0();
    if ((uVar9 & 1) == 0) {
      plVar12 = *(long **)(unaff_x19 + 0x28);
      if (plVar12 == (long *)0x0) break;
      lVar6 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x27) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar11 + 4) * 0x10 + 0x138);
            goto LAB_03174fb8;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ae9f78(plVar12,*unaff_x27,4);
LAB_03174fb8:
      (*(code *)*puVar8)(&stack0x00000030,plVar12,unaff_w22,0,puVar8[1]);
      in_stack_00000010 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      uStack0000000000000064 = uStack0000000000000044;
      uStack0000000000000060 = uStack0000000000000040;
      in_stack_00000058 = in_stack_00000038;
      in_stack_00000018 = in_stack_00000038;
      uStack0000000000000024 = uStack0000000000000044;
      uStack0000000000000020 = uStack0000000000000040;
      in_stack_00000050 = in_stack_00000010;
      in_stack_00000078 = FUN_03175250();
    }
    uStack0000000000000030 = unaff_w22;
    uVar4 = thunk_FUN_01afa70c(*unaff_x28,&stack0x00000030);
    in_stack_00000008._4_4_ = (uint)unaff_x21;
    uVar5 = thunk_FUN_01afa70c(*unaff_x28,(long)&stack0x00000008 + 4);
    FUN_02ee7120(*(undefined8 *)PTR_DAT_03d80b70,uVar4,uVar5,0);
    if (*(long *)(unaff_x19 + 0x30) == 0) break;
    unaff_d11 = FUN_0317544c(*(long *)(unaff_x19 + 0x30),unaff_w22);
    if (in_stack_00000078 == 0) break;
    fVar3 = (float)unaff_d11;
    if (unaff_w22 != 0) {
      fVar3 = unaff_s13;
    }
    fVar2 = -(float)unaff_d11;
    if (unaff_x21 < 0x13) {
      fVar2 = fVar3;
    }
    unaff_d12 = (ulong)(uint)fVar2;
    FUN_0391c27c(in_stack_00000078,0);
  }
LAB_031751a8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


