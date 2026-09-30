/*
FUNCTION_NAME: FUN_02809044
ENTRY_POINT: 02809044
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_02809044(long param_1,long param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  
  if ((DAT_03788b50 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10902);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_114_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9770);
    DAT_03788b50 = 1;
  }
  if (param_3 < 0x10008) {
    if (param_3 == 0x10001) {
      lVar1 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
      *(undefined8 *)(lVar1 + 0x10) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      uVar4 = 0x18;
      goto LAB_02809698;
    }
    if (param_3 == 0x10002) {
      lVar1 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
      *(undefined8 *)(lVar1 + 0x18) = param_4;
    }
    else {
      if (param_3 != 0x10007) goto switchD_028090e4_caseD_20008;
      lVar1 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
      *(undefined8 *)(lVar1 + 0x5c) = param_4;
    }
joined_r0x02809160:
    if (param_2 == 0) {
LAB_02809760:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar4 = 0x818;
  }
  else {
    switch(param_3) {
    case 0x20007:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 0x1c) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_02851ee4(lVar1,uVar4,0);
      break;
    case 0x20008:
    case 0x2000a:
    case 0x2000b:
    case 0x2000c:
    case 0x2000d:
    case 0x2000f:
    case 0x2001d:
switchD_028090e4_caseD_20008:
      local_48 = thunk_FUN_00d48444(
                                   Method_UnityEngine_Timeline_Extrapolation_<>c_<SortClipsByStartTime>b__2_0__
                                   );
      uStack_40 = 0xffffffffffffffff;
      local_38 = param_3;
      uVar4 = FUN_017a7f78(&local_48,0);
      uVar2 = thunk_FUN_00d48444(Method_System_Uri_CreateThis__);
      uVar3 = thunk_FUN_00d48444(StringLiteral_5497);
      uVar4 = FUN_01600424(uVar2,uVar4,uVar3,0);
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar2 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar3 = thunk_FUN_00d48444(System_Func<JsonProperty,_int>_TypeInfo);
      FUN_016ec624(uVar2,uVar4,uVar3,0);
      uVar4 = thunk_FUN_00d48444(StringLiteral_4817);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar2,uVar4);
    case 0x20009:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 0x28) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_028533f4(lVar1,uVar4,0);
      break;
    case 0x2000e:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 0x40) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_02853714(lVar1,uVar4,0);
      break;
    case 0x20010:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 0x4c) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_02851e3c(lVar1,uVar4,0);
      break;
    case 0x20011:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 0x54) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_02852094(lVar1,uVar4,0);
      break;
    case 0x20012:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 0x5c) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_02851fa8(lVar1,uVar4,0);
      break;
    case 0x20013:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 100) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_02852088(lVar1,uVar4,0);
      break;
    case 0x20014:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 0x6c) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_0285207c(lVar1,uVar4,0);
      break;
    case 0x20015:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 0x74) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_028539b8(lVar1,uVar4,0);
      break;
    case 0x20016:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 0x7c) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_028538a4(lVar1,uVar4,0);
      break;
    case 0x20017:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 0x84) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_02853be0(lVar1,uVar4,0);
      break;
    case 0x20018:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 0x8c) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_02853acc(lVar1,uVar4,0);
      break;
    case 0x20019:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 0x94) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_02852234(lVar1,uVar4,0);
      break;
    case 0x2001a:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 0x9c) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_0285218c(lVar1,uVar4,0);
      break;
    case 0x2001b:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 0xa4) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_02852228(lVar1,uVar4,0);
      break;
    case 0x2001c:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 0xac) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_0285221c(lVar1,uVar4,0);
      break;
    case 0x2001e:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 0xb8) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_02851ed8(lVar1,uVar4,0);
      break;
    case 0x2001f:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 0xc0) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_02851ecc(lVar1,uVar4,0);
      break;
    case 0x20020:
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined8 *)(lVar1 + 200) = param_4;
      if (param_2 == 0) goto LAB_02809760;
      lVar1 = *(long *)(param_2 + 0x2c0);
      uVar4 = FUN_0281dbd4(param_4,0);
      if (lVar1 == 0) goto LAB_02809760;
      FUN_02853584(lVar1,uVar4,0);
      break;
    default:
      switch(param_3) {
      case 0x70003:
        lVar1 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        *(undefined8 *)(lVar1 + 0x40) = param_4;
        break;
      case 0x70004:
        lVar1 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        *(undefined8 *)(lVar1 + 0x48) = param_4;
        break;
      case 0x70005:
      case 0x70006:
      case 0x70007:
        goto switchD_028090e4_caseD_20008;
      case 0x70008:
        lVar1 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        *(undefined8 *)(lVar1 + 0x80) = param_4;
        break;
      case 0x70009:
        lVar1 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        *(undefined8 *)(lVar1 + 0x88) = param_4;
        break;
      default:
        if (param_3 != 0x1000d) goto switchD_028090e4_caseD_20008;
        lVar1 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
        *(undefined8 *)(lVar1 + 0x84) = param_4;
        goto joined_r0x02809160;
      }
      if (param_2 == 0) goto LAB_02809760;
      uVar4 = 0x880;
      goto LAB_02809698;
    }
    uVar4 = 8;
  }
LAB_02809698:
  FUN_0274a398(param_2,uVar4,0);
  return;
}


