/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Equals
ENTRY_POINT: 05f17ad0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Equals
               (long param_1,uint param_2,int param_3,undefined8 param_4,long *param_5,long param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  int iVar9;
  
  iVar9 = param_2 + param_3 + -1;
  if ((int)param_2 <= iVar9) {
    if (param_1 == 0) {
LAB_05f17bec:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    do {
      uVar1 = param_2 + ((int)(iVar9 - param_2) >> 1);
      if (*(uint *)(param_1 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
                    /* try { // try from 05f17b34 to 06017b4b has its CatchHandler @ 05f17bb8 */
      if (param_5 == (long *)0x0) goto LAB_05f17bec;
      lVar3 = *(long *)(param_6 + 0x20);
      uVar8 = *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 05f17b4c to 06017ba7 has its CatchHandler @ 05f17a1c */
        lVar3 = FUN_04481fb8();
      }
      lVar3 = **(long **)(lVar3 + 0xc0);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8(lVar3);
      }
      lVar5 = *param_5;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05f17bb4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac(param_5,lVar3,0);
LAB_05f17bb4:
      iVar2 = (*(code *)*puVar4)(param_5,uVar8,param_4,puVar4[1]);
      if (iVar2 == 0) {
        return uVar1;
      }
      if (iVar2 < 0) {
        param_2 = uVar1 + 1;
      }
      else {
        iVar9 = uVar1 - 1;
      }
    } while ((int)param_2 <= iVar9);
  }
  return ~param_2;
}


