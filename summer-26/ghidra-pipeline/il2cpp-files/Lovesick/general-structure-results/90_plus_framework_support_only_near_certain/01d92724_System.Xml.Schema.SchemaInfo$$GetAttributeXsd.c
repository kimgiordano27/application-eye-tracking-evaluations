/*
FUNCTION_NAME: System.Xml.Schema.SchemaInfo$$GetAttributeXsd
ENTRY_POINT: 01d92724
PROGRAM: Lovesick-libil2cpp.so
SCORE: 138
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void System_Xml_Schema_SchemaInfo__GetAttributeXsd(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *puVar13;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x8b8));
  *(undefined1 *)(unaff_x21 + 0x6b1) = 1;
  if (unaff_x19 == (long *)0x0) {
LAB_01d92a6c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar5 = (**(code **)(*unaff_x19 + 0x1a8))();
  puVar4 = Method_Obi_ObiRopeMeshRenderer_UpdateRenderer__;
  puVar3 = Method_UnityEngine_Component_GetComponentsInChildren<IXRSelectInteractor>__;
  puVar2 = Method_UnityEngine_UIElements_MouseEventBase<MouseMoveEvent>_get_localMousePosition__;
  if (0 < iVar5) {
    iVar5 = 0;
    puVar13 = (undefined8 *)Oculus_Interaction_VirtualPointable_<>c_TypeInfo;
    plVar11 = (long *)Method_System_Nullable<OVRPlugin_Result>__ctor__;
    do {
      plVar7 = (long *)FUN_01f45a80();
      if (plVar7 == (long *)0x0) goto LAB_01d92a6c;
      uVar8 = (**(code **)(*plVar7 + 0x348))(plVar7,*(undefined8 *)(*plVar7 + 0x350));
      uVar9 = thunk_FUN_015fe514(uVar8,*(undefined8 *)puVar4,0);
      if ((uVar9 & 1) != 0) {
        plVar7 = (long *)FUN_01f45a80();
        if (plVar7 == (long *)0x0) goto LAB_01d92a6c;
        uVar8 = (**(code **)(*plVar7 + 0x378))(plVar7,*(undefined8 *)(*plVar7 + 0x380));
        plVar7 = (long *)FUN_01f45a80();
        if (plVar7 == (long *)0x0) goto LAB_01d92a6c;
        uVar10 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
        uVar9 = thunk_FUN_015fe514(uVar8,*puVar13,0);
        if (((uVar9 & 1) == 0) &&
           (uVar9 = thunk_FUN_015fe514(uVar8,*(undefined8 *)puVar2,0), (uVar9 & 1) == 0)) {
          uVar9 = thunk_FUN_015fe514(uVar8,*(undefined8 *)puVar3,0);
          if (((uVar9 & 1) != 0) && (unaff_x20 != (long *)0x0)) {
            bVar1 = *(byte *)(*(long *)UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo +
                             300);
            if ((bVar1 <= *(byte *)(*unaff_x20 + 300)) &&
               (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo))
            goto LAB_01d92a34;
          }
          if (*(int *)(*plVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar7 = (long *)FUN_01ff6bc0();
          if (plVar7 == (long *)0x0) goto LAB_01d92a6c;
          plVar7 = (long *)(**(code **)(*plVar7 + 0x338))
                                     (plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x340));
          if (plVar7 != (long *)0x0) {
            plVar11 = (long *)(**(code **)(*plVar7 + 0x238))
                                        (plVar7,*(undefined8 *)(*plVar7 + 0x240));
            lVar12 = FUN_01d96528();
            uVar8 = *(undefined8 *)
                     Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
            ;
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar8 = FUN_01780344(uVar8,0);
            if (lVar12 == 0) goto LAB_01d92a6c;
            uVar9 = FUN_01ff7194(lVar12,uVar8,0);
            if ((uVar9 & 1) == 0) {
              uVar8 = *(undefined8 *)Method_System_Data_ForeignKeyConstraint_set_DeleteRule__;
              if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0
                 ) {
                thunk_FUN_00d32864();
              }
              uVar8 = FUN_01780344(uVar8,0);
              uVar9 = FUN_01789ac0(plVar11,uVar8,0);
              if ((uVar9 & 1) == 0) {
                uVar8 = *(undefined8 *)
                         Method_System_Collections_Generic_HashSet<Shader>_GetEnumerator__;
                if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) ==
                    0) {
                  thunk_FUN_00d32864();
                }
                uVar8 = FUN_01780344(uVar8,0);
                uVar9 = FUN_01789ac0(plVar11,uVar8,0);
                if ((uVar9 & 1) == 0) {
                  FUN_00ac2be8(plVar11);
                  uVar8 = (**(code **)(*plVar11 + 0x308))(plVar11,*(undefined8 *)(*plVar11 + 0x310))
                  ;
                  uVar8 = FUN_01d34dbc(uVar10,uVar8,0);
                  uVar10 = thunk_FUN_00d48444(
                                             OVR_OpenVR_IVRApplications__RemoveApplicationManifest_TypeInfo
                                             );
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar8,uVar10);
                }
                lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                             Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__
                                           );
                if (lVar12 == 0) goto LAB_01d92a6c;
                FUN_017323a0(lVar12,uVar10,0);
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_033eb8b0 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_01de5c84(uVar10,0);
              }
            }
            else {
              FUN_01ff783c(lVar12,uVar10,0);
            }
            (**(code **)(*plVar7 + 0x288))(plVar7);
            puVar13 = (undefined8 *)Oculus_Interaction_VirtualPointable_<>c_TypeInfo;
            plVar11 = (long *)Method_System_Nullable<OVRPlugin_Result>__ctor__;
          }
        }
      }
LAB_01d92a34:
      iVar5 = iVar5 + 1;
      iVar6 = (**(code **)(*unaff_x19 + 0x1a8))();
    } while (iVar5 < iVar6);
  }
  return;
}


