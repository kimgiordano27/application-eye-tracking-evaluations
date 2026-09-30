/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$RefreshRaycaster
ENTRY_POINT: 01452368
PROGRAM: Lovesick-libil2cpp.so
SCORE: 206
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__RefreshRaycaster
                 (undefined1 param_1 [16],float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  int *piVar22;
  long unaff_x19;
  long unaff_x20;
  int iVar23;
  long unaff_x22;
  int iVar24;
  float fVar25;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  ulong uStack0000000000000020;
  undefined8 uStack0000000000000028;
  int iStack0000000000000030;
  int iStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  *(undefined1 *)(unaff_x20 + 0xa77) = 1;
  uStack0000000000000028 = 0;
  _iStack0000000000000030 = 0;
  uStack0000000000000020 = 0;
  puVar14 = (undefined8 *)PTR_DAT_033f6160;
  if (*(int *)(unaff_x22 + 0x10) != 0) {
    puVar14 = (undefined8 *)Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<float4>__;
  }
  plVar9 = (long *)thunk_FUN_00d62348(*puVar14);
  if ((plVar9 != (long *)0x0) &&
     (FUN_017b46ec(plVar9,0), puVar5 = StringLiteral_302, puVar3 = PTR_DAT_033ee2d8, unaff_x19 != 0)
     ) {
    if (*(int *)(unaff_x22 + 0x10) == 0) {
      if (*(char *)(unaff_x19 + 0x25) == '\0') {
        _iStack0000000000000030 = CONCAT44(2,iStack0000000000000030);
        lVar10 = *(long *)(unaff_x19 + 0x58);
        if (lVar10 == 0) goto LAB_014532b4;
        if (*(int *)(lVar10 + 0x18) < 1) {
          iVar24 = 2;
        }
        else {
          iVar23 = 0;
          do {
            FUN_0132138c(lVar10,iVar23,&stack0x00000038,*(undefined8 *)puVar3);
            lVar10 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
            if (lVar10 == 0) goto LAB_014532b4;
            if (*(char *)(unaff_x19 + 0x27) == '\0') {
              iVar21 = *(int *)(lVar10 + 0x38);
              iVar19 = iVar21;
            }
            else {
              fVar25 = (float)FUN_01444cbc(lVar10);
              iVar21 = *(int *)(lVar10 + 0x38);
              iVar19 = -0x80000000;
              if (fVar25 != INFINITY) {
                iVar19 = (int)fVar25;
              }
            }
            iVar24 = iStack0000000000000034;
            if (iStack0000000000000034 < iVar21) {
              _iStack0000000000000030 = CONCAT44(iVar19,iStack0000000000000030);
              iVar24 = iVar19;
            }
            lVar10 = *(long *)(unaff_x19 + 0x58);
            if (lVar10 == 0) goto LAB_014532b4;
            iVar23 = iVar23 + 1;
          } while (iVar23 < *(int *)(lVar10 + 0x18));
        }
        puVar4 = Polenter_Serialization_Serializing_PropertyTypeInfo<Property>_TypeInfo;
        if (3 < in_stack_00000008._4_4_) {
          uVar11 = FUN_0176eb1c(&stack0x00000034,0);
          uVar11 = FUN_015f5b28(*(undefined8 *)puVar4,uVar11,0);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar5);
          }
          FUN_02660dac(uVar11,0);
          iVar24 = iStack0000000000000034;
        }
        *(int *)(unaff_x19 + 0x1c) = iVar24;
      }
    }
    else if (*(char *)(unaff_x19 + 0x24) == '\0') {
      _iStack0000000000000030 = CONCAT44(iStack0000000000000034,2);
      lVar10 = *(long *)(unaff_x19 + 0x58);
      if (lVar10 == 0) goto LAB_014532b4;
      if (*(int *)(lVar10 + 0x18) < 1) {
        iVar24 = 2;
      }
      else {
        iVar23 = 0;
        do {
          FUN_0132138c(lVar10,iVar23,&stack0x00000038,*(undefined8 *)puVar3);
          lVar10 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
          if (lVar10 == 0) goto LAB_014532b4;
          if (*(char *)(unaff_x19 + 0x27) == '\0') {
            iVar21 = *(int *)(lVar10 + 0x3c);
            iVar19 = iVar21;
          }
          else {
            FUN_01444cbc(lVar10);
            iVar21 = *(int *)(lVar10 + 0x3c);
            iVar19 = -0x80000000;
            if (param_2 != INFINITY) {
              iVar19 = (int)param_2;
            }
          }
          iVar24 = iStack0000000000000030;
          if (iStack0000000000000030 < iVar21) {
            _iStack0000000000000030 = CONCAT44(iStack0000000000000034,iVar19);
            iVar24 = iVar19;
          }
          lVar10 = *(long *)(unaff_x19 + 0x58);
          if (lVar10 == 0) goto LAB_014532b4;
          iVar23 = iVar23 + 1;
        } while (iVar23 < *(int *)(lVar10 + 0x18));
      }
      puVar4 = System_Action<SetList>_TypeInfo;
      if (3 < in_stack_00000008._4_4_) {
        uVar11 = FUN_0176eb1c(&stack0x00000030,0);
        uVar11 = FUN_015f5b28(*(undefined8 *)puVar4,uVar11,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar5);
        }
        FUN_02660dac(uVar11,0);
        iVar24 = iStack0000000000000030;
      }
      *(int *)(unaff_x19 + 0x20) = iVar24;
    }
    puVar6 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteSender>__;
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteSender>__
                               );
    puVar4 = Method_TMPro_TMP_TextProcessingStack<float>_Push__;
    if (lVar10 != 0) {
      FUN_01320e50(lVar10,*(undefined8 *)Method_TMPro_TMP_TextProcessingStack<float>_Push__);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
      if (lVar12 != 0) {
        FUN_01320e50(lVar12,*(undefined8 *)puVar4);
        puVar4 = StringLiteral_12054;
        lVar13 = *(long *)(unaff_x19 + 0x58);
        if (lVar13 != 0) {
          iVar24 = 0;
          do {
            if (*(int *)(lVar13 + 0x18) <= iVar24) {
              if (3 < in_stack_00000008._4_4_) {
                plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
                uStack0000000000000038 = *(undefined4 *)(lVar10 + 0x18);
                lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                            ,&stack0x00000038);
                if (plVar15 == (long *)0x0) break;
                if ((lVar13 != 0) &&
                   (lVar16 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar16 == 0)) goto LAB_014532bc;
                if ((int)plVar15[3] == 0) goto LAB_014532b8;
                plVar15[4] = lVar13;
                uStack000000000000001c = *(undefined4 *)(lVar12 + 0x18);
                lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                            ,(long)&stack0x00000018 + 4);
                if ((lVar13 != 0) &&
                   (lVar16 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar16 == 0)) goto LAB_014532bc;
                if (*(uint *)(plVar15 + 3) < 2) goto LAB_014532b8;
                plVar15[5] = lVar13;
                uStack0000000000000018 = *(undefined4 *)(unaff_x19 + 0x1c);
                lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                            ,&stack0x00000018);
                if ((lVar13 != 0) &&
                   (lVar16 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar16 == 0)) goto LAB_014532bc;
                if (*(uint *)(plVar15 + 3) < 3) goto LAB_014532b8;
                plVar15[6] = lVar13;
                uStack0000000000000014 = *(undefined4 *)(unaff_x19 + 0x20);
                lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                            ,(long)&stack0x00000010 + 4);
                if ((lVar13 != 0) &&
                   (lVar16 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar16 == 0)) goto LAB_014532bc;
                if (*(uint *)(plVar15 + 3) < 4) goto LAB_014532b8;
                plVar15[7] = lVar13;
                uVar11 = FUN_01600be4(*(undefined8 *)UnityEngine_ProBuilder_Shapes_Sprite_TypeInfo,
                                      plVar15,0);
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar5);
                }
                FUN_02660dac(uVar11,0);
              }
              puVar5 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
              if (*(int *)(lVar10 + 0x18) < 1) {
                lVar13 = FUN_00da4fb8(*(undefined8 *)
                                       Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                      ,0);
                puVar14 = (undefined8 *)
                          Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
                goto LAB_01452d68;
              }
              if (plVar9 != (long *)0x0) {
                lVar13 = *plVar9;
                uVar20 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar20 == 0) goto LAB_014528ac;
                piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                goto LAB_01452894;
              }
              break;
            }
            FUN_0132138c(lVar13,iVar24,&stack0x00000038,*(undefined8 *)puVar3);
            if (plVar9 == (long *)0x0) break;
            lVar13 = *plVar9;
            uVar11 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
            uVar7 = *(undefined4 *)(unaff_x19 + 0x1c);
            uVar8 = *(undefined4 *)(unaff_x19 + 0x20);
            uVar20 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar20 != 0) {
              piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
                  puVar14 = (undefined8 *)(lVar13 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                  goto LAB_014526b4;
                }
                uVar20 = uVar20 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar20 != 0);
            }
            puVar14 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar4,1);
