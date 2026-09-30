/*
FUNCTION_NAME: FUN_05cde91c
ENTRY_POINT: 05cde91c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_05cde91c(long param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
                    /* try { // try from 05cde91c to 05dde923 has its CatchHandler @ 05cde92c */
  if ((DAT_06dc2d46 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                );
    DAT_06dc2d46 = 1;
  }
  if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar2 = (long *)FUN_05c40580(*(long *)(param_1 + 0x88),0);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                     + 0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar2);
    }
  }
  lVar3 = FUN_05ce858c(param_1,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(lVar3 + 0x18) == 0) {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_05cdef08(lVar3,plVar2[2],(int)plVar2[3]);
  }
  else {
    lVar3 = FUN_05ce858c(param_1,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(lVar3 + 0x18) == 0) {
      thunk_FUN_02dfd288(
                        Method_Unity_Burst_FunctionPointer<XRPokeLogic_CalculateInteractionPoint_00001047_PostfixBurstDelegate>_get_Value__
                        );
      uVar4 = thunk_FUN_02dd3144();
      FUN_05ce583c(uVar4,0);
      uVar5 = thunk_FUN_02dfd288(
                                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_set_raycastMask__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar4,uVar5);
    }
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_05cdf030(lVar3,plVar2[2],(int)plVar2[3]);
  }
  return;
}


