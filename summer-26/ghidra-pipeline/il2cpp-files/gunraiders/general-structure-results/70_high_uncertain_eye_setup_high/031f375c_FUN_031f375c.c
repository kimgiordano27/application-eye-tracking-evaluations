/*
FUNCTION_NAME: FUN_031f375c
ENTRY_POINT: 031f375c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_031f375c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long extraout_x1;
  undefined8 uVar6;
  undefined4 uStack_58;
  undefined4 uStack_54;
  code *pcStack_50;
  
  if ((DAT_045326cf & 1) == 0) {
    FUN_01c5d288(VoxelBusters_EssentialKit_NetworkServicesUnitySettings_Address_TypeInfo);
    DAT_045326cf = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(int *)(param_2 + 0x1c) == 2) {
    if (*(int *)(param_2 + 0x20) == 2) {
      FUN_031f3070(param_1,param_2);
      return;
    }
    return;
  }
  if (*(int *)(param_2 + 0x1c) == 3) {
    FUN_031f495c(param_1,param_2);
    return;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  FUN_019b2708(uVar6);
  uVar6 = FUN_031fa42c(uVar6,0);
  lVar1 = FUN_01b853a4(uVar6,*(undefined8 *)
                              VoxelBusters_EssentialKit_NetworkServicesUnitySettings_Address_TypeInfo
                      );
  FUN_031f381c(lVar1,param_2);
  pcStack_50 = FUN_031f381c;
  uVar6 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
  uVar6 = FUN_01c5d2fc(uVar6,1);
  uVar2 = thunk_FUN_01c273e8(PTR_DAT_0422fd68);
  lVar3 = FUN_01c5d2fc(uVar2,7);
  if ((lVar1 != 0) && (lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar1 + 0x28);
      uVar2 = thunk_FUN_01c273e8(PTR_DAT_04231e50);
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x28) = uVar2;
        uStack_54 = *(undefined4 *)(lVar1 + 0x10);
        uVar2 = thunk_FUN_01c273e8(OVRManager_PassthroughCapabilities_TypeInfo);
        plVar4 = (long *)thunk_FUN_01c49334(uVar2,&uStack_54);
        uVar2 = thunk_FUN_01c273e8(OVRManager_SystemHeadsetType_TypeInfo);
        if (plVar4 == (long *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        }
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = uVar5;
          uVar5 = thunk_FUN_01c273e8(PTR_DAT_04231e50);
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x38) = uVar5;
            if (extraout_x1 == 0) goto LAB_031f386c;
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(extraout_x1 + 0x28);
              uVar5 = thunk_FUN_01c273e8(PTR_DAT_04231e50);
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = uVar5;
                uStack_58 = *(undefined4 *)(extraout_x1 + 0x10);
                uVar5 = thunk_FUN_01c273e8(OVRManager_PassthroughCapabilities_TypeInfo);
                plVar4 = (long *)thunk_FUN_01c49334(uVar5,&uStack_58);
                if (plVar4 == (long *)0x0) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
                }
                FUN_019b2708(lVar3);
                FUN_019b8e08(lVar3,6,uVar5);
                uVar5 = FUN_031533cc(lVar3,0);
                FUN_019b2708(uVar6);
                FUN_019b8dd4(uVar6,uVar5);
                FUN_019b8e08(uVar6,0,uVar5);
                uVar6 = FUN_03315920(uVar2,uVar6,0);
                thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
                uVar2 = thunk_FUN_01c496e0();
                FUN_031dce5c(uVar2,uVar6,0);
                uVar6 = thunk_FUN_01c273e8(OVRManager_XrApi_TypeInfo);
                    /* WARNING: Subroutine does not return */
                FUN_01c5d37c(uVar2,uVar6);
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
LAB_031f386c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


