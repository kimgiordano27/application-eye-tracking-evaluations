/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$get_IsCreated
ENTRY_POINT: 05ebc514
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__get_IsCreated(ushort *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long *plVar8;
  byte unaff_w23;
  
  if ((*param_1 & 1) == 0) {
    FUN_040b1acc();
  }
  lVar4 = thunk_FUN_040b4efc();
  FUN_05325ed8(lVar4,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118));
  puVar3 = PTR_DAT_092b92f0;
  puVar2 = PTR_DAT_0928d3e8;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 0x18) = unaff_x20;
    thunk_FUN_040ec700();
    *(undefined8 *)(lVar4 + 0x20) = unaff_x21;
    thunk_FUN_040ec700();
    lVar1 = unaff_x20[0xd];
    plVar8 = unaff_x20 + 0xf;
    lVar7 = *plVar8;
    *(byte *)(lVar4 + 0x28) = unaff_w23 & 1;
    *(int *)(unaff_x20 + 0xd) = (int)lVar1 + 1;
    *(long *)(lVar4 + 0x10) = lVar7;
    thunk_FUN_040ec700();
    uVar5 = (**(code **)(*unaff_x20 + 0x188))();
    uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
    FUN_0567191c(uVar6,lVar4,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120),
                 0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar4 = FUN_073037b0(uVar5,uVar6,0);
    *plVar8 = lVar4;
    thunk_FUN_040ec700(plVar8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


