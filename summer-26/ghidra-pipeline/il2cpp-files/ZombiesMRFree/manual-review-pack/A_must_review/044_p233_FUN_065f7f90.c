/*
FUNCTION_NAME: FUN_065f7f90
ENTRY_POINT: 065f7f90
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_065f7f90(int *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  int local_58;
  int local_54;
  
  if ((DAT_073a08e7 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6dbb8);
    FUN_02fe925c(PTR_DAT_06f998e0);
    FUN_02fe925c(PTR_DAT_06f6df30);
    FUN_02fe925c(PTR_DAT_06f6df38);
    FUN_02fe925c(System_Action<InputAction_CallbackContext>_TypeInfo);
    FUN_02fe925c(System_Action<InputStateHistory_Record>_TypeInfo);
    FUN_02fe925c(System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo);
    FUN_02fe925c(System_Action<OVRColocationSession_Data>_TypeInfo);
    FUN_02fe925c(System_Action<OVRHand_MicrogestureType>_TypeInfo);
    FUN_02fe925c(System_Action<OVRManager_PassthroughInitializationState>_TypeInfo);
    FUN_02fe925c(UnityEngine_SkinnedMeshRenderer_var);
    DAT_073a08e7 = 1;
  }
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  if ((param_1[1] != 1) || (*param_1 != 0x39)) {
    return;
  }
  local_70 = FUN_065f7724(param_1);
  uVar5 = FUN_0654a708(local_70,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar11 = *param_4;
  uVar6 = FUN_059687dc(param_3,*(undefined8 *)System_Action<OVRHand_MicrogestureType>_TypeInfo,0);
  if (lVar11 == 0) {
LAB_065f8604:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  local_80 = FUN_0661aadc(lVar11,uVar6,0);
  puVar2 = PTR_DAT_06f998e0;
  lVar11 = *(long *)PTR_DAT_06f998e0;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar11 = *(long *)puVar2;
  }
  auVar12 = FUN_0661b058(local_80,*(undefined4 *)(*(long *)(lVar11 + 0xb8) + 4),0);
  puVar3 = UnityEngine_SkinnedMeshRenderer_var;
  local_80 = auVar12;
  auVar12 = FUN_0661af68(local_80,*(undefined8 *)UnityEngine_SkinnedMeshRenderer_var,0);
  local_80 = auVar12;
  if (*(int *)(*(long *)PTR_DAT_06f6dbb8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar6 = FUN_05aa3bf0(0);
  plVar7 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6df38,4);
  puVar1 = PTR_DAT_06f6df30;
  local_54 = param_1[5];
  lVar11 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6df30,&local_54);
  if (plVar7 == (long *)0x0) goto LAB_065f8604;
  if (lVar11 != 0) {
    lVar8 = thunk_FUN_03010710(lVar11,*(undefined8 *)(*plVar7 + 0x40));
    if (lVar8 == 0) goto LAB_065f860c;
  }
  if ((int)plVar7[3] != 0) {
    plVar7[4] = lVar11;
    thunk_FUN_03048534(plVar7 + 4,lVar11);
    local_58 = param_1[4] + 1;
    lVar11 = thunk_FUN_0301043c(*(undefined8 *)puVar1,&local_58);
    if (lVar11 != 0) {
      lVar8 = thunk_FUN_03010710(lVar11,*(undefined8 *)(*plVar7 + 0x40));
      if (lVar8 == 0) goto LAB_065f860c;
    }
    if (*(uint *)(plVar7 + 3) < 2) goto LAB_065f8608;
    plVar7[5] = lVar11;
    thunk_FUN_03048534(plVar7 + 5,lVar11);
    lVar11 = FUN_06558d74(local_70,0);
    if (lVar11 != 0) {
      lVar8 = thunk_FUN_03010710(lVar11,*(undefined8 *)(*plVar7 + 0x40));
      if (lVar8 == 0) goto LAB_065f860c;
    }
    if (2 < *(uint *)(plVar7 + 3)) {
      plVar7[6] = lVar11;
      thunk_FUN_03048534(plVar7 + 6,lVar11);
      local_84 = param_1[5];
      lVar11 = thunk_FUN_0301043c(*(undefined8 *)puVar1,&local_84);
      if (lVar11 != 0) {
        lVar8 = thunk_FUN_03010710(lVar11,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar8 == 0) {
LAB_065f860c:
          uVar6 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                            ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar6,0);
        }
      }
      if (3 < *(uint *)(plVar7 + 3)) {
        plVar7[7] = lVar11;
        thunk_FUN_03048534(plVar7 + 7,lVar11);
        uVar6 = FUN_05972830(uVar6,*(undefined8 *)
                                    System_Action<OVRManager_PassthroughInitializationState>_TypeInfo
                             ,plVar7,0);
        auVar12 = FUN_0661b670(local_80,uVar6,0);
        local_80 = auVar12;
        auVar12 = FUN_0661b11c(local_80,*(uint *)(param_2 + 0x30) & 7,0);
        local_80 = auVar12;
        FUN_0661b284(local_80,param_1[0xb],0);
        lVar11 = *param_4;
        uVar6 = FUN_059687dc(param_3,*(undefined8 *)System_Action<InputStateHistory_Record>_TypeInfo
                             ,0);
        if (lVar11 != 0) {
          auVar12 = FUN_0661aadc(lVar11,uVar6,0);
          local_80 = auVar12;
          auVar12 = FUN_0661b058(local_80,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0);
          local_80 = auVar12;
          auVar12 = FUN_0661af68(local_80,*(undefined8 *)puVar3,0);
          local_80 = auVar12;
          uVar6 = FUN_05aa3bf0(0);
          local_88 = param_1[4] + 1;
          uVar9 = thunk_FUN_0301043c(*(undefined8 *)puVar1,&local_88);
          local_8c = param_1[4] + 3;
          uVar10 = thunk_FUN_0301043c(*(undefined8 *)puVar1,&local_8c);
          puVar4 = System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo;
          uVar6 = FUN_0597277c(uVar6,*(undefined8 *)
                                      System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo
                               ,uVar9,uVar10,0);
          auVar12 = FUN_0661b670(local_80,uVar6,0);
          local_80 = auVar12;
          auVar12 = FUN_0661b11c(local_80,*(uint *)(param_2 + 0x30) & 7,0);
          local_80 = auVar12;
          FUN_0661b284(local_80,param_1[0xb],0);
          lVar11 = *param_4;
          uVar6 = FUN_059687dc(param_3,*(undefined8 *)
                                        System_Action<OVRColocationSession_Data>_TypeInfo,0);
          if (lVar11 != 0) {
            auVar12 = FUN_0661aadc(lVar11,uVar6,0);
            local_80 = auVar12;
            auVar12 = FUN_0661b058(local_80,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0
                                  );
            local_80 = auVar12;
            auVar12 = FUN_0661af68(local_80,*(undefined8 *)puVar3,0);
            local_80 = auVar12;
            uVar6 = FUN_05aa3bf0(0);
            local_90 = param_1[4] + 3;
            uVar9 = thunk_FUN_0301043c(*(undefined8 *)puVar1,&local_90);
            local_94 = param_1[4] + 5;
            uVar10 = thunk_FUN_0301043c(*(undefined8 *)puVar1,&local_94);
            uVar6 = FUN_0597277c(uVar6,*(undefined8 *)puVar4,uVar9,uVar10,0);
            auVar12 = FUN_0661b670(local_80,uVar6,0);
            local_80 = auVar12;
            auVar12 = FUN_0661b11c(local_80,*(uint *)(param_2 + 0x30) & 7,0);
            local_80 = auVar12;
            FUN_0661b284(local_80,param_1[0xb],0);
            lVar11 = *param_4;
            uVar6 = FUN_059687dc(param_3,*(undefined8 *)
                                          System_Action<InputAction_CallbackContext>_TypeInfo,0);
            if (lVar11 != 0) {
              auVar12 = FUN_0661aadc(lVar11,uVar6,0);
              local_80 = auVar12;
              auVar12 = FUN_0661b058(local_80,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4)
                                     ,0);
              local_80 = auVar12;
              auVar12 = FUN_0661af68(local_80,*(undefined8 *)puVar3,0);
              local_80 = auVar12;
              uVar6 = FUN_05aa3bf0(0);
              local_98 = param_1[4] + 5;
              uVar9 = thunk_FUN_0301043c(*(undefined8 *)puVar1,&local_98);
              local_9c = param_1[4] + 7;
              uVar10 = thunk_FUN_0301043c(*(undefined8 *)puVar1,&local_9c);
              uVar6 = FUN_0597277c(uVar6,*(undefined8 *)puVar4,uVar9,uVar10,0);
              auVar12 = FUN_0661b670(local_80,uVar6,0);
              local_80 = auVar12;
              auVar12 = FUN_0661b11c(local_80,*(uint *)(param_2 + 0x30) & 7,0);
              local_80 = auVar12;
              FUN_0661b284(local_80,param_1[0xb],0);
              return;
            }
          }
        }
        goto LAB_065f8604;
      }
    }
  }
LAB_065f8608:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


