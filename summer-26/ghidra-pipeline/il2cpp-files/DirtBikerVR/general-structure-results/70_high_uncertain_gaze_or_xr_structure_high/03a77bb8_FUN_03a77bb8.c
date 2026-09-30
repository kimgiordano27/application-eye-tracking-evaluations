/*
FUNCTION_NAME: FUN_03a77bb8
ENTRY_POINT: 03a77bb8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


void FUN_03a77bb8(long *param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_38;
  long lStack_30;
  undefined8 local_28;
  
  lVar4 = *(long *)(*(long *)param_1[1] + 0x28);
  *(undefined1 *)(*(long *)param_1[1] + 0x18) = 0;
  if (lVar4 != 0) {
    FUN_049d9b28(&local_38,lVar4,DAT_08639568);
    puVar6 = (undefined8 *)param_1[2];
    puVar6[2] = local_28;
    puVar6[1] = lStack_30;
    *puVar6 = local_38;
    puVar3 = OVRManager_CompositionMethod_TypeInfo;
    lVar4 = param_1[2];
    local_38 = 0;
    lStack_30 = lVar4;
    while (uVar5 = FUN_061c094c(param_1[2],*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      *(undefined8 *)param_1[3] = *(undefined8 *)(param_1[2] + 0x10);
      FUN_07de2c70(*(undefined8 *)param_1[1],*(undefined8 *)param_1[3]);
    }
    FUN_061c0948(lVar4,*(undefined8 *)OVRLocatable_TrackingSpacePose_TypeInfo);
    if (*(long *)(*(long *)param_1[1] + 0x28) != 0) {
      FUN_049d9654(*(long *)(*(long *)param_1[1] + 0x28),DAT_08639558);
      if (*(long *)(*(long *)param_1[1] + 0x20) != 0) {
        FUN_04de90b8(&local_38,*(long *)(*(long *)param_1[1] + 0x20),DAT_08640810);
        puVar6 = (undefined8 *)param_1[4];
        puVar6[2] = local_28;
        puVar6[1] = lStack_30;
        *puVar6 = local_38;
        puVar3 = OVRManager_EventListener_TypeInfo;
        lVar4 = param_1[4];
        local_38 = 0;
        lStack_30 = lVar4;
        while (uVar5 = FUN_061c1964(param_1[4],*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
          *(undefined8 *)param_1[5] = *(undefined8 *)(param_1[4] + 0x10);
          FUN_07de2898(*(undefined8 *)param_1[1],*(undefined8 *)param_1[5]);
        }
        FUN_061c1960(lVar4,*(undefined8 *)OVRManager_<>c_TypeInfo);
        lVar4 = *(long *)(*(long *)param_1[1] + 0x20);
        if (lVar4 != 0) {
          iVar1 = *(int *)(lVar4 + 0x18);
          *(undefined4 *)(lVar4 + 0x18) = 0;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (0 < iVar1) {
            Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                      (*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
          }
          cVar2 = *(char *)param_1[6];
          *(char *)param_1[7] = cVar2;
          if (cVar2 != '\0') {
            lVar7 = *(long *)param_1[1];
            lVar4 = *(long *)(lVar7 + 0x38) + 1;
            *(long *)param_1[8] = lVar4;
            *(long *)(lVar7 + 0x38) = lVar4;
          }
          if (*param_1 == 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9b8();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


