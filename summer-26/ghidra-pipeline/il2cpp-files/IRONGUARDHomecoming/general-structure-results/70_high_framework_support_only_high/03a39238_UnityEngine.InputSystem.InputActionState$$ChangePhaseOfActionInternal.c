/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionState$$ChangePhaseOfActionInternal
ENTRY_POINT: 03a39238
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03a39758) */

long UnityEngine_InputSystem_InputActionState__ChangePhaseOfActionInternal(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x28;
  long in_stack_00000020;
  uint in_stack_00000028;
  
  iVar3 = FUN_0340d374();
                    /* try { // try from 03a393b0 to 03b3945b has its CatchHandler @ 03a393b0
                       catch() { ... } // from try @ 03a393b0 with catch @ 03a393b0
                       catch() { ... } // from try @ 03a394ec with catch @ 03a393b0
                       catch() { ... } // from try @ 03a39590 with catch @ 03a393b0
                       catch() { ... } // from try @ 03a395e8 with catch @ 03a393b0 */
  if (iVar3 == 0) {
                    /* try { // try from 03a39498 to 03b394a3 has its CatchHandler @ 03a3959c */
    if ((in_stack_00000028 & 1) == 0) {
      if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03a38568();
    }
    else {
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar6 = FUN_03a3822c();
      if ((uVar6 & 1) != 0) {
        if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_03a38568();
      }
    }
  }
  do {
    lVar7 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03a3902c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_03a3902c:
    uVar6 = (*(code *)*puVar4)();
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar6 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_01f116d0();
      if (plVar5 == (long *)0x0) {
        return in_stack_00000020;
      }
      lVar7 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 == 0) goto LAB_03a39594;
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_03a3908c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_03a3908c:
    plVar5 = (long *)(*(code *)*puVar4)();
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)StringLiteral_5859 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_5859
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar5);
      }
    }
    if (unaff_w21 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x03a390e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar7 = (*(code *)((ulong)*(ushort *)(unaff_x22 + unaff_x25 * 2) * 4 + 0x3a38fe0))();
      return lVar7;
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03a395b0;
    }
  }
LAB_03a39594:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03a395b0:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return in_stack_00000020;
}


