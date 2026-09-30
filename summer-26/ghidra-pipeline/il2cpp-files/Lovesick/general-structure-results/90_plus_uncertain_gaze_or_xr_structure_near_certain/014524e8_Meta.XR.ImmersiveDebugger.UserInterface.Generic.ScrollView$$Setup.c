/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView$$Setup
ENTRY_POINT: 014524e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__Setup(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  int in_w10;
  int *piVar17;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w22;
  float unaff_w23;
  int unaff_w24;
  undefined8 *unaff_x27;
  long *unaff_x29;
  float fVar18;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  iVar15 = in_w10;
  while( true ) {
    puVar2 = Polenter_Serialization_Serializing_PropertyTypeInfo<Property>_TypeInfo;
    if (in_stack_00000030._4_4_ < in_w10) {
      in_stack_00000030._4_4_ = iVar15;
    }
    lVar6 = *(long *)(unaff_x19 + 0x58);
    if (lVar6 == 0) goto LAB_014532b4;
    unaff_w22 = unaff_w22 + 1;
    if (*(int *)(lVar6 + 0x18) <= unaff_w22) break;
    FUN_0132138c(lVar6,unaff_w22,&stack0x00000038,*unaff_x27);
    lVar6 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
    if (lVar6 == 0) goto LAB_014532b4;
    if (*(char *)(unaff_x19 + 0x27) == '\0') {
      in_w10 = *(int *)(lVar6 + 0x38);
      iVar15 = in_w10;
    }
    else {
      fVar18 = (float)FUN_01444cbc(lVar6);
      in_w10 = *(int *)(lVar6 + 0x38);
      iVar15 = unaff_w24;
      if (fVar18 != unaff_w23) {
        iVar15 = (int)fVar18;
      }
    }
  }
  if (3 < in_stack_00000008._4_4_) {
    uVar7 = FUN_0176eb1c((long)&stack0x00000030 + 4,0);
    uVar7 = FUN_015f5b28(*(undefined8 *)puVar2,uVar7,0);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x29);
    }
    FUN_02660dac(uVar7,0);
  }
  *(int *)(unaff_x19 + 0x1c) = in_stack_00000030._4_4_;
  puVar3 = 
  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteSender>__;
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteSender>__
                            );
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>_Push__;
  if (lVar6 != 0) {
    FUN_01320e50(lVar6,*(undefined8 *)Method_TMPro_TMP_TextProcessingStack<float>_Push__);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar8 != 0) {
      FUN_01320e50(lVar8,*(undefined8 *)puVar2);
      puVar2 = StringLiteral_12054;
      lVar9 = *(long *)(unaff_x19 + 0x58);
      if (lVar9 != 0) {
        iVar15 = 0;
        goto LAB_0145263c;
      }
    }
  }
  goto LAB_014532b4;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_01452894:
    if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
      puVar10 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_014528e4;
    }
  }
LAB_014528ac:
  puVar10 = (undefined8 *)FUN_00d59724();
LAB_014528e4:
  uVar4 = (*(code *)*puVar10)();
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                            );
  if (lVar9 == 0) goto LAB_014532b4;
  FUN_01320e50(lVar9,*(undefined8 *)StringLiteral_11365);
  if (0 < *(int *)(lVar6 + 0x18)) {
    iVar15 = 0;
    do {
      FUN_0132138c(lVar6,iVar15,&stack0x00000038,*unaff_x27);
      lVar13 = *unaff_x20;
      lVar12 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar17 + 2) * 0x10 + 0x138);
            goto LAB_01452998;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724();
