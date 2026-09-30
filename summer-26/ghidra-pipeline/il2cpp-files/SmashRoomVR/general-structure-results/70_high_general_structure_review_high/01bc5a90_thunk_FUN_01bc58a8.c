/*
FUNCTION_NAME: thunk_FUN_01bc58a8
ENTRY_POINT: 01bc5a90
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void thunk_FUN_01bc58a8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  
  puVar3 = Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__;
  puVar2 = Method_OVRSpaceQuery_Options_set_UuidFilter__;
  if ((DAT_03fed1b1 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__);
    thunk_FUN_01ad9084(Method_OVRSpaceQuery_Options_set_UuidFilter__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_10__);
    thunk_FUN_01ad9084(Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_2__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_1__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRSceneLoader_<DelayCanvasPosUpdate>d__24_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed1b1 = 1;
  }
  lVar8 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
  FUN_02b591b0(lVar8,*(undefined8 *)puVar2);
  puVar7 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_10__;
  puVar6 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_2__;
  puVar5 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_1__;
  puVar4 = Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__;
  puVar3 = Method_OVRSceneLoader_<DelayCanvasPosUpdate>d__24_System_Collections_IEnumerator_Reset__;
  puVar2 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 != 0) {
    iVar13 = 0;
    do {
      if (*(int *)(lVar9 + 0x18) <= iVar13) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar10 = FUN_038eeb08(0);
        uVar11 = FUN_03919b74(*(undefined8 *)puVar5,0);
        uVar10 = FUN_02ee6d10(uVar10,*(undefined8 *)puVar3,uVar11,*(undefined8 *)puVar6,0);
        FUN_02faac7c(uVar10,lVar8,0);
        return;
      }
      uVar10 = FUN_02b59714(lVar9,iVar13,*(undefined8 *)puVar7);
      uVar10 = FUN_039518c8(uVar10,0);
      if (lVar8 == 0) break;
      lVar9 = *(long *)(lVar8 + 0x10);
      lVar12 = *(long *)puVar4;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar9 == 0) break;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
        thunk_FUN_01b4f09c();
      }
      else {
        FUN_02b599e4(lVar8,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                    );
      }
      lVar9 = *(long *)(param_1 + 0x28);
      iVar13 = iVar13 + 1;
    } while (lVar9 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


