/*
FUNCTION_NAME: FUN_05810a60
ENTRY_POINT: 05810a60
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_3;functionality_gaze_retrieval_or_extraction
*/


long FUN_05810a60(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  
  if ((DAT_066d2c3f & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_063183d0);
    FUN_02b3c81c(Method_System_Collections_Generic_List<OVRAnchor_DeferredValue>_get_Item__);
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<OVRLocatable_TrackingSpacePose>_GetEnumerator__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_List<GenericDropdownMenu_MenuItem>_get_Count__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<OVRPlugin_Result>_GetEnumerator__);
    DAT_066d2c3f = 1;
  }
  puVar5 = Method_System_Collections_Generic_List<OVRLocatable_TrackingSpacePose>_GetEnumerator__;
  plVar13 = (long *)(param_1 + 0x60);
  if (*plVar13 != 0) {
    return *plVar13;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    iVar6 = FUN_03bdb160(*(long *)(param_1 + 0x50),
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<OVRLocatable_TrackingSpacePose>_GetEnumerator__
                        );
    puVar3 = Method_System_Collections_Generic_List<GenericDropdownMenu_MenuItem>_get_Count__;
    if (iVar6 == 0) {
      uVar14 = 0;
LAB_05810bf0:
      lVar11 = FUN_02b3c908(*(undefined8 *)PTR_DAT_063183d0,uVar14);
      *plVar13 = lVar11;
      thunk_FUN_02bb0e9c(plVar13,lVar11);
      lVar11 = *plVar13;
      if (0 < (int)uVar14) {
        if (lVar11 == 0) goto LAB_05810be8;
        uVar7 = *(uint *)(lVar11 + 0x18);
        uVar12 = 0;
        do {
          if (uVar7 == uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          lVar1 = lVar11 + uVar12;
          uVar12 = uVar12 + 1;
          *(undefined1 *)(lVar1 + 0x20) = 1;
        } while (uVar14 != uVar12);
      }
      return lVar11;
    }
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (plVar10 = (long *)FUN_03bdb098(*(long *)(param_1 + 0x50),0,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_List<GenericDropdownMenu_MenuItem>_get_Count__
                                      ),
       puVar4 = Method_System_Collections_Generic_List<OVRAnchor_DeferredValue>_get_Item__,
       plVar10 != (long *)0x0)) {
      bVar2 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_List<OVRAnchor_DeferredValue>_get_Item__
                       + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_List<OVRAnchor_DeferredValue>_get_Item__)) {
LAB_05810c98:
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44();
      }
      if (plVar10[10] != 0) {
        uVar7 = FUN_03bdb160(plVar10[10],*(undefined8 *)puVar5);
        lVar11 = *(long *)(param_1 + 0x50);
        if (lVar11 != 0) {
          uVar14 = (ulong)uVar7;
          iVar6 = 1;
          do {
            iVar8 = FUN_03bdb160(lVar11,*(undefined8 *)puVar5);
            if (iVar8 <= iVar6) goto LAB_05810bf0;
            if ((*(long *)(param_1 + 0x50) == 0) ||
               (plVar10 = (long *)FUN_03bdb098(*(long *)(param_1 + 0x50),iVar6,*(undefined8 *)puVar3
                                              ), plVar10 == (long *)0x0)) break;
            bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4))
            goto LAB_05810c98;
            if (plVar10[10] == 0) break;
            uVar9 = FUN_03bdb160(plVar10[10],*(undefined8 *)puVar5);
            if (uVar9 != uVar7) {
              if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_05c44f60(*(undefined8 *)
                            Method_System_Collections_Generic_List<OVRPlugin_Result>_GetEnumerator__
                           ,0);
              return 0;
            }
            lVar11 = *(long *)(param_1 + 0x50);
            iVar6 = iVar6 + 1;
          } while (lVar11 != 0);
        }
      }
    }
  }
LAB_05810be8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


