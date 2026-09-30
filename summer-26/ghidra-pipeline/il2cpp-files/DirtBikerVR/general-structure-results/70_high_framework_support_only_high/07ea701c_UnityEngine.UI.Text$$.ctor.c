/*
FUNCTION_NAME: UnityEngine.UI.Text$$.ctor
ENTRY_POINT: 07ea701c
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


void UnityEngine_UI_Text___ctor(long param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int unaff_w20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  int unaff_w24;
  int iVar15;
  long *unaff_x25;
  bool bVar16;
  undefined8 *unaff_x29;
  undefined1 auVar17 [16];
  undefined8 *in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined4 uStack0000000000000020;
  int iStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while (param_1 != 0) {
    uVar8 = FUN_04eafaec(param_1,0,*unaff_x29);
    lVar9 = FUN_07ea4bc4();
    if (lVar9 == 0) break;
    uVar10 = FUN_04eafaec(lVar9,0,*unaff_x29);
    lVar9 = FUN_07ea4d2c();
    if (lVar9 == 0) break;
    uStack0000000000000020 =
         FUN_04d5b5f4(lVar9,0,*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_Start<JsonTextReader_<ParseNumberNaNAsync>d__26>__
                     );
    if (unaff_w24 < unaff_w20) {
      bVar16 = false;
      bVar2 = false;
      bVar5 = false;
      bVar4 = false;
      bVar3 = true;
      bVar6 = false;
      do {
        iVar15 = unaff_w24;
        iVar7 = FUN_07eaf39c();
        if (iVar7 < 4) {
          if (iVar7 == 1) {
            uVar12 = FUN_07eaf4b0();
            if (((uVar12 & 1) == 0) || (iStack0000000000000024 != 0)) goto LAB_07ea71a4;
            FUN_07e2c78c(&stack0x00000030,*(undefined8 *)PTR_DAT_084ba068,0);
            bVar5 = true;
            iStack0000000000000024 = 0;
            bVar6 = true;
          }
          else if (iVar7 == 3) {
            uVar11 = FUN_07eaf9c4();
            if (bVar16) {
              if (!bVar2) {
                uVar10 = uVar11;
              }
              bVar3 = (bool)((bVar2 ^ 1U) & bVar3);
              bVar16 = true;
              bVar2 = true;
            }
            else {
              bVar16 = true;
              uVar8 = uVar11;
            }
          }
          else {
LAB_07ea71a4:
            bVar3 = false;
          }
        }
        else {
          if (iVar7 != 7) {
            if (iVar7 != 0xb) goto LAB_07ea71a4;
            iStack0000000000000024 = iStack0000000000000024 + 1;
            break;
          }
          uVar11 = FUN_07eaf54c();
          if (!bVar4) {
            if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_3_TypeInfo + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar12 = FUN_07ea7830(5,uVar11,(long)&stack0x00000028 + 4);
            if ((uVar12 & 1) != 0) {
              uStack0000000000000020 = FUN_07de5678(in_stack_00000028._4_4_,0);
              bVar4 = true;
              goto LAB_07ea71cc;
            }
          }
          if (bVar5) {
            bVar3 = false;
          }
          else {
            FUN_07e2c78c(&stack0x00000030,uVar11,0);
          }
          bVar5 = true;
        }
LAB_07ea71cc:
        unaff_w24 = iVar15 + 1;
      } while (unaff_w24 < unaff_w20);
      unaff_w24 = iVar15 + 1;
      bVar16 = unaff_w24 < unaff_w20;
      unaff_x21 = (long *)OVRPlugin_OverlayShape_TypeInfo;
      unaff_x22 = (undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo;
      unaff_x25 = (long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
      ;
      unaff_x29 = (undefined8 *)OVRPlugin_OVRP_1_115_0_TypeInfo;
    }
    else {
      bVar6 = false;
      bVar16 = false;
      bVar3 = true;
    }
    lVar9 = *unaff_x25;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar9 = *unaff_x25;
    }
    lVar9 = **(long **)(lVar9 + 0xb8);
    if (lVar9 == 0) break;
    lVar13 = *(long *)(lVar9 + 0x10);
    lVar14 = *(long *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetResult__
    ;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar13 == 0) break;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
    }
    else {
      FUN_04eafde0(lVar9,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
    if (lVar9 == 0) break;
    lVar13 = *(long *)(lVar9 + 0x10);
    lVar14 = *(long *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetResult__
    ;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar13 == 0) break;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
    }
    else {
      FUN_04eafde0(lVar9,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x10);
    if (lVar9 == 0) break;
    lVar13 = *(long *)(lVar9 + 0x10);
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar13 == 0) break;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
      lVar13 = lVar13 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      *(undefined1 (*) [16])(lVar13 + 0x20) = _in_stack_00000030;
      thunk_FUN_03afed3c(lVar13 + 0x28,0);
    }
    else {
      FUN_04e8f350();
    }
    lVar9 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x18);
    if (lVar9 == 0) break;
    lVar13 = *(long *)(lVar9 + 0x10);
    lVar14 = *(long *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetStateMachine__
    ;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar13 == 0) break;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = uStack0000000000000020;
    }
    else {
      FUN_04d5b8f0(lVar9,uStack0000000000000020,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    if (!(bool)(bVar16 & bVar3)) {
      if (bVar3) {
        lVar9 = *unaff_x25;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar9 = *unaff_x25;
        }
        *in_stack_00000000 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10);
        thunk_FUN_03afed3c(in_stack_00000000);
        *in_stack_00000008 = **(undefined8 **)(*unaff_x25 + 0xb8);
        thunk_FUN_03afed3c(in_stack_00000008);
        *in_stack_00000010 = *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8);
        thunk_FUN_03afed3c(in_stack_00000010);
        uVar8 = *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x18);
        goto LAB_07ea74c8;
      }
LAB_07ea7470:
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar8 = FUN_07ea4cb4();
      *in_stack_00000000 = uVar8;
      thunk_FUN_03afed3c();
      uVar8 = FUN_07ea4bc4();
      *in_stack_00000008 = uVar8;
      thunk_FUN_03afed3c();
      uVar8 = FUN_07ea4c3c();
      *in_stack_00000010 = uVar8;
      thunk_FUN_03afed3c();
      uVar8 = FUN_07ea4d2c();
LAB_07ea74c8:
      *in_stack_00000018 = uVar8;
      thunk_FUN_03afed3c(in_stack_00000018);
      return;
    }
    if (bVar6) goto LAB_07ea7470;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar9 = FUN_07ea4cb4();
    if (lVar9 == 0) break;
    auVar17 = FUN_04e8f030(lVar9,0,*unaff_x22);
    _in_stack_00000030 = auVar17;
    param_1 = FUN_07ea4c3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


