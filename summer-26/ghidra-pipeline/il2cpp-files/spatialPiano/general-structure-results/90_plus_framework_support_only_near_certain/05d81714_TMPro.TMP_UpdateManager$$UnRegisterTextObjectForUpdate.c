/*
FUNCTION_NAME: TMPro.TMP_UpdateManager$$UnRegisterTextObjectForUpdate
ENTRY_POINT: 05d81714
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void TMPro_TMP_UpdateManager__UnRegisterTextObjectForUpdate(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *unaff_x19;
  long *plVar3;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined8 uVar4;
  long unaff_x26;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  ulong in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000118;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x68) == 0)) goto LAB_05d81bc4;
  FUN_060be514(*(long *)(param_1 + 0x68),
               *(undefined8 *)Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__,0);
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05daf224(0,(undefined8 *)(unaff_x23 + 0x260),&stack0x000000a0,0,1,1,
               *(undefined8 *)Method_Unity_AppUI_Core_PinchGestureRecognizer_Recognize__,0);
  if (*(long *)(unaff_x23 + 0x1b0) == 0) goto LAB_05d81bc4;
  uVar5 = *(undefined8 *)(unaff_x23 + 0xf0);
  uVar6 = *(undefined8 *)(unaff_x23 + 0x260);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x23 + 0x1b0) + 0x68);
  if (*(int *)(*(long *)
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05cab544(in_stack_00000028,uVar5,uVar6,in_stack_00000118,0,uVar4,0,0);
  plVar3 = (long *)
           Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  uVar4 = *(undefined8 *)(unaff_x23 + 0x260);
  if (*(int *)(unaff_x21 + 0x170) != 2) {
    if (*(int *)(unaff_x21 + 0x170) == 1) {
      if (*(int *)(unaff_x21 + 0x174) == 1) {
        if ((in_stack_00000020 & 0x100000000) != 0) goto LAB_05d81a2c;
        FUN_060be514();
      }
      else {
        if (*(int *)(unaff_x21 + 0x174) == 2) {
          if ((*(long *)(unaff_x23 + 0x1b0) == 0) ||
             (lVar1 = *(long *)(*(long *)(unaff_x23 + 0x1b0) + 0x70), lVar1 == 0))
          goto LAB_05d81bc4;
          thunk_FUN_060bf9c4(lVar1,0,0);
          in_stack_00000070 = *(undefined8 *)(unaff_x26 + 0x10);
          in_stack_00000090 = *(undefined4 *)(unaff_x26 + 0x30);
          in_stack_00000088 = *(undefined8 *)(unaff_x26 + 0x28);
          in_stack_00000080 = *(undefined8 *)(unaff_x26 + 0x20);
          in_stack_00000060 = *(undefined8 *)(unaff_x21 + 0x160);
          in_stack_00000068 = CONCAT44((int)((ulong)*(undefined8 *)(unaff_x26 + 8) >> 0x20),1);
          in_stack_00000078 = *(ulong *)(unaff_x26 + 0x18) & 0xffffffff;
          if (*(int *)(*plVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05daf224(0,(undefined8 *)(unaff_x23 + 0x268),&stack0x00000060,0,1,1,
                       *(undefined8 *)Method_Unity_AppUI_UI_Picker_OnPointerFocusIn__,0);
          FUN_05cb26cc((float)*(int *)(unaff_x21 + 0xf8),(float)*(int *)(unaff_x21 + 0xfc),
                       (float)*(int *)(unaff_x21 + 0xf8),(float)*(int *)(unaff_x21 + 0xfc),
                       (float)*(int *)(unaff_x21 + 0x160),(float)*(int *)(unaff_x21 + 0x164),
                       in_stack_00000028,0);
          if (in_stack_00000018._4_4_ != 0) {
            if (*(long *)(unaff_x23 + 0x1b0) == 0) goto LAB_05d81bc4;
            uVar5 = *(undefined8 *)(*(long *)(unaff_x23 + 0x1b0) + 0x70);
            if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_05cb163c(uVar5,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__,1,0);
          }
          if (*(long *)(unaff_x23 + 0x1b0) == 0) goto LAB_05d81bc4;
          uVar6 = *(undefined8 *)(unaff_x23 + 0x268);
          uVar5 = *(undefined8 *)(*(long *)(unaff_x23 + 0x1b0) + 0x70);
          if (*(int *)(*(long *)
                        Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                      + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05cab544(in_stack_00000028,uVar4,uVar6,in_stack_00000118,0,uVar5,0,0);
          if (0.0 < *(float *)(unaff_x21 + 0x17c)) {
            fVar7 = DAT_011b0514;
            if (*(char *)(unaff_x21 + 0x178) != '\0') {
              fVar7 = *(float *)(unaff_x21 + 0x17c);
            }
            FUN_060be514();
            FUN_05cb2908(fVar7,in_stack_00000028,0);
          }
          uVar4 = *(undefined8 *)(unaff_x23 + 0x268);
          FUN_05d95b90(in_stack_00000028,uVar4,0);
          plVar3 = (long *)
                   Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
          ;
        }
        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
             = (undefined *)plVar3;
        if ((in_stack_00000020 & 0x100000000) != 0) {
LAB_05d81a2c:
          plVar3 = (long *)
                   Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
          ;
          FUN_060be514();
          FUN_05cb2908(*(undefined4 *)(unaff_x21 + 0x224),in_stack_00000028,0);
        }
      }
    }
    else if (in_stack_00000020._4_4_ != 0) goto LAB_05d81a2c;
  }
  if (*(int *)(*plVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05dae168(&stack0x000000e0);
  if (unaff_w25 == 0) {
    in_stack_00000038 = in_stack_000000e8;
    in_stack_00000030 = in_stack_000000e0;
    in_stack_00000048 = in_stack_000000f8;
    in_stack_00000040 = in_stack_000000f0;
    in_stack_00000050 = in_stack_00000100;
    FUN_05c9caa8(&stack0x00000030,0);
    if (*(int *)(*plVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dac118(in_stack_00000028);
    return;
  }
  if (unaff_x24 != 0) {
    puVar2 = (undefined8 *)FUN_05d43a80();
    uVar5 = *puVar2;
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab544(in_stack_00000028,uVar4,uVar5,0,0);
    lVar1 = *(long *)(unaff_x21 + 0x1d8);
    puVar2 = (undefined8 *)FUN_05d43a80();
    uVar4 = *puVar2;
    puVar2 = (undefined8 *)FUN_05d43a88();
    if (lVar1 != 0) {
      FUN_05d61b54(lVar1,uVar4,*puVar2,0);
      return;
    }
  }
LAB_05d81bc4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


