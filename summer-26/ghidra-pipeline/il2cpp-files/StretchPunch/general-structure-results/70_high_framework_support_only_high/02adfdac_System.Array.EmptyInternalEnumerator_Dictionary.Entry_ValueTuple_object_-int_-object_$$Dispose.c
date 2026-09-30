/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<Dictionary.Entry<ValueTuple<object,-int>,-object>>$$Dispose
ENTRY_POINT: 02adfdac
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array_EmptyInternalEnumerator<Dictionary_Entry<ValueTuple<object,_int>,_object>>__Dispose
               (long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x23;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  if ((*(byte *)(unaff_x23 + 0xd02) & 1) == 0) {
    FUN_01d7d918(StringLiteral_2806);
    FUN_01d7d918(StringLiteral_887);
    *(undefined1 *)(unaff_x23 + 0xd02) = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3,0);
  }
  iVar1 = thunk_FUN_01dff4e0(param_2,0);
  if (iVar1 != 1) {
    FUN_033b2d60(7,0);
  }
  iVar1 = thunk_FUN_01dff49c(param_2,0,0);
  if (iVar1 != 0) {
    FUN_033b2d60(6,0);
  }
  uVar2 = FUN_033aadfc(param_2,0);
  if (uVar2 < param_3) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar1 = FUN_033aadfc(param_2,0);
  if ((int)(iVar1 - param_3) < *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x28)) {
    FUN_033b2d60(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01dde7f8(lVar8);
  }
  lVar8 = thunk_FUN_01de26bc(param_2,lVar8);
  if (lVar8 != 0) {
    FUN_02ade65c(param_1,lVar8,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x158));
    return;
  }
  lVar8 = thunk_FUN_01de26bc(param_2,*(undefined8 *)StringLiteral_2806);
  if (lVar8 == 0) {
    plVar6 = (long *)thunk_FUN_01de26bc(param_2,*(undefined8 *)StringLiteral_887);
    if (plVar6 == (long *)0x0) {
      FUN_033b3618();
    }
    uVar2 = *(uint *)(param_1 + 0x20);
    if (0 < (int)uVar2) {
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = 0;
      puVar11 = (undefined4 *)(lVar8 + 0x2c);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < (int)puVar11[-3]) {
          in_stack_00000010 = 0;
          FUN_0306d040(&stack0x00000010,puVar11[-1],*puVar11,
                       *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x130));
          in_stack_00000008 = in_stack_00000010;
          lVar9 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8),
                                     &stack0x00000008);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar9 != 0) &&
             (lVar7 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
            uVar3 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar3,0);
          }
          if (*(uint *)(plVar6 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar6[(long)(int)param_3 + 4] = lVar9;
          thunk_FUN_01e10808(plVar6 + (long)(int)param_3 + 4,lVar9);
          param_3 = param_3 + 1;
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 4;
      } while (uVar2 != uVar10);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    if (0 < iVar1) {
      lVar9 = *(long *)(param_1 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = 0;
      puVar11 = (undefined4 *)(lVar9 + 0x2c);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_02ae00b8;
        if (-1 < (int)puVar11[-3]) {
          in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,puVar11[-1]);
          uVar3 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70),
                                     &stack0x00000008);
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_02ae00b8:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          in_stack_00000028._4_4_ = *puVar11;
          uVar4 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78),
                                     (long)&stack0x00000028 + 4);
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_0336f7b8(&stack0x00000010,uVar3,uVar4,0);
          if (*(uint *)(lVar8 + 0x18) <= param_3) goto LAB_02ae00b8;
          lVar7 = lVar8 + (long)(int)param_3 * 0x10;
          puVar5 = (undefined8 *)(lVar7 + 0x20);
          *(undefined8 *)(lVar7 + 0x28) = in_stack_00000018;
          *puVar5 = in_stack_00000010;
          param_3 = param_3 + 1;
          thunk_FUN_01e10808(puVar5,0);
          iVar1 = *(int *)(param_1 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 4;
      } while ((long)uVar10 < (long)iVar1);
    }
  }
  return;
}


