/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$.cctor
ENTRY_POINT: 02b19734
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>___cctor
               (long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 02b19748 to 02c1976f has its CatchHandler @ 02b19784 */
  if ((DAT_044a4db8 & 1) == 0) {
    FUN_01d7d918(StringLiteral_2806);
                    /* try { // try from 02b19770 to 02c1977b has its CatchHandler @ 02b1920c */
    FUN_01d7d918(StringLiteral_887);
                    /* try { // try from 02b1977c to 02c19783 has its CatchHandler @ 02b19784 */
    DAT_044a4db8 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02b19748 with catch @ 02b19784
                       catch(type#2 @ 00000000) { ... } // from try @ 02b1977c with catch @ 02b19784
                        */
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3,0);
  }
  iVar2 = thunk_FUN_01dff4e0(param_2,0);
  if (iVar2 != 1) {
    FUN_033b2d60(7,0);
  }
  iVar2 = thunk_FUN_01dff49c(param_2,0,0);
  if (iVar2 != 0) {
    FUN_033b2d60(6,0);
  }
  uVar3 = FUN_033aadfc(param_2,0);
  if (uVar3 < param_3) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar2 = FUN_033aadfc(param_2,0);
  if ((int)(iVar2 - param_3) < *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x28)) {
    FUN_033b2d60(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01dde7f8(lVar8);
  }
  lVar8 = thunk_FUN_01de26bc(param_2,lVar8);
  if (lVar8 != 0) {
    FUN_02b17e88(param_1,lVar8,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x158));
    return;
  }
  lVar8 = thunk_FUN_01de26bc(param_2,*(undefined8 *)StringLiteral_2806);
  if (lVar8 == 0) {
    plVar6 = (long *)thunk_FUN_01de26bc(param_2,*(undefined8 *)StringLiteral_887);
    if (plVar6 == (long *)0x0) {
      FUN_033b3618();
    }
    uVar3 = *(uint *)(param_1 + 0x20);
    if (0 < (int)uVar3) {
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar11 = 0;
      puVar12 = (undefined4 *)(lVar8 + 0x30);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < (int)puVar12[-4]) {
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_0306e8c4(&stack0x00000010,*(undefined8 *)(puVar12 + -2),*puVar12,
                       *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x130));
          lVar10 = thunk_FUN_01de23e8(*(undefined8 *)
                                       (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar10 != 0) &&
             (lVar7 = thunk_FUN_01de26bc(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
            uVar4 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar4,0);
          }
          if (*(uint *)(plVar6 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar6[(long)(int)param_3 + 4] = lVar10;
          thunk_FUN_01e10808(plVar6 + (long)(int)param_3 + 4,lVar10);
          param_3 = param_3 + 1;
        }
        uVar11 = uVar11 + 1;
        puVar12 = puVar12 + 6;
      } while (uVar3 != uVar11);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x20);
    if (0 < iVar2) {
      lVar10 = *(long *)(param_1 + 0x18);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar11 = 0;
      lVar7 = lVar10 + 0x30;
      do {
        if (*(uint *)(lVar10 + 0x18) <= uVar11) {
LAB_02b19a30:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)(lVar7 + -0x10)) {
          uVar9 = *(undefined8 *)(lVar7 + -8);
          uVar4 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_0336f7b8(&stack0x00000010,uVar9,uVar4,0);
          if (*(uint *)(lVar8 + 0x18) <= param_3) goto LAB_02b19a30;
          lVar1 = lVar8 + (long)(int)param_3 * 0x10;
          puVar5 = (undefined8 *)(lVar1 + 0x20);
          *(undefined8 *)(lVar1 + 0x28) = in_stack_00000018;
          *puVar5 = in_stack_00000010;
          param_3 = param_3 + 1;
          thunk_FUN_01e10808(puVar5,0);
          iVar2 = *(int *)(param_1 + 0x20);
        }
        uVar11 = uVar11 + 1;
        lVar7 = lVar7 + 0x18;
      } while ((long)uVar11 < (long)iVar2);
    }
  }
  return;
}


