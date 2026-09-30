/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView$$RefreshLayoutPreChildren
ENTRY_POINT: 01452614
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


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPreChildren(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  int iVar16;
  undefined8 *unaff_x24;
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
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  lVar6 = thunk_FUN_00d62348();
  if (lVar6 != 0) {
    FUN_01320e50(lVar6,*unaff_x24);
    puVar3 = StringLiteral_12054;
    lVar7 = *(long *)(unaff_x19 + 0x58);
    if (lVar7 != 0) {
      iVar16 = 0;
      do {
        if (*(int *)(lVar7 + 0x18) <= iVar16) {
          if (3 < in_stack_00000008._4_4_) {
            plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
            uStack0000000000000038 = *(undefined4 *)(unaff_x22 + 0x18);
            lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       ,&stack0x00000038);
            if (plVar9 == (long *)0x0) break;
            if ((lVar7 != 0) &&
               (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
            goto LAB_014532bc;
            if ((int)plVar9[3] == 0) goto LAB_014532b8;
            plVar9[4] = lVar7;
            uStack000000000000001c = *(undefined4 *)(lVar6 + 0x18);
            lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       ,(long)&stack0x00000018 + 4);
            if ((lVar7 != 0) &&
               (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
            goto LAB_014532bc;
            if (*(uint *)(plVar9 + 3) < 2) goto LAB_014532b8;
            plVar9[5] = lVar7;
            uStack0000000000000018 = *(undefined4 *)(unaff_x19 + 0x1c);
            lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       ,&stack0x00000018);
            if ((lVar7 != 0) &&
               (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
            goto LAB_014532bc;
            if (*(uint *)(plVar9 + 3) < 3) goto LAB_014532b8;
            plVar9[6] = lVar7;
            uStack0000000000000014 = *(undefined4 *)(unaff_x19 + 0x20);
            lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       ,(long)&stack0x00000010 + 4);
            if ((lVar7 != 0) &&
               (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
            goto LAB_014532bc;
            if (*(uint *)(plVar9 + 3) < 4) goto LAB_014532b8;
            plVar9[7] = lVar7;
            uVar11 = FUN_01600be4(*(undefined8 *)UnityEngine_ProBuilder_Shapes_Sprite_TypeInfo,
                                  plVar9,0);
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_00d32864(*unaff_x29);
            }
            FUN_02660dac(uVar11,0);
          }
          puVar2 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
          if (*(int *)(unaff_x22 + 0x18) < 1) {
            lVar7 = FUN_00da4fb8(*(undefined8 *)
                                  Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                 ,0);
            puVar8 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
            goto LAB_01452d68;
          }
          if (unaff_x20 != (long *)0x0) {
            lVar7 = *unaff_x20;
            uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar14 == 0) goto LAB_014528ac;
            piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_01452894;
          }
          break;
        }
        FUN_0132138c(lVar7,iVar16,&stack0x00000038,*unaff_x27);
        if (unaff_x20 == (long *)0x0) break;
        lVar7 = *unaff_x20;
        uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_014526b4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_00d59724();
LAB_014526b4:
        (*(code *)*puVar8)();
        lVar7 = *(long *)(unaff_x19 + 0x58);
        iVar16 = iVar16 + 1;
      } while (lVar7 != 0);
    }
  }
  goto LAB_014532b4;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_01452894:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar8 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_014528e4;
    }
  }
LAB_014528ac:
  puVar8 = (undefined8 *)FUN_00d59724();
LAB_014528e4:
  uVar4 = (*(code *)*puVar8)();
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                            );
  if (lVar7 == 0) goto LAB_014532b4;
  FUN_01320e50(lVar7,*(undefined8 *)StringLiteral_11365);
  if (0 < *(int *)(unaff_x22 + 0x18)) {
    iVar16 = 0;
    do {
      FUN_0132138c();
      lVar12 = *unaff_x20;
      lVar10 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_01452998;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724();
LAB_01452998:
      uVar5 = (*(code *)*puVar8)();
      if (lVar10 == 0) goto LAB_014532b4;
      FUN_014450f0(lVar10,uVar5);
      FUN_0132138c();
      if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
      iVar1 = *(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x38);
      FUN_0132138c();
      if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
      FUN_00bbed00((float)iVar1,
                   (float)*(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x3c),
                   lVar7,*(undefined8 *)puVar2);
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(unaff_x22 + 0x18));
  }
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar9 = (long *)Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(uVar4,0);
  if (plVar9 == (long *)0x0) goto LAB_014532b4;
  *(undefined1 *)((long)plVar9 + 0x14) = 0;
  lVar10 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11575);
  if (lVar10 == 0) goto LAB_014532b4;
  FUN_01320e50(lVar10,*(undefined8 *)System_Xml_IXmlLineInfo_TypeInfo);
  if (0 < *(int *)(lVar7 + 0x18)) {
    iVar16 = 0;
    do {
      in_stack_00000028 = 0;
      lVar12 = *unaff_x20;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 3) * 0x10 + 0x138);
            goto LAB_01452ad8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724();
