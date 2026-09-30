/*
FUNCTION_NAME: OVRPlugin$$GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 0532bee8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetLocalTrackingSpaceRecenterCount(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
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
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  
code_r0x0532bee8:
  puVar4 = (undefined8 *)(param_1 + 0x138);
  do {
    plVar3 = (long *)(*(code *)*puVar4)();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0532bf50;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*unaff_x24,1);
LAB_0532bf50:
    uVar7 = (*(code *)*puVar4)(plVar3,unaff_w21,(long)&stack0x00000018 + 4,puVar4[1]);
    if ((uVar7 & 1) != 0) {
      lVar6 = *(long *)(unaff_x19 + 0x28);
      if (lVar6 == 0) {
LAB_0532c084:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      iVar1 = *(int *)(lVar6 + 0x1c);
      in_stack_00000088 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      in_stack_00000080 = in_stack_00000040;
      lVar8 = *(long *)(lVar6 + 0x10);
      lVar10 = *unaff_x28;
      *(ulong *)(unaff_x26 + 0x28) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *(undefined8 *)(unaff_x26 + 0x20) = in_stack_00000020;
      *(undefined8 *)(unaff_x26 + 0x34) = uStack0000000000000034;
      *(ulong *)(unaff_x26 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      *(undefined8 *)(unaff_x26 + 0x14) = uStack0000000000000054;
      *(ulong *)(unaff_x26 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(int *)(lVar6 + 0x1c) = iVar1 + 1;
      if (lVar8 == 0) goto LAB_0532c084;
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar2 * 0x40;
        uVar11 = *(undefined8 *)(unaff_x26 + 0x28);
        uVar5 = *(undefined8 *)(unaff_x26 + 0x20);
        uVar13 = *(undefined8 *)(unaff_x26 + 0x34);
        uVar12 = *(undefined8 *)(unaff_x26 + 0x2c);
        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar8 + 0x30) = uVar11;
        *(undefined8 *)(lVar8 + 0x28) = uVar5;
        *(undefined8 *)(lVar8 + 0x3c) = uVar13;
        *(undefined8 *)(lVar8 + 0x34) = uVar12;
        uVar11 = *(undefined8 *)(unaff_x26 + 0x14);
        uVar5 = *(undefined8 *)(unaff_x26 + 0xc);
        *(undefined4 *)(lVar8 + 0x20) = unaff_w21;
        *(undefined4 *)(lVar8 + 0x24) = in_stack_00000018._4_4_;
        *(undefined8 *)(lVar8 + 0x4c) = in_stack_00000088;
        *(undefined8 *)(lVar8 + 0x44) = in_stack_00000040;
        *(undefined8 *)(lVar8 + 0x58) = uVar11;
        *(undefined8 *)(lVar8 + 0x50) = uVar5;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
        *(ulong *)(unaff_x29 + 0x10) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(unaff_x29 + 8) = in_stack_00000020;
        uStack00000000000000c4 = in_stack_00000018._4_4_;
        *(undefined8 *)(unaff_x29 + 0x1c) = uStack0000000000000034;
        *(ulong *)(unaff_x29 + 0x14) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        *(ulong *)(unaff_x29 + 0x2c) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
        *(undefined8 *)(unaff_x29 + 0x24) = in_stack_00000040;
        *(undefined8 *)(unaff_x29 + 0x38) = uStack0000000000000054;
        *(ulong *)(unaff_x29 + 0x30) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
        uStack00000000000000c0 = unaff_w21;
        FUN_03b97138(lVar6,&stack0x000000c0,uVar5);
      }
    }
    do {
      do {
        uVar7 = FUN_04aeea48(&stack0x00000060,*unaff_x27);
        unaff_w21 = in_stack_00000070;
        if ((uVar7 & 1) == 0) {
          FUN_04aeea44(&stack0x00000060,*unaff_x25);
          *(undefined4 *)(unaff_x19 + 0x20) = 1;
          FUN_0532c0f8();
          lVar6 = *(long *)(unaff_x19 + 0x18);
          if (lVar6 != 0) {
            (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28))
            ;
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar6 = *unaff_x20;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x23) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 7) * 0x10 + 0x138);
              goto LAB_0532be20;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_02f421d0();
LAB_0532be20:
        uVar7 = (*(code *)*puVar4)();
      } while ((uVar7 & 1) == 0);
      lVar6 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x23) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 8) * 0x10 + 0x138);
            goto LAB_0532be88;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0();
LAB_0532be88:
      uVar7 = (*(code *)*puVar4)();
    } while ((uVar7 & 1) == 0);
    param_1 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) {
          param_1 = param_1 + (long)*piVar9 * 0x10;
          goto code_r0x0532bee8;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0();
  } while( true );
}


