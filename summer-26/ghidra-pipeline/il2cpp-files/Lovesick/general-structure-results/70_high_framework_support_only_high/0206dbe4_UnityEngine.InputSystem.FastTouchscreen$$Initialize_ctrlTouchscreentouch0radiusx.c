/*
FUNCTION_NAME: UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch0radiusx
ENTRY_POINT: 0206dbe4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_file_logging_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch0radiusx
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  lVar7 = thunk_FUN_00d6225c(param_2,*(undefined8 *)(param_1 + 0x40));
  puVar1 = StringLiteral_4028;
  if (lVar7 != 0) {
    uVar9 = *(uint *)(unaff_x19 + 3);
    if (10 < uVar9) {
      unaff_x19[0xe] = *unaff_x21;
      lVar7 = *(long *)puVar1;
      if (lVar7 != 0) {
        lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar7 == 0) goto LAB_0206de70;
        uVar9 = *(uint *)(unaff_x19 + 3);
      }
      puVar2 = System_Collections_Generic_List<UnityEvent>_TypeInfo;
      if (0xb < uVar9) {
        unaff_x19[0xf] = *(long *)puVar1;
        lVar7 = *(long *)puVar2;
        if (lVar7 != 0) {
          lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar7 == 0) goto LAB_0206de70;
          uVar9 = *(uint *)(unaff_x19 + 3);
        }
        puVar1 = Method_RhythmGameStarter_NoteRecorder_<Start>b__38_0__;
        if (0xc < uVar9) {
          unaff_x19[0x10] = *(long *)puVar2;
          lVar7 = *(long *)puVar1;
          if (lVar7 != 0) {
            lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar7 == 0) goto LAB_0206de70;
            uVar9 = *(uint *)(unaff_x19 + 3);
          }
          puVar2 = Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_Contains__;
          if (0xd < uVar9) {
            unaff_x19[0x11] = *(long *)puVar1;
            lVar7 = *(long *)puVar2;
            if (lVar7 != 0) {
              lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*unaff_x19 + 0x40));
              if (lVar7 == 0) goto LAB_0206de70;
              uVar9 = *(uint *)(unaff_x19 + 3);
            }
            puVar1 = Method_System_Collections_Generic_Stack<WitResponseNode>_Pop__;
            if (0xe < uVar9) {
              unaff_x19[0x12] = *(long *)puVar2;
              lVar7 = *(long *)puVar1;
              if (lVar7 != 0) {
                lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*unaff_x19 + 0x40));
                if (lVar7 == 0) goto LAB_0206de70;
                uVar9 = *(uint *)(unaff_x19 + 3);
              }
              puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_143__;
              if (0xf < uVar9) {
                unaff_x19[0x13] = *(long *)puVar1;
                lVar7 = *(long *)puVar2;
                if (lVar7 != 0) {
                  lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*unaff_x19 + 0x40));
                  if (lVar7 == 0) goto LAB_0206de70;
                  uVar9 = *(uint *)(unaff_x19 + 3);
                }
                puVar1 = PTR_DAT_033eec50;
                if (0x10 < uVar9) {
                  unaff_x19[0x14] = *(long *)puVar2;
                  lVar7 = *(long *)puVar1;
                  if (lVar7 != 0) {
                    lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*unaff_x19 + 0x40));
                    if (lVar7 == 0) goto LAB_0206de70;
                    uVar9 = *(uint *)(unaff_x19 + 3);
                  }
                  puVar2 = Method_Oculus_Interaction_PointableCanvas_<Start>b__4_0__;
                  if (0x11 < uVar9) {
                    unaff_x19[0x15] = *(long *)puVar1;
                    lVar7 = *(long *)puVar2;
                    if (lVar7 != 0) {
                      lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*unaff_x19 + 0x40));
                      if (lVar7 == 0) goto LAB_0206de70;
                      uVar9 = *(uint *)(unaff_x19 + 3);
                    }
                    if (0x12 < uVar9) {
                      unaff_x19[0x16] = *(long *)puVar2;
                      puVar5 = StringLiteral_8260;
                      puVar3 = Method_System_Xml_Schema_XdrBuilder_XDR_EndAttributeDtType__;
                      puVar2 = 
                      Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                      ;
                      *(long **)(*(long *)(*unaff_x20 + 0xb8) + 8) = unaff_x19;
                      puVar6 = StringLiteral_13820;
                      puVar4 = StringLiteral_7511;
                      puVar1 = 
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_StreamWriter_<FlushAsyncInternal>d__74>__
                      ;
                      uVar8 = FUN_00da4fb8(*(undefined8 *)puVar5,0x20);
                      FUN_016a34e8(uVar8,*(undefined8 *)puVar3,0);
                      *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10) = uVar8;
                      uVar8 = FUN_00da4fb8(*(undefined8 *)puVar2,6);
                      FUN_016a34e8(uVar8,*(undefined8 *)puVar1,0);
                      *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18) = uVar8;
                      uVar8 = FUN_00da4fb8(*(undefined8 *)puVar6,0x80);
                      FUN_016a34e8(uVar8,*(undefined8 *)puVar4,0);
                      *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20) = uVar8;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_0206de70:
  uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar8,0);
}


