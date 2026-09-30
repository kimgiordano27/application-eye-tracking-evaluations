/*
FUNCTION_NAME: UnityEngine.InputSystem.InputBindingResolver$$AddActionMap
ENTRY_POINT: 03a3daa4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_InputSystem_InputBindingResolver__AddActionMap(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  *(undefined1 *)(unaff_x20 + 0xc26) = 1;
  plVar5 = *(long **)(unaff_x19 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* try { // try from 03a3dae0 to 03b3dae3 has its CatchHandler @ 03a3e3e0 */
                    /* try { // try from 03a3dae4 to 03b3daf3 has its CatchHandler @ 03a3e41c */
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
                    /* try { // try from 03a3db10 to 03b3db1f has its CatchHandler @ 03a3e418 */
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_03a3db18;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,2);
LAB_03a3db18:
                    /* WARNING: Could not recover jumptable at 0x03a3db28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}


