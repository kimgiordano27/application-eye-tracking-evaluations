/*
FUNCTION_NAME: FUN_01866984
ENTRY_POINT: 01866984
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_01866984(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_06e434f0;
  puVar2 = PTR_DAT_06d9ec30;
  if ((bRam000000000722ab20 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e434f0);
    thunk_FUN_0159f088(PTR_DAT_06e18670);
    thunk_FUN_0159f088(PTR_DAT_06ddaad8);
    thunk_FUN_0159f088(PTR_DAT_06d9ec30);
    bRam000000000722ab20 = 1;
  }
  uVar6 = FUN_0160edfc(*(undefined8 *)puVar3,4);
  FUN_02df8d44(uVar6,*(undefined8 *)puVar2,0);
  if ((param_2 == 0) || (lVar7 = FUN_02529604(param_2,uVar6,0), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  iVar1 = *(int *)(lVar7 + 0x18);
  if (iVar1 < 8) {
    uVar6 = thunk_FUN_0159f088(PTR_DAT_06dda078);
    uVar6 = FUN_02d8df60(uVar6,param_2,0);
    thunk_FUN_0159f088(PTR_DAT_06dbba10);
    uVar9 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    FUN_028c5828(uVar9,uVar6,0);
    uVar6 = thunk_FUN_0159f088(PTR_DAT_06dbc348);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar9,uVar6);
  }
  uVar6 = *(undefined8 *)(lVar7 + ((long)iVar1 + -1) * 8 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar8 = FUN_02900608(uVar6,0,0);
  puVar2 = PTR_DAT_06ddaad8;
  uVar4 = (uint)((long)iVar1 + -1);
  if ((uVar8 & 1) == 0) {
    uVar4 = iVar1 - 2;
  }
  if (uVar4 < *(uint *)(lVar7 + 0x18)) {
    uVar9 = *(undefined8 *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
    lVar10 = (long)(int)uVar4 + -1;
    uVar6 = FUN_040f742c(0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar2);
    }
    uVar4 = OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryStatus(uVar9,uVar6,0);
    if ((uint)lVar10 < *(uint *)(lVar7 + 0x18)) {
      uVar9 = *(undefined8 *)(lVar7 + lVar10 * 8 + 0x20);
      uVar6 = FUN_040f742c(0);
      uVar5 = OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryStatus(uVar9,uVar6,0);
      return uVar4 & 0xff | (uVar5 & 0xff) << 8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


