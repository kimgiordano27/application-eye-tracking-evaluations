/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_IsCreated
ENTRY_POINT: 0419fd58
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_IsCreated
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 uVar7;
  
  do {
    uVar4 = (**(code **)(unaff_x20 + 0x18))(param_1,param_2,param_3,param_4);
    iVar2 = *(int *)(unaff_x19 + 0x18);
    if ((uVar4 & 1) == 0) {
LAB_0419fd7c:
      uVar6 = (uint)unaff_x22;
      if ((int)uVar6 < iVar2) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) {
LAB_0419fe00:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if ((*(uint *)(lVar5 + 0x18) <= uVar6) || (*(uint *)(lVar5 + 0x18) <= unaff_w21))
        goto LAB_0419fe04;
        puVar1 = (undefined8 *)(lVar5 + 0x20 + (long)(int)unaff_w21 * 0x10);
        puVar3 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x10);
        uVar7 = *puVar3;
        unaff_w21 = unaff_w21 + 1;
        puVar1[1] = puVar3[1];
        *puVar1 = uVar7;
        LeanTween__value(puVar1,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        unaff_x22 = (ulong)(uVar6 + 1);
      }
      if (iVar2 <= (int)unaff_x22) {
        FUN_0550afb4(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar2 - unaff_w21,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar2 - unaff_w21;
      }
      unaff_x23 = -(unaff_x22 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x22 & 0xffffffff) << 4;
      unaff_x22 = (ulong)(int)unaff_x22;
    }
    else {
      unaff_x22 = unaff_x22 + 1;
      unaff_x23 = unaff_x23 + 0x10;
      if ((long)iVar2 <= (long)unaff_x22) goto LAB_0419fd7c;
    }
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) goto LAB_0419fe00;
    if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) {
LAB_0419fe04:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (unaff_x20 == 0) goto LAB_0419fe00;
    param_1 = *(undefined8 *)(unaff_x20 + 0x40);
    param_4 = *(undefined8 *)(unaff_x20 + 0x28);
    param_2 = *(undefined8 *)(lVar5 + unaff_x23 + 0x20);
    param_3 = *(undefined8 *)(lVar5 + unaff_x23 + 0x28);
  } while( true );
}


