/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_Item
ENTRY_POINT: 02e04650
PROGRAM: gunraiders-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Item(ulong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if ((int)param_1 < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    lVar8 = 0x20;
    do {
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (lVar5 == 0) goto LAB_02e047e4;
      if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_02e047e8;
      puVar1 = (undefined8 *)(lVar5 + lVar8);
      if (unaff_x20 == 0) goto LAB_02e047e4;
      in_stack_00000040 = *puVar1;
      in_stack_00000048 = puVar1[1];
      in_stack_00000050 = puVar1[2];
      in_stack_00000058 = puVar1[3];
      uVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar3 & 1) != 0) {
        param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
        break;
      }
      param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x20;
    } while ((long)uVar10 < (long)param_1);
  }
  if ((int)param_1 <= (int)uVar10) {
    return 0;
  }
  uVar3 = uVar10 & 0xffffffff;
  do {
    uVar10 = (ulong)((int)uVar10 + 1);
    do {
      uVar7 = (uint)uVar3;
      if ((int)param_1 <= (int)uVar10) {
        FUN_032f3ffc(*(undefined8 *)(unaff_x19 + 0x10),uVar3,(int)param_1 - uVar7,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar7;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar2 - uVar7;
      }
      uVar6 = -(uVar10 >> 0x1f & 1) & 0xffffffe000000000 | (uVar10 & 0xffffffff) << 5;
      uVar10 = (ulong)(int)uVar10;
      do {
        uVar6 = uVar6 + 0x20;
        lVar8 = *(long *)(unaff_x19 + 0x10);
        if (lVar8 == 0) goto LAB_02e047e4;
        if (*(uint *)(lVar8 + 0x18) <= (uint)uVar10) goto LAB_02e047e8;
        puVar1 = (undefined8 *)(lVar8 + uVar6);
        if (unaff_x20 == 0) goto LAB_02e047e4;
        in_stack_00000040 = *puVar1;
        in_stack_00000048 = puVar1[1];
        in_stack_00000050 = puVar1[2];
        in_stack_00000058 = puVar1[3];
        uVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar4 & 1) == 0) {
          param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)param_1);
      uVar9 = (uint)uVar10;
    } while ((int)param_1 <= (int)uVar9);
    lVar8 = *(long *)(unaff_x19 + 0x10);
    if (lVar8 == 0) {
LAB_02e047e4:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_02e047e8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    lVar5 = lVar8 + (long)(int)uVar9 * 0x20;
    uVar13 = *(undefined8 *)(lVar5 + 0x20);
    uVar12 = *(undefined8 *)(lVar5 + 0x38);
    uVar11 = *(undefined8 *)(lVar5 + 0x30);
    if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_02e047e8;
    lVar8 = lVar8 + (long)(int)uVar7 * 0x20;
    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar8 + 0x20) = uVar13;
    *(undefined8 *)(lVar8 + 0x38) = uVar12;
    *(undefined8 *)(lVar8 + 0x30) = uVar11;
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
    uVar3 = (ulong)(uVar7 + 1);
  } while( true );
}


