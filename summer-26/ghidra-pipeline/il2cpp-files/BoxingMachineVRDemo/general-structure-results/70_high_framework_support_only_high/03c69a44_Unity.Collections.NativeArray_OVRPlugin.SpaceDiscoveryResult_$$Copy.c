/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 03c69a44
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  uVar1 = thunk_FUN_02dc61f4(*(undefined8 *)(param_1 + 0xf28));
  uVar2 = RootMotion_FinalIK_IKMappingSpine__Initiate(uVar1,*(undefined8 *)*unaff_x21);
  if ((uVar2 & 1) != 0) {
    __cxa_end_catch();
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68);
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar1 = FUN_05015c2c(uVar1,0);
    uVar4 = thunk_FUN_02dc61f4(PTR_DAT_0675e2d0,uVar1,0);
    uVar4 = FUN_02d60934(uVar4,2);
    FUN_028f4e40();
    FUN_028f7030(uVar4);
    FUN_028f7064(uVar4,0);
    FUN_028f4e40(uVar4);
    FUN_028f7030(uVar4,uVar1);
    FUN_028f7064(uVar4,1,uVar1);
    uVar1 = thunk_FUN_02dc61f4(PTR_DAT_0677b058);
    uVar1 = FUN_0504b040(uVar1,uVar4,0);
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar4 = thunk_FUN_02d9d534();
    uVar5 = thunk_FUN_02dc61f4(PTR_DAT_067654c8);
    FUN_04f77088(uVar4,uVar1,uVar5,0);
    uVar1 = thunk_FUN_02dc61f4(PTR_DAT_0677b068);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,uVar1);
  }
  puVar3 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar3 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&PTR_PTR_0638da48,0);
}


