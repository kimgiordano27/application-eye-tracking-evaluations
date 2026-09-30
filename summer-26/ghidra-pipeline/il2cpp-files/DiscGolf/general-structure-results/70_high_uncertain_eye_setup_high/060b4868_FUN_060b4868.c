/*
FUNCTION_NAME: FUN_060b4868
ENTRY_POINT: 060b4868
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_060b4868(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_38;
  
  if ((DAT_06dc4f96 & 1) == 0) {
    FUN_02d965b8(Method_System_Linq_Enumerable_Last<KerningPair>__);
    FUN_02d965b8(OVRPlugin_SkeletonType_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_94_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fcc80);
    FUN_02d965b8(PTR_DAT_069fcca8);
    FUN_02d965b8(PTR_DAT_069fccb8);
    DAT_06dc4f96 = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    lVar8 = *(long *)(param_1 + 0xc);
    uVar4 = FUN_0536c9cc(*(undefined8 *)(param_1 + 8),0);
    if ((uVar4 & 1) != 0) {
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar5 = thunk_FUN_02dd3144();
      uVar6 = thunk_FUN_02dfd288(Method_System_Linq_Enumerable_Max<MemberMap>__);
      uVar7 = thunk_FUN_02dfd288(Method_System_Net_Mail_DomainLiteralReader_ReadReverse__);
      FUN_0544bfcc(uVar5,uVar6,uVar7,0);
      uVar6 = thunk_FUN_02dfd288(Method_System_Linq_Enumerable_LastOrDefault<MemberInfo>__);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar5,uVar6);
    }
    if (param_1[10] < 1) {
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar5 = thunk_FUN_02dd3144();
      uVar6 = thunk_FUN_02dfd288(Method_System_Linq_Enumerable_Max<DebugUI_Widget>__);
      uVar7 = thunk_FUN_02dfd288(Method_System_Linq_Enumerable_OfType<EnumMemberAttribute>__);
      FUN_0544bfcc(uVar5,uVar6,uVar7,0);
      uVar6 = thunk_FUN_02dfd288(Method_System_Linq_Enumerable_LastOrDefault<MemberInfo>__);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar5,uVar6);
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar8 = FUN_060b2f94(lVar8,*(undefined8 *)(param_1 + 8));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_38 = FUN_0481d028(lVar8,*(undefined8 *)PTR_DAT_069fccb8);
    uVar4 = FUN_047e6248(&local_38,*(undefined8 *)PTR_DAT_069fcca8);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = local_38;
      LeanTween__value(param_1 + 0xe,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031f9160(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)Method_System_Linq_Enumerable_Last<KerningPair>__);
      return;
    }
  }
  uVar5 = FUN_047e6288(&local_38,*(undefined8 *)PTR_DAT_069fcc80);
  uVar4 = FUN_0536c9cc(uVar5,0);
  puVar3 = OVRPlugin_SkeletonType_TypeInfo;
  if ((uVar4 & 1) == 0) {
    iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
    *param_1 = -2;
    if (iVar1 == 0) {
      thunk_FUN_02df485c();
    }
    FUN_040b19d8(param_1 + 2,uVar5,*(undefined8 *)puVar3);
    return;
  }
  thunk_FUN_02dfd288(Method_System_Security_Cryptography_CryptoConfig_EncodeLongNumber__);
  lVar8 = thunk_FUN_02dd3144();
  uVar5 = thunk_FUN_02dfd288(Method_System_Linq_Enumerable_Last<object>__);
  FUN_06031124(lVar8,45999,uVar5,0);
  *(undefined4 *)(lVar8 + 0x90) = 45999;
  uVar5 = thunk_FUN_02dfd288(Method_System_Linq_Enumerable_LastOrDefault<MemberInfo>__);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(lVar8,uVar5);
}


