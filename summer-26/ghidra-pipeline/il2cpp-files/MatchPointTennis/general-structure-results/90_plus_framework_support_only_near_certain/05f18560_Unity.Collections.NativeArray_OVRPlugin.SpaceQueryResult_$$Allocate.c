/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Allocate
ENTRY_POINT: 05f18560
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Allocate
               (long param_1,uint param_2,int param_3,int param_4,long param_5,long param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint in_w8;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar2 = param_4 + -1;
  uVar3 = iVar2 + param_2;
  if (uVar3 < in_w8) {
    uVar6 = *(undefined8 *)(param_1 + (long)(int)uVar3 * 8 + 0x20);
    iVar1 = param_3;
    if (param_3 < 0) {
      iVar1 = param_3 + 1;
    }
    if ((int)param_2 <= iVar1 >> 1) {
      do {
        uVar8 = param_2 * 2;
        if ((int)uVar8 < param_3) {
          uVar3 = uVar8 + param_4;
          if ((*(uint *)(param_1 + 0x18) <= uVar3 - 1) || (*(uint *)(param_1 + 0x18) <= uVar3))
          goto LAB_05f186d8;
          if (param_5 == 0) goto LAB_05f186dc;
          uVar9 = *(undefined8 *)(param_1 + (long)(int)(uVar3 - 1) * 8 + 0x20);
          uVar10 = *(undefined8 *)(param_1 + (long)(int)uVar3 * 8 + 0x20);
          if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          uVar3 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),uVar9,uVar10,
                             *(undefined8 *)(param_5 + 0x28));
          uVar8 = uVar8 | uVar3 >> 0x1f;
        }
        uVar3 = iVar2 + uVar8;
        if (*(uint *)(param_1 + 0x18) <= uVar3) goto LAB_05f186d8;
        puVar7 = (undefined8 *)(param_1 + (long)(int)uVar3 * 8 + 0x20);
        uVar9 = *puVar7;
        if (param_5 == 0) {
LAB_05f186dc:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        iVar4 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),uVar6,uVar9,
                           *(undefined8 *)(param_5 + 0x28));
        if (-1 < iVar4) {
          uVar3 = iVar2 + param_2;
          break;
        }
        if ((*(uint *)(param_1 + 0x18) <= uVar3) || (*(uint *)(param_1 + 0x18) <= iVar2 + param_2))
        goto LAB_05f186d8;
        puVar5 = (undefined8 *)(param_1 + (long)(int)(iVar2 + param_2) * 8 + 0x20);
        *puVar5 = *puVar7;
        thunk_FUN_044bb4b4(puVar5,0);
        param_2 = uVar8;
      } while ((int)uVar8 <= iVar1 >> 1);
      in_w8 = *(uint *)(param_1 + 0x18);
    }
    if (uVar3 < in_w8) {
      puVar7 = (undefined8 *)(param_1 + (long)(int)uVar3 * 8 + 0x20);
      *puVar7 = uVar6;
      thunk_FUN_044bb4b4(puVar7,0);
      return;
    }
  }
LAB_05f186d8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


