/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$get_Tweak
ENTRY_POINT: 01452818
PROGRAM: Lovesick-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__get_Tweak(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  int iVar14;
  long *unaff_x28;
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
  
  if (*(uint *)(unaff_x24 + 0x18) < 4) goto LAB_014532b8;
  *(undefined8 *)(unaff_x24 + 0x38) = unaff_x21;
  uVar5 = FUN_01600be4(*(undefined8 *)UnityEngine_ProBuilder_Shapes_Sprite_TypeInfo);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x29);
  }
  FUN_02660dac(uVar5,0);
  puVar2 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  if (*(int *)(unaff_x22 + 0x18) < 1) {
    lVar9 = FUN_00da4fb8(*(undefined8 *)
                          Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,0);
    puVar6 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  }
  else {
    if (unaff_x20 == (long *)0x0) goto LAB_014532b4;
    lVar9 = *unaff_x20;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_014528e4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724();
LAB_014528e4:
    uVar3 = (*(code *)*puVar6)();
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                              );
    if (lVar9 == 0) goto LAB_014532b4;
    FUN_01320e50(lVar9,*(undefined8 *)StringLiteral_11365);
    if (0 < *(int *)(unaff_x22 + 0x18)) {
      iVar14 = 0;
      do {
        FUN_0132138c();
        lVar10 = *unaff_x20;
        lVar8 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x28) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_01452998;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724();
LAB_01452998:
        uVar4 = (*(code *)*puVar6)();
        if (lVar8 == 0) goto LAB_014532b4;
        FUN_014450f0(lVar8,uVar4);
        FUN_0132138c();
        if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
        iVar1 = *(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x38);
        FUN_0132138c();
        if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
        FUN_00bbed00((float)iVar1,
                     (float)*(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x3c)
                     ,lVar9,*(undefined8 *)puVar2);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(unaff_x22 + 0x18));
    }
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar7 = (long *)Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(uVar3,0);
    if (plVar7 == (long *)0x0) goto LAB_014532b4;
    *(undefined1 *)((long)plVar7 + 0x14) = 0;
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11575);
    if (lVar8 == 0) goto LAB_014532b4;
    FUN_01320e50(lVar8,*(undefined8 *)System_Xml_IXmlLineInfo_TypeInfo);
    if (0 < *(int *)(lVar9 + 0x18)) {
      iVar14 = 0;
      do {
        in_stack_00000028 = 0;
        lVar10 = *unaff_x20;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x28) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 3) * 0x10 + 0x138);
              goto LAB_01452ad8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724();
LAB_01452ad8:
        (*(code *)*puVar6)();
        FUN_00bbf8e0(lVar8,in_stack_00000028,*(undefined8 *)Method_UnityEngine_Vector3_set_Item__);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar9 + 0x18));
    }
    *(undefined4 *)(plVar7 + 2) = 5;
    lVar9 = (**(code **)(*plVar7 + 0x188))
                      (plVar7,lVar9,lVar8,*(undefined4 *)(unaff_x19 + 0x1c),
                       *(undefined4 *)(unaff_x19 + 0x20),0,*(undefined8 *)(*plVar7 + 400));
    puVar6 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
    if (4 < in_stack_00000008._4_4_) {
      plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
      uStack0000000000000038 = *(undefined4 *)(unaff_x22 + 0x18);
      lVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000038);
      if (plVar7 == (long *)0x0) goto LAB_014532b4;
      if ((lVar8 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_014532bc;
      puVar6 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
      if ((int)plVar7[3] == 0) goto LAB_014532b8;
      plVar7[4] = lVar8;
      if (lVar9 == 0) goto LAB_014532b4;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_014532b8;
      if (*(long *)(lVar9 + 0x20) == 0) goto LAB_014532b4;
      uStack000000000000001c = *(undefined4 *)(*(long *)(lVar9 + 0x20) + 0x10);
      lVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,(long)&stack0x00000018 + 4);
      if ((lVar8 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar7 + 3) < 2) || (plVar7[5] = lVar8, *(int *)(lVar9 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar9 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar9 + 0x20) + 0x14);
      lVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000018);
      if ((lVar8 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar7 + 3) < 3) || (plVar7[6] = lVar8, *(int *)(lVar9 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar9 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar9 + 0x20) + 0x18);
      lVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,(long)&stack0x00000010 + 4);
      if ((lVar8 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar7 + 3) < 4) || (plVar7[7] = lVar8, *(int *)(lVar9 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar9 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar9 + 0x20) + 0x1c);
      lVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000010);
      if ((lVar8 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_014532bc;
      if (*(uint *)(plVar7 + 3) < 5) goto LAB_014532b8;
      plVar7[8] = lVar8;
      uVar5 = FUN_01600be4(*(undefined8 *)
                            Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_<CreatePixelValidationMode>b__0__
                           ,plVar7,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar5,0);
    }
  }
  if (*(int *)(unaff_x23 + 0x18) < 1) {
    lVar8 = FUN_00da4fb8(*(undefined8 *)
                          Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,0);
  }
  else {
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                              );
    if (lVar8 == 0) goto LAB_014532b4;
    FUN_01320e50(lVar8,*(undefined8 *)StringLiteral_11365);
    if (0 < *(int *)(unaff_x23 + 0x18)) {
      iVar14 = 0;
      do {
        FUN_0132138c();
        if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
        iVar1 = *(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x38);
        FUN_0132138c();
        if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
        FUN_00bbed00((float)iVar1,
                     (float)*(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x3c)
                     ,lVar8,*puVar6);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(unaff_x23 + 0x18));
    }
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar7 = (long *)Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(1,0);
    puVar2 = Method_UnityEngine_Vector3_set_Item__;
    if (plVar7 == (long *)0x0) goto LAB_014532b4;
    *(undefined1 *)((long)plVar7 + 0x14) = 0;
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11575);
    if (lVar10 == 0) goto LAB_014532b4;
    FUN_01320e50(lVar10,*(undefined8 *)System_Xml_IXmlLineInfo_TypeInfo);
    if (0 < *(int *)(lVar8 + 0x18)) {
      iVar14 = 0;
      do {
        FUN_00bbf8e0(lVar10,CONCAT44(*(undefined4 *)(unaff_x19 + 0x18),
                                     *(undefined4 *)(unaff_x19 + 0x18)),*(undefined8 *)puVar2);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar8 + 0x18));
    }
    if (lVar9 == 0) goto LAB_014532b4;
    if (*(long *)(lVar9 + 0x18) != 0) {
      if ((int)*(long *)(lVar9 + 0x18) == 0) goto LAB_014532b8;
      if (*(long *)(lVar9 + 0x20) == 0) goto LAB_014532b4;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_014532b4;
    lVar11 = *unaff_x20;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 5) * 0x10 + 0x138);
          goto FUN_01452f54;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724();
