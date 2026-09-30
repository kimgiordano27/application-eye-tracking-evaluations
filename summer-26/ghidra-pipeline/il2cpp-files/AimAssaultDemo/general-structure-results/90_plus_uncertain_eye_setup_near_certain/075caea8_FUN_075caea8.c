/*
FUNCTION_NAME: FUN_075caea8
ENTRY_POINT: 075caea8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;ray_or_cast_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_075caea8(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar2 = OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo;
  puVar1 = PTR_DAT_07d882c0;
  if ((DAT_0826eb0d & 1) == 0) {
    FUN_0373b518(OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo);
    FUN_0373b518(OVRRaycaster_<>c_TypeInfo);
    FUN_0373b518(PTR_DAT_07d882c0);
    FUN_0373b518(OVRRaycaster_RaycastHit_TypeInfo);
    DAT_0826eb0d = 1;
  }
  plVar3 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,7);
  local_34 = *param_1;
  lVar4 = thunk_FUN_037784fc(*(undefined8 *)puVar2,&local_34);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_075cb174:
    uVar6 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_037aeb94(plVar3 + 4,lVar4);
    puVar1 = PTR_DAT_07d86548;
    local_38 = param_1[1];
    lVar4 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x48),&local_38);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_075cb174;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      thunk_FUN_037aeb94(plVar3 + 5,lVar4);
      local_3c = param_1[2];
      lVar4 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_3c);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_075cb174;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_037aeb94(plVar3 + 6,lVar4);
        local_48 = *(undefined8 *)(param_1 + 4);
        lVar4 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x58),&local_48);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_075cb174;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          thunk_FUN_037aeb94(plVar3 + 7,lVar4);
          local_4c = param_1[6];
          lVar4 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_4c);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_075cb174;
          puVar2 = OVRRaycaster_<>c_TypeInfo;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar4;
            thunk_FUN_037aeb94(plVar3 + 8,lVar4);
            local_50 = param_1[7];
            lVar4 = thunk_FUN_037784fc(*(undefined8 *)puVar2,&local_50);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_075cb174;
            if (5 < *(uint *)(plVar3 + 3)) {
              plVar3[9] = lVar4;
              thunk_FUN_037aeb94(plVar3 + 9,lVar4);
              local_54 = param_1[8];
              lVar4 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_54);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
              goto LAB_075cb174;
              puVar1 = OVRRaycaster_RaycastHit_TypeInfo;
              if (6 < *(uint *)(plVar3 + 3)) {
                    /* try { // try from 075cb134 to 076cb15b has its CatchHandler @ 075cb5e0 */
                plVar3[10] = lVar4;
                thunk_FUN_037aeb94(plVar3 + 10,lVar4);
                FUN_076583bc(*(undefined8 *)puVar1,plVar3,0);
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


