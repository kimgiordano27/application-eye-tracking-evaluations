/*
FUNCTION_NAME: FUN_01d982fc
ENTRY_POINT: 01d982fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 169
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


void FUN_01d982fc(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  
  if ((DAT_0377f6b7 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Shader>_GetEnumerator__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033eb8b0);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_PointerEventData>__ctor__);
    thunk_FUN_00d48444(Method_System_Data_ForeignKeyConstraint_set_DeleteRule__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Type,_ISubsystem>__ctor__);
    thunk_FUN_00d48444(Method_Obi_ObiRopeMeshRenderer_UpdateRenderer__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentsInChildren<IXRSelectInteractor>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<XRPass>_get_Item__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_MouseEventBase<MouseMoveEvent>_get_localMousePosition__
                      );
    thunk_FUN_00d48444(Oculus_Interaction_VirtualPointable_<>c_TypeInfo);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Any<Face>__);
    thunk_FUN_00d48444(Method_System_Span<char>_TryCopyTo__);
    DAT_0377f6b7 = 1;
  }
  puVar7 = Method_Obi_ObiRopeMeshRenderer_UpdateRenderer__;
  puVar6 = Method_UnityEngine_UIElements_MouseEventBase<MouseMoveEvent>_get_localMousePosition__;
  puVar5 = Method_System_Collections_Generic_List<XRPass>_get_Item__;
  puVar4 = Oculus_Interaction_VirtualPointable_<>c_TypeInfo;
  if ((param_2 != 0) && (uVar2 = *(uint *)(param_2 + 0x18), 0 < (int)uVar2)) {
    lVar16 = 0;
    lVar1 = param_2 + 0x20;
    puVar14 = (undefined8 *)Method_System_Linq_Enumerable_Any<Face>__;
    do {
      uVar15 = (uint)lVar16;
      if (uVar2 <= uVar15) goto LAB_01d98800;
      plVar8 = *(long **)(lVar1 + lVar16 * 8);
      if (plVar8 == (long *)0x0) goto LAB_01d98804;
      uVar9 = (**(code **)(*plVar8 + 0x348))(plVar8,*(undefined8 *)(*plVar8 + 0x350));
      uVar10 = thunk_FUN_015fe514(uVar9,*(undefined8 *)puVar7,0);
      if ((uVar10 & 1) == 0) goto LAB_01d987d0;
      if (*(uint *)(param_2 + 0x18) <= uVar15) {
LAB_01d98800:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar8 = *(long **)(lVar1 + lVar16 * 8);
      if (plVar8 == (long *)0x0) goto LAB_01d98804;
      uVar9 = (**(code **)(*plVar8 + 0x378))(plVar8,*(undefined8 *)(*plVar8 + 0x380));
      if (*(uint *)(param_2 + 0x18) <= uVar15) goto LAB_01d98800;
      plVar8 = *(long **)(lVar1 + lVar16 * 8);
      if (plVar8 == (long *)0x0) goto LAB_01d98804;
      uVar11 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
      uVar10 = thunk_FUN_015fe514(uVar9,*(undefined8 *)puVar4,0);
      if (((((uVar10 & 1) == 0) &&
           (uVar10 = thunk_FUN_015fe514(uVar9,*(undefined8 *)puVar5,0), (uVar10 & 1) == 0)) &&
          (uVar10 = thunk_FUN_015fe514(uVar9,*puVar14,0), (uVar10 & 1) == 0)) &&
         (uVar10 = thunk_FUN_015fe514(uVar9,*(undefined8 *)puVar6,0), (uVar10 & 1) == 0)) {
        uVar10 = thunk_FUN_015fe514(uVar9,*(undefined8 *)
                                           Method_UnityEngine_Component_GetComponentsInChildren<IXRSelectInteractor>__
                                    ,0);
        if (((uVar10 & 1) != 0) && (param_1 != (long *)0x0)) {
          bVar3 = *(byte *)(*(long *)UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo + 300)
          ;
          if ((bVar3 <= *(byte *)(*param_1 + 300)) &&
             (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar3 * 8 + -8) ==
              *(long *)UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo)) goto LAB_01d987d0;
        }
        uVar10 = thunk_FUN_015fe514(uVar9,*(undefined8 *)Method_System_Span<char>_TryCopyTo__,0);
        if ((uVar10 & 1) == 0) {
          if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar8 = (long *)FUN_01ff6bc0(param_1,0);
          if (plVar8 == (long *)0x0) {
LAB_01d98804:
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          plVar8 = (long *)(**(code **)(*plVar8 + 0x338))
                                     (plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x340));
          if (plVar8 != (long *)0x0) {
            plVar12 = (long *)(**(code **)(*plVar8 + 0x238))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x240));
            lVar13 = FUN_01d96528(plVar12,0);
            uVar9 = *(undefined8 *)
                     Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
            ;
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar9 = FUN_01780344(uVar9,0);
            if (lVar13 == 0) goto LAB_01d98804;
            uVar10 = FUN_01ff7194(lVar13,uVar9,0);
            if ((uVar10 & 1) == 0) {
              uVar9 = *(undefined8 *)Method_System_Data_ForeignKeyConstraint_set_DeleteRule__;
              if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0
                 ) {
                thunk_FUN_00d32864();
              }
              uVar9 = FUN_01780344(uVar9,0);
              uVar10 = FUN_01789ac0(plVar12,uVar9,0);
              if ((uVar10 & 1) == 0) {
                uVar9 = *(undefined8 *)
                         Method_System_Collections_Generic_HashSet<Shader>_GetEnumerator__;
                if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) ==
                    0) {
                  thunk_FUN_00d32864();
                }
                uVar9 = FUN_01780344(uVar9,0);
                uVar10 = FUN_01789ac0(plVar12,uVar9,0);
                if ((uVar10 & 1) == 0) {
                  FUN_00ac2be8(plVar12);
                  uVar9 = (**(code **)(*plVar12 + 0x308))(plVar12,*(undefined8 *)(*plVar12 + 0x310))
                  ;
                  uVar9 = FUN_01d34dbc(uVar11,uVar9,0);
                  uVar11 = thunk_FUN_00d48444(
                                             Method_System_Collections_Generic_Dictionary<Type,_ISubsystem>__ctor__
                                             );
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar9,uVar11);
                }
                lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                             Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__
                                           );
                if (lVar13 == 0) goto LAB_01d98804;
                FUN_017323a0(lVar13,uVar11,0);
              }
              else {
                if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) ==
                    0) {
                  thunk_FUN_00d32864();
                }
                lVar13 = FUN_00da52a8(uVar11,*(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<int,_PointerEventData>__ctor__
                                      ,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<Type,_ISubsystem>__ctor__
                                     );
              }
            }
            else {
              lVar13 = FUN_01ff783c(lVar13,uVar11,0);
            }
            (**(code **)(*plVar8 + 0x288))(plVar8,param_1,lVar13,*(undefined8 *)(*plVar8 + 0x290));
            puVar14 = (undefined8 *)Method_System_Linq_Enumerable_Any<Face>__;
          }
        }
        else if (param_1 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo + 300)
          ;
          if ((bVar3 <= *(byte *)(*param_1 + 300)) &&
             (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar3 * 8 + -8) ==
              *(long *)UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo)) {
            if (*(int *)(*(long *)PTR_DAT_033eb8b0 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar9 = FUN_01de5c84(uVar11,0);
            FUN_01d270d8(param_1,uVar9,0);
          }
        }
      }
LAB_01d987d0:
      uVar2 = *(uint *)(param_2 + 0x18);
      lVar16 = lVar16 + 1;
    } while ((int)lVar16 < (int)uVar2);
  }
  return;
}


