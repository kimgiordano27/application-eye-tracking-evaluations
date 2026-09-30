/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Equals
ENTRY_POINT: 050a25ac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Equals(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w25;
  uint unaff_w26;
  uint uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    uVar10 = unaff_w26;
    uVar7 = unaff_w20 + uVar10;
    if ((uint)param_1 <= uVar7) {
LAB_050a2688:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if (unaff_x23 == 0) goto LAB_050a268c;
    lVar1 = unaff_x19 + (long)(int)uVar7 * 0x10;
    uVar11 = *(undefined8 *)(lVar1 + 0x20);
    uVar6 = *(undefined8 *)(lVar1 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    iVar8 = (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000028,in_stack_00000020,uVar11,
                       uVar6,*(undefined8 *)(unaff_x23 + 0x28));
    if (-1 < iVar8) {
      uVar7 = unaff_w20 + unaff_w21;
LAB_050a2648:
      if (uVar7 < *(uint *)(unaff_x19 + 0x18)) {
        lVar1 = unaff_x19 + (long)(int)uVar7 * 0x10;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a2594 with catch @ 050a2678
                       try { // try from 050a2678 to 051a268f has its CatchHandler @ 050a2548 */
        puVar9 = (undefined8 *)(lVar1 + 0x28);
        *puVar9 = in_stack_00000020;
        *(undefined8 *)(lVar1 + 0x20) = in_stack_00000028;
        thunk_FUN_03afed3c(puVar9,0);
        return;
      }
      goto LAB_050a2688;
    }
    if ((*(uint *)(unaff_x19 + 0x18) <= uVar7) ||
       (uVar3 = unaff_w20 + unaff_w21, *(uint *)(unaff_x19 + 0x18) <= uVar3)) goto LAB_050a2688;
    lVar2 = unaff_x19 + (long)(int)uVar3 * 0x10;
    uVar11 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar2 + 0x20) = uVar11;
    thunk_FUN_03afed3c(in_stack_00000010 + (long)(int)uVar3 * 0x10 + 8,0);
    if (in_stack_00000018._4_4_ < (int)uVar10) goto LAB_050a2648;
    unaff_w26 = uVar10 * 2;
    param_1 = *(undefined8 *)(unaff_x19 + 0x18);
    unaff_w21 = uVar10;
    if ((int)unaff_w26 < unaff_w25) {
      uVar7 = unaff_w26 + in_stack_00000008._4_4_;
      if (((uint)param_1 <= uVar7 - 1) || ((uint)param_1 <= uVar7)) goto LAB_050a2688;
      if (unaff_x23 == 0) {
LAB_050a268c:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar1 = unaff_x19 + (long)(int)(uVar7 - 1) * 0x10;
      lVar2 = unaff_x19 + (long)(int)uVar7 * 0x10;
      uVar11 = *(undefined8 *)(lVar1 + 0x20);
      uVar4 = *(undefined8 *)(lVar1 + 0x28);
      uVar6 = *(undefined8 *)(lVar2 + 0x20);
      uVar5 = *(undefined8 *)(lVar2 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      uVar7 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),uVar11,uVar4,uVar6,uVar5,
                         *(undefined8 *)(unaff_x23 + 0x28));
      param_1 = *(undefined8 *)(unaff_x19 + 0x18);
      unaff_w26 = unaff_w26 | uVar7 >> 0x1f;
    }
  } while( true );
}