LAB_014526b4:
            (*(code *)*puVar14)(plVar9,uVar11,lVar10,lVar12,uVar7,uVar8,puVar14[1]);
            lVar13 = *(long *)(unaff_x19 + 0x58);
            iVar24 = iVar24 + 1;
          } while (lVar13 != 0);
        }
      }
    }
  }
  goto LAB_014532b4;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar22 = piVar22 + 4;
    if (uVar20 == 0) break;
LAB_01452894:
    if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
      puVar14 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_014528e4;
    }
  }
LAB_014528ac:
  puVar14 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar4,0);
LAB_014528e4:
  uVar7 = (*(code *)*puVar14)(plVar9,puVar14[1]);
  lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                             );
  if (lVar13 == 0) goto LAB_014532b4;
  FUN_01320e50(lVar13,*(undefined8 *)StringLiteral_11365);
  if (0 < *(int *)(lVar10 + 0x18)) {
    iVar24 = 0;
    do {
      FUN_0132138c(lVar10,iVar24,&stack0x00000038,*(undefined8 *)puVar3);
      lVar17 = *plVar9;
      lVar16 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar20 != 0) {
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
            puVar14 = (undefined8 *)(lVar17 + (long)(*piVar22 + 2) * 0x10 + 0x138);
            goto LAB_01452998;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      puVar14 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar4,2);
LAB_01452998:
      uVar8 = (*(code *)*puVar14)(plVar9,puVar14[1]);
      if (lVar16 == 0) goto LAB_014532b4;
      FUN_014450f0(lVar16,uVar8);
      FUN_0132138c(lVar10,iVar24,&stack0x00000038,*(undefined8 *)puVar3);
      if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
      iVar23 = *(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x38);
      FUN_0132138c(lVar10,iVar24,&stack0x00000038,*(undefined8 *)puVar3);
      if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
      FUN_00bbed00((float)iVar23,
                   (float)*(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x3c),
                   lVar13,*(undefined8 *)puVar5);
      iVar24 = iVar24 + 1;
    } while (iVar24 < *(int *)(lVar10 + 0x18));
  }
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar15 = (long *)Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(uVar7,0);
  if (plVar15 == (long *)0x0) goto LAB_014532b4;
  *(undefined1 *)((long)plVar15 + 0x14) = 0;
  lVar16 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11575);
  if (lVar16 == 0) goto LAB_014532b4;
  FUN_01320e50(lVar16,*(undefined8 *)System_Xml_IXmlLineInfo_TypeInfo);
  if (0 < *(int *)(lVar13 + 0x18)) {
    iVar24 = 0;
    do {
      uStack0000000000000028 = 0;
      lVar17 = *plVar9;
      uVar7 = *(undefined4 *)(unaff_x19 + 0x18);
      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar20 != 0) {
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
            puVar14 = (undefined8 *)(lVar17 + (long)(*piVar22 + 3) * 0x10 + 0x138);
            goto LAB_01452ad8;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      puVar14 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar4,3);
LAB_01452ad8:
      (*(code *)*puVar14)(plVar9,&stack0x00000028,uVar7,puVar14[1]);
      FUN_00bbf8e0(lVar16,uStack0000000000000028,
                   *(undefined8 *)Method_UnityEngine_Vector3_set_Item__);
      iVar24 = iVar24 + 1;
    } while (iVar24 < *(int *)(lVar13 + 0x18));
  }
  *(undefined4 *)(plVar15 + 2) = 5;
  lVar13 = (**(code **)(*plVar15 + 0x188))
                     (plVar15,lVar13,lVar16,*(undefined4 *)(unaff_x19 + 0x1c),
                      *(undefined4 *)(unaff_x19 + 0x20),0,*(undefined8 *)(*plVar15 + 400));
  puVar14 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  if (4 < in_stack_00000008._4_4_) {
    plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
    uStack0000000000000038 = *(undefined4 *)(lVar10 + 0x18);
    lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,&stack0x00000038);
    if (plVar15 == (long *)0x0) goto LAB_014532b4;
    if ((lVar16 != 0) &&
       (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
    goto LAB_014532bc;
    puVar14 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
    if ((int)plVar15[3] == 0) goto LAB_014532b8;
    plVar15[4] = lVar16;
    if (lVar13 == 0) goto LAB_014532b4;
    if (*(int *)(lVar13 + 0x18) == 0) goto LAB_014532b8;
    if (*(long *)(lVar13 + 0x20) == 0) goto LAB_014532b4;
    uStack000000000000001c = *(undefined4 *)(*(long *)(lVar13 + 0x20) + 0x10);
    lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,(long)&stack0x00000018 + 4);
    if ((lVar16 != 0) &&
       (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar15 + 3) < 2) || (plVar15[5] = lVar16, *(int *)(lVar13 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar13 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar13 + 0x20) + 0x14);
    lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,&stack0x00000018);
    if ((lVar16 != 0) &&
       (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar15 + 3) < 3) || (plVar15[6] = lVar16, *(int *)(lVar13 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar13 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar13 + 0x20) + 0x18);
    lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,(long)&stack0x00000010 + 4);
    if ((lVar16 != 0) &&
       (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar15 + 3) < 4) || (plVar15[7] = lVar16, *(int *)(lVar13 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar13 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar13 + 0x20) + 0x1c);
    lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,&stack0x00000010);
    if ((lVar16 != 0) &&
       (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
    goto LAB_014532bc;
    if (*(uint *)(plVar15 + 3) < 5) goto LAB_014532b8;
    plVar15[8] = lVar16;
    uVar11 = FUN_01600be4(*(undefined8 *)
                           Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_<CreatePixelValidationMode>b__0__
                          ,plVar15,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar11,0);
  }
LAB_01452d68:
  if (*(int *)(lVar12 + 0x18) < 1) {
    lVar16 = FUN_00da4fb8(*(undefined8 *)
                           Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,0);
  }
  else {
    lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                               );
    if (lVar16 == 0) goto LAB_014532b4;
    FUN_01320e50(lVar16,*(undefined8 *)StringLiteral_11365);
    if (0 < *(int *)(lVar12 + 0x18)) {
      iVar24 = 0;
      do {
        FUN_0132138c(lVar12,iVar24,&stack0x00000038,*(undefined8 *)puVar3);
        if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
        iVar23 = *(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x38);
        FUN_0132138c(lVar12,iVar24,&stack0x00000038,*(undefined8 *)puVar3);
        if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
        FUN_00bbed00((float)iVar23,
                     (float)*(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x3c)
                     ,lVar16,*puVar14);
        iVar24 = iVar24 + 1;
      } while (iVar24 < *(int *)(lVar12 + 0x18));
    }
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar15 = (long *)Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(1,0);
    puVar3 = Method_UnityEngine_Vector3_set_Item__;
    if (plVar15 == (long *)0x0) goto LAB_014532b4;
    *(undefined1 *)((long)plVar15 + 0x14) = 0;
    lVar17 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11575);
    if (lVar17 == 0) goto LAB_014532b4;
    FUN_01320e50(lVar17,*(undefined8 *)System_Xml_IXmlLineInfo_TypeInfo);
    if (0 < *(int *)(lVar16 + 0x18)) {
      iVar24 = 0;
      do {
        FUN_00bbf8e0(lVar17,CONCAT44(*(undefined4 *)(unaff_x19 + 0x18),
                                     *(undefined4 *)(unaff_x19 + 0x18)),*(undefined8 *)puVar3);
        iVar24 = iVar24 + 1;
      } while (iVar24 < *(int *)(lVar16 + 0x18));
    }
    if (lVar13 == 0) goto LAB_014532b4;
    if (*(long *)(lVar13 + 0x18) == 0) {
      uVar8 = 0;
      uVar7 = 0;
    }
    else {
      if ((int)*(long *)(lVar13 + 0x18) == 0) goto LAB_014532b8;
      lVar18 = *(long *)(lVar13 + 0x20);
      if (lVar18 == 0) goto LAB_014532b4;
      uVar7 = *(undefined4 *)(lVar18 + 0x10);
      uVar8 = *(undefined4 *)(lVar18 + 0x14);
    }
    if (plVar9 == (long *)0x0) goto LAB_014532b4;
    lVar18 = *plVar9;
    uVar1 = *(undefined4 *)(unaff_x19 + 0x1c);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x20);
    uVar20 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
          puVar14 = (undefined8 *)(lVar18 + (long)(*piVar22 + 5) * 0x10 + 0x138);
          goto FUN_01452f54;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar14 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar4,5);
