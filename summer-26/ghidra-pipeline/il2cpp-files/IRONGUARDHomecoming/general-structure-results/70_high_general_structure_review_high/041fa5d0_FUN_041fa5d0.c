/*
FUNCTION_NAME: FUN_041fa5d0
ENTRY_POINT: 041fa5d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure
*/


void FUN_041fa5d0(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  if ((DAT_04841110 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04589f28);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<quaternion>__
                      );
    DAT_04841110 = 1;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    if ((param_2 & 1) != 0) {
      puVar8 = (undefined8 *)(param_1 + 0x18);
      uVar9 = *puVar8;
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_04073094(uVar9,0,0);
      if ((uVar5 & 1) != 0) {
        uVar9 = *puVar8;
        if (*(int *)(*(long *)
                      Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<quaternion>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_04219a34(uVar9,0);
        *puVar8 = 0;
        thunk_FUN_01f51358(puVar8,0);
      }
      plVar6 = (long *)(param_1 + 0x40);
      if (*plVar6 != 0) {
        *plVar6 = 0;
        thunk_FUN_01f51358(plVar6,0);
      }
      plVar6 = (long *)(param_1 + 0x48);
      if (*plVar6 != 0) {
        FUN_04160588(*plVar6,0);
        *plVar6 = 0;
        thunk_FUN_01f51358(plVar6,0);
      }
      puVar3 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__;
      iVar1 = *(int *)(param_1 + 0x10);
      lVar7 = *(long *)
               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar7 = *(long *)puVar3;
      }
      iVar2 = **(int **)(lVar7 + 0xb8);
      if (DAT_04840b56 == '\0') {
        thunk_FUN_01efb3a4(puVar3);
        lVar7 = *(long *)puVar3;
        DAT_04840b56 = '\x01';
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      puVar4 = PTR_DAT_04589f28;
      if (iVar1 != iVar2) {
        if (*(int *)(*(long *)PTR_DAT_04589f28 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (DAT_048407e9 == '\0') {
          thunk_FUN_01efb3a4(PTR_DAT_04589f28);
          DAT_048407e9 = '\x01';
        }
        lVar7 = *(long *)puVar4;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar7 = *(long *)puVar4;
        }
        if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_04219264(**(long **)(lVar7 + 0xb8),*(undefined4 *)(param_1 + 0x10),0);
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar7 = *(long *)puVar3;
        }
        *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(lVar7 + 0xb8);
      }
    }
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return;
}


