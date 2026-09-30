/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyTo
ENTRY_POINT: 04a1b770
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo
               (long param_1,uint param_2,int param_3,undefined4 param_4,long *param_5,long param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  
  iVar9 = param_2 + param_3 + -1;
  if ((int)param_2 <= iVar9) {
    if (param_1 == 0) {
LAB_04a1b888:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    do {
      uVar1 = param_2 + ((int)(iVar9 - param_2) >> 1);
      if (*(uint *)(param_1 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      if (param_5 == (long *)0x0) goto LAB_04a1b888;
      lVar4 = *(long *)(param_6 + 0x20);
      uVar2 = *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0322bef4();
      }
      lVar4 = **(long **)(lVar4 + 0xc0);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0322bef4(lVar4);
      }
      lVar6 = *param_5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04a1b850;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0322c1e8(param_5,lVar4,0);
LAB_04a1b850:
      iVar3 = (*(code *)*puVar5)(param_5,uVar2,param_4,puVar5[1]);
      if (iVar3 == 0) {
        return uVar1;
      }
      if (iVar3 < 0) {
        param_2 = uVar1 + 1;
      }
      else {
        iVar9 = uVar1 - 1;
      }
    } while ((int)param_2 <= iVar9);
  }
                    /* try { // try from 04a1b788 to 04b1b7c7 has its CatchHandler @ 04a1b788
                       catch() { ... } // from try @ 04a1b788 with catch @ 04a1b788
                       catch() { ... } // from try @ 04a1b7dc with catch @ 04a1b788
                       catch() { ... } // from try @ 04a1b818 with catch @ 04a1b788
                       catch() { ... } // from try @ 04a1b858 with catch @ 04a1b788 */
  return ~param_2;
}


