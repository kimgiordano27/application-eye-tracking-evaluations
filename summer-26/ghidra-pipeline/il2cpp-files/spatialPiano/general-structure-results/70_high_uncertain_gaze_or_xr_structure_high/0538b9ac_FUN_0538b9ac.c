/*
FUNCTION_NAME: FUN_0538b9ac
ENTRY_POINT: 0538b9ac
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void FUN_0538b9ac(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar3 = 
  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_IXRReticleDirectionProvider_TypeInfo;
  puVar2 = Unity_Burst_FloatMode_TypeInfo;
  if ((DAT_06bbd5a5 & 1) == 0) {
    FUN_02f08768(Unity_Burst_FloatMode_TypeInfo);
    FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_Interactors_IXRScaleValueProvider_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_IXRReticleDirectionProvider_TypeInfo
                );
    FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_Filtering_IXRSelectFilter_TypeInfo);
    FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_TypeInfo);
    FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_TypeInfo);
    DAT_06bbd5a5 = 1;
  }
  puVar5 = UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_TypeInfo;
  puVar4 = UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_TypeInfo;
  System_Collections_Generic_Dictionary<int,_bool>__TryAdd(param_1,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar7 = FUN_053600b0(param_2,0);
  uVar6 = FUN_0512d414(uVar7,0);
  lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
  FUN_03abf17c(lVar8,(ulong)uVar6,*(undefined8 *)puVar4);
  *(long *)(param_1 + 0x10) = lVar8;
  puVar4 = UnityEngine_XR_Interaction_Toolkit_Filtering_IXRSelectFilter_TypeInfo;
  puVar3 = UnityEngine_XR_Interaction_Toolkit_Interactors_IXRScaleValueProvider_TypeInfo;
  if (0 < (int)uVar6) {
    lVar12 = 0;
    do {
      uVar7 = FUN_0512d418(lVar12,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)puVar2);
      }
      uVar7 = FUN_0535fe84(param_2,uVar7,0);
      uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
      FUN_0538b8a4(uVar9,uVar7);
      if (lVar8 == 0) {
LAB_0538bbd8:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar10 = *(long *)(lVar8 + 0x10);
      lVar11 = *(long *)puVar4;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_0538bbd8;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
      }
      else {
        FUN_03abf904(lVar8,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
        ;
      }
      if ((ulong)uVar6 - 1 == lVar12) break;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar12 = lVar12 + 1;
    } while( true );
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar7 = OVRPlugin_<>c__<_cctor>b__837_145(param_2,0);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  uVar7 = FUN_0535ffdc(param_2,0);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  uVar7 = FUN_0535ff08(param_2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  return;
}