FUN_01452f54:
    (*(code *)*puVar6)();
    lVar8 = (**(code **)(*plVar7 + 0x188))
                      (plVar7,lVar8,lVar10,uStack0000000000000024,uStack0000000000000020,0,
                       *(undefined8 *)(*plVar7 + 400));
    if (3 < in_stack_00000008._4_4_) {
      plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
      uStack0000000000000038 = *(undefined4 *)(unaff_x23 + 0x18);
      lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,&stack0x00000038);
      puVar2 = StringLiteral_302;
      if (plVar7 == (long *)0x0) goto LAB_014532b4;
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
      goto LAB_014532bc;
      if ((int)plVar7[3] == 0) goto LAB_014532b8;
      plVar7[4] = lVar10;
      if (lVar8 == 0) goto LAB_014532b4;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_014532b8;
      if (*(long *)(lVar8 + 0x20) == 0) goto LAB_014532b4;
      uStack000000000000001c = *(undefined4 *)(*(long *)(lVar8 + 0x20) + 0x10);
      lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,(long)&stack0x00000018 + 4);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar7 + 3) < 2) || (plVar7[5] = lVar10, *(int *)(lVar8 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar8 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar8 + 0x20) + 0x14);
      lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,&stack0x00000018);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar7 + 3) < 3) || (plVar7[6] = lVar10, *(int *)(lVar8 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar8 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar8 + 0x20) + 0x18);
      lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,(long)&stack0x00000010 + 4);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar7 + 3) < 4) || (plVar7[7] = lVar10, *(int *)(lVar8 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar8 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar8 + 0x20) + 0x1c);
      lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,&stack0x00000010);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
      goto LAB_014532bc;
      if (*(uint *)(plVar7 + 3) < 5) goto LAB_014532b8;
      plVar7[8] = lVar10;
      uVar5 = FUN_01600be4(*(undefined8 *)PTR_DAT_033f38f8,plVar7,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      FUN_02660dac(uVar5,0);
    }
  }
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 0x18) == 0) {
      if (lVar8 == 0) goto LAB_014532b4;
      if (*(long *)(lVar8 + 0x18) == 0) {
        return (long *)0x0;
      }
      if ((int)*(long *)(lVar8 + 0x18) == 0) goto LAB_014532b8;
      lVar9 = *(long *)(lVar8 + 0x20);
    }
    else {
      if (lVar8 == 0) goto LAB_014532b4;
      iVar14 = (int)*(long *)(lVar9 + 0x18);
      if (*(long *)(lVar8 + 0x18) == 0) {
        if (iVar14 == 0) goto LAB_014532b8;
        lVar9 = *(long *)(lVar9 + 0x20);
      }
      else {
        if ((iVar14 == 0) || ((int)*(long *)(lVar8 + 0x18) == 0)) goto LAB_014532b8;
        lVar9 = FUN_014532d8(*(undefined8 *)(lVar9 + 0x20),*(undefined8 *)(lVar8 + 0x20),
                             *(undefined4 *)(unaff_x19 + 0x1c),*(undefined4 *)(unaff_x19 + 0x20),1);
      }
    }
    FUN_01322050();
    *(long *)(unaff_x19 + 0x58) = unaff_x22;
    if (lVar9 == 0) {
      plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0);
    }
    else {
      plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,1);
      if (plVar7 == (long *)0x0) goto LAB_014532b4;
      lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar7 + 0x40));
      if (lVar8 == 0) {
LAB_014532bc:
        uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar5,0);
      }
      if ((int)plVar7[3] == 0) {
LAB_014532b8:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar7[4] = lVar9;
    }
    return plVar7;
  }
LAB_014532b4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


