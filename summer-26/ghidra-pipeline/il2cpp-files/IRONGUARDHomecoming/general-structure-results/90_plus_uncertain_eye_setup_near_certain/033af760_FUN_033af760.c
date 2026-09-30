/*
FUNCTION_NAME: FUN_033af760
ENTRY_POINT: 033af760
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033af8a8) */

undefined8 FUN_033af760(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  puVar2 = Method_UnityEngine_InputSystem_InputManager_TryGetDevice__;
  if ((DAT_0483236d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputManager_TryGetDevice__);
    DAT_0483236d = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar3 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_034c776c(plVar3,0);
  FUN_033af438(param_1,plVar3);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar3 + 0x208))(plVar3,0,*(undefined8 *)(*plVar3 + 0x210));
  uVar4 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ + 0xe0
              ) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = FUN_03504470(uVar4,0);
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_033af884;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_033af884:
  (*(code *)*puVar5)(plVar3,puVar5[1]);
  return uVar4;
}


