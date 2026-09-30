/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$get_Current
ENTRY_POINT: 058313d0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Array_InternalEnumerator<OVRPlugin_Vector2f>__get_Current(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ushort *in_x9;
  code *pcVar7;
  long unaff_x20;
  undefined8 *__dest;
  undefined4 unaff_w22;
  void *unaff_x23;
  undefined8 uVar8;
  ulong __n;
  long lVar9;
  long lVar10;
  long unaff_x26;
  long unaff_x29;
  
  uVar3 = *in_x9;
  __n = (ulong)*(uint *)(*(long *)(*(long *)(param_2 + 0xc0) + 0x10) + 0xfc);
  __dest = (undefined8 *)(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0));
  *(undefined4 *)(unaff_x29 + -0x3c) = 0;
  if ((uVar3 & 1) == 0) {
    FUN_040b1acc(param_1);
  }
                    /* try { // try from 05831420 to 05931423 has its CatchHandler @ 058315e8 */
  piVar4 = (int *)thunk_FUN_040d6b00();
  lVar9 = *(long *)(unaff_x20 + 0x20);
  if (*piVar4 == 0) {
    lVar10 = lVar9;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                    /* try { // try from 05831488 to 0593151b has its CatchHandler @ 058315ec */
      lVar9 = FUN_040b1acc(lVar9);
      lVar10 = *(long *)(unaff_x20 + 0x20);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0x28)) {
      unaff_x23 = (void *)(unaff_x29 + -0x38);
    }
    memcpy(__dest,unaff_x23,__n);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      FUN_040b1acc(lVar10);
    }
    FUN_040775b0();
  }
  else {
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      FUN_040b1acc(lVar9);
    }
                    /* try { // try from 05831448 to 05931453 has its CatchHandler @ 058315e4 */
                    /* try { // try from 05831454 to 05931487 has its CatchHandler @ 058312dc */
    piVar4 = (int *)thunk_FUN_040d6b00();
    lVar10 = *(long *)(unaff_x20 + 0x20);
    bVar2 = *(byte *)(lVar10 + 0x135);
    *(int *)(unaff_x29 + -0x3c) = *piVar4 + -1;
    lVar9 = lVar10;
    if ((bVar2 & 1) == 0) {
      lVar10 = FUN_040b1acc(lVar10);
      lVar9 = *(long *)(unaff_x20 + 0x20);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0x28)) {
      unaff_x23 = (void *)(unaff_x29 + -0x38);
    }
    memcpy(__dest,unaff_x23,__n);
    uVar3 = *(ushort *)(lVar9 + 0x135);
    lVar10 = lVar9;
    if ((uVar3 & 1) == 0) {
      lVar9 = FUN_040b1acc(lVar9);
      uVar3 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar10 = *(long *)(unaff_x20 + 0x20);
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0xa0);
    lVar9 = lVar10;
    if ((uVar3 & 1) == 0) {
      lVar10 = FUN_040b1acc(lVar10);
      uVar3 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar9 = *(long *)(unaff_x20 + 0x20);
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0xa0);
    if ((uVar3 & 1) == 0) {
      FUN_040b1acc(lVar9);
    }
    uVar5 = thunk_FUN_040d6b00();
    lVar9 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_040b1acc(lVar9);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = __dest;
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
    pcVar7 = *(code **)(lVar10 + 0x10);
    *(undefined4 *)(unaff_x29 + -0xc) = unaff_w22;
    *(undefined8 *)(unaff_x29 + -0x30) = uVar5;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x3c;
    (*pcVar7)(uVar8,lVar10,0,unaff_x29 + -0x30,unaff_x29 + -0x10);
  }
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  puVar6 = (undefined4 *)thunk_FUN_040d6b00();
  uVar1 = *puVar6;
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  thunk_FUN_040d6b00();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_03b2ebac();
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}


