/*
FUNCTION_NAME: System.Collections.Generic.Comparer<VisualTreeAsset.SlotDefinition>$$System.Collections.IComparer.Compare
ENTRY_POINT: 02940f1c
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


void System_Collections_Generic_Comparer<VisualTreeAsset_SlotDefinition>__System_Collections_IComparer_Compare
               (void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x20;
  long unaff_x21;
  long *plVar5;
  
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  *(undefined1 *)(unaff_x21 + 0xbf1) = 1;
  plVar5 = *(long **)(unaff_x20 + 0x38);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02940f90;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02940f90:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
                    /* try { // try from 02940f9c to 02a40fab has its CatchHandler @ 02941068 */
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  thunk_FUN_01f51358((undefined8 *)(unaff_x20 + 0x38),0);
                    /* try { // try from 02940fbc to 02a40fc3 has its CatchHandler @ 02941064 */
  FUN_02fb7824();
  return;
}


