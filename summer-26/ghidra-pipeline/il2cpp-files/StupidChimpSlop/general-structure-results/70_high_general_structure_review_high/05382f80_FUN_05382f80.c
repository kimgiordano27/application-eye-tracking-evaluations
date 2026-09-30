/*
FUNCTION_NAME: FUN_05382f80
ENTRY_POINT: 05382f80
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_05382f80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  puVar3 = UnityEngine_Gradient_TypeInfo;
  puVar2 = Unity_Properties_TypeConverter<char,_bool>_TypeInfo;
  puVar1 = PTR_DAT_06646310;
  if ((DAT_06a5309e & 1) == 0) {
    FUN_02d4dc40(Unity_Properties_TypeConverter<char,_bool>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06646310);
    FUN_02d4dc40(UnityEngine_UIElements_UIR_GradientRemap_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_UIR_GradientRemapPool_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_UIR_GradientSettingsAtlas_TypeInfo);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Utilities_GradientUtility_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_GrantCharacterToUserRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_GrantCharacterToUserResult_TypeInfo);
    FUN_02d4dc40(UnityEngine_UI_Graphic_TypeInfo);
    FUN_02d4dc40(UnityEngine_UI_GraphicRaycaster_TypeInfo);
    FUN_02d4dc40(UnityEngine_UI_GraphicRegistry_TypeInfo);
    FUN_02d4dc40(UnityEngine_Graphics_TypeInfo);
    FUN_02d4dc40(UnityEngine_GraphicsBuffer_TypeInfo);
    FUN_02d4dc40(UnityEngine_GraphicsBufferHandle_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_GraphicsDeviceType_TypeInfo);
    FUN_02d4dc40(UnityEngine_Experimental_Rendering_GraphicsFormat_TypeInfo);
    FUN_02d4dc40(UnityEngine_Gradient_TypeInfo);
    FUN_02d4dc40(UnityEngine_Experimental_Rendering_GraphicsFormatUsage_TypeInfo);
    DAT_06a5309e = 1;
  }
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = *(undefined8 *)puVar3;
  thunk_FUN_02dc1ef0(*(undefined8 *)(*(long *)puVar2 + 0xb8));
  lVar4 = FUN_02d4dd2c(*(undefined8 *)puVar1,0xf);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)UnityEngine_GraphicsBufferHandle_TypeInfo;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar4 + 0x28) =
             *(undefined8 *)PlayFab_ClientModels_GrantCharacterToUserResult_TypeInfo;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x28));
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) =
               *(undefined8 *)UnityEngine_UIElements_UIR_GradientRemap_TypeInfo;
          thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x30));
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar4 + 0x38) =
                 *(undefined8 *)UnityEngine_UIElements_UIR_GradientRemapPool_TypeInfo;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x38));
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x40) =
                   *(undefined8 *)UnityEngine_UI_GraphicRaycaster_TypeInfo;
              thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x40));
              if (5 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x48) =
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_GradientUtility_TypeInfo;
                thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x48));
                if (6 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x50) =
                       *(undefined8 *)UnityEngine_Rendering_GraphicsDeviceType_TypeInfo;
                  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x50));
                  if ((*(uint *)(lVar4 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar4 + 0x58) =
                         *(undefined8 *)UnityEngine_UIElements_UIR_GradientSettingsAtlas_TypeInfo;
                    thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x58));
                    if (8 < *(uint *)(lVar4 + 0x18)) {
                      *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)UnityEngine_UI_Graphic_TypeInfo
                      ;
                      thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x60));
                      if (9 < *(uint *)(lVar4 + 0x18)) {
                        *(undefined8 *)(lVar4 + 0x68) =
                             *(undefined8 *)
                              UnityEngine_Experimental_Rendering_GraphicsFormat_TypeInfo;
                        thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x68));
                        if (10 < *(uint *)(lVar4 + 0x18)) {
                          *(undefined8 *)(lVar4 + 0x70) =
                               *(undefined8 *)
                                UnityEngine_Experimental_Rendering_GraphicsFormatUsage_TypeInfo;
                          thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x70));
                          if (0xb < *(uint *)(lVar4 + 0x18)) {
                            *(undefined8 *)(lVar4 + 0x78) =
                                 *(undefined8 *)UnityEngine_GraphicsBuffer_TypeInfo;
                            thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x78));
                            if (0xc < *(uint *)(lVar4 + 0x18)) {
                              *(undefined8 *)(lVar4 + 0x80) =
                                   *(undefined8 *)UnityEngine_Graphics_TypeInfo;
                              thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x80));
                              if (0xd < *(uint *)(lVar4 + 0x18)) {
                                *(undefined8 *)(lVar4 + 0x88) =
                                     *(undefined8 *)UnityEngine_UI_GraphicRegistry_TypeInfo;
                                thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x88));
                                if (0xe < *(uint *)(lVar4 + 0x18)) {
                                  *(undefined8 *)(lVar4 + 0x90) =
                                       *(undefined8 *)
                                        PlayFab_ClientModels_GrantCharacterToUserRequest_TypeInfo;
                                  thunk_FUN_02dc1ef0();
                                  plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                                  *plVar5 = lVar4;
                                  thunk_FUN_02dc1ef0(plVar5,lVar4);
                                  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = 0x80;
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
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


