/*
FUNCTION_NAME: FUN_097065d4
ENTRY_POINT: 097065d4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_097065d4(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_0a5473d1 & 1) == 0) {
    FUN_04447ba8(UnityEngine_Rendering_GPUInstanceDataBufferUploader_GPUResources_var);
    FUN_04447ba8(UnityEngine_Rendering_GPUPrefixSum_DirectArgs_var);
    DAT_0a5473d1 = 1;
  }
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0xb8) >> 4 & 1) != 0) {
      if ((*(long *)(param_1 + 0x68) == 0) ||
         (lVar2 = FUN_0744290c(*(long *)(param_1 + 0x68),param_2,
                               *(undefined8 *)
                                UnityEngine_Rendering_GPUInstanceDataBufferUploader_GPUResources_var
                              ), lVar2 == 0)) goto LAB_097066dc;
      plVar3 = (long *)(lVar2 + 0x18);
      lVar2 = *plVar3;
      *plVar3 = 0;
      thunk_FUN_044bb4b4(plVar3,0);
      puVar1 = UnityEngine_Rendering_GPUPrefixSum_DirectArgs_var;
      while (lVar2 != 0) {
        if (*(long *)(param_1 + 0x108) == 0) goto LAB_097066dc;
        FUN_0970bd4c(*(long *)(param_1 + 0x108),*(undefined8 *)(lVar2 + 0x20),0);
        plVar3 = (long *)(lVar2 + 0x18);
        lVar4 = *plVar3;
        *(undefined8 *)(lVar2 + 0x20) = 0;
        thunk_FUN_044bb4b4(lVar2 + 0x20,0);
        *plVar3 = 0;
        thunk_FUN_044bb4b4(plVar3,0);
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_097066dc;
        System_Collections_Generic_ArraySortHelper<RaycastHit2D>__Heapsort
                  (*(long *)(param_1 + 0x58),lVar2,*(undefined8 *)puVar1);
        lVar2 = lVar4;
      }
      *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) & 0xffffffef;
    }
    return;
  }
LAB_097066dc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


