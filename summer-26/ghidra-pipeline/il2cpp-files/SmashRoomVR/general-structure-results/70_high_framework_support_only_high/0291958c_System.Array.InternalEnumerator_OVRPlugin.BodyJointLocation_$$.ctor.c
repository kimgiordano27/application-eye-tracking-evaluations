/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$.ctor
ENTRY_POINT: 0291958c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>___ctor
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
  
  if (param_2 < param_3) {
    if (param_1 == 0) {
LAB_02919750:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar10 = (long)param_2;
    do {
      uVar2 = uVar10 + 1;
      uVar5 = (uint)*(undefined8 *)(param_1 + 0x18);
      if (uVar5 <= (uint)uVar2) {
LAB_0291974c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar8 = param_1 + uVar2 * 0x18;
      uVar9 = *(undefined8 *)(lVar8 + 0x30);
      uVar13 = *(undefined8 *)(lVar8 + 0x28);
      uVar11 = *(undefined8 *)(lVar8 + 0x20);
      if ((long)param_2 <= (long)uVar10) {
        bVar3 = uVar5 <= (uint)uVar10;
        while( true ) {
          if (bVar3) goto LAB_0291974c;
          uVar5 = (uint)uVar10;
          lVar8 = param_1 + (long)(int)uVar5 * 0x18;
          uVar6 = *(undefined8 *)(lVar8 + 0x30);
          uVar14 = *(undefined8 *)(lVar8 + 0x28);
          uVar12 = *(undefined8 *)(lVar8 + 0x20);
          if (param_4 == 0) goto LAB_02919750;
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_01ae9e74();
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
          if (*(uint *)(param_1 + 0x18) <= uVar5) goto LAB_0291974c;
          uVar12 = *(undefined8 *)(lVar8 + 0x28);
          uVar6 = *(undefined8 *)(lVar8 + 0x20);
          if (*(uint *)(param_1 + 0x18) <= uVar5 + 1) goto LAB_0291974c;
          lVar7 = param_1 + (long)(int)(uVar5 + 1) * 0x18;
          uVar5 = uVar5 - 1;
          uVar10 = (ulong)uVar5;
          *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar8 + 0x30);
          *(undefined8 *)(lVar7 + 0x28) = uVar12;
          *(undefined8 *)(lVar7 + 0x20) = uVar6;
          if ((int)uVar5 < param_2) break;
          bVar3 = *(uint *)(param_1 + 0x18) <= uVar5;
        }
        uVar5 = *(uint *)(param_1 + 0x18);
      }
      uVar1 = (int)uVar10 + 1;
      if (uVar5 <= uVar1) goto LAB_0291974c;
      lVar8 = param_1 + (long)(int)uVar1 * 0x18;
      *(undefined8 *)(lVar8 + 0x30) = uVar9;
      *(undefined8 *)(lVar8 + 0x28) = uVar13;
      *(undefined8 *)(lVar8 + 0x20) = uVar11;
      uVar10 = uVar2;
    } while (uVar2 != (long)param_3);
  }
  return;
}


