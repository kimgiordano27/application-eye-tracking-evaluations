/*
FUNCTION_NAME: FUN_01d92670
ENTRY_POINT: 01d92670
PROGRAM: Lovesick-libil2cpp.so
SCORE: 177
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


void FUN_01d92670(long *param_1,long *param_2)

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
  undefined8 *puVar13;
  
  if ((DAT_0377f6b1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Shader>_GetEnumerator__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033eb8b0);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_System_Data_ForeignKeyConstraint_set_DeleteRule__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Obi_ObiRopeMeshRenderer_UpdateRenderer__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentsInChildren<IXRSelectInteractor>__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_MouseEventBase<MouseMoveEvent>_get_localMousePosition__
                      );
    thunk_FUN_00d48444(Oculus_Interaction_VirtualPointable_<>c_TypeInfo);
    DAT_0377f6b1 = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_01d92a6c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar5 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  puVar4 = Method_Obi_ObiRopeMeshRenderer_UpdateRenderer__;
  puVar3 = Method_UnityEngine_Component_GetComponentsInChildren<IXRSelectInteractor>__;
  puVar2 = Method_UnityEngine_UIElements_MouseEventBase<MouseMoveEvent>_get_localMousePosition__;
  if (0 < iVar5) {
    iVar5 = 0;
    puVar13 = (undefined8 *)Oculus_Interaction_VirtualPointable_<>c_TypeInfo;
    plVar11 = (long *)Method_System_Nullable<OVRPlugin_Result>__ctor__;
    do {
      plVar7 = (long *)FUN_01f45a80(param_2,iVar5,0);
      if (plVar7 == (long *)0x0) goto LAB_01d92a6c;
      uVar8 = (**(code **)(*plVar7 + 0x348))(plVar7,*(undefined8 *)(*plVar7 + 0x350));
      uVar9 = thunk_FUN_015fe514(uVar8,*(undefined8 *)puVar4,0);
      if ((uVar9 & 1) != 0) {
        plVar7 = (long *)FUN_01f45a80(param_2,iVar5,0);
        if (plVar7 == (long *)0x0) goto LAB_01d92a6c;
        uVar8 = (**(code **)(*plVar7 + 0x378))(plVar7,*(undefined8 *)(*plVar7 + 0x380));
        plVar7 = (long *)FUN_01f45a80(param_2,iVar5,0);
        if (plVar7 == (long *)0x0) goto LAB_01d92a6c;
        uVar10 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
        uVar9 = thunk_FUN_015fe514(uVar8,*puVar13,0);
        if (((uVar9 & 1) == 0) &&
           (uVar9 = thunk_FUN_015fe514(uVar8,*(undefined8 *)puVar2,0), (uVar9 & 1) == 0)) {
          uVar9 = thunk_FUN_015fe514(uVar8,*(undefined8 *)puVar3,0);
          if (((uVar9 & 1) != 0) && (param_1 != (long *)0x0)) {
            bVar1 = *(byte *)(*(long *)UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo +
                             300);
            if ((bVar1 <= *(byte *)(*param_1 + 300)) &&
               (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo))
            goto LAB_01d92a34;
          }
          if (*(int *)(*plVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar7 = (long *)FUN_01ff6bc0(param_1,0);
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
                lVar12 = FUN_01de5c84(uVar10,0);
              }
            }
            else {
              lVar12 = FUN_01ff783c(lVar12,uVar10,0);
            }
            (**(code **)(*plVar7 + 0x288))(plVar7,param_1,lVar12,*(undefined8 *)(*plVar7 + 0x290));
            puVar13 = (undefined8 *)Oculus_Interaction_VirtualPointable_<>c_TypeInfo;
            plVar11 = (long *)Method_System_Nullable<OVRPlugin_Result>__ctor__;
          }
        }
      }
LAB_01d92a34:
      iVar5 = iVar5 + 1;
      iVar6 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    } while (iVar5 < iVar6);
  }
  return;
}


