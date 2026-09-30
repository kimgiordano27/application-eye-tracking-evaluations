/*
FUNCTION_NAME: FUN_02f9a098
ENTRY_POINT: 02f9a098
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_5;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_02f9a098(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar3 = *(long *)(*(long *)param_1[1] + 0x28);
  *(undefined1 *)(*(long *)param_1[1] + 0x18) = 0;
  if (lVar3 != 0) {
    FUN_03fca7dc(&local_48,lVar3,
                 *(undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo)
    ;
    puVar5 = (undefined8 *)param_1[2];
    puVar5[2] = local_38;
    puVar5[1] = uStack_40;
    *puVar5 = local_48;
    puVar2 = OVRPlugin_UnityOpenXR_TypeInfo;
    lVar6 = param_1[2];
    lVar3 = lVar6;
    while (uVar4 = FUN_05506594(lVar3,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      *(undefined8 *)param_1[3] = *(undefined8 *)(param_1[2] + 0x10);
      FUN_06b030b4(*(undefined8 *)param_1[1],*(undefined8 *)param_1[3]);
      lVar3 = param_1[2];
    }
    FUN_05506590(lVar6,*(undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo);
    if (*(long *)(*(long *)param_1[1] + 0x28) != 0) {
      FUN_03fca308(*(long *)(*(long *)param_1[1] + 0x28),
                   *(undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationState_TypeInfo);
      if (*(long *)(*(long *)param_1[1] + 0x20) != 0) {
        FUN_04430ce4(&local_48,*(long *)(*(long *)param_1[1] + 0x20),
                     *(undefined8 *)OVRRaycaster_<>c_TypeInfo);
        puVar5 = (undefined8 *)param_1[4];
        puVar5[2] = local_38;
        puVar5[1] = uStack_40;
        *puVar5 = local_48;
        puVar2 = OVRPlugin_Vector3f_TypeInfo;
        lVar6 = param_1[4];
        lVar3 = lVar6;
        while (uVar4 = FUN_05506d10(lVar3,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
          *(undefined8 *)param_1[5] = *(undefined8 *)(param_1[4] + 0x10);
          FUN_06b02cdc(*(undefined8 *)param_1[1],*(undefined8 *)param_1[5]);
          lVar3 = param_1[4];
        }
        FUN_05506d0c(lVar6,*(undefined8 *)OVRPlugin_TrackingConfidence_TypeInfo);
        lVar3 = *(long *)(*(long *)param_1[1] + 0x20);
        if (lVar3 != 0) {
          iVar1 = *(int *)(lVar3 + 0x18);
          *(undefined4 *)(lVar3 + 0x18) = 0;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (0 < iVar1) {
            FUN_05b11f04(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
          }
          if (*param_1 == 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02fc8594();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


