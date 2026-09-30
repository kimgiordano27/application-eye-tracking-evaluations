/*
FUNCTION_NAME: Obi.ObiTriangleMeshContainer$$DestroyTriangleMesh
ENTRY_POINT: 0180dd18
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Obi_ObiTriangleMeshContainer__DestroyTriangleMesh(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  long *unaff_x20;
  long *plVar16;
  long unaff_x24;
  long *unaff_x28;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  thunk_FUN_00d48444(StringLiteral_10364);
  thunk_FUN_00d48444(Polenter_Serialization_Core_ReferenceInfo_TypeInfo);
  thunk_FUN_00d48444(Method_System_Nullable<OVRTelemetryMarker>_get_HasValue__);
  thunk_FUN_00d48444(Method_Oculus_Interaction_PokeInteractableVisual_UpdateComponentPosition__);
  thunk_FUN_00d48444(System_Threading_Tasks_SynchronizationContextTaskScheduler_<>c_TypeInfo);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<string,_PropertyDescriptor>_get_Values__
                    );
  thunk_FUN_00d48444(Method_UnityEngine_Object_FindObjectOfType<ControllerMapping>__);
  thunk_FUN_00d48444(
                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_108>_SliceWithStride<Color32>__
                    );
  thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<UEncroachingSegment>_Dispose__);
  thunk_FUN_00d48444(StringLiteral_10557);
  thunk_FUN_00d48444(
                    Method_System_String_Create<ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>__
                    );
  thunk_FUN_00d48444(UnityEngine_EventSystems_PointerInputModule_ButtonState_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_12890);
  thunk_FUN_00d48444(PTR_DAT_033f42e8);
  thunk_FUN_00d48444(StringLiteral_11315);
  thunk_FUN_00d48444(PTR_DAT_033f63d0);
  thunk_FUN_00d48444(StringLiteral_2238);
  thunk_FUN_00d48444(StringLiteral_10725);
  thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_MakeUnary__);
  *(undefined1 *)(unaff_x24 + 0x3df) = 1;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  FUN_01865608();
  in_stack_00000050 = 0;
  lVar7 = *(long *)(*unaff_x28 + 0x20);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  plVar16 = unaff_x20 + 0xf;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_PropertyDescriptor>_get_Values__;
  pcVar8 = (char *)thunk_FUN_00d32ed4(plVar16,*(undefined8 *)(lVar7 + 0x80));
  if (*pcVar8 != '\0') {
    if (unaff_x19 == 0) goto LAB_0180e794;
    in_stack_00000028 = *plVar16;
    iVar6 = *(int *)(unaff_x19 + 0x34);
    iVar5 = FUN_00beaec8(&stack0x00000028,*(undefined8 *)puVar3);
    lVar7 = *(long *)(*unaff_x28 + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c(lVar7);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    pcVar8 = (char *)thunk_FUN_00d32ed4(&stack0x00000028,*(undefined8 *)(lVar7 + 0x80));
    if ((iVar6 != iVar5) || (*pcVar8 == '\0')) {
      in_stack_00000058._4_4_ = *(undefined4 *)(unaff_x19 + 0x34);
      FUN_01347274(&stack0x00000050,(long)&stack0x00000058 + 4,
                   *(undefined8 *)
                    Method_Unity_Collections_NativeArray<UEncroachingSegment>_Dispose__);
      FUN_00beaec8(plVar16,*(undefined8 *)puVar3);
      FUN_01842ce0();
    }
  }
  puVar2 = PTR_DAT_033f63d0;
  in_stack_00000048 = 0;
  lVar7 = *(long *)(*(long *)PTR_DAT_033f63d0 + 0x20);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  plVar16 = unaff_x20 + 0x10;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  puVar4 = Method_Oculus_Interaction_PokeInteractableVisual_UpdateComponentPosition__;
  pcVar8 = (char *)thunk_FUN_00d32ed4(plVar16,*(undefined8 *)(lVar7 + 0x80));
  if (*pcVar8 != '\0') {
    if (unaff_x19 == 0) goto LAB_0180e794;
    in_stack_00000020 = *plVar16;
    iVar6 = *(int *)(unaff_x19 + 0x3c);
    iVar5 = FUN_00beafd0(&stack0x00000020,*(undefined8 *)puVar4);
    lVar7 = *(long *)(*(long *)puVar2 + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c(lVar7);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    pcVar8 = (char *)thunk_FUN_00d32ed4(&stack0x00000020,*(undefined8 *)(lVar7 + 0x80));
    if ((iVar6 != iVar5) || (*pcVar8 == '\0')) {
      in_stack_00000058._4_4_ = *(undefined4 *)(unaff_x19 + 0x3c);
      FUN_01347274(&stack0x00000048,(long)&stack0x00000058 + 4,
                   *(undefined8 *)UnityEngine_EventSystems_PointerInputModule_ButtonState_TypeInfo);
      FUN_00beafd0(plVar16,*(undefined8 *)puVar4);
      FUN_01842d4c();
    }
  }
  in_stack_00000040 = 0;
  lVar7 = *(long *)(*(long *)StringLiteral_2238 + 0x20);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  plVar16 = unaff_x20 + 0x11;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  puVar2 = System_Threading_Tasks_SynchronizationContextTaskScheduler_<>c_TypeInfo;
  pcVar8 = (char *)thunk_FUN_00d32ed4(plVar16,*(undefined8 *)(lVar7 + 0x80));
  if (*pcVar8 != '\0') {
    if (unaff_x19 == 0) goto LAB_0180e794;
    in_stack_00000018 = *plVar16;
    iVar6 = *(int *)(unaff_x19 + 0x40);
    iVar5 = FUN_00beb0d8(&stack0x00000018,*(undefined8 *)puVar2);
    lVar7 = *(long *)(*(long *)StringLiteral_2238 + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c(lVar7);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    pcVar8 = (char *)thunk_FUN_00d32ed4(&stack0x00000018,*(undefined8 *)(lVar7 + 0x80));
    if ((iVar6 != iVar5) || (*pcVar8 == '\0')) {
      in_stack_00000058._4_4_ = *(undefined4 *)(unaff_x19 + 0x40);
      FUN_01347274(&stack0x00000040,(long)&stack0x00000058 + 4,
                   *(undefined8 *)
                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_108>_SliceWithStride<Color32>__
                  );
      FUN_00beb0d8(plVar16,*(undefined8 *)puVar2);
      FUN_01842db8();
    }
  }
  in_stack_00000038 = 0;
  lVar7 = *(long *)(*(long *)PTR_DAT_033f42e8 + 0x20);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  plVar16 = unaff_x20 + 0x13;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  puVar2 = Method_System_Nullable<OVRTelemetryMarker>_get_HasValue__;
  pcVar8 = (char *)thunk_FUN_00d32ed4(plVar16,*(undefined8 *)(lVar7 + 0x80));
  if (*pcVar8 != '\0') {
    if (unaff_x19 == 0) goto LAB_0180e794;
    in_stack_00000010 = *plVar16;
    iVar6 = *(int *)(unaff_x19 + 0x48);
    iVar5 = FUN_00beb3f0(&stack0x00000010,*(undefined8 *)puVar2);
    lVar7 = *(long *)(*(long *)PTR_DAT_033f42e8 + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c(lVar7);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    pcVar8 = (char *)thunk_FUN_00d32ed4(&stack0x00000010,*(undefined8 *)(lVar7 + 0x80));
    if ((iVar6 != iVar5) || (*pcVar8 == '\0')) {
      in_stack_00000058._4_4_ = *(undefined4 *)(unaff_x19 + 0x48);
      FUN_01347274(&stack0x00000038,(long)&stack0x00000058 + 4,
                   *(undefined8 *)
                    Method_System_String_Create<ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>__
                  );
      FUN_00beb3f0(plVar16,*(undefined8 *)puVar2);
      FUN_01842ea0();
    }
  }
  in_stack_00000030 = 0;
  lVar7 = *(long *)(*(long *)StringLiteral_11315 + 0x20);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  plVar16 = unaff_x20 + 0x15;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  puVar2 = Method_UnityEngine_Object_FindObjectOfType<ControllerMapping>__;
  pcVar8 = (char *)thunk_FUN_00d32ed4(plVar16,*(undefined8 *)(lVar7 + 0x80));
  if (*pcVar8 != '\0') {
    if (unaff_x19 == 0) goto LAB_0180e794;
    in_stack_00000008 = *plVar16;
    iVar6 = *(int *)(unaff_x19 + 0x44);
    iVar5 = FUN_00beb4f8(&stack0x00000008,*(undefined8 *)puVar2);
    lVar7 = *(long *)(*(long *)StringLiteral_11315 + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c(lVar7);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    pcVar8 = (char *)thunk_FUN_00d32ed4(&stack0x00000008,*(undefined8 *)(lVar7 + 0x80));
    if ((iVar6 != iVar5) || (*pcVar8 == '\0')) {
      in_stack_00000058._4_4_ = *(undefined4 *)(unaff_x19 + 0x44);
      FUN_01347274(&stack0x00000030,(long)&stack0x00000058 + 4,*(undefined8 *)StringLiteral_10557);
      FUN_00beb4f8(plVar16,*(undefined8 *)puVar2);
      FUN_01842e24();
    }
  }
  plVar16 = (long *)unaff_x20[0x16];
  lVar7 = 0;
  if (plVar16 != (long *)0x0) {
    if (unaff_x19 == 0) goto LAB_0180e794;
    uVar9 = FUN_01832208();
    uVar10 = (**(code **)(*plVar16 + 0x138))(plVar16,uVar9,*(undefined8 *)(*plVar16 + 0x140));
    lVar7 = 0;
    if ((uVar10 & 1) == 0) {
      lVar7 = FUN_01832208();
      *(long *)(unaff_x19 + 0x58) = unaff_x20[0x16];
    }
  }
  if ((char)unaff_x20[0x1a] == '\0') {
    uVar9 = 0;
  }
  else {
    if (unaff_x19 == 0) goto LAB_0180e794;
    uVar10 = FUN_015fe7e8(*(undefined8 *)(unaff_x19 + 0x50),unaff_x20[0x19],0);
    uVar9 = 0;
    if ((uVar10 & 1) != 0) {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x50);
      *(long *)(unaff_x19 + 0x50) = unaff_x20[0x19];
    }
  }
  puVar2 = StringLiteral_10364;
  lVar11 = (**(code **)(*unaff_x20 + 0x1f8))();
  if (lVar11 == 0) {
LAB_0180e478:
    lVar11 = 0;
  }
  else {
    plVar16 = (long *)(**(code **)(*unaff_x20 + 0x1f8))();
    if (plVar16 == (long *)0x0) goto LAB_0180e794;
    lVar14 = *plVar16;
    lVar11 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar11) {
          puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0180e43c;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar16,lVar11,0);
LAB_0180e43c:
    iVar6 = (*(code *)*puVar12)(plVar16,puVar12[1]);
    if (iVar6 < 4) goto LAB_0180e478;
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_10725);
    if (lVar11 == 0) goto LAB_0180e794;
    FUN_0188e0b0();
  }
  lVar14 = thunk_FUN_00d62348(*(undefined8 *)Polenter_Serialization_Core_ReferenceInfo_TypeInfo);
  if (lVar14 != 0) {
    FUN_01883acc();
    lVar1 = lVar11;
    if (lVar11 == 0) {
      lVar1 = unaff_x19;
    }
    FUN_01883b58(lVar14,lVar1);
    if (lVar11 != 0) {
      plVar16 = (long *)(**(code **)(*unaff_x20 + 0x1f8))();
      uVar13 = FUN_0188e27c(lVar11,0);
      if (plVar16 == (long *)0x0) goto LAB_0180e794;
      lVar14 = *plVar16;
      lVar11 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar11) {
            puVar12 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_0180e538;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar16,lVar11,1);
LAB_0180e538:
      (*(code *)*puVar12)(plVar16,4,uVar13,0,puVar12[1]);
    }
    lVar11 = *(long *)(*unaff_x28 + 0x20);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    pcVar8 = (char *)thunk_FUN_00d32ed4(&stack0x00000050,*(undefined8 *)(lVar11 + 0x80));
    if (*pcVar8 != '\0') {
      FUN_00beaec8(&stack0x00000050,*(undefined8 *)puVar3);
      if (unaff_x19 == 0) goto LAB_0180e794;
      FUN_01842ce0();
    }
    lVar11 = *(long *)(*(long *)PTR_DAT_033f63d0 + 0x20);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    pcVar8 = (char *)thunk_FUN_00d32ed4(&stack0x00000048,*(undefined8 *)(lVar11 + 0x80));
    if (*pcVar8 != '\0') {
      FUN_00beafd0(&stack0x00000048,*(undefined8 *)puVar4);
      if (unaff_x19 == 0) goto LAB_0180e794;
      FUN_01842d4c();
    }
    lVar11 = *(long *)(*(long *)StringLiteral_2238 + 0x20);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    puVar4 = Method_UnityEngine_Object_FindObjectOfType<ControllerMapping>__;
    puVar2 = Method_System_Nullable<OVRTelemetryMarker>_get_HasValue__;
    puVar3 = System_Threading_Tasks_SynchronizationContextTaskScheduler_<>c_TypeInfo;
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    pcVar8 = (char *)thunk_FUN_00d32ed4(&stack0x00000040,*(undefined8 *)(lVar11 + 0x80));
    if (*pcVar8 != '\0') {
      FUN_00beb0d8(&stack0x00000040,*(undefined8 *)puVar3);
      if (unaff_x19 == 0) goto LAB_0180e794;
      FUN_01842db8();
    }
    lVar11 = *(long *)(*(long *)PTR_DAT_033f42e8 + 0x20);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    pcVar8 = (char *)thunk_FUN_00d32ed4(&stack0x00000038,*(undefined8 *)(lVar11 + 0x80));
    if (*pcVar8 != '\0') {
      FUN_00beb3f0(&stack0x00000038,*(undefined8 *)puVar2);
      if (unaff_x19 == 0) goto LAB_0180e794;
      FUN_01842ea0();
    }
    lVar11 = *(long *)(*(long *)StringLiteral_11315 + 0x20);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    pcVar8 = (char *)thunk_FUN_00d32ed4(&stack0x00000030,*(undefined8 *)(lVar11 + 0x80));
    if (*pcVar8 != '\0') {
      FUN_00beb4f8(&stack0x00000030,*(undefined8 *)puVar4);
      if (unaff_x19 == 0) goto LAB_0180e794;
      FUN_01842e24();
    }
    if ((char)unaff_x20[0x1a] != '\0') {
      if (unaff_x19 == 0) goto LAB_0180e794;
      *(undefined8 *)(unaff_x19 + 0x50) = uVar9;
    }
    if (lVar7 != 0) {
      if (unaff_x19 == 0) goto LAB_0180e794;
      *(long *)(unaff_x19 + 0x58) = lVar7;
    }
    return;
  }
LAB_0180e794:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


