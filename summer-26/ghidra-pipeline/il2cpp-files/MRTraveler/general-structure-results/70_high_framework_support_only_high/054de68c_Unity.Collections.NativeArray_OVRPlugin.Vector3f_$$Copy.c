/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 054de68c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
               (long param_1,int param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  if (param_1 == 0) {
LAB_054de868:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar10 = (long)param_2;
  while( true ) {
    uVar2 = uVar10 + 1;
    uVar5 = (uint)*(undefined8 *)(param_1 + 0x18);
    if (uVar5 <= (uint)uVar2) break;
    lVar8 = param_1 + uVar2 * 0x18;
    uVar9 = *(undefined8 *)(lVar8 + 0x30);
    uVar13 = *(undefined8 *)(lVar8 + 0x28);
    uVar11 = *(undefined8 *)(lVar8 + 0x20);
    if ((long)param_2 <= (long)uVar10) {
      bVar3 = uVar5 <= (uint)uVar10;
      while( true ) {
        if (bVar3) goto LAB_054de864;
        uVar5 = (uint)uVar10;
        lVar8 = param_1 + (long)(int)uVar5 * 0x18;
        uVar6 = *(undefined8 *)(lVar8 + 0x30);
        uVar14 = *(undefined8 *)(lVar8 + 0x28);
        uVar12 = *(undefined8 *)(lVar8 + 0x20);
        if (param_4 == 0) goto LAB_054de868;
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_03cf1244();
        }
        in_stack_000000e0 = uVar12;
        in_stack_000000e8 = uVar14;
        in_stack_000000f0 = uVar6;
        in_stack_00000100 = uVar11;
        in_stack_00000108 = uVar13;
        in_stack_00000110 = uVar9;
        iVar4 = (**(code **)(param_4 + 0x18))
                          (*(undefined8 *)(param_4 + 0x40),&stack0x00000100,&stack0x000000e0,
                           *(undefined8 *)(param_4 + 0x28));
        if (-1 < iVar4) break;
        if (*(uint *)(param_1 + 0x18) <= uVar5) goto LAB_054de864;
        uVar12 = *(undefined8 *)(lVar8 + 0x28);
        uVar6 = *(undefined8 *)(lVar8 + 0x20);
        if (*(uint *)(param_1 + 0x18) <= uVar5 + 1) goto LAB_054de864;
        lVar7 = param_1 + (long)(int)(uVar5 + 1) * 0x18;
        *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar8 + 0x30);
        *(undefined8 *)(lVar7 + 0x28) = uVar12;
        *(undefined8 *)(lVar7 + 0x20) = uVar6;
        thunk_FUN_03d233cc(lVar7 + 0x20,0);
        uVar5 = uVar5 - 1;
        uVar10 = (ulong)uVar5;
        if ((int)uVar5 < param_2) break;
        bVar3 = *(uint *)(param_1 + 0x18) <= uVar5;
      }
      uVar5 = *(uint *)(param_1 + 0x18);
    }
    uVar1 = (int)uVar10 + 1;
    if (uVar5 <= uVar1) break;
    lVar8 = param_1 + (long)(int)uVar1 * 0x18;
    *(undefined8 *)(lVar8 + 0x30) = uVar9;
    *(undefined8 *)(lVar8 + 0x28) = uVar13;
    *(undefined8 *)(lVar8 + 0x20) = uVar11;
    thunk_FUN_03d233cc(lVar8 + 0x20,0);
    uVar10 = uVar2;
    if (uVar2 == (long)param_3) {
      return;
    }
  }
LAB_054de864:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


