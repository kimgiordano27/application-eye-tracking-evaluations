/*
FUNCTION_NAME: UnityEngine.UIElements.CursorManager$$get_isCursorOverriden
ENTRY_POINT: 03776138
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


long UnityEngine_UIElements_CursorManager__get_isCursorOverriden(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x19;
  byte unaff_w20;
  undefined8 *unaff_x21;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0xd10));
  FUN_01ab69ac(
              Method_System_Collections_Generic_Dictionary<InputAction,_InputSystemUIInputModule_InputActionReferenceState>__ctor__
              );
  FUN_01ab69ac(
              Method_System_Collections_Generic_Dictionary<InputAction,_InputSystemUIInputModule_InputActionReferenceState>_Add__
              );
  FUN_01ab69ac(
              Method_System_Collections_Generic_Dictionary<InputAction,_InputSystemUIInputModule_InputActionReferenceState>_Remove__
              );
  FUN_01ab69ac(
              Method_System_Collections_Generic_Dictionary<InputAction,_InputSystemUIInputModule_InputActionReferenceState>_TryGetValue__
              );
  FUN_01ab69ac(
              Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_Pose>_TryGetValue__
              );
  FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<InitConfigOptions,_bool>_GetEnumerator__
              );
  FUN_01ab69ac(
              Method_System_Collections_Generic_Dictionary<InputAction,_InputSystemUIInputModule_InputActionReferenceState>_set_Item__
              );
  FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_Action<Texture>>__ctor__);
  *(undefined1 *)(unaff_x19 + 0x390) = 1;
  lVar4 = thunk_FUN_01a89e68(*unaff_x21);
  FUN_027b3d9c(lVar4,0);
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 0x10) = unaff_w20 & 1;
    uVar5 = FUN_03775fa0();
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<InputAction,_InputSystemUIInputModule_InputActionReferenceState>_TryGetValue__
                              );
    FUN_0219a4f0(lVar6,*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<InputAction,_InputSystemUIInputModule_InputActionReferenceState>_Add__
                );
    if (DAT_04137330 == (code *)0x0) {
      DAT_04137330 = (code *)FUN_01ab6968("UnityEngine.Terrain::get_activeTerrains()");
    }
    lVar7 = (*DAT_04137330)();
    puVar1 = 
    Method_System_Collections_Generic_Dictionary<InputAction,_InputSystemUIInputModule_InputActionReferenceState>__ctor__
    ;
    if (lVar7 != 0) {
      if (0 < *(int *)(lVar7 + 0x18)) {
        uVar5 = 0;
        do {
          lVar8 = thunk_FUN_01a89e68(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<int,_Action<Texture>>__ctor__
                                    );
          FUN_027b3d9c(lVar8,0);
          if (lVar8 == 0) goto LAB_0377641c;
          *(long *)(lVar8 + 0x18) = lVar4;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((long *)(lVar8 + 0x18),lVar4);
          if (*(uint *)(lVar7 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar11 = (long *)(lVar8 + 0x10);
          *plVar11 = *(long *)(lVar7 + 0x20 + uVar5 * 8);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11);
          if (*(long *)(lVar8 + 0x18) == 0) goto LAB_0377641c;
          if (*(char *)(*(long *)(lVar8 + 0x18) + 0x10) == '\0') {
LAB_037762d0:
            lVar12 = *plVar11;
            if (lVar12 == 0) goto LAB_0377641c;
            if (DAT_04137318 == (code *)0x0) {
              DAT_04137318 = (code *)FUN_01ab6968("UnityEngine.Terrain::get_groupingID()");
            }
            uVar2 = (*DAT_04137318)(lVar12);
            if (lVar6 == 0) goto LAB_0377641c;
            uStack0000000000000008 = uVar2;
            uVar9 = FUN_0219c130(lVar6,&stack0x00000008,*(undefined8 *)puVar1);
            if ((uVar9 & 1) == 0) {
              uVar13 = *(undefined8 *)(lVar8 + 0x10);
              uVar10 = thunk_FUN_01a89e68(*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_Pose>_TryGetValue__
                                         );
              FUN_0225a3e8(uVar10,lVar8,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<InputAction,_InputSystemUIInputModule_InputActionReferenceState>_set_Item__
                           ,0);
              lVar8 = FUN_03774ccc(uVar13,uVar10,1);
              if (lVar8 != 0) {
                lVar12 = *plVar11;
                if (lVar12 == 0) goto LAB_0377641c;
                if (DAT_04137318 == (code *)0x0) {
                  DAT_04137318 = (code *)FUN_01ab6968("UnityEngine.Terrain::get_groupingID()");
                }
                uStack000000000000000c = (*DAT_04137318)(lVar12);
                FUN_0219b9a4(lVar6,(long)&stack0x00000008 + 4,lVar8,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<InitConfigOptions,_bool>_get_Count__
                            );
              }
            }
          }
          else {
            lVar12 = *plVar11;
            if (lVar12 == 0) goto LAB_0377641c;
            if (DAT_04137310 == (code *)0x0) {
              DAT_04137310 = (code *)FUN_01ab6968("UnityEngine.Terrain::get_allowAutoConnect()");
            }
            uVar9 = (*DAT_04137310)(lVar12);
            if ((uVar9 & 1) != 0) goto LAB_037762d0;
          }
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)*(int *)(lVar7 + 0x18));
      }
      if (lVar6 != 0) {
        iVar3 = FUN_0219b384(lVar6,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<InputAction,_InputSystemUIInputModule_InputActionReferenceState>_Remove__
                            );
        if (iVar3 == 0) {
          return 0;
        }
        return lVar6;
      }
    }
  }
LAB_0377641c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


