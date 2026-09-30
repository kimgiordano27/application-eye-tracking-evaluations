/*
FUNCTION_NAME: UnityEngine.InputSystem.Joystick$$get_current
ENTRY_POINT: 03a67498
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a67560) */

undefined8 UnityEngine_InputSystem_Joystick__get_current(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_2 != 1) {
    plVar4 = (long *)thunk_FUN_01f116d0();
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto code_r0x03a67548;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
code_r0x03a67548:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar4 = (long *)__cxa_begin_catch(param_1);
  lVar8 = *plVar4;
  __cxa_end_catch();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar4 = (long *)thunk_FUN_01f116d0();
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03a673c8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_03a673c8:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar8);
  }
  plVar4 = *(long **)(unaff_x19 + 0x18);
  if (plVar4 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
    if (iVar2 == 0) {
      if (*(long **)(unaff_x19 + 0x18) == (long *)0x0) goto LAB_03a67460;
      (**(code **)(**(long **)(unaff_x19 + 0x18) + 0x308))();
    }
    if (unaff_x20 != 0) {
      if (*(int *)(unaff_x20 + 0x88) != 1) {
        *(undefined1 *)(unaff_x19 + 0x28) = 1;
      }
      return 1;
    }
  }
LAB_03a67460:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


