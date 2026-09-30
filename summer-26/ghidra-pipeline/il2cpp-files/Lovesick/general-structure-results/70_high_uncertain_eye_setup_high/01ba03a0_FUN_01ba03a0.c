/*
FUNCTION_NAME: FUN_01ba03a0
ENTRY_POINT: 01ba03a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01ba04d4) */
/* WARNING: Removing unreachable block (ram,0x01ba0524) */

void FUN_01ba03a0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  char local_34 [4];
  
  if ((DAT_0377e691 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_1351);
    thunk_FUN_00d48444(Oculus_Platform_Models_Pid_TypeInfo);
    DAT_0377e691 = 1;
  }
  puVar3 = StringLiteral_302;
  puVar2 = Oculus_Platform_Models_Pid_TypeInfo;
  local_34[0] = '\0';
  if (*(long *)(param_1 + 0x10) == 0) {
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02661754(*(undefined8 *)puVar2,0);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    local_34[0] = '\0';
    FUN_017d75a8(uVar6,local_34,0);
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar5 = *(long *)
             System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_TypeInfo
    ;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    uVar4 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 200));
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(lVar7 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_0179519c(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      }
    }
    if (local_34[0] != '\0') {
      thunk_FUN_00d56f10(uVar6,0);
    }
    puVar2 = StringLiteral_1351;
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_020b9a50(*(long *)(param_1 + 0x10),0);
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)puVar2,0);
  }
  return;
}


