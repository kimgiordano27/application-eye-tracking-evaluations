/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Populate
ENTRY_POINT: 01701b00
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonSerializer__Populate
               (long param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if ((DAT_0377898e & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(StringLiteral_5038);
    DAT_0377898e = 1;
  }
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
  if (param_1 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar1 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar2 = thunk_FUN_00d48444(Meta_Voice_NLayer_IMpegFrame_TypeInfo);
    FUN_016ec5b8(uVar1,uVar2);
  }
  else {
    if (param_3 < 0) {
      thunk_FUN_00d48444(StringLiteral_8570);
      uVar1 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar2 = thunk_FUN_00d48444(Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__);
      puVar4 = StringLiteral_7315;
    }
    else if (param_2 < 0) {
      thunk_FUN_00d48444(StringLiteral_8570);
      uVar1 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar2 = thunk_FUN_00d48444(StringLiteral_7680);
      puVar4 = StringLiteral_9047;
    }
    else {
      if (param_2 <= *(int *)(param_1 + 0x18) - param_3) {
        FUN_00bdd494();
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_017018d4(0,0,param_4);
        return;
      }
      thunk_FUN_00d48444(StringLiteral_8570);
      uVar1 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar2 = thunk_FUN_00d48444(StringLiteral_7680);
      puVar4 = Method_System_Nullable<RaycastResult>__ctor__;
    }
    uVar3 = thunk_FUN_00d48444(puVar4);
    FUN_016efd4c(uVar1,uVar2,uVar3);
  }
  uVar2 = thunk_FUN_00d48444(PTR_DAT_033f23d8);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar1,uVar2);
}


