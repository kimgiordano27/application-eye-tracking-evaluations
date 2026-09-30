/*
FUNCTION_NAME: FUN_00f51d24
ENTRY_POINT: 00f51d24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_00f51d24(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                 long *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar1 = StringLiteral_9732;
  fVar9 = param_2;
  fVar10 = param_3;
  fVar11 = param_4;
  if ((DAT_03775722 & 1) == 0) {
    thunk_FUN_00d48444(OVR_OpenVR_IVROverlay__GetOverlayImageData_TypeInfo);
    thunk_FUN_00d48444(DG_Tweening_DOTweenModuleUnityVersion_<>c__DisplayClass8_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IMarker>_Clear__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FODStretchedPortraitSwitch>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_SaveServerInterface_<GotUserName>b__13_0__);
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRPlugin_Result>_SetResult__);
    thunk_FUN_00d48444(Sirenix_Serialization_OdinSerializeAttribute_var);
    thunk_FUN_00d48444(StringLiteral_9732);
    DAT_03775722 = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    FUN_00f67600(lVar4,0);
    *(long **)(lVar4 + 0x20) = param_6;
    puVar1 = OVR_OpenVR_IVROverlay__GetOverlayImageData_TypeInfo;
    if (param_6 != (long *)0x0) {
      fVar8 = (float)(**(code **)(*param_6 + 0x298))(param_6,*(undefined8 *)(*param_6 + 0x2a0));
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = DG_Tweening_DOTweenModuleUnityVersion_<>c__DisplayClass8_0_TypeInfo;
      if (lVar5 != 0) {
        FUN_0128180c(lVar5,lVar4,*(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_SetResult__,
                     0);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar3 = Method_SaveServerInterface_<GotUserName>b__13_0__;
        puVar2 = Method_System_Collections_Generic_List<IMarker>_Clear__;
        puVar1 = Method_System_Collections_Generic_List<FODStretchedPortraitSwitch>_GetEnumerator__;
        if (lVar6 != 0) {
          FUN_012819a8(lVar6,lVar4,*(undefined8 *)Sirenix_Serialization_OdinSerializeAttribute_var,0
                      );
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar7 = FUN_01068bac(param_1 - fVar8,param_2 - fVar9,param_3 - fVar10,param_4 - fVar11,
                               param_5,lVar5,lVar6,0);
          uVar7 = FUN_010e3600(uVar7,*(undefined8 *)puVar1);
          FUN_0114e340(uVar7,*(undefined8 *)(lVar4 + 0x20),*(undefined8 *)puVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


