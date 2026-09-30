/*
FUNCTION_NAME: FUN_0750150c
ENTRY_POINT: 0750150c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_0750150c(long param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar1 = Method_OVRResult<OVRColocationSession_Result>_get_Status__;
  if ((DAT_07ef4a6a & 1) == 0) {
    FUN_03642964(PTR_DAT_079fdb30);
    FUN_03642964(PTR_DAT_079fdb40);
    FUN_03642964(Method_OVRResult<OVRPlugin_Result>_From__);
    FUN_03642964(Method_OVRResult<OVRColocationSession_Result>_get_Status__);
    DAT_07ef4a6a = 1;
  }
  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05e5ae34(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) = param_2;
    *(byte *)(lVar4 + 0x10) = param_3 & 1;
    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x18),param_2);
    FUN_074fd788(param_1);
    FUN_074ff8e4();
    puVar3 = Method_OVRResult<OVRPlugin_Result>_From__;
    puVar2 = PTR_DAT_079fdb40;
    puVar1 = PTR_DAT_079fdb30;
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 != 0) {
      *(undefined1 *)(lVar8 + 0x10) = 0;
      uVar5 = *(undefined8 *)puVar1;
      *(undefined1 *)(lVar8 + 0x22) = 1;
      uVar5 = thunk_FUN_0367fe20(uVar5);
      FUN_04164968(uVar5,lVar4,*(undefined8 *)puVar3,0);
      uVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
      FUN_0750ae74(uVar6,lVar8,uVar5,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        puVar7 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
        *puVar7 = uVar6;
        thunk_FUN_036b7ad0(puVar7,uVar6);
        return param_1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


