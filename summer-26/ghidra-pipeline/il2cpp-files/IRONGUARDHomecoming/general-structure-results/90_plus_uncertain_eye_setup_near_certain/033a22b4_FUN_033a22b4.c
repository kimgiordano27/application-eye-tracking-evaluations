/*
FUNCTION_NAME: FUN_033a22b4
ENTRY_POINT: 033a22b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 120
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_033a22b4(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  
  if ((DAT_048322fe & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionState_OnBeforeInitialUpdate__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_048322fe = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (param_2 != (long *)0x0) {
    lVar8 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_033a236c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(param_2,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,1);
LAB_033a236c:
                    /* try { // try from 033a236c to 034a2393 has its CatchHandler @ 033a249c */
    lVar8 = (*(code *)*puVar5)(param_2,puVar5[1]);
    if (lVar8 != 0) {
      plVar6 = (long *)thunk_FUN_01ecaf38(lVar8,0);
      puVar4 = Method_UnityEngine_InputSystem_InputActionState_OnBeforeInitialUpdate__;
      puVar3 = Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__;
      puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
      if (plVar6 == (long *)0x0) goto LAB_033a248c;
      uVar7 = (**(code **)(*plVar6 + 0x8a8))(plVar6,*(undefined8 *)(*plVar6 + 0x8b0));
      uVar12 = *(undefined8 *)puVar4;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 033a23c8 to 034a23f3 has its CatchHandler @ 033a2498 */
        thunk_FUN_01ee6d7c(*(long *)puVar1);
      }
      uVar12 = FUN_03579868(uVar12,0);
      uVar10 = FUN_022ee1a4(uVar7,uVar12,*(undefined8 *)puVar3);
      if ((uVar10 & 1) != 0) {
                    /* try { // try from 033a23f8 to 034a2403 has its CatchHandler @ 033a2494 */
        uVar7 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)puVar2);
                    /* try { // try from 033a2404 to 034a2483 has its CatchHandler @ 033a2208 */
        uVar10 = FUN_033a22b4(param_1,uVar7);
        if ((uVar10 & 1) != 0) {
          return 1;
        }
      }
    }
    lVar9 = *param_2;
    lVar8 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_033a2470;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(param_2,lVar8,0);
LAB_033a2470:
                    /* try { // try from 033a2484 to 034a2487 has its CatchHandler @ 033a2490 */
                    /* WARNING: Could not recover jumptable at 0x033a2488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 033a2488 to 034a24ab has its CatchHandler @ 033a2208 */
    uVar7 = (*(code *)*puVar5)(param_2,puVar5[1]);
    return uVar7;
  }
LAB_033a248c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


