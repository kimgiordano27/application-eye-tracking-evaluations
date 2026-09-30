/*
FUNCTION_NAME: FUN_05eb7b40
ENTRY_POINT: 05eb7b40
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05eb7b40(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_065df5d8;
  if ((DAT_06a7d2f0 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc0d8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a10);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_SpaceComponentType___TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df5d8);
    DAT_06a7d2f0 = 1;
  }
  uVar2 = FUN_04db9688(param_2,0);
  uVar6 = *(undefined8 *)puVar1;
  if ((uVar2 & 1) == 0) {
    uVar6 = param_2;
  }
  if (param_3 == 0) {
    if (*(int *)(*(long *)PTR_DAT_065dc0d8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    plVar3 = (long *)FUN_04ef45ec(0);
    if (plVar3 == (long *)0x0) goto LAB_05eb7cb8;
    param_3 = (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
  }
  plVar3 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
  lVar4 = FUN_03c8b08c(param_1,uVar6,param_3,0);
  if (plVar3 == (long *)0x0) {
LAB_05eb7cb8:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_02cea798(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_05eb7cbc:
    uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    lVar4 = FUN_04f43658(param_1 + 0xc,uVar6,param_3,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02cea798(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_05eb7cbc;
    puVar1 = OVRPlugin_SpaceComponentType___TypeInfo;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      FUN_05f5cc4c(*(undefined8 *)puVar1,plVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


