/*
FUNCTION_NAME: FUN_03a9ec74
ENTRY_POINT: 03a9ec74
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_03a9ec74(long param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar1 = StringLiteral_8531;
  if ((DAT_04838f14 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_8532);
    thunk_FUN_01efb3a4(StringLiteral_8501);
    thunk_FUN_01efb3a4(Method_Unity_Burst_BurstCompiler_GetILPPMethodFunctionPointer__);
    thunk_FUN_01efb3a4(StringLiteral_8533);
    thunk_FUN_01efb3a4(StringLiteral_8534);
    thunk_FUN_01efb3a4(StringLiteral_8531);
    DAT_04838f14 = 1;
  }
  lVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(lVar4,0);
  FUN_03a9cbac(param_1);
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(StringLiteral_7830);
    FUN_034efd20(uVar8,uVar6,0);
  }
  else if ((*(int *)(param_1 + 0x20) == 2) || (*(int *)(param_1 + 0x20) == 0x17)) {
    if (param_3 - 1U < 0xffff) {
      if (*(char *)(param_1 + 0x19) == '\0') {
        lVar5 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_8501);
        FUN_03a0f668(lVar5,param_4,param_5,0);
        *(long *)(lVar5 + 0x30) = param_1;
        thunk_FUN_01f51358((long *)(lVar5 + 0x30),param_1);
        *(undefined4 *)(lVar5 + 0x38) = 1;
        *(int *)(lVar5 + 0x80) = param_3;
        puVar3 = StringLiteral_8534;
        puVar2 = StringLiteral_8532;
        puVar1 = Method_Unity_Burst_BurstCompiler_GetILPPMethodFunctionPointer__;
        if (lVar4 != 0) {
          plVar9 = (long *)(lVar4 + 0x10);
          *plVar9 = lVar5;
          thunk_FUN_01f51358(plVar9,lVar5);
          lVar5 = FUN_03a76b00(param_2,0);
          uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
          System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                    (uVar6,lVar4,*(undefined8 *)puVar3,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (DAT_0482fd44 == '\0') {
            thunk_FUN_01efb3a4(Method_Unity_Burst_BurstCompiler_GetILPPMethodFunctionPointer__);
            DAT_0482fd44 = '\x01';
          }
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar4 = *(long *)puVar1;
          }
          if (lVar5 != 0) {
            FUN_0277c8b4(lVar5,uVar6,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8),
                         *(undefined8 *)StringLiteral_8533);
            return *plVar9;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
      uVar8 = thunk_FUN_01f117cc();
      FUN_0356ad6c(uVar8,0);
    }
    else {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar8 = thunk_FUN_01f117cc();
      uVar6 = thunk_FUN_01efb3a4(Method_System_Text_EncoderNLS_GetBytes__);
      uVar7 = thunk_FUN_01efb3a4(StringLiteral_8535);
      FUN_034f3578(uVar8,uVar6,uVar7,0);
    }
  }
  else {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
    uVar8 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(StringLiteral_8536);
    FUN_0356663c(uVar8,uVar6,0);
  }
  uVar6 = thunk_FUN_01efb3a4(StringLiteral_8537);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar8,uVar6);
}


