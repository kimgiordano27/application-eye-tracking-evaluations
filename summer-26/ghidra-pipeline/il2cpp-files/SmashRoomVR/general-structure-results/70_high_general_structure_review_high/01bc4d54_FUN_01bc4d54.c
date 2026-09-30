/*
FUNCTION_NAME: FUN_01bc4d54
ENTRY_POINT: 01bc4d54
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01bc4d54(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar3 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  if ((DAT_03fed1ae & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRSceneManager_<>c__DisplayClass37_0_<DoesRoomSetupExist>b__0__);
    thunk_FUN_01ad9084(
                      Method_OVRSceneManager_<>c__DisplayClass40_0_<CheckClassificationsInRooms>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRSceneModelLoader_<AttemptToLoadSceneModel>d__7_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__);
    thunk_FUN_01ad9084(Method_OVRSpaceQuery_Options_ToQueryInfo__);
    thunk_FUN_01ad9084(Method_OVRSpaceQuery_Options_ValidateSingleFilter__);
    thunk_FUN_01ad9084(Method_OVRSpaceQuery_Options_set_UuidFilter__);
    thunk_FUN_01ad9084(Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__);
    thunk_FUN_01ad9084(Method_OVRSpatialAnchor_LoadOptions_set_Uuids__);
    thunk_FUN_01ad9084(
                      Method_OVRSceneLoader_<DelayCanvasPosUpdate>d__24_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed1ae = 1;
  }
  puVar4 = Method_OVRSceneLoader_<DelayCanvasPosUpdate>d__24_System_Collections_IEnumerator_Reset__;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_038eeb08(0);
  uVar6 = FUN_02edd6e8(uVar6,*(undefined8 *)puVar4,0);
  uVar7 = FUN_02fa85d0(uVar6,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  lVar8 = thunk_FUN_01afaadc(*(undefined8 *)
                              Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__);
  FUN_02b591b0(lVar8,*(undefined8 *)Method_OVRSpaceQuery_Options_set_UuidFilter__);
  puVar5 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
  puVar4 = Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__;
  puVar3 = Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
  ;
  lVar13 = *(long *)(param_1 + 0x20);
  if (lVar13 != 0) {
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (0 < (int)uVar2) {
      uVar14 = 0;
      do {
        if (uVar2 <= uVar14) {
LAB_01bc516c:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar12 = *(long *)(lVar13 + (long)(int)uVar14 * 8 + 0x20);
        lVar9 = FUN_01b47fd0(*(undefined8 *)puVar3,1);
        if (lVar9 == 0) goto LAB_01bc5168;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01bc516c;
        *(undefined2 *)(lVar9 + 0x20) = 0x2f;
        if (lVar12 == 0) goto LAB_01bc5168;
        lVar9 = FUN_02ee8f80(lVar12,lVar9,0);
        lVar12 = FUN_01b47fd0(*(undefined8 *)puVar3,1);
        if (lVar12 == 0) goto LAB_01bc5168;
        if (*(int *)(lVar12 + 0x18) == 0) goto LAB_01bc516c;
        *(undefined2 *)(lVar12 + 0x20) = 0x2e;
        if (lVar9 == 0) goto LAB_01bc5168;
        if (*(uint *)(lVar9 + 0x18) < 9) goto LAB_01bc516c;
        if (*(long *)(lVar9 + 0x60) == 0) goto LAB_01bc5168;
        lVar9 = FUN_02ee8f80(*(long *)(lVar9 + 0x60),lVar12,0);
        if ((*(long *)(param_1 + 0x38) == 0) ||
           (lVar12 = FUN_039a8554(*(long *)(param_1 + 0x38),0), lVar12 == 0)) goto LAB_01bc5168;
        iVar1 = *(int *)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 0x18) = 0;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_03062488(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
        }
        if (lVar9 == 0) goto LAB_01bc5168;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01bc516c;
        if (lVar8 == 0) goto LAB_01bc5168;
        uVar6 = *(undefined8 *)(lVar9 + 0x20);
        lVar12 = *(long *)(lVar8 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_01bc5168;
        uVar2 = *(uint *)(lVar8 + 0x18);
        if (uVar2 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar6;
          thunk_FUN_01b4f09c();
        }
        else {
          FUN_02b599e4(lVar8,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01bc516c;
        uVar6 = *(undefined8 *)(lVar9 + 0x20);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f2acc(uVar6,0);
        uVar2 = *(uint *)(lVar13 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)uVar2);
    }
    if (lVar8 != 0) {
      FUN_02b5a400(&local_98,lVar8,
                   *(undefined8 *)Method_OVRSpaceQuery_Options_ValidateSingleFilter__);
      puVar5 = Method_OVRSpatialAnchor_LoadOptions_set_Uuids__;
      puVar4 = 
      Method_OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_System_Collections_IEnumerator_Reset__;
      puVar3 = Method_OVRSceneManager_<>c__DisplayClass40_0_<CheckClassificationsInRooms>b__0__;
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      while( true ) {
        uVar7 = FUN_02739b98(&local_80,*(undefined8 *)puVar3);
        uVar6 = local_70;
        if ((uVar7 & 1) == 0) {
          FUN_02739b94(&local_80,
                       *(undefined8 *)
                        Method_OVRSceneManager_<>c__DisplayClass37_0_<DoesRoomSetupExist>b__0__);
          return;
        }
        if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar8 = FUN_039a8554(*(long *)(param_1 + 0x38),0);
        lVar13 = thunk_FUN_01afaadc(*(undefined8 *)puVar5);
        FUN_039a8570(lVar13,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        *(undefined8 *)(lVar13 + 0x10) = uVar6;
        thunk_FUN_01b4f09c((undefined8 *)(lVar13 + 0x10),uVar6);
        if (lVar8 == 0) break;
        lVar9 = *(long *)(lVar8 + 0x10);
        lVar12 = *(long *)puVar4;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar2 = *(uint *)(lVar8 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar2 + 1;
          plVar10 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
          *plVar10 = lVar13;
          thunk_FUN_01b4f09c(plVar10,lVar13);
        }
        else {
          FUN_02b599e4(lVar8,lVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
LAB_01bc5168:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


