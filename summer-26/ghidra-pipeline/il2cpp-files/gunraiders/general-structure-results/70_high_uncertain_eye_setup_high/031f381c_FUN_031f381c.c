/*
FUNCTION_NAME: FUN_031f381c
ENTRY_POINT: 031f381c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_031f381c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar1 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
  uVar1 = FUN_01c5d2fc(uVar1,1);
  uVar2 = thunk_FUN_01c273e8(PTR_DAT_0422fd68);
  lVar3 = FUN_01c5d2fc(uVar2,7);
  if ((param_3 != 0) && (lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_3 + 0x28);
      uVar2 = thunk_FUN_01c273e8(PTR_DAT_04231e50);
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x28) = uVar2;
        local_34 = *(undefined4 *)(param_3 + 0x10);
        uVar2 = thunk_FUN_01c273e8(OVRManager_PassthroughCapabilities_TypeInfo);
        plVar4 = (long *)thunk_FUN_01c49334(uVar2,&local_34);
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
            if (param_2 == 0) goto LAB_031f386c;
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(param_2 + 0x28);
              uVar5 = thunk_FUN_01c273e8(PTR_DAT_04231e50);
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = uVar5;
                local_38 = *(undefined4 *)(param_2 + 0x10);
                uVar5 = thunk_FUN_01c273e8(OVRManager_PassthroughCapabilities_TypeInfo);
                plVar4 = (long *)thunk_FUN_01c49334(uVar5,&local_38);
                if (plVar4 == (long *)0x0) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
                }
                FUN_019b2708(lVar3);
                FUN_019b8e08(lVar3,6,uVar5);
                uVar5 = FUN_031533cc(lVar3,0);
                FUN_019b2708(uVar1);
                FUN_019b8dd4(uVar1,uVar5);
                FUN_019b8e08(uVar1,0,uVar5);
                uVar1 = FUN_03315920(uVar2,uVar1,0);
                thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
                uVar2 = thunk_FUN_01c496e0();
                FUN_031dce5c(uVar2,uVar1,0);
                uVar1 = thunk_FUN_01c273e8(OVRManager_XrApi_TypeInfo);
                    /* WARNING: Subroutine does not return */
                FUN_01c5d37c(uVar2,uVar1);
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


