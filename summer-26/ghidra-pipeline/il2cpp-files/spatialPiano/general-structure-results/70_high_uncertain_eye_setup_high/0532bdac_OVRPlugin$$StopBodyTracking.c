/*
FUNCTION_NAME: OVRPlugin$$StopBodyTracking
ENTRY_POINT: 0532bdac
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StopBodyTracking(ulong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack0000000000000008;
  undefined1 *puStack0000000000000010;
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
  undefined8 uStack0000000000000060;
  undefined4 uStack0000000000000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  
  puStack0000000000000010 = (undefined1 *)&stack0x00000060;
  uStack0000000000000008 = 0;
  uStack0000000000000060 = param_2;
  _uStack0000000000000070 = param_1;
  do {
    do {
      do {
        do {
          uVar4 = FUN_04aeea48(&stack0x00000060,*unaff_x27);
          uVar7 = _uStack0000000000000070;
          if ((uVar4 & 1) == 0) {
            FUN_04aeea44(&stack0x00000060,*unaff_x25);
            *(undefined4 *)(unaff_x19 + 0x20) = 1;
            FUN_0532c0f8();
            lVar9 = *(long *)(unaff_x19 + 0x18);
            if (lVar9 != 0) {
              (**(code **)(lVar9 + 0x18))
                        (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar9 = *unaff_x20;
          uVar3 = uStack0000000000000070;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x23) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                goto LAB_0532be20;
              }
              uVar4 = uVar4 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_02f421d0();
LAB_0532be20:
          uVar4 = (*(code *)*puVar5)();
        } while ((uVar4 & 1) == 0);
        lVar9 = *unaff_x20;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x23) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
              goto LAB_0532be88;
            }
            uVar4 = uVar4 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02f421d0();
LAB_0532be88:
        uVar4 = (*(code *)*puVar5)();
      } while ((uVar4 & 1) == 0);
      lVar9 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x23) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0532beec;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02f421d0();
LAB_0532beec:
      plVar6 = (long *)(*(code *)*puVar5)();
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar9 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x24) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_0532bf50;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02f421d0(plVar6,*unaff_x24,1);
LAB_0532bf50:
      uVar7 = (*(code *)*puVar5)(plVar6,uVar7 & 0xffffffff,(long)&stack0x00000018 + 4,puVar5[1]);
    } while ((uVar7 & 1) == 0);
    lVar9 = *(long *)(unaff_x19 + 0x28);
    if (lVar9 == 0) {
LAB_0532c084:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar1 = *(int *)(lVar9 + 0x1c);
    in_stack_00000088 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    in_stack_00000080 = in_stack_00000040;
    lVar10 = *(long *)(lVar9 + 0x10);
    lVar12 = *unaff_x28;
    *(ulong *)(unaff_x26 + 0x28) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *(undefined8 *)(unaff_x26 + 0x20) = in_stack_00000020;
    *(undefined8 *)(unaff_x26 + 0x34) = uStack0000000000000034;
    *(ulong *)(unaff_x26 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    *(undefined8 *)(unaff_x26 + 0x14) = uStack0000000000000054;
    *(ulong *)(unaff_x26 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    *(int *)(lVar9 + 0x1c) = iVar1 + 1;
    if (lVar10 == 0) goto LAB_0532c084;
    uVar2 = *(uint *)(lVar9 + 0x18);
    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
      lVar10 = lVar10 + (long)(int)uVar2 * 0x40;
      uVar13 = *(undefined8 *)(unaff_x26 + 0x28);
      uVar8 = *(undefined8 *)(unaff_x26 + 0x20);
      uVar15 = *(undefined8 *)(unaff_x26 + 0x34);
      uVar14 = *(undefined8 *)(unaff_x26 + 0x2c);
      *(uint *)(lVar9 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar10 + 0x30) = uVar13;
      *(undefined8 *)(lVar10 + 0x28) = uVar8;
      *(undefined8 *)(lVar10 + 0x3c) = uVar15;
      *(undefined8 *)(lVar10 + 0x34) = uVar14;
      uVar13 = *(undefined8 *)(unaff_x26 + 0x14);
      uVar8 = *(undefined8 *)(unaff_x26 + 0xc);
      *(undefined4 *)(lVar10 + 0x20) = uVar3;
      *(undefined4 *)(lVar10 + 0x24) = in_stack_00000018._4_4_;
      *(undefined8 *)(lVar10 + 0x4c) = in_stack_00000088;
      *(undefined8 *)(lVar10 + 0x44) = in_stack_00000040;
      *(undefined8 *)(lVar10 + 0x58) = uVar13;
      *(undefined8 *)(lVar10 + 0x50) = uVar8;
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
      *(ulong *)(unaff_x29 + 0x10) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *(undefined8 *)(unaff_x29 + 8) = in_stack_00000020;
      uStack00000000000000c0 = uVar3;
      uStack00000000000000c4 = in_stack_00000018._4_4_;
      *(undefined8 *)(unaff_x29 + 0x1c) = uStack0000000000000034;
      *(ulong *)(unaff_x29 + 0x14) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      *(ulong *)(unaff_x29 + 0x2c) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x29 + 0x24) = in_stack_00000040;
      *(undefined8 *)(unaff_x29 + 0x38) = uStack0000000000000054;
      *(ulong *)(unaff_x29 + 0x30) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      FUN_03b97138(lVar9,&stack0x000000c0,uVar8);
    }
  } while( true );
}


