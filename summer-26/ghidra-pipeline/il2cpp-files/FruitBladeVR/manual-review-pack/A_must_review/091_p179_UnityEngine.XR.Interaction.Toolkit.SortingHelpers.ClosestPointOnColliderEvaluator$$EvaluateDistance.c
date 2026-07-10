/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.SortingHelpers.ClosestPointOnColliderEvaluator$$EvaluateDistance
ENTRY_POINT: 03614010
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_3;strong_file_logging_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4
UnityEngine_XR_Interaction_Toolkit_SortingHelpers_ClosestPointOnColliderEvaluator__EvaluateDistance
          (undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((DAT_03ef6977 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_TypeInfo_03cb6038)
    ;
    DAT_03ef6977 = 1;
  }
                    /* try { // try from 03614044 to 03714053 has its CatchHandler @ 03614a38 */
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (param_2 != (long *)0x0) {
                    /* try { // try from 03614054 to 0371405f has its CatchHandler @ 03614a34 */
    lVar2 = *param_2;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 03614064 to 0371406f has its CatchHandler @ 03614a18 */
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* try { // try from 03614078 to 03714083 has its CatchHandler @ 03614a20 */
        if (*(long *)(piVar4 + -2) ==
            *(long *)
             PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_TypeInfo_03cb6038) {
                    /* try { // try from 03614098 to 037140a7 has its CatchHandler @ 03614a1c */
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138);
          goto LAB_036140a8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01c8cb54(param_2,*(long *)
                                   PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_TypeInfo_03cb6038
                          ,7);
                    /* try { // try from 03614094 to 03714097 has its CatchHandler @ 036149ac */
LAB_036140a8:
                    /* try { // try from 036140b0 to 037140bb has its CatchHandler @ 036149b0 */
    lVar2 = (*(code *)*puVar1)(param_2,param_3,puVar1[1]);
    if (lVar2 != 0) {
      UnityEngine_Transform__get_position(lVar2,0);
      Unity_Mathematics_float3__op_Implicit(0);
      Unity_Mathematics_float3__op_Implicit(0);
      UnityEngine_XR_Interaction_Toolkit_Utilities_XRInteractableUtility__TryGetClosestPointOnCollider
                (param_3,&local_38);
      return uStack_30._4_4_;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


