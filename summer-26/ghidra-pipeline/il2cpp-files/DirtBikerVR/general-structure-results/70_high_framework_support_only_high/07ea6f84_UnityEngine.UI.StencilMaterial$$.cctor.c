/*
FUNCTION_NAME: UnityEngine.UI.StencilMaterial$$.cctor
ENTRY_POINT: 07ea6f84
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


void UnityEngine_UI_StencilMaterial___cctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char in_NG;
  char in_OV;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  long in_x9;
  long lVar15;
  undefined4 in_w10;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *plVar16;
  undefined8 *unaff_x22;
  undefined8 *puVar17;
  long unaff_x23;
  int iVar18;
  undefined8 *unaff_x24;
  long *unaff_x25;
  bool bVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  undefined4 uStack0000000000000020;
  int iStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  *(undefined4 *)(in_x9 + 0x18) = 0;
  *(undefined4 *)(in_x9 + 0x1c) = in_w10;
  if (in_NG == in_OV) {
    Newtonsoft_Json_Schema_ValidationEventArgs__get_Path(*(undefined8 *)(in_x9 + 0x10),0,param_4,0);
    param_1 = *(long *)(*unaff_x25 + 0xb8);
  }
  auVar21._8_8_ = in_stack_00000038;
  auVar21._0_8_ = in_stack_00000030;
  lVar12 = *(long *)(param_1 + 0x18);
  if (lVar12 != 0) {
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    _in_stack_00000030 = auVar21;
    if (unaff_x23 != 0) {
      iStack0000000000000024 = 0;
      iVar1 = *(int *)(unaff_x23 + 0x54);
      iVar7 = 0;
      bVar14 = false;
      plVar16 = (long *)OVRPlugin_OverlayShape_TypeInfo;
      puVar17 = (undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo;
      puVar20 = (undefined8 *)OVRPlugin_OVRP_1_115_0_TypeInfo;
      do {
        if (bVar14) goto LAB_07ea7470;
        if (*(int *)(*plVar16 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        lVar12 = FUN_07ea4cb4();
        if (lVar12 == 0) goto LAB_07ea74f4;
        auVar21 = FUN_04e8f030(lVar12,0,*puVar17);
        _in_stack_00000030 = auVar21;
        lVar12 = FUN_07ea4c3c();
        if (lVar12 == 0) goto LAB_07ea74f4;
        uVar8 = FUN_04eafaec(lVar12,0,*puVar20);
        lVar12 = FUN_07ea4bc4();
        if (lVar12 == 0) goto LAB_07ea74f4;
        uVar9 = FUN_04eafaec(lVar12,0,*puVar20);
        lVar12 = FUN_07ea4d2c();
        if (lVar12 == 0) goto LAB_07ea74f4;
        uStack0000000000000020 =
             FUN_04d5b5f4(lVar12,0,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_Start<JsonTextReader_<ParseNumberNaNAsync>d__26>__
                         );
        if (iVar7 < iVar1) {
          bVar19 = false;
          bVar3 = false;
          bVar6 = false;
          bVar5 = false;
          bVar4 = true;
          bVar14 = false;
          do {
            iVar18 = iVar7;
            iVar7 = FUN_07eaf39c();
            if (iVar7 < 4) {
              if (iVar7 == 1) {
                uVar11 = FUN_07eaf4b0();
                if (((uVar11 & 1) == 0) || (iStack0000000000000024 != 0)) goto LAB_07ea71a4;
                FUN_07e2c78c(&stack0x00000030,*(undefined8 *)PTR_DAT_084ba068,0);
                bVar6 = true;
                iStack0000000000000024 = 0;
                bVar14 = true;
              }
              else if (iVar7 == 3) {
                uVar10 = FUN_07eaf9c4();
                if (bVar19) {
                  if (!bVar3) {
                    uVar9 = uVar10;
                  }
                  bVar4 = (bool)((bVar3 ^ 1U) & bVar4);
                  bVar19 = true;
                  bVar3 = true;
                }
                else {
                  bVar19 = true;
                  uVar8 = uVar10;
                }
              }
              else {
LAB_07ea71a4:
                bVar4 = false;
              }
            }
            else {
              if (iVar7 != 7) {
                if (iVar7 != 0xb) goto LAB_07ea71a4;
                iStack0000000000000024 = iStack0000000000000024 + 1;
                break;
              }
              uVar10 = FUN_07eaf54c();
              if (!bVar5) {
                if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_3_TypeInfo + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar11 = FUN_07ea7830(5,uVar10,(long)&stack0x00000028 + 4);
                if ((uVar11 & 1) != 0) {
                  uStack0000000000000020 = FUN_07de5678(in_stack_00000028._4_4_,0);
                  bVar5 = true;
                  goto LAB_07ea71cc;
                }
              }
              if (bVar6) {
                bVar4 = false;
              }
              else {
                FUN_07e2c78c(&stack0x00000030,uVar10,0);
              }
              bVar6 = true;
            }
LAB_07ea71cc:
            iVar7 = iVar18 + 1;
          } while (iVar7 < iVar1);
          iVar7 = iVar18 + 1;
          bVar19 = iVar7 < iVar1;
          plVar16 = (long *)OVRPlugin_OverlayShape_TypeInfo;
          puVar17 = (undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo;
          unaff_x25 = (long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
          ;
          puVar20 = (undefined8 *)OVRPlugin_OVRP_1_115_0_TypeInfo;
        }
        else {
          bVar14 = false;
          bVar19 = false;
          bVar4 = true;
        }
        lVar12 = *unaff_x25;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar12 = *unaff_x25;
        }
        lVar12 = **(long **)(lVar12 + 0xb8);
        if (lVar12 == 0) goto LAB_07ea74f4;
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar15 = *(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetResult__
        ;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_07ea74f4;
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
        }
        else {
          FUN_04eafde0(lVar12,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        lVar12 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
        if (lVar12 == 0) goto LAB_07ea74f4;
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar15 = *(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetResult__
        ;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_07ea74f4;
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
        }
        else {
          FUN_04eafde0(lVar12,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        lVar12 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x10);
        if (lVar12 == 0) goto LAB_07ea74f4;
        lVar13 = *(long *)(lVar12 + 0x10);
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_07ea74f4;
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar13 + 0x18)) {
          lVar13 = lVar13 + (long)(int)uVar2 * 0x10;
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          *(undefined1 (*) [16])(lVar13 + 0x20) = _in_stack_00000030;
          thunk_FUN_03afed3c(lVar13 + 0x28,0);
        }
        else {
          FUN_04e8f350();
        }
        lVar12 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x18);
        if (lVar12 == 0) goto LAB_07ea74f4;
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar15 = *(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetStateMachine__
        ;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_07ea74f4;
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar13 + (long)(int)uVar2 * 4 + 0x20) = uStack0000000000000020;
        }
        else {
          FUN_04d5b8f0(lVar12,uStack0000000000000020,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      } while ((bool)(bVar19 & bVar4));
      if (bVar4) {
        lVar12 = *unaff_x25;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar12 = *unaff_x25;
        }
        *unaff_x24 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10);
        thunk_FUN_03afed3c(unaff_x24);
        *unaff_x22 = **(undefined8 **)(*unaff_x25 + 0xb8);
        thunk_FUN_03afed3c(unaff_x22);
        *unaff_x21 = *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8);
        thunk_FUN_03afed3c(unaff_x21);
        uVar8 = *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x18);
      }
      else {
LAB_07ea7470:
        if (*(int *)(*plVar16 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar8 = FUN_07ea4cb4();
        *unaff_x24 = uVar8;
        thunk_FUN_03afed3c();
        uVar8 = FUN_07ea4bc4();
        *unaff_x22 = uVar8;
        thunk_FUN_03afed3c();
        uVar8 = FUN_07ea4c3c();
        *unaff_x21 = uVar8;
        thunk_FUN_03afed3c();
        uVar8 = FUN_07ea4d2c();
      }
      *unaff_x20 = uVar8;
      thunk_FUN_03afed3c(unaff_x20);
      return;
    }
  }
LAB_07ea74f4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


