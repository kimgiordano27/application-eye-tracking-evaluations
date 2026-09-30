/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView$$set_Progress
ENTRY_POINT: 014524cc
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


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__set_Progress(float param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  int *piVar17;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  float unaff_w23;
  int unaff_w24;
  undefined8 *unaff_x27;
  long *unaff_x29;
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
  
  do {
    iVar16 = *(int *)(unaff_x21 + 0x38);
    iVar14 = unaff_w24;
    if (param_1 != unaff_w23) {
      iVar14 = (int)param_1;
    }
    while( true ) {
      puVar1 = Polenter_Serialization_Serializing_PropertyTypeInfo<Property>_TypeInfo;
      if (in_stack_00000030._4_4_ < iVar16) {
        in_stack_00000030._4_4_ = iVar14;
      }
      lVar5 = *(long *)(unaff_x19 + 0x58);
      if (lVar5 == 0) goto LAB_014532b4;
      unaff_w22 = unaff_w22 + 1;
      if (*(int *)(lVar5 + 0x18) <= unaff_w22) {
        if (3 < in_stack_00000008._4_4_) {
          uVar6 = FUN_0176eb1c((long)&stack0x00000030 + 4,0);
          uVar6 = FUN_015f5b28(*(undefined8 *)puVar1,uVar6,0);
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_00d32864(*unaff_x29);
          }
          FUN_02660dac(uVar6,0);
        }
        *(int *)(unaff_x19 + 0x1c) = in_stack_00000030._4_4_;
        puVar2 = 
        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteSender>__;
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteSender>__
                                  );
        puVar1 = Method_TMPro_TMP_TextProcessingStack<float>_Push__;
        if (lVar5 == 0) goto LAB_014532b4;
        FUN_01320e50(lVar5,*(undefined8 *)Method_TMPro_TMP_TextProcessingStack<float>_Push__);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar7 == 0) goto LAB_014532b4;
        FUN_01320e50(lVar7,*(undefined8 *)puVar1);
        puVar1 = StringLiteral_12054;
        lVar8 = *(long *)(unaff_x19 + 0x58);
        if (lVar8 == 0) goto LAB_014532b4;
        iVar16 = 0;
        goto LAB_0145263c;
      }
      FUN_0132138c(lVar5,unaff_w22,&stack0x00000038,*unaff_x27);
      unaff_x21 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      if (unaff_x21 == 0) goto LAB_014532b4;
      if (*(char *)(unaff_x19 + 0x27) != '\0') break;
      iVar16 = *(int *)(unaff_x21 + 0x38);
      iVar14 = iVar16;
    }
    param_1 = (float)FUN_01444cbc(unaff_x21);
  } while( true );
