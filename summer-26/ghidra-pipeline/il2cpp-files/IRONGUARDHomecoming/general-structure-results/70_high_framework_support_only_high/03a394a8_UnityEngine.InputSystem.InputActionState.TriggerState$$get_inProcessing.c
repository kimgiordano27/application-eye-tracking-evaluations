/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionState.TriggerState$$get_inProcessing
ENTRY_POINT: 03a394a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03a39758) */

long UnityEngine_InputSystem_InputActionState_TriggerState__get_inProcessing(ulong param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  long in_stack_00000020;
  
  if ((param_1 & 1) != 0) {
    if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03a38568();
  }
  do {
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03a3902c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03a3902c:
    uVar6 = (*(code *)*puVar3)();
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar6 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01f116d0();
      if (plVar4 == (long *)0x0) {
        return in_stack_00000020;
      }
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_03a39594;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_03a3908c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03a3908c:
    plVar4 = (long *)(*(code *)*puVar3)();
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)StringLiteral_5859 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_5859
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar4);
      }
    }
    if (unaff_w21 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x03a390e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar5 = (*(code *)((ulong)*(ushort *)(unaff_x22 + unaff_x25 * 2) * 4 + 0x3a38fe0))();
      return lVar5;
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03a395b0;
    }
  }
LAB_03a39594:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_03a395b0:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return in_stack_00000020;
}


