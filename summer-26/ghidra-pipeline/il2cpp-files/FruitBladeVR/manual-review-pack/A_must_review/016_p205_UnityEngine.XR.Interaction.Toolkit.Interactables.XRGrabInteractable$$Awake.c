/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable$$Awake
ENTRY_POINT: 03687cb8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_8;strong_file_logging_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable__Awake(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  
  puVar3 = 
  PTR_Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_OnTeleported___03ce56a8
  ;
  puVar2 = PTR_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_TypeInfo_03ce3000;
  puVar1 = PTR_System_Action<Pose>_TypeInfo_03ce2fb8;
  if ((DAT_03ef6dd9 & 1) == 0) {
    FUN_01c5c92c(PTR_System_Action<Pose>_TypeInfo_03ce2fb8);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount___03ce56a0
                );
    FUN_01c5c92c(PTR_Method_UnityEngine_Component_GetComponentsInChildren<Collider>___03ce56b0);
    FUN_01c5c92c(PTR_Method_UnityEngine_Component_TryGetComponent<Rigidbody>___03ce24e0);
    FUN_01c5c92c(PTR_UnityEngine_Debug_TypeInfo_03cb5ae0);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_Dispose___03ce56b8
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_MoveNext___03ce56c0
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_get_Current___03ce56c8
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<XRBaseGrabTransformer>_GetEnumerator___03ce56d0
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<Collider>_RemoveAt___03ce56d8);
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<Collider>_get_Count___03cd3c60);
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<Collider>_get_Item___03cd3c70);
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    FUN_01c5c92c(
                PTR_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_TypeInfo_03ce3000
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_OnTeleported___03ce56a8
                );
    FUN_01c5c92c(PTR_StringLiteral_6348_03ce56e0);
    DAT_03ef6dd9 = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__Awake(param_1);
  uVar7 = thunk_FUN_01c8fc48(*(undefined8 *)puVar2);
  UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor___ctor(uVar7,0);
  *(undefined8 *)(param_1 + 0x330) = uVar7;
  thunk_FUN_01cc8040(param_1 + 0x330,uVar7);
  lVar9 = *(long *)(param_1 + 0x330);
  uVar7 = thunk_FUN_01c8fc48(*(undefined8 *)puVar1);
  System_Action<Pose>___ctor(uVar7,param_1,*(undefined8 *)puVar3,0);
  puVar1 = PTR_Method_UnityEngine_Component_TryGetComponent<Rigidbody>___03ce24e0;
  if (lVar9 != 0) {
    UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor__add_teleported(lVar9,uVar7,0)
    ;
    uVar7 = *(undefined8 *)puVar1;
    *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_1 + 0x1bc);
    uVar8 = UnityEngine_Component__TryGetComponent<object>
                      (param_1,(undefined8 *)(param_1 + 0x2f0),uVar7);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)PTR_UnityEngine_Debug_TypeInfo_03cb5ae0 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      UnityEngine_Debug__LogError(*(undefined8 *)PTR_StringLiteral_6348_03ce56e0,param_1,0);
    }
    if (*(long *)(param_1 + 0x2f0) != 0) {
      UnityEngine_Component__GetComponentsInChildren<object>
                (*(long *)(param_1 + 0x2f0),1,*(undefined8 *)(param_1 + 0x318),
                 *(undefined8 *)
                  PTR_Method_UnityEngine_Component_GetComponentsInChildren<Collider>___03ce56b0);
      puVar3 = PTR_Method_System_Collections_Generic_List<Collider>_RemoveAt___03ce56d8;
      puVar2 = PTR_Method_System_Collections_Generic_List<Collider>_get_Item___03cd3c70;
      puVar1 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
      if (*(long *)(param_1 + 0x318) != 0) {
        iVar6 = *(int *)(*(long *)(param_1 + 0x318) + 0x18);
        if (-1 < iVar6 + -1) {
          do {
            if (*(long *)(param_1 + 0x318) == 0) goto LAB_036882b8;
            iVar6 = iVar6 + -1;
            lVar9 = System_Collections_Generic_List<object>__get_Item
                              (*(long *)(param_1 + 0x318),iVar6,*(undefined8 *)puVar2);
            if (lVar9 == 0) goto LAB_036882b8;
            uVar7 = UnityEngine_Collider__get_attachedRigidbody(lVar9,0);
            uVar10 = *(undefined8 *)(param_1 + 0x2f0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c(*(long *)puVar1);
            }
            uVar8 = UnityEngine_Object__op_Inequality(uVar7,uVar10,0);
            if ((uVar8 & 1) != 0) {
              if (*(long *)(param_1 + 0x318) == 0) goto LAB_036882b8;
              System_Collections_Generic_List<object>__RemoveAt
                        (*(long *)(param_1 + 0x318),iVar6,*(undefined8 *)puVar3);
            }
          } while (0 < iVar6);
        }
        uVar7 = UnityEngine_Component__get_transform(param_1,0);
        UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable__InitializeTargetPoseAndScale
                  (param_1,uVar7);
        puVar5 = 
        PTR_Method_System_Collections_Generic_List<XRBaseGrabTransformer>_GetEnumerator___03ce56d0;
        puVar4 = 
        PTR_Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_MoveNext___03ce56c0
        ;
        puVar3 = 
        PTR_Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_Dispose___03ce56b8
        ;
        puVar2 = 
        PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount___03ce56a0
        ;
        if (*(long *)(param_1 + 0x230) != 0) {
          iVar6 = UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<object>__get_flushedCount
                            (*(long *)(param_1 + 0x230),
                             *(undefined8 *)
                              PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount___03ce56a0
                            );
          if (iVar6 < 1) {
            if (*(long *)(param_1 + 0x218) == 0) goto LAB_036882b8;
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_88,*(long *)(param_1 + 0x218),*(undefined8 *)puVar5);
            local_60 = local_78;
            puStack_68 = puStack_80;
            local_70 = local_88;
            local_88 = 0;
            puStack_80 = &local_70;
            while (uVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_70,*(undefined8 *)puVar4), uVar7 = local_60,
                  (uVar8 & 1) != 0) {
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
              if ((uVar8 & 1) != 0) {
                UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable__AddGrabTransformer
                          (param_1,uVar7,*(undefined8 *)(param_1 + 0x230));
              }
            }
          }
          else {
            if (*(long *)(param_1 + 0x218) == 0) goto LAB_036882b8;
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_88,*(long *)(param_1 + 0x218),*(undefined8 *)puVar5);
            local_60 = local_78;
            puStack_68 = puStack_80;
            local_70 = local_88;
            local_88 = 0;
            iVar6 = 0;
            puStack_80 = &local_70;
            while (uVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_70,*(undefined8 *)puVar4), uVar7 = local_60,
                  (uVar8 & 1) != 0) {
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
              if ((uVar8 & 1) != 0) {
                UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable__MoveGrabTransformerTo
                          (param_1,uVar7,iVar6,*(undefined8 *)(param_1 + 0x230));
                iVar6 = iVar6 + 1;
              }
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,*(undefined8 *)puVar3);
          if (*(long *)(param_1 + 0x238) != 0) {
            iVar6 = UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<object>__get_flushedCount
                              (*(long *)(param_1 + 0x238),*(undefined8 *)puVar2);
            if (iVar6 < 1) {
              if (*(long *)(param_1 + 0x220) != 0) {
                System_Collections_Generic_List<object>__GetEnumerator
                          (&local_88,*(long *)(param_1 + 0x220),*(undefined8 *)puVar5);
                local_60 = local_78;
                puStack_68 = puStack_80;
                local_70 = local_88;
                local_88 = 0;
                puStack_80 = &local_70;
                while (uVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                         (&local_70,*(undefined8 *)puVar4), uVar7 = local_60,
                      (uVar8 & 1) != 0) {
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_01cb0d4c();
                  }
                  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                  if ((uVar8 & 1) != 0) {
                    UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable__AddGrabTransformer
                              (param_1,uVar7,*(undefined8 *)(param_1 + 0x238));
                  }
                }
                goto LAB_03688288;
              }
            }
            else if (*(long *)(param_1 + 0x220) != 0) {
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_88,*(long *)(param_1 + 0x220),*(undefined8 *)puVar5);
              local_60 = local_78;
              puStack_68 = puStack_80;
              local_70 = local_88;
              local_88 = 0;
              iVar6 = 0;
              puStack_80 = &local_70;
              while (uVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                       (&local_70,*(undefined8 *)puVar4), uVar7 = local_60,
                    (uVar8 & 1) != 0) {
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_01cb0d4c();
                }
                uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                if ((uVar8 & 1) != 0) {
                  UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable__MoveGrabTransformerTo
                            (param_1,uVar7,iVar6,*(undefined8 *)(param_1 + 0x238));
                  iVar6 = iVar6 + 1;
                }
              }
LAB_03688288:
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_70,*(undefined8 *)puVar3);
              UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable__FlushRegistration
                        (param_1);
              return;
            }
          }
        }
      }
    }
  }
LAB_036882b8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


