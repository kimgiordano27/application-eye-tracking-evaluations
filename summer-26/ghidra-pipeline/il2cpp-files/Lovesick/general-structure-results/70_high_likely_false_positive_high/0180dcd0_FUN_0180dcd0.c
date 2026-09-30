/*
FUNCTION_NAME: FUN_0180dcd0
ENTRY_POINT: 0180dcd0
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


/* WARNING: Type propagation algorithm not settling */

void FUN_0180dcd0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98 [6];
  undefined4 local_64;
  
  puVar4 = StringLiteral_12890;
  puVar3 = Method_System_Linq_Expressions_Expression_MakeUnary__;
  if ((DAT_037793df & 1) == 0) {
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
    DAT_037793df = 1;
  }
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_a0 = 0;
  local_98[0] = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  FUN_01865608(param_2,*(undefined8 *)puVar3,0);
  local_98[5] = 0;
  lVar9 = *(long *)(*(long *)puVar4 + 0x20);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  plVar18 = param_1 + 0xf;
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_PropertyDescriptor>_get_Values__;
  pcVar10 = (char *)thunk_FUN_00d32ed4(plVar18,*(undefined8 *)(lVar9 + 0x80));
  if (*pcVar10 != '\0') {
    if (param_2 == 0) goto LAB_0180e794;
    local_98[0] = *plVar18;
    iVar8 = *(int *)(param_2 + 0x34);
    iVar6 = FUN_00beaec8(local_98,*(undefined8 *)puVar3);
    lVar9 = *(long *)(*(long *)puVar4 + 0x20);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(local_98,*(undefined8 *)(lVar9 + 0x80));
    if ((iVar8 != iVar6) || (*pcVar10 == '\0')) {
      local_64 = *(undefined4 *)(param_2 + 0x34);
      FUN_01347274(local_98 + 5,&local_64,
                   *(undefined8 *)
                    Method_Unity_Collections_NativeArray<UEncroachingSegment>_Dispose__);
      uVar7 = FUN_00beaec8(plVar18,*(undefined8 *)puVar3);
      FUN_01842ce0(param_2,uVar7,0);
    }
  }
  puVar2 = PTR_DAT_033f63d0;
  local_98[4] = 0;
  lVar9 = *(long *)(*(long *)PTR_DAT_033f63d0 + 0x20);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  plVar18 = param_1 + 0x10;
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  puVar5 = Method_Oculus_Interaction_PokeInteractableVisual_UpdateComponentPosition__;
  pcVar10 = (char *)thunk_FUN_00d32ed4(plVar18,*(undefined8 *)(lVar9 + 0x80));
  if (*pcVar10 != '\0') {
    if (param_2 == 0) goto LAB_0180e794;
    local_a0 = *plVar18;
    iVar8 = *(int *)(param_2 + 0x3c);
    iVar6 = FUN_00beafd0(&local_a0,*(undefined8 *)puVar5);
    lVar9 = *(long *)(*(long *)puVar2 + 0x20);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(&local_a0,*(undefined8 *)(lVar9 + 0x80));
    if ((iVar8 != iVar6) || (*pcVar10 == '\0')) {
      local_64 = *(undefined4 *)(param_2 + 0x3c);
      FUN_01347274(local_98 + 4,&local_64,
                   *(undefined8 *)UnityEngine_EventSystems_PointerInputModule_ButtonState_TypeInfo);
      uVar7 = FUN_00beafd0(plVar18,*(undefined8 *)puVar5);
      FUN_01842d4c(param_2,uVar7,0);
    }
  }
  local_98[3] = 0;
  lVar9 = *(long *)(*(long *)StringLiteral_2238 + 0x20);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  plVar18 = param_1 + 0x11;
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  puVar2 = System_Threading_Tasks_SynchronizationContextTaskScheduler_<>c_TypeInfo;
  pcVar10 = (char *)thunk_FUN_00d32ed4(plVar18,*(undefined8 *)(lVar9 + 0x80));
  if (*pcVar10 != '\0') {
    if (param_2 == 0) goto LAB_0180e794;
    local_a8 = *plVar18;
    iVar8 = *(int *)(param_2 + 0x40);
    iVar6 = FUN_00beb0d8(&local_a8,*(undefined8 *)puVar2);
    lVar9 = *(long *)(*(long *)StringLiteral_2238 + 0x20);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(&local_a8,*(undefined8 *)(lVar9 + 0x80));
    if ((iVar8 != iVar6) || (*pcVar10 == '\0')) {
      local_64 = *(undefined4 *)(param_2 + 0x40);
      FUN_01347274(local_98 + 3,&local_64,
                   *(undefined8 *)
                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_108>_SliceWithStride<Color32>__
                  );
      uVar7 = FUN_00beb0d8(plVar18,*(undefined8 *)puVar2);
      FUN_01842db8(param_2,uVar7,0);
    }
  }
  local_98[2] = 0;
  lVar9 = *(long *)(*(long *)PTR_DAT_033f42e8 + 0x20);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  plVar18 = param_1 + 0x13;
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  puVar2 = Method_System_Nullable<OVRTelemetryMarker>_get_HasValue__;
  pcVar10 = (char *)thunk_FUN_00d32ed4(plVar18,*(undefined8 *)(lVar9 + 0x80));
  if (*pcVar10 != '\0') {
    if (param_2 == 0) goto LAB_0180e794;
    local_b0 = *plVar18;
    iVar8 = *(int *)(param_2 + 0x48);
    iVar6 = FUN_00beb3f0(&local_b0,*(undefined8 *)puVar2);
    lVar9 = *(long *)(*(long *)PTR_DAT_033f42e8 + 0x20);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(&local_b0,*(undefined8 *)(lVar9 + 0x80));
    if ((iVar8 != iVar6) || (*pcVar10 == '\0')) {
      local_64 = *(undefined4 *)(param_2 + 0x48);
      FUN_01347274(local_98 + 2,&local_64,
                   *(undefined8 *)
                    Method_System_String_Create<ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>__
                  );
      uVar7 = FUN_00beb3f0(plVar18,*(undefined8 *)puVar2);
      FUN_01842ea0(param_2,uVar7,0);
    }
  }
  local_98[1] = 0;
  lVar9 = *(long *)(*(long *)StringLiteral_11315 + 0x20);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  plVar18 = param_1 + 0x15;
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  puVar2 = Method_UnityEngine_Object_FindObjectOfType<ControllerMapping>__;
  pcVar10 = (char *)thunk_FUN_00d32ed4(plVar18,*(undefined8 *)(lVar9 + 0x80));
  if (*pcVar10 != '\0') {
    if (param_2 == 0) goto LAB_0180e794;
    local_b8 = *plVar18;
    iVar8 = *(int *)(param_2 + 0x44);
    iVar6 = FUN_00beb4f8(&local_b8,*(undefined8 *)puVar2);
    lVar9 = *(long *)(*(long *)StringLiteral_11315 + 0x20);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(&local_b8,*(undefined8 *)(lVar9 + 0x80));
    if ((iVar8 != iVar6) || (*pcVar10 == '\0')) {
      local_64 = *(undefined4 *)(param_2 + 0x44);
      FUN_01347274(local_98 + 1,&local_64,*(undefined8 *)StringLiteral_10557);
      uVar7 = FUN_00beb4f8(plVar18,*(undefined8 *)puVar2);
      FUN_01842e24(param_2,uVar7,0);
    }
  }
  plVar18 = (long *)param_1[0x16];
  lVar9 = 0;
  if (plVar18 != (long *)0x0) {
    if (param_2 == 0) goto LAB_0180e794;
    uVar11 = FUN_01832208(param_2,0);
    uVar12 = (**(code **)(*plVar18 + 0x138))(plVar18,uVar11,*(undefined8 *)(*plVar18 + 0x140));
    lVar9 = 0;
    if ((uVar12 & 1) == 0) {
      lVar9 = FUN_01832208(param_2,0);
      *(long *)(param_2 + 0x58) = param_1[0x16];
    }
  }
  if ((char)param_1[0x1a] == '\0') {
    uVar11 = 0;
  }
  else {
    if (param_2 == 0) goto LAB_0180e794;
    uVar12 = FUN_015fe7e8(*(undefined8 *)(param_2 + 0x50),param_1[0x19],0);
    uVar11 = 0;
    if ((uVar12 & 1) != 0) {
      uVar11 = *(undefined8 *)(param_2 + 0x50);
      *(long *)(param_2 + 0x50) = param_1[0x19];
    }
  }
  puVar2 = StringLiteral_10364;
  lVar13 = (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  if (lVar13 == 0) {
LAB_0180e478:
    lVar13 = 0;
  }
  else {
    plVar18 = (long *)(**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    if (plVar18 == (long *)0x0) goto LAB_0180e794;
    lVar16 = *plVar18;
    lVar13 = *(long *)puVar2;
    uVar12 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar12 != 0) {
      piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar13) {
          puVar14 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0180e43c;
        }
        uVar12 = uVar12 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar12 != 0);
    }
    puVar14 = (undefined8 *)FUN_00d59724(plVar18,lVar13,0);
