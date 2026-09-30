/*
FUNCTION_NAME: FUN_06b03154
ENTRY_POINT: 06b03154
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_12;validity_or_gating_hits_10;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_11
*/


void FUN_06b03154(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 local_d0;
  long *plStack_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_58;
  
  puVar3 = PTR_DAT_06f9c4c0;
  local_58 = param_1;
  if ((DAT_073ab3c3 & 1) == 0) {
    FUN_02fe925c(OVRPlugin_TextureRectMatrixf_TypeInfo);
    FUN_02fe925c(OVRPlugin_TrackingConfidence_TypeInfo);
    FUN_02fe925c(OVRPlugin_UnityOpenXR_TypeInfo);
    FUN_02fe925c(OVRPlugin_Vector3f_TypeInfo);
    FUN_02fe925c(OVRPlugin_Vector4f_TypeInfo);
    FUN_02fe925c(OVRPlugin_Vector4s_TypeInfo);
    FUN_02fe925c(OVRPlugin_VirtualKeyboardModelAnimationState_TypeInfo);
    FUN_02fe925c(OVRPlugin_Size3f_TypeInfo);
    FUN_02fe925c(OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo);
    FUN_02fe925c(OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo);
    FUN_02fe925c(OVRRaycaster_<>c_TypeInfo);
    FUN_02fe925c(OVRResources_<>c__DisplayClass2_0_TypeInfo);
    FUN_02fe925c(OVRRuntimeController_<UpdateControllerModel>d__16_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f9c4c0);
    DAT_073ab3c3 = 1;
  }
  plStack_c8 = &local_58;
  local_c0 = &local_78;
  puStack_b8 = &uStack_80;
  local_d0 = 0;
  local_b0 = &local_98;
  local_a8 = &local_a0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar5 = FUN_06ade6a4(0);
  puVar4 = OVRRuntimeController_<UpdateControllerModel>d__16_TypeInfo;
  puVar3 = OVRPlugin_Size3f_TypeInfo;
  lVar8 = *(long *)(local_58 + 0x10);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  iVar2 = *(int *)(lVar8 + 0x18);
  iVar1 = 0;
  if (*(int *)(local_58 + 0x34) + 1 < iVar2) {
    iVar1 = *(int *)(local_58 + 0x34) + 1;
  }
  if (0 < iVar2) {
    iVar9 = 0;
    if (iVar2 <= iVar1) {
      iVar9 = iVar2;
    }
    iVar10 = 0;
    iVar9 = iVar1 - iVar9;
    iVar11 = 1;
    do {
      plVar6 = (long *)FUN_04430018(lVar8,iVar9,*(undefined8 *)puVar4);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      lVar8 = plVar6[3];
      if (lVar5 - plVar6[4] < lVar8) {
LAB_06b03354:
        if ((0 < plVar6[6]) && (plVar6[6] < lVar5)) goto LAB_06b03368;
      }
      else {
        if (*(long *)(local_58 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        uVar7 = FUN_03fca368(*(long *)(local_58 + 0x28),plVar6,*(undefined8 *)puVar3);
        if ((uVar7 & 1) == 0) {
          (**(code **)(*plVar6 + 0x178))(plVar6,lVar8,lVar5,*(undefined8 *)(*plVar6 + 0x180));
        }
        plVar6[3] = lVar5;
        plVar6[4] = plVar6[5];
        uVar7 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
        if ((uVar7 & 1) == 0) goto LAB_06b03354;
LAB_06b03368:
        if (*(long *)(local_58 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        uVar7 = FUN_03fca368(*(long *)(local_58 + 0x28),plVar6,*(undefined8 *)puVar3);
        if ((uVar7 & 1) == 0) {
          FUN_06b02f24(local_58,plVar6);
        }
      }
      *(int *)(local_58 + 0x34) = iVar9;
      if (iVar2 == iVar11) break;
      lVar8 = *(long *)(local_58 + 0x10);
      iVar10 = iVar10 + 1;
      iVar9 = 0;
      if (iVar2 <= iVar1 + iVar11) {
        iVar9 = iVar2;
      }
      iVar9 = (iVar10 + iVar1) - iVar9;
      iVar11 = iVar11 + 1;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
    } while( true );
  }
  FUN_02f9a098(&local_d0);
  return;
}


