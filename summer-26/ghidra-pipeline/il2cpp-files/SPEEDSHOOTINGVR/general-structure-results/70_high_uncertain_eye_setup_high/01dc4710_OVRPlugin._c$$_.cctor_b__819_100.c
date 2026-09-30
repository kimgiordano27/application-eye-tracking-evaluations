/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_100
ENTRY_POINT: 01dc4710
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_<>c__<_cctor>b__819_100(long param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  
  if ((DAT_0247dac0 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bd48);
    DAT_0247dac0 = 1;
  }
  FUN_01d8c630(param_1,0);
  puVar2 = PTR_DAT_0234bd48;
  if (param_2 == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar4 = thunk_FUN_010400dc();
    uVar5 = thunk_FUN_010303a8(PTR_DAT_0235ac20);
    FUN_01c5e120(uVar4,uVar5,0);
    uVar5 = thunk_FUN_010303a8(PTR_DAT_0235ac28);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar4,uVar5);
  }
  if (*(int *)(param_2 + 0x10) < 1) {
OVRPlugin_<>c__<_cctor>b__819_102:
    *(long *)(param_1 + 0x10) = param_2;
    thunk_FUN_0106e12c((long *)(param_1 + 0x10),param_2);
    return;
  }
  bVar1 = false;
  iVar6 = 0;
  do {
    while( true ) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar3 = FUN_01c6c054(param_2,iVar6,0);
      if ((uVar3 & 1) != 0) break;
      if (bVar1) goto LAB_01dc480c;
LAB_01dc47dc:
      iVar6 = iVar6 + 1;
      bVar1 = false;
      if (*(int *)(param_2 + 0x10) <= iVar6) goto OVRPlugin_<>c__<_cctor>b__819_102;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar3 = FUN_01c6c324(param_2,iVar6,0);
    if ((uVar3 & 1) == 0) {
      if (bVar1) goto LAB_01dc47dc;
      break;
    }
    if (bVar1) break;
    iVar6 = iVar6 + 1;
    bVar1 = true;
  } while (iVar6 < *(int *)(param_2 + 0x10));
LAB_01dc480c:
  uVar4 = thunk_FUN_010303a8(PTR_DAT_0235abc8);
  uVar5 = thunk_FUN_010303a8(PTR_DAT_0235ac20);
  uVar4 = FUN_01c42574(uVar4,uVar5,0);
  thunk_FUN_010303a8(PTR_DAT_0234bcd0);
  uVar5 = thunk_FUN_010400dc();
  FUN_01c65ad0(uVar5,uVar4,0);
  uVar4 = thunk_FUN_010303a8(PTR_DAT_0235ac28);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar5,uVar4);
}


