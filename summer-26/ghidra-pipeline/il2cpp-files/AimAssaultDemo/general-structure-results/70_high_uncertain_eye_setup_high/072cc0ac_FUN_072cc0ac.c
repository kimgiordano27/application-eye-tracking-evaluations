/*
FUNCTION_NAME: FUN_072cc0ac
ENTRY_POINT: 072cc0ac
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_072cc0ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_08268af9 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d88f80);
    FUN_0373b518(OVRPlugin_AppPerfFrameStats___TypeInfo);
    FUN_0373b518(OVRPlugin_BodyJointLocation___TypeInfo);
    DAT_08268af9 = 1;
  }
  FUN_072cee94();
  FUN_072cf3bc();
  if (DAT_08268bee == '\0') {
    FUN_0373b518(OVRPlugin_Bone___TypeInfo);
    DAT_08268bee = '\x01';
  }
  puVar2 = OVRPlugin_BodyJointLocation___TypeInfo;
  lVar4 = *(long *)(*(long *)(*(long *)OVRPlugin_Bone___TypeInfo + 0xb8) + 0x10);
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x20);
    lVar6 = *plVar5;
    lVar4 = *(long *)OVRPlugin_BodyJointLocation___TypeInfo;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar4 = *(long *)puVar2;
    }
    puVar1 = PTR_DAT_07d88f80;
    lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar4 = *(long *)puVar2;
      }
      uVar8 = **(undefined8 **)(lVar4 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
      FUN_061a7ce0(lVar7,uVar8,*(undefined8 *)OVRPlugin_AppPerfFrameStats___TypeInfo,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar3 = lVar7;
      thunk_FUN_037aeb94(plVar3,lVar7);
    }
    plVar3 = (long *)FUN_062889cc(lVar6,lVar7,0);
    if (plVar3 == (long *)0x0) {
      *plVar5 = 0;
    }
    else {
      lVar4 = *(long *)puVar1;
      if ((*plVar3 != lVar4) || (*plVar5 = (long)plVar3, *plVar3 != lVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar3);
      }
    }
    thunk_FUN_037aeb94(plVar5,plVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


