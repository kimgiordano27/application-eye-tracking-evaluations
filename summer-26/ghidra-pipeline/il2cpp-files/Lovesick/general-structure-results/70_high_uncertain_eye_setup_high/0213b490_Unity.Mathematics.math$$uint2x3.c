/*
FUNCTION_NAME: Unity.Mathematics.math$$uint2x3
ENTRY_POINT: 0213b490
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Unity_Mathematics_math__uint2x3(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  int in_w9;
  long *unaff_x19;
  undefined8 uVar3;
  long *unaff_x21;
  
  uVar3 = *param_1;
  if (in_w9 == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01780344(uVar3,0);
  uVar1 = FUN_01789ac0();
  puVar2 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_lane_s32__;
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01780344(uVar3,0);
    uVar1 = FUN_01789ac0();
    puVar2 = (undefined8 *)
             Sirenix_Serialization_Utilities_EmitUtilities_<>c__DisplayClass23_0_TypeInfo;
    if ((uVar1 & 1) == 0) {
      uVar3 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01780344(uVar3,0);
      uVar1 = FUN_01789ac0();
      puVar2 = (undefined8 *)
               Method_System_Collections_Generic_Dictionary<int,_List<WeakReference>>__ctor__;
      if ((uVar1 & 1) == 0) {
        uVar3 = *(undefined8 *)
                 Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
        ;
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01780344(uVar3,0);
        uVar1 = FUN_01789ac0();
        puVar2 = (undefined8 *)StringLiteral_9872;
        if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0213b5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*unaff_x19 + 0x1b8))();
          return uVar3;
        }
      }
    }
  }
  return *puVar2;
}


