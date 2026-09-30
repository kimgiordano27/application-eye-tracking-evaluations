/*
FUNCTION_NAME: FUN_051c81a8
ENTRY_POINT: 051c81a8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


undefined8 FUN_051c81a8(long *param_1,long param_2,byte param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 local_28;
  undefined4 local_18;
  byte local_14 [4];
  
  local_18 = 0;
  local_14[0] = param_3;
  if (param_3 < 0x2b) {
    if (param_3 == 0) {
      return 0;
    }
    if (param_3 == 0x2a) {
      return 0;
    }
    goto switchD_051c83a4_caseD_67;
  }
  switch(param_3) {
  case 0x61:
    uVar5 = FUN_051c886c(param_1,param_2);
    return uVar5;
  case 0x62:
    uVar2 = (**(code **)(*param_1 + 0x228))(param_1,param_2,*(undefined8 *)(*param_1 + 0x230));
    local_28 = CONCAT71(local_28._1_7_,uVar2);
    uVar5 = *(undefined8 *)(PTR_DAT_066462a0 + 0x18);
    break;
  case 99:
    if (param_2 != 0) {
      uVar4 = FUN_051db254(param_2,0);
      uVar5 = FUN_051c44fc(param_1,param_2,uVar4);
      return uVar5;
    }
LAB_051c862c:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  case 100:
    local_28 = FUN_051c9248(param_1,param_2);
    uVar5 = *(undefined8 *)(PTR_DAT_066462a0 + 0x80);
    break;
  case 0x65:
                    /* WARNING: Could not recover jumptable at 0x051c8408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*param_1 + 0x238))(param_1,param_2,0,0,*(undefined8 *)(*param_1 + 0x240));
    return uVar5;
  case 0x66:
    uVar4 = FUN_051c9100(param_1,param_2);
    local_28 = CONCAT44(local_28._4_4_,uVar4);
    uVar5 = *(undefined8 *)(PTR_DAT_066462a0 + 0x78);
    break;
  case 0x68:
    uVar5 = FUN_051c8ab4(param_1,param_2);
    return uVar5;
  case 0x69:
    uVar4 = FUN_051c8630(param_1,param_2);
    local_28 = CONCAT44(local_28._4_4_,uVar4);
    uVar5 = *(undefined8 *)(PTR_DAT_066462a0 + 0x48);
    break;
  case 0x6b:
    uVar3 = (**(code **)(*param_1 + 0x218))(param_1,param_2,*(undefined8 *)(*param_1 + 0x220));
    local_28 = CONCAT62(local_28._2_6_,uVar3);
    uVar5 = *(undefined8 *)(PTR_DAT_066462a0 + 0x38);
    break;
  case 0x6c:
    local_28 = FUN_051c8f6c(param_1,param_2);
    uVar5 = *(undefined8 *)(PTR_DAT_066462a0 + 0x68);
    break;
  case 0x6e:
    uVar5 = FUN_051c89e8(param_1,param_2,0xffffffff);
    return uVar5;
  case 0x6f:
    if (param_2 == 0) goto LAB_051c862c;
    cVar1 = FUN_051db254(param_2,0);
    local_28 = CONCAT71(local_28._1_7_,cVar1 != '\0');
    uVar5 = *(undefined8 *)(PTR_DAT_066462a0 + 0x28);
    break;
  case 0x70:
    uVar5 = *(undefined8 *)(*param_1 + 0x260);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 600);
    goto LAB_051c8590;
  case 0x71:
    uVar5 = *(undefined8 *)(*param_1 + 0x250);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x248);
LAB_051c8590:
                    /* WARNING: Could not recover jumptable at 0x051c85ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_4,uVar5);
    return uVar5;
  case 0x73:
    uVar5 = FUN_051c8760(param_1,param_2);
    return uVar5;
  case 0x78:
    uVar5 = FUN_051c894c(param_1,param_2,0xffffffff);
    return uVar5;
  case 0x79:
    uVar5 = FUN_051c93c4(param_1,param_2);
    return uVar5;
  case 0x7a:
    uVar5 = FUN_051c994c(param_1,param_2);
    return uVar5;
  default:
    if (param_3 == 0x44) {
      uVar5 = FUN_051c8bcc(param_1,param_2);
      return uVar5;
    }
  case 0x67:
  case 0x6a:
  case 0x6d:
  case 0x72:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
switchD_051c83a4_caseD_67:
    uVar5 = thunk_FUN_02db45e8(PTR_DAT_06646310);
    uVar5 = FUN_02d4dd2c(uVar5,8);
    FUN_0291d7ec();
    uVar6 = thunk_FUN_02db45e8(PlayFab_ClientModels_WriteEventResponse_var);
    FUN_0291b630(uVar5,0,uVar6);
    uVar6 = FUN_04f73bf4(local_14,0);
    FUN_0291b630(uVar5,1,uVar6);
    uVar6 = thunk_FUN_02db45e8(PlayFab_EventsModels_WriteEventsRequest_var);
    FUN_0291b630(uVar5,2,uVar6);
    FUN_0291d7ec(param_2);
    local_18 = FUN_051d45d0(param_2,0);
    uVar6 = FUN_05000654(&local_18,0);
    FUN_0291b630(uVar5,3,uVar6);
    uVar6 = thunk_FUN_02db45e8(PlayFab_EventsModels_WriteEventsResponse_var);
    FUN_0291b630(uVar5,4,uVar6);
    FUN_0291d7ec(param_2);
    local_18 = FUN_051d4668(param_2,0);
    uVar6 = FUN_05000654(&local_18,0);
    FUN_0291b630(uVar5,5,uVar6);
    uVar6 = thunk_FUN_02db45e8(PTR_DAT_066602a0);
    FUN_0291b630(uVar5,6,uVar6);
    FUN_0291d7ec(param_2);
    uVar6 = FUN_051d45c8(param_2,0);
    thunk_FUN_02db45e8(UnityEngine_SphereCollider_var);
    FUN_0291cc84();
    uVar6 = FUN_051ddc98(uVar6,0xffffffff,0);
    FUN_0291b630(uVar5,7,uVar6);
    uVar5 = FUN_04e80ce4(uVar5,0);
    thunk_FUN_02db45e8(PTR_DAT_06647b18);
    uVar6 = thunk_FUN_02d8a638();
    FUN_0503a078(uVar6,uVar5,0);
    uVar5 = thunk_FUN_02db45e8(PlayFab_ClientModels_WriteTitleEventRequest_var);
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar6,uVar5);
  }
  uVar5 = thunk_FUN_02d8a270(uVar5,&local_28);
  return uVar5;
}


