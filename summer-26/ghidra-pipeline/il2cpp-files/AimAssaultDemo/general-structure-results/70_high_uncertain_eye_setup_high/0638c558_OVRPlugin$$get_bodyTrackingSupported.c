/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingSupported
ENTRY_POINT: 0638c558
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_bodyTrackingSupported(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int in_w8;
  long lVar5;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  if (in_w8 == 0) {
    thunk_FUN_03798b70();
  }
  auVar8 = FUN_0631debc();
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar3 = FUN_06814c5c(&stack0x00000010,auVar8._0_8_,auVar8._8_8_,0);
  puVar2 = PTR_DAT_07d91f30;
  auVar8._8_8_ = in_stack_00000040;
  auVar8._0_8_ = in_stack_00000038;
  if ((int)uVar3 != 0) goto LAB_0638c76c;
  if (unaff_x19 != (long *)0x0) {
    lVar5 = *unaff_x19;
    if (lVar5 == *(long *)PTR_DAT_07d91f30) {
      puVar4 = (undefined8 *)thunk_FUN_03778a20();
      lVar5 = *(long *)puVar2;
      uVar3 = *puVar4;
      uVar1 = puVar4[1];
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar2;
      }
      in_stack_00000028 = (*(undefined8 **)(lVar5 + 0xb8))[1];
      in_stack_00000020 = **(undefined8 **)(lVar5 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      if (DAT_0825c65c == '\0') {
        FUN_0373b518(PTR_DAT_07d91f30);
        DAT_0825c65c = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      auVar8 = FUN_062a24d4(uVar3,uVar1,0);
      _in_stack_00000038 = FUN_062a2b1c(uVar3,uVar1,auVar8._0_8_,auVar8._8_8_,0);
      if (DAT_0825c65d == '\0') {
        FUN_0373b518(PTR_DAT_07d91f30);
        DAT_0825c65d = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      auVar8 = FUN_0629ec90(&stack0x00000038,0);
      uVar3 = FUN_0629f674(&stack0x00000020,auVar8._0_8_,auVar8._8_8_,0);
      goto LAB_0638c76c;
    }
    if ((lVar5 == *(long *)(PTR_DAT_07d86548 + 0x80)) ||
       (lVar5 == *(long *)(PTR_DAT_07d86548 + 0x78))) {
      if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_061d52c8(0);
      if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
      }
      dVar6 = (double)FUN_061b5284();
      in_stack_00000008 = 0;
      if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      dVar7 = (double)FUN_06244478(dVar6,0);
      uVar3 = FUN_0622a3f8(ABS(dVar6 - dVar7),&stack0x00000008,0);
      goto LAB_0638c76c;
    }
  }
  uVar3 = 0;
  _in_stack_00000038 = auVar8;
LAB_0638c76c:
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


