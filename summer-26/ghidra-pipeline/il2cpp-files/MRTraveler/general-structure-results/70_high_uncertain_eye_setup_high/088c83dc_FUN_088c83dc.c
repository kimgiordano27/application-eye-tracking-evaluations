/*
FUNCTION_NAME: FUN_088c83dc
ENTRY_POINT: 088c83dc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_088c83dc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_40;
  long local_38;
  
  if ((DAT_0943e1ee & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e69d30);
    FUN_03c8f898(OVRTask<OVRPlugin_Result>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08e8f920);
    DAT_0943e1ee = 1;
  }
  local_40 = 0;
  local_38 = 0;
  FUN_07145224(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar6 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e9dc90);
    FUN_0705a2f8(uVar6,uVar5,0);
  }
  else {
    if (*(int *)(param_2 + 0x10) != 0) {
      if (*(int *)(*(long *)OVRTask<OVRPlugin_Result>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar4 = FUN_088c8648(param_2,&local_38,&local_40);
      puVar1 = PTR_DAT_08e69d30;
      if ((uVar4 & 1) != 0) {
        if (local_38 == 0) {
LAB_088c8540:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar5 = FUN_07b72c20(local_38,0);
        lVar9 = *(long *)puVar1;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar9);
        }
        lVar9 = FUN_0888bff4(uVar5,0);
        puVar7 = PTR_DAT_08ec4288;
        if (lVar9 != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar4 = FUN_0888d900(lVar9,0);
          puVar7 = PTR_DAT_08ec4290;
          if ((uVar4 & 1) != 0) {
            if ((local_38 != 0) &&
               (uVar2 = FUN_07b7285c(local_38,0), puVar1 = PTR_DAT_08e8f920, local_38 != 0)) {
              uVar6 = FUN_07b72b68(local_38,0);
              uVar3 = thunk_FUN_06f73d88(uVar6,*(undefined8 *)puVar1,0);
              FUN_088c80e0(param_1,uVar5,lVar9,uVar2,uVar3 & 1);
              return;
            }
            goto LAB_088c8540;
          }
        }
        local_40 = thunk_FUN_03ce5214(puVar7);
      }
      uVar5 = local_40;
      thunk_FUN_03ce5214(PTR_DAT_08e76350);
      uVar6 = thunk_FUN_03cf5234();
      uVar8 = thunk_FUN_03ce5214(PTR_DAT_08e9dc90);
      FUN_0705df24(uVar6,uVar5,uVar8,0);
      uVar5 = thunk_FUN_03ce5214(OVRTask<OVRSpatialAnchor_OperationResult>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar6,uVar5);
    }
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar6 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e82958);
    uVar8 = thunk_FUN_03ce5214(PTR_DAT_08e9dc90);
    FUN_0705df24(uVar6,uVar5,uVar8,0);
  }
  uVar5 = thunk_FUN_03ce5214(OVRTask<OVRSpatialAnchor_OperationResult>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar6,uVar5);
}


