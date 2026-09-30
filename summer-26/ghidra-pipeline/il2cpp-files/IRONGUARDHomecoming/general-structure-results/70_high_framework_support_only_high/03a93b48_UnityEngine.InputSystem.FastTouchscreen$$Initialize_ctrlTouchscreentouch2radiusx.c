/*
FUNCTION_NAME: UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch2radiusx
ENTRY_POINT: 03a93b48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a939d8) */
/* WARNING: Removing unreachable block (ram,0x03a939fc) */
/* WARNING: Removing unreachable block (ram,0x03a93a00) */
/* WARNING: Removing unreachable block (ram,0x03a93cc4) */

void UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch2radiusx(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  int unaff_w22;
  long *plVar6;
  
  uVar1 = (**(code **)(param_1 + 0x3b8))();
                    /* try { // try from 03a93b64 to 03b93b8b has its CatchHandler @ 03a93cec */
  if ((unaff_w22 < 0) && (plVar6 = *(long **)(unaff_x19 + 0xe), plVar6 != (long *)0x0)) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* try { // try from 03a93c08 to 03b93c27 has its CatchHandler @ 03a93cf0 */
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03a93c0c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03a93c0c:
    (*(code *)*puVar2)(plVar6,puVar2[1]);
  }
                    /* try { // try from 03a93c28 to 03b93cc7 has its CatchHandler @ 03a93a54 */
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*(long *)StringLiteral_8334 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_026f6f9c(unaff_x19 + 2,uVar1,*(undefined8 *)StringLiteral_8354);
  return;
}


