/*
FUNCTION_NAME: UnityEngine.Rendering.DebugFrameTiming$$<RegisterDebugUI>b__17_15
ENTRY_POINT: 03bf7928
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03bf7b74) */

void UnityEngine_Rendering_DebugFrameTiming__<RegisterDebugUI>b__17_15(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  undefined8 *puVar10;
  long unaff_x21;
  undefined8 *puVar11;
  long unaff_x22;
  
  puVar3 = Method_System_Collections_Comparer_GetObjectData__;
  puVar11 = *(undefined8 **)(unaff_x21 + 0xf80);
  puVar10 = *(undefined8 **)(unaff_x20 + 0x7b0);
  if ((*(byte *)(unaff_x22 + 0xaaf) & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_13648);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_14204);
    thunk_FUN_01efb3a4(Method_System_Collections_Comparer_GetObjectData__);
    thunk_FUN_01efb3a4(StringLiteral_14203);
    *(undefined1 *)(unaff_x22 + 0xaaf) = 1;
  }
  puVar2 = StringLiteral_14204;
  uVar5 = thunk_FUN_01f117cc(*puVar11);
  FUN_034f6024(uVar5,param_1,*puVar10,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  FUN_03b5ae28(uVar5,0);
  *(undefined1 *)(param_1 + 0x10) = 1;
  plVar6 = (long *)FUN_02f0ec24((undefined8 *)(param_1 + 0x48),*(undefined8 *)puVar2);
  puVar4 = StringLiteral_13648;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03bf7a64;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03bf7a64:
    uVar8 = (*(code *)*puVar10)(plVar6,puVar10[1]);
    if ((uVar8 & 1) == 0) break;
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03bf7ac0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_03bf7ac0:
    uVar5 = (*(code *)*puVar10)(plVar6,puVar10[1]);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03b59274(uVar5,0);
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03bf7b44;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_03bf7b44:
    (*(code *)*puVar10)(plVar6,puVar10[1]);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}


