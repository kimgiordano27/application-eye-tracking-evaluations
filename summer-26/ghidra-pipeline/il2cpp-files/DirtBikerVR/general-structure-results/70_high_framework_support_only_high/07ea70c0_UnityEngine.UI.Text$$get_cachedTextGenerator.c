/*
FUNCTION_NAME: UnityEngine.UI.Text$$get_cachedTextGenerator
ENTRY_POINT: 07ea70c0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_UI_Text__get_cachedTextGenerator(void)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 in_ZR;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  byte unaff_w19;
  int unaff_w20;
  uint unaff_w21;
  uint unaff_w22;
  int unaff_w24;
  uint unaff_w25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  bool bVar14;
  byte unaff_w29;
  undefined1 auVar15 [16];
  undefined8 *in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined4 uStack0000000000000020;
  int iStack0000000000000024;
  uint uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
code_r0x07ea70c0:
  if (!(bool)in_ZR) goto LAB_07ea71a4;
  uVar9 = FUN_07eaf9c4();
  if ((unaff_w25 & 1) == 0) {
    unaff_w25 = 1;
    unaff_x26 = uVar9;
  }
  else {
    bVar3 = unaff_w29 & 1;
    bVar1 = unaff_w29 ^ 1;
    unaff_w29 = 1;
    if (bVar3 == 0) {
      unaff_x27 = uVar9;
    }
    unaff_w19 = bVar1 & unaff_w19;
    unaff_w25 = 1;
  }
LAB_07ea71cc:
  unaff_w24 = unaff_w24 + 1;
  if (unaff_w24 < unaff_w20) goto LAB_07ea7088;
LAB_07ea7208:
  puVar7 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
  ;
  puVar6 = OVRPlugin_OverlayShape_TypeInfo;
  puVar5 = OVRPlugin_OVRP_1_115_0_TypeInfo;
  puVar4 = OVRPlugin_OVRP_1_113_0_TypeInfo;
  bVar14 = unaff_w24 < unaff_w20;
  do {
    lVar11 = *(long *)puVar7;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar11 = *(long *)puVar7;
    }
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar11 == 0) {
LAB_07ea74f4:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar12 = *(long *)(lVar11 + 0x10);
    lVar13 = *(long *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetResult__
    ;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_07ea74f4;
    uVar2 = *(uint *)(lVar11 + 0x18);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = unaff_x27;
    }
    else {
      FUN_04eafde0(lVar11,unaff_x27,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    lVar11 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
    if (lVar11 == 0) goto LAB_07ea74f4;
    lVar12 = *(long *)(lVar11 + 0x10);
    lVar13 = *(long *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetResult__
    ;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_07ea74f4;
    uVar2 = *(uint *)(lVar11 + 0x18);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = unaff_x26;
    }
    else {
      FUN_04eafde0(lVar11,unaff_x26,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    lVar11 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
    if (lVar11 == 0) goto LAB_07ea74f4;
    lVar12 = *(long *)(lVar11 + 0x10);
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_07ea74f4;
    uVar2 = *(uint *)(lVar11 + 0x18);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + (long)(int)uVar2 * 0x10;
      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
      *(undefined1 (*) [16])(lVar12 + 0x20) = _in_stack_00000030;
      thunk_FUN_03afed3c(lVar12 + 0x28,0);
    }
    else {
      FUN_04e8f350();
    }
    lVar11 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18);
    if (lVar11 == 0) goto LAB_07ea74f4;
    lVar12 = *(long *)(lVar11 + 0x10);
    lVar13 = *(long *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetStateMachine__
    ;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_07ea74f4;
    uVar2 = *(uint *)(lVar11 + 0x18);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) = uStack0000000000000020;
    }
    else {
      FUN_04d5b8f0(lVar11,uStack0000000000000020,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    if ((bVar14 & unaff_w19) == 0) {
      if ((unaff_w19 & 1) != 0) {
        lVar11 = *(long *)puVar7;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar11 = *(long *)puVar7;
        }
        *in_stack_00000000 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10);
        thunk_FUN_03afed3c(in_stack_00000000);
        *in_stack_00000008 = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        thunk_FUN_03afed3c(in_stack_00000008);
        *in_stack_00000010 = *(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
        thunk_FUN_03afed3c(in_stack_00000010);
        uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18);
        goto LAB_07ea74c8;
      }
LAB_07ea7470:
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar9 = FUN_07ea4cb4();
      *in_stack_00000000 = uVar9;
      thunk_FUN_03afed3c();
      uVar9 = FUN_07ea4bc4();
      *in_stack_00000008 = uVar9;
      thunk_FUN_03afed3c();
      uVar9 = FUN_07ea4c3c();
      *in_stack_00000010 = uVar9;
      thunk_FUN_03afed3c();
      uVar9 = FUN_07ea4d2c();
LAB_07ea74c8:
      *in_stack_00000018 = uVar9;
      thunk_FUN_03afed3c(in_stack_00000018);
      return;
    }
    if ((uStack0000000000000028 & 1) != 0) goto LAB_07ea7470;
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar11 = FUN_07ea4cb4();
    if (lVar11 == 0) goto LAB_07ea74f4;
    auVar15 = FUN_04e8f030(lVar11,0,*(undefined8 *)puVar4);
    _in_stack_00000030 = auVar15;
    lVar11 = FUN_07ea4c3c();
    if (lVar11 == 0) goto LAB_07ea74f4;
    unaff_x26 = FUN_04eafaec(lVar11,0,*(undefined8 *)puVar5);
    lVar11 = FUN_07ea4bc4();
    if (lVar11 == 0) goto LAB_07ea74f4;
    unaff_x27 = FUN_04eafaec(lVar11,0,*(undefined8 *)puVar5);
    lVar11 = FUN_07ea4d2c();
    if (lVar11 == 0) goto LAB_07ea74f4;
    uStack0000000000000020 =
         FUN_04d5b5f4(lVar11,0,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_Start<JsonTextReader_<ParseNumberNaNAsync>d__26>__
                     );
    if (unaff_w24 < unaff_w20) break;
    uStack0000000000000028 = 0;
    bVar14 = false;
    unaff_w19 = 1;
  } while( true );
  unaff_w25 = 0;
  unaff_w29 = 0;
  unaff_w22 = 0;
  unaff_w21 = 0;
  unaff_w19 = 1;
  uStack0000000000000028 = 0;
LAB_07ea7088:
  iVar8 = FUN_07eaf39c();
  if (3 < iVar8) {
    if (iVar8 == 7) {
      uVar9 = FUN_07eaf54c();
      if ((unaff_w21 & 1) == 0) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_3_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar10 = FUN_07ea7830(5,uVar9,(long)&stack0x00000028 + 4);
        if ((uVar10 & 1) != 0) {
          uStack0000000000000020 = FUN_07de5678(uStack000000000000002c,0);
          unaff_w21 = 1;
          goto LAB_07ea71cc;
        }
      }
      if ((unaff_w22 & 1) == 0) {
        FUN_07e2c78c(&stack0x00000030,uVar9,0);
      }
      else {
        unaff_w19 = 0;
      }
      unaff_w22 = 1;
      goto LAB_07ea71cc;
    }
    if (iVar8 != 0xb) goto LAB_07ea71a4;
    unaff_w24 = unaff_w24 + 1;
    iStack0000000000000024 = iStack0000000000000024 + 1;
    goto LAB_07ea7208;
  }
  if (iVar8 != 1) {
    in_ZR = iVar8 == 3;
    goto code_r0x07ea70c0;
  }
  uVar10 = FUN_07eaf4b0();
  if (((uVar10 & 1) != 0) && (iStack0000000000000024 == 0)) {
    FUN_07e2c78c(&stack0x00000030,*(undefined8 *)PTR_DAT_084ba068,0);
    unaff_w22 = 1;
    iStack0000000000000024 = 0;
    uStack0000000000000028 = 1;
    goto LAB_07ea71cc;
  }
LAB_07ea71a4:
  unaff_w19 = 0;
  goto LAB_07ea71cc;
}


