/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$Invoke
ENTRY_POINT: 0280cb88
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_LogCallback2DelegateType__Invoke(undefined8 param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  uint uVar7;
  long unaff_x22;
  long *unaff_x23;
  
  FUN_0280c700(param_1,0);
  do {
    while( true ) {
      lVar6 = *(long *)(unaff_x19 + 0x80);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar2 = *(uint *)(unaff_x19 + 0x8c);
      if (*(uint *)(lVar6 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar1 = *(ushort *)(lVar6 + (long)(int)uVar2 * 2 + 0x20);
      uVar7 = (uint)uVar1;
      if (uVar1 < 0x3a) break;
      if (uVar7 < 0x4f) {
        if (uVar7 == 0x49) {
          uVar3 = FUN_0280e008();
          return uVar3;
        }
        if (uVar7 == 0x4e) {
          uVar3 = FUN_0280e084();
          return uVar3;
        }
      }
      else {
        if (uVar7 == 0x5d) {
          *(uint *)(unaff_x19 + 0x8c) = uVar2 + 1;
          if ((*(int *)(unaff_x19 + 0x24) - 5U < 2) || (*(int *)(unaff_x19 + 0x24) == 8)) {
            FUN_02804374();
            return 0;
          }
          goto LAB_0280cd60;
        }
        if (uVar7 == 0x6e) {
          FUN_0280d860();
          return 0;
        }
      }
switchD_0280cacc_caseD_b:
      *(uint *)(unaff_x19 + 0x8c) = uVar2 + 1;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_026b63d8(uVar1,0);
      if ((uVar4 & 1) == 0) {
LAB_0280cd60:
        uVar3 = FUN_0280d99c();
        uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfe158);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar3,uVar5);
      }
    }
    if (uVar7 - 9 < 0x31) {
                    /* WARNING: Could not recover jumptable at 0x0280cacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)((ulong)*(byte *)(unaff_x22 + (ulong)(uVar7 - 9)) * 4 + 0x280cad0))();
      return uVar3;
    }
    if (uVar7 != 0) goto switchD_0280cacc_caseD_b;
    uVar4 = FUN_0280d810();
    if ((uVar4 & 1) != 0) {
      if ((DAT_041252ed & 1) == 0) {
        FUN_01ab69ac(PTR_DAT_03cbebc0);
        DAT_041252ed = 1;
      }
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined4 *)(unaff_x19 + 0x10) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x19 + 0x18),0);
      return 0;
    }
  } while( true );
}


