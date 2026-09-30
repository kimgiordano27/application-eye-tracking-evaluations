/*
FUNCTION_NAME: FUN_065ff950
ENTRY_POINT: 065ff950
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_065ff950(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  
  if ((DAT_0755793c & 1) == 0) {
    FUN_03188a78(System_Collections_Immutable_AllocFreeConcurrentStack_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BaseTreeView_TypeInfo);
    DAT_0755793c = 1;
  }
  puVar4 = UnityEngine_UIElements_BaseTreeView_TypeInfo;
  if ((param_2 != 0) && (lVar5 = *(long *)(param_2 + 0x30), lVar5 != 0)) {
    iVar6 = 0;
    while (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) <= iVar6) {
        return;
      }
      auVar7 = System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__DownHeap
                         (lVar5,iVar6,*(undefined8 *)puVar4);
      if (((*(long *)(param_2 + 0x20) == 0) ||
          (lVar5 = *(long *)(*(long *)(param_2 + 0x20) + 0x10), lVar5 == 0)) ||
         (auVar8 = System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__DownHeap
                             (lVar5,iVar6,*(undefined8 *)puVar4), param_3 == 0)) break;
      uVar3 = *(uint *)(param_1 + 0x18);
      lVar5 = *(long *)(param_1 + 0x10);
      iVar1 = *(int *)(param_3 + 0x70);
      iVar2 = *(int *)(param_3 + 0x74);
      *(uint *)(param_1 + 0x18) = uVar3 + 1;
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      lVar5 = lVar5 + (long)(int)uVar3 * 0x10;
      iVar6 = iVar6 + 1;
      *(float *)(lVar5 + 0x20) = (float)auVar7._0_4_;
      *(float *)(lVar5 + 0x24) = (float)auVar7._4_4_;
      *(float *)(lVar5 + 0x28) = (float)auVar7._8_4_;
      *(float *)(lVar5 + 0x2c) =
           (float)(auVar8._0_4_ + (auVar8._4_4_ + iVar2 * auVar8._8_4_) * iVar1);
      lVar5 = *(long *)(param_2 + 0x30);
      if (lVar5 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


