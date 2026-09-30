/*
FUNCTION_NAME: OVRPlugin$$GetSystemHmd3DofModeEnabled
ENTRY_POINT: 0532bfb8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSystemHmd3DofModeEnabled(long param_1)

{
  int iVar1;
  undefined1 in_CY;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 in_w8;
  long lVar6;
  long in_x9;
  int *piVar7;
  long in_x10;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_000000c0;
  
  do {
    if ((bool)in_CY) {
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(in_x10 + 0x20) + 0xc0) + 0x70);
      *(ulong *)(unaff_x29 + 0x10) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *(undefined8 *)(unaff_x29 + 8) = in_stack_00000020;
      *(undefined8 *)(unaff_x29 + 0x1c) = uStack0000000000000034;
      *(ulong *)(unaff_x29 + 0x14) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      *(ulong *)(unaff_x29 + 0x2c) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x29 + 0x24) = in_stack_00000040;
      *(undefined8 *)(unaff_x29 + 0x38) = uStack0000000000000054;
      *(ulong *)(unaff_x29 + 0x30) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      in_stack_000000c0 = unaff_w21;
      FUN_03b97138(param_1,&stack0x000000c0,uVar5);
    }
    else {
      lVar6 = in_x9 + in_x11 * 0x40;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x28);
      uVar5 = *(undefined8 *)(unaff_x26 + 0x20);
      uVar10 = *(undefined8 *)(unaff_x26 + 0x34);
      uVar9 = *(undefined8 *)(unaff_x26 + 0x2c);
      *(int *)(param_1 + 0x18) = (int)in_x11 + 1;
      *(undefined8 *)(lVar6 + 0x30) = uVar8;
      *(undefined8 *)(lVar6 + 0x28) = uVar5;
      *(undefined8 *)(lVar6 + 0x3c) = uVar10;
      *(undefined8 *)(lVar6 + 0x34) = uVar9;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x14);
      uVar5 = *(undefined8 *)(unaff_x26 + 0xc);
      *(undefined4 *)(lVar6 + 0x20) = unaff_w21;
      *(undefined4 *)(lVar6 + 0x24) = in_w8;
      *(undefined8 *)(lVar6 + 0x4c) = in_stack_00000088;
      *(undefined8 *)(lVar6 + 0x44) = in_stack_00000080;
      *(undefined8 *)(lVar6 + 0x58) = uVar8;
      *(undefined8 *)(lVar6 + 0x50) = uVar5;
    }
    do {
      do {
        do {
          uVar2 = FUN_04aeea48(&stack0x00000060,*unaff_x27);
          unaff_w21 = in_stack_00000070;
          if ((uVar2 & 1) == 0) {
            FUN_04aeea44(&stack0x00000060,*unaff_x25);
            *(undefined4 *)(unaff_x19 + 0x20) = 1;
            FUN_0532c0f8();
            lVar6 = *(long *)(unaff_x19 + 0x18);
            if (lVar6 != 0) {
              (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar6 = *unaff_x20;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x23) {
                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 7) * 0x10 + 0x138);
                goto LAB_0532be20;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)FUN_02f421d0();
LAB_0532be20:
          uVar2 = (*(code *)*puVar3)();
        } while ((uVar2 & 1) == 0);
        lVar6 = *unaff_x20;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x23) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 8) * 0x10 + 0x138);
              goto LAB_0532be88;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_02f421d0();
LAB_0532be88:
        uVar2 = (*(code *)*puVar3)();
      } while ((uVar2 & 1) == 0);
      lVar6 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x23) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0532beec;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0();
LAB_0532beec:
      plVar4 = (long *)(*(code *)*puVar3)();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar6 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_0532bf50;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0(plVar4,*unaff_x24,1);
LAB_0532bf50:
      uVar2 = (*(code *)*puVar3)(plVar4,unaff_w21,(long)&stack0x00000018 + 4,puVar3[1]);
    } while ((uVar2 & 1) == 0);
    param_1 = *(long *)(unaff_x19 + 0x28);
    if (param_1 == 0) {
LAB_0532c084:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar1 = *(int *)(param_1 + 0x1c);
    in_stack_00000088 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    in_x9 = *(long *)(param_1 + 0x10);
    in_x10 = *unaff_x28;
    *(ulong *)(unaff_x26 + 0x28) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *(undefined8 *)(unaff_x26 + 0x20) = in_stack_00000020;
    *(undefined8 *)(unaff_x26 + 0x34) = uStack0000000000000034;
    *(ulong *)(unaff_x26 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    in_stack_00000080 = in_stack_00000040;
    *(undefined8 *)(unaff_x26 + 0x14) = uStack0000000000000054;
    *(ulong *)(unaff_x26 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    *(int *)(param_1 + 0x1c) = iVar1 + 1;
    if (in_x9 == 0) goto LAB_0532c084;
    in_x11 = (long)(int)*(uint *)(param_1 + 0x18);
    in_CY = *(uint *)(in_x9 + 0x18) <= *(uint *)(param_1 + 0x18);
    in_w8 = in_stack_00000018._4_4_;
  } while( true );
}


