/*
FUNCTION_NAME: TMPro.TMP_InputField$$SendOnSubmit
ENTRY_POINT: 05d463e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 132
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void TMPro_TMP_InputField__SendOnSubmit(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  void *unaff_x19;
  undefined8 *unaff_x20;
  void *unaff_x21;
  long unaff_x24;
  long unaff_x25;
  long lVar8;
  undefined8 *unaff_x27;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long in_stack_00000008;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined4 in_stack_00000148;
  
  if ((*(byte *)(unaff_x25 + 0x88f) & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<RenderStateBlock>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ShaderTagId>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ulong>__
                );
    FUN_02f08768(Method_System_Collections_Hashtable_ContainsKey__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    *(undefined1 *)(unaff_x25 + 0x88f) = 1;
  }
  unaff_x27[0x16] = 0;
  unaff_x27[0x17] = 0;
  unaff_x27[0x18] = 0;
  memset(&stack0x00000440,0,200);
  in_stack_00000148 = 0;
  unaff_x27[6] = 0;
  unaff_x27[9] = 0;
  unaff_x27[8] = 0;
  unaff_x27[0xb] = 0;
  unaff_x27[10] = 0;
  unaff_x27[0xd] = 0;
  unaff_x27[0xc] = 0;
  unaff_x27[0xf] = 0;
  unaff_x27[0xe] = 0;
  unaff_x27[0x11] = 0;
  unaff_x27[0x10] = 0;
  unaff_x27[0x13] = 0;
  unaff_x27[0x12] = 0;
  *(undefined8 *)((long)unaff_x27 + 0xa4) = 0;
  *(undefined8 *)((long)unaff_x27 + 0x9c) = 0;
  uVar6 = *unaff_x20;
  uVar10 = unaff_x20[3];
  uVar9 = unaff_x20[2];
  unaff_x27[3] = unaff_x20[1];
  unaff_x27[2] = uVar6;
  unaff_x27[5] = uVar10;
  unaff_x27[4] = uVar9;
  FUN_05d46fb0();
  puVar4 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  puVar3 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ShaderTagId>__
  ;
  if (*(long *)(unaff_x24 + 0x38) == 0) {
    if (*(long *)(in_stack_00000008 + 0x28) == param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    FUN_03ac039c(&stack0x00000370,*(long *)(unaff_x24 + 0x38),
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                );
    unaff_x27[0x18] = unaff_x27[0x4e];
    unaff_x27[0x17] = unaff_x27[0x4d];
    unaff_x27[0x16] = unaff_x27[0x4c];
    *unaff_x27 = 0;
    unaff_x27[1] = &stack0x000001c0;
    while (uVar5 = FUN_04aff1b0(&stack0x000001c0,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      lVar8 = unaff_x27[0x18];
      if (lVar8 == 0) {
        if (*(long *)(in_stack_00000008 + 0x28) == param_1) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d4673c;
      }
      memcpy(&stack0x000002a8,unaff_x21,200);
      FUN_05d472f0(&stack0x00000370,lVar8,&stack0x000002a8);
      memcpy(&stack0x00000440,&stack0x00000370,200);
      memcpy(&stack0x000000a4,unaff_x19,0x6c);
      FUN_05d47438(&stack0x00000370,lVar8,&stack0x000000a4);
      memcpy(&stack0x00000150,&stack0x00000370,0x6c);
      lVar8 = *(long *)puVar4;
      uVar9 = unaff_x20[1];
      uVar6 = *unaff_x20;
      uVar11 = unaff_x20[3];
      uVar10 = unaff_x20[2];
      unaff_x27[6] = 0;
      iVar1 = *(int *)(lVar8 + 0xe4);
      in_stack_00000148 = 0;
      unaff_x27[0x4d] = uVar9;
      unaff_x27[0x4c] = uVar6;
      unaff_x27[0x4f] = uVar11;
      unaff_x27[0x4e] = uVar10;
      if (iVar1 == 0) {
        thunk_FUN_02f6670c();
      }
      memcpy(&stack0x000001e0,&stack0x00000440,200);
      in_stack_00000088 = unaff_x27[0x4d];
      in_stack_00000080 = unaff_x27[0x4c];
      in_stack_00000098 = unaff_x27[0x4f];
      in_stack_00000090 = unaff_x27[0x4e];
      memcpy(&stack0x00000014,&stack0x00000150,0x6c);
      FUN_05dace88();
      lVar8 = *(long *)(unaff_x24 + 0x48);
      if (lVar8 == 0) {
LAB_05d46660:
        if (*(long *)(in_stack_00000008 + 0x28) == param_1) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d4673c;
      }
      uVar6 = unaff_x27[6];
      lVar7 = *(long *)(lVar8 + 0x10);
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_05d46660;
      uVar2 = *(uint *)(lVar8 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        lVar7 = lVar7 + (long)(int)uVar2 * 0xc;
        *(uint *)(lVar8 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar7 + 0x20) = uVar6;
        *(undefined4 *)(lVar7 + 0x28) = in_stack_00000148;
      }
      else {
        FUN_03aed558();
      }
    }
    FUN_04aff1ac(&stack0x000001c0,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<RenderStateBlock>__
                );
    if (*(long *)(in_stack_00000008 + 0x28) == param_1) {
      return;
    }
  }
LAB_05d4673c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