LAB_0145263c:
  do {
    if (*(int *)(lVar8 + 0x18) <= iVar16) {
      if (3 < in_stack_00000008._4_4_) {
        plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
        uStack0000000000000038 = *(undefined4 *)(lVar5 + 0x18);
        lVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                   ,&stack0x00000038);
        if (plVar10 == (long *)0x0) break;
        if ((lVar8 != 0) &&
           (lVar11 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
        goto LAB_014532bc;
        if ((int)plVar10[3] == 0) goto LAB_014532b8;
        plVar10[4] = lVar8;
        uStack000000000000001c = *(undefined4 *)(lVar7 + 0x18);
        lVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                   ,(long)&stack0x00000018 + 4);
        if ((lVar8 != 0) &&
           (lVar11 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
        goto LAB_014532bc;
        if (*(uint *)(plVar10 + 3) < 2) goto LAB_014532b8;
        plVar10[5] = lVar8;
        uStack0000000000000018 = *(undefined4 *)(unaff_x19 + 0x1c);
        lVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                   ,&stack0x00000018);
        if ((lVar8 != 0) &&
           (lVar11 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
        goto LAB_014532bc;
        if (*(uint *)(plVar10 + 3) < 3) goto LAB_014532b8;
        plVar10[6] = lVar8;
        uStack0000000000000014 = *(undefined4 *)(unaff_x19 + 0x20);
        lVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                   ,(long)&stack0x00000010 + 4);
        if ((lVar8 != 0) &&
           (lVar11 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
        goto LAB_014532bc;
        if (*(uint *)(plVar10 + 3) < 4) goto LAB_014532b8;
        plVar10[7] = lVar8;
        uVar6 = FUN_01600be4(*(undefined8 *)UnityEngine_ProBuilder_Shapes_Sprite_TypeInfo,plVar10,0)
        ;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x29);
        }
        FUN_02660dac(uVar6,0);
      }
      puVar2 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
      if (*(int *)(lVar5 + 0x18) < 1) {
        lVar8 = FUN_00da4fb8(*(undefined8 *)
                              Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,0
                            );
        puVar9 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
        goto LAB_01452d68;
      }
      if (unaff_x20 != (long *)0x0) {
        lVar8 = *unaff_x20;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar15 == 0) goto LAB_014528ac;
        piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_01452894;
      }
      break;
    }
    FUN_0132138c(lVar8,iVar16,&stack0x00000038,*unaff_x27);
    if (unaff_x20 == (long *)0x0) break;
    lVar8 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar8 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_014526b4;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724();
LAB_014526b4:
    (*(code *)*puVar9)();
    lVar8 = *(long *)(unaff_x19 + 0x58);
    iVar16 = iVar16 + 1;
  } while (lVar8 != 0);
  goto LAB_014532b4;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_01452894:
    if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
      puVar9 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_014528e4;
    }
  }
LAB_014528ac:
  puVar9 = (undefined8 *)FUN_00d59724();
LAB_014528e4:
  uVar3 = (*(code *)*puVar9)();
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                            );
  if (lVar8 == 0) goto LAB_014532b4;
  FUN_01320e50(lVar8,*(undefined8 *)StringLiteral_11365);
  if (0 < *(int *)(lVar5 + 0x18)) {
    iVar16 = 0;
    do {
      FUN_0132138c(lVar5,iVar16,&stack0x00000038,*unaff_x27);
      lVar12 = *unaff_x20;
      lVar11 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar17 + 2) * 0x10 + 0x138);
            goto LAB_01452998;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724();
LAB_01452998:
      uVar4 = (*(code *)*puVar9)();
      if (lVar11 == 0) goto LAB_014532b4;
      FUN_014450f0(lVar11,uVar4);
      FUN_0132138c(lVar5,iVar16,&stack0x00000038,*unaff_x27);
      if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
      iVar14 = *(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x38);
      FUN_0132138c(lVar5,iVar16,&stack0x00000038,*unaff_x27);
      if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
      FUN_00bbed00((float)iVar14,
                   (float)*(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x3c),
                   lVar8,*(undefined8 *)puVar2);
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(lVar5 + 0x18));
  }
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar10 = (long *)Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(uVar3,0);
  if (plVar10 == (long *)0x0) goto LAB_014532b4;
  *(undefined1 *)((long)plVar10 + 0x14) = 0;
  lVar11 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11575);
  if (lVar11 == 0) goto LAB_014532b4;
  FUN_01320e50(lVar11,*(undefined8 *)System_Xml_IXmlLineInfo_TypeInfo);
  if (0 < *(int *)(lVar8 + 0x18)) {
    iVar16 = 0;
    do {
      in_stack_00000028 = 0;
      lVar12 = *unaff_x20;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar17 + 3) * 0x10 + 0x138);
            goto LAB_01452ad8;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724();
