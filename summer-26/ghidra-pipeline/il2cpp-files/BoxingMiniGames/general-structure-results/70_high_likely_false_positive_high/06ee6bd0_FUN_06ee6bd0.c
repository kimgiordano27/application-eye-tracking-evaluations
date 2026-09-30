/*
FUNCTION_NAME: FUN_06ee6bd0
ENTRY_POINT: 06ee6bd0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10
*/


void FUN_06ee6bd0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  puVar4 = UnityEngine_UIElements_RepaintData_TypeInfo;
  puVar3 = UnityEngine_Rendering_Universal_RenderingUtils_TypeInfo;
  puVar2 = System_Xml_Schema_KSStruct_TypeInfo;
  puVar1 = PTR_DAT_07a02f20;
  if ((DAT_07eeb29c & 1) == 0) {
    FUN_03642964(System_Xml_Schema_KSStruct_TypeInfo);
    FUN_03642964(PTR_DAT_07a02f20);
    FUN_03642964(PTR_DAT_079f49f0);
    FUN_03642964(UnityEngine_UIElements_Repeat_TypeInfo);
    FUN_03642964(UnityEngine_Rendering_RenderGraphModule_Util_RenderGraphUtils_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_RepeatButton_TypeInfo);
    FUN_03642964(Unity_InferenceEngine_Graph_ReplacedPatterns_TypeInfo);
    FUN_03642964(Oculus_Platform_Request_TypeInfo);
    FUN_03642964(System_Net_Cache_RequestCache_TypeInfo);
    FUN_03642964(UnityEngine_Rendering_Universal_RenderingUtils_TypeInfo);
    FUN_03642964(System_Net_Cache_RequestCacheLevel_TypeInfo);
    FUN_03642964(System_Net_Cache_RequestCachePolicy_TypeInfo);
    FUN_03642964(System_Net_Cache_RequestCacheProtocol_TypeInfo);
    FUN_03642964(NAudio_Wave_ResamplerDmoStream_TypeInfo);
    FUN_03642964(NAudio_Dmo_ResamplerMediaComObject_TypeInfo);
    FUN_03642964(MS_Internal_Xml_XPath_ResetableIterator_TypeInfo);
    FUN_03642964(Unity_InferenceEngine_Layers_Reshape_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_RepaintData_TypeInfo);
    DAT_07eeb29c = 1;
  }
  plVar5 = (long *)FUN_03642a4c(*(undefined8 *)puVar2,6);
  lVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_0721d084(lVar6,*(undefined8 *)puVar3,*(undefined8 *)puVar4,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_0367fd24(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_06ee6fe8:
    uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar8,0);
  }
  puVar3 = MS_Internal_Xml_XPath_ResetableIterator_TypeInfo;
  puVar2 = System_Net_Cache_RequestCache_TypeInfo;
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar6;
    thunk_FUN_036b7ad0(plVar5 + 4,lVar6);
    lVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
    FUN_0721d084(lVar6,*(undefined8 *)puVar2,*(undefined8 *)puVar3,0);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_0367fd24(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_06ee6fe8;
    puVar3 = NAudio_Wave_ResamplerDmoStream_TypeInfo;
    puVar2 = System_Net_Cache_RequestCachePolicy_TypeInfo;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
      plVar5[5] = lVar6;
      thunk_FUN_036b7ad0(plVar5 + 5,lVar6);
      lVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
      FUN_0721d084(lVar6,*(undefined8 *)puVar3,*(undefined8 *)puVar2,0);
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_0367fd24(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_06ee6fe8;
      puVar3 = Unity_InferenceEngine_Layers_Reshape_TypeInfo;
      puVar2 = NAudio_Dmo_ResamplerMediaComObject_TypeInfo;
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = lVar6;
        thunk_FUN_036b7ad0(plVar5 + 6,lVar6);
        lVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
        FUN_0721d084(lVar6,*(undefined8 *)puVar2,*(undefined8 *)puVar3,0);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_0367fd24(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_06ee6fe8;
        puVar3 = System_Net_Cache_RequestCacheProtocol_TypeInfo;
        puVar2 = System_Net_Cache_RequestCacheLevel_TypeInfo;
        if ((*(uint *)(plVar5 + 3) & 0xfffffffc) != 0) {
          plVar5[7] = lVar6;
          thunk_FUN_036b7ad0(plVar5 + 7,lVar6);
          lVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
          FUN_0721d084(lVar6,*(undefined8 *)puVar2,*(undefined8 *)puVar3,0);
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_0367fd24(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
          goto LAB_06ee6fe8;
          puVar3 = Oculus_Platform_Request_TypeInfo;
          puVar2 = Unity_InferenceEngine_Graph_ReplacedPatterns_TypeInfo;
          if (4 < *(uint *)(plVar5 + 3)) {
            plVar5[8] = lVar6;
            thunk_FUN_036b7ad0(plVar5 + 8,lVar6);
            lVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
            FUN_0721d084(lVar6,*(undefined8 *)puVar3,*(undefined8 *)puVar2,0);
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_0367fd24(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
            goto LAB_06ee6fe8;
            puVar4 = UnityEngine_UIElements_RepeatButton_TypeInfo;
            puVar3 = UnityEngine_UIElements_Repeat_TypeInfo;
            puVar2 = UnityEngine_Rendering_RenderGraphModule_Util_RenderGraphUtils_TypeInfo;
            puVar1 = PTR_DAT_079f49f0;
            if (5 < *(uint *)(plVar5 + 3)) {
              plVar5[9] = lVar6;
              thunk_FUN_036b7ad0(plVar5 + 9,lVar6);
              **(long **)(*(long *)puVar2 + 0xb8) = (long)plVar5;
              thunk_FUN_036b7ad0(*(undefined8 *)(*(long *)puVar2 + 0xb8),plVar5);
              uVar8 = FUN_03642a4c(*(undefined8 *)puVar1,6);
              FUN_05d3bc48(uVar8,*(undefined8 *)puVar4,0);
              puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              *puVar9 = uVar8;
              thunk_FUN_036b7ad0(puVar9,uVar8);
              uVar8 = FUN_03642a4c(*(undefined8 *)puVar3,2);
              puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
              *puVar9 = uVar8;
              thunk_FUN_036b7ad0(puVar9,uVar8);
              *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = 0x5143;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


