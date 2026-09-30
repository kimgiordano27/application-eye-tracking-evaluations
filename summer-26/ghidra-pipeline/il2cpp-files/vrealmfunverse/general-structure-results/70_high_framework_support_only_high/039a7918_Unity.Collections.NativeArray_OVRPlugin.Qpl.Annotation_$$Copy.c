/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 039a7918
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy
              (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  code *in_x9;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x20;
  uint uVar8;
  long unaff_x21;
  int iVar9;
  uint uVar10;
  ulong unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  while( true ) {
    uVar2 = (*in_x9)(param_1,param_2,param_3);
    iVar1 = *(int *)(unaff_x19 + 0x18);
    if ((uVar2 & 1) != 0) break;
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0x28;
    if ((long)iVar1 <= (long)unaff_x22) break;
    lVar6 = *(long *)(unaff_x19 + 0x10);
    if (lVar6 == 0) goto LAB_039a7a64;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_039a7a68;
    if (unaff_x20 == 0) goto LAB_039a7a64;
    puVar4 = (undefined8 *)(lVar6 + unaff_x21);
    in_x9 = *(code **)(unaff_x20 + 0x18);
    param_1 = *(undefined8 *)(unaff_x20 + 0x40);
    in_stack_00000068 = puVar4[1];
    in_stack_00000060 = *puVar4;
    in_stack_00000078 = puVar4[3];
    in_stack_00000070 = puVar4[2];
    param_2 = &stack0x00000060;
    in_stack_00000080 = puVar4[4];
    param_3 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  if (iVar1 <= (int)unaff_x22) {
    return 0;
  }
  uVar2 = unaff_x22 & 0xffffffff;
  do {
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      iVar9 = (int)unaff_x22;
      uVar8 = (uint)uVar2;
      if (iVar1 <= iVar9) {
        FUN_04d9e084(*(undefined8 *)(unaff_x19 + 0x10),uVar2,iVar1 - uVar8,0);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar8;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar1 - uVar8;
      }
      unaff_x22 = (ulong)iVar9;
      lVar6 = (long)iVar9 * 0x28 + 0x20;
      do {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_039a7a64;
        if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) goto LAB_039a7a68;
        if (unaff_x20 == 0) goto LAB_039a7a64;
        puVar4 = (undefined8 *)(lVar5 + lVar6);
        in_stack_00000068 = puVar4[1];
        in_stack_00000060 = *puVar4;
        in_stack_00000078 = puVar4[3];
        in_stack_00000070 = puVar4[2];
        in_stack_00000080 = puVar4[4];
        uVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,
                           *(undefined8 *)(unaff_x20 + 0x28));
        iVar1 = *(int *)(unaff_x19 + 0x18);
        if ((uVar3 & 1) == 0) break;
        unaff_x22 = unaff_x22 + 1;
        lVar6 = lVar6 + 0x28;
      } while ((long)unaff_x22 < (long)iVar1);
      uVar10 = (uint)unaff_x22;
    } while (iVar1 <= (int)uVar10);
    lVar6 = *(long *)(unaff_x19 + 0x10);
    if (lVar6 == 0) {
LAB_039a7a64:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((*(uint *)(lVar6 + 0x18) <= uVar10) || (*(uint *)(lVar6 + 0x18) <= uVar8)) {
LAB_039a7a68:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    puVar7 = (undefined8 *)(lVar6 + 0x20 + (long)(int)uVar10 * 0x28);
    puVar4 = (undefined8 *)(lVar6 + 0x20 + (long)(int)uVar8 * 0x28);
    uVar2 = (ulong)(uVar8 + 1);
    uVar14 = puVar7[1];
    uVar13 = *puVar7;
    uVar12 = puVar7[3];
    uVar11 = puVar7[2];
    puVar4[4] = puVar7[4];
    puVar4[1] = uVar14;
    *puVar4 = uVar13;
    puVar4[3] = uVar12;
    puVar4[2] = uVar11;
    thunk_FUN_02bb0e9c(puVar4,0);
    iVar1 = *(int *)(unaff_x19 + 0x18);
  } while( true );
}