LAB_01452ad8:
      (*(code *)*puVar8)();
      FUN_00bbf8e0(lVar10,in_stack_00000028,*(undefined8 *)Method_UnityEngine_Vector3_set_Item__);
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(lVar7 + 0x18));
  }
  *(undefined4 *)(plVar9 + 2) = 5;
  lVar7 = (**(code **)(*plVar9 + 0x188))
                    (plVar9,lVar7,lVar10,*(undefined4 *)(unaff_x19 + 0x1c),
                     *(undefined4 *)(unaff_x19 + 0x20),0,*(undefined8 *)(*plVar9 + 400));
  puVar8 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  if (4 < in_stack_00000008._4_4_) {
    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
    uStack0000000000000038 = *(undefined4 *)(unaff_x22 + 0x18);
    lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,&stack0x00000038);
    if (plVar9 == (long *)0x0) goto LAB_014532b4;
    if ((lVar10 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
    goto LAB_014532bc;
    puVar8 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
    if ((int)plVar9[3] == 0) goto LAB_014532b8;
    plVar9[4] = lVar10;
    if (lVar7 == 0) goto LAB_014532b4;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014532b8;
    if (*(long *)(lVar7 + 0x20) == 0) goto LAB_014532b4;
    uStack000000000000001c = *(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x10);
    lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,(long)&stack0x00000018 + 4);
    if ((lVar10 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar9 + 3) < 2) || (plVar9[5] = lVar10, *(int *)(lVar7 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar7 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x14);
    lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,&stack0x00000018);
    if ((lVar10 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar9 + 3) < 3) || (plVar9[6] = lVar10, *(int *)(lVar7 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar7 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x18);
    lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,(long)&stack0x00000010 + 4);
    if ((lVar10 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar9 + 3) < 4) || (plVar9[7] = lVar10, *(int *)(lVar7 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar7 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x1c);
    lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,&stack0x00000010);
    if ((lVar10 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
    goto LAB_014532bc;
    if (*(uint *)(plVar9 + 3) < 5) goto LAB_014532b8;
    plVar9[8] = lVar10;
    uVar11 = FUN_01600be4(*(undefined8 *)
                           Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_<CreatePixelValidationMode>b__0__
                          ,plVar9,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar11,0);
  }
LAB_01452d68:
  if (*(int *)(lVar6 + 0x18) < 1) {
    lVar10 = FUN_00da4fb8(*(undefined8 *)
                           Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,0);
  }
  else {
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                               );
    if (lVar10 == 0) goto LAB_014532b4;
    FUN_01320e50(lVar10,*(undefined8 *)StringLiteral_11365);
    if (0 < *(int *)(lVar6 + 0x18)) {
      iVar16 = 0;
      do {
        FUN_0132138c(lVar6,iVar16,&stack0x00000038,*unaff_x27);
        if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
        iVar1 = *(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x38);
        FUN_0132138c(lVar6,iVar16,&stack0x00000038,*unaff_x27);
        if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
        FUN_00bbed00((float)iVar1,
                     (float)*(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x3c)
                     ,lVar10,*puVar8);
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(lVar6 + 0x18));
    }
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar9 = (long *)Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(1,0);
    puVar2 = Method_UnityEngine_Vector3_set_Item__;
    if (plVar9 == (long *)0x0) goto LAB_014532b4;
    *(undefined1 *)((long)plVar9 + 0x14) = 0;
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11575);
    if (lVar12 == 0) goto LAB_014532b4;
    FUN_01320e50(lVar12,*(undefined8 *)System_Xml_IXmlLineInfo_TypeInfo);
    if (0 < *(int *)(lVar10 + 0x18)) {
      iVar16 = 0;
      do {
        FUN_00bbf8e0(lVar12,CONCAT44(*(undefined4 *)(unaff_x19 + 0x18),
                                     *(undefined4 *)(unaff_x19 + 0x18)),*(undefined8 *)puVar2);
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(lVar10 + 0x18));
    }
    if (lVar7 == 0) goto LAB_014532b4;
    if (*(long *)(lVar7 + 0x18) != 0) {
      if ((int)*(long *)(lVar7 + 0x18) == 0) goto LAB_014532b8;
      if (*(long *)(lVar7 + 0x20) == 0) goto LAB_014532b4;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_014532b4;
    lVar13 = *unaff_x20;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar15 + 5) * 0x10 + 0x138);
          goto FUN_01452f54;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724();
