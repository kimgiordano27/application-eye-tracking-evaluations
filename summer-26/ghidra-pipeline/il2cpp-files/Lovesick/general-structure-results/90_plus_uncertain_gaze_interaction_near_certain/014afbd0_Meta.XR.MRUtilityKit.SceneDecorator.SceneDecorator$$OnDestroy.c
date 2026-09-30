/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$OnDestroy
ENTRY_POINT: 014afbd0
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

void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__OnDestroy(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  code *in_x9;
  ulong uVar11;
  int *piVar12;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int unaff_w27;
  long *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  
  plVar5 = (long *)(*in_x9)();
  plVar6 = (long *)*unaff_x29;
  uVar13 = *(undefined8 *)StringLiteral_9636;
  if (plVar6 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    lVar7 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar8 = FUN_01fc591c(lVar7,0);
  }
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar7 = *plVar5;
  uVar14 = *(undefined8 *)
            Method_System_Linq_Enumerable_ToDictionary<JsonProperty,_JsonProperty,_JsonSerializerInternalReader_PropertyPresence>__
  ;
                    /* try { // try from 014afc30 to 015afc33 has its CatchHandler @ 014b03a8 */
  uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
  uVar15 = *(undefined8 *)StringLiteral_5787;
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_11440) {
        puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 4) * 0x10 + 0x138);
        goto LAB_014afc88;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
                    /* try { // try from 014afc58 to 015afcf7 has its CatchHandler @ 014b03b8 */
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_00d59724(plVar5,*(long *)StringLiteral_11440,4);
LAB_014afc88:
  (*(code *)*puVar9)(plVar5,uVar13,uVar8,0,0,0,uVar14,uVar15);
  plVar5 = (long *)*unaff_x29;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  *(undefined1 *)(plVar5 + 0x13) = 0;
  plVar6 = unaff_x20 + 0x1a;
  if (*plVar6 != 0) {
    (**(code **)(*plVar5 + 0x1d8))(plVar5,*plVar6,*(undefined8 *)(*plVar5 + 0x1e0));
  }
  plVar5 = (long *)
           Method_UnityEngine_Rendering_Universal_LibTessDotNet_PriorityQueue<MeshUtils_Vertex>_Insert__
  ;
  if (unaff_x20[0x19] != 0) {
    if (*plVar6 == 0) {
      plVar10 = (long *)*unaff_x29;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar10 + 0x1d8))
                (plVar10,*(undefined8 *)
                          Method_UnityEngine_Rendering_Universal_LibTessDotNet_PriorityQueue<MeshUtils_Vertex>_Insert__
                 ,*(undefined8 *)(*plVar10 + 0x1e0));
    }
    plVar10 = (long *)*unaff_x29;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
                    /* try { // try from 014afd1c to 015afd2b has its CatchHandler @ 014b03ac */
    (**(code **)(*plVar10 + 0x248))(plVar10,unaff_x20[0x19],*(undefined8 *)(*plVar10 + 0x250));
    if (unaff_x20[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar10 = (long *)unaff_x20[0x1d];
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*plVar10 + 0x228))
              (plVar10,(long)*(int *)(unaff_x20[0x18] + 0x18),*(undefined8 *)(*plVar10 + 0x230));
  }
  if ((char)unaff_x20[0x17] != '\0') {
    plVar10 = (long *)*unaff_x29;
    uVar11 = FUN_015ff8a0(*plVar6,0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
                    /* try { // try from 014afd74 to 015afda3 has its CatchHandler @ 014b03c4 */
    if ((uVar11 & 1) == 0) {
      plVar5 = plVar6;
    }
    (**(code **)(*plVar10 + 0x1d8))(plVar10,*plVar5,*(undefined8 *)(*plVar10 + 0x1e0));
    plVar5 = (long *)unaff_x20[0x13];
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar6 = (long *)unaff_x20[0x1d];
    uVar13 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c(uVar13,uVar13);
    }
    (**(code **)(*plVar6 + 0x248))(plVar6,uVar13,*(undefined8 *)(*plVar6 + 0x250));
    if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
                    /* try { // try from 014afdc8 to 015afdd7 has its CatchHandler @ 014b03bc */
    FUN_02089968(*unaff_x29,1,0);
  }
  puVar1 = System_Xml_XmlImplementation_TypeInfo;
  if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* try { // try from 014afdec to 015afdef has its CatchHandler @ 014b03b4 */
  uVar11 = FUN_0129aa60(in_stack_00000050,*(undefined8 *)System_Xml_XmlImplementation_TypeInfo,
                        *(undefined8 *)
                         Method_System_Collections_Generic_List_Enumerator<CwShaderBundle_ShaderVariant>_MoveNext__
                       );
  puVar3 = Method_Meta_XR_MRUtilityKit_SerializationHelpers_Vector3ArrayConverter_ReadJson__;
  if ((uVar11 & 1) != 0) {
    if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = *unaff_x29;
    FUN_01299bc0(in_stack_00000050,*(undefined8 *)puVar1,&stack0x00000010,
                 *(undefined8 *)
                  Method_Meta_XR_MRUtilityKit_SerializationHelpers_Vector3ArrayConverter_ReadJson__)
    ;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_02089b24(lVar7,in_stack_00000010,0);
    if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0129de0c(in_stack_00000050,*(undefined8 *)puVar1,*(undefined8 *)StringLiteral_587);
  }
  if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar7 = FUN_012998a8(in_stack_00000050,*(undefined8 *)PTR_DAT_033f0390);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01311764(lVar7,&stack0x00000010,*(undefined8 *)PTR_DAT_033f41b0);
  puVar4 = Method_System_Reflection_Emit_TypeBuilder_get_UnderlyingSystemType__;
  puVar2 = Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_RemoveCallback__;
  puVar1 = UnityEngine_EventSystems_IDeselectHandler_TypeInfo;
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000020;
  while (uVar11 = FUN_012c2b80(&stack0x00000030,*(undefined8 *)puVar4), (uVar11 & 1) != 0) {
    uVar13 = FUN_00bc3fa8(&stack0x00000030,*(undefined8 *)puVar1);
    plVar5 = (long *)*unaff_x29;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200));
    if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01299bc0(in_stack_00000050,uVar13,&stack0x00000010,*(undefined8 *)puVar3);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0200a0ac(lVar7,uVar13,in_stack_00000010,0);
  }
  if (unaff_w27 < 0) {
    FUN_012c2b7c(&stack0x00000030,
                 *(undefined8 *)Method_System_Collections_Hashtable_HashtableEnumerator_get_Key__);
  }
  uVar13 = (**(code **)(*unaff_x20 + 0x188))();
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar3 = Method_Oculus_Interaction_PointerInteractable<GrabInteractor,_GrabInteractable>_Start__;
  puVar1 = System_SystemException_TypeInfo;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_012d1810(lVar7);
  if (*(int *)(*(long *)Method_System_IO_BinaryReader_ReadString__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_014e0a9c(uVar13,lVar7,0);
  plVar5 = (long *)*unaff_x29;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  (**(code **)(*plVar5 + 0x2b8))(plVar5,0xffffffff,*(undefined8 *)(*plVar5 + 0x2c0));
  plVar5 = (long *)*unaff_x29;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar13 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
  uVar11 = thunk_FUN_015fe514(uVar13,*(undefined8 *)
                                      Method_UnityEngine_Rendering_Universal_LibTessDotNet_PriorityQueue<MeshUtils_Vertex>_Insert__
                              ,0);
  if ((uVar11 & 1) == 0) {
    plVar5 = (long *)*unaff_x29;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar13 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
    uVar11 = thunk_FUN_015fe514(uVar13,*(undefined8 *)StringLiteral_7622,0);
    if ((uVar11 & 1) == 0) goto LAB_014af9d0;
  }
  plVar5 = (long *)*unaff_x29;
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_016f4a88(lVar7);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar13 = (**(code **)(*plVar5 + 0x2f8))(plVar5,lVar7,*unaff_x29,*(undefined8 *)(*plVar5 + 0x300));
  lVar7 = FUN_014df900(uVar13,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  in_stack_00000028 = FUN_017e7d88(lVar7,0);
  uVar11 = FUN_016a1310(&stack0x00000028,0);
  if ((uVar11 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
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
  plVar5 = (long *)unaff_x20[0x1d];
  if (plVar5 == (long *)0x0) {
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_016f27fc(lVar7);
    FUN_012345d4();
  }
  else {
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_016f4a88(lVar7);
    uVar13 = (**(code **)(*plVar5 + 0x2d8))
                       (plVar5,lVar7,unaff_x20[0x1d],*(undefined8 *)(*plVar5 + 0x2e0));
    lVar7 = FUN_014df900(uVar13,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    in_stack_00000028 = FUN_017e7d88(lVar7,0);
    uVar11 = FUN_016a1310(&stack0x00000028,0);
    if ((uVar11 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_010bbddc(unaff_x19 + 2,&stack0x00000028);
      return;
    }
    FUN_016a13e0(&stack0x00000028,0);
  }
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_016a2130(unaff_x19 + 2,0);
  return;
}


