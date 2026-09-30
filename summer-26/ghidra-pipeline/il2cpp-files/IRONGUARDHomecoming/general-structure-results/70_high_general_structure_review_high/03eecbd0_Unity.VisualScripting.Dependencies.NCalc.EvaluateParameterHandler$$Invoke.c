/*
FUNCTION_NAME: Unity.VisualScripting.Dependencies.NCalc.EvaluateParameterHandler$$Invoke
ENTRY_POINT: 03eecbd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure
*/


undefined8 Unity_VisualScripting_Dependencies_NCalc_EvaluateParameterHandler__Invoke(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *in_x9;
  long *unaff_x19;
  
  bVar1 = *(byte *)(param_1 + 0x130);
  bVar2 = *(byte *)(*in_x9 + 0x130);
  if ((bVar2 <= bVar1) && (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) == *in_x9)) {
    uVar3 = FUN_034b1454();
    return uVar3;
  }
  bVar2 = *(byte *)(*(long *)
                     Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInParent__ +
                   0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) ==
      *(long *)Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInParent__)) {
    uVar4 = (**(code **)(param_1 + 0x288))();
    if ((uVar4 & 1) != 0) {
      uVar3 = (**(code **)(*unaff_x19 + 0x2d8))();
      uVar3 = System_Console__SetOut(uVar3,0,0);
      return uVar3;
    }
    return 0;
  }
  bVar2 = *(byte *)(*(long *)Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__ +
                   0x130);
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) !=
      *(long *)Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__)) {
    bVar2 = *(byte *)(*(long *)Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__ +
                     0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__)) {
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
      uVar3 = thunk_FUN_01f117cc();
      FUN_0356d1e8(uVar3,0);
      uVar5 = thunk_FUN_01efb3a4(PTR_DAT_0457d160);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar3,uVar5);
    }
  }
  uVar3 = FUN_034b2b68();
  return uVar3;
}


