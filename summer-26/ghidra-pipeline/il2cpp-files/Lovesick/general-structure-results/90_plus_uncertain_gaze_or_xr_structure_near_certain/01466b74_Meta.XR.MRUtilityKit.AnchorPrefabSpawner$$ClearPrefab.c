/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ClearPrefab
ENTRY_POINT: 01466b74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 142
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ClearPrefab(void)

{
  byte bVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  char cVar16;
  long unaff_x20;
  long unaff_x23;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int iVar28;
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
  
  puVar4 = StringLiteral_302;
  if (*(int *)(unaff_x20 + 0x2c) == 0) {
    iVar28 = *(int *)(*(long *)StringLiteral_302 + 0xe0);
    puVar2 = (undefined8 *)Method_MetaXRAcousticMap_<>c__DisplayClass35_0_<LoadMapFromMemory>b__0__;
  }
  else {
    if (DAT_03774e1b == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03774e1b = '\x01';
    }
    puVar7 = System_Threading_Timer_TimerComparer_TypeInfo;
    fVar27 = *(float *)(unaff_x20 + 0x30);
    fVar26 = *(float *)(unaff_x20 + 0x34);
    fVar25 = *(float *)(unaff_x20 + 0x38);
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (SQRT(fVar27 * fVar27 + fVar26 * fVar26 + fVar25 * fVar25) <= DAT_028aa898) {
      iVar28 = *(int *)(*(long *)puVar4 + 0xe0);
      puVar2 = (undefined8 *)Method_WavelengthGrabbableIndicator_WavelengthStarted__;
    }
    else {
      if (DAT_028aa898 < *(float *)(unaff_x20 + 0x3c)) {
        fVar25 = *(float *)(unaff_x20 + 0x30);
        fVar26 = *(float *)(unaff_x20 + 0x34);
        fVar27 = *(float *)(unaff_x20 + 0x38);
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_0377518c = '\x01';
        }
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar3 = DAT_028aa038;
        fVar25 = SQRT(fVar27 * fVar27 + fVar25 * fVar25 + fVar26 * fVar26);
        if (fVar25 <= DAT_028aa038) {
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          uVar13 = **(undefined8 **)
                     (*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
          fVar25 = *(float *)(*(undefined8 **)
                               (*(long *)
                                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                               + 0xb8) + 1);
        }
        else {
          uVar13 = CONCAT44((float)((ulong)*(undefined8 *)(unaff_x20 + 0x30) >> 0x20) / fVar25,
                            (float)*(undefined8 *)(unaff_x20 + 0x30) / fVar25);
          fVar25 = *(float *)(unaff_x20 + 0x38) / fVar25;
        }
        uVar22 = (ulong)(uint)fVar25;
        *(undefined8 *)(unaff_x20 + 0x30) = uVar13;
        *(float *)(unaff_x20 + 0x38) = fVar25;
        if (DAT_037750c4 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_037750c4 = '\x01';
        }
        puVar5 = 
        Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_InteractableSet__;
        fStack000000000000001c = (float)((ulong)uVar13 >> 0x20);
        uVar24 = (ulong)*(uint *)(*(long *)(*(long *)
                                             Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                           + 0xb8) + 0x18);
        uVar17 = FUN_026987a4(0);
        uVar23 = uVar22;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)puVar5,0);
        puVar9 = Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__;
        puVar8 = 
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
        fVar25 = _LAB_028aa024;
        uVar20 = (ulong)(uint)DAT_028aa158;
        in_stack_00000078 = in_stack_00000040;
        in_stack_00000070 = in_stack_00000038;
        in_stack_00000080 = in_stack_00000048;
        fStack0000000000000014 = DAT_028aa158;
LAB_01466e24:
        do {
          do {
            uVar11 = FUN_012b894c(&stack0x00000070,*(undefined8 *)puVar8);
            if ((uVar11 & 1) == 0) {
              FUN_012b8948(&stack0x00000070,
                           *(undefined8 *)
                            Field_<PrivateImplementationDetails>_A199F717FBA4D1378A33D65E9660E45ADC176876A3450BACF2A80DA985FBDF14
                          );
              return;
            }
            lVar12 = FUN_00ac2bf8(&stack0x00000070,*(undefined8 *)puVar4);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_0268b4e0(lVar12,0,0);
          } while ((uVar11 & 1) != 0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_010e58e8(lVar12,&stack0x00000038,*(undefined8 *)puVar6);
          plVar10 = in_stack_00000038;
          fVar27 = (float)uVar23;
          fVar26 = (float)uVar20;
        } while (in_stack_00000038 == (long *)0x0);
        lVar12 = *in_stack_00000038;
        bVar1 = *(byte *)(*(long *)PTR_DAT_033f17f8 + 300);
        if ((*(byte *)(lVar12 + 300) < bVar1) ||
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_033f17f8)
           ) goto LAB_01466eb8;
        goto LAB_01466edc;
      }
      iVar28 = *(int *)(*(long *)puVar4 + 0xe0);
      puVar2 = (undefined8 *)
               Newtonsoft_Json_Utilities_ReflectionObject_<>c__DisplayClass11_1_TypeInfo;
    }
  }
  if (iVar28 == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026610e4(*puVar2,0);
  return;
LAB_01466eb8:
  bVar1 = *(byte *)(*(long *)puVar9 + 300);
  if ((*(byte *)(lVar12 + 300) < bVar1) ||
     (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar9))
  goto LAB_01466e24;
LAB_01466edc:
  FUN_02667cd8(&stack0x00000038,in_stack_00000038,0);
  in_stack_00000058 = in_stack_00000040;
  in_stack_00000050 = in_stack_00000038;
  in_stack_00000060 = in_stack_00000048;
  fVar18 = (float)FUN_02687a80(&stack0x00000050,0);
  fVar21 = (float)uVar22;
  fVar19 = fStack000000000000001c;
  fVar26 = (float)FUN_02699088(uVar17,fStack000000000000001c,uVar22 & 0xffffffff,uVar24,
                               fVar18 - *(float *)(unaff_x20 + 0x14),
                               fVar26 - *(float *)(unaff_x20 + 0x18),
                               fVar27 - *(float *)(unaff_x20 + 0x1c),0);
  if (DAT_03775439 == '\0') {
    thunk_FUN_00d48444(puVar7);
    DAT_03775439 = '\x01';
  }
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_0377518c == '\0') {
    thunk_FUN_00d48444(puVar7);
    DAT_0377518c = '\x01';
  }
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar27 = SQRT(fVar21 * fVar21 + fVar26 * fVar26 + fVar19 * fVar19);
  if (fVar27 <= fVar3) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    fVar19 = **(float **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
    fVar27 = (*(float **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8))[2];
  }
  else {
    fVar19 = fVar26 / fVar27;
    fVar27 = fVar21 / fVar27;
  }
  uVar23 = (ulong)(uint)ABS(fVar19);
  if (ABS(fVar19) < fVar25) {
    uVar23 = (ulong)(uint)ABS(fVar27);
    fVar18 = 0.0;
    if (ABS(fVar27) < fVar25) goto LAB_01467040;
  }
  fVar18 = atan2f(fVar19,fVar27);
  fVar18 = fVar18 * fStack0000000000000014;
  if (fVar18 < 0.0) {
    fVar18 = fVar18 + 360.0;
  }
