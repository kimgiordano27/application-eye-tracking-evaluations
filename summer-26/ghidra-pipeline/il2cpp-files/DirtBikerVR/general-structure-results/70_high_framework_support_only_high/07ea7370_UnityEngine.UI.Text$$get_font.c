/*
FUNCTION_NAME: UnityEngine.UI.Text$$get_font
ENTRY_POINT: 07ea7370
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_18;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_UI_Text__get_font(void)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  byte unaff_w19;
  int unaff_w20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  int iVar14;
  int unaff_w24;
  long *unaff_x25;
  byte unaff_w28;
  byte bVar15;
  undefined8 *unaff_x29;
  undefined1 auVar16 [16];
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
  
code_r0x07ea7370:
  FUN_04e8f350();
  do {
    lVar10 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x18);
    if (lVar10 == 0) {
LAB_07ea74f4:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar12 = *(long *)(lVar10 + 0x10);
    lVar13 = *(long *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetStateMachine__
    ;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_07ea74f4;
    uVar2 = *(uint *)(lVar10 + 0x18);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) = uStack0000000000000020;
    }
    else {
      FUN_04d5b8f0(lVar10,uStack0000000000000020,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    if ((unaff_w28 & unaff_w19 & 1) == 0) {
      if ((unaff_w19 & 1) != 0) {
        lVar10 = *unaff_x25;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar10 = *unaff_x25;
        }
        *in_stack_00000000 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
        thunk_FUN_03afed3c(in_stack_00000000);
        *in_stack_00000008 = **(undefined8 **)(*unaff_x25 + 0xb8);
        thunk_FUN_03afed3c(in_stack_00000008);
        *in_stack_00000010 = *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8);
        thunk_FUN_03afed3c(in_stack_00000010);
        uVar11 = *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x18);
        goto LAB_07ea74c8;
      }
LAB_07ea7470:
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar11 = FUN_07ea4cb4();
      *in_stack_00000000 = uVar11;
      thunk_FUN_03afed3c();
      uVar11 = FUN_07ea4bc4();
      *in_stack_00000008 = uVar11;
      thunk_FUN_03afed3c();
      uVar11 = FUN_07ea4c3c();
      *in_stack_00000010 = uVar11;
      thunk_FUN_03afed3c();
      uVar11 = FUN_07ea4d2c();
LAB_07ea74c8:
      *in_stack_00000018 = uVar11;
      thunk_FUN_03afed3c(in_stack_00000018);
      return;
    }
    if ((uStack0000000000000028 & 1) != 0) goto LAB_07ea7470;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar10 = FUN_07ea4cb4();
    if (lVar10 == 0) goto LAB_07ea74f4;
    auVar16 = FUN_04e8f030(lVar10,0,*unaff_x22);
    _in_stack_00000030 = auVar16;
    lVar10 = FUN_07ea4c3c();
    if (lVar10 == 0) goto LAB_07ea74f4;
    uVar11 = FUN_04eafaec(lVar10,0,*unaff_x29);
    lVar10 = FUN_07ea4bc4();
    if (lVar10 == 0) goto LAB_07ea74f4;
    uVar7 = FUN_04eafaec(lVar10,0,*unaff_x29);
    lVar10 = FUN_07ea4d2c();
    if (lVar10 == 0) goto LAB_07ea74f4;
    uStack0000000000000020 =
         FUN_04d5b5f4(lVar10,0,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_Start<JsonTextReader_<ParseNumberNaNAsync>d__26>__
                     );
    if (unaff_w24 < unaff_w20) {
      bVar5 = false;
      bVar15 = 0;
      bVar4 = false;
      bVar3 = false;
      unaff_w19 = 1;
      uStack0000000000000028 = 0;
      do {
        iVar14 = unaff_w24;
        iVar6 = FUN_07eaf39c();
        if (iVar6 < 4) {
          if (iVar6 == 1) {
            uVar9 = FUN_07eaf4b0();
            if (((uVar9 & 1) == 0) || (iStack0000000000000024 != 0)) goto LAB_07ea71a4;
            FUN_07e2c78c(&stack0x00000030,*(undefined8 *)PTR_DAT_084ba068,0);
            bVar4 = true;
            iStack0000000000000024 = 0;
            uStack0000000000000028 = 1;
          }
          else if (iVar6 == 3) {
            uVar8 = FUN_07eaf9c4();
            if (bVar5) {
              bVar5 = bVar15 == 0;
              bVar1 = bVar15 ^ 1;
              bVar15 = 1;
              if (bVar5) {
                uVar7 = uVar8;
              }
              unaff_w19 = bVar1 & unaff_w19;
              bVar5 = true;
            }
            else {
              bVar5 = true;
              uVar11 = uVar8;
            }
          }
          else {
LAB_07ea71a4:
            unaff_w19 = 0;
          }
        }
        else {
          if (iVar6 != 7) {
            if (iVar6 != 0xb) goto LAB_07ea71a4;
            iStack0000000000000024 = iStack0000000000000024 + 1;
            break;
          }
          uVar8 = FUN_07eaf54c();
          if (!bVar3) {
            if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_3_TypeInfo + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar9 = FUN_07ea7830(5,uVar8,(long)&stack0x00000028 + 4);
            if ((uVar9 & 1) != 0) {
              uStack0000000000000020 = FUN_07de5678(uStack000000000000002c,0);
              bVar3 = true;
              goto LAB_07ea71cc;
            }
          }
          if (bVar4) {
            unaff_w19 = 0;
          }
          else {
            FUN_07e2c78c(&stack0x00000030,uVar8,0);
          }
          bVar4 = true;
        }
LAB_07ea71cc:
        unaff_w24 = iVar14 + 1;
      } while (unaff_w24 < unaff_w20);
      unaff_w24 = iVar14 + 1;
      unaff_w28 = unaff_w24 < unaff_w20;
      unaff_x21 = (long *)OVRPlugin_OverlayShape_TypeInfo;
      unaff_x22 = (undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo;
      unaff_x25 = (long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
      ;
      unaff_x29 = (undefined8 *)OVRPlugin_OVRP_1_115_0_TypeInfo;
    }
    else {
      uStack0000000000000028 = 0;
      unaff_w28 = false;
      unaff_w19 = 1;
    }
    lVar10 = *unaff_x25;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar10 = *unaff_x25;
    }
    lVar10 = **(long **)(lVar10 + 0xb8);
    if (lVar10 == 0) goto LAB_07ea74f4;
    lVar12 = *(long *)(lVar10 + 0x10);
    lVar13 = *(long *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetResult__
    ;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_07ea74f4;
    uVar2 = *(uint *)(lVar10 + 0x18);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
    }
    else {
      FUN_04eafde0(lVar10,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    lVar10 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
    if (lVar10 == 0) goto LAB_07ea74f4;
    lVar12 = *(long *)(lVar10 + 0x10);
    lVar13 = *(long *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetResult__
    ;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_07ea74f4;
    uVar2 = *(uint *)(lVar10 + 0x18);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
    }
    else {
      FUN_04eafde0(lVar10,uVar11,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
      ;
    }
    lVar10 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x10);
    if (lVar10 == 0) goto LAB_07ea74f4;
    lVar12 = *(long *)(lVar10 + 0x10);
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_07ea74f4;
    uVar2 = *(uint *)(lVar10 + 0x18);
    if (*(uint *)(lVar12 + 0x18) <= uVar2) goto code_r0x07ea7370;
    lVar12 = lVar12 + (long)(int)uVar2 * 0x10;
    *(uint *)(lVar10 + 0x18) = uVar2 + 1;
    *(undefined1 (*) [16])(lVar12 + 0x20) = _in_stack_00000030;
    thunk_FUN_03afed3c(lVar12 + 0x28,0);
  } while( true );
}


