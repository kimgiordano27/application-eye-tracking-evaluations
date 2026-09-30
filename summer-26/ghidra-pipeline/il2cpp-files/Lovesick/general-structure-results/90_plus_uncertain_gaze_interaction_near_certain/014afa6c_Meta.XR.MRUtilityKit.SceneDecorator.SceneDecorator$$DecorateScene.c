/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$DecorateScene
ENTRY_POINT: 014afa6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 186
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x014aff48) */
/* WARNING: Removing unreachable block (ram,0x014b010c) */

void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__DecorateScene(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  int unaff_w27;
  long *plVar17;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  long in_stack_00000058;
  
  Meta_XR_MRUtilityKit_SceneDecorator_SpaceMapMask___ctor();
  if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar6 = FUN_01fc591c(in_stack_00000058,0);
  if (*(int *)(*(long *)
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<InteractableRegisteredEventArgs>_Get__
              + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar7 = (long *)FUN_0206e920(uVar6,0);
  if (plVar7 == (long *)0x0) {
    unaff_x20[0x1d] = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       Method_Oculus_Interaction_Input_DataModifier<HandDataAsset>_InjectAllDataModifier__
                     + 300);
    if (*(byte *)(*plVar7 + 300) < bVar1) {
      plVar7 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)
              Method_Oculus_Interaction_Input_DataModifier<HandDataAsset>_InjectAllDataModifier__) {
      plVar7 = (long *)0x0;
    }
    unaff_x20[0x1d] = (long)plVar7;
  }
  plVar17 = unaff_x20 + 0x1d;
                    /* try { // try from 014afbc8 to 015afc1b has its CatchHandler @ 014b03b0 */
  plVar7 = (long *)(**(code **)(*unaff_x20 + 0x188))();
  plVar8 = (long *)*plVar17;
  uVar6 = *(undefined8 *)StringLiteral_9636;
  if (plVar8 == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    lVar9 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar10 = FUN_01fc591c(lVar9,0);
  }
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar9 = *plVar7;
  uVar15 = *(undefined8 *)
            Method_System_Linq_Enumerable_ToDictionary<JsonProperty,_JsonProperty,_JsonSerializerInternalReader_PropertyPresence>__
  ;
  uVar13 = (ulong)*(ushort *)(lVar9 + 0x12a);
  uVar16 = *(undefined8 *)StringLiteral_5787;
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_11440) {
        puVar11 = (undefined8 *)(lVar9 + (long)(*piVar14 + 4) * 0x10 + 0x138);
        goto LAB_014afc88;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar11 = (undefined8 *)FUN_00d59724(plVar7,*(long *)StringLiteral_11440,4);
LAB_014afc88:
  (*(code *)*puVar11)(plVar7,uVar6,uVar10,0,0,0,uVar15,uVar16);
  plVar7 = (long *)*plVar17;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  *(undefined1 *)(plVar7 + 0x13) = 0;
  plVar8 = unaff_x20 + 0x1a;
  if (*plVar8 != 0) {
    (**(code **)(*plVar7 + 0x1d8))(plVar7,*plVar8,*(undefined8 *)(*plVar7 + 0x1e0));
  }
  plVar7 = (long *)
           Method_UnityEngine_Rendering_Universal_LibTessDotNet_PriorityQueue<MeshUtils_Vertex>_Insert__
  ;
  if (unaff_x20[0x19] != 0) {
    if (*plVar8 == 0) {
      plVar12 = (long *)*plVar17;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar12 + 0x1d8))
                (plVar12,*(undefined8 *)
                          Method_UnityEngine_Rendering_Universal_LibTessDotNet_PriorityQueue<MeshUtils_Vertex>_Insert__
                 ,*(undefined8 *)(*plVar12 + 0x1e0));
    }
    plVar12 = (long *)*plVar17;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*plVar12 + 0x248))(plVar12,unaff_x20[0x19],*(undefined8 *)(*plVar12 + 0x250));
    if (unaff_x20[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar12 = (long *)unaff_x20[0x1d];
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*plVar12 + 0x228))
              (plVar12,(long)*(int *)(unaff_x20[0x18] + 0x18),*(undefined8 *)(*plVar12 + 0x230));
  }
  if ((char)unaff_x20[0x17] != '\0') {
    plVar12 = (long *)*plVar17;
    uVar13 = FUN_015ff8a0(*plVar8,0);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((uVar13 & 1) == 0) {
      plVar7 = plVar8;
    }
    (**(code **)(*plVar12 + 0x1d8))(plVar12,*plVar7,*(undefined8 *)(*plVar12 + 0x1e0));
    plVar7 = (long *)unaff_x20[0x13];
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar8 = (long *)unaff_x20[0x1d];
    uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c(uVar6,uVar6);
    }
    (**(code **)(*plVar8 + 0x248))(plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x250));
    if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_02089968(*plVar17,1,0);
  }
  puVar2 = System_Xml_XmlImplementation_TypeInfo;
  if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar13 = FUN_0129aa60(in_stack_00000050,*(undefined8 *)System_Xml_XmlImplementation_TypeInfo,
                        *(undefined8 *)
                         Method_System_Collections_Generic_List_Enumerator<CwShaderBundle_ShaderVariant>_MoveNext__
                       );
  puVar4 = Method_Meta_XR_MRUtilityKit_SerializationHelpers_Vector3ArrayConverter_ReadJson__;
  if ((uVar13 & 1) != 0) {
    if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar9 = *plVar17;
    FUN_01299bc0(in_stack_00000050,*(undefined8 *)puVar2,&stack0x00000010,
                 *(undefined8 *)
                  Method_Meta_XR_MRUtilityKit_SerializationHelpers_Vector3ArrayConverter_ReadJson__)
    ;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_02089b24(lVar9,in_stack_00000010,0);
    if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0129de0c(in_stack_00000050,*(undefined8 *)puVar2,*(undefined8 *)StringLiteral_587);
  }
  if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar9 = FUN_012998a8(in_stack_00000050,*(undefined8 *)PTR_DAT_033f0390);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01311764(lVar9,&stack0x00000010,*(undefined8 *)PTR_DAT_033f41b0);
  puVar5 = Method_System_Reflection_Emit_TypeBuilder_get_UnderlyingSystemType__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_RemoveCallback__;
  puVar2 = UnityEngine_EventSystems_IDeselectHandler_TypeInfo;
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000020;
  while (uVar13 = FUN_012c2b80(&stack0x00000030,*(undefined8 *)puVar5), (uVar13 & 1) != 0) {
    uVar6 = FUN_00bc3fa8(&stack0x00000030,*(undefined8 *)puVar2);
    plVar7 = (long *)*plVar17;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar9 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
    if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01299bc0(in_stack_00000050,uVar6,&stack0x00000010,*(undefined8 *)puVar4);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0200a0ac(lVar9,uVar6,in_stack_00000010,0);
  }
  if (unaff_w27 < 0) {
    FUN_012c2b7c(&stack0x00000030,
                 *(undefined8 *)Method_System_Collections_Hashtable_HashtableEnumerator_get_Key__);
  }
  uVar6 = (**(code **)(*unaff_x20 + 0x188))();
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  puVar4 = Method_Oculus_Interaction_PointerInteractable<GrabInteractor,_GrabInteractable>_Start__;
  puVar2 = System_SystemException_TypeInfo;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_012d1810(lVar9);
  if (*(int *)(*(long *)Method_System_IO_BinaryReader_ReadString__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_014e0a9c(uVar6,lVar9,0);
  plVar7 = (long *)*plVar17;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  (**(code **)(*plVar7 + 0x2b8))(plVar7,0xffffffff,*(undefined8 *)(*plVar7 + 0x2c0));
  plVar7 = (long *)*plVar17;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar6 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
  uVar13 = thunk_FUN_015fe514(uVar6,*(undefined8 *)
                                     Method_UnityEngine_Rendering_Universal_LibTessDotNet_PriorityQueue<MeshUtils_Vertex>_Insert__
                              ,0);
  if ((uVar13 & 1) == 0) {
    plVar7 = (long *)*plVar17;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar6 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
    uVar13 = thunk_FUN_015fe514(uVar6,*(undefined8 *)StringLiteral_7622,0);
    if ((uVar13 & 1) == 0) goto LAB_014af9d0;
  }
  plVar7 = (long *)*plVar17;
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_016f4a88(lVar9);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar6 = (**(code **)(*plVar7 + 0x2f8))(plVar7,lVar9,*plVar17,*(undefined8 *)(*plVar7 + 0x300));
  lVar9 = FUN_014df900(uVar6,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  in_stack_00000028 = FUN_017e7d88(lVar9,0);
  uVar13 = FUN_016a1310(&stack0x00000028,0);
  if ((uVar13 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_010bbddc(unaff_x19 + 2,&stack0x00000028);
    return;
  }
  FUN_016a13e0(&stack0x00000028,0);
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_014af9d0:
  plVar7 = (long *)unaff_x20[0x1d];
  if (plVar7 == (long *)0x0) {
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_016f27fc(lVar9);
    FUN_012345d4();
  }
  else {
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_016f4a88(lVar9);
    uVar6 = (**(code **)(*plVar7 + 0x2d8))
                      (plVar7,lVar9,unaff_x20[0x1d],*(undefined8 *)(*plVar7 + 0x2e0));
    lVar9 = FUN_014df900(uVar6,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    in_stack_00000028 = FUN_017e7d88(lVar9,0);
    uVar13 = FUN_016a1310(&stack0x00000028,0);
    if ((uVar13 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_010bbddc(unaff_x19 + 2,&stack0x00000028);
      return;
    }
    FUN_016a13e0(&stack0x00000028,0);
  }
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_016a2130(unaff_x19 + 2,0);
  return;
}


