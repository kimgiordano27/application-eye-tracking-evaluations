/*
FUNCTION_NAME: FUN_075ca47c
ENTRY_POINT: 075ca47c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_075ca47c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar2 = PTR_DAT_07df25f0;
  puVar1 = PTR_DAT_07d882c0;
  if ((DAT_0826eb08 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d95b30);
    FUN_0373b518(PTR_DAT_07df25f0);
    FUN_0373b518(PTR_DAT_07d882c0);
    FUN_0373b518(OVRPlugin_Vector4f_TypeInfo);
    DAT_0826eb08 = 1;
  }
  plVar3 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,7);
  local_24 = *(undefined4 *)(param_1 + 3);
  lVar4 = thunk_FUN_037784fc(*(undefined8 *)puVar2,&local_24);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_075ca750:
    uVar6 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_037aeb94(plVar3 + 4,lVar4);
    puVar1 = PTR_DAT_07d86548;
    local_28 = *(undefined4 *)((long)param_1 + 0x1c);
    lVar4 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x48),&local_28);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_075ca750;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      thunk_FUN_037aeb94(plVar3 + 5,lVar4);
      local_34 = *(undefined4 *)(param_1 + 4);
      lVar4 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_34);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_075ca750;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_037aeb94(plVar3 + 6,lVar4);
        local_38 = *(undefined4 *)(param_1 + 5);
        lVar4 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_38);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_075ca750;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          thunk_FUN_037aeb94(plVar3 + 7,lVar4);
          local_3c = *(undefined4 *)((long)param_1 + 0x2c);
          lVar4 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_3c);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_075ca750;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar4;
            thunk_FUN_037aeb94(plVar3 + 8,lVar4);
            local_40 = *(undefined4 *)((long)param_1 + 0x24);
            lVar4 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_40);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_075ca750;
            puVar1 = PTR_DAT_07d95b30;
            if (5 < *(uint *)(plVar3 + 3)) {
              plVar3[9] = lVar4;
              thunk_FUN_037aeb94(plVar3 + 9,lVar4);
              local_50 = param_1[2];
              uStack_58 = param_1[1];
              local_60 = *param_1;
              lVar4 = thunk_FUN_037784fc(*(undefined8 *)puVar1,&local_60);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
              goto LAB_075ca750;
              puVar1 = OVRPlugin_Vector4f_TypeInfo;
              if (6 < *(uint *)(plVar3 + 3)) {
                plVar3[10] = lVar4;
                thunk_FUN_037aeb94(plVar3 + 10,lVar4);
                FUN_060c205c(*(undefined8 *)puVar1,plVar3,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


