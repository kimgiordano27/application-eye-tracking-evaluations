/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_QuerySpaces
ENTRY_POINT: 0281a0b8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_QuerySpaces(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int in_w9;
  uint unaff_w21;
  long unaff_x22;
  int unaff_w23;
  
  iVar2 = (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  if (iVar2 != unaff_w23) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
    uVar5 = thunk_FUN_01a89e68();
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfe5f8);
    FUN_027a794c(uVar5,uVar6,0);
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfe600);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,uVar6);
  }
  lVar4 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbe888,unaff_w21 + 1);
  if (0 < (int)unaff_w21) {
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    uVar7 = 0;
    do {
      if (uVar1 == uVar7) goto LAB_0281a1b4;
      if (lVar4 == 0) goto LAB_0281a1b8;
      if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_0281a1b4;
      *(undefined4 *)(lVar4 + 0x20 + uVar7 * 4) = *(undefined4 *)(unaff_x22 + 0x20 + uVar7 * 4);
      uVar7 = uVar7 + 1;
    } while (unaff_w21 != uVar7);
  }
  iVar2 = thunk_FUN_01a5d2c8();
  if (0 < iVar2) {
    if (lVar4 == 0) {
LAB_0281a1b8:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar2 = 0;
    do {
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) {
LAB_0281a1b4:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(int *)(lVar4 + ((long)((ulong)unaff_w21 << 0x20) >> 0x1e) + 0x20) = iVar2;
      FUN_02819f60();
      iVar2 = iVar2 + 1;
      iVar3 = thunk_FUN_01a5d2c8();
    } while (iVar2 < iVar3);
  }
  return;
}


