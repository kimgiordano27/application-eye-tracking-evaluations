/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ClearPrefab
ENTRY_POINT: 01466bcc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 139
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ClearPrefab(float param_1,float param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  char cVar15;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  float unaff_s8;
  float fVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  float fStack0000000000000014;
  float fStack000000000000001c;
  long *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  int iStack0000000000000068;
  int iStack000000000000006c;
  long *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  if (SQRT(param_1 + param_2 + unaff_s8 * unaff_s8) <= DAT_028aa898) {
    iVar27 = *(int *)(*unaff_x22 + 0xe0);
    puVar2 = (undefined8 *)Method_WavelengthGrabbableIndicator_WavelengthStarted__;
  }
  else {
    if (DAT_028aa898 < *(float *)(unaff_x20 + 0x3c)) {
      fVar24 = *(float *)(unaff_x20 + 0x30);
      fVar25 = *(float *)(unaff_x20 + 0x34);
      fVar26 = *(float *)(unaff_x20 + 0x38);
      if (DAT_0377518c == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_0377518c = '\x01';
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar3 = DAT_028aa038;
      fVar24 = SQRT(fVar26 * fVar26 + fVar24 * fVar24 + fVar25 * fVar25);
      if (fVar24 <= DAT_028aa038) {
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        uVar12 = **(undefined8 **)
                   (*(long *)
                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                   + 0xb8);
        fVar24 = *(float *)(*(undefined8 **)
                             (*(long *)
                               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                             + 0xb8) + 1);
      }
      else {
        uVar12 = CONCAT44((float)((ulong)*(undefined8 *)(unaff_x20 + 0x30) >> 0x20) / fVar24,
                          (float)*(undefined8 *)(unaff_x20 + 0x30) / fVar24);
        fVar24 = *(float *)(unaff_x20 + 0x38) / fVar24;
      }
      uVar21 = (ulong)(uint)fVar24;
      *(undefined8 *)(unaff_x20 + 0x30) = uVar12;
      *(float *)(unaff_x20 + 0x38) = fVar24;
      if (DAT_037750c4 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_037750c4 = '\x01';
      }
      puVar4 = 
      Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_InteractableSet__;
      fStack000000000000001c = (float)((ulong)uVar12 >> 0x20);
      uVar23 = (ulong)*(uint *)(*(long *)(*(long *)
                                           Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                         + 0xb8) + 0x18);
      uVar16 = FUN_026987a4(0);
      uVar22 = uVar21;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)puVar4,0);
      puVar8 = Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__;
      puVar7 = 
      Method_System_Collections_Generic_Dictionary<MRUKAnchor,_EffectMesh_EffectMeshObject>_GetEnumerator__
      ;
      puVar6 = System_Net_ServerCertValidationCallback_CallbackContext_TypeInfo;
      puVar5 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      puVar4 = PTR_DAT_033f1c28;
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01323390();
      fVar24 = _LAB_028aa024;
      uVar19 = (ulong)(uint)DAT_028aa158;
      in_stack_00000078 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000038;
      in_stack_00000080 = in_stack_00000048;
      fStack0000000000000014 = DAT_028aa158;
LAB_01466e24:
      do {
        do {
          uVar10 = FUN_012b894c(&stack0x00000070,*(undefined8 *)puVar7);
          if ((uVar10 & 1) == 0) {
            FUN_012b8948(&stack0x00000070,
                         *(undefined8 *)
                          Field_<PrivateImplementationDetails>_A199F717FBA4D1378A33D65E9660E45ADC176876A3450BACF2A80DA985FBDF14
                        );
            return;
          }
          lVar11 = FUN_00ac2bf8(&stack0x00000070,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_0268b4e0(lVar11,0,0);
        } while ((uVar10 & 1) != 0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_010e58e8(lVar11,&stack0x00000038,*(undefined8 *)puVar6);
        plVar9 = in_stack_00000038;
        fVar26 = (float)uVar22;
        fVar25 = (float)uVar19;
      } while (in_stack_00000038 == (long *)0x0);
      lVar11 = *in_stack_00000038;
      bVar1 = *(byte *)(*(long *)PTR_DAT_033f17f8 + 300);
      if ((*(byte *)(lVar11 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_033f17f8))
      goto LAB_01466eb8;
      goto LAB_01466edc;
    }
    iVar27 = *(int *)(*unaff_x22 + 0xe0);
    puVar2 = (undefined8 *)Newtonsoft_Json_Utilities_ReflectionObject_<>c__DisplayClass11_1_TypeInfo
    ;
  }
  if (iVar27 == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026610e4(*puVar2,0);
  return;
LAB_01466eb8:
  bVar1 = *(byte *)(*(long *)puVar8 + 300);
  if ((*(byte *)(lVar11 + 300) < bVar1) ||
     (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar8))
  goto LAB_01466e24;
LAB_01466edc:
  FUN_02667cd8(&stack0x00000038,in_stack_00000038,0);
  in_stack_00000058 = in_stack_00000040;
  in_stack_00000050 = in_stack_00000038;
  in_stack_00000060 = in_stack_00000048;
  fVar17 = (float)FUN_02687a80(&stack0x00000050,0);
  fVar20 = (float)uVar21;
  fVar18 = fStack000000000000001c;
  fVar25 = (float)FUN_02699088(uVar16,fStack000000000000001c,uVar21 & 0xffffffff,uVar23,
                               fVar17 - *(float *)(unaff_x20 + 0x14),
                               fVar25 - *(float *)(unaff_x20 + 0x18),
                               fVar26 - *(float *)(unaff_x20 + 0x1c),0);
  if (DAT_03775439 == '\0') {
    thunk_FUN_00d48444();
    DAT_03775439 = '\x01';
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_0377518c == '\0') {
    thunk_FUN_00d48444();
    DAT_0377518c = '\x01';
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar26 = SQRT(fVar20 * fVar20 + fVar25 * fVar25 + fVar18 * fVar18);
  if (fVar26 <= fVar3) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    fVar18 = **(float **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
    fVar26 = (*(float **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8))[2];
  }
  else {
    fVar18 = fVar25 / fVar26;
    fVar26 = fVar20 / fVar26;
  }
  uVar22 = (ulong)(uint)ABS(fVar18);
  if (ABS(fVar18) < fVar24) {
    uVar22 = (ulong)(uint)ABS(fVar26);
    fVar17 = 0.0;
    if (ABS(fVar26) < fVar24) goto LAB_01467040;
  }
  fVar17 = atan2f(fVar18,fVar26);
  fVar17 = fVar17 * fStack0000000000000014;
  if (fVar17 < 0.0) {
    fVar17 = fVar17 + 360.0;
  }
LAB_01467040:
  iVar27 = *(int *)(unaff_x20 + 0x2c);
  if (DAT_03775509 == '\0') {
    thunk_FUN_00d48444();
    DAT_03775509 = '\x01';
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    cVar15 = DAT_03775509;
  }
  else {
    cVar15 = '\x01';
  }
  fVar26 = (fVar17 / 360.0) * (float)iVar27;
  iStack000000000000006c = -0x80000000;
  if ((float)(int)fVar26 != INFINITY) {
    iStack000000000000006c = (int)fVar26;
  }
  fVar26 = *(float *)(unaff_x20 + 0x3c);
  if (cVar15 == '\0') {
    thunk_FUN_00d48444();
    DAT_03775509 = '\x01';
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar26 = SQRT(fVar25 * fVar25 + fVar20 * fVar20) / fVar26;
  fVar25 = (float)(int)fVar26;
  uVar19 = (ulong)(uint)fVar25;
  iStack0000000000000068 = -0x80000000;
  if (fVar25 != INFINITY) {
    iStack0000000000000068 = (int)fVar26;
  }
  if ((iStack0000000000000068 == 0) && (*(char *)(unaff_x20 + 0x40) != '\0')) {
    iStack000000000000006c = 0;
  }
  uVar12 = FUN_0176eb1c((long)&stack0x00000068 + 4,0);
  uVar13 = FUN_0176eb1c(&stack0x00000068,0);
  FUN_0160073c(*(undefined8 *)StringLiteral_6525,uVar12,*(undefined8 *)StringLiteral_6124,uVar13,0);
  uVar10 = FUN_0129aa60();
  if ((uVar10 & 1) == 0) {
    plVar14 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                          Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320e50(plVar14,*(undefined8 *)
                          Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Vector3>__
                );
    FUN_0129a054();
  }
  else {
    FUN_01299bc0();
    plVar14 = in_stack_00000038;
  }
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar10 = FUN_01322618(plVar14,plVar9,
                        *(undefined8 *)
                         Method_UnityEngine_InputSystem_InputControlPath_TryGetDeviceLayout__);
  if ((uVar10 & 1) == 0) {
    FUN_00ad61c4(plVar14,plVar9,*(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_ScanOverValue__)
    ;
  }
  goto LAB_01466e24;
}