FUN_01452f54:
    (*(code *)*puVar14)(plVar9,uVar7,uVar8,uVar1,uVar2,
                        (undefined1 *)((long)register0x00000008 + 0x24),&stack0x00000020,puVar14[1])
    ;
    lVar16 = (**(code **)(*plVar15 + 0x188))
                       (plVar15,lVar16,lVar17,uStack0000000000000020._4_4_,
                        uStack0000000000000020 & 0xffffffff,0,*(undefined8 *)(*plVar15 + 400));
    if (3 < in_stack_00000008._4_4_) {
      plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
      uStack0000000000000038 = *(undefined4 *)(lVar12 + 0x18);
      lVar17 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,&stack0x00000038);
      puVar3 = StringLiteral_302;
      if (plVar15 == (long *)0x0) goto LAB_014532b4;
      if ((lVar17 != 0) &&
         (lVar18 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar15 + 0x40)), lVar18 == 0))
      goto LAB_014532bc;
      if ((int)plVar15[3] == 0) goto LAB_014532b8;
      plVar15[4] = lVar17;
      if (lVar16 == 0) goto LAB_014532b4;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_014532b8;
      if (*(long *)(lVar16 + 0x20) == 0) goto LAB_014532b4;
      uStack000000000000001c = *(undefined4 *)(*(long *)(lVar16 + 0x20) + 0x10);
      lVar17 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,(long)&stack0x00000018 + 4);
      if ((lVar17 != 0) &&
         (lVar18 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar15 + 0x40)), lVar18 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar15 + 3) < 2) || (plVar15[5] = lVar17, *(int *)(lVar16 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar16 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar16 + 0x20) + 0x14);
      lVar17 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,&stack0x00000018);
      if ((lVar17 != 0) &&
         (lVar18 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar15 + 0x40)), lVar18 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar15 + 3) < 3) || (plVar15[6] = lVar17, *(int *)(lVar16 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar16 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar16 + 0x20) + 0x18);
      lVar17 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,(long)&stack0x00000010 + 4);
      if ((lVar17 != 0) &&
         (lVar18 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar15 + 0x40)), lVar18 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar15 + 3) < 4) || (plVar15[7] = lVar17, *(int *)(lVar16 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar16 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar16 + 0x20) + 0x1c);
      lVar17 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,&stack0x00000010);
      if ((lVar17 != 0) &&
         (lVar18 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar15 + 0x40)), lVar18 == 0))
      goto LAB_014532bc;
      if (*(uint *)(plVar15 + 3) < 5) goto LAB_014532b8;
      plVar15[8] = lVar17;
      uVar11 = FUN_01600be4(*(undefined8 *)PTR_DAT_033f38f8,plVar15,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      FUN_02660dac(uVar11,0);
    }
  }
  if (lVar13 != 0) {
    if (*(long *)(lVar13 + 0x18) == 0) {
      if (lVar16 == 0) goto LAB_014532b4;
      if (*(long *)(lVar16 + 0x18) == 0) {
        return (long *)0x0;
      }
      if ((int)*(long *)(lVar16 + 0x18) == 0) goto LAB_014532b8;
      lVar13 = *(long *)(lVar16 + 0x20);
    }
    else {
      if (lVar16 == 0) goto LAB_014532b4;
      iVar24 = (int)*(long *)(lVar13 + 0x18);
      if (*(long *)(lVar16 + 0x18) == 0) {
        if (iVar24 == 0) goto LAB_014532b8;
        lVar13 = *(long *)(lVar13 + 0x20);
      }
      else {
        if ((iVar24 == 0) || ((int)*(long *)(lVar16 + 0x18) == 0)) goto LAB_014532b8;
        lVar13 = FUN_014532d8(*(undefined8 *)(lVar13 + 0x20),*(undefined8 *)(lVar16 + 0x20),
                              *(undefined4 *)(unaff_x19 + 0x1c),*(undefined4 *)(unaff_x19 + 0x20),1,
                              plVar9);
      }
    }
    FUN_01322050(lVar10,lVar12,*(undefined8 *)Method_System_Nullable<Guid>_get_Value__);
    *(long *)(unaff_x19 + 0x58) = lVar10;
    if (lVar13 == 0) {
      plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0);
    }
    else {
      plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,1);
      if (plVar9 == (long *)0x0) goto LAB_014532b4;
      lVar10 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar10 == 0) {
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
      plVar9[4] = lVar13;
    }
    return plVar9;
  }
LAB_014532b4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


