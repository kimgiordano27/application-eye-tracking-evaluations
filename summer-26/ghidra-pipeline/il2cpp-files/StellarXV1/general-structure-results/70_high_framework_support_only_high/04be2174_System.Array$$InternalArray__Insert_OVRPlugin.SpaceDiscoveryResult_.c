/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 04be2174
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_SpaceDiscoveryResult>
               (undefined8 *param_1,undefined1 param_2 [16])

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x21;
  uint unaff_w22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  uStack0000000000000020 = 0;
  uStack0000000000000010 = uStack0000000000000000;
  uStack0000000000000018 = uStack0000000000000008;
  uVar1 = FUN_0769286c();
  if (unaff_w22 < uVar1) {
    memcpy(&stack0x00000000,
           (void *)((long)unaff_x21 +
                   (ulong)*(uint *)(*unaff_x21 + 0x104) * (long)(int)unaff_w22 + 0x20),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    param_1[4] = uStack0000000000000020;
    param_1[1] = uStack0000000000000008;
    *param_1 = uStack0000000000000000;
    param_1[3] = uStack0000000000000018;
    param_1[2] = uStack0000000000000010;
    return;
  }
  thunk_FUN_040dedf8(&DAT_094ae088);
  uVar2 = thunk_FUN_040b4efc();
  uVar3 = thunk_FUN_040dedf8(&DAT_09564228);
  FUN_075d6138(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar2);
}


