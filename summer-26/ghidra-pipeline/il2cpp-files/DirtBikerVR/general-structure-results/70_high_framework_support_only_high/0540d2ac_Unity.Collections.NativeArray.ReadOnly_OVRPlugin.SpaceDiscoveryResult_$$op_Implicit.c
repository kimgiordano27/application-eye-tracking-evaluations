/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 0540d2ac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__op_Implicit(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long *unaff_x23;
  
  lVar1 = thunk_FUN_03ac73c0();
  if (lVar1 == 0) {
    uVar2 = *unaff_x20;
    FUN_0350b94c(uVar2);
    uVar2 = thunk_FUN_03a9a6e8(uVar2,0);
    uVar4 = **(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_0350b93c(*(undefined8 *)(PTR_DAT_08486760 + 0xe0));
    uVar4 = FUN_0675ff58(uVar4,0);
    uVar3 = thunk_FUN_03af1434(PTR_DAT_08494b80);
    uVar2 = FUN_065ce754(uVar3,uVar2,uVar4,0);
    thunk_FUN_03af1434(PTR_DAT_08488490);
    uVar4 = thunk_FUN_03ac74bc();
    FUN_066b6070(uVar4,uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar4);
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090(lVar1);
  }
  if (*(long *)(*unaff_x23 + 0x40) == *(long *)(lVar1 + 0x40)) {
    thunk_FUN_03ac7604();
    FUN_046d1984();
    uVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20)
                              );
    *unaff_x20 = uVar2;
    thunk_FUN_03afed3c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8ad40();
}


