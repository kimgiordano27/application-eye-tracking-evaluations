/*
FUNCTION_NAME: OVRPlugin.GUID$$.ctor
ENTRY_POINT: 0280cae0
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


undefined8 OVRPlugin_GUID___ctor(long param_1)

{
  ushort uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  uint unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  
code_r0x0280cae0:
  if ((bool)in_CY && !(bool)in_ZR) {
    if (unaff_w21 == 0x5d) {
      *(int *)(unaff_x19 + 0x8c) = (int)param_1 + 1;
      if ((*(int *)(unaff_x19 + 0x24) - 5U < 2) || (*(int *)(unaff_x19 + 0x24) == 8)) {
        FUN_02804374();
        return 0;
      }
      goto LAB_0280cd60;
    }
    if (unaff_w21 == 0x6e) {
      FUN_0280d860();
      return 0;
    }
  }
  else {
    if (unaff_w21 == 0x49) {
      uVar3 = FUN_0280e008();
      return uVar3;
    }
    if (unaff_w21 == 0x4e) {
      uVar3 = FUN_0280e084();
      return uVar3;
    }
  }
  while( true ) {
    *(int *)(unaff_x19 + 0x8c) = (int)param_1 + 1;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar2 = FUN_026b63d8(unaff_w21,0);
    if ((uVar2 & 1) == 0) break;
    while( true ) {
      lVar5 = *(long *)(unaff_x19 + 0x80);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      param_1 = (long)(int)*(uint *)(unaff_x19 + 0x8c);
      if (*(uint *)(lVar5 + 0x18) <= *(uint *)(unaff_x19 + 0x8c)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar1 = *(ushort *)(lVar5 + param_1 * 2 + 0x20);
      unaff_w21 = (uint)uVar1;
      if (0x39 < uVar1) {
        in_CY = 0x4d < unaff_w21;
        in_ZR = unaff_w21 == 0x4e;
        goto code_r0x0280cae0;
      }
      if (unaff_w21 - 9 < 0x31) {
                    /* WARNING: Could not recover jumptable at 0x0280cacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)((ulong)*(byte *)(unaff_x22 + (ulong)(unaff_w21 - 9)) * 4 + 0x280cad0))();
        return uVar3;
      }
      if (unaff_w21 != 0) break;
      uVar2 = FUN_0280d810();
      if ((uVar2 & 1) != 0) {
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
  }
LAB_0280cd60:
  uVar3 = FUN_0280d99c();
  uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfe158);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar3,uVar4);
}


