/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 05138ebc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetUseOverriddenExternalCameraStaticPose(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  if ((*(byte *)(unaff_x21 + 0xcc3) & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067816b0);
    FUN_02d6084c(PTR_DAT_067813a8);
    *(undefined1 *)(unaff_x21 + 0xcc3) = 1;
  }
  in_stack_00000008 = 0;
  if (param_2 != 0) {
    uVar1 = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar2 = FUN_0489720c(*(long *)(param_1 + 0x18),param_2,&stack0x00000008,
                           *(undefined8 *)PTR_DAT_067813a8);
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = System_Collections_Generic_Dictionary_ValueCollection<object,_LayerDataDescriptor>__GetEnumerator
                          (param_1,in_stack_00000008,*(undefined8 *)PTR_DAT_067816b0);
      }
    }
    return uVar1 & 1;
  }
  thunk_FUN_02dc61f4(PTR_DAT_06764070);
  uVar3 = thunk_FUN_02d9d534();
  uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06769a18);
  FUN_04f77010(uVar3,uVar4,0);
  uVar4 = thunk_FUN_02dc61f4(PTR_DAT_067816b8);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar3,uVar4);
}