FUN_01452f54:
    (*(code *)*puVar8)();
    lVar10 = (**(code **)(*plVar9 + 0x188))
                       (plVar9,lVar10,lVar12,uStack0000000000000024,uStack0000000000000020,0,
                        *(undefined8 *)(*plVar9 + 400));
    if (3 < in_stack_00000008._4_4_) {
      plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
      uStack0000000000000038 = *(undefined4 *)(lVar6 + 0x18);
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000038);
      puVar3 = StringLiteral_302;
      if (plVar9 == (long *)0x0) goto LAB_014532b4;
      if ((lVar6 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
      goto LAB_014532bc;
      if ((int)plVar9[3] == 0) goto LAB_014532b8;
      plVar9[4] = lVar6;
      if (lVar10 == 0) goto LAB_014532b4;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_014532b8;
      if (*(long *)(lVar10 + 0x20) == 0) goto LAB_014532b4;
      uStack000000000000001c = *(undefined4 *)(*(long *)(lVar10 + 0x20) + 0x10);
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,(long)&stack0x00000018 + 4);
      if ((lVar6 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar9 + 3) < 2) || (plVar9[5] = lVar6, *(int *)(lVar10 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar10 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar10 + 0x20) + 0x14);
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000018);
      if ((lVar6 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar9 + 3) < 3) || (plVar9[6] = lVar6, *(int *)(lVar10 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar10 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar10 + 0x20) + 0x18);
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,(long)&stack0x00000010 + 4);
      if ((lVar6 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar9 + 3) < 4) || (plVar9[7] = lVar6, *(int *)(lVar10 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar10 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar10 + 0x20) + 0x1c);
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000010);
      if ((lVar6 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
      goto LAB_014532bc;
      if (*(uint *)(plVar9 + 3) < 5) goto LAB_014532b8;
      plVar9[8] = lVar6;
      uVar11 = FUN_01600be4(*(undefined8 *)PTR_DAT_033f38f8,plVar9,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      FUN_02660dac(uVar11,0);
    }
  }
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0x18) == 0) {
      if (lVar10 == 0) goto LAB_014532b4;
      if (*(long *)(lVar10 + 0x18) == 0) {
        return (long *)0x0;
      }
      if ((int)*(long *)(lVar10 + 0x18) == 0) goto LAB_014532b8;
      lVar6 = *(long *)(lVar10 + 0x20);
    }
    else {
      if (lVar10 == 0) goto LAB_014532b4;
      iVar16 = (int)*(long *)(lVar7 + 0x18);
      if (*(long *)(lVar10 + 0x18) == 0) {
        if (iVar16 == 0) goto LAB_014532b8;
        lVar6 = *(long *)(lVar7 + 0x20);
      }
      else {
        if ((iVar16 == 0) || ((int)*(long *)(lVar10 + 0x18) == 0)) goto LAB_014532b8;
        lVar6 = FUN_014532d8(*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar10 + 0x20),
                             *(undefined4 *)(unaff_x19 + 0x1c),*(undefined4 *)(unaff_x19 + 0x20),1);
      }
    }
    FUN_01322050();
    *(long *)(unaff_x19 + 0x58) = unaff_x22;
    if (lVar6 == 0) {
      plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0);
    }
    else {
      plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,1);
      if (plVar9 == (long *)0x0) goto LAB_014532b4;
      lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar7 == 0) {
LAB_014532bc:
        uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar11,0);
      }
      if ((int)plVar9[3] == 0) {
LAB_014532b8:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar9[4] = lVar6;
    }
    return plVar9;
  }
LAB_014532b4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


