/*
FUNCTION_NAME: FUN_072e5ab8
ENTRY_POINT: 072e5ab8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_14;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_13
*/


/* WARNING: Removing unreachable block (ram,0x072e5e3c) */
/* WARNING: Removing unreachable block (ram,0x072e5fd8) */
/* WARNING: Removing unreachable block (ram,0x072e5ee0) */

void FUN_072e5ab8(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  long *local_98;
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long *local_70;
  long local_68;
  
  if ((DAT_07ef2ab2 & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                );
    FUN_03642964(
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                );
    FUN_03642964(
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__
                );
    FUN_03642964(
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_get_Current__
                );
    FUN_03642964(Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_get_Current__);
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_Dispose__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_MoveNext__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_get_Current__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_Dispose__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_MoveNext__
                );
    FUN_03642964(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                );
    DAT_07ef2ab2 = 1;
  }
  local_70 = (long *)0x0;
  local_68 = 0;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  FUN_07382988(param_1,0);
  puVar3 = 
  Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__;
  if (*(long *)(param_1 + 0x60) != 0) {
    if (0 < *(int *)(*(long *)(param_1 + 0x60) + 0x20)) {
      lVar9 = *(long *)
               Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
      ;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar9 = *(long *)puVar3;
      }
      lVar16 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
      if (lVar16 != 0) {
        FUN_0716a2b4(lVar16,0);
        lVar9 = *(long *)puVar3;
      }
      local_88 = &local_68;
      local_90 = 0;
      local_68 = lVar16;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar10 = FUN_072e5740();
      puVar7 = 
      Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_get_Current__;
      puVar6 = Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_Dispose__;
      puVar5 = 
      Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__;
      puVar4 = 
      Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__;
      puVar2 = 
      Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_get_Current__
      ;
      lVar9 = *(long *)(param_1 + 0x60);
      while( true ) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(int *)(lVar9 + 0x20) < 1) break;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar11 = FUN_072e5790(uVar10);
        if (((uVar11 & 1) == 0) ||
           (lVar9 = FUN_03cb08a0(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)puVar4), lVar9 == 0)
           ) break;
        if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_0422aaf4(*(long *)(param_1 + 0x60),lVar9,*(undefined8 *)puVar2);
        lVar16 = *(long *)puVar3;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar16 = *(long *)puVar3;
        }
        plVar12 = (long *)FUN_073266c4(lVar9,**(undefined4 **)(lVar16 + 0xb8),0);
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar7)) {
            lVar16 = *(long *)puVar3;
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_036a1978();
              lVar16 = *(long *)puVar3;
            }
            FUN_073268b4(lVar9,**(undefined4 **)(lVar16 + 0xb8),0,0);
            FUN_0459fb44(&local_a8,plVar12,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_MoveNext__
                        );
            local_70 = local_98;
            puStack_78 = puStack_a0;
            local_80 = local_a8;
            local_a8 = 0;
            puStack_a0 = &local_80;
            while (uVar11 = FUN_05897b28(&local_80,*(undefined8 *)puVar5), plVar8 = local_70,
                  (uVar11 & 1) != 0) {
              if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *local_70;
              lVar16 = *(long *)puVar6;
              uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar11 != 0) {
                piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar16) {
                    puVar13 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_072e5da4;
                  }
                  uVar11 = uVar11 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar11 != 0);
              }
              puVar13 = (undefined8 *)FUN_0367cd30(local_70,lVar16,0);
LAB_072e5da4:
              (*(code *)*puVar13)(plVar8,lVar9,puVar13[1]);
              lVar14 = *plVar8;
              lVar16 = *(long *)puVar6;
              uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar11 != 0) {
                piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar16) {
                    puVar13 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                    goto LAB_072e5e04;
                  }
                  uVar11 = uVar11 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar11 != 0);
              }
              puVar13 = (undefined8 *)FUN_0367cd30(plVar8,lVar16,1);
LAB_072e5e04:
              (*(code *)*puVar13)(plVar8,puVar13[1]);
            }
            FUN_05897b24(&local_80,
                         *(undefined8 *)
                          Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                        );
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_MoveNext__
                        + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            FUN_04a74988(plVar12,*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_Dispose__
                        );
          }
        }
        lVar9 = *(long *)(param_1 + 0x60);
      }
      if (*local_88 != 0) {
        FUN_0716a33c(*local_88,0);
      }
      if (local_90 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00();
      }
    }
    FUN_072e5844(param_1);
    if (*(long *)(param_1 + 0x40) != 0) {
      if (0 < *(int *)(*(long *)(param_1 + 0x40) + 0x20)) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        lVar9 = FUN_072e5740();
        if (DAT_07ef2b9b == '\0') {
          FUN_03642964(
                      Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                      );
          DAT_07ef2b9b = '\x01';
        }
        lVar16 = *(long *)puVar3;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar16 = *(long *)puVar3;
        }
        if ((*(char *)(*(long *)(lVar16 + 0xb8) + 0x30) != '\0') ||
           (*(long *)(param_1 + 0x58) + 100 < lVar9)) {
          FUN_072e6070(param_1);
          *(long *)(param_1 + 0x58) = lVar9;
        }
      }
      if (*(long *)(param_1 + 0x60) != 0) {
        if (*(int *)(*(long *)(param_1 + 0x60) + 0x20) == 0) {
          if (*(long *)(param_1 + 0x68) == 0) goto LAB_072e5fd4;
          FUN_056af55c(*(long *)(param_1 + 0x68),
                       *(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                      );
        }
        return;
      }
    }
  }
LAB_072e5fd4:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


