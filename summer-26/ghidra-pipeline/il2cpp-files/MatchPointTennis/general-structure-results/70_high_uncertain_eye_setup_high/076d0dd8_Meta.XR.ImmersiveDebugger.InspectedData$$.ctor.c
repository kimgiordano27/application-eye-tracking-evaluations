/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedData$$.ctor
ENTRY_POINT: 076d0dd8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_InspectedData___ctor(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  long in_x9;
  code *pcVar5;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  int unaff_w25;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  ulong in_stack_00000010;
  char cStack0000000000000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  
  lVar2 = (**(code **)(in_x9 + 0x1b8))(param_1,*(undefined8 *)(in_x9 + 0x1c0));
  if (lVar2 == 0) goto LAB_076d12e4;
  thunk_FUN_094e64b8(*(undefined4 *)(lVar2 + 0x18));
  (**(code **)(*unaff_x21 + 0x1c8))();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*unaff_x24);
  }
  uVar3 = FUN_076cf434();
  if ((uVar3 & 1) != 0) {
    FUN_094e3620();
  }
  lVar2 = (**(code **)(*unaff_x21 + 0x178))();
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*unaff_x21 + 0x178))();
    if (lVar2 == 0) goto LAB_076d12e4;
    if (*(long *)(lVar2 + 0x20) != 0) {
      _cStack0000000000000018 = (**(code **)(*unaff_x20 + 0x228))();
    }
  }
  iVar1 = FUN_076c7d28();
  if (iVar1 == 1) {
    (**(code **)(*unaff_x20 + 0x1e8))();
    FUN_0613ca18(&stack0x00000018,0x992,*(undefined8 *)PTR_DAT_09f2e498);
  }
  else {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    thunk_FUN_094e64b8(0);
    FUN_094e4ffc();
    FUN_094e4830();
  }
  if (cStack0000000000000018 == '\0') {
    if (unaff_w25 == 0) {
      iVar1 = FUN_076c7d28();
      uVar9 = *(undefined8 *)PTR_DAT_09f2e498;
      uVar4 = 0x992;
      if (iVar1 != 1) {
        uVar4 = 2000;
      }
    }
    else {
      uVar4 = 3000;
      uVar9 = *(undefined8 *)PTR_DAT_09f2e498;
    }
    FUN_0613ca18(&stack0x00000018,uVar4,uVar9);
  }
  FUN_0613ca30(&stack0x00000018,*(undefined8 *)PTR_DAT_09f2e4b8);
  FUN_094e3458();
  if (*(char *)((long)unaff_x21 + 0x34) != '\0') {
    (**(code **)(*unaff_x20 + 0x1d8))();
  }
  if (unaff_w25 == 2) {
    pcVar5 = *(code **)(*unaff_x20 + 0x218);
LAB_076d1048:
    (*pcVar5)();
  }
  else {
    if (unaff_w25 == 1) {
      pcVar5 = *(code **)(*unaff_x20 + 0x208);
      goto LAB_076d1048;
    }
    if (unaff_w25 == 0) {
      pcVar5 = *(code **)(*unaff_x20 + 0x1f8);
      goto LAB_076d1048;
    }
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar9 = FUN_09517a40(uStack0000000000000020,0);
  fVar6 = (float)FUN_09517a40(uStack0000000000000024,0);
  fVar7 = (float)FUN_09517a40(uStack0000000000000028,0);
  thunk_FUN_094e65c8(uVar9);
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
LAB_076d12e4:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
  }
  return;
}


