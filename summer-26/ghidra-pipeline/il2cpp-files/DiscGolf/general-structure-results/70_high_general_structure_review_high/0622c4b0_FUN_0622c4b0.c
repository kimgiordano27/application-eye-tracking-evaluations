/*
FUNCTION_NAME: FUN_0622c4b0
ENTRY_POINT: 0622c4b0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0622c4b0(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  
  if ((DAT_06dc71d4 & 1) == 0) {
    FUN_02d965b8(Method_OVRPermissionsRequester_GetPermissionId__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_MultiColumnListViewController_UpdateReorderClassList__
                );
    FUN_02d965b8(PTR_DAT_069fb990);
    DAT_06dc71d4 = 1;
  }
  if ((*(char *)(param_4 + 0x48) != '\0') &&
     (plVar5 = *(long **)(param_4 + 0x40), plVar5 != (long *)0x0)) {
    bVar1 = *(byte *)(*(long *)Method_OVRPermissionsRequester_GetPermissionId__ + 0x130);
    if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_OVRPermissionsRequester_GetPermissionId__)) {
      lVar4 = plVar5[4];
      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar2 = FUN_0634eb94(lVar4,0,0);
      if ((uVar2 & 1) != 0) {
        lVar4 = plVar5[4];
        if (lVar4 != 0) {
          fVar6 = (float)FUN_063c31fc(lVar4,0);
          fVar16 = param_2;
          fVar15 = param_3;
          lVar3 = FUN_0634bb04(lVar4,0);
          if (lVar3 != 0) {
            fVar7 = (float)FUN_0635d920(lVar3,0);
            param_2 = param_2 + fVar16;
            param_3 = param_3 + fVar15;
            fVar8 = (float)FUN_05628d48(0);
            fVar9 = (float)FUN_063c33ac(lVar4,0);
            fVar10 = (float)UnityEngine_UIElements_TextSelectingManipulator__HasFocus(lVar4,0);
            fVar9 = (fVar9 - fVar10) * 0.5;
            fVar16 = fVar16 * fVar9;
            param_2 = param_2 + fVar16;
            fVar10 = (float)FUN_063c3074(lVar4,0);
            fVar11 = (float)FUN_063c33ac(lVar4,0);
            fVar12 = (float)UnityEngine_UIElements_TextSelectingManipulator__HasFocus(lVar4,0);
            fVar10 = fVar10 + fVar11;
            fVar12 = fVar10 + fVar12;
            fVar11 = (float)FUN_063c2fc0(lVar4,0);
            fVar13 = (float)UnityEngine_UIElements_TextSelectingManipulator__HasFocus(lVar4,0);
            uVar14 = FUN_05628d48(0);
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_MultiColumnListViewController_UpdateReorderClassList__
                        + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_06200988(fVar6 + fVar7 + fVar8 * fVar9,param_2,param_3 + fVar15 * fVar9,fVar12,
                         fVar11 + fVar13,uVar14,fVar10,fVar16,0);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
  }
  return;
}


