/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 06032084
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current
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
  long unaff_x22;
  
  puVar7 = PTR_DAT_084874c8;
  if ((*(byte *)(unaff_x22 + 0xb99) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084874c8);
    *(undefined1 *)(unaff_x22 + 0xb99) = 1;
  }
  lVar8 = FUN_03a8a804(*(undefined8 *)puVar7,param_2);
  lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x1b0);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_03ac4090(lVar9);
  }
  lVar9 = FUN_03a8a804(lVar9,param_2);
  uVar2 = *(uint *)(param_1 + 0x20);
  FUN_06773c1c(*(undefined8 *)(param_1 + 0x18),0,lVar9,0,(ulong)uVar2,0);
  if (0 < (int)uVar2) {
    if (lVar9 == 0) {
LAB_060321c8:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar3 = *(uint *)(lVar9 + 0x18);
    uVar10 = 0;
    do {
      if (uVar10 == uVar3) {
LAB_060321c4:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      iVar4 = *(int *)(lVar9 + 0x20 + uVar10 * 0x24);
      if (-1 < iVar4) {
        if (lVar8 == 0) goto LAB_060321c8;
        iVar6 = 0;
        if (param_2 != 0) {
          iVar6 = iVar4 / param_2;
        }
        uVar5 = iVar4 - iVar6 * param_2;
        if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_060321c4;
        lVar1 = lVar8 + (ulong)uVar5 * 4;
        *(int *)(lVar9 + 0x20 + uVar10 * 0x24 + 4) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar10 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar2);
  }
  *(long *)(param_1 + 0x10) = lVar8;
  thunk_FUN_03afed3c((long *)(param_1 + 0x10),lVar8);
  *(long *)(param_1 + 0x18) = lVar9;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x18),lVar9);
  return;
}


