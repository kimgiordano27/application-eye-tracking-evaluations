/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 04177aec
PROGRAM: Untangled-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar5;
  uint uVar6;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  do {
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      iVar5 = (int)unaff_x22;
      if ((int)param_1 <= iVar5) {
        FUN_05624da8(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,(int)param_1 - unaff_w21,0);
        iVar5 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar5 - unaff_w21;
      }
      lVar4 = (long)iVar5 * (long)(int)unaff_x23 + 0x20;
      unaff_x22 = (ulong)iVar5;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_04177b34;
        if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x22) goto LAB_04177b38;
        puVar1 = (undefined8 *)(lVar3 + lVar4);
        if (unaff_x20 == 0) goto LAB_04177b34;
        in_stack_00000040 = *puVar1;
        in_stack_00000048 = puVar1[1];
        in_stack_00000050 = puVar1[2];
        uVar2 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar2 & 1) == 0) {
          param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x22 = unaff_x22 + 1;
        lVar4 = lVar4 + 0x18;
      } while ((long)unaff_x22 < (long)param_1);
      uVar6 = (uint)unaff_x22;
    } while ((int)param_1 <= (int)uVar6);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) {
LAB_04177b34:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_04177b38:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar3 = lVar4 + (long)(int)uVar6 * (long)(int)unaff_x23;
    uVar8 = *(undefined8 *)(lVar3 + 0x28);
    uVar7 = *(undefined8 *)(lVar3 + 0x20);
    if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_04177b38;
    lVar4 = lVar4 + (int)unaff_w21 * unaff_x23;
    unaff_w21 = unaff_w21 + 1;
    *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar4 + 0x28) = uVar8;
    *(undefined8 *)(lVar4 + 0x20) = uVar7;
    thunk_FUN_02f411dc(lVar4 + 0x20,0);
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
  } while( true );
}


