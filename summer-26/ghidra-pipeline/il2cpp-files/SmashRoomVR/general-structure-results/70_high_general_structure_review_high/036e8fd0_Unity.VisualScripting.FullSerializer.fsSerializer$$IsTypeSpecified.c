/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$IsTypeSpecified
ENTRY_POINT: 036e8fd0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


undefined4 Unity_VisualScripting_FullSerializer_fsSerializer__IsTypeSpecified(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int in_w8;
  long lVar10;
  long lVar11;
  long *plVar12;
  long in_x9;
  int in_w10;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long in_stack_00000020;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000002e8;
  long in_stack_000002f0;
  
  if (in_w10 == in_w8) {
    if (*(char *)(in_stack_00000020 + 0x25c) < '\0') {
      if (*(float *)(in_stack_00000020 + 0x404) < 1.0) {
        uVar14 = FUN_021788f0(in_stack_00000020 + 0x620,*(undefined8 *)PTR_DAT_03d9d6f8);
        *(undefined4 *)(in_stack_00000020 + 0x61c) = uVar14;
        if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_036ecd74;
        fVar17 = *(float *)(in_stack_00000020 + 0x404);
        memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
        fVar15 = (float)FUN_0396acb4(&stack0x00000270,0);
        fVar16 = 1.0;
        if (0.0 < fVar15) {
          if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_036ecd74;
          memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
          fVar16 = (float)FUN_0396acb4(&stack0x00000270,0);
        }
        *(float *)(in_stack_00000020 + 0x404) = fVar17 / fVar16;
      }
      cVar5 = FUN_03705274(in_stack_00000020 + 0x260,0x80,0);
      if (cVar5 == '\0') {
        *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffff7f;
      }
    }
  }
  else {
    if (in_w10 != 0x6f5f) {
      return 0;
    }
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      param_1 = *(long *)PTR_DAT_03d9c920;
      in_x9 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
      if (in_x9 == 0) goto LAB_036ecd74;
    }
    if ((*(int *)(in_x9 + 0x18) == 0) || (*(int *)(in_x9 + 0x18) == 1)) goto LAB_036ecd10;
    iVar3 = *(int *)(in_x9 + 0x24);
    if ((iVar3 == 0x2d93756b) || (iVar3 == 0x1f31f54b)) {
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        param_1 = *(long *)PTR_DAT_03d9c920;
      }
      lVar10 = **(long **)(param_1 + 0xb8);
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x18) != 0) {
          *(undefined8 *)(in_stack_00000020 + 0x100) = *(undefined8 *)(lVar10 + 0x28);
          thunk_FUN_01b4f09c(in_stack_00000020 + 0x100);
          lVar10 = **(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          if (lVar10 == 0) goto LAB_036ecd74;
          if (*(int *)(lVar10 + 0x18) != 0) {
            *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar10 + 0x38);
            thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
            *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
            lVar10 = **(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
            if (lVar10 == 0) goto LAB_036ecd74;
            if (*(int *)(lVar10 + 0x18) != 0) {
              in_stack_00000078 = *(undefined8 *)(lVar10 + 0x28);
              in_stack_00000070 = *(undefined8 *)(lVar10 + 0x20);
              in_stack_00000088 = *(undefined8 *)(lVar10 + 0x38);
              in_stack_00000080 = *(undefined8 *)(lVar10 + 0x30);
              in_stack_00000098 = *(undefined8 *)(lVar10 + 0x48);
              in_stack_00000090 = *(undefined8 *)(lVar10 + 0x40);
              in_stack_000000a0 = *(undefined8 *)(lVar10 + 0x50);
              FUN_02177a60(*(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 2,&stack0x00000070,
                           *(undefined8 *)PTR_DAT_03d9d6d8);
              return 1;
            }
          }
        }
LAB_036ecd10:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      goto LAB_036ecd74;
    }
    iVar1 = *(int *)(in_x9 + 0x38);
    iVar2 = *(int *)(in_x9 + 0x3c);
    FUN_036b06d8(iVar3,&stack0x000002f0,0);
    puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_03922f24(in_stack_000002f0,0,0);
    if ((uVar7 & 1) != 0) {
      lVar10 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar10 = *(long *)PTR_DAT_03d9c920;
      }
      lVar11 = *(long *)(lVar10 + 0xb8);
      lVar13 = *(long *)(lVar11 + 0x70);
      if (lVar13 == 0) {
        in_stack_000002f0 = 0;
      }
      else {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar11 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        lVar10 = *(long *)(lVar11 + 0x88);
        if (lVar10 == 0) goto LAB_036ecd74;
        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_036ecd10;
        uVar8 = FUN_02eeda98(0,*(undefined8 *)(lVar11 + 0x80),*(undefined4 *)(lVar10 + 0x2c),
                             *(undefined4 *)(lVar10 + 0x30),0);
        in_stack_000002f0 =
             (**(code **)(lVar13 + 0x18))
                       (*(undefined8 *)(lVar13 + 0x40),iVar3,uVar8,*(undefined8 *)(lVar13 + 0x28));
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_03922f24(in_stack_000002f0,0,0);
      if ((uVar7 & 1) != 0) {
        uVar8 = FUN_036fb900(0);
        lVar10 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar10);
          lVar10 = *(long *)PTR_DAT_03d9c920;
        }
        lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x88);
        if (lVar11 == 0) goto LAB_036ecd74;
        if (*(int *)(lVar11 + 0x18) == 0) goto LAB_036ecd10;
        uVar9 = FUN_02eeda98(0,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x80),
                             *(undefined4 *)(lVar11 + 0x2c),*(undefined4 *)(lVar11 + 0x30),0);
        uVar8 = FUN_02edd6e8(uVar8,uVar9,0);
        in_stack_000002f0 = FUN_01f2f4f0(uVar8,*(undefined8 *)StringLiteral_477);
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_03922f24(in_stack_000002f0,0,0);
      if ((uVar7 & 1) != 0) {
        return 0;
      }
      FUN_036b01e8(in_stack_000002f0,0);
    }
    if (iVar2 == 0 && iVar1 == 0) {
      if (in_stack_000002f0 == 0) {
LAB_036ecd74:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(in_stack_000002f0 + 0x20);
      thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
      uVar8 = *(undefined8 *)(in_stack_00000020 + 0x118);
      lVar10 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar10 = *(long *)PTR_DAT_03d9c920;
      }
      uVar6 = FUN_036b0b30(uVar8,in_stack_000002f0,*(long *)(lVar10 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8),0);
      *(uint *)(in_stack_00000020 + 0x120) = uVar6;
      lVar10 = **(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
      if (lVar10 == 0) goto LAB_036ecd74;
      if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_036ecd10;
      lVar10 = lVar10 + (long)(int)uVar6 * 0x38;
      in_stack_00000088 = *(undefined8 *)(lVar10 + 0x38);
      in_stack_00000080 = *(undefined8 *)(lVar10 + 0x30);
      in_stack_00000098 = *(undefined8 *)(lVar10 + 0x48);
      in_stack_00000090 = *(undefined8 *)(lVar10 + 0x40);
      in_stack_000000a0 = *(undefined8 *)(lVar10 + 0x50);
      in_stack_00000078 = *(undefined8 *)(lVar10 + 0x28);
      in_stack_00000070 = *(undefined8 *)(lVar10 + 0x20);
      uVar8 = *(undefined8 *)PTR_DAT_03d9d6d8;
      plVar12 = *(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 2;
    }
    else {
      if ((iVar1 != 0x629fdf7) && (iVar1 != 0x454d9f7)) {
        return 0;
      }
      uVar7 = FUN_036b08d0(iVar2,&stack0x000002e8,0);
      if ((uVar7 & 1) == 0) {
        uVar8 = FUN_036fb900(0);
        lVar10 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar10);
          lVar10 = *(long *)PTR_DAT_03d9c920;
        }
        lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x88);
        if (lVar11 == 0) goto LAB_036ecd74;
        if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_036ecd10;
        uVar9 = FUN_02eeda98(0,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x80),
                             *(undefined4 *)(lVar11 + 0x44),*(undefined4 *)(lVar11 + 0x48),0);
        uVar8 = FUN_02edd6e8(uVar8,uVar9,0);
        uVar8 = FUN_01f2f4f0(uVar8,*(undefined8 *)StringLiteral_430);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar4);
        }
        uVar7 = FUN_03922f24(uVar8,0,0);
        if ((uVar7 & 1) != 0) {
          return 0;
        }
        FUN_036b04b4(iVar2,uVar8,0);
        *(undefined8 *)(in_stack_00000020 + 0x118) = uVar8;
        thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
        uVar8 = *(undefined8 *)(in_stack_00000020 + 0x118);
        lVar10 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar10 = *(long *)PTR_DAT_03d9c920;
        }
        uVar6 = FUN_036b0b30(uVar8,in_stack_000002f0,*(long *)(lVar10 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8),0);
        *(uint *)(in_stack_00000020 + 0x120) = uVar6;
        lVar10 = **(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        if (lVar10 == 0) goto LAB_036ecd74;
        if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_036ecd10;
        lVar10 = lVar10 + (long)(int)uVar6 * 0x38;
        in_stack_00000088 = *(undefined8 *)(lVar10 + 0x38);
        in_stack_00000080 = *(undefined8 *)(lVar10 + 0x30);
        in_stack_00000098 = *(undefined8 *)(lVar10 + 0x48);
        in_stack_00000090 = *(undefined8 *)(lVar10 + 0x40);
        in_stack_000000a0 = *(undefined8 *)(lVar10 + 0x50);
        in_stack_00000078 = *(undefined8 *)(lVar10 + 0x28);
        in_stack_00000070 = *(undefined8 *)(lVar10 + 0x20);
        uVar8 = *(undefined8 *)PTR_DAT_03d9d6d8;
        plVar12 = *(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 2;
        in_stack_00000170 = in_stack_00000070;
        in_stack_00000178 = in_stack_00000078;
        in_stack_00000180 = in_stack_00000080;
        in_stack_00000188 = in_stack_00000088;
        in_stack_00000190 = in_stack_00000090;
        in_stack_00000198 = in_stack_00000098;
        in_stack_000001a0 = in_stack_000000a0;
      }
      else {
        *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002e8;
        thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
        uVar8 = *(undefined8 *)(in_stack_00000020 + 0x118);
        lVar10 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar10 = *(long *)PTR_DAT_03d9c920;
        }
        uVar6 = FUN_036b0b30(uVar8,in_stack_000002f0,*(long *)(lVar10 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8),0);
        *(uint *)(in_stack_00000020 + 0x120) = uVar6;
        lVar10 = **(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        if (lVar10 == 0) goto LAB_036ecd74;
        if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_036ecd10;
        lVar10 = lVar10 + (long)(int)uVar6 * 0x38;
        in_stack_00000088 = *(undefined8 *)(lVar10 + 0x38);
        in_stack_00000080 = *(undefined8 *)(lVar10 + 0x30);
        in_stack_00000098 = *(undefined8 *)(lVar10 + 0x48);
        in_stack_00000090 = *(undefined8 *)(lVar10 + 0x40);
        in_stack_000000a0 = *(undefined8 *)(lVar10 + 0x50);
        in_stack_00000078 = *(undefined8 *)(lVar10 + 0x28);
        in_stack_00000070 = *(undefined8 *)(lVar10 + 0x20);
        uVar8 = *(undefined8 *)PTR_DAT_03d9d6d8;
        plVar12 = *(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 2;
        in_stack_000001b0 = in_stack_00000070;
        in_stack_000001b8 = in_stack_00000078;
        in_stack_000001c0 = in_stack_00000080;
        in_stack_000001c8 = in_stack_00000088;
        in_stack_000001d0 = in_stack_00000090;
        in_stack_000001d8 = in_stack_00000098;
        in_stack_000001e0 = in_stack_000000a0;
      }
    }
    FUN_02177a60(plVar12,&stack0x00000070,uVar8);
    *(long *)(in_stack_00000020 + 0x100) = in_stack_000002f0;
    thunk_FUN_01b4f09c(in_stack_00000020 + 0x100);
  }
  return 1;
}


