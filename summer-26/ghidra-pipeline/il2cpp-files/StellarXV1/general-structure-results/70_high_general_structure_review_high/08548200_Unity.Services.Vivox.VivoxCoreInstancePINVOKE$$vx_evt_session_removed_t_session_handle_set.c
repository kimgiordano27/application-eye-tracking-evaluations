/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_removed_t_session_handle_set
ENTRY_POINT: 08548200
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


bool Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_removed_t_session_handle_set
               (long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  if ((DAT_0989d9d1 & 1) == 0) {
    FUN_04077588(PTR_DAT_09285bb0);
    DAT_0989d9d1 = 1;
  }
  *(undefined8 *)(param_1 + 0xd0) = *param_5;
  thunk_FUN_040ec700();
  *(undefined8 *)(param_1 + 0xc0) = *param_4;
  thunk_FUN_040ec700();
  *(undefined8 *)(param_1 + 0x118) = *param_3;
  thunk_FUN_040ec700(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x158) = *param_2;
  thunk_FUN_040ec700(param_1 + 0x158);
  uVar4 = FUN_08547f18(param_1);
  lVar6 = *(long *)(param_1 + 0x158);
  if ((uVar4 & 1) == 0) {
    if (lVar6 == 0) goto LAB_0854838c;
    uVar7 = 0xc9;
    if (*(char *)(lVar6 + 0x15) != '\0') {
      uVar7 = 0x1c2;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar7;
  }
  else {
    if (lVar6 == 0) goto LAB_0854838c;
    cVar2 = *(char *)(lVar6 + 0x15);
    uVar7 = 0xdc;
    if (cVar2 != '\0') {
      uVar7 = 300;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar7;
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x53) = 1;
    }
    *(undefined4 *)(lVar6 + 0x18) = 1;
  }
  if (*(int *)(lVar6 + 0x18) == 0) {
    uVar7 = 1;
  }
  else {
    if (*(int *)(lVar6 + 0x18) != 1) goto LAB_08548390;
    uVar7 = 3;
  }
  uVar1 = *(uint *)(lVar6 + 0x30);
  *(undefined4 *)(param_1 + 0xa0) = uVar7;
  puVar3 = PTR_DAT_09285bb0;
  if (uVar1 < 3) {
    uVar8 = *(undefined8 *)(param_1 + 0xc0);
    *(uint *)(param_1 + 0x100) = uVar1;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar4 = FUN_089ca704(uVar8,0,0);
    if ((uVar4 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x158);
      if (lVar6 == 0) {
LAB_0854838c:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if ((0.0 < *(float *)(lVar6 + 0x20)) && (0.0 < *(float *)(lVar6 + 0x28))) {
        return 0.0 < *(float *)(lVar6 + 0x34);
      }
    }
    return false;
  }
LAB_08548390:
  thunk_FUN_040dedf8(PTR_DAT_09288c08);
  uVar8 = thunk_FUN_040b4efc();
  FUN_075d60dc(uVar8,0);
  uVar5 = thunk_FUN_040dedf8(PTR_DAT_0932e2a8);
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar8,uVar5);
}


