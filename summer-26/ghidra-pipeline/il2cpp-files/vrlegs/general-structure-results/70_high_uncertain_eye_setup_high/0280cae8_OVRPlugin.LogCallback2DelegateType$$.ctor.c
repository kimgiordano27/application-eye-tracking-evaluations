/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$.ctor
ENTRY_POINT: 0280cae8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_LogCallback2DelegateType___ctor(long param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined1 in_ZR;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  uint uVar7;
  uint unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  
code_r0x0280cae8:
  if ((bool)in_ZR) {
    uVar4 = FUN_0280e008();
    return uVar4;
  }
  if (unaff_w21 == 0x4e) {
    uVar4 = FUN_0280e084();
    return uVar4;
  }
switchD_0280cacc_caseD_b:
  do {
    *(int *)(unaff_x19 + 0x8c) = (int)param_1 + 1;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_026b63d8(unaff_w21,0);
    if ((uVar3 & 1) == 0) {
LAB_0280cd60:
      uVar4 = FUN_0280d99c();
      uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfe158);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,uVar5);
    }
    while( true ) {
      lVar6 = *(long *)(unaff_x19 + 0x80);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar2 = *(uint *)(unaff_x19 + 0x8c);
      param_1 = (long)(int)uVar2;
      if (*(uint *)(lVar6 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar1 = *(ushort *)(lVar6 + param_1 * 2 + 0x20);
      unaff_w21 = (uint)uVar1;
      uVar7 = (uint)uVar1;
      if (0x39 < uVar1) break;
      if (uVar7 - 9 < 0x31) {
                    /* WARNING: Could not recover jumptable at 0x0280cacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)((ulong)*(byte *)(unaff_x22 + (ulong)(uVar7 - 9)) * 4 + 0x280cad0))();
        return uVar4;
      }
      if (uVar7 != 0) goto switchD_0280cacc_caseD_b;
      uVar3 = FUN_0280d810();
      if ((uVar3 & 1) != 0) {
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
    }
    if (uVar1 < 0x4f) {
      in_ZR = uVar7 == 0x49;
      goto code_r0x0280cae8;
    }
    if (uVar1 == 0x5d) {
      *(uint *)(unaff_x19 + 0x8c) = uVar2 + 1;
      if ((*(int *)(unaff_x19 + 0x24) - 5U < 2) || (*(int *)(unaff_x19 + 0x24) == 8)) {
        FUN_02804374();
        return 0;
      }
      goto LAB_0280cd60;
    }
    if (uVar1 == 0x6e) {
      FUN_0280d860();
      return 0;
    }
  } while( true );
}