LAB_01452998:
      uVar5 = (*(code *)*puVar10)();
      if (lVar12 == 0) goto LAB_014532b4;
      FUN_014450f0(lVar12,uVar5);
      FUN_0132138c(lVar6,iVar15,&stack0x00000038,*unaff_x27);
      if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
      iVar1 = *(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x38);
      FUN_0132138c(lVar6,iVar15,&stack0x00000038,*unaff_x27);
      if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
      FUN_00bbed00((float)iVar1,
                   (float)*(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x3c),
                   lVar9,*(undefined8 *)puVar3);
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(lVar6 + 0x18));
  }
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar11 = (long *)Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(uVar4,0);
  if (plVar11 == (long *)0x0) goto LAB_014532b4;
  *(undefined1 *)((long)plVar11 + 0x14) = 0;
  lVar12 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11575);
  if (lVar12 == 0) goto LAB_014532b4;
  FUN_01320e50(lVar12,*(undefined8 *)System_Xml_IXmlLineInfo_TypeInfo);
  if (0 < *(int *)(lVar9 + 0x18)) {
    iVar15 = 0;
    do {
      in_stack_00000028 = 0;
      lVar13 = *unaff_x20;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar17 + 3) * 0x10 + 0x138);
            goto LAB_01452ad8;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724();
LAB_01452ad8:
      (*(code *)*puVar10)();
      FUN_00bbf8e0(lVar12,in_stack_00000028,*(undefined8 *)Method_UnityEngine_Vector3_set_Item__);
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(lVar9 + 0x18));
  }
  *(undefined4 *)(plVar11 + 2) = 5;
  lVar9 = (**(code **)(*plVar11 + 0x188))
                    (plVar11,lVar9,lVar12,*(undefined4 *)(unaff_x19 + 0x1c),
                     *(undefined4 *)(unaff_x19 + 0x20),0,*(undefined8 *)(*plVar11 + 400));
  puVar10 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  if (4 < in_stack_00000008._4_4_) {
    plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
    uStack0000000000000038 = *(undefined4 *)(lVar6 + 0x18);
    lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,&stack0x00000038);
    if (plVar11 == (long *)0x0) goto LAB_014532b4;
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
    goto LAB_014532bc;
    puVar10 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
    if ((int)plVar11[3] == 0) goto LAB_014532b8;
    plVar11[4] = lVar12;
    if (lVar9 == 0) goto LAB_014532b4;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_014532b8;
    if (*(long *)(lVar9 + 0x20) == 0) goto LAB_014532b4;
    uStack000000000000001c = *(undefined4 *)(*(long *)(lVar9 + 0x20) + 0x10);
    lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,(long)&stack0x00000018 + 4);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar11 + 3) < 2) || (plVar11[5] = lVar12, *(int *)(lVar9 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar9 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar9 + 0x20) + 0x14);
    lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,&stack0x00000018);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar11 + 3) < 3) || (plVar11[6] = lVar12, *(int *)(lVar9 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar9 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar9 + 0x20) + 0x18);
    lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,(long)&stack0x00000010 + 4);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar11 + 3) < 4) || (plVar11[7] = lVar12, *(int *)(lVar9 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar9 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar9 + 0x20) + 0x1c);
    lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,&stack0x00000010);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
    goto LAB_014532bc;
    if (*(uint *)(plVar11 + 3) < 5) goto LAB_014532b8;
    plVar11[8] = lVar12;
    uVar7 = FUN_01600be4(*(undefined8 *)
                          Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_<CreatePixelValidationMode>b__0__
                         ,plVar11,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar7,0);
  }