LAB_01452ad8:
      (*(code *)*puVar9)();
      FUN_00bbf8e0(lVar11,in_stack_00000028,*(undefined8 *)Method_UnityEngine_Vector3_set_Item__);
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(lVar8 + 0x18));
  }
  *(undefined4 *)(plVar10 + 2) = 5;
  lVar8 = (**(code **)(*plVar10 + 0x188))
                    (plVar10,lVar8,lVar11,*(undefined4 *)(unaff_x19 + 0x1c),
                     *(undefined4 *)(unaff_x19 + 0x20),0,*(undefined8 *)(*plVar10 + 400));
  puVar9 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  if (4 < in_stack_00000008._4_4_) {
    plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
    uStack0000000000000038 = *(undefined4 *)(lVar5 + 0x18);
    lVar11 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,&stack0x00000038);
    if (plVar10 == (long *)0x0) goto LAB_014532b4;
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_014532bc;
    puVar9 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
    if ((int)plVar10[3] == 0) goto LAB_014532b8;
    plVar10[4] = lVar11;
    if (lVar8 == 0) goto LAB_014532b4;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_014532b8;
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_014532b4;
    uStack000000000000001c = *(undefined4 *)(*(long *)(lVar8 + 0x20) + 0x10);
    lVar11 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,(long)&stack0x00000018 + 4);
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar10 + 3) < 2) || (plVar10[5] = lVar11, *(int *)(lVar8 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar8 + 0x20) + 0x14);
    lVar11 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,&stack0x00000018);
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar10 + 3) < 3) || (plVar10[6] = lVar11, *(int *)(lVar8 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar8 + 0x20) + 0x18);
    lVar11 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,(long)&stack0x00000010 + 4);
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar10 + 3) < 4) || (plVar10[7] = lVar11, *(int *)(lVar8 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar8 + 0x20) + 0x1c);
    lVar11 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,&stack0x00000010);
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_014532bc;
    if (*(uint *)(plVar10 + 3) < 5) goto LAB_014532b8;
    plVar10[8] = lVar11;
    uVar6 = FUN_01600be4(*(undefined8 *)
                          Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_<CreatePixelValidationMode>b__0__
                         ,plVar10,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar6,0);
  }
LAB_01452d68:
  if (*(int *)(lVar7 + 0x18) < 1) {
    lVar11 = FUN_00da4fb8(*(undefined8 *)
                           Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,0);
  }
  else {
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                               );
    if (lVar11 == 0) goto LAB_014532b4;
    FUN_01320e50(lVar11,*(undefined8 *)StringLiteral_11365);
    if (0 < *(int *)(lVar7 + 0x18)) {
      iVar16 = 0;
      do {
        FUN_0132138c(lVar7,iVar16,&stack0x00000038,*unaff_x27);
        if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
        iVar14 = *(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x38);
        FUN_0132138c(lVar7,iVar16,&stack0x00000038,*unaff_x27);
        if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
        FUN_00bbed00((float)iVar14,
                     (float)*(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x3c)
                     ,lVar11,*puVar9);
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(lVar7 + 0x18));
    }
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar10 = (long *)Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(1,0);
    puVar2 = Method_UnityEngine_Vector3_set_Item__;
    if (plVar10 == (long *)0x0) goto LAB_014532b4;
    *(undefined1 *)((long)plVar10 + 0x14) = 0;
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11575);
    if (lVar12 == 0) goto LAB_014532b4;
    FUN_01320e50(lVar12,*(undefined8 *)System_Xml_IXmlLineInfo_TypeInfo);
    if (0 < *(int *)(lVar11 + 0x18)) {
      iVar16 = 0;
      do {
        FUN_00bbf8e0(lVar12,CONCAT44(*(undefined4 *)(unaff_x19 + 0x18),
                                     *(undefined4 *)(unaff_x19 + 0x18)),*(undefined8 *)puVar2);
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(lVar11 + 0x18));
    }
    if (lVar8 == 0) goto LAB_014532b4;
    if (*(long *)(lVar8 + 0x18) != 0) {
      if ((int)*(long *)(lVar8 + 0x18) == 0) goto LAB_014532b8;
      if (*(long *)(lVar8 + 0x20) == 0) goto LAB_014532b4;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_014532b4;
    lVar13 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar17 + 5) * 0x10 + 0x138);
          goto FUN_01452f54;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724();
