/*
FUNCTION_NAME: FUN_05d8bca0
ENTRY_POINT: 05d8bca0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d8bca0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar1 = FUN_05dbac18(param_2,0);
  if ((uVar1 & 1) == 0) {
    lVar3 = *(long *)(param_2 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),param_1,*(undefined8 *)(lVar3 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  thunk_FUN_02dc61f4(
                    Method_UnityEngine_InputSystem_Utilities_OneOrMore<InputActionMap,_ReadOnlyArray<InputActionMap>>_GetEnumerator__
                    );
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  thunk_FUN_02dc61f4(
                    Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__
                    );
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = thunk_FUN_02dc61f4(
                            Method_UnityEngine_InputSystem_Utilities_OneOrMore<InputActionMap,_ReadOnlyArray<InputActionMap>>_op_Implicit__
                            );
  uVar2 = FUN_04e8e6a4(uVar2,uVar4,uVar5,0);
  thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
  uVar4 = thunk_FUN_02d9d534();
  FUN_05007004(uVar4,uVar2,0);
  uVar2 = thunk_FUN_02dc61f4(
                            Method_UnityEngine_InputSystem_Utilities_OneOrMore<InputActionMap,_ReadOnlyArray<InputActionMap>>_op_Implicit__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar4,uVar2);
}


