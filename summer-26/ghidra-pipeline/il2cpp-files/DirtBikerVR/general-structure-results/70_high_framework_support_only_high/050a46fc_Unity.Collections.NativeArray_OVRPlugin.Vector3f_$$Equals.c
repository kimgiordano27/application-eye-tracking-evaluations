/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Equals
ENTRY_POINT: 050a46fc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Equals
               (long param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  bool in_ZR;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack0000000000000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a44ec with catch @ 050a46fc
                        */
  uStack0000000000000050 = 0;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a4538 with catch @ 050a4700
                        */
  if (in_ZR) {
    return;
  }
  if (param_1 == 0) {
LAB_050a4860:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* try { // try from 050a471c to 051a471f has its CatchHandler @ 050a4728 */
  if ((param_3 < *(uint *)(param_1 + 0x18)) && (param_4 < *(uint *)(param_1 + 0x18))) {
                    /* catch() { ... } // from try @ 050a471c with catch @ 050a4728 */
                    /* try { // try from 050a472c to 051a4733 has its CatchHandler @ 050a473c */
    if (param_2 == 0) goto LAB_050a4860;
                    /* try { // try from 050a4734 to 051a473f has its CatchHandler @ 050a43bc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 050a472c with catch @ 050a473c
                        */
    lVar5 = param_1 + (long)(int)param_3 * 0x18;
    lVar4 = param_1 + (long)(int)param_4 * 0x18;
    uVar2 = *(undefined8 *)(lVar5 + 0x30);
    uVar8 = *(undefined8 *)(lVar5 + 0x28);
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    uVar3 = *(undefined8 *)(lVar4 + 0x30);
    uVar9 = *(undefined8 *)(lVar4 + 0x28);
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    in_stack_00000060 = uVar7;
    in_stack_00000068 = uVar9;
    in_stack_00000070 = uVar3;
    in_stack_00000080 = uVar6;
    in_stack_00000088 = uVar8;
    in_stack_00000090 = uVar2;
    iVar1 = (**(code **)(param_2 + 0x18))
                      (*(undefined8 *)(param_2 + 0x40),&stack0x00000080,&stack0x00000060,
                       *(undefined8 *)(param_2 + 0x28));
    if (iVar1 < 1) {
      return;
    }
    if (param_3 < *(uint *)(param_1 + 0x18)) {
      uVar3 = *(undefined8 *)(lVar5 + 0x28);
      uVar2 = *(undefined8 *)(lVar5 + 0x20);
      uStack0000000000000050 = *(undefined8 *)(lVar5 + 0x30);
      if (param_4 < *(uint *)(param_1 + 0x18)) {
        uVar7 = *(undefined8 *)(lVar4 + 0x28);
        uVar6 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
        *(undefined8 *)(lVar5 + 0x28) = uVar7;
        *(undefined8 *)(lVar5 + 0x20) = uVar6;
        thunk_FUN_03afed3c(param_1 + 0x20 + (long)(int)param_3 * 0x18 + 8,0);
        if (param_4 < *(uint *)(param_1 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x28) = uVar3;
          *(undefined8 *)(lVar4 + 0x20) = uVar2;
          *(undefined8 *)(lVar4 + 0x30) = uStack0000000000000050;
          thunk_FUN_03afed3c(param_1 + 0x20 + (long)(int)param_4 * 0x18 + 8,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


