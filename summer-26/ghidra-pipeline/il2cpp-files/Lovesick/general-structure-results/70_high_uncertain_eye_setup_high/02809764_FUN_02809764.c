/*
FUNCTION_NAME: FUN_02809764
ENTRY_POINT: 02809764
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02809764(undefined8 param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  
  if ((DAT_03788b51 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10902);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_114_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9770);
    DAT_03788b51 = 1;
  }
  uVar5 = (undefined4)param_1;
  switch(param_4) {
  case 0x20003:
    lVar1 = FUN_013b3bbc(param_2 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined4 *)(lVar1 + 0xc) = uVar5;
    if ((param_3 == 0) || (*(long *)(param_3 + 0x2c0) == 0)) {
LAB_02809a30:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0285242c(param_1,*(long *)(param_3 + 0x2c0),0);
    break;
  case 0x20004:
    lVar1 = FUN_013b3bbc(param_2 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined4 *)(lVar1 + 0x10) = uVar5;
    if ((param_3 == 0) || (*(long *)(param_3 + 0x2c0) == 0)) goto LAB_02809a30;
    FUN_028522e8(param_1,*(long *)(param_3 + 0x2c0),0);
    break;
  case 0x20005:
    lVar1 = FUN_013b3bbc(param_2 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined4 *)(lVar1 + 0x14) = uVar5;
    if ((param_3 == 0) || (*(long *)(param_3 + 0x2c0) == 0)) goto LAB_02809a30;
    FUN_028523dc(param_1,*(long *)(param_3 + 0x2c0),0);
    break;
  case 0x20006:
    lVar1 = FUN_013b3bbc(param_2 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined4 *)(lVar1 + 0x18) = uVar5;
    if ((param_3 == 0) || (*(long *)(param_3 + 0x2c0) == 0)) goto LAB_02809a30;
    FUN_0285238c(param_1,*(long *)(param_3 + 0x2c0),0);
    break;
  case 0x20007:
  case 0x20008:
  case 0x20009:
  case 0x2000a:
switchD_028097ec_caseD_20007:
    local_48 = thunk_FUN_00d48444(
                                 Method_UnityEngine_Timeline_Extrapolation_<>c_<SortClipsByStartTime>b__2_0__
                                 );
    uStack_40 = 0xffffffffffffffff;
    local_38 = param_4;
    uVar4 = FUN_017a7f78(&local_48,0);
    uVar2 = thunk_FUN_00d48444(
                              System_Collections_Generic_Dictionary<int,_TextColorGradient>_TypeInfo
                              );
    uVar3 = thunk_FUN_00d48444(StringLiteral_5497);
    uVar4 = FUN_01600424(uVar2,uVar4,uVar3,0);
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar2 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar3 = thunk_FUN_00d48444(System_Func<JsonProperty,_int>_TypeInfo);
    FUN_016ec624(uVar2,uVar4,uVar3,0);
    uVar4 = thunk_FUN_00d48444(StringLiteral_3398);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar2,uVar4);
  case 0x2000b:
    lVar1 = FUN_013b3bbc(param_2 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined4 *)(lVar1 + 0x34) = uVar5;
    if ((param_3 == 0) || (*(long *)(param_3 + 0x2c0) == 0)) goto LAB_02809a30;
    FUN_028532c4(param_1,*(long *)(param_3 + 0x2c0),0);
    goto LAB_02809960;
  case 0x2000c:
    lVar1 = FUN_013b3bbc(param_2 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined4 *)(lVar1 + 0x38) = uVar5;
    if ((param_3 == 0) || (*(long *)(param_3 + 0x2c0) == 0)) goto LAB_02809a30;
    FUN_0285335c(param_1,*(long *)(param_3 + 0x2c0),0);
LAB_02809960:
    uVar4 = 8;
    goto LAB_02809964;
  default:
    if (param_4 == 0x1000a) {
      lVar1 = FUN_013b3bbc(param_2,*(undefined8 *)StringLiteral_10902);
      *(undefined4 *)(lVar1 + 0x78) = uVar5;
      if (param_3 == 0) goto LAB_02809a30;
      uVar4 = 0x818;
    }
    else {
      if (param_4 != 0x7000a) goto switchD_028097ec_caseD_20007;
      lVar1 = FUN_013b3bbc(param_2 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      *(undefined4 *)(lVar1 + 0x90) = uVar5;
      if (param_3 == 0) goto LAB_02809a30;
      uVar4 = 0x1000;
    }
    goto LAB_02809964;
  }
  uVar4 = 0x908;
LAB_02809964:
  FUN_0274a398(param_3,uVar4,0);
  return;
}


