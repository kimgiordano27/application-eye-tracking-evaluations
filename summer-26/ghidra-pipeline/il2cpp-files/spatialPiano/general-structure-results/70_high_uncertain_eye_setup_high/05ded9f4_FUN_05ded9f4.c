/*
FUNCTION_NAME: FUN_05ded9f4
ENTRY_POINT: 05ded9f4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05ded9f4(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  puVar4 = Method_UnityEngine_ScriptableObject_CreateInstance<VolumeProfile>__;
  if ((DAT_06bc3d77 & 1) == 0) {
    FUN_02f08768(Method_Unity_Properties_PropertyBag_Register<Rotate>__);
    FUN_02f08768(Method_UnityEngine_ScriptableObject_CreateInstance<VolumeProfile>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(PTR_DAT_067cb280);
    DAT_06bc3d77 = 1;
  }
  puVar3 = Method_Unity_Properties_PropertyBag_Register<Rotate>__;
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar6 = *(long *)puVar4;
  }
  uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar3);
  }
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if (param_1 != 0) {
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    FUN_05c41224(*(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),
                 *(undefined4 *)(lVar6 + 0x24),*(undefined4 *)(lVar6 + 0x28),param_1,uVar1,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar7 = FUN_05dab444(0);
    if ((uVar7 & 1) == 0) {
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar6 = *(long *)puVar3;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
      if (lVar6 != 0) {
        if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        iVar5 = FUN_05dd2e14(0);
        if (iVar5 < *(int *)(lVar6 + 0x18)) {
          return;
        }
        lVar6 = *(long *)puVar4;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar6 = *(long *)puVar4;
        }
        lVar8 = *(long *)puVar3;
        uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 4);
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar8);
          lVar8 = *(long *)puVar3;
        }
        FUN_05c41424(param_1,uVar1,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x30),0);
        return;
      }
    }
    else {
      lVar6 = FUN_05db45dc(0);
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar8);
        lVar8 = *(long *)puVar3;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x30);
      if (((lVar8 != 0) && (lVar6 != 0)) &&
         (lVar6 = UnityEngine_XR_ARFoundation_NoSwapchainStrategy__DestroyTextures
                            (lVar6,*(undefined4 *)(lVar8 + 0x18),0), lVar6 != 0)) {
        FUN_060f9310(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30),0);
        lVar8 = *(long *)puVar4;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar8 = *(long *)puVar4;
        }
        FUN_05c42190(param_1,*(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x20),lVar6,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


