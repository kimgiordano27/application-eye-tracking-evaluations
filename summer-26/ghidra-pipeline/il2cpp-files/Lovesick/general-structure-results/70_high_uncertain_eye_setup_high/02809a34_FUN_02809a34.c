/*
FUNCTION_NAME: FUN_02809a34
ENTRY_POINT: 02809a34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02809a34(long param_1,long param_2,int param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  
  if ((DAT_03788b52 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_137);
    thunk_FUN_00d48444(StringLiteral_10902);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_114_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9770);
    DAT_03788b52 = 1;
  }
  if (0x2000a < param_3) {
    if (param_3 < 0x20010) {
      if (param_3 == 0x2000d) {
        lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
        *(undefined4 *)(lVar1 + 0x3c) = param_4;
        if ((param_2 == 0) || (*(long *)(param_2 + 0x2c0) == 0)) goto LAB_02809e98;
        FUN_028531a4(*(long *)(param_2 + 0x2c0),param_4,0);
      }
      else {
        if (param_3 != 0x2000f) goto switchD_02809ae8_caseD_30002;
        lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
        *(undefined4 *)(lVar1 + 0x48) = param_4;
        if ((param_2 == 0) || (*(long *)(param_2 + 0x2c0) == 0)) goto LAB_02809e98;
        FUN_02852e74(*(long *)(param_2 + 0x2c0),param_4,0);
      }
LAB_02809e78:
      uVar5 = 8;
      goto LAB_02809e7c;
    }
    switch(param_3) {
    case 0x30001:
      lVar1 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
      *(undefined4 *)(lVar1 + 0x18) = param_4;
      if (param_2 == 0) goto LAB_02809e98;
LAB_02809c24:
      uVar5 = 0x808;
      goto LAB_02809e7c;
    case 0x30002:
switchD_02809ae8_caseD_30002:
      local_48 = thunk_FUN_00d48444(
                                   Method_UnityEngine_Timeline_Extrapolation_<>c_<SortClipsByStartTime>b__2_0__
                                   );
      uStack_40 = 0xffffffffffffffff;
      local_38 = param_3;
      uVar5 = FUN_017a7f78(&local_48,0);
      uVar3 = thunk_FUN_00d48444(StringLiteral_12741);
      uVar4 = thunk_FUN_00d48444(StringLiteral_5497);
      uVar5 = FUN_01600424(uVar3,uVar5,uVar4,0);
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar3 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar4 = thunk_FUN_00d48444(System_Func<JsonProperty,_int>_TypeInfo);
      FUN_016ec624(uVar3,uVar5,uVar4,0);
      uVar5 = thunk_FUN_00d48444(Method_MedleyBarCustomer_OnShowComplete__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar3,uVar5);
    case 0x30003:
      lVar1 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
      *(undefined4 *)(lVar1 + 0x2c) = param_4;
      break;
    case 0x30004:
      lVar1 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
      *(undefined4 *)(lVar1 + 0x30) = param_4;
      break;
    case 0x30005:
      lVar1 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
      *(undefined4 *)(lVar1 + 0x34) = param_4;
      break;
    case 0x30006:
      lVar1 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
      *(undefined4 *)(lVar1 + 0x38) = param_4;
      break;
    case 0x30007:
      lVar1 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
      *(undefined4 *)(lVar1 + 0x3c) = param_4;
      break;
    case 0x30008:
      lVar1 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
      *(undefined4 *)(lVar1 + 0x40) = param_4;
      break;
    case 0x30009:
      lVar1 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
      *(undefined4 *)(lVar1 + 0x44) = param_4;
      break;
    default:
      if (param_3 != 0x2001d) {
        if (param_3 != 0x7000b) goto switchD_02809ae8_caseD_30002;
        lVar1 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        *(undefined4 *)(lVar1 + 0x94) = param_4;
        if ((param_2 != 0) && (*(long *)(param_2 + 0x2c0) != 0)) {
          FUN_02853fc4(*(long *)(param_2 + 0x2c0),param_4,0);
          uVar5 = 0x48;
          goto LAB_02809e7c;
        }
        goto LAB_02809e98;
      }
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined4 *)(lVar1 + 0xb4) = param_4;
      if ((param_2 == 0) || (*(long *)(param_2 + 0x2c0) == 0)) goto LAB_02809e98;
      FUN_0285311c(*(long *)(param_2 + 0x2c0),param_4,0);
      goto LAB_02809e78;
    }
    if (param_2 != 0) {
      uVar5 = 0x800;
      goto LAB_02809e7c;
    }
    goto LAB_02809e98;
  }
  if (0x20002 < param_3) {
    if (param_3 == 0x20008) {
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined4 *)(lVar1 + 0x24) = param_4;
      if ((param_2 == 0) || (*(long *)(param_2 + 0x2c0) == 0)) goto LAB_02809e98;
      FUN_02852efc(*(long *)(param_2 + 0x2c0),param_4,0);
      goto LAB_02809c24;
    }
    if (param_3 != 0x2000a) goto switchD_02809ae8_caseD_30002;
    lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined4 *)(lVar1 + 0x30) = param_4;
    if ((param_2 == 0) || (*(long *)(param_2 + 0x2c0) == 0)) goto LAB_02809e98;
    FUN_02852dec(*(long *)(param_2 + 0x2c0),param_4,0);
    goto LAB_02809e78;
  }
  if (0x1ffff < param_3) {
    if (param_3 == 0x20000) {
      puVar2 = (undefined4 *)FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *puVar2 = param_4;
      if ((param_2 == 0) || (*(long *)(param_2 + 0x2c0) == 0)) goto LAB_02809e98;
      FUN_02853094(*(long *)(param_2 + 0x2c0),param_4,0);
    }
    else if (param_3 == 0x20001) {
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined4 *)(lVar1 + 4) = param_4;
      if ((param_2 == 0) || (*(long *)(param_2 + 0x2c0) == 0)) goto LAB_02809e98;
      FUN_02852f84(*(long *)(param_2 + 0x2c0),param_4,0);
    }
    else {
      if (param_3 != 0x20002) goto switchD_02809ae8_caseD_30002;
      lVar1 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      *(undefined4 *)(lVar1 + 8) = param_4;
      if ((param_2 == 0) || (*(long *)(param_2 + 0x2c0) == 0)) goto LAB_02809e98;
      FUN_0285300c(*(long *)(param_2 + 0x2c0),param_4,0);
    }
    goto LAB_02809e78;
  }
  switch(param_3) {
  case 0x10006:
    lVar1 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
    *(undefined4 *)(lVar1 + 0x58) = param_4;
    if (param_2 == 0) goto LAB_02809e98;
    uVar5 = 0x818;
    goto LAB_02809e7c;
  default:
    goto switchD_02809ae8_caseD_30002;
  case 0x10008:
    lVar1 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
    *(undefined4 *)(lVar1 + 100) = param_4;
    break;
  case 0x1000b:
    lVar1 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
    *(undefined4 *)(lVar1 + 0x7c) = param_4;
    break;
  case 0x1000c:
    lVar1 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
    *(undefined4 *)(lVar1 + 0x80) = param_4;
    if (param_2 == 0) goto LAB_02809e98;
    uVar5 = 0x18;
    goto LAB_02809e7c;
  }
  if (param_2 == 0) {
LAB_02809e98:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar5 = 0x810;
LAB_02809e7c:
  FUN_0274a398(param_2,uVar5,0);
  return;
}


