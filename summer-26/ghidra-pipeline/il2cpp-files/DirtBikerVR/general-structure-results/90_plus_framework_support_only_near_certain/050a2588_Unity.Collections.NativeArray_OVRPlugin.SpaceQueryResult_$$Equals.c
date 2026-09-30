/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Equals
ENTRY_POINT: 050a2588
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Equals(code *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  int unaff_w25;
  uint unaff_w26;
  undefined8 unaff_x27;
  uint uVar8;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
                    /* try { // try from 050a2594 to 051a2677 has its CatchHandler @ 050a2678 */
    uVar4 = (*param_1)(*(undefined8 *)(unaff_x23 + 0x40),unaff_x27,unaff_x28,unaff_x29,unaff_x24,
                       *(undefined8 *)(unaff_x23 + 0x28));
    uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
    unaff_w26 = unaff_w26 | uVar4 >> 0x1f;
    uVar4 = unaff_w21;
    do {
      unaff_w21 = unaff_w26;
      uVar8 = unaff_w20 + unaff_w21;
      if ((uint)uVar7 <= uVar8) goto LAB_050a2688;
      if (unaff_x23 == 0) goto LAB_050a268c;
      lVar1 = unaff_x19 + (long)(int)uVar8 * 0x10;
      uVar7 = *(undefined8 *)(lVar1 + 0x20);
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      iVar5 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000028,in_stack_00000020,uVar7
                         ,uVar3,*(undefined8 *)(unaff_x23 + 0x28));
      if (-1 < iVar5) {
        uVar8 = unaff_w20 + uVar4;
LAB_050a2648:
        if (uVar8 < *(uint *)(unaff_x19 + 0x18)) {
          lVar1 = unaff_x19 + (long)(int)uVar8 * 0x10;
          puVar6 = (undefined8 *)(lVar1 + 0x28);
          *puVar6 = in_stack_00000020;
          *(undefined8 *)(lVar1 + 0x20) = in_stack_00000028;
          thunk_FUN_03afed3c(puVar6,0);
          return;
        }
        goto LAB_050a2688;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar8) ||
         (uVar4 = unaff_w20 + uVar4, *(uint *)(unaff_x19 + 0x18) <= uVar4)) goto LAB_050a2688;
      lVar2 = unaff_x19 + (long)(int)uVar4 * 0x10;
      uVar7 = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar2 + 0x20) = uVar7;
      thunk_FUN_03afed3c(in_stack_00000010 + (long)(int)uVar4 * 0x10 + 8,0);
      if (in_stack_00000018._4_4_ < (int)unaff_w21) goto LAB_050a2648;
      unaff_w26 = unaff_w21 * 2;
      uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar4 = unaff_w21;
    } while (unaff_w25 <= (int)unaff_w26);
    uVar4 = unaff_w26 + in_stack_00000008._4_4_;
    if (((uint)uVar7 <= uVar4 - 1) || ((uint)uVar7 <= uVar4)) {
LAB_050a2688:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if (unaff_x23 == 0) {
LAB_050a268c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar1 = unaff_x19 + (long)(int)(uVar4 - 1) * 0x10;
    lVar2 = unaff_x19 + (long)(int)uVar4 * 0x10;
    unaff_x27 = *(undefined8 *)(lVar1 + 0x20);
    unaff_x28 = *(undefined8 *)(lVar1 + 0x28);
    unaff_x29 = *(undefined8 *)(lVar2 + 0x20);
    unaff_x24 = *(undefined8 *)(lVar2 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    param_1 = *(code **)(unaff_x23 + 0x18);
  } while( true );
}


