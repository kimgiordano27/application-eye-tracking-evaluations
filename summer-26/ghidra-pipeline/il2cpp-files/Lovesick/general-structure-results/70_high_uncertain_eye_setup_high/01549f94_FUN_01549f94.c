/*
FUNCTION_NAME: FUN_01549f94
ENTRY_POINT: 01549f94
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01549f94(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined2 local_24 [2];
  
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  if ((DAT_03777b0d & 1) == 0) {
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(StringLiteral_3287);
    thunk_FUN_00d48444(StringLiteral_11537);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vzip2q_s8__);
    thunk_FUN_00d48444(PTR_DAT_033ea790);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<MB_MaterialAndUVRect>_ToArray__);
    DAT_03777b0d = 1;
  }
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vzip2q_s8__;
  puVar3 = Method_System_Collections_Generic_List<MB_MaterialAndUVRect>_ToArray__;
  puVar1 = PTR_DAT_033ea790;
  local_24[0] = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_02020414(param_1,*(undefined8 *)puVar4,*(undefined8 *)puVar1,0);
  lVar7 = FUN_02020414(uVar6,*(undefined8 *)puVar3,*(undefined8 *)puVar1,0);
  if ((lVar7 != 0) &&
     (lVar7 = FUN_01601fc0(lVar7,*(undefined8 *)StringLiteral_11537,
                           *(undefined8 *)StringLiteral_3287,0),
     puVar2 = Newtonsoft_Json_JsonReader_State_TypeInfo, lVar7 != 0)) {
    uVar5 = FUN_015fa29c(lVar7,0,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    local_24[0] = FUN_016f95a8(uVar5,0);
    uVar6 = FUN_016e8b00(local_24,0);
    uVar8 = FUN_01603ec8(lVar7,1,0);
    lVar7 = FUN_015f5b28(uVar6,uVar8,0);
    if (lVar7 != 0) {
      if (0x16 < *(int *)(lVar7 + 0x10)) {
        FUN_01601d40(lVar7,0,0x16,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


