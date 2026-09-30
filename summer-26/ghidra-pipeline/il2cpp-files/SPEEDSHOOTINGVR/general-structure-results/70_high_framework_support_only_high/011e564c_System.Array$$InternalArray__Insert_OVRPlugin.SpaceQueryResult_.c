/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 011e564c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_SpaceQueryResult>
               (undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x29;
  
  lVar4 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(unaff_x29 + -0x28) = param_2;
  plVar7 = *(long **)(param_3 + 0x38);
  if (plVar7 == (long *)0x0) {
    FUN_00fdc2e4(PTR_DAT_0234c0c0);
    plVar7 = *(long **)(param_3 + 0x38);
    if (plVar7 == (long *)0x0) {
      FUN_0103c2a0(param_3);
      plVar7 = *(long **)(param_3 + 0x38);
    }
  }
  lVar5 = *plVar7;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  iVar2 = *(int *)(lVar5 + 0xfc);
  if (*(int *)(*(long *)PTR_DAT_0234c0c0 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar6 = OVRSimpleJSON_JSONObject_<>c__DisplayClass21_0___ctor(0);
  plVar7 = *(long **)(param_3 + 0x38);
  lVar5 = *plVar7;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
    plVar7 = *(long **)(param_3 + 0x38);
  }
  lVar1 = plVar7[1];
  iVar3 = *(int *)(*plVar7 + 0x28);
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x18) = uVar6;
  if (-1 < iVar3) {
    param_2 = unaff_x29 + -0x28;
  }
  FUN_00fdce18(lVar5,lVar1,(long)&stack0x00000000 - ((ulong)(iVar2 + 0x10) + 0xf & 0x1fffffff0),
               param_2,unaff_x29 + -0x20,unaff_x29 + -0x10);
  FUN_01dc3848(param_1,*(undefined8 *)(unaff_x29 + -0x10),0);
  if (*(long *)(lVar4 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


