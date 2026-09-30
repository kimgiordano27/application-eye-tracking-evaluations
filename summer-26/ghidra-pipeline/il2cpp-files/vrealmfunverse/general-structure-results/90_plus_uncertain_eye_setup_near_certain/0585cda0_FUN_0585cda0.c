/*
FUNCTION_NAME: FUN_0585cda0
ENTRY_POINT: 0585cda0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0585cda0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_066d2e8e & 1) == 0) {
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<XRHandJoint>__ctor__);
    DAT_066d2e8e = 1;
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    iVar3 = 1;
  }
  else {
    iVar3 = FUN_05855310(param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    if (iVar3 < 1) goto LAB_0585cf1c;
  }
  puVar2 = Method_Unity_Collections_NativeArray<XRHandJoint>__ctor__;
  puVar1 = Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__;
  iVar7 = 0;
  do {
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) {
      local_a0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      uStack_b8 = *(undefined8 *)(lVar5 + 0x30);
      local_c0 = *(undefined8 *)(lVar5 + 0x28);
      uStack_a8 = *(undefined8 *)(lVar5 + 0x40);
      uStack_b0 = *(undefined8 *)(lVar5 + 0x38);
      local_a0 = *(undefined8 *)(lVar5 + 0x48);
    }
    local_70 = local_a0;
    uStack_88 = uStack_b8;
    local_90 = local_c0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    if (param_2 == 0) goto LAB_0585cf54;
    uStack_e8 = uStack_b8;
    local_f0 = local_c0;
    uStack_d8 = uStack_a8;
    uStack_e0 = uStack_b0;
    local_d0 = local_a0;
    FUN_05cb813c(param_2,&local_f0,iVar7,0);
    uVar4 = FUN_05c693b8(0);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar5);
      lVar5 = *(long *)puVar2;
    }
    puVar6 = *(undefined4 **)(lVar5 + 0xb8);
    uVar8 = *puVar6;
    uVar9 = puVar6[1];
    uVar10 = puVar6[2];
    uVar11 = puVar6[3];
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_0585cf58(uVar8,uVar9,uVar10,uVar11,uVar8,uVar9,uVar10,uVar11,param_2,uVar4,iVar7,1);
    iVar7 = iVar7 + 1;
  } while (iVar3 != iVar7);
LAB_0585cf1c:
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_0444eb38(*(long *)(param_1 + 0x38),
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    return;
  }
LAB_0585cf54:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


