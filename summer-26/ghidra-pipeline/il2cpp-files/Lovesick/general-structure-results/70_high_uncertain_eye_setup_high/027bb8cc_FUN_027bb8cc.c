/*
FUNCTION_NAME: FUN_027bb8cc
ENTRY_POINT: 027bb8cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 FUN_027bb8cc(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  
  if ((DAT_03788832 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f0900);
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                      );
    DAT_03788832 = 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  if ((uVar1 & 1) == 0) {
    return 3;
  }
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)
             Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
           ) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_027bb980;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_00d59724(param_2,*(long *)
                                   Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                          ,3);
LAB_027bb980:
    plVar3 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
    if (plVar3 != (long *)0x0) {
      lVar4 = *plVar3;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_033f0900) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_027bb9e8;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_00d59724(plVar3,*(long *)PTR_DAT_033f0900,0);
LAB_027bb9e8:
      lVar4 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      if (lVar4 == param_1[6]) {
        return 2;
      }
      return 3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


