/*
FUNCTION_NAME: FUN_02202a48
ENTRY_POINT: 02202a48
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined1  [16] FUN_02202a48(int *param_1,undefined4 param_2)

{
  double dVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar3 = 0;
  uVar8 = 0;
  switch(param_2) {
  case 0:
    goto switchD_02202a84_caseD_0;
  default:
    local_30 = param_2;
    uVar5 = thunk_FUN_00d48444(Method_OVRManager_<>c_<FindMainCamera>b__467_0__);
    uVar5 = thunk_FUN_00d61fa0(uVar5,&local_30);
    uVar6 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<XRBaseInteractable>_Add__);
    uVar5 = FUN_015f6780(uVar6,uVar5,0);
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar7 = thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__);
    FUN_016ec624(uVar6,uVar5,uVar7,0);
    uVar5 = thunk_FUN_00d48444(
                              Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<byte[]>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,uVar5);
  case 3:
    uVar2 = FUN_02204860(param_1);
    uVar8 = 0;
    uVar3 = (ulong)(uVar2 & 1) << 0x20 | 3;
    goto switchD_02202a84_caseD_0;
  case 4:
    if (*param_1 == 4) {
      uVar2 = (uint)*(ushort *)(param_1 + 1);
    }
    else if (*param_1 - 7U < 6) {
      uVar2 = FUN_02204a94(param_1);
    }
    else {
      uVar2 = 0;
    }
    uVar4 = (ulong)(uVar2 & 0xffff);
    uVar3 = 4;
    goto LAB_02202ba0;
  case 5:
    uVar4 = FUN_02204a94(param_1);
    uVar3 = 5;
    goto LAB_02202b50;
  case 6:
    uVar4 = FUN_02204a94(param_1);
    uVar3 = 6;
LAB_02202b50:
    uVar8 = 0;
    uVar3 = uVar3 | (uVar4 & 0xff) << 0x20;
    goto switchD_02202a84_caseD_0;
  case 7:
  case 8:
    uVar4 = FUN_02204a94(param_1);
    uVar3 = 7;
LAB_02202ba0:
    uVar8 = 0;
    uVar3 = uVar3 | (uVar4 & 0xffff) << 0x20;
    goto switchD_02202a84_caseD_0;
  case 9:
  case 10:
    uVar4 = FUN_02204a94(param_1);
    uVar3 = 9;
    goto LAB_02202ac4;
  case 0xb:
    uVar3 = FUN_02204a94(param_1);
    uVar9 = 0xb;
    break;
  case 0xc:
    uVar3 = FUN_02204b4c(param_1);
    uVar9 = 0xc;
    break;
  case 0xd:
    dVar1 = (double)FUN_02204bf8(param_1,0);
    uVar3 = 0xd;
    uVar4 = (ulong)(uint)(float)dVar1;
LAB_02202ac4:
    uVar8 = 0;
    uVar3 = uVar3 | uVar4 << 0x20;
    goto switchD_02202a84_caseD_0;
  case 0xe:
    uVar3 = FUN_02204bf8(param_1,0);
    uVar9 = 0xe;
  }
  uVar8 = uVar3 >> 0x20;
  uStack_2c = (undefined4)uVar3;
  uVar3 = CONCAT44(uStack_2c,uVar9);
switchD_02202a84_caseD_0:
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar3;
  return auVar10;
}


