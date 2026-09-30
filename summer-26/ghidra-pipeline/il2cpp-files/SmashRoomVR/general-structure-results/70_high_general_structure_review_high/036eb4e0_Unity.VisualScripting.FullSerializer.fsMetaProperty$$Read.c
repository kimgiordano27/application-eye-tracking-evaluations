/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsMetaProperty$$Read
ENTRY_POINT: 036eb4e0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;telemetry_or_network_hits_4
*/


undefined4 Unity_VisualScripting_FullSerializer_fsMetaProperty__Read(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 unaff_w20;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_stack_00000020;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_000002e8;
  
  uVar2 = FUN_036b08d0(unaff_w20,&stack0x000002e8,0);
  if ((uVar2 & 1) == 0) {
    uVar6 = FUN_036fb900(0);
    lVar3 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar3);
      lVar3 = *(long *)PTR_DAT_03d9c920;
    }
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x88);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        uVar7 = FUN_02eeda98(0,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x80),
                             *(undefined4 *)(lVar5 + 0x2c),*(undefined4 *)(lVar5 + 0x30),0);
        uVar6 = FUN_02edd6e8(uVar6,uVar7,0);
        uVar6 = FUN_01f2f4f0(uVar6,*(undefined8 *)StringLiteral_430);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar2 = FUN_03922f24(uVar6,0,0);
        if ((uVar2 & 1) != 0) {
          return 0;
        }
        FUN_036b04b4(unaff_w20,uVar6,0);
        *(undefined8 *)(in_stack_00000020 + 0x118) = uVar6;
        thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
        uVar6 = *(undefined8 *)(in_stack_00000020 + 0x118);
        uVar7 = *(undefined8 *)(in_stack_00000020 + 0x100);
        lVar3 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar3 = *(long *)PTR_DAT_03d9c920;
        }
        uVar1 = FUN_036b0b30(uVar6,uVar7,*(long *)(lVar3 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8),0);
        *(uint *)(in_stack_00000020 + 0x120) = uVar1;
        plVar4 = *(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        lVar3 = *plVar4;
        if (lVar3 == 0) goto LAB_036ecd74;
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          lVar3 = lVar3 + (long)(int)uVar1 * 0x38;
          in_stack_00000088 = *(undefined8 *)(lVar3 + 0x38);
          in_stack_00000080 = *(undefined8 *)(lVar3 + 0x30);
          in_stack_00000098 = *(undefined8 *)(lVar3 + 0x48);
          in_stack_00000090 = *(undefined8 *)(lVar3 + 0x40);
          in_stack_000000a0 = *(undefined8 *)(lVar3 + 0x50);
          in_stack_00000078 = *(undefined8 *)(lVar3 + 0x28);
          in_stack_00000070 = *(undefined8 *)(lVar3 + 0x20);
          uVar6 = *(undefined8 *)PTR_DAT_03d9d6d8;
          in_stack_000000b0 = in_stack_00000070;
          in_stack_000000b8 = in_stack_00000078;
          in_stack_000000c0 = in_stack_00000080;
          in_stack_000000c8 = in_stack_00000088;
          in_stack_000000d0 = in_stack_00000090;
          in_stack_000000d8 = in_stack_00000098;
          in_stack_000000e0 = in_stack_000000a0;
          goto LAB_036e7e98;
        }
      }
LAB_036ecd10:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
  }
  else {
    *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002e8;
    thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
    uVar6 = *(undefined8 *)(in_stack_00000020 + 0x118);
    uVar7 = *(undefined8 *)(in_stack_00000020 + 0x100);
    lVar3 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar3 = *(long *)PTR_DAT_03d9c920;
    }
    uVar1 = FUN_036b0b30(uVar6,uVar7,*(long *)(lVar3 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8),0);
    *(uint *)(in_stack_00000020 + 0x120) = uVar1;
    plVar4 = *(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
    lVar3 = *plVar4;
    if (lVar3 != 0) {
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar1 * 0x38;
        in_stack_00000088 = *(undefined8 *)(lVar3 + 0x38);
        in_stack_00000080 = *(undefined8 *)(lVar3 + 0x30);
        in_stack_00000098 = *(undefined8 *)(lVar3 + 0x48);
        in_stack_00000090 = *(undefined8 *)(lVar3 + 0x40);
        in_stack_000000a0 = *(undefined8 *)(lVar3 + 0x50);
        in_stack_00000078 = *(undefined8 *)(lVar3 + 0x28);
        in_stack_00000070 = *(undefined8 *)(lVar3 + 0x20);
        uVar6 = *(undefined8 *)PTR_DAT_03d9d6d8;
        in_stack_000000f0 = in_stack_00000070;
        in_stack_000000f8 = in_stack_00000078;
        in_stack_00000100 = in_stack_00000080;
        in_stack_00000108 = in_stack_00000088;
        in_stack_00000110 = in_stack_00000090;
        in_stack_00000118 = in_stack_00000098;
        in_stack_00000120 = in_stack_000000a0;
LAB_036e7e98:
        FUN_02177a60(plVar4 + 2,&stack0x00000070,uVar6);
        return 1;
      }
      goto LAB_036ecd10;
    }
  }
LAB_036ecd74:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


