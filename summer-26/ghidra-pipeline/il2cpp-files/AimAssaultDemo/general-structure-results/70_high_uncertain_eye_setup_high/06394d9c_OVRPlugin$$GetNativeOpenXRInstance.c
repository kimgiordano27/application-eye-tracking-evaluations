/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRInstance
ENTRY_POINT: 06394d9c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetNativeOpenXRInstance(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long unaff_x23;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) != 0) {
    plVar6 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c838);
                    /* try { // try from 06394df8 to 06494e07 has its CatchHandler @ 063954e4 */
    FUN_060cc728(plVar6,0);
    if (plVar6 == (long *)0x0) {
LAB_06394fe0:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    do {
      FUN_060cef34(plVar6,unaff_w22,0);
      lVar7 = *(long *)(unaff_x20 + 0x10);
      iVar2 = *(int *)(unaff_x20 + 0x20) + 1;
      *(int *)(unaff_x20 + 0x20) = iVar2;
      if (lVar7 == 0) goto LAB_06394fe0;
                    /* try { // try from 06394e2c to 06494e2f has its CatchHandler @ 063954e0 */
                    /* try { // try from 06394e30 to 06494e33 has its CatchHandler @ 063954b0 */
      if (*(int *)(lVar7 + 0x10) <= iVar2) goto LAB_06394fb4;
      unaff_w22 = FUN_060bb390(lVar7,iVar2,0);
                    /* try { // try from 06394e44 to 06494e47 has its CatchHandler @ 063954e0 */
                    /* try { // try from 06394e48 to 06494e4f has its CatchHandler @ 063954a8 */
    } while (((unaff_w22 & 0xffff) != 0x29) && ((unaff_w22 & 0xffff) != 0x20));
    lVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    puVar1 = PTR_DAT_07db6278;
    if (*(int *)(*(long *)PTR_DAT_07db6278 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07db6278);
    }
    if (lVar7 == 0) goto LAB_06394fe0;
    iVar2 = FUN_060c5c98(lVar7,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
    if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d88078);
    }
    uVar5 = FUN_061d52c8(0);
    if (iVar2 == -1) {
      uVar3 = FUN_06242524(lVar7,7,uVar5,&stack0x00000010,0);
      uVar5 = *(undefined8 *)(unaff_x23 + 0x68);
      in_stack_00000008 = in_stack_00000010;
    }
    else {
      uVar3 = FUN_0622add4(lVar7,0xe7,uVar5,&stack0x00000018,0);
      uVar5 = *(undefined8 *)(unaff_x23 + 0x80);
      in_stack_00000008 = in_stack_00000018;
    }
LAB_06394f64:
    uVar5 = thunk_FUN_037784fc(uVar5,&stack0x00000008);
    *unaff_x19 = uVar5;
    thunk_FUN_037aeb94();
    goto LAB_06394fc8;
  }
  uVar3 = unaff_w22 & 0xffff;
  if (uVar3 < 0x6e) {
    if (uVar3 == 0x2f) {
      uVar5 = FUN_0639568c();
    }
    else {
      if ((uVar3 != 0x66) || (uVar4 = FUN_06395298(), (uVar4 & 1) == 0)) goto LAB_06394fb4;
      in_stack_00000008 = in_stack_00000008 & 0xffffffffffffff00;
      uVar5 = thunk_FUN_037784fc(*(undefined8 *)(unaff_x23 + 0x28),&stack0x00000008);
    }
    *unaff_x19 = uVar5;
LAB_06394d5c:
    thunk_FUN_037aeb94();
    uVar3 = 1;
  }
  else {
    if (uVar3 == 0x6e) {
      uVar4 = FUN_06395298();
      if ((uVar4 & 1) != 0) {
        *unaff_x19 = 0;
        goto LAB_06394d5c;
      }
    }
    else if ((uVar3 == 0x74) && (uVar4 = FUN_06395298(), (uVar4 & 1) != 0)) {
      uVar5 = *(undefined8 *)(unaff_x23 + 0x28);
      uVar3 = 1;
      in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,1);
      goto LAB_06394f64;
    }
LAB_06394fb4:
    *unaff_x19 = 0;
    thunk_FUN_037aeb94();
    uVar3 = 0;
  }
LAB_06394fc8:
  return uVar3 & 1;
}


