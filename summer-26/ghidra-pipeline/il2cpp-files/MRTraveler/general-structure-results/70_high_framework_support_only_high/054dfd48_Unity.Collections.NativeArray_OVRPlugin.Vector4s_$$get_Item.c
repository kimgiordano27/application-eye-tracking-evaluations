/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_Item
ENTRY_POINT: 054dfd48
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_Item(ulong param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar5;
  long unaff_x25;
  undefined8 uVar6;
  ulong unaff_x26;
  uint uVar7;
  ulong unaff_x28;
  ulong unaff_x29;
  ulong uVar8;
  ulong in_stack_00000000;
  long in_stack_00000008;
  
  while (uVar8 = unaff_x29, uVar7 = (int)unaff_x28 + 1, uVar7 < (uint)param_1) {
    lVar2 = unaff_x22 + (long)(int)uVar7 * 0x10;
    puVar4 = (undefined8 *)(lVar2 + 0x20);
    *puVar4 = unaff_x23;
    *(undefined8 *)(lVar2 + 0x28) = unaff_x24;
    thunk_FUN_03d233cc(puVar4,0);
    if (uVar8 == unaff_x26) {
      return;
    }
    param_1 = *(ulong *)(unaff_x22 + 0x18);
    unaff_x29 = uVar8 + 1;
    if ((uint)param_1 <= (uint)unaff_x29) break;
    lVar2 = unaff_x22 + unaff_x29 * 0x10;
    unaff_x23 = *(undefined8 *)(lVar2 + 0x20);
    unaff_x24 = *(undefined8 *)(lVar2 + 0x28);
    unaff_x28 = uVar8;
    if (unaff_x25 <= (long)uVar8) {
      uVar7 = (uint)uVar8;
      if ((uint)param_1 <= uVar7) break;
      while( true ) {
        unaff_x28 = (ulong)(int)uVar7;
        lVar2 = unaff_x22 + unaff_x28 * 0x10;
        uVar5 = *(undefined8 *)(lVar2 + 0x20);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar6 = *(undefined8 *)(lVar2 + 0x28);
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03cf1244();
        }
        iVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),unaff_x23,unaff_x24,uVar5,uVar6,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar3) break;
        if ((*(uint *)(unaff_x22 + 0x18) <= uVar7) || (*(uint *)(unaff_x22 + 0x18) <= uVar7 + 1))
        goto LAB_054dfd98;
        uVar5 = *(undefined8 *)(lVar2 + 0x20);
        lVar1 = unaff_x22 + (long)(int)(uVar7 + 1) * 0x10;
        puVar4 = (undefined8 *)(lVar1 + 0x20);
        *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
        *puVar4 = uVar5;
        thunk_FUN_03d233cc(puVar4,0);
        uVar7 = uVar7 - 1;
        unaff_x28 = (ulong)uVar7;
        if ((int)uVar7 < unaff_w21) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar7) goto LAB_054dfd98;
      }
      param_1 = (ulong)*(uint *)(unaff_x22 + 0x18);
      unaff_x25 = in_stack_00000008;
      unaff_x26 = in_stack_00000000;
    }
  }
LAB_054dfd98:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


