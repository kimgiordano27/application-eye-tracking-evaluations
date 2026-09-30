/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_Length
ENTRY_POINT: 054dfd40
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_Length(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong unaff_x28;
  ulong unaff_x29;
  ulong uVar9;
  ulong in_stack_00000000;
  long in_stack_00000008;
  
  do {
    uVar5 = (ulong)*(uint *)(unaff_x22 + 0x18);
    do {
      uVar9 = unaff_x29;
      uVar8 = (int)unaff_x28 + 1;
      if ((uint)uVar5 <= uVar8) goto LAB_054dfd98;
      lVar2 = unaff_x22 + (long)(int)uVar8 * 0x10;
      puVar4 = (undefined8 *)(lVar2 + 0x20);
      *puVar4 = unaff_x23;
      *(undefined8 *)(lVar2 + 0x28) = unaff_x24;
      thunk_FUN_03d233cc(puVar4,0);
      if (uVar9 == in_stack_00000000) {
        return;
      }
      uVar5 = *(ulong *)(unaff_x22 + 0x18);
      unaff_x29 = uVar9 + 1;
      if ((uint)uVar5 <= (uint)unaff_x29) goto LAB_054dfd98;
      lVar2 = unaff_x22 + unaff_x29 * 0x10;
      unaff_x23 = *(undefined8 *)(lVar2 + 0x20);
      unaff_x24 = *(undefined8 *)(lVar2 + 0x28);
      unaff_x28 = uVar9;
    } while ((long)uVar9 < in_stack_00000008);
    uVar8 = (uint)uVar9;
    if ((uint)uVar5 <= uVar8) {
LAB_054dfd98:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    while( true ) {
      unaff_x28 = (ulong)(int)uVar8;
      lVar2 = unaff_x22 + unaff_x28 * 0x10;
      uVar6 = *(undefined8 *)(lVar2 + 0x20);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar7 = *(undefined8 *)(lVar2 + 0x28);
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      iVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),unaff_x23,unaff_x24,uVar6,uVar7,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if (-1 < iVar3) break;
      if ((*(uint *)(unaff_x22 + 0x18) <= uVar8) || (*(uint *)(unaff_x22 + 0x18) <= uVar8 + 1))
      goto LAB_054dfd98;
      uVar6 = *(undefined8 *)(lVar2 + 0x20);
      lVar1 = unaff_x22 + (long)(int)(uVar8 + 1) * 0x10;
      puVar4 = (undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
      *puVar4 = uVar6;
      thunk_FUN_03d233cc(puVar4,0);
      uVar8 = uVar8 - 1;
      unaff_x28 = (ulong)uVar8;
      if ((int)uVar8 < unaff_w21) break;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar8) goto LAB_054dfd98;
    }
  } while( true );
}


