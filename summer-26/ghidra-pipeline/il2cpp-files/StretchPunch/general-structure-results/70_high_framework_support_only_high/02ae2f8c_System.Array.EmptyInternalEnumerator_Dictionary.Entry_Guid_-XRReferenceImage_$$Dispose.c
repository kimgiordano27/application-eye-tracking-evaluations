/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<Dictionary.Entry<Guid,-XRReferenceImage>>$$Dispose
ENTRY_POINT: 02ae2f8c
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


void System_Array_EmptyInternalEnumerator<Dictionary_Entry<Guid,_XRReferenceImage>>__Dispose
               (long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((DAT_044a4d0b & 1) == 0) {
    FUN_01d7d918(StringLiteral_2806);
    FUN_01d7d918(StringLiteral_887);
    DAT_044a4d0b = 1;
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
  lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8(lVar7);
  }
  lVar7 = thunk_FUN_01de26bc(param_2,lVar7);
  if (lVar7 != 0) {
    FUN_02ae1770(param_1,lVar7,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x158));
    return;
  }
  lVar7 = thunk_FUN_01de26bc(param_2,*(undefined8 *)StringLiteral_2806);
  if (lVar7 == 0) {
    plVar5 = (long *)thunk_FUN_01de26bc(param_2,*(undefined8 *)StringLiteral_887);
    if (plVar5 == (long *)0x0) {
      FUN_033b3618();
    }
    uVar2 = *(uint *)(param_1 + 0x20);
    if (0 < (int)uVar2) {
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar9 = 0;
      puVar10 = (undefined8 *)(lVar7 + 0x30);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)(puVar10 + -2)) {
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          System_Collections_Generic_List<InterpretedFrameInfo>__GetRange
                    (&stack0x00000010,*(undefined4 *)(puVar10 + -1),*puVar10,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x130));
          lVar8 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8));
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar8 != 0) &&
             (lVar6 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar3 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar3,0);
          }
          if (*(uint *)(plVar5 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar5[(long)(int)param_3 + 4] = lVar8;
          thunk_FUN_01e10808(plVar5 + (long)(int)param_3 + 4,lVar8);
          param_3 = param_3 + 1;
        }
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 3;
      } while (uVar2 != uVar9);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    if (0 < iVar1) {
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar9 = 0;
      puVar10 = (undefined8 *)(lVar8 + 0x30);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_02ae3294;
        if (-1 < *(int *)(puVar10 + -2)) {
          uVar3 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70));
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_02ae3294:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_0336f7b8(&stack0x00000010,uVar3,*puVar10,0);
          if (*(uint *)(lVar7 + 0x18) <= param_3) goto LAB_02ae3294;
          lVar6 = lVar7 + (long)(int)param_3 * 0x10;
          puVar4 = (undefined8 *)(lVar6 + 0x20);
          *(undefined8 *)(lVar6 + 0x28) = in_stack_00000018;
          *puVar4 = in_stack_00000010;
          param_3 = param_3 + 1;
          thunk_FUN_01e10808(puVar4,0);
          iVar1 = *(int *)(param_1 + 0x20);
        }
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 3;
      } while ((long)uVar9 < (long)iVar1);
    }
  }
  return;
}