LAB_01467040:
  iVar28 = *(int *)(unaff_x20 + 0x2c);
  if (DAT_03775509 == '\0') {
    thunk_FUN_00d48444(puVar7);
    DAT_03775509 = '\x01';
  }
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    cVar16 = DAT_03775509;
  }
  else {
    cVar16 = '\x01';
  }
  fVar27 = (fVar18 / 360.0) * (float)iVar28;
  iStack000000000000006c = -0x80000000;
  if ((float)(int)fVar27 != INFINITY) {
    iStack000000000000006c = (int)fVar27;
  }
  fVar27 = *(float *)(unaff_x20 + 0x3c);
  if (cVar16 == '\0') {
    thunk_FUN_00d48444(puVar7);
    DAT_03775509 = '\x01';
  }
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar27 = SQRT(fVar26 * fVar26 + fVar21 * fVar21) / fVar27;
  fVar26 = (float)(int)fVar27;
  uVar20 = (ulong)(uint)fVar26;
  iStack0000000000000068 = -0x80000000;
  if (fVar26 != INFINITY) {
    iStack0000000000000068 = (int)fVar27;
  }
  if ((iStack0000000000000068 == 0) && (*(char *)(unaff_x20 + 0x40) != '\0')) {
    iStack000000000000006c = 0;
  }
  uVar13 = FUN_0176eb1c((long)&stack0x00000068 + 4,0);
  uVar14 = FUN_0176eb1c(&stack0x00000068,0);
  FUN_0160073c(*(undefined8 *)StringLiteral_6525,uVar13,*(undefined8 *)StringLiteral_6124,uVar14,0);
  uVar11 = FUN_0129aa60();
  if ((uVar11 & 1) == 0) {
    plVar15 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                          Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320e50(plVar15,*(undefined8 *)
                          Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Vector3>__
                );
    FUN_0129a054();
  }
  else {
    FUN_01299bc0();
    plVar15 = in_stack_00000038;
  }
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar11 = FUN_01322618(plVar15,plVar10,
                        *(undefined8 *)
                         Method_UnityEngine_InputSystem_InputControlPath_TryGetDeviceLayout__);
  if ((uVar11 & 1) == 0) {
    FUN_00ad61c4(plVar15,plVar10,*(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_ScanOverValue__
                );
  }
  goto LAB_01466e24;
}


