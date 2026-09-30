/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_session_t_session_handle_set
ENTRY_POINT: 085abb48
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_session_t_session_handle_set
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x23;
  long *plVar13;
  long unaff_x24;
  
  plVar13 = *(long **)(unaff_x23 + 0x870);
  if ((*(byte *)(unaff_x24 + 0xce4) & 1) == 0) {
    FUN_04077588(PTR_DAT_093300a8);
    FUN_04077588(PTR_DAT_093300b0);
    FUN_04077588(PTR_DAT_0932c7b8);
    FUN_04077588(PTR_DAT_0932c870);
    FUN_04077588(PTR_DAT_093300b8);
    FUN_04077588(PTR_DAT_093300c0);
    *(undefined1 *)(unaff_x24 + 0xce4) = 1;
  }
  puVar3 = PTR_DAT_093300b0;
  puVar2 = PTR_DAT_093300a8;
  puVar1 = PTR_DAT_0932c7b8;
  if (*(int *)(*plVar13 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar5 = PTR_DAT_093300c0;
  puVar4 = PTR_DAT_093300b8;
  FUN_084f7848(param_1,0);
  uVar7 = FUN_0513e6bc(0x3a,*(undefined8 *)puVar1);
  FUN_084f7b48(param_1,uVar7,0);
  uVar7 = *(undefined8 *)puVar3;
  *(undefined1 *)(param_1 + 0x52) = 0;
  uVar7 = thunk_FUN_040b4efc(uVar7);
  FUN_076bca34(uVar7,0);
  *(undefined8 *)(param_1 + 0xc0) = uVar7;
  thunk_FUN_040ec700((undefined8 *)(param_1 + 0xc0),uVar7);
  uVar7 = *(undefined8 *)puVar2;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar8 = FUN_04077674(uVar7,2);
  plVar13 = (long *)(param_1 + 200);
  *plVar13 = lVar8;
  thunk_FUN_040ec700(plVar13,lVar8);
  uVar12 = 0;
  lVar8 = 0x20;
  while (lVar10 = *plVar13, lVar10 != 0) {
    if (lVar8 == 0x20) {
      if ((ulong)*(uint *)(lVar10 + 0x18) == 0) goto LAB_085abd44;
      puVar9 = (undefined8 *)(lVar10 + 0x20);
      uVar7 = param_3;
    }
    else {
      if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_085abd44;
      puVar9 = (undefined8 *)(lVar10 + lVar8);
      uVar7 = param_4;
    }
    *puVar9 = uVar7;
    thunk_FUN_040ec700();
    lVar10 = *plVar13;
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= uVar12) {
LAB_085abd44:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    if (*(long *)(lVar10 + lVar8) == 0) {
      *(undefined4 *)(lVar10 + lVar8 + 8) = 0xffffffff;
    }
    else {
      uVar6 = FUN_08996620(*(long *)(lVar10 + lVar8),*(undefined8 *)puVar5,0);
      lVar11 = *plVar13;
      *(undefined4 *)(lVar10 + lVar8 + 8) = uVar6;
      lVar10 = lVar11;
      if (lVar11 == 0) break;
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_085abd44;
    if (*(long *)(lVar10 + lVar8) == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = FUN_08996620(*(long *)(lVar10 + lVar8),*(undefined8 *)puVar4,0);
    }
    lVar10 = lVar10 + lVar8;
    lVar8 = lVar8 + 0x10;
    uVar12 = uVar12 + 1;
    *(undefined4 *)(lVar10 + 0xc) = uVar6;
    if (lVar8 == 0x40) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


