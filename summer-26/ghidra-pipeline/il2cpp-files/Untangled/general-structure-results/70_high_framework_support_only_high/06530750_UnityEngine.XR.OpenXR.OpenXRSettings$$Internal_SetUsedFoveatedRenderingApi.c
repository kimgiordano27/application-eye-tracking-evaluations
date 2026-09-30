/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_SetUsedFoveatedRenderingApi
ENTRY_POINT: 06530750
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;pose_vector;foveation_rendering;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;strong_foveation_hits_2;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8 UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetUsedFoveatedRenderingApi(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x19;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  uVar3 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose();
  if ((uVar3 & 1) != 0) {
    *unaff_x19 = in_stack_00000088;
    thunk_FUN_02f411dc();
    return 1;
  }
  lVar4 = FUN_0653125c();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*unaff_x23);
  }
  lVar5 = FUN_065311bc();
  if (lVar5 != 0) {
    FUN_04c74a5c(&stack0x00000008,lVar5,*(undefined8 *)UnityEngine_GradientAlphaKey___TypeInfo);
    puVar1 = UnityEngine_Rendering_GraphicsDeviceType___TypeInfo;
    in_stack_00000068 = in_stack_00000010;
    in_stack_00000060 = in_stack_00000008;
    in_stack_00000078 = in_stack_00000020;
    in_stack_00000070 = in_stack_00000018;
    in_stack_00000080 = in_stack_00000028;
                    /* try { // try from 065307c4 to 066307eb has its CatchHandler @ 06530a34 */
    while (uVar3 = FUN_04e98e80(&stack0x00000060,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_065312c4(lVar4,in_stack_00000070,in_stack_00000078);
    }
    FUN_04e98fa0(&stack0x00000060,*(undefined8 *)UnityEngine_GradientColorKey___TypeInfo);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar5 = FUN_06531350();
    puVar1 = PTR_DAT_06d110b8;
    if (lVar5 != 0) {
      FUN_04c74a5c(&stack0x00000008,lVar5,*(undefined8 *)PTR_DAT_06d110b8);
      puVar2 = PTR_DAT_06d110d0;
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000018;
      in_stack_00000050 = in_stack_00000028;
      while (uVar3 = FUN_04e98e80(&stack0x00000030,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_065313f0(lVar4,in_stack_00000040,in_stack_00000048);
      }
      FUN_04e98fa0(&stack0x00000030,*(undefined8 *)PTR_DAT_06d110c0);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar5 = FUN_0653165c();
      if (lVar5 != 0) {
        FUN_04c74a5c(&stack0x00000008,lVar5,*(undefined8 *)puVar1);
        in_stack_00000038 = in_stack_00000010;
        in_stack_00000030 = in_stack_00000008;
        in_stack_00000048 = in_stack_00000020;
        in_stack_00000040 = in_stack_00000018;
        in_stack_00000050 = in_stack_00000028;
        while (uVar3 = FUN_04e98e80(&stack0x00000030,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_065316fc(lVar4,in_stack_00000040,in_stack_00000048);
        }
        FUN_04e98fa0(&stack0x00000030,*(undefined8 *)PTR_DAT_06d110c0);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar3 = FUN_06530c0c(lVar4);
        if ((uVar3 & 1) != 0) {
          return 1;
        }
        *unaff_x19 = 0;
        thunk_FUN_02f411dc();
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


