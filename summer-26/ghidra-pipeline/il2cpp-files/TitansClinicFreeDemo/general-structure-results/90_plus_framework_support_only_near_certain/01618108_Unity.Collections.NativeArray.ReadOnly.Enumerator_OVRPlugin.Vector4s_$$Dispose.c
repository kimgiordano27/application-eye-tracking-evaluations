/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 01618108
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4s>__Dispose
               (long param_1,int param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  puVar7 = PTR_DAT_027b1ca8;
  if ((DAT_0293bc15 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b1ca8);
    DAT_0293bc15 = 1;
  }
  lVar8 = FUN_01230af8(*(undefined8 *)puVar7,param_2);
  lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x148);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0122e748(lVar9);
  }
  lVar9 = FUN_01230af8(lVar9,param_2);
  uVar2 = *(uint *)(param_1 + 0x20);
  FUN_01f89ca0(*(undefined8 *)(param_1 + 0x18),0,lVar9,0,(ulong)uVar2,0);
  if (0 < (int)uVar2) {
    if (lVar9 == 0) {
LAB_01618258:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar3 = *(uint *)(lVar9 + 0x18);
    uVar10 = 0;
    do {
      if (uVar3 <= uVar10) {
LAB_01618254:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      iVar4 = *(int *)(lVar9 + uVar10 * 0x28 + 0x20);
      if (-1 < iVar4) {
        if (lVar8 == 0) goto LAB_01618258;
        iVar6 = 0;
        if (param_2 != 0) {
          iVar6 = iVar4 / param_2;
        }
        uVar5 = iVar4 - iVar6 * param_2;
        if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_01618254;
        lVar1 = lVar8 + (ulong)uVar5 * 4;
        *(int *)(lVar9 + uVar10 * 0x28 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar10 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar2);
  }
  *(long *)(param_1 + 0x10) = lVar8;
  thunk_FUN_01286abc((long *)(param_1 + 0x10),lVar8);
  *(long *)(param_1 + 0x18) = lVar9;
  thunk_FUN_01286abc((undefined8 *)(param_1 + 0x18),lVar9);
  return;
}


