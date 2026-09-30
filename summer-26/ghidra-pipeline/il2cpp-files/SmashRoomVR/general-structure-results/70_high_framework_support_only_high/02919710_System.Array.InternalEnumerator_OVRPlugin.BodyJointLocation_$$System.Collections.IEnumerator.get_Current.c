/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02919710
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1,undefined1 param_2 [16])

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  uint in_w9;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  int iVar8;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  uVar11 = param_2._8_8_;
  uVar9 = param_2._0_8_;
  do {
    iVar8 = (int)unaff_x25;
    lVar7 = unaff_x22 + (long)(int)in_w9 * (long)iVar8;
    *(undefined8 *)(lVar7 + 0x30) = param_1;
    *(undefined8 *)(lVar7 + 0x28) = uVar11;
    *(undefined8 *)(lVar7 + 0x20) = uVar9;
    if (unaff_x26 == unaff_x24) {
      return;
    }
    uVar1 = unaff_x26 + 1;
    uVar4 = (uint)*(undefined8 *)(unaff_x22 + 0x18);
    if (uVar4 <= (uint)uVar1) break;
    lVar7 = unaff_x22 + uVar1 * unaff_x25;
    param_1 = *(undefined8 *)(lVar7 + 0x30);
    uVar11 = *(undefined8 *)(lVar7 + 0x28);
    uVar9 = *(undefined8 *)(lVar7 + 0x20);
    if (unaff_x23 <= (long)unaff_x26) {
      bVar2 = uVar4 <= (uint)unaff_x26;
      while( true ) {
        if (bVar2) goto LAB_0291974c;
        uVar4 = (uint)unaff_x26;
        lVar7 = unaff_x22 + (long)(int)uVar4 * (long)iVar8;
        uVar5 = *(undefined8 *)(lVar7 + 0x30);
        uVar12 = *(undefined8 *)(lVar7 + 0x28);
        uVar10 = *(undefined8 *)(lVar7 + 0x20);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_01ae9e74();
        }
        in_stack_000000e0 = uVar10;
        in_stack_000000e8 = uVar12;
        in_stack_000000f0 = uVar5;
        in_stack_00000100 = uVar9;
        in_stack_00000108 = uVar11;
        in_stack_00000110 = param_1;
        iVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000100,&stack0x000000e0,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar3) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar4) goto LAB_0291974c;
        uVar10 = *(undefined8 *)(lVar7 + 0x28);
        uVar5 = *(undefined8 *)(lVar7 + 0x20);
        if (*(uint *)(unaff_x22 + 0x18) <= uVar4 + 1) goto LAB_0291974c;
        lVar6 = unaff_x22 + (long)(int)(uVar4 + 1) * (long)iVar8;
        uVar4 = uVar4 - 1;
        unaff_x26 = (ulong)uVar4;
        *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar7 + 0x30);
        *(undefined8 *)(lVar6 + 0x28) = uVar10;
        *(undefined8 *)(lVar6 + 0x20) = uVar5;
        if ((int)uVar4 < unaff_w21) break;
        bVar2 = *(uint *)(unaff_x22 + 0x18) <= uVar4;
      }
      uVar4 = *(uint *)(unaff_x22 + 0x18);
    }
    in_w9 = (int)unaff_x26 + 1;
    unaff_x26 = uVar1;
  } while (in_w9 < uVar4);
LAB_0291974c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