LAB_01452d68:
  if (*(int *)(lVar8 + 0x18) < 1) {
    lVar12 = FUN_00da4fb8(*(undefined8 *)
                           Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,0);
  }
  else {
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                               );
    if (lVar12 == 0) goto LAB_014532b4;
    FUN_01320e50(lVar12,*(undefined8 *)StringLiteral_11365);
    if (0 < *(int *)(lVar8 + 0x18)) {
      iVar15 = 0;
      do {
        FUN_0132138c(lVar8,iVar15,&stack0x00000038,*unaff_x27);
        if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
        iVar1 = *(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x38);
        FUN_0132138c(lVar8,iVar15,&stack0x00000038,*unaff_x27);
        if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
        FUN_00bbed00((float)iVar1,
                     (float)*(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x3c)
                     ,lVar12,*puVar10);
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(lVar8 + 0x18));
    }
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar11 = (long *)Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(1,0);
    puVar3 = Method_UnityEngine_Vector3_set_Item__;
    if (plVar11 == (long *)0x0) goto LAB_014532b4;
    *(undefined1 *)((long)plVar11 + 0x14) = 0;
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11575);
    if (lVar13 == 0) goto LAB_014532b4;
    FUN_01320e50(lVar13,*(undefined8 *)System_Xml_IXmlLineInfo_TypeInfo);
    if (0 < *(int *)(lVar12 + 0x18)) {
      iVar15 = 0;
      do {
        FUN_00bbf8e0(lVar13,CONCAT44(*(undefined4 *)(unaff_x19 + 0x18),
                                     *(undefined4 *)(unaff_x19 + 0x18)),*(undefined8 *)puVar3);
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(lVar12 + 0x18));
    }
    if (lVar9 == 0) goto LAB_014532b4;
    if (*(long *)(lVar9 + 0x18) != 0) {
      if ((int)*(long *)(lVar9 + 0x18) == 0) goto LAB_014532b8;
      if (*(long *)(lVar9 + 0x20) == 0) goto LAB_014532b4;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_014532b4;
    lVar14 = *unaff_x20;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 5) * 0x10 + 0x138);
          goto FUN_01452f54;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724();
FUN_01452f54:
    (*(code *)*puVar10)();
    lVar12 = (**(code **)(*plVar11 + 0x188))
                       (plVar11,lVar12,lVar13,uStack0000000000000024,uStack0000000000000020,0,
                        *(undefined8 *)(*plVar11 + 400));
    if (3 < in_stack_00000008._4_4_) {
      plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
      uStack0000000000000038 = *(undefined4 *)(lVar8 + 0x18);
      lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,&stack0x00000038);
      puVar2 = StringLiteral_302;
      if (plVar11 == (long *)0x0) goto LAB_014532b4;
      if ((lVar13 != 0) &&
         (lVar14 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
      goto LAB_014532bc;
      if ((int)plVar11[3] == 0) goto LAB_014532b8;
      plVar11[4] = lVar13;
      if (lVar12 == 0) goto LAB_014532b4;
      if (*(int *)(lVar12 + 0x18) == 0) goto LAB_014532b8;
      if (*(long *)(lVar12 + 0x20) == 0) goto LAB_014532b4;
      uStack000000000000001c = *(undefined4 *)(*(long *)(lVar12 + 0x20) + 0x10);
      lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,(long)&stack0x00000018 + 4);
      if ((lVar13 != 0) &&
         (lVar14 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar11 + 3) < 2) || (plVar11[5] = lVar13, *(int *)(lVar12 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar12 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar12 + 0x20) + 0x14);
      lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,&stack0x00000018);
      if ((lVar13 != 0) &&
         (lVar14 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar11 + 3) < 3) || (plVar11[6] = lVar13, *(int *)(lVar12 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar12 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar12 + 0x20) + 0x18);
      lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,(long)&stack0x00000010 + 4);
      if ((lVar13 != 0) &&
         (lVar14 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar11 + 3) < 4) || (plVar11[7] = lVar13, *(int *)(lVar12 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar12 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar12 + 0x20) + 0x1c);
      lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,&stack0x00000010);
      if ((lVar13 != 0) &&
         (lVar14 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
      goto LAB_014532bc;
      if (*(uint *)(plVar11 + 3) < 5) goto LAB_014532b8;
      plVar11[8] = lVar13;
      uVar7 = FUN_01600be4(*(undefined8 *)PTR_DAT_033f38f8,plVar11,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      FUN_02660dac(uVar7,0);
    }
  }
  if (lVar9 == 0) goto LAB_014532b4;
  if (*(long *)(lVar9 + 0x18) == 0) {
    if (lVar12 == 0) goto LAB_014532b4;
    if (*(long *)(lVar12 + 0x18) == 0) {
      return (long *)0x0;
    }
    if ((int)*(long *)(lVar12 + 0x18) == 0) goto LAB_014532b8;
    lVar9 = *(long *)(lVar12 + 0x20);
  }
  else {
    if (lVar12 == 0) goto LAB_014532b4;
    iVar15 = (int)*(long *)(lVar9 + 0x18);
    if (*(long *)(lVar12 + 0x18) == 0) {
      if (iVar15 == 0) goto LAB_014532b8;
      lVar9 = *(long *)(lVar9 + 0x20);
    }
    else {
      if ((iVar15 == 0) || ((int)*(long *)(lVar12 + 0x18) == 0)) goto LAB_014532b8;
      lVar9 = FUN_014532d8(*(undefined8 *)(lVar9 + 0x20),*(undefined8 *)(lVar12 + 0x20),
                           *(undefined4 *)(unaff_x19 + 0x1c),*(undefined4 *)(unaff_x19 + 0x20),1);
    }
  }
  FUN_01322050(lVar6,lVar8,*(undefined8 *)Method_System_Nullable<Guid>_get_Value__);
  *(long *)(unaff_x19 + 0x58) = lVar6;
  if (lVar9 == 0) {
    plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                   ,0);
  }
  else {
    plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                   ,1);
    if (plVar11 == (long *)0x0) goto LAB_014532b4;
    lVar6 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar11 + 0x40));
    if (lVar6 == 0) {
LAB_014532bc:
      uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar7,0);
    }
    if ((int)plVar11[3] == 0) {
LAB_014532b8:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar11[4] = lVar9;
  }
  return plVar11;
