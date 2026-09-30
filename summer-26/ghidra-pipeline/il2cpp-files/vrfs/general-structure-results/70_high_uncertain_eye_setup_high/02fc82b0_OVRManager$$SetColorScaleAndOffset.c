/*
FUNCTION_NAME: OVRManager$$SetColorScaleAndOffset
ENTRY_POINT: 02fc82b0
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetColorScaleAndOffset(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  int iVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  lVar2 = thunk_FUN_015d0480();
  if (lVar2 == 0) {
    plVar7 = (long *)thunk_FUN_015d0480();
    if (plVar7 == (long *)0x0) {
      FUN_031dbd4c();
    }
    uVar1 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar1) {
      lVar2 = *(long *)(unaff_x21 + 0x18);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar10 = 0;
      puVar11 = (undefined4 *)(lVar2 + 0x2c);
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        if (-1 < (int)puVar11[-3]) {
          in_stack_00000010 = 0;
          FUN_0517aac4(&stack0x00000010,puVar11[-1],*puVar11,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8));
          in_stack_00000008 = in_stack_00000010;
          lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf0);
          if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
            lVar9 = FUN_015c2790();
          }
          lVar9 = thunk_FUN_015d01b0(lVar9,&stack0x00000008);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if ((lVar9 != 0) &&
             (lVar3 = thunk_FUN_015d0480(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0)) {
            uVar4 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
            FUN_0160ee7c(uVar4,0);
          }
          if (*(uint *)(plVar7 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          plVar7[(long)(int)unaff_w20 + 4] = lVar9;
          thunk_FUN_01656ef8(plVar7 + (long)(int)unaff_w20 + 4,lVar9);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 4;
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
      puVar11 = (undefined4 *)(lVar9 + 0x2c);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_02fc84a8;
        if (-1 < (int)puVar11[-3]) {
          in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,puVar11[-1]);
          lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8);
          if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
            lVar3 = FUN_015c2790();
          }
          uVar4 = thunk_FUN_015d01b0(lVar3,&stack0x00000008);
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_02fc84a8:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          in_stack_00000028._4_4_ = *puVar11;
          lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe0);
          if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
            lVar3 = FUN_015c2790();
          }
          uVar5 = thunk_FUN_015d01b0(lVar3,(long)&stack0x00000028 + 4);
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_03f035c4(&stack0x00000010,uVar4,uVar5,0);
          if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_02fc84a8;
          lVar3 = lVar2 + (long)(int)unaff_w20 * 0x10;
          puVar6 = (undefined8 *)(lVar3 + 0x20);
          *(undefined8 *)(lVar3 + 0x28) = in_stack_00000018;
          *puVar6 = in_stack_00000010;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_01656ef8(puVar6,0);
          iVar8 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 4;
      } while ((long)uVar10 < (long)iVar8);
    }
  }
  return;
}


