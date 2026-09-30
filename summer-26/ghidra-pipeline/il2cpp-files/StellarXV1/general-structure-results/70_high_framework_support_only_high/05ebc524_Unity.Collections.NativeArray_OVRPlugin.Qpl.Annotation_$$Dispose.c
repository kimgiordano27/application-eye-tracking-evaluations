/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 05ebc524
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Dispose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long *plVar7;
  byte unaff_w23;
  
  FUN_05325ed8(param_1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118));
  puVar2 = PTR_DAT_092b92f0;
  puVar1 = PTR_DAT_0928d3e8;
  if (param_1 != 0) {
    *(long **)(param_1 + 0x18) = unaff_x20;
    thunk_FUN_040ec700();
    *(undefined8 *)(param_1 + 0x20) = unaff_x21;
    thunk_FUN_040ec700();
    lVar5 = unaff_x20[0xd];
    plVar7 = unaff_x20 + 0xf;
    lVar6 = *plVar7;
    *(byte *)(param_1 + 0x28) = unaff_w23 & 1;
    *(int *)(unaff_x20 + 0xd) = (int)lVar5 + 1;
    *(long *)(param_1 + 0x10) = lVar6;
    thunk_FUN_040ec700();
    uVar3 = (**(code **)(*unaff_x20 + 0x188))();
    uVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
    FUN_0567191c(uVar4,param_1,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120),0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar5 = FUN_073037b0(uVar3,uVar4,0);
    *plVar7 = lVar5;
    thunk_FUN_040ec700(plVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


