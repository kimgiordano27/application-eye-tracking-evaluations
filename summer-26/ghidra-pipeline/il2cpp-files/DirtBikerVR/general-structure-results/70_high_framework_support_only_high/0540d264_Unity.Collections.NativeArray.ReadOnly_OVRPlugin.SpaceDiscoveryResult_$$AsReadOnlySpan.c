/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$AsReadOnlySpan
ENTRY_POINT: 0540d264
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__AsReadOnlySpan
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  plVar6 = (long *)*param_3;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  if (plVar6 == (long *)0x0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar5 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(PTR_DAT_0848f030);
    FUN_066af6a0(uVar5,uVar2,0);
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090(lVar4);
    }
    lVar4 = thunk_FUN_03ac73c0(plVar6,lVar4);
    if (lVar4 != 0) {
      lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03ac4090(lVar4);
      }
      if (*(long *)(*plVar6 + 0x40) == *(long *)(lVar4 + 0x40)) {
        puVar1 = (undefined8 *)thunk_FUN_03ac7604();
        uStack0000000000000028 = puVar1[1];
        uStack0000000000000020 = *puVar1;
        uStack0000000000000038 = puVar1[3];
        uStack0000000000000030 = puVar1[2];
        FUN_046d1984(param_1,param_2,&stack0x00000020,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28));
        uVar2 = thunk_FUN_03ac70f4(*(undefined8 *)
                                    (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20));
        *param_3 = uVar2;
        thunk_FUN_03afed3c(param_3,uVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar6);
    }
    uVar2 = *param_3;
    FUN_0350b94c(uVar2);
    uVar2 = thunk_FUN_03a9a6e8(uVar2,0);
    uVar5 = **(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0);
    FUN_0350b93c(*(undefined8 *)(PTR_DAT_08486760 + 0xe0));
    uVar5 = FUN_0675ff58(uVar5,0);
    uVar3 = thunk_FUN_03af1434(PTR_DAT_08494b80);
    uVar2 = FUN_065ce754(uVar3,uVar2,uVar5,0);
    thunk_FUN_03af1434(PTR_DAT_08488490);
    uVar5 = thunk_FUN_03ac74bc();
    FUN_066b6070(uVar5,uVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar5,param_4);
}


