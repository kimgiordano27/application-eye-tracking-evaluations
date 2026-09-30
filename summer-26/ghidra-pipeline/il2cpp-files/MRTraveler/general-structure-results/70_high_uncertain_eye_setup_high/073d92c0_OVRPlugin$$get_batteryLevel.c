/*
FUNCTION_NAME: OVRPlugin$$get_batteryLevel
ENTRY_POINT: 073d92c0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 OVRPlugin__get_batteryLevel(undefined1 param_1 [16])

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *unaff_x20;
  undefined8 *puVar9;
  undefined4 *unaff_x23;
  long unaff_x24;
  int iVar10;
  undefined8 *unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  uint in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  char in_stack_00000128;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  
  unaff_x26[1] = param_1._8_8_;
  *unaff_x26 = param_1._0_8_;
  lVar7 = *unaff_x29;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar7);
    lVar7 = *unaff_x29;
  }
  lVar4 = *(long *)(unaff_x24 + 0x20);
  if (lVar4 != 0) {
    puVar8 = *(undefined4 **)(lVar7 + 0xb8);
    iVar10 = 0;
    uVar15 = puVar8[1];
    uVar14 = puVar8[2];
    uVar16 = *puVar8;
    puVar9 = (undefined8 *)PTR_DAT_08eb5ba0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar10) {
        return uVar16;
      }
      FUN_0516b218(&stack0x00000070,lVar4,iVar10,*puVar9);
      in_stack_00000108 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_00000118 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
      in_stack_00000110 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
      uVar5 = CONCAT44(uStack0000000000000090,uStack000000000000008c);
      in_stack_00000100 = in_stack_00000070;
      *(ulong *)((long)unaff_x28 + 0x54) = CONCAT44(in_stack_00000098,uStack0000000000000094);
      *(undefined8 *)((long)unaff_x28 + 0x4c) = uVar5;
      lVar7 = *(long *)(unaff_x24 + 0x20);
      if (lVar7 == 0) break;
      iVar1 = *(int *)(lVar7 + 0x18);
      iVar10 = iVar10 + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar10 / iVar1;
      }
      FUN_0516b218(&stack0x00000070,lVar7,iVar10 - iVar2 * iVar1,*puVar9);
      uVar12 = (undefined4)uVar5;
      in_stack_000000d8 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_000000d0 = in_stack_00000070;
      in_stack_000000e8 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
      in_stack_000000e0 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
      in_stack_000000f0 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
      if (in_stack_00000128 == '\0') {
        if ((in_stack_00000098 & 0xff) == 0) goto LAB_073d9374;
      }
      else {
        if ((in_stack_00000098 & 0xff) == 0) {
LAB_073d9374:
          if (*(long *)(unaff_x24 + 0x20) == 0) break;
          if (*(int *)(*(long *)(unaff_x24 + 0x20) + 0x18) == 1) goto LAB_073d9388;
          lVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb5bc0);
          FUN_07145224(lVar7,0);
          in_stack_00000158 = in_stack_00000108;
          in_stack_00000150 = in_stack_00000100;
          *(undefined8 *)((long)unaff_x28 + 0x94) = *(undefined8 *)((long)unaff_x28 + 0x44);
          *(undefined8 *)((long)unaff_x28 + 0x8c) = *(undefined8 *)((long)unaff_x28 + 0x3c);
          FUN_0737f84c(&stack0x00000070,unaff_x27,&stack0x00000150,0);
          if (lVar7 == 0) break;
          *(ulong *)(lVar7 + 0x24) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
          *(ulong *)(lVar7 + 0x1c) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
          *(ulong *)(lVar7 + 0x18) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
          *(undefined8 *)(lVar7 + 0x10) = in_stack_00000070;
          in_stack_00000158 = in_stack_000000d8;
          in_stack_00000150 = in_stack_000000d0;
          *(undefined8 *)((long)unaff_x28 + 0x94) = *(undefined8 *)((long)unaff_x28 + 0x14);
          *(undefined8 *)((long)unaff_x28 + 0x8c) = *(undefined8 *)((long)unaff_x28 + 0xc);
          FUN_0737f84c(&stack0x00000070,unaff_x27,&stack0x00000150,0);
          uVar5 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
          *(ulong *)(lVar7 + 0x40) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
          *(undefined8 *)(lVar7 + 0x38) = in_stack_00000070;
          *(ulong *)(lVar7 + 0x4c) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
          *(undefined8 *)(lVar7 + 0x44) = uVar5;
          uVar11 = FUN_073d9690(&stack0x00000100,unaff_x27);
          *(undefined4 *)(lVar7 + 0x2c) = uVar11;
          *(int *)(lVar7 + 0x30) = (int)uVar5;
          *(undefined4 *)(lVar7 + 0x34) = uVar12;
          FUN_073d96b4(*unaff_x23,unaff_x23[1],unaff_x23[2],*(undefined4 *)(lVar7 + 0x10),
                       *(undefined4 *)(lVar7 + 0x14),*(undefined4 *)(lVar7 + 0x18));
          uVar11 = unaff_x23[4];
          uVar13 = unaff_x23[5];
          uVar12 = OVRPlugin__set_ipd(unaff_x23[3],uVar11,uVar13,unaff_x23[6],
                                      *(undefined4 *)(lVar7 + 0x1c),*(undefined4 *)(lVar7 + 0x20),
                                      *(undefined4 *)(lVar7 + 0x24),*(undefined4 *)(lVar7 + 0x28));
          *(undefined4 *)(lVar7 + 0x58) = uVar12;
          puVar3 = PTR_DAT_08eb5ba8;
          uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb5ba8);
          FUN_073d8a38(uVar5,lVar7,*(undefined8 *)PTR_DAT_08eb5bb0);
          uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
          FUN_073d8a38(uVar5,lVar7,*(undefined8 *)PTR_DAT_08eb5bb8);
          unaff_x28 = &stack0x000000d0;
          uVar12 = FUN_073d8608();
          _uStack00000000000000c0 = CONCAT44(uVar11,uVar12);
          puVar9 = (undefined8 *)PTR_DAT_08eb5ba0;
          in_stack_000000c8 = uVar13;
        }
        else {
LAB_073d9388:
          in_stack_00000158 = in_stack_00000108;
          in_stack_00000150 = in_stack_00000100;
          *(undefined8 *)((long)unaff_x28 + 0x94) = *(undefined8 *)((long)unaff_x28 + 0x44);
          *(undefined8 *)((long)unaff_x28 + 0x8c) = *(undefined8 *)((long)unaff_x28 + 0x3c);
          FUN_0737f84c(&stack0x00000070,unaff_x27,&stack0x00000150,0);
          uStack00000000000000b4 = CONCAT44(uStack0000000000000088,uStack0000000000000084);
          in_stack_000000a8 = uStack0000000000000078;
          in_stack_000000a0 = in_stack_00000070;
          uStack00000000000000b0 = uStack0000000000000080;
          FUN_0737f108(&stack0x00000130,&stack0x000000a0,0);
          uStack0000000000000078 = 0;
          in_stack_00000070 = 0;
          FUN_073d40f4(*unaff_x20,&stack0x00000070);
          _uStack00000000000000c0 = in_stack_00000070;
          in_stack_000000c8 = uStack0000000000000078;
        }
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar6 = FUN_073d2688(uVar16,uVar15,uVar14,&stack0x000000c0);
        uVar12 = in_stack_000000c8;
        if ((uVar6 & 1) != 0) {
          uVar16 = uStack00000000000000c0;
          uVar15 = uStack00000000000000c4;
          FUN_0737f108(unaff_x26,&stack0x00000130,0);
          uVar14 = uVar12;
        }
      }
      lVar4 = *(long *)(unaff_x24 + 0x20);
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