FUN_01452f54:
    (*(code *)*puVar9)();
    lVar11 = (**(code **)(*plVar10 + 0x188))
                       (plVar10,lVar11,lVar12,uStack0000000000000024,uStack0000000000000020,0,
                        *(undefined8 *)(*plVar10 + 400));
    if (3 < in_stack_00000008._4_4_) {
      plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
      uStack0000000000000038 = *(undefined4 *)(lVar7 + 0x18);
      lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,&stack0x00000038);
      puVar1 = StringLiteral_302;
      if (plVar10 == (long *)0x0) goto LAB_014532b4;
      if ((lVar12 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
      goto LAB_014532bc;
      if ((int)plVar10[3] == 0) goto LAB_014532b8;
      plVar10[4] = lVar12;
      if (lVar11 == 0) goto LAB_014532b4;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_014532b8;
      if (*(long *)(lVar11 + 0x20) == 0) goto LAB_014532b4;
      uStack000000000000001c = *(undefined4 *)(*(long *)(lVar11 + 0x20) + 0x10);
      lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,(long)&stack0x00000018 + 4);
      if ((lVar12 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar10 + 3) < 2) || (plVar10[5] = lVar12, *(int *)(lVar11 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar11 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar11 + 0x20) + 0x14);
      lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,&stack0x00000018);
      if ((lVar12 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar10 + 3) < 3) || (plVar10[6] = lVar12, *(int *)(lVar11 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar11 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar11 + 0x20) + 0x18);
      lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,(long)&stack0x00000010 + 4);
      if ((lVar12 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar10 + 3) < 4) || (plVar10[7] = lVar12, *(int *)(lVar11 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar11 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar11 + 0x20) + 0x1c);
      lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,&stack0x00000010);
      if ((lVar12 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
      goto LAB_014532bc;
      if (*(uint *)(plVar10 + 3) < 5) goto LAB_014532b8;
      plVar10[8] = lVar12;
      uVar6 = FUN_01600be4(*(undefined8 *)PTR_DAT_033f38f8,plVar10,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      FUN_02660dac(uVar6,0);
    }
  }
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x18) == 0) {
      if (lVar11 == 0) goto LAB_014532b4;
      if (*(long *)(lVar11 + 0x18) == 0) {
        return (long *)0x0;
      }
      if ((int)*(long *)(lVar11 + 0x18) == 0) goto LAB_014532b8;
      lVar8 = *(long *)(lVar11 + 0x20);
    }
    else {
      if (lVar11 == 0) goto LAB_014532b4;
      iVar16 = (int)*(long *)(lVar8 + 0x18);
      if (*(long *)(lVar11 + 0x18) == 0) {
        if (iVar16 == 0) goto LAB_014532b8;
        lVar8 = *(long *)(lVar8 + 0x20);
      }
      else {
        if ((iVar16 == 0) || ((int)*(long *)(lVar11 + 0x18) == 0)) goto LAB_014532b8;
        lVar8 = FUN_014532d8(*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar11 + 0x20),
                             *(undefined4 *)(unaff_x19 + 0x1c),*(undefined4 *)(unaff_x19 + 0x20),1);
      }
    }
    FUN_01322050(lVar5,lVar7,*(undefined8 *)Method_System_Nullable<Guid>_get_Value__);
    *(long *)(unaff_x19 + 0x58) = lVar5;
    if (lVar8 == 0) {
      plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)
                                      Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                     ,0);
    }
    else {
      plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)
                                      Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                     ,1);
      if (plVar10 == (long *)0x0) goto LAB_014532b4;
      lVar5 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar10 + 0x40));
      if (lVar5 == 0) {
LAB_014532bc:
        uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar6,0);
      }
      if ((int)plVar10[3] == 0) {
LAB_014532b8:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar10[4] = lVar8;
    }
    return plVar10;
  }
LAB_014532b4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


