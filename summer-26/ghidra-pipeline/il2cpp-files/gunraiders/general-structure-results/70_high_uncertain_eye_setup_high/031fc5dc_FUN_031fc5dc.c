/*
FUNCTION_NAME: FUN_031fc5dc
ENTRY_POINT: 031fc5dc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_031fc5dc(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_34;
  
  if ((DAT_0453270f & 1) == 0) {
    FUN_01c5d288(DarkTonic_MasterAudio_MusicSetting_<>c__DisplayClass32_1_TypeInfo);
    FUN_01c5d288(OVRPlugin_OVRP_1_58_0_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(OVRManager_<>c_TypeInfo);
    FUN_01c5d288(System_Xml_QueryOutputWriter_TypeInfo);
    DAT_0453270f = 1;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 3) {
      lVar3 = *(long *)(param_1 + 0x38);
      if (lVar3 != 0) {
        if (*(char *)(lVar3 + 0x2c) == '\0') {
          uVar7 = FUN_031f2134(lVar3,*(undefined8 *)(param_1 + 0x40),0);
          uVar4 = FUN_032106f8(uVar7,0,0);
          if ((uVar4 & 1) == 0) {
            return;
          }
          if (((*(long *)(param_1 + 0x38) != 0) && (param_3 != 0)) &&
             (plVar5 = *(long **)(*(long *)(param_1 + 0x38) + 0x20), plVar5 != (long *)0x0)) {
            uVar6 = *(undefined8 *)(param_2 + 0x58);
            uVar9 = *(undefined8 *)(param_3 + 0x58);
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x198);
            uVar8 = *(undefined8 *)(*plVar5 + 0x1a0);
            goto LAB_031fc804;
          }
        }
        else if ((param_3 != 0) && (plVar5 = *(long **)(lVar3 + 0x20), plVar5 != (long *)0x0)) {
          uVar6 = *(undefined8 *)(param_2 + 0x58);
          uVar7 = *(undefined8 *)(param_1 + 0x40);
          uVar9 = *(undefined8 *)(param_3 + 0x58);
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x1a8);
          uVar8 = *(undefined8 *)(*plVar5 + 0x1b0);
LAB_031fc804:
                    /* WARNING: Could not recover jumptable at 0x031fc814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(plVar5,uVar9,uVar7,uVar6,uVar8);
          return;
        }
      }
    }
    else {
      uVar7 = *(undefined8 *)(param_2 + 0xe8);
      if (iVar1 == 2) {
        uVar8 = *(undefined8 *)OVRPlugin_OVRP_1_58_0_TypeInfo;
        if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar3 = FUN_032e04b8(uVar8,0);
        puVar2 = OVRManager_<>c_TypeInfo;
        uVar8 = **(undefined8 **)(*(long *)OVRManager_<>c_TypeInfo + 0xb8);
        thunk_FUN_01c21c38();
        uVar4 = FUN_03210168(uVar8,0,0);
        if ((uVar4 & 1) != 0) {
          if ((lVar3 == 0) ||
             (lVar3 = FUN_032eb8e8(lVar3,*(undefined8 *)System_Xml_QueryOutputWriter_TypeInfo,0),
             lVar3 == 0)) goto LAB_031fc82c;
          if (*(int *)(lVar3 + 0x18) != 1) {
            uVar7 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
            uVar7 = FUN_01c5d2fc(uVar7,1);
            FUN_019b2708(lVar3);
            local_34 = (undefined4)*(undefined8 *)(lVar3 + 0x18);
            uVar8 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
            uVar8 = thunk_FUN_01c49334(uVar8,&local_34);
            FUN_019b2708(uVar7);
            FUN_019b8dd4(uVar7,uVar8);
            FUN_019b8e08(uVar7,0,uVar8);
            uVar8 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_59_0_TypeInfo);
            uVar7 = FUN_03315920(uVar8,uVar7,0);
            thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
            uVar8 = thunk_FUN_01c496e0();
            FUN_031dce5c(uVar8,uVar7,0);
            uVar7 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_5_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar8,uVar7);
          }
          uVar8 = *(undefined8 *)(lVar3 + 0x20);
          thunk_FUN_01c21c38();
          **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar8;
        }
        uVar9 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
        thunk_FUN_01c21c38();
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        if (*(int *)(*(long *)DarkTonic_MasterAudio_MusicSetting_<>c__DisplayClass32_1_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_031df844(uVar9,uVar8,uVar7,0);
        return;
      }
      if (iVar1 != 1) {
        return;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        thunk_FUN_01c5c9d4(*(long *)(param_1 + 0x18),uVar7,*(undefined8 *)(param_1 + 0x20),0);
        return;
      }
    }
  }
LAB_031fc82c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


