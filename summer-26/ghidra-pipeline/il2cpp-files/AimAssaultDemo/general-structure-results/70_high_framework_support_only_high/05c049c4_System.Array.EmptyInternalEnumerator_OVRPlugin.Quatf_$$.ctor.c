/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$.ctor
ENTRY_POINT: 05c049c4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>___ctor(undefined8 param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
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
  
  FUN_062638b4(param_1,0);
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x148);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    FUN_03775678(lVar7);
  }
  lVar7 = thunk_FUN_037787d0();
  if (lVar7 != 0) {
    FUN_05c02fd0();
    return;
  }
  lVar7 = thunk_FUN_037787d0();
  if (lVar7 == 0) {
    plVar3 = (long *)thunk_FUN_037787d0();
    if (plVar3 == (long *)0x0) {
      FUN_06264154();
    }
    uVar1 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar1) {
      lVar7 = *(long *)(unaff_x21 + 0x18);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar10 = 0;
      lVar9 = lVar7 + 0x30;
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        if (-1 < *(int *)(lVar9 + -0x10)) {
          in_stack_00000078 = 0;
          in_stack_00000070 = 0;
          in_stack_00000088 = 0;
          in_stack_00000080 = 0;
          in_stack_00000068 = 0;
          in_stack_00000060 = 0;
          FUN_047f3abc(&stack0x00000060,*(undefined8 *)(lVar9 + -8));
          lVar4 = thunk_FUN_037784fc(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
            uVar6 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar6,0);
          }
          if (*(uint *)(plVar3 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          plVar3[(long)(int)unaff_w20 + 4] = lVar4;
          thunk_FUN_037aeb94(plVar3 + (long)(int)unaff_w20 + 4,lVar4);
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
        FUN_0373b7b4();
      }
      uVar10 = 0;
      puVar11 = (undefined8 *)(lVar9 + 0x30);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_05c04c44;
        if (-1 < *(int *)(puVar11 + -2)) {
          in_stack_00000098 = puVar11[-1];
          thunk_FUN_037784fc(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                             &stack0x00000098);
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_05c04c44:
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          in_stack_00000080 = puVar11[4];
          in_stack_00000068 = puVar11[1];
          in_stack_00000060 = *puVar11;
          in_stack_00000078 = puVar11[3];
          in_stack_00000070 = puVar11[2];
          thunk_FUN_037784fc(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                             &stack0x00000060);
          FUN_061df224();
          if (*(uint *)(lVar7 + 0x18) <= unaff_w20) goto LAB_05c04c44;
          lVar4 = lVar7 + (long)(int)unaff_w20 * 0x10;
          puVar2 = (undefined8 *)(lVar4 + 0x20);
          *(undefined8 *)(lVar4 + 0x28) = 0;
          *puVar2 = 0;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_037aeb94(puVar2,0);
          iVar8 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 7;
      } while ((long)uVar10 < (long)iVar8);
    }
  }
  return;
}