LAB_0145263c:
  do {
    if (*(int *)(lVar9 + 0x18) <= iVar15) {
      if (3 < in_stack_00000008._4_4_) {
        plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
        uStack0000000000000038 = *(undefined4 *)(lVar6 + 0x18);
        lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                   ,&stack0x00000038);
        if (plVar11 == (long *)0x0) break;
        if ((lVar9 != 0) &&
           (lVar12 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
        goto LAB_014532bc;
        if ((int)plVar11[3] == 0) goto LAB_014532b8;
        plVar11[4] = lVar9;
        uStack000000000000001c = *(undefined4 *)(lVar8 + 0x18);
        lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                   ,(long)&stack0x00000018 + 4);
        if ((lVar9 != 0) &&
           (lVar12 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
        goto LAB_014532bc;
        if (*(uint *)(plVar11 + 3) < 2) goto LAB_014532b8;
        plVar11[5] = lVar9;
        uStack0000000000000018 = *(undefined4 *)(unaff_x19 + 0x1c);
        lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                   ,&stack0x00000018);
        if ((lVar9 != 0) &&
           (lVar12 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
        goto LAB_014532bc;
        if (*(uint *)(plVar11 + 3) < 3) goto LAB_014532b8;
        plVar11[6] = lVar9;
        uStack0000000000000014 = *(undefined4 *)(unaff_x19 + 0x20);
        lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                   ,(long)&stack0x00000010 + 4);
        if ((lVar9 != 0) &&
           (lVar12 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
        goto LAB_014532bc;
        if (*(uint *)(plVar11 + 3) < 4) goto LAB_014532b8;
        plVar11[7] = lVar9;
        uVar7 = FUN_01600be4(*(undefined8 *)UnityEngine_ProBuilder_Shapes_Sprite_TypeInfo,plVar11,0)
        ;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x29);
        }
        FUN_02660dac(uVar7,0);
      }
      puVar3 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
      if (*(int *)(lVar6 + 0x18) < 1) {
        lVar9 = FUN_00da4fb8(*(undefined8 *)
                              Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,0
                            );
        puVar10 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
        goto LAB_01452d68;
      }
      if (unaff_x20 != (long *)0x0) {
        lVar9 = *unaff_x20;
        uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar16 == 0) goto LAB_014528ac;
        piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_01452894;
      }
      break;
    }
    FUN_0132138c(lVar9,iVar15,&stack0x00000038,*unaff_x27);
    if (unaff_x20 == (long *)0x0) break;
    lVar9 = *unaff_x20;
    uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar9 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_014526b4;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724();
LAB_014526b4:
    (*(code *)*puVar10)();
    lVar9 = *(long *)(unaff_x19 + 0x58);
    iVar15 = iVar15 + 1;
  } while (lVar9 != 0);
LAB_014532b4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


