/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector3f>
ENTRY_POINT: 04b148dc
PROGRAM: m3ar-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector3f>
          (void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 *unaff_x19;
  long lVar5;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  int unaff_w24;
  long *in_stack_00000028;
  
  if (in_stack_00000028 != (long *)0x0) {
    lVar2 = *in_stack_00000028;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08f65868) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto 
          Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<Vector3>;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*(long *)PTR_DAT_08f65868,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<Vector3>:
    (*(code *)*puVar1)(in_stack_00000028,puVar1[1]);
  }
  if (unaff_x22 == 0) {
    if ((unaff_w24 == 3) || (unaff_w24 == 0)) {
      *unaff_x19 = 0;
      lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x60);
      lVar2 = *(long *)(lVar5 + 0x38);
      if (lVar2 == 0) {
        FUN_0406ab48(lVar5);
        lVar2 = *(long *)(lVar5 + 0x38);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0406aaec();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar2 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0406aaec();
      }
      unaff_x21 = **(undefined8 **)(lVar2 + 0xb8);
    }
    return unaff_x21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031884();
}


