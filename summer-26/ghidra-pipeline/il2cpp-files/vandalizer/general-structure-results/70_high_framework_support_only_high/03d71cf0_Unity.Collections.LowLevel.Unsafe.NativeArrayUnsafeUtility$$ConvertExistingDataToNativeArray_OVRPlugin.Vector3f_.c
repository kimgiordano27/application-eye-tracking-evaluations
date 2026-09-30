/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector3f>
ENTRY_POINT: 03d71cf0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector3f>
               (void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = 0;
  if (unaff_x22 == (long *)0x0) {
    thunk_FUN_03257e30(PTR_DAT_0759c0f0);
    uVar5 = thunk_FUN_0322f148();
    uVar2 = thunk_FUN_03257e30(PTR_DAT_075d6aa8);
    FUN_05d6f364(uVar5,uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar5);
  }
  lVar3 = **(long **)(unaff_x23 + 0x38);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4(lVar3);
  }
  lVar4 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar3) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_03d71d60;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_03d71d60:
  uVar6 = (*(code *)*puVar1)();
  puVar1 = (undefined8 *)&stack0x00000008;
  if ((uVar6 & 1) == 0) {
    puVar1 = unaff_x19;
  }
  uVar2 = *puVar1;
  uVar5 = puVar1[2];
  unaff_x20[1] = puVar1[1];
  *unaff_x20 = uVar2;
  unaff_x20[2] = uVar5;
  return;
}


