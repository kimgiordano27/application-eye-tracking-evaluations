/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedHandle$$set_InstanceHandle
ENTRY_POINT: 076d0fa8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_InspectedHandle__set_InstanceHandle(int param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *in_x9;
  code *pcVar3;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  int unaff_w25;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  
  uVar2 = 0x992;
  if (param_1 != 1) {
    uVar2 = 2000;
  }
  FUN_0613ca18(&stack0x00000018,uVar2,*in_x9);
  FUN_0613ca30(&stack0x00000018,*(undefined8 *)PTR_DAT_09f2e4b8);
  FUN_094e3458();
  if (*(char *)((long)unaff_x21 + 0x34) != '\0') {
    (**(code **)(*unaff_x20 + 0x1d8))();
  }
  if (unaff_w25 == 2) {
    pcVar3 = *(code **)(*unaff_x20 + 0x218);
  }
  else if (unaff_w25 == 1) {
    pcVar3 = *(code **)(*unaff_x20 + 0x208);
  }
  else {
    if (unaff_w25 != 0) goto LAB_076d1058;
    pcVar3 = *(code **)(*unaff_x20 + 0x1f8);
  }
  (*pcVar3)();
LAB_076d1058:
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar7 = FUN_09517a40(uStack0000000000000020,0);
  fVar4 = (float)FUN_09517a40(uStack0000000000000024,0);
  fVar5 = (float)FUN_09517a40(uStack0000000000000028,0);
  thunk_FUN_094e65c8(uVar7);
  fVar6 = (float)FUN_076c7c44();
  if (DAT_01c759c8 <=
      (fStack000000000000002c + -1.0) * (fStack000000000000002c + -1.0) +
      fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_076c7c44();
    thunk_FUN_094e65c8();
    FUN_094e3620();
  }
  lVar1 = (**(code **)(*unaff_x21 + 0x178))();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) {
    in_stack_00000010 = 0;
    FUN_06145494(*(undefined4 *)(*(long *)(lVar1 + 0x28) + 0x10),&stack0x00000010,
                 *(undefined8 *)PTR_DAT_09f2cd78);
    if ((0.0 < in_stack_00000010._4_4_) && ((in_stack_00000010 & 0xff) != 0)) {
      lVar1 = (**(code **)(*unaff_x21 + 0x178))();
      if (lVar1 != 0) {
        lVar1 = *(long *)(lVar1 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_09f2e380 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f2e380);
        }
        if (lVar1 != 0) {
          thunk_FUN_094e64b8(*(undefined4 *)(lVar1 + 0x10));
          FUN_076cf434();
          thunk_FUN_094e64b8(*(undefined4 *)(lVar1 + 0x20));
          FUN_094e3620();
          FUN_076cf434();
          FUN_076cf434();
          if (*(long *)(lVar1 + 0x30) != 0) {
            thunk_FUN_094e64b8(*(undefined4 *)(*(long *)(lVar1 + 0x30) + 0x18));
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
  }
  return;
}


