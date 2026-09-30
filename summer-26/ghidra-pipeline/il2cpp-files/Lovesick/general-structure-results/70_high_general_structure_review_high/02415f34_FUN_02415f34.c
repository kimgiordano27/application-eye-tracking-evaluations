/*
FUNCTION_NAME: FUN_02415f34
ENTRY_POINT: 02415f34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_02415f34(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = StringLiteral_4735;
                    /* try { // try from 02415f40 to 02515f4b has its CatchHandler @ 02415a0c */
                    /* try { // try from 02415f4c to 02515f53 has its CatchHandler @ 02415f60 */
  if ((DAT_03782317 & 1) == 0) {
                    /* catch() { ... } // from try @ 02415ed0 with catch @ 02415f54 */
    thunk_FUN_00d48444(Meta_WitAi_Requests_VRequestFirstResponseDelegate_TypeInfo);
                    /* catch() { ... } // from try @ 02415f18 with catch @ 02415f60
                       catch() { ... } // from try @ 02415f4c with catch @ 02415f60 */
                    /* try { // try from 02415f64 to 02516173 has its CatchHandler @ 02415f64
                       catch() { ... } // from try @ 02415f64 with catch @ 02415f64
                       catch() { ... } // from try @ 024162f0 with catch @ 02415f64
                       catch() { ... } // from try @ 024163c8 with catch @ 02415f64
                       catch() { ... } // from try @ 02416440 with catch @ 02415f64
                       catch() { ... } // from try @ 02416510 with catch @ 02415f64 */
    thunk_FUN_00d48444(PTR_DAT_033f06c8);
    thunk_FUN_00d48444(StringLiteral_9464);
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(StringLiteral_58);
    thunk_FUN_00d48444(StringLiteral_167);
    thunk_FUN_00d48444(StringLiteral_794);
    thunk_FUN_00d48444(PTR_DAT_033ef890);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_MinimalBaseFormatter<Rect>__ctor__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10790);
    thunk_FUN_00d48444(
                      Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass22_0_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_4735);
    thunk_FUN_00d48444(
                      Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetComponentName__
                      );
    thunk_FUN_00d48444(System_Threading_WaitOrTimerCallback_TypeInfo);
    thunk_FUN_00d48444(Method_OVRTask_WhenAll<OVRSceneManager_Metrics>__);
    thunk_FUN_00d48444(
                      Method_Meta_XR_BuildingBlocks_SharedSpatialAnchorCore_LoadAndInstantiateAnchors__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_5__);
    thunk_FUN_00d48444(Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_OnConsoleLineClicked__
                      );
    DAT_03782317 = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = StringLiteral_10790;
  if (lVar2 != 0) {
    FUN_01320e50(lVar2,*(undefined8 *)StringLiteral_58);
    *(long *)(param_1 + 0x10) = lVar2;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass22_0_TypeInfo
    ;
    if (lVar2 != 0) {
      FUN_01320e50(lVar2,*(undefined8 *)
                          Method_Sirenix_Serialization_MinimalBaseFormatter<Rect>__ctor__);
      *(long *)(param_1 + 0x18) = lVar2;
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = System_Threading_WaitOrTimerCallback_TypeInfo;
      if (lVar2 != 0) {
        FUN_01320e50(lVar2,*(undefined8 *)StringLiteral_794);
        *(long *)(param_1 + 0x20) = lVar2;
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = Meta_WitAi_Requests_VRequestFirstResponseDelegate_TypeInfo;
        if (lVar2 != 0) {
          FUN_01320e50(lVar2,*(undefined8 *)PTR_DAT_033ef890);
          *(long *)(param_1 + 0x28) = lVar2;
          lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          puVar1 = StringLiteral_9464;
          if (lVar2 != 0) {
            FUN_02414b24(lVar2,0);
            *(long *)(param_1 + 0x50) = lVar2;
            lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            puVar1 = 
            Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetComponentName__
            ;
            if (lVar2 != 0) {
              FUN_01298da0(lVar2,*(undefined8 *)PTR_DAT_033f06c8);
              *(long *)(param_1 + 0x58) = lVar2;
              lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              puVar1 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
              if (lVar2 != 0) {
                FUN_01320e50(lVar2,*(undefined8 *)StringLiteral_167);
                *(long *)(param_1 + 0x60) = lVar2;
                lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                puVar1 = Method_OVRTask_WhenAll<OVRSceneManager_Metrics>__;
                if (lVar2 != 0) {
                  FUN_01320e50(lVar2,*(undefined8 *)PTR_DAT_033f6e48);
                  *(long *)(param_1 + 0x68) = lVar2;
                  FUN_017b46ec(param_1,0);
                  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                  if (lVar2 != 0) {
                    FUN_023adfa8(lVar2,*(undefined8 *)
                                        Method_Meta_XR_BuildingBlocks_SharedSpatialAnchorCore_LoadAndInstantiateAnchors__
                                 ,0);
                    *(long *)(param_1 + 0x38) = lVar2;
                    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    if (lVar2 != 0) {
                      FUN_023adfa8(lVar2,*(undefined8 *)
                                          Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_OnConsoleLineClicked__
                                   ,0);
                      *(long *)(param_1 + 0x40) = lVar2;
                      lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                      if (lVar2 != 0) {
                        FUN_023adfa8(lVar2,*(undefined8 *)
                                            Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_5__
                                     ,0);
                        *(long *)(param_1 + 0x48) = lVar2;
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


