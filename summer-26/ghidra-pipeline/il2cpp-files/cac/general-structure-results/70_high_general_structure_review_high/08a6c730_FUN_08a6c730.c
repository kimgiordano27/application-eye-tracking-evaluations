/*
FUNCTION_NAME: FUN_08a6c730
ENTRY_POINT: 08a6c730
PROGRAM: cac-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior
*/


void FUN_08a6c730(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = UnityEngine_UIElements_EventBase<TransitionRunEvent>_TypeInfo;
  puVar2 = UnityEngine_UIElements_EventBase<TransitionEndEvent>_TypeInfo;
  if ((DAT_096a4ca4 & 1) == 0) {
    FUN_03f13384(PTR_DAT_09125560);
    FUN_03f13384(UnityEngine_UIElements_EventBase<TransitionStartEvent>_TypeInfo);
    FUN_03f13384(
                Unity_VisualScripting_InstanceFunctionInvoker<TTarget,_TParam0,_TParam1,_TParam2,_TParam3,_TParam4,_TResult>_var
                );
    FUN_03f13384(UnityEngine_UIElements_EventBase<ValidateCommandEvent>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventBase<WheelEvent>_TypeInfo);
    FUN_03f13384(PTR_DAT_09125708);
    FUN_03f13384(UnityEngine_UIElements_EventCallback<ChangeEvent<bool>>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventCallback<ChangeEvent<float>>_TypeInfo);
    FUN_03f13384(PTR_DAT_09126018);
    FUN_03f13384(UnityEngine_UIElements_EventBase<TransitionRunEvent>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventCallback<ChangeEvent<string>>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventBase<TransitionEndEvent>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo);
    FUN_03f13384(PTR_DAT_09126030);
    FUN_03f13384(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<ForwardLights_SetupLightPassData,_UnsafeGraphContext>_TypeInfo
                );
    FUN_03f13384(UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3Int>>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventBase<PointerCaptureOutEvent>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventCallback<AttachToPanelEvent>_TypeInfo);
    FUN_03f13384(PTR_DAT_09126058);
    FUN_03f13384(UnityEngine_UIElements_EventCallback<BlurEvent>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventCallback<ContextualMenuPopulateEvent>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventCallback<CustomStyleResolvedEvent>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventCallback<DetachFromPanelEvent>_TypeInfo);
    FUN_03f13384(PTR_DAT_0912b068);
    FUN_03f13384(UnityEngine_UIElements_EventCallback<ExecuteCommandEvent>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventCallback<FocusEvent>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventCallback<FocusInEvent>_TypeInfo);
    DAT_096a4ca4 = 1;
  }
  lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar2);
  FUN_063edcc0(lVar4,*(undefined8 *)puVar1);
  puVar1 = UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo;
  puVar2 = UnityEngine_UIElements_EventCallback<ChangeEvent<bool>>_TypeInfo;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_0912b068;
    thunk_FUN_03f86000();
    *(undefined4 *)(lVar4 + 0x40) = 0;
    *(long *)(param_1 + 0x88) = lVar4;
    thunk_FUN_03f86000((long *)(param_1 + 0x88),lVar4);
    lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar1);
    FUN_063edcc0(lVar4,*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_09125708;
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x10) =
           *(undefined8 *)UnityEngine_UIElements_EventCallback<ExecuteCommandEvent>_TypeInfo;
      thunk_FUN_03f86000();
      *(undefined4 *)(lVar4 + 0x40) = 0;
      *(long *)(param_1 + 0x90) = lVar4;
      thunk_FUN_03f86000((long *)(param_1 + 0x90),lVar4);
      lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar2);
      FUN_089a346c(lVar4,0);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x10) =
             *(undefined8 *)
              UnityEngine_UIElements_EventCallback<ContextualMenuPopulateEvent>_TypeInfo;
        thunk_FUN_03f86000();
        *(long *)(param_1 + 0x98) = lVar4;
        thunk_FUN_03f86000((long *)(param_1 + 0x98),lVar4);
        lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar2);
        FUN_089a346c(lVar4,0);
        puVar1 = PTR_DAT_09126030;
        puVar2 = PTR_DAT_09126018;
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x10) =
               *(undefined8 *)UnityEngine_UIElements_EventCallback<FocusInEvent>_TypeInfo;
          thunk_FUN_03f86000();
          *(long *)(param_1 + 0xa0) = lVar4;
          thunk_FUN_03f86000((long *)(param_1 + 0xa0),lVar4);
          lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar1);
          FUN_063edcc0(lVar4,*(undefined8 *)puVar2);
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x10) =
                 *(undefined8 *)UnityEngine_UIElements_EventCallback<DetachFromPanelEvent>_TypeInfo;
            thunk_FUN_03f86000();
            *(long *)(param_1 + 0xa8) = lVar4;
            thunk_FUN_03f86000((long *)(param_1 + 0xa8),lVar4);
            lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar1);
            FUN_063edcc0(lVar4,*(undefined8 *)puVar2);
            puVar2 = 
            UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<ForwardLights_SetupLightPassData,_UnsafeGraphContext>_TypeInfo
            ;
            if (lVar4 != 0) {
                    /* try { // try from 08a6ca40 to 08b6ca97 has its CatchHandler @ 08a6ca40
                       catch() { ... } // from try @ 08a6ca40 with catch @ 08a6ca40
                       catch() { ... } // from try @ 08a6cb18 with catch @ 08a6ca40
                       catch() { ... } // from try @ 08a6cb68 with catch @ 08a6ca40
                       catch() { ... } // from try @ 08a6cb94 with catch @ 08a6ca40
                       catch() { ... } // from try @ 08a6cc08 with catch @ 08a6ca40 */
              *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_09126058;
              thunk_FUN_03f86000();
              *(long *)(param_1 + 0xb0) = lVar4;
              thunk_FUN_03f86000((long *)(param_1 + 0xb0),lVar4);
              lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar2);
              FUN_089b611c(lVar4,0);
              if (lVar4 != 0) {
                *(undefined8 *)(lVar4 + 0x10) =
                     *(undefined8 *)UnityEngine_UIElements_EventCallback<FocusEvent>_TypeInfo;
                thunk_FUN_03f86000();
                    /* try { // try from 08a6ca98 to 08b6ca9b has its CatchHandler @ 08a6cb18 */
                *(undefined4 *)(lVar4 + 0x40) = 0xbf800000;
                *(long *)(param_1 + 0xb8) = lVar4;
                thunk_FUN_03f86000((long *)(param_1 + 0xb8),lVar4);
                    /* try { // try from 08a6caac to 08b6cab7 has its CatchHandler @ 08a6cb1c */
                lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar2);
                FUN_089b611c(lVar4,0);
                if (lVar4 != 0) {
                  *(undefined8 *)(lVar4 + 0x10) =
                       *(undefined8 *)
                        UnityEngine_UIElements_EventCallback<AttachToPanelEvent>_TypeInfo;
                  thunk_FUN_03f86000();
                    /* try { // try from 08a6cad8 to 08b6cadf has its CatchHandler @ 08a6cb2c */
                  *(undefined4 *)(lVar4 + 0x40) = 0xbf800000;
                  *(long *)(param_1 + 0xc0) = lVar4;
                  thunk_FUN_03f86000((long *)(param_1 + 0xc0),lVar4);
                    /* try { // try from 08a6caf0 to 08b6caf7 has its CatchHandler @ 08a6cb20 */
                  lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar2);
                  FUN_089b611c(lVar4,0);
                  puVar3 = UnityEngine_UIElements_EventCallback<ChangeEvent<string>>_TypeInfo;
                  puVar1 = UnityEngine_UIElements_EventCallback<ChangeEvent<float>>_TypeInfo;
                  if (lVar4 != 0) {
                    /* try { // try from 08a6cb0c to 08b6cb0f has its CatchHandler @ 08a6cb2c */
                    /* try { // try from 08a6cb10 to 08b6cb17 has its CatchHandler @ 08a6cb20 */
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 08a6ca98 with catch @ 08a6cb18
                       try { // try from 08a6cb18 to 08b6cb4b has its CatchHandler @ 08a6ca40 */
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 08a6caac with catch @ 08a6cb1c
                        */
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 08a6caf0 with catch @ 08a6cb20
                       catch(type#1 @ 08b42af8) { ... } // from try @ 08a6cb10 with catch @ 08a6cb20
                        */
                    *(undefined8 *)(lVar4 + 0x10) =
                         *(undefined8 *)
                          UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3Int>>_TypeInfo;
                    thunk_FUN_03f86000();
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 08a6cad8 with catch @ 08a6cb2c
                       catch(type#1 @ 08b42af8) { ... } // from try @ 08a6cb0c with catch @ 08a6cb2c
                        */
                    *(undefined4 *)(lVar4 + 0x40) = 0x41900000;
                    *(long *)(param_1 + 200) = lVar4;
                    thunk_FUN_03f86000((long *)(param_1 + 200),lVar4);
                    lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar3);
                    /* try { // try from 08a6cb4c to 08b6cb4f has its CatchHandler @ 08a6cb58 */
                    FUN_063edcc0(lVar4,*(undefined8 *)puVar1);
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 08a6cb4c with catch @ 08a6cb58
                        */
                    if (lVar4 != 0) {
                    /* try { // try from 08a6cb60 to 08b6cb67 has its CatchHandler @ 08a6cc10 */
                    /* try { // try from 08a6cb68 to 08b6cb7b has its CatchHandler @ 08a6ca40 */
                      *(undefined8 *)(lVar4 + 0x10) =
                           *(undefined8 *)UnityEngine_UIElements_EventCallback<BlurEvent>_TypeInfo;
                      thunk_FUN_03f86000();
                    /* try { // try from 08a6cb7c to 08b6cb93 has its CatchHandler @ 08a6cc00 */
                      *(undefined4 *)(lVar4 + 0x40) = 2;
                      *(long *)(param_1 + 0xd0) = lVar4;
                      thunk_FUN_03f86000((long *)(param_1 + 0xd0),lVar4);
                      lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar2);
                    /* try { // try from 08a6cb94 to 08b6cbef has its CatchHandler @ 08a6ca40 */
                      FUN_089b611c(lVar4,0);
                      puVar1 = PTR_DAT_09125560;
                      if (lVar4 != 0) {
                        *(undefined8 *)(lVar4 + 0x10) =
                             *(undefined8 *)
                              UnityEngine_UIElements_EventCallback<CustomStyleResolvedEvent>_TypeInfo
                        ;
                        thunk_FUN_03f86000();
                        lVar5 = *(long *)puVar1;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_03f6fea8();
                          lVar5 = *(long *)puVar1;
                        }
                        lVar5 = *(long *)(lVar5 + 0xb8);
                        *(long *)(param_1 + 0xd8) = lVar4;
                        *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(lVar5 + 0x720);
                    /* try { // try from 08a6cbf0 to 08b6cbff has its CatchHandler @ 08a6cc00 */
                        thunk_FUN_03f86000((long *)(param_1 + 0xd8),lVar4);
                        lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 08a6cb7c with catch @ 08a6cc00
                       catch() { ... } // from try @ 08a6cbf0 with catch @ 08a6cc00 */
                    /* try { // try from 08a6cc04 to 08b6cc07 has its CatchHandler @ 08a6cc10 */
                        FUN_089b611c(lVar4,0);
                    /* try { // try from 08a6cc08 to 08b6cc13 has its CatchHandler @ 08a6ca40 */
                        if (lVar4 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 08a6cb60 with catch @ 08a6cc10
                       catch(type#2 @ 00000000) { ... } // from try @ 08a6cc04 with catch @ 08a6cc10
                        */
                          *(undefined8 *)(lVar4 + 0x10) =
                               *(undefined8 *)
                                UnityEngine_UIElements_EventBase<PointerCaptureOutEvent>_TypeInfo;
                          thunk_FUN_03f86000();
                          lVar5 = *(long *)puVar1;
                          *(long *)(param_1 + 0xe0) = lVar4;
                          *(undefined4 *)(lVar4 + 0x40) =
                               *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x724);
                          thunk_FUN_03f86000((long *)(param_1 + 0xe0),lVar4);
                          FUN_089751a8(param_1,0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


