/*
FUNCTION_NAME: Unity.VisualScripting.Dependencies.NCalc.EvaluateParameterHandler$$BeginInvoke
ENTRY_POINT: 03eecbe4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure
*/


undefined8
Unity_VisualScripting_Dependencies_NCalc_EvaluateParameterHandler__BeginInvoke(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint in_w9;
  long in_x10;
  long in_x11;
  long *unaff_x19;
  
  if (*(long *)(*(long *)(param_1 + 200) + in_x11 * 8 + -8) == in_x10) {
    uVar2 = FUN_034b1454();
    return uVar2;
  }
  bVar1 = *(byte *)(*(long *)
                     Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInParent__ +
                   0x130);
  if ((bVar1 <= in_w9) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) ==
      *(long *)Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInParent__)) {
    uVar3 = (**(code **)(param_1 + 0x288))();
    if ((uVar3 & 1) != 0) {
      uVar2 = (**(code **)(*unaff_x19 + 0x2d8))();
      uVar2 = System_Console__SetOut(uVar2,0,0);
      return uVar2;
    }
    return 0;
  }
  bVar1 = *(byte *)(*(long *)Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__ +
                   0x130);
  if ((in_w9 < bVar1) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__)) {
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__ +
                     0x130);
    if ((in_w9 < bVar1) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__)) {
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
      uVar2 = thunk_FUN_01f117cc();
      FUN_0356d1e8(uVar2,0);
      uVar4 = thunk_FUN_01efb3a4(PTR_DAT_0457d160);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar2,uVar4);
    }
  }
  uVar2 = FUN_034b2b68();
  return uVar2;
}


