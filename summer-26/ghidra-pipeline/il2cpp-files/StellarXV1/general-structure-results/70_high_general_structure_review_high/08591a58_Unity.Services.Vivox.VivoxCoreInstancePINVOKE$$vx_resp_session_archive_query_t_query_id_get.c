/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_session_archive_query_t_query_id_get
ENTRY_POINT: 08591a58
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_archive_query_t_query_id_get
               (void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long *plVar6;
  
  thunk_FUN_040ec700();
  lVar5 = *(long *)(unaff_x19 + 0x30);
  if (lVar5 == 0) goto LAB_08591c74;
                    /* try { // try from 08591a6c to 08691ab7 has its CatchHandler @ 08591c28 */
  if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_08591c78;
  plVar6 = *(long **)(unaff_x19 + 0x48);
  if (plVar6 == (long *)0x0) goto LAB_08591c74;
  lVar5 = *(long *)(lVar5 + 0x40);
  if ((lVar5 != 0) &&
     (lVar2 = thunk_FUN_040b4e00(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0))
  goto LAB_08591c7c;
  if ((*(uint *)(plVar6 + 3) & 0xfffffffc) == 0) goto LAB_08591c78;
  plVar6[7] = lVar5;
  thunk_FUN_040ec700(plVar6 + 7,lVar5);
  if (*(int *)(unaff_x19 + 0x1c) == 0) {
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_chat_history_query_t_base__set:
    uVar3 = FUN_0858ff6c();
    if (((uVar3 & 1) == 0) && (*(char *)(unaff_x19 + 0x14) == '\0')) {
      return;
    }
    plVar6 = *(long **)(unaff_x19 + 0x48);
    lVar5 = *(long *)(unaff_x19 + 0x30);
    uVar3 = FUN_0858ff6c();
    if (((uVar3 & 1) == 0) && (*(char *)(unaff_x19 + 0x14) == '\0')) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (ulong)(*(byte *)(unaff_x19 + 0x15) | 4);
    }
    if (lVar5 == 0) {
LAB_08591c74:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar5 + 0x18) <= (uint)uVar3) goto LAB_08591c78;
    if (plVar6 == (long *)0x0) goto LAB_08591c74;
    lVar5 = lVar5 + uVar3 * 8;
  }
  else {
    uVar3 = FUN_0858ff6c();
    if (((uVar3 & 1) != 0) || (*(char *)(unaff_x19 + 0x14) != '\0')) {
      plVar6 = *(long **)(unaff_x19 + 0x48);
      lVar5 = *(long *)(unaff_x19 + 0x30);
      uVar1 = FUN_0858fd8c();
      if (lVar5 == 0) goto LAB_08591c74;
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_08591c78;
      if (plVar6 == (long *)0x0) goto LAB_08591c74;
      lVar5 = *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      if ((lVar5 != 0) &&
         (lVar2 = thunk_FUN_040b4e00(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0))
      goto LAB_08591c7c;
      if (4 < *(uint *)(plVar6 + 3)) {
        plVar6[8] = lVar5;
        thunk_FUN_040ec700(plVar6 + 8,lVar5);
        plVar6 = *(long **)(unaff_x19 + 0x48);
        lVar5 = *(long *)(unaff_x19 + 0x30);
        uVar3 = FUN_0858ff6c();
        if (((uVar3 & 1) == 0) && (*(char *)(unaff_x19 + 0x14) == '\0')) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (ulong)(*(byte *)(unaff_x19 + 0x15) | 4);
        }
        if (lVar5 == 0) goto LAB_08591c74;
        if (*(uint *)(lVar5 + 0x18) <= (uint)uVar3) goto LAB_08591c78;
        if (plVar6 == (long *)0x0) goto LAB_08591c74;
        lVar5 = *(long *)(lVar5 + uVar3 * 8 + 0x20);
        if ((lVar5 != 0) &&
           (lVar2 = thunk_FUN_040b4e00(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0))
        goto LAB_08591c7c;
        if (*(uint *)(plVar6 + 3) < 6) goto LAB_08591c78;
        plVar6 = plVar6 + 9;
        *plVar6 = lVar5;
        goto LAB_08591c40;
      }
      goto LAB_08591c78;
    }
    if (*(int *)(unaff_x19 + 0x1c) == 0)
    goto 
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_chat_history_query_t_base__set;
    plVar6 = *(long **)(unaff_x19 + 0x48);
    lVar5 = *(long *)(unaff_x19 + 0x30);
    uVar1 = FUN_0858fd8c();
    if (lVar5 == 0) goto LAB_08591c74;
    if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_08591c78;
    if (plVar6 == (long *)0x0) goto LAB_08591c74;
    lVar5 = lVar5 + (long)(int)uVar1 * 8;
  }
  lVar5 = *(long *)(lVar5 + 0x20);
  if ((lVar5 != 0) &&
     (lVar2 = thunk_FUN_040b4e00(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0)) {
LAB_08591c7c:
    uVar4 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar4,0);
  }
  if (4 < *(uint *)(plVar6 + 3)) {
    plVar6 = plVar6 + 8;
    *plVar6 = lVar5;
LAB_08591c40:
    thunk_FUN_040ec700(plVar6,lVar5);
    return;
  }
LAB_08591c78:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


