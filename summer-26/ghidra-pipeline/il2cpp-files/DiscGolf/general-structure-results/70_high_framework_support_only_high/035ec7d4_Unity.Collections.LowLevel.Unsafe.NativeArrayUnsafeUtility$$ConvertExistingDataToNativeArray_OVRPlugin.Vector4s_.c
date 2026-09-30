/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector4s>
ENTRY_POINT: 035ec7d4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035ecb10) */
/* WARNING: Removing unreachable block (ram,0x035ec894) */
/* WARNING: Removing unreachable block (ram,0x035ec8a8) */
/* WARNING: Removing unreachable block (ram,0x035ec8ac) */
/* WARNING: Removing unreachable block (ram,0x035ec8b8) */
/* WARNING: Removing unreachable block (ram,0x035ec8c8) */
/* WARNING: Removing unreachable block (ram,0x035ec8dc) */
/* WARNING: Removing unreachable block (ram,0x035ec8f0) */
/* WARNING: Removing unreachable block (ram,0x035ec90c) */
/* WARNING: Removing unreachable block (ram,0x035ec920) */
/* WARNING: Removing unreachable block (ram,0x035ecb0c) */
/* WARNING: Removing unreachable block (ram,0x035ec924) */
/* WARNING: Removing unreachable block (ram,0x035eca84) */
/* WARNING: Removing unreachable block (ram,0x035ec960) */
/* WARNING: Removing unreachable block (ram,0x035eca8c) */
/* WARNING: Removing unreachable block (ram,0x035ec984) */
/* WARNING: Removing unreachable block (ram,0x035eca94) */
/* WARNING: Removing unreachable block (ram,0x035ec9ac) */
/* WARNING: Removing unreachable block (ram,0x035ec9d4) */
/* WARNING: Removing unreachable block (ram,0x035eca9c) */
/* WARNING: Removing unreachable block (ram,0x035ec9dc) */
/* WARNING: Removing unreachable block (ram,0x035ec9f4) */
/* WARNING: Removing unreachable block (ram,0x035ec9b8) */
/* WARNING: Removing unreachable block (ram,0x035ec9f8) */
/* WARNING: Removing unreachable block (ram,0x035eca04) */
/* WARNING: Removing unreachable block (ram,0x035eca1c) */
/* WARNING: Removing unreachable block (ram,0x035eca24) */
/* WARNING: Removing unreachable block (ram,0x035eca4c) */
/* WARNING: Removing unreachable block (ram,0x035eca30) */
/* WARNING: Removing unreachable block (ram,0x035eca3c) */
/* WARNING: Removing unreachable block (ram,0x035eca58) */
/* WARNING: Removing unreachable block (ram,0x035eca64) */
/* WARNING: Removing unreachable block (ram,0x035eca68) */
/* WARNING: Removing unreachable block (ram,0x035eca70) */
/* WARNING: Removing unreachable block (ram,0x035eca74) */
/* WARNING: Removing unreachable block (ram,0x035eca80) */
/* WARNING: Removing unreachable block (ram,0x035ecb18) */

void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector4s>
               (void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x21;
  long *in_stack_00000018;
  
  LeanTween__value();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar1 = (long *)(**(code **)(*plVar1 + 0x3c8))(plVar1,*(undefined8 *)(*plVar1 + 0x3d0));
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  (**(code **)(*plVar1 + 0x188))(plVar1,in_stack_00000018,*(undefined8 *)(*plVar1 + 400));
  FUN_0659f6a8();
  if (in_stack_00000018 != (long *)0x0) {
    lVar3 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto FUN_035ec880;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(in_stack_00000018,*(long *)PTR_DAT_069fbff0,0);
FUN_035ec880:
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
  }
  return;
}


