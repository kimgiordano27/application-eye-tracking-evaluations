/*
FUNCTION_NAME: FUN_08a6ea04
ENTRY_POINT: 08a6ea04
PROGRAM: cac-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_08a6ea04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = 
  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<ForwardLights_SetupLightPassData,_UnsafeGraphContext>_TypeInfo
  ;
  if ((DAT_096a4cc1 & 1) == 0) {
                    /* try { // try from 08a6ea28 to 08b6ea6b has its CatchHandler @ 08a6fae8 */
    FUN_03f13384(UnityEngine_UIElements_EventCallback<NavigationSubmitEvent>_TypeInfo);
    FUN_03f13384(
                Unity_VisualScripting_InstanceFunctionInvoker<TTarget,_TParam0,_TParam1,_TParam2,_TParam3,_TParam4,_TResult>_var
                );
    FUN_03f13384(PTR_DAT_09125e88);
    FUN_03f13384(PTR_DAT_09125708);
    FUN_03f13384(UnityEngine_UIElements_EventCallback<PointerCancelEvent>_TypeInfo);
                    /* try { // try from 08a6ea6c to 08b6ea87 has its CatchHandler @ 08a6fac4 */
    FUN_03f13384(UnityEngine_UIElements_EventCallback<PointerCaptureEvent>_TypeInfo);
    FUN_03f13384(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<ForwardLights_SetupLightPassData,_UnsafeGraphContext>_TypeInfo
                );
    FUN_03f13384(UnityEngine_UIElements_EventCallback<PointerOutEvent>_TypeInfo);
    FUN_03f13384(PTR_DAT_09126950);
    FUN_03f13384(
                System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                );
    FUN_03f13384(UnityEngine_UIElements_EventCallback<PointerOverEvent>_TypeInfo);
    FUN_03f13384(PTR_DAT_0911b860);
    FUN_03f13384(
                System_Collections_Generic_Dictionary<OpenXRInteractionFeature_InteractionProfileType,_Dictionary<string,_bool>>_TypeInfo
                );
                    /* try { // try from 08a6eac8 to 08b6eb0b has its CatchHandler @ 08a6faec */
    FUN_03f13384(UnityEngine_UIElements_EventCallback<PointerUpEvent>_TypeInfo);
    DAT_096a4cc1 = 1;
  }
  lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar1);
  FUN_089b611c(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) =
         *(undefined8 *)
          System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
    ;
    thunk_FUN_03f86000();
    *(long *)(param_1 + 0xa0) = lVar4;
    thunk_FUN_03f86000((long *)(param_1 + 0xa0),lVar4);
                    /* try { // try from 08a6eb1c to 08b6eb27 has its CatchHandler @ 08a6f978 */
    lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar1);
    FUN_089b611c(lVar4,0);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x10) =
           *(undefined8 *)
            System_Collections_Generic_Dictionary<OpenXRInteractionFeature_InteractionProfileType,_Dictionary<string,_bool>>_TypeInfo
      ;
      thunk_FUN_03f86000();
      *(undefined4 *)(lVar4 + 0x40) = 0x41200000;
      *(long *)(param_1 + 0xa8) = lVar4;
      thunk_FUN_03f86000((long *)(param_1 + 0xa8),lVar4);
                    /* try { // try from 08a6eb64 to 08b6eb6f has its CatchHandler @ 08a6fa1c */
      lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar1);
      FUN_089b611c(lVar4,0);
      puVar1 = PTR_DAT_09125708;
                    /* try { // try from 08a6eb74 to 08b6eb7f has its CatchHandler @ 08a6f9cc */
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x10) =
             *(undefined8 *)UnityEngine_UIElements_EventCallback<PointerOverEvent>_TypeInfo;
        thunk_FUN_03f86000();
        *(undefined4 *)(lVar4 + 0x40) = 0;
        *(long *)(param_1 + 0xb0) = lVar4;
        thunk_FUN_03f86000((long *)(param_1 + 0xb0),lVar4);
        lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar1);
                    /* try { // try from 08a6ebbc to 08b6ebc7 has its CatchHandler @ 08a6fa68 */
        FUN_089a346c(lVar4,0);
        puVar3 = UnityEngine_UIElements_EventCallback<PointerCaptureEvent>_TypeInfo;
        puVar2 = UnityEngine_UIElements_EventCallback<PointerCancelEvent>_TypeInfo;
        if (lVar4 != 0) {
                    /* try { // try from 08a6ebcc to 08b6ebd7 has its CatchHandler @ 08a6f9b8 */
          *(undefined8 *)(lVar4 + 0x10) =
               *(undefined8 *)UnityEngine_UIElements_EventCallback<PointerUpEvent>_TypeInfo;
          thunk_FUN_03f86000();
          *(undefined1 *)(lVar4 + 0x40) = 0;
          *(long *)(param_1 + 0xb8) = lVar4;
          thunk_FUN_03f86000((long *)(param_1 + 0xb8),lVar4);
          lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar3);
          FUN_063edcc0(lVar4,*(undefined8 *)puVar2);
                    /* try { // try from 08a6ec14 to 08b6ec1f has its CatchHandler @ 08a6fa60 */
          if (lVar4 != 0) {
                    /* try { // try from 08a6ec24 to 08b6ec2f has its CatchHandler @ 08a6f9dc */
            *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_0911b860;
            thunk_FUN_03f86000();
            *(undefined4 *)(lVar4 + 0x40) = 0;
            *(long *)(param_1 + 0xc0) = lVar4;
            thunk_FUN_03f86000((long *)(param_1 + 0xc0),lVar4);
            lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar1);
            FUN_089a346c(lVar4,0);
            puVar1 = UnityEngine_UIElements_EventCallback<PointerOutEvent>_TypeInfo;
            if (lVar4 != 0) {
                    /* try { // try from 08a6ec6c to 08b6ec77 has its CatchHandler @ 08a6fa2c */
              *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_09126950;
              thunk_FUN_03f86000();
                    /* try { // try from 08a6ec7c to 08b6ec87 has its CatchHandler @ 08a6f9f4 */
              *(undefined1 *)(lVar4 + 0x40) = 0;
              *(long *)(param_1 + 200) = lVar4;
              thunk_FUN_03f86000((long *)(param_1 + 200),lVar4);
              FUN_063f978c(param_1,*(undefined8 *)puVar1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


