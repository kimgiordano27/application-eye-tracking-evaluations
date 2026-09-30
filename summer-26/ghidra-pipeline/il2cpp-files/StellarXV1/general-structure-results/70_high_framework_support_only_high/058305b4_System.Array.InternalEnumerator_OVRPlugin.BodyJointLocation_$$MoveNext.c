/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$MoveNext
ENTRY_POINT: 058305b4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__MoveNext(void)

{
  ushort uVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  int unaff_w19;
  long unaff_x20;
  size_t unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar8;
  long unaff_x26;
  undefined8 unaff_x27;
  int unaff_w28;
  long unaff_x29;
  
  while (piVar2 = (int *)thunk_FUN_040d6b00(), unaff_w28 < *piVar2) {
    memset(unaff_x23,0,unaff_x22);
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x50);
    lVar6 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x20 + 0x20);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
    }
    puVar5 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x23;
    }
    pcVar7 = *(code **)(lVar3 + 0x10);
    *(int *)(unaff_x29 + -0xc) = unaff_w28;
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x27;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    (*pcVar7)(uVar8,lVar3);
    unaff_w28 = unaff_w28 + 1;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
  }
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
                    /* try { // try from 058306a0 to 05930707 has its CatchHandler @ 0583076c */
  FUN_03b2ebac();
  if (1 < unaff_w19) {
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    plVar4 = (long *)thunk_FUN_040d6b00();
    if (*plVar4 != 0) {
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
                    /* try { // try from 05830708 to 0593075f has its CatchHandler @ 0583060c */
      plVar4 = (long *)thunk_FUN_040d6b00();
      if (*plVar4 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        goto LAB_05830808;
      }
      if (unaff_w19 + -1 <= *(int *)(*plVar4 + 0x18)) goto LAB_058307c4;
    }
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      FUN_040b1acc(lVar3);
    }
    uVar8 = thunk_FUN_040d6b00();
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    (*pcVar7)(uVar8,unaff_w19 + -1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x60));
  }
LAB_058307c4:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_05830808:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


