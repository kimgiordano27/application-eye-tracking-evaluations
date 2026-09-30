/*
FUNCTION_NAME: FUN_01ea6b70
ENTRY_POINT: 01ea6b70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_5
*/


long * FUN_01ea6b70(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_0377fe91 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__
                      );
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    thunk_FUN_00d48444(PTR_DAT_033f19d8);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                      );
    DAT_0377fe91 = 1;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar3 = (long *)FUN_01ec1550(*(long *)(param_1 + 0x60),param_2,0);
  if (plVar3 == (long *)0x0) {
    if (*(int *)(*(long *)
                  Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar3 = (long *)FUN_01fbcfac(param_2,0);
    return plVar3;
  }
  bVar1 = *(byte *)(*plVar3 + 300);
  bVar2 = *(byte *)(*(long *)
                     Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                   + 300);
  if ((bVar2 <= bVar1) &&
     (lVar4 = *(long *)(*plVar3 + 200),
     *(long *)(lVar4 + (ulong)bVar2 * 8 + -8) ==
     *(long *)
      Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
     )) {
    bVar2 = *(byte *)(*(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__ + 300);
    if ((bVar1 < bVar2) ||
       (*(long *)(lVar4 + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_033f19d8 + 300);
      if ((bVar1 < bVar2) || (*(long *)(lVar4 + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_033f19d8)
         ) goto LAB_01ea6cbc;
      FUN_01e9e9f0(param_1,plVar3);
    }
    else {
      FUN_01e9df38(param_1,plVar3);
    }
    return plVar3;
  }
LAB_01ea6cbc:
                    /* WARNING: Subroutine does not return */
  FUN_00da544c(plVar3);
}


