/*
FUNCTION_NAME: FUN_075ca7ac
ENTRY_POINT: 075ca7ac
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_075ca7ac(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar2 = PTR_DAT_07d97b20;
  puVar1 = PTR_DAT_07d882c0;
  if ((DAT_0826eb09 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d882c0);
    FUN_0373b518(OVRPlugin_Vector4s_TypeInfo);
    FUN_0373b518(PTR_DAT_07d97b20);
    FUN_0373b518(OVRPlugin_VirtualKeyboardModelAnimationState_TypeInfo);
    DAT_0826eb09 = 1;
  }
  plVar3 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,4);
  local_24 = *param_1;
  lVar4 = thunk_FUN_037784fc(*(undefined8 *)puVar2,&local_24);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_075ca994:
    uVar6 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar6,0);
  }
  puVar1 = OVRPlugin_Vector4s_TypeInfo;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_037aeb94(plVar3 + 4,lVar4);
    local_28 = param_1[1];
    lVar4 = thunk_FUN_037784fc(*(undefined8 *)puVar1,&local_28);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_075ca994;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      thunk_FUN_037aeb94(plVar3 + 5,lVar4);
      puVar1 = PTR_DAT_07d86548;
      local_34 = param_1[2];
      lVar4 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x48),&local_34);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_075ca994;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_037aeb94(plVar3 + 6,lVar4);
        local_38 = param_1[3];
        lVar4 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_38);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_075ca994;
        puVar1 = OVRPlugin_VirtualKeyboardModelAnimationState_TypeInfo;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          thunk_FUN_037aeb94(plVar3 + 7,lVar4);
          FUN_060c205c(*(undefined8 *)puVar1,plVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


