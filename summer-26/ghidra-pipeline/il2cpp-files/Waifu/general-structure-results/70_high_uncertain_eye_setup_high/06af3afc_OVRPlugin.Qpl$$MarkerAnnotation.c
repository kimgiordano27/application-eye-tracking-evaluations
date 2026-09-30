/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerAnnotation
ENTRY_POINT: 06af3afc
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerAnnotation(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined8 uStack0000000000000090;
  undefined4 uStack00000000000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  
  uStack0000000000000090 = param_2;
  _uStack00000000000000a0 = param_1;
  do {
    do {
      do {
        uVar4 = FUN_05fc2a98(&stack0x00000090,DAT_083e5988);
        uVar7 = _uStack00000000000000a0;
        if ((uVar4 & 1) == 0) {
          *(undefined4 *)(unaff_x19 + 0x20) = 1;
          FUN_06af3e4c();
          lVar9 = *(long *)(unaff_x19 + 0x18);
          if (lVar9 != 0) {
            (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28))
            ;
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        lVar9 = *unaff_x20;
        uVar3 = uStack00000000000000a0;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)(unaff_x23 + 0x4b0)) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
              goto LAB_06af3b78;
            }
            uVar4 = uVar4 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_0338f71c();
LAB_06af3b78:
        uVar4 = (*(code *)*puVar5)();
      } while ((uVar4 & 1) == 0);
      lVar9 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)(unaff_x23 + 0x4b0)) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
            goto LAB_06af3be0;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_0338f71c();
LAB_06af3be0:
      uVar4 = (*(code *)*puVar5)();
    } while ((uVar4 & 1) == 0);
    lVar9 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)(unaff_x23 + 0x4b0)) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06af3c44;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_0338f71c();
LAB_06af3c44:
    plVar6 = (long *)(*(code *)*puVar5)();
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar9 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)(unaff_x24 + 0xe8)) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_06af3ca8;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_0338f71c(plVar6,*(long *)(unaff_x24 + 0xe8),1);
LAB_06af3ca8:
    uVar7 = (*(code *)*puVar5)(plVar6,uVar7 & 0xffffffff,(long)&stack0x00000048 + 4,puVar5[1]);
    if ((uVar7 & 1) != 0) {
      lVar9 = *(long *)(unaff_x19 + 0x28);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      in_stack_000000d8 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
      in_stack_000000d0 = in_stack_00000050;
      in_stack_000000b8 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_000000b0 = in_stack_00000070;
      *(undefined8 *)(unaff_x25 + 0x34) = uStack0000000000000064;
      *(ulong *)(unaff_x25 + 0x2c) = CONCAT44(uStack0000000000000060,uStack000000000000005c);
      *(undefined8 *)(unaff_x25 + 0x14) = uStack0000000000000084;
      *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      lVar2 = DAT_083f61b0;
      lVar10 = *(long *)(lVar9 + 0x10);
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        lVar10 = lVar10 + (long)(int)uVar1 * 0x40;
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar10 + 0x20) = uVar3;
        *(undefined4 *)(lVar10 + 0x24) = in_stack_00000048._4_4_;
        uVar8 = *(undefined8 *)(unaff_x25 + 0x2c);
        *(undefined8 *)(lVar10 + 0x3c) = *(undefined8 *)(unaff_x25 + 0x34);
        *(undefined8 *)(lVar10 + 0x34) = uVar8;
        *(undefined8 *)(lVar10 + 0x30) = in_stack_000000d8;
        *(undefined8 *)(lVar10 + 0x28) = in_stack_00000050;
        uVar8 = *(undefined8 *)(unaff_x25 + 0xc);
        *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)(unaff_x25 + 0x14);
        *(undefined8 *)(lVar10 + 0x50) = uVar8;
        *(undefined8 *)(lVar10 + 0x4c) = in_stack_000000b8;
        *(undefined8 *)(lVar10 + 0x44) = in_stack_00000070;
      }
      else {
        uVar12 = *(undefined8 *)(unaff_x25 + 0x2c);
        uVar14 = *(undefined8 *)(unaff_x25 + 0x14);
        uVar13 = *(undefined8 *)(unaff_x25 + 0xc);
        uVar8 = *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
        uStack00000000000000f0 = uVar3;
        uStack00000000000000f4 = in_stack_00000048._4_4_;
        *(undefined8 *)(unaff_x22 + 0x1c) = *(undefined8 *)(unaff_x25 + 0x34);
        *(undefined8 *)(unaff_x22 + 0x14) = uVar12;
        *(undefined8 *)(unaff_x22 + 0x10) = in_stack_000000d8;
        *(undefined8 *)(unaff_x22 + 8) = in_stack_00000050;
        *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
        *(undefined8 *)(unaff_x22 + 0x30) = uVar13;
        *(undefined8 *)(unaff_x22 + 0x2c) = in_stack_000000b8;
        *(undefined8 *)(unaff_x22 + 0x24) = in_stack_00000070;
        FUN_04bf9a38(lVar9,&stack0x000000f0,uVar8);
      }
    }
  } while( true );
}


