/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 058a6e58
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>___ctor(void)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000068;
  
  uVar1 = FUN_05e1a3d8();
                    /* try { // try from 058a6e5c to 059a6e73 has its CatchHandler @ 058a6ea8 */
  if (uVar1 < unaff_w20) {
    FUN_05e22c10(0);
  }
  iVar2 = FUN_05e1a3d8();
  if ((int)(iVar2 - unaff_w20) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_05e223a8(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    FUN_0322bef4(lVar8);
  }
  lVar8 = thunk_FUN_0322f04c();
  if (lVar8 != 0) {
    FUN_058a54f4();
    return;
  }
  lVar8 = thunk_FUN_0322f04c();
  if (lVar8 == 0) {
    plVar4 = (long *)thunk_FUN_0322f04c();
    if (plVar4 == (long *)0x0) {
      FUN_05e22c48();
    }
    uVar1 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar1) {
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar10 = 0;
      lVar9 = lVar8 + 0x2c;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        if (-1 < *(int *)(lVar9 + -0xc)) {
          in_stack_00000040 = 0;
          uStack0000000000000048 = 0;
          uStack000000000000004c = 0;
          in_stack_00000058 = 0;
          uStack0000000000000050 = 0;
          uStack0000000000000054 = 0;
          FUN_045e4168(&stack0x00000040,*(undefined4 *)(lVar9 + -4));
          lVar5 = thunk_FUN_0322ed78(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_0322f04c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
            FUN_031f225c(uVar7,0);
          }
          if (*(uint *)(plVar4 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2398();
          }
          plVar4[(long)(int)unaff_w20 + 4] = lVar5;
          thunk_FUN_0329bf60(plVar4 + (long)(int)unaff_w20 + 4,lVar5);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x24;
      } while (uVar1 != uVar10);
    }
  }
  else {
    iVar2 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar2) {
      lVar9 = *(long *)(unaff_x21 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar10 = 0;
      puVar11 = (undefined8 *)(lVar9 + 0x2c);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_058a7114;
        if (-1 < *(int *)((long)puVar11 + -0xc)) {
          in_stack_00000068._4_4_ = *(undefined4 *)((long)puVar11 + -4);
          thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                             (long)&stack0x00000068 + 4);
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_058a7114:
                    /* WARNING: Subroutine does not return */
            FUN_031f2398();
          }
          in_stack_00000040 = *puVar11;
          uStack0000000000000050 = (undefined4)puVar11[2];
          uStack0000000000000054 = (undefined4)((ulong)puVar11[2] >> 0x20);
          uStack0000000000000048 = (undefined4)puVar11[1];
          uStack000000000000004c = (undefined4)((ulong)puVar11[1] >> 0x20);
          thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                             &stack0x00000040);
          FUN_05da3e28();
          if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_058a7114;
          lVar5 = lVar8 + (long)(int)unaff_w20 * 0x10;
          puVar3 = (undefined8 *)(lVar5 + 0x20);
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *puVar3 = 0;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_0329bf60(puVar3,0);
          iVar2 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = (undefined8 *)((long)puVar11 + 0x24);
      } while ((long)uVar10 < (long)iVar2);
    }
  }
  return;
}


