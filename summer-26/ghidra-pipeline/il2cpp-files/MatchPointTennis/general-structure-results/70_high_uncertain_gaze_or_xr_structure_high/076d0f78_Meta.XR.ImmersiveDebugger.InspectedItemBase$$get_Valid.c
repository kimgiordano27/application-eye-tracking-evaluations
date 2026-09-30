/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedItemBase$$get_Valid
ENTRY_POINT: 076d0f78
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_ImmersiveDebugger_InspectedItemBase__get_Valid(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  int unaff_w25;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  
  if (unaff_w25 == 0) {
    iVar1 = FUN_076c7d28();
    uVar3 = *(undefined8 *)PTR_DAT_09f2e498;
    uVar4 = 0x992;
    if (iVar1 != 1) {
      uVar4 = 2000;
    }
  }
  else {
    uVar4 = 3000;
    uVar3 = *(undefined8 *)PTR_DAT_09f2e498;
  }
  FUN_0613ca18(&stack0x00000018,uVar4,uVar3);
  FUN_0613ca30(&stack0x00000018,*(undefined8 *)PTR_DAT_09f2e4b8);
  FUN_094e3458();
  if (*(char *)((long)unaff_x21 + 0x34) != '\0') {
    (**(code **)(*unaff_x20 + 0x1d8))();
  }
  if (unaff_w25 == 2) {
    pcVar5 = *(code **)(*unaff_x20 + 0x218);
  }
  else if (unaff_w25 == 1) {
    pcVar5 = *(code **)(*unaff_x20 + 0x208);
  }
  else {
    if (unaff_w25 != 0) goto LAB_076d1058;
    pcVar5 = *(code **)(*unaff_x20 + 0x1f8);
  }
  (*pcVar5)();
LAB_076d1058:
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar3 = FUN_09517a40(uStack0000000000000020,0);
  fVar6 = (float)FUN_09517a40(uStack0000000000000024,0);
  fVar7 = (float)FUN_09517a40(uStack0000000000000028,0);
  thunk_FUN_094e65c8(uVar3);
  fVar8 = (float)FUN_076c7c44();
  if (DAT_01c759c8 <=
      (fStack000000000000002c + -1.0) * (fStack000000000000002c + -1.0) +
      fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6) {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_076c7c44();
    thunk_FUN_094e65c8();
    FUN_094e3620();
  }
  lVar2 = (**(code **)(*unaff_x21 + 0x178))();
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x28) != 0)) {
    in_stack_00000010 = 0;
    FUN_06145494(*(undefined4 *)(*(long *)(lVar2 + 0x28) + 0x10),&stack0x00000010,
                 *(undefined8 *)PTR_DAT_09f2cd78);
    if ((0.0 < in_stack_00000010._4_4_) && ((in_stack_00000010 & 0xff) != 0)) {
      lVar2 = (**(code **)(*unaff_x21 + 0x178))();
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_09f2e380 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f2e380);
        }
        if (lVar2 != 0) {
          thunk_FUN_094e64b8(*(undefined4 *)(lVar2 + 0x10));
          FUN_076cf434();
          thunk_FUN_094e64b8(*(undefined4 *)(lVar2 + 0x20));
          FUN_094e3620();
          FUN_076cf434();
          FUN_076cf434();
          if (*(long *)(lVar2 + 0x30) != 0) {
            thunk_FUN_094e64b8(*(undefined4 *)(*(long *)(lVar2 + 0x30) + 0x18));
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


