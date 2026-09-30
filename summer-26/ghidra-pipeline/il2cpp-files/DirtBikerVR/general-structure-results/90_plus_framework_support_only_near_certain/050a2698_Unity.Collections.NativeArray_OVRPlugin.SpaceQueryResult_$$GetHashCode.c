/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetHashCode
ENTRY_POINT: 050a2698
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetHashCode
               (long param_1,undefined8 param_2,int param_3,long param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uStack0000000000000018;
  
                    /* try { // try from 050a26a8 to 051a2703 has its CatchHandler @ 050a2548 */
  iVar9 = (int)param_2;
  if (iVar9 < param_3) {
    uStack0000000000000018 = param_2;
    if (param_1 == 0) {
LAB_050a27f0:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar11 = (long)iVar9;
    do {
      uVar10 = *(uint *)(param_1 + 0x18);
      uVar3 = uVar11 + 1;
      if (uVar10 <= (uint)uVar3) {
LAB_050a27ec:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      lVar4 = param_1 + uVar3 * 0x10;
      uVar5 = *(undefined8 *)(lVar4 + 0x20);
      uVar6 = *(undefined8 *)(lVar4 + 0x28);
      if ((long)iVar9 <= (long)uVar11) {
        do {
          uVar10 = (uint)uVar11;
          if (*(uint *)(param_1 + 0x18) <= uVar10) goto LAB_050a27ec;
          if (param_4 == 0) goto LAB_050a27f0;
          lVar4 = param_1 + (long)(int)uVar10 * 0x10;
          uVar12 = *(undefined8 *)(lVar4 + 0x20);
          uVar7 = *(undefined8 *)(lVar4 + 0x28);
          if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          iVar8 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),uVar5,uVar6,uVar12,uVar7,
                             *(undefined8 *)(param_4 + 0x28));
          if (-1 < iVar8) break;
          if ((*(uint *)(param_1 + 0x18) <= uVar10) ||
             (uVar2 = uVar10 + 1, *(uint *)(param_1 + 0x18) <= uVar2)) goto LAB_050a27ec;
          lVar1 = param_1 + (long)(int)uVar2 * 0x10;
          uVar12 = *(undefined8 *)(lVar4 + 0x20);
          *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
          *(undefined8 *)(lVar1 + 0x20) = uVar12;
          thunk_FUN_03afed3c(param_1 + 0x20 + (long)(int)uVar2 * 0x10 + 8,0);
          uVar11 = (ulong)(uVar10 - 1);
        } while ((int)uStack0000000000000018 <= (int)(uVar10 - 1));
        uVar10 = *(uint *)(param_1 + 0x18);
      }
      uVar2 = (int)uVar11 + 1;
      if (uVar10 <= uVar2) goto LAB_050a27ec;
      lVar4 = param_1 + (long)(int)uVar2 * 0x10;
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      *(undefined8 *)(lVar4 + 0x28) = uVar6;
      thunk_FUN_03afed3c(param_1 + 0x20 + (long)(int)uVar2 * 0x10 + 8,0);
      uVar11 = uVar3;
    } while (uVar3 != (long)param_3);
  }
  return;
}


