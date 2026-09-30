/*
FUNCTION_NAME: FUN_01072e5c
ENTRY_POINT: 01072e5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
FUN_01072e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<HoverExitEventArgs>_System_IDisposable_Dispose__
  ;
  if ((DAT_037761e0 & 1) == 0) {
    thunk_FUN_00d48444(OVR_OpenVR_IVROverlay__GetOverlayImageData_TypeInfo);
    thunk_FUN_00d48444(DG_Tweening_DOTweenModuleUnityVersion_<>c__DisplayClass8_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IMarker>_Clear__);
    thunk_FUN_00d48444(Method_SaveServerInterface_<GotUserName>b__13_0__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRCompositor__CompositorGoToBack_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<HoverExitEventArgs>_System_IDisposable_Dispose__
                      );
    DAT_037761e0 = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    FUN_017b46ec(lVar3,0);
    *(long *)(lVar3 + 0x10) = param_6;
    *(undefined8 *)(lVar3 + 0x18) = param_7;
    if (param_6 != 0) {
      uVar4 = FUN_0267e21c(param_6,param_7,0);
      if ((uVar4 & 1) == 0) {
        if (DAT_03775726 == '\0') {
          thunk_FUN_00d48444(
                            Method_System_Collections_Generic_List_Enumerator<MedleyHourglassTarget>_Dispose__
                            );
          DAT_03775726 = '\x01';
        }
        if (0 < **(int **)(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<MedleyHourglassTarget>_Dispose__
                          + 0xb8)) {
          FUN_0108ef3c(*(undefined8 *)(lVar3 + 0x18),0);
        }
        return 0;
      }
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)OVR_OpenVR_IVROverlay__GetOverlayImageData_TypeInfo)
      ;
      puVar1 = DG_Tweening_DOTweenModuleUnityVersion_<>c__DisplayClass8_0_TypeInfo;
      if (lVar5 != 0) {
        FUN_0128180c(lVar5,lVar3,
                     *(undefined8 *)OVR_OpenVR_IVRCompositor__CompositorGoToBack_TypeInfo,0);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar2 = Method_SaveServerInterface_<GotUserName>b__13_0__;
        puVar1 = Method_System_Collections_Generic_List<IMarker>_Clear__;
        if (lVar6 != 0) {
          FUN_012819a8(lVar6,lVar3,
                       *(undefined8 *)Method_Unity_Collections_NativeArray<float4>_Dispose__,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar7 = FUN_01068bac(param_1,param_2,param_3,param_4,param_5,lVar5,lVar6);
          FUN_0114e340(uVar7,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)puVar2);
          return uVar7;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


