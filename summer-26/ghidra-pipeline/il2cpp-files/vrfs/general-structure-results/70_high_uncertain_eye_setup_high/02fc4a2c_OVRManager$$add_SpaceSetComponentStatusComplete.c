/*
FUNCTION_NAME: OVRManager$$add_SpaceSetComponentStatusComplete
ENTRY_POINT: 02fc4a2c
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceSetComponentStatusComplete(int param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  int unaff_w22;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000098;
  
  if ((int)(unaff_w22 - unaff_w20) < param_1) {
    FUN_031db448(5,0);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x170);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    FUN_015c2790(lVar7);
  }
  lVar7 = thunk_FUN_015d0480();
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02fc4aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120) + 8))();
    return;
  }
  lVar7 = thunk_FUN_015d0480();
  if (lVar7 == 0) {
    plVar4 = (long *)thunk_FUN_015d0480();
    if (plVar4 == (long *)0x0) {
      FUN_031dbd4c();
    }
    uVar1 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar1) {
      lVar7 = *(long *)(unaff_x21 + 0x18);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar10 = 0;
      lVar9 = lVar7 + 0x2c;
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        if (-1 < *(int *)(lVar9 + -0xc)) {
          in_stack_00000078 = 0;
          in_stack_00000070 = 0;
          in_stack_00000088 = 0;
          in_stack_00000080 = 0;
          in_stack_00000068 = 0;
          in_stack_00000060 = 0;
          FUN_0517a924(&stack0x00000060,*(undefined4 *)(lVar9 + -4));
          if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf0) + 0x132) &
              1) == 0) {
            FUN_015c2790();
          }
          lVar2 = thunk_FUN_015d01b0();
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if ((lVar2 != 0) &&
             (lVar5 = thunk_FUN_015d0480(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
            uVar6 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
            FUN_0160ee7c(uVar6,0);
          }
          if (*(uint *)(plVar4 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          plVar4[(long)(int)unaff_w20 + 4] = lVar2;
          thunk_FUN_01656ef8(plVar4 + (long)(int)unaff_w20 + 4,lVar2);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x38;
      } while (uVar1 != uVar10);
    }
  }
  else {
    iVar8 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar8) {
      lVar9 = *(long *)(unaff_x21 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar10 = 0;
      puVar11 = (undefined8 *)(lVar9 + 0x2c);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_02fc4cf4;
        if (-1 < *(int *)((long)puVar11 + -0xc)) {
          in_stack_00000098._4_4_ = *(undefined4 *)((long)puVar11 + -4);
          lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8);
          if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
            lVar2 = FUN_015c2790();
          }
          thunk_FUN_015d01b0(lVar2,(long)&stack0x00000098 + 4);
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_02fc4cf4:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          in_stack_00000080 = puVar11[4];
          in_stack_00000068 = puVar11[1];
          in_stack_00000060 = *puVar11;
          in_stack_00000078 = puVar11[3];
          in_stack_00000070 = puVar11[2];
          in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,*(undefined4 *)(puVar11 + 5));
          lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe0);
          if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
            lVar2 = FUN_015c2790();
          }
          thunk_FUN_015d01b0(lVar2,&stack0x00000060);
          FUN_03f035c4();
          if (*(uint *)(lVar7 + 0x18) <= unaff_w20) goto LAB_02fc4cf4;
          lVar2 = lVar7 + (long)(int)unaff_w20 * 0x10;
          puVar3 = (undefined8 *)(lVar2 + 0x20);
          *(undefined8 *)(lVar2 + 0x28) = 0;
          *puVar3 = 0;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_01656ef8(puVar3,0);
          iVar8 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 7;
      } while ((long)uVar10 < (long)iVar8);
    }
  }
  return;
}


