/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_session_t_session_handle_get
ENTRY_POINT: 085abbe0
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_session_t_session_handle_get(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long *plVar8;
  undefined4 unaff_w22;
  ulong uVar9;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *puVar10;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  
  puVar1 = PTR_DAT_093300c0;
  puVar10 = *(undefined8 **)(unaff_x24 + 0xb8);
  FUN_084f7848();
  FUN_0513e6bc(0x3a,*unaff_x27);
  FUN_084f7b48();
  uVar3 = *unaff_x23;
  *(undefined1 *)(unaff_x21 + 0x52) = 0;
  uVar3 = thunk_FUN_040b4efc(uVar3);
  FUN_076bca34(uVar3,0);
  *(undefined8 *)(unaff_x21 + 0xc0) = uVar3;
  thunk_FUN_040ec700((undefined8 *)(unaff_x21 + 0xc0),uVar3);
  uVar3 = *unaff_x26;
  *(undefined4 *)(unaff_x21 + 0x10) = unaff_w22;
  lVar4 = FUN_04077674(uVar3,2);
  plVar8 = (long *)(unaff_x21 + 200);
  *plVar8 = lVar4;
  thunk_FUN_040ec700(plVar8,lVar4);
  uVar9 = 0;
  lVar4 = 0x20;
  while (lVar6 = *plVar8, lVar6 != 0) {
    if (lVar4 == 0x20) {
      if ((ulong)*(uint *)(lVar6 + 0x18) == 0) goto LAB_085abd44;
      puVar5 = (undefined8 *)(lVar6 + 0x20);
      uVar3 = unaff_x20;
    }
    else {
      if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_085abd44;
      puVar5 = (undefined8 *)(lVar6 + lVar4);
      uVar3 = unaff_x19;
    }
    *puVar5 = uVar3;
    thunk_FUN_040ec700();
    lVar6 = *plVar8;
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar9) {
LAB_085abd44:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    if (*(long *)(lVar6 + lVar4) == 0) {
      *(undefined4 *)(lVar6 + lVar4 + 8) = 0xffffffff;
    }
    else {
      uVar2 = FUN_08996620(*(long *)(lVar6 + lVar4),*(undefined8 *)puVar1,0);
      lVar7 = *plVar8;
      *(undefined4 *)(lVar6 + lVar4 + 8) = uVar2;
      lVar6 = lVar7;
      if (lVar7 == 0) break;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_085abd44;
    if (*(long *)(lVar6 + lVar4) == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = FUN_08996620(*(long *)(lVar6 + lVar4),*puVar10,0);
    }
    lVar6 = lVar6 + lVar4;
    lVar4 = lVar4 + 0x10;
    uVar9 = uVar9 + 1;
    *(undefined4 *)(lVar6 + 0xc) = uVar2;
    if (lVar4 == 0x40) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


