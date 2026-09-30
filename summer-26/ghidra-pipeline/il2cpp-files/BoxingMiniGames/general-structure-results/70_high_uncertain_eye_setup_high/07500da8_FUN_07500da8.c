/*
FUNCTION_NAME: FUN_07500da8
ENTRY_POINT: 07500da8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_07500da8(long param_1,byte param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar1 = Method_OVRNativeList<OVRPlugin_MarkerType>_Add__;
  if ((DAT_07ef4a64 & 1) == 0) {
    FUN_03642964(PTR_DAT_079fdb30);
    FUN_03642964(PTR_DAT_079fdb40);
    FUN_03642964(Method_OVRNativeList<OVRPlugin_MarkerType>_Dispose__);
    FUN_03642964(Method_OVRNativeList<OVRPlugin_MarkerType>_Add__);
    DAT_07ef4a64 = 1;
  }
  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05e5ae34(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) = param_3;
    *(byte *)(lVar4 + 0x10) = param_4 & 1;
    *(byte *)(lVar4 + 0x11) = param_2 & 1;
    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x18),param_3);
    FUN_074fd788(param_1);
    FUN_074ff8e4();
    puVar3 = Method_OVRNativeList<OVRPlugin_MarkerType>_Dispose__;
    puVar2 = PTR_DAT_079fdb40;
    puVar1 = PTR_DAT_079fdb30;
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 != 0) {
      *(undefined1 *)(lVar8 + 0x22) = 0;
      uVar5 = *(undefined8 *)puVar1;
      *(undefined1 *)(lVar8 + 0x10) = 0;
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


