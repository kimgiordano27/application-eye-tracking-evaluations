/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Allocate
ENTRY_POINT: 02768c54
PROGRAM: sharks-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Allocate(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  uint unaff_w26;
  uint uVar9;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  uint unaff_w29;
  undefined8 uVar10;
  int iStack0000000000000000;
  int iStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar9 = unaff_w26;
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    iVar7 = (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000008,in_stack_00000010,
                       unaff_x27,unaff_x28,*(undefined8 *)(unaff_x23 + 0x28));
    if (-1 < iVar7) {
      unaff_w29 = unaff_w20 + unaff_w21;
      unaff_x24 = (long)(int)unaff_w29;
LAB_02768ccc:
      if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
        lVar2 = unaff_x19 + unaff_x24 * 0x10;
        puVar8 = (undefined8 *)(lVar2 + 0x20);
        *puVar8 = in_stack_00000008;
        *(undefined8 *)(lVar2 + 0x28) = in_stack_00000010;
        thunk_FUN_0188fd20(puVar8,0);
        return;
      }
LAB_02768d10:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w29) ||
       (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + unaff_w21)) goto LAB_02768d10;
    uVar10 = *unaff_x25;
    lVar2 = unaff_x19 + (long)(int)(unaff_w20 + unaff_w21) * 0x10;
    puVar8 = (undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x28) = unaff_x25[1];
    *puVar8 = uVar10;
    thunk_FUN_0188fd20(puVar8,0);
    if (iStack0000000000000004 < (int)uVar9) goto LAB_02768ccc;
    unaff_w26 = uVar9 * 2;
    if ((int)unaff_w26 < in_stack_00000018._4_4_) {
      uVar6 = unaff_w26 + iStack0000000000000000;
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar6 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar6))
      goto LAB_02768d10;
      if (unaff_x23 == 0) {
Unity_Collections_NativeArray<OVRPlugin_Vector4s>__set_Item:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar2 = unaff_x19 + (long)(int)(uVar6 - 1) * 0x10;
      lVar1 = unaff_x19 + (long)(int)uVar6 * 0x10;
      uVar10 = *(undefined8 *)(lVar2 + 0x20);
      uVar4 = *(undefined8 *)(lVar2 + 0x28);
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      uVar5 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      uVar6 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),uVar10,uVar4,uVar3,uVar5,
                         *(undefined8 *)(unaff_x23 + 0x28));
      unaff_w26 = unaff_w26 | uVar6 >> 0x1f;
    }
    unaff_w29 = unaff_w20 + unaff_w26;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_02768d10;
    unaff_x24 = (long)(int)unaff_w29;
    lVar2 = unaff_x19 + unaff_x24 * 0x10;
    unaff_x25 = (undefined8 *)(lVar2 + 0x20);
    unaff_x27 = *unaff_x25;
    if (unaff_x23 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector4s>__set_Item;
    param_1 = *(long *)(unaff_x22 + 0x20);
    unaff_x28 = *(undefined8 *)(lVar2 + 0x28);
    unaff_w21 = uVar9;
  } while( true );
}


