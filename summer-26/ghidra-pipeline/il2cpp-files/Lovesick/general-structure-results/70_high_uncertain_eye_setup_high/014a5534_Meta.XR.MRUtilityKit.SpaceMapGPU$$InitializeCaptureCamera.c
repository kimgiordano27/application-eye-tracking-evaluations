/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$InitializeCaptureCamera
ENTRY_POINT: 014a5534
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__InitializeCaptureCamera(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar5;
  long lVar6;
  
  thunk_FUN_00d48444(
                    Method_Meta_XR_ImmersiveDebugger_Manager_TweakManager_ProcessTypeFromInspector__
                    );
  thunk_FUN_00d48444(Method_System_Nullable<Matrix4x4>__ctor__);
  thunk_FUN_00d48444(PTR_DAT_033f4738);
  thunk_FUN_00d48444(
                    Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float4>__ctor__
                    );
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_TaskAwaiter<MRUK_CreateSceneDataResults>_get_IsCompleted__
                    );
  thunk_FUN_00d48444(Method_UnityEngine_UIElements_InternalTreeView_BindTreeItem__);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__
                    );
  thunk_FUN_00d48444(StringLiteral_3781);
  thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_SimpleTuple<Face,_Face>__ctor__);
  thunk_FUN_00d48444(
                    UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_TypeInfo
                    );
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<PlayerPlatform>_Add__);
  thunk_FUN_00d48444(PTR_DAT_033ebec0);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vshr_n_s8__);
  thunk_FUN_00d48444(UnityEngine_InputSystem_InputControlScheme___TypeInfo);
  thunk_FUN_00d48444(Method_System_Security_Cryptography_TripleDES_set_Key__);
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseObjectAsync>d__15>__
                    );
  *(undefined1 *)(unaff_x22 + 0xcd9) = 1;
  if (unaff_x19 != 0) {
    if ((*(byte *)(**(long **)(*(long *)(*(long *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseObjectAsync>d__15>__
                                        + 0x20) + 0xc0) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    plVar3 = (long *)thunk_FUN_00d32ed4();
    puVar2 = 
    Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__;
    lVar6 = *plVar3;
    if (lVar6 != 0) {
      uVar5 = *(undefined8 *)(lVar6 + 0x68);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__
                                );
      puVar1 = 
      UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_TypeInfo;
      if ((lVar4 != 0) && (unaff_x21 != 0)) {
        FUN_013df2bc();
        FUN_01152dac(uVar5,lVar4,unaff_w20 & 1,*(undefined8 *)puVar1);
        uVar5 = *(undefined8 *)(lVar6 + 0x78);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar4 != 0) {
          FUN_013df2bc();
          FUN_01152dac(uVar5,lVar4,unaff_w20 & 1,*(undefined8 *)puVar1);
          uVar5 = *(undefined8 *)(lVar6 + 0x20);
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar4 != 0) {
            FUN_013df2bc();
            FUN_01152dac(uVar5,lVar4,unaff_w20 & 1,*(undefined8 *)puVar1);
            uVar5 = *(undefined8 *)(lVar6 + 0x38);
            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if (lVar4 != 0) {
              FUN_013df2bc();
              FUN_01152dac(uVar5,lVar4,unaff_w20 & 1,*(undefined8 *)puVar1);
              uVar5 = *(undefined8 *)(lVar6 + 0x30);
              lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              if (lVar4 != 0) {
                FUN_013df2bc();
                FUN_01152dac(uVar5,lVar4,unaff_w20 & 1,*(undefined8 *)puVar1);
                uVar5 = *(undefined8 *)(lVar6 + 0x28);
                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if (lVar4 != 0) {
                  FUN_013df2bc();
                  FUN_01152dac(uVar5,lVar4,unaff_w20 & 1,*(undefined8 *)puVar1);
                  uVar5 = *(undefined8 *)(lVar6 + 0x40);
                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                  puVar2 = Method_UnityEngine_ProBuilder_SimpleTuple<Face,_Face>__ctor__;
                  if (lVar6 != 0) {
                    FUN_013df2bc();
                    FUN_01152dac(uVar5,lVar6,unaff_w20 & 1,*(undefined8 *)puVar1);
                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    if (lVar6 != 0) {
                      FUN_013df3d0();
                      FUN_010bd810();
                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                      if (lVar6 != 0) {
                        FUN_013df3d0();
                        FUN_010bd810();
                        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                        puVar2 = StringLiteral_3781;
                        if (lVar6 != 0) {
                          FUN_013df3d0();
                          FUN_010bd810();
                          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                          if (lVar6 != 0) {
                            FUN_013df3d0();
                            FUN_010bd810();
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