LAB_0180e43c:
    iVar8 = (*(code *)*puVar14)(plVar18,puVar14[1]);
    if (iVar8 < 4) goto LAB_0180e478;
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_10725);
    if (lVar13 == 0) goto LAB_0180e794;
    FUN_0188e0b0(lVar13,param_2,0);
  }
  lVar16 = thunk_FUN_00d62348(*(undefined8 *)Polenter_Serialization_Core_ReferenceInfo_TypeInfo);
  if (lVar16 != 0) {
    FUN_01883acc(lVar16,param_1,0);
    lVar1 = lVar13;
    if (lVar13 == 0) {
      lVar1 = param_2;
    }
    FUN_01883b58(lVar16,lVar1,param_3,param_4,0);
    if (lVar13 != 0) {
      plVar18 = (long *)(**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
      uVar15 = FUN_0188e27c(lVar13,0);
      if (plVar18 == (long *)0x0) goto LAB_0180e794;
      lVar16 = *plVar18;
      lVar13 = *(long *)puVar2;
      uVar12 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar12 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar13) {
            puVar14 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0180e538;
          }
          uVar12 = uVar12 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar12 != 0);
      }
      puVar14 = (undefined8 *)FUN_00d59724(plVar18,lVar13,1);
LAB_0180e538:
      (*(code *)*puVar14)(plVar18,4,uVar15,0,puVar14[1]);
    }
    lVar13 = *(long *)(*(long *)puVar4 + 0x20);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(local_98 + 5,*(undefined8 *)(lVar13 + 0x80));
    if (*pcVar10 != '\0') {
      uVar7 = FUN_00beaec8(local_98 + 5,*(undefined8 *)puVar3);
      if (param_2 == 0) goto LAB_0180e794;
      FUN_01842ce0(param_2,uVar7,0);
    }
    lVar13 = *(long *)(*(long *)PTR_DAT_033f63d0 + 0x20);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(local_98 + 4,*(undefined8 *)(lVar13 + 0x80));
    if (*pcVar10 != '\0') {
      uVar7 = FUN_00beafd0(local_98 + 4,*(undefined8 *)puVar5);
      if (param_2 == 0) goto LAB_0180e794;
      FUN_01842d4c(param_2,uVar7,0);
    }
    lVar13 = *(long *)(*(long *)StringLiteral_2238 + 0x20);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    puVar2 = Method_UnityEngine_Object_FindObjectOfType<ControllerMapping>__;
    puVar4 = Method_System_Nullable<OVRTelemetryMarker>_get_HasValue__;
    puVar3 = System_Threading_Tasks_SynchronizationContextTaskScheduler_<>c_TypeInfo;
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(local_98 + 3,*(undefined8 *)(lVar13 + 0x80));
    if (*pcVar10 != '\0') {
      uVar7 = FUN_00beb0d8(local_98 + 3,*(undefined8 *)puVar3);
      if (param_2 == 0) goto LAB_0180e794;
      FUN_01842db8(param_2,uVar7,0);
    }
    lVar13 = *(long *)(*(long *)PTR_DAT_033f42e8 + 0x20);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(local_98 + 2,*(undefined8 *)(lVar13 + 0x80));
    if (*pcVar10 != '\0') {
      uVar7 = FUN_00beb3f0(local_98 + 2,*(undefined8 *)puVar4);
      if (param_2 == 0) goto LAB_0180e794;
      FUN_01842ea0(param_2,uVar7,0);
    }
    lVar13 = *(long *)(*(long *)StringLiteral_11315 + 0x20);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(local_98 + 1,*(undefined8 *)(lVar13 + 0x80));
    if (*pcVar10 != '\0') {
      uVar7 = FUN_00beb4f8(local_98 + 1,*(undefined8 *)puVar2);
      if (param_2 == 0) goto LAB_0180e794;
      FUN_01842e24(param_2,uVar7,0);
    }
    if ((char)param_1[0x1a] != '\0') {
      if (param_2 == 0) goto LAB_0180e794;
      *(undefined8 *)(param_2 + 0x50) = uVar11;
    }
    if (lVar9 != 0) {
      if (param_2 == 0) goto LAB_0180e794;
      *(long *)(param_2 + 0x58) = lVar9;
    }
    return;
  }
LAB_0180e794:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


