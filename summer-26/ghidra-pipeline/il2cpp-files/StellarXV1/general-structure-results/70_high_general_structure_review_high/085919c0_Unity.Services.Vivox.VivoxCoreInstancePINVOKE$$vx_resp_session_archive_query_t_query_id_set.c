/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_session_archive_query_t_query_id_set
ENTRY_POINT: 085919c0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_archive_query_t_query_id_set
               (long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *plVar5;
  long lVar6;
  
  if (param_1 == 0) goto LAB_08591c74;
  if ((*(uint *)(param_1 + 0x18) & 0xfffffffe) == 0) goto LAB_08591c78;
  plVar5 = *(long **)(unaff_x19 + 0x48);
                    /* try { // try from 085919d4 to 086919e3 has its CatchHandler @ 08591c50 */
  if (plVar5 == (long *)0x0) goto LAB_08591c74;
  lVar6 = *(long *)(param_1 + 0x28);
  if ((lVar6 != 0) &&
     (lVar2 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
  goto LAB_08591c7c;
                    /* try { // try from 085919f8 to 086919fb has its CatchHandler @ 08591c38 */
  if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_08591c78;
  plVar5[5] = lVar6;
                    /* try { // try from 08591a08 to 08691a27 has its CatchHandler @ 08591c4c */
  thunk_FUN_040ec700(plVar5 + 5,lVar6);
  lVar6 = *(long *)(unaff_x19 + 0x30);
  if (lVar6 == 0) goto LAB_08591c74;
  if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_08591c78;
  plVar5 = *(long **)(unaff_x19 + 0x48);
  if (plVar5 == (long *)0x0) goto LAB_08591c74;
                    /* try { // try from 08591a2c to 08691a3b has its CatchHandler @ 08591c54 */
  lVar6 = *(long *)(lVar6 + 0x30);
                    /* try { // try from 08591a40 to 08691a47 has its CatchHandler @ 08591c60 */
  if ((lVar6 != 0) &&
     (lVar2 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
  goto LAB_08591c7c;
  if (*(uint *)(plVar5 + 3) < 3) goto LAB_08591c78;
  plVar5[6] = lVar6;
  thunk_FUN_040ec700(plVar5 + 6,lVar6);
  lVar6 = *(long *)(unaff_x19 + 0x30);
  if (lVar6 == 0) goto LAB_08591c74;
  if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_08591c78;
  plVar5 = *(long **)(unaff_x19 + 0x48);
  if (plVar5 == (long *)0x0) goto LAB_08591c74;
  lVar6 = *(long *)(lVar6 + 0x40);
  if ((lVar6 != 0) &&
     (lVar2 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
  goto LAB_08591c7c;
  if ((*(uint *)(plVar5 + 3) & 0xfffffffc) == 0) goto LAB_08591c78;
  plVar5[7] = lVar6;
  thunk_FUN_040ec700(plVar5 + 7,lVar6);
  if (*(int *)(unaff_x19 + 0x1c) == 0) {
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_chat_history_query_t_base__set:
    uVar3 = FUN_0858ff6c();
    if (((uVar3 & 1) == 0) && (*(char *)(unaff_x19 + 0x14) == '\0')) {
      return;
    }
    plVar5 = *(long **)(unaff_x19 + 0x48);
    lVar6 = *(long *)(unaff_x19 + 0x30);
    uVar3 = FUN_0858ff6c();
    if (((uVar3 & 1) == 0) && (*(char *)(unaff_x19 + 0x14) == '\0')) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (ulong)(*(byte *)(unaff_x19 + 0x15) | 4);
    }
    if (lVar6 == 0) {
LAB_08591c74:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar6 + 0x18) <= (uint)uVar3) goto LAB_08591c78;
    if (plVar5 == (long *)0x0) goto LAB_08591c74;
    lVar6 = lVar6 + uVar3 * 8;
  }
  else {
    uVar3 = FUN_0858ff6c();
    if (((uVar3 & 1) != 0) || (*(char *)(unaff_x19 + 0x14) != '\0')) {
      plVar5 = *(long **)(unaff_x19 + 0x48);
      lVar6 = *(long *)(unaff_x19 + 0x30);
      uVar1 = FUN_0858fd8c();
      if (lVar6 == 0) goto LAB_08591c74;
      if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_08591c78;
      if (plVar5 == (long *)0x0) goto LAB_08591c74;
      lVar6 = *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      if ((lVar6 != 0) &&
         (lVar2 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
      goto LAB_08591c7c;
      if (*(uint *)(plVar5 + 3) < 5) goto LAB_08591c78;
      plVar5[8] = lVar6;
      thunk_FUN_040ec700(plVar5 + 8,lVar6);
      plVar5 = *(long **)(unaff_x19 + 0x48);
      lVar6 = *(long *)(unaff_x19 + 0x30);
      uVar3 = FUN_0858ff6c();
      if (((uVar3 & 1) == 0) && (*(char *)(unaff_x19 + 0x14) == '\0')) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = (ulong)(*(byte *)(unaff_x19 + 0x15) | 4);
      }
      if (lVar6 == 0) goto LAB_08591c74;
      if (*(uint *)(lVar6 + 0x18) <= (uint)uVar3) goto LAB_08591c78;
      if (plVar5 == (long *)0x0) goto LAB_08591c74;
      lVar6 = *(long *)(lVar6 + uVar3 * 8 + 0x20);
      if ((lVar6 != 0) &&
         (lVar2 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
      goto LAB_08591c7c;
      if (*(uint *)(plVar5 + 3) < 6) goto LAB_08591c78;
      plVar5 = plVar5 + 9;
      *plVar5 = lVar6;
      goto LAB_08591c40;
    }
    if (*(int *)(unaff_x19 + 0x1c) == 0)
    goto 
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_chat_history_query_t_base__set;
    plVar5 = *(long **)(unaff_x19 + 0x48);
    lVar6 = *(long *)(unaff_x19 + 0x30);
    uVar1 = FUN_0858fd8c();
    if (lVar6 == 0) goto LAB_08591c74;
    if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_08591c78;
    if (plVar5 == (long *)0x0) goto LAB_08591c74;
    lVar6 = lVar6 + (long)(int)uVar1 * 8;
  }
  lVar6 = *(long *)(lVar6 + 0x20);
  if ((lVar6 != 0) &&
     (lVar2 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0)) {
LAB_08591c7c:
    uVar4 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar4,0);
  }
  if (4 < *(uint *)(plVar5 + 3)) {
    plVar5 = plVar5 + 8;
    *plVar5 = lVar6;
LAB_08591c40:
    thunk_FUN_040ec700(plVar5,lVar6);
    return;
  }
LAB_08591c78:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


