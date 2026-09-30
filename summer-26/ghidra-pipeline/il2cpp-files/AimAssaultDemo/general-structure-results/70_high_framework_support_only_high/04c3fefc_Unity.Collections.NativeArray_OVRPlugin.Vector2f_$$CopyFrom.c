/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyFrom
ENTRY_POINT: 04c3fefc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyFrom(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plStack_20;
  long lStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  puVar4 = PTR_DAT_07d990d0;
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  if ((DAT_082567b3 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d98ef0);
    FUN_0373b518(PTR_DAT_07d990d0);
    FUN_0373b518(PTR_DAT_07d990e0);
    FUN_0373b518(PTR_DAT_07d98798);
    FUN_0373b518(PTR_DAT_07d990d8);
    DAT_082567b3 = 1;
  }
  puVar2 = PTR_DAT_07d98798;
  uVar10 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8) + 0xfc) + 0xf
           & 0x1fffffff0;
  plVar12 = (long *)((long)&plStack_20 - uVar10);
  plVar11 = (long *)((long)plVar12 - uVar10);
  lVar8 = *(long *)(*param_1 + 0x5e0);
  plStack_20 = plVar12;
  (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,param_1,&plStack_20,plVar12);
  puVar5 = PTR_DAT_07d990d8;
  puVar3 = PTR_DAT_07d98ef0;
  lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  puVar9 = *(undefined8 **)(lVar8 + 0x18);
  plStack_20 = *(long **)puVar4;
  if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
    plVar12 = (long *)*plVar12;
  }
  lStack_18 = (long)plVar12;
  (*(code *)puVar9[2])(*puVar9,puVar9,param_1,&plStack_20,&uStack_10);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20))
            (param_1,uStack_10);
  lVar8 = *(long *)(*param_1 + 0x5f0);
  plStack_20 = plVar11;
  (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,param_1,&plStack_20,plVar11);
  puVar4 = PTR_DAT_07d990e0;
  lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  puVar9 = *(undefined8 **)(lVar8 + 0x18);
  plStack_20 = *(long **)puVar2;
  if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
    plVar11 = (long *)*plVar11;
  }
  lStack_18 = (long)plVar11;
  (*(code *)puVar9[2])(*puVar9,puVar9,param_1,&plStack_20,&uStack_10);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30))
            (param_1,uStack_10);
  uVar6 = FUN_0426ddd8(0,param_1,*(undefined8 *)puVar5,*(undefined8 *)puVar3);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38))(param_1,uVar6);
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  uVar6 = thunk_FUN_037788cc();
  lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  (*(code *)**(undefined8 **)(lVar8 + 0x50))(uVar6,param_1,*(undefined8 *)(lVar8 + 0x40));
  uVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58))
                    (param_1,*(undefined8 *)puVar4,uVar6);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x60))(param_1,uVar6);
  uVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x68))(param_1);
  uVar7 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x70))(param_1);
  thunk_FUN_07331220(param_1,uVar6,uVar7,0);
  uVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x78))(param_1);
  uVar7 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x70))(param_1);
  thunk_FUN_07331220(param_1,uVar6,uVar7,0);
  uVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80))(param_1);
  uVar7 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x70))(param_1);
  thunk_FUN_07331220(param_1,uVar6,uVar7,0);
  if (*(long *)(lVar1 + 0x28) == lStack_8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


