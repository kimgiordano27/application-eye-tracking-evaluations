/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedDataRegistry$$Add
ENTRY_POINT: 076d0c40
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_InspectedDataRegistry__Add(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 uVar6;
  long in_x9;
  code *pcVar7;
  long *unaff_x20;
  long *unaff_x21;
  int unaff_w25;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  ulong in_stack_00000010;
  char cStack0000000000000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  
  lVar3 = (**(code **)(in_x9 + 0x198))(param_1,*(undefined8 *)(in_x9 + 0x1a0));
  if (lVar3 == 0) goto LAB_076d12e4;
  thunk_FUN_094e64b8(*(undefined4 *)(lVar3 + 0x1c));
  plVar4 = (long *)(**(code **)(*unaff_x21 + 0x198))();
  if (plVar4 == (long *)0x0) goto LAB_076d12e4;
  (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
  FUN_076cf434();
  (**(code **)(*unaff_x21 + 0x1a8))();
  puVar1 = PTR_DAT_09f2cf40;
  if (*(int *)(*(long *)PTR_DAT_09f2cf40 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)PTR_DAT_09f2cf40);
  }
  uVar5 = FUN_076cf434();
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar3 = (**(code **)(*unaff_x21 + 0x1a8))();
    if (lVar3 == 0) goto LAB_076d12e4;
    thunk_FUN_094e64b8(*(undefined4 *)(lVar3 + 0x18));
  }
  (**(code **)(*unaff_x21 + 0x1b8))();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)puVar1);
  }
  uVar5 = FUN_076cf434();
  if ((uVar5 & 1) != 0) {
    FUN_094e3620();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar3 = (**(code **)(*unaff_x21 + 0x1b8))();
    if (lVar3 == 0) goto LAB_076d12e4;
    thunk_FUN_094e64b8(*(undefined4 *)(lVar3 + 0x18));
  }
  (**(code **)(*unaff_x21 + 0x1c8))();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)puVar1);
  }
  uVar5 = FUN_076cf434();
  if ((uVar5 & 1) != 0) {
    FUN_094e3620();
  }
  lVar3 = (**(code **)(*unaff_x21 + 0x178))();
  if (lVar3 != 0) {
    lVar3 = (**(code **)(*unaff_x21 + 0x178))();
    if (lVar3 == 0) goto LAB_076d12e4;
    if (*(long *)(lVar3 + 0x20) != 0) {
      _cStack0000000000000018 = (**(code **)(*unaff_x20 + 0x228))();
    }
  }
  iVar2 = FUN_076c7d28();
  if (iVar2 == 1) {
    (**(code **)(*unaff_x20 + 0x1e8))();
    FUN_0613ca18(&stack0x00000018,0x992,*(undefined8 *)PTR_DAT_09f2e498);
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    thunk_FUN_094e64b8(0);
    FUN_094e4ffc();
    FUN_094e4830();
  }
  if (cStack0000000000000018 == '\0') {
    if (unaff_w25 == 0) {
      iVar2 = FUN_076c7d28();
      uVar11 = *(undefined8 *)PTR_DAT_09f2e498;
      uVar6 = 0x992;
      if (iVar2 != 1) {
        uVar6 = 2000;
      }
    }
    else {
      uVar6 = 3000;
      uVar11 = *(undefined8 *)PTR_DAT_09f2e498;
    }
    FUN_0613ca18(&stack0x00000018,uVar6,uVar11);
  }
  FUN_0613ca30(&stack0x00000018,*(undefined8 *)PTR_DAT_09f2e4b8);
  FUN_094e3458();
  if (*(char *)((long)unaff_x21 + 0x34) != '\0') {
    (**(code **)(*unaff_x20 + 0x1d8))();
  }
  if (unaff_w25 == 2) {
    pcVar7 = *(code **)(*unaff_x20 + 0x218);
LAB_076d1048:
    (*pcVar7)();
  }
  else {
    if (unaff_w25 == 1) {
      pcVar7 = *(code **)(*unaff_x20 + 0x208);
      goto LAB_076d1048;
    }
    if (unaff_w25 == 0) {
      pcVar7 = *(code **)(*unaff_x20 + 0x1f8);
      goto LAB_076d1048;
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar11 = FUN_09517a40(uStack0000000000000020,0);
  fVar8 = (float)FUN_09517a40(uStack0000000000000024,0);
  fVar9 = (float)FUN_09517a40(uStack0000000000000028,0);
  thunk_FUN_094e65c8(uVar11);
  fVar10 = (float)FUN_076c7c44();
  if (DAT_01c759c8 <=
      (fStack000000000000002c + -1.0) * (fStack000000000000002c + -1.0) +
      fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_076c7c44();
    thunk_FUN_094e65c8();
    FUN_094e3620();
  }
  lVar3 = (**(code **)(*unaff_x21 + 0x178))();
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x28) != 0)) {
    in_stack_00000010 = 0;
    FUN_06145494(*(undefined4 *)(*(long *)(lVar3 + 0x28) + 0x10),&stack0x00000010,
                 *(undefined8 *)PTR_DAT_09f2cd78);
    if ((0.0 < in_stack_00000010._4_4_) && ((in_stack_00000010 & 0xff) != 0)) {
      lVar3 = (**(code **)(*unaff_x21 + 0x178))();
      if (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_09f2e380 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f2e380);
        }
        if (lVar3 != 0) {
          thunk_FUN_094e64b8(*(undefined4 *)(lVar3 + 0x10));
          FUN_076cf434();
          thunk_FUN_094e64b8(*(undefined4 *)(lVar3 + 0x20));
          FUN_094e3620();
          FUN_076cf434();
          FUN_076cf434();
          if (*(long *)(lVar3 + 0x30) != 0) {
            thunk_FUN_094e64b8(*(undefined4 *)(*(long *)(lVar3 + 0x30) + 0x18));
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


