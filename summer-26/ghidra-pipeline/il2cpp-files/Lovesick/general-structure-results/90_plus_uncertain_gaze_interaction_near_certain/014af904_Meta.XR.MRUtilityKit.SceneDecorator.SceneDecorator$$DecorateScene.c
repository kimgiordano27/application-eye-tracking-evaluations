/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$DecorateScene
ENTRY_POINT: 014af904
PROGRAM: Lovesick-libil2cpp.so
SCORE: 204
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x014aff48) */
/* WARNING: Removing unreachable block (ram,0x014b010c) */

void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__DecorateScene(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  int *piVar15;
  int *unaff_x19;
  long unaff_x20;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  long in_stack_00000058;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xae8));
  thunk_FUN_00d48444(StringLiteral_7622);
  thunk_FUN_00d48444(StringLiteral_9636);
  thunk_FUN_00d48444(
                    Method_UnityEngine_Rendering_Universal_LibTessDotNet_PriorityQueue<MeshUtils_Vertex>_Insert__
                    );
  thunk_FUN_00d48444(System_Xml_XmlImplementation_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_5787);
  thunk_FUN_00d48444(
                    Method_System_Linq_Enumerable_ToDictionary<JsonProperty,_JsonProperty,_JsonSerializerInternalReader_PropertyPresence>__
                    );
  *(undefined1 *)(unaff_x20 + 0xd38) = 1;
  puVar12 = (undefined8 *)
            Method_Oculus_Interaction_PointerInteractable<GrabInteractor,_GrabInteractable>_Start__;
  plVar8 = (long *)System_SystemException_TypeInfo;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  iVar1 = *unaff_x19;
  plVar16 = *(long **)(unaff_x19 + 8);
  if (iVar1 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
LAB_014af9c0:
    FUN_016a13e0(&stack0x00000028,0);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
LAB_014af9d0:
    plVar9 = (long *)plVar16[0x1d];
    if (plVar9 == (long *)0x0) {
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_016f27fc(lVar10,plVar16,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<JArray>_get_IsCompleted__
                   ,0);
      FUN_012345d4(plVar16,lVar10,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<SoccerBlockerCannon>_RemoveAt__);
      goto LAB_014afb20;
    }
    lVar10 = thunk_FUN_00d62348(*puVar12);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_016f4a88(lVar10,plVar16,
                 *(undefined8 *)UnityEngine_Rendering_RenderTargetIdentifier_____TypeInfo,0);
    uVar7 = (**(code **)(*plVar9 + 0x2d8))
                      (plVar9,lVar10,plVar16[0x1d],*(undefined8 *)(*plVar9 + 0x2e0));
    lVar10 = FUN_014df900(uVar7,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    in_stack_00000028 = FUN_017e7d88(lVar10,0);
                    /* try { // try from 014afa38 to 015afbc7 has its CatchHandler @ 014afa38
                       catch() { ... } // from try @ 014afa38 with catch @ 014afa38
                       catch() { ... } // from try @ 014b01cc with catch @ 014afa38
                       catch() { ... } // from try @ 014b02cc with catch @ 014afa38
                       catch() { ... } // from try @ 014b0364 with catch @ 014afa38
                       catch() { ... } // from try @ 014b044c with catch @ 014afa38 */
    uVar14 = FUN_016a1310(&stack0x00000028,0);
    if ((uVar14 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      if (*(int *)(*plVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_010bbddc(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
  else {
    if (iVar1 != 1) {
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      Meta_XR_MRUtilityKit_SceneDecorator_SpaceMapMask___ctor
                (plVar16,&stack0x00000058,&stack0x00000050,*(undefined8 *)(unaff_x19 + 10));
      if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar7 = FUN_01fc591c(in_stack_00000058,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<InteractableRegisteredEventArgs>_Get__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar8 = (long *)FUN_0206e920(uVar7,0);
      if (plVar8 == (long *)0x0) {
        plVar16[0x1d] = 0;
      }
      else {
        bVar2 = *(byte *)(*(long *)
                           Method_Oculus_Interaction_Input_DataModifier<HandDataAsset>_InjectAllDataModifier__
                         + 300);
        if (*(byte *)(*plVar8 + 300) < bVar2) {
          plVar8 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
                 *(long *)
                  Method_Oculus_Interaction_Input_DataModifier<HandDataAsset>_InjectAllDataModifier__
                ) {
          plVar8 = (long *)0x0;
        }
        plVar16[0x1d] = (long)plVar8;
      }
      plVar19 = plVar16 + 0x1d;
      plVar8 = (long *)(**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
      plVar9 = (long *)*plVar19;
      uVar7 = *(undefined8 *)StringLiteral_9636;
      if (plVar9 == (long *)0x0) {
        uVar11 = 0;
      }
      else {
        lVar10 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar11 = FUN_01fc591c(lVar10,0);
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar10 = *plVar8;
      uVar17 = *(undefined8 *)
                Method_System_Linq_Enumerable_ToDictionary<JsonProperty,_JsonProperty,_JsonSerializerInternalReader_PropertyPresence>__
      ;
      uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
      uVar18 = *(undefined8 *)StringLiteral_5787;
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_11440) {
            puVar12 = (undefined8 *)(lVar10 + (long)(*piVar15 + 4) * 0x10 + 0x138);
            goto LAB_014afc88;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar8,*(long *)StringLiteral_11440,4);
LAB_014afc88:
      (*(code *)*puVar12)(plVar8,uVar7,uVar11,0,0,0,uVar17,uVar18);
      plVar8 = (long *)*plVar19;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(undefined1 *)(plVar8 + 0x13) = 0;
      plVar9 = plVar16 + 0x1a;
      if (*plVar9 != 0) {
        (**(code **)(*plVar8 + 0x1d8))(plVar8,*plVar9,*(undefined8 *)(*plVar8 + 0x1e0));
      }
      plVar8 = (long *)
               Method_UnityEngine_Rendering_Universal_LibTessDotNet_PriorityQueue<MeshUtils_Vertex>_Insert__
      ;
      if (plVar16[0x19] != 0) {
        if (*plVar9 == 0) {
          plVar13 = (long *)*plVar19;
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          (**(code **)(*plVar13 + 0x1d8))
                    (plVar13,*(undefined8 *)
                              Method_UnityEngine_Rendering_Universal_LibTessDotNet_PriorityQueue<MeshUtils_Vertex>_Insert__
                     ,*(undefined8 *)(*plVar13 + 0x1e0));
        }
        plVar13 = (long *)*plVar19;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar13 + 0x248))(plVar13,plVar16[0x19],*(undefined8 *)(*plVar13 + 0x250));
        if (plVar16[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar13 = (long *)plVar16[0x1d];
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar13 + 0x228))
                  (plVar13,(long)*(int *)(plVar16[0x18] + 0x18),*(undefined8 *)(*plVar13 + 0x230));
      }
      if ((char)plVar16[0x17] != '\0') {
        plVar13 = (long *)*plVar19;
        uVar14 = FUN_015ff8a0(*plVar9,0);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if ((uVar14 & 1) == 0) {
          plVar8 = plVar9;
        }
        (**(code **)(*plVar13 + 0x1d8))(plVar13,*plVar8,*(undefined8 *)(*plVar13 + 0x1e0));
        plVar8 = (long *)plVar16[0x13];
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar9 = (long *)plVar16[0x1d];
        uVar7 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(uVar7,uVar7);
        }
        (**(code **)(*plVar9 + 0x248))(plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x250));
        if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_02089968(*plVar19,1,0);
      }
      puVar3 = System_Xml_XmlImplementation_TypeInfo;
      if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar14 = FUN_0129aa60(in_stack_00000050,*(undefined8 *)System_Xml_XmlImplementation_TypeInfo,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CwShaderBundle_ShaderVariant>_MoveNext__
                           );
      puVar6 = Method_Meta_XR_MRUtilityKit_SerializationHelpers_Vector3ArrayConverter_ReadJson__;
      if ((uVar14 & 1) != 0) {
        if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar10 = *plVar19;
        FUN_01299bc0(in_stack_00000050,*(undefined8 *)puVar3,&stack0x00000010,
                     *(undefined8 *)
                      Method_Meta_XR_MRUtilityKit_SerializationHelpers_Vector3ArrayConverter_ReadJson__
                    );
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_02089b24(lVar10,in_stack_00000010,0);
        if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0129de0c(in_stack_00000050,*(undefined8 *)puVar3,*(undefined8 *)StringLiteral_587);
      }
      if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar10 = FUN_012998a8(in_stack_00000050,*(undefined8 *)PTR_DAT_033f0390);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01311764(lVar10,&stack0x00000010,*(undefined8 *)PTR_DAT_033f41b0);
      puVar5 = Method_System_Reflection_Emit_TypeBuilder_get_UnderlyingSystemType__;
      puVar4 = 
      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_RemoveCallback__;
      puVar3 = UnityEngine_EventSystems_IDeselectHandler_TypeInfo;
      in_stack_00000038 = in_stack_00000018;
      in_stack_00000030 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000020;
      while (uVar14 = FUN_012c2b80(&stack0x00000030,*(undefined8 *)puVar5), (uVar14 & 1) != 0) {
        uVar7 = FUN_00bc3fa8(&stack0x00000030,*(undefined8 *)puVar3);
        plVar8 = (long *)*plVar19;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar10 = (**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
        if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01299bc0(in_stack_00000050,uVar7,&stack0x00000010,*(undefined8 *)puVar6);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0200a0ac(lVar10,uVar7,in_stack_00000010,0);
      }
      if (iVar1 < 0) {
        FUN_012c2b7c(&stack0x00000030,
                     *(undefined8 *)
                      Method_System_Collections_Hashtable_HashtableEnumerator_get_Key__);
      }
      uVar7 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      puVar12 = (undefined8 *)
                Method_Oculus_Interaction_PointerInteractable<GrabInteractor,_GrabInteractable>_Start__
      ;
      plVar8 = (long *)System_SystemException_TypeInfo;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_012d1810(lVar10,plVar16,
                   *(undefined8 *)Method_System_Linq_Enumerable_ToList<IronMaidenNeedle>__,0);
      if (*(int *)(*(long *)Method_System_IO_BinaryReader_ReadString__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_014e0a9c(uVar7,lVar10,0);
      plVar9 = (long *)*plVar19;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar9 + 0x2b8))(plVar9,0xffffffff,*(undefined8 *)(*plVar9 + 0x2c0));
      plVar9 = (long *)*plVar19;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar7 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
      uVar14 = thunk_FUN_015fe514(uVar7,*(undefined8 *)
                                         Method_UnityEngine_Rendering_Universal_LibTessDotNet_PriorityQueue<MeshUtils_Vertex>_Insert__
                                  ,0);
      if ((uVar14 & 1) != 0) {
LAB_014b0038:
        plVar9 = (long *)*plVar19;
        lVar10 = thunk_FUN_00d62348(*puVar12);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_016f4a88(lVar10,plVar16,*(undefined8 *)StringLiteral_11708,0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar7 = (**(code **)(*plVar9 + 0x2f8))
                          (plVar9,lVar10,*plVar19,*(undefined8 *)(*plVar9 + 0x300));
        lVar10 = FUN_014df900(uVar7,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        in_stack_00000028 = FUN_017e7d88(lVar10,0);
        uVar14 = FUN_016a1310(&stack0x00000028,0);
        if ((uVar14 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
          if (*(int *)(*plVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_010bbddc(unaff_x19 + 2,&stack0x00000028);
          return;
        }
        goto LAB_014af9c0;
      }
      plVar9 = (long *)*plVar19;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar7 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
      uVar14 = thunk_FUN_015fe514(uVar7,*(undefined8 *)StringLiteral_7622,0);
      if ((uVar14 & 1) != 0) goto LAB_014b0038;
      goto LAB_014af9d0;
    }
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  FUN_016a13e0(&stack0x00000028,0);
LAB_014afb20:
  *unaff_x19 = -2;
  if (*(int *)(*plVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_016a2130(unaff_x19 + 2,0);
  return;
}


