/*
FUNCTION_NAME: FUN_01e8346c
ENTRY_POINT: 01e8346c
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


long * FUN_01e8346c(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_0377fe0c & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__
                      );
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    thunk_FUN_00d48444(PTR_DAT_033f19d8);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                      );
    DAT_0377fe0c = 1;
  }
  if ((*(long *)(param_1 + 0x58) == 0) ||
     (lVar3 = FUN_01eb80b0(*(long *)(param_1 + 0x58),0), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar4 = (long *)FUN_01ec1550(lVar3,param_2,0);
  if (plVar4 == (long *)0x0) {
    if (*(int *)(*(long *)
                  Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar4 = (long *)FUN_01fbcfac(param_2,0);
    return plVar4;
  }
  bVar1 = *(byte *)(*plVar4 + 300);
  bVar2 = *(byte *)(*(long *)
                     Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                   + 300);
  if ((bVar2 <= bVar1) &&
     (lVar3 = *(long *)(*plVar4 + 200),
     *(long *)(lVar3 + (ulong)bVar2 * 8 + -8) ==
     *(long *)
      Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
     )) {
    bVar2 = *(byte *)(*(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__ + 300);
    if ((bVar1 < bVar2) ||
       (*(long *)(lVar3 + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_033f19d8 + 300);
      if ((bVar1 < bVar2) || (*(long *)(lVar3 + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_033f19d8)
         ) goto LAB_01e835c4;
      FUN_01e7d088(param_1,plVar4);
    }
    else {
      FUN_01e7c3d0(param_1,plVar4);
    }
    return plVar4;
  }
LAB_01e835c4:
                    /* WARNING: Subroutine does not return */
  FUN_00da544c(plVar4);
}


