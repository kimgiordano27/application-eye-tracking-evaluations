/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$set_Item
ENTRY_POINT: 02e046b4
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


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__set_Item(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  char in_NG;
  char in_OV;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  uint uVar7;
  long unaff_x21;
  ulong uVar8;
  uint uVar9;
  ulong unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  while (in_NG != in_OV) {
    lVar6 = *(long *)(unaff_x19 + 0x10);
    if (lVar6 == 0) goto LAB_02e047e4;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_02e047e8;
    puVar1 = (undefined8 *)(lVar6 + unaff_x21);
    if (unaff_x20 == 0) goto LAB_02e047e4;
    in_stack_00000040 = *puVar1;
    in_stack_00000048 = puVar1[1];
    in_stack_00000050 = puVar1[2];
    in_stack_00000058 = puVar1[3];
    uVar8 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar8 & 1) != 0) {
      param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
      break;
    }
    param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0x20;
    in_OV = SBORROW8(unaff_x22,param_1);
    in_NG = (long)(unaff_x22 - param_1) < 0;
  }
  if ((int)param_1 <= (int)unaff_x22) {
    return 0;
  }
  uVar8 = unaff_x22 & 0xffffffff;
  do {
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      uVar7 = (uint)uVar8;
      if ((int)param_1 <= (int)unaff_x22) {
        FUN_032f3ffc(*(undefined8 *)(unaff_x19 + 0x10),uVar8,(int)param_1 - uVar7,0);
        iVar3 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar7;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar3 - uVar7;
      }
      uVar5 = -(unaff_x22 >> 0x1f & 1) & 0xffffffe000000000 | (unaff_x22 & 0xffffffff) << 5;
      unaff_x22 = (ulong)(int)unaff_x22;
      do {
        uVar5 = uVar5 + 0x20;
        lVar6 = *(long *)(unaff_x19 + 0x10);
        if (lVar6 == 0) goto LAB_02e047e4;
        if (*(uint *)(lVar6 + 0x18) <= (uint)unaff_x22) goto LAB_02e047e8;
        puVar1 = (undefined8 *)(lVar6 + uVar5);
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
        unaff_x22 = unaff_x22 + 1;
      } while ((long)unaff_x22 < (long)param_1);
      uVar9 = (uint)unaff_x22;
    } while ((int)param_1 <= (int)uVar9);
    lVar6 = *(long *)(unaff_x19 + 0x10);
    if (lVar6 == 0) {
LAB_02e047e4:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar9) {
LAB_02e047e8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    lVar2 = lVar6 + (long)(int)uVar9 * 0x20;
    uVar12 = *(undefined8 *)(lVar2 + 0x20);
    uVar11 = *(undefined8 *)(lVar2 + 0x38);
    uVar10 = *(undefined8 *)(lVar2 + 0x30);
    if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_02e047e8;
    lVar6 = lVar6 + (long)(int)uVar7 * 0x20;
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar6 + 0x20) = uVar12;
    *(undefined8 *)(lVar6 + 0x38) = uVar11;
    *(undefined8 *)(lVar6 + 0x30) = uVar10;
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
    uVar8 = (ulong)(uVar7 + 1);
  } while( true );
}


