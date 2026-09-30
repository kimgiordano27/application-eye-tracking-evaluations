/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$Setup
ENTRY_POINT: 014528f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__Setup(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  int iVar13;
  long *unaff_x28;
  undefined8 *unaff_x29;
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
  
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                            );
  if (lVar4 == 0) goto LAB_014532b4;
  FUN_01320e50(lVar4,*(undefined8 *)StringLiteral_11365);
  if (0 < *(int *)(unaff_x22 + 0x18)) {
    iVar13 = 0;
    do {
      FUN_0132138c();
      lVar9 = *unaff_x20;
      lVar7 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_01452998;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724();
LAB_01452998:
      uVar3 = (*(code *)*puVar5)();
      if (lVar7 == 0) goto LAB_014532b4;
      FUN_014450f0(lVar7,uVar3);
      FUN_0132138c();
      if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
      iVar1 = *(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x38);
      FUN_0132138c();
      if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
      FUN_00bbed00((float)iVar1,
                   (float)*(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x3c),
                   lVar4,*unaff_x29);
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(unaff_x22 + 0x18));
  }
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar6 = (long *)Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(param_1,0);
  if (plVar6 == (long *)0x0) goto LAB_014532b4;
  *(undefined1 *)((long)plVar6 + 0x14) = 0;
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11575);
  if (lVar7 == 0) goto LAB_014532b4;
  FUN_01320e50(lVar7,*(undefined8 *)System_Xml_IXmlLineInfo_TypeInfo);
  if (0 < *(int *)(lVar4 + 0x18)) {
    iVar13 = 0;
    do {
      in_stack_00000028 = 0;
      lVar9 = *unaff_x20;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 3) * 0x10 + 0x138);
            goto LAB_01452ad8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724();
LAB_01452ad8:
      (*(code *)*puVar5)();
      FUN_00bbf8e0(lVar7,in_stack_00000028,*(undefined8 *)Method_UnityEngine_Vector3_set_Item__);
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(lVar4 + 0x18));
  }
  *(undefined4 *)(plVar6 + 2) = 5;
  lVar4 = (**(code **)(*plVar6 + 0x188))
                    (plVar6,lVar4,lVar7,*(undefined4 *)(unaff_x19 + 0x1c),
                     *(undefined4 *)(unaff_x19 + 0x20),0,*(undefined8 *)(*plVar6 + 400));
  puVar5 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  if (4 < in_stack_00000008._4_4_) {
    plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
    uStack0000000000000038 = *(undefined4 *)(unaff_x22 + 0x18);
    lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,&stack0x00000038);
    if (plVar6 == (long *)0x0) goto LAB_014532b4;
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
    goto LAB_014532bc;
    puVar5 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
    if ((int)plVar6[3] == 0) goto LAB_014532b8;
    plVar6[4] = lVar7;
    if (lVar4 == 0) goto LAB_014532b4;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_014532b8;
    if (*(long *)(lVar4 + 0x20) == 0) goto LAB_014532b4;
    uStack000000000000001c = *(undefined4 *)(*(long *)(lVar4 + 0x20) + 0x10);
    lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,(long)&stack0x00000018 + 4);
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar6 + 3) < 2) || (plVar6[5] = lVar7, *(int *)(lVar4 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar4 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar4 + 0x20) + 0x14);
    lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,&stack0x00000018);
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar6 + 3) < 3) || (plVar6[6] = lVar7, *(int *)(lVar4 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar4 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar4 + 0x20) + 0x18);
    lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,(long)&stack0x00000010 + 4);
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar6 + 3) < 4) || (plVar6[7] = lVar7, *(int *)(lVar4 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar4 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar4 + 0x20) + 0x1c);
    lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,&stack0x00000010);
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
    goto LAB_014532bc;
    if (*(uint *)(plVar6 + 3) < 5) goto LAB_014532b8;
    plVar6[8] = lVar7;
    uVar8 = FUN_01600be4(*(undefined8 *)
                          Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_<CreatePixelValidationMode>b__0__
                         ,plVar6,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar8,0);
  }
  if (*(int *)(unaff_x23 + 0x18) < 1) {
    lVar7 = FUN_00da4fb8(*(undefined8 *)
                          Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,0);
  }
  else {
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                              );
    if (lVar7 == 0) goto LAB_014532b4;
    FUN_01320e50(lVar7,*(undefined8 *)StringLiteral_11365);
    if (0 < *(int *)(unaff_x23 + 0x18)) {
      iVar13 = 0;
      do {
        FUN_0132138c();
        if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
        iVar1 = *(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x38);
        FUN_0132138c();
        if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
        FUN_00bbed00((float)iVar1,
                     (float)*(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x3c)
                     ,lVar7,*puVar5);
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(unaff_x23 + 0x18));
    }
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar6 = (long *)Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(1,0);
    puVar2 = Method_UnityEngine_Vector3_set_Item__;
    if (plVar6 == (long *)0x0) goto LAB_014532b4;
    *(undefined1 *)((long)plVar6 + 0x14) = 0;
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11575);
    if (lVar9 == 0) goto LAB_014532b4;
    FUN_01320e50(lVar9,*(undefined8 *)System_Xml_IXmlLineInfo_TypeInfo);
    if (0 < *(int *)(lVar7 + 0x18)) {
      iVar13 = 0;
      do {
        FUN_00bbf8e0(lVar9,CONCAT44(*(undefined4 *)(unaff_x19 + 0x18),
                                    *(undefined4 *)(unaff_x19 + 0x18)),*(undefined8 *)puVar2);
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(lVar7 + 0x18));
    }
    if (lVar4 == 0) goto LAB_014532b4;
    if (*(long *)(lVar4 + 0x18) != 0) {
      if ((int)*(long *)(lVar4 + 0x18) == 0) goto LAB_014532b8;
      if (*(long *)(lVar4 + 0x20) == 0) goto LAB_014532b4;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_014532b4;
    lVar10 = *unaff_x20;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
          goto FUN_01452f54;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724();
FUN_01452f54:
    (*(code *)*puVar5)();
    lVar7 = (**(code **)(*plVar6 + 0x188))
                      (plVar6,lVar7,lVar9,uStack0000000000000024,uStack0000000000000020,0,
                       *(undefined8 *)(*plVar6 + 400));
    if (3 < in_stack_00000008._4_4_) {
      plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
      uStack0000000000000038 = *(undefined4 *)(unaff_x23 + 0x18);
      lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000038);
      puVar2 = StringLiteral_302;
      if (plVar6 == (long *)0x0) goto LAB_014532b4;
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
      goto LAB_014532bc;
      if ((int)plVar6[3] == 0) goto LAB_014532b8;
      plVar6[4] = lVar9;
      if (lVar7 == 0) goto LAB_014532b4;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014532b8;
      if (*(long *)(lVar7 + 0x20) == 0) goto LAB_014532b4;
      uStack000000000000001c = *(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x10);
      lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,(long)&stack0x00000018 + 4);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar6 + 3) < 2) || (plVar6[5] = lVar9, *(int *)(lVar7 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar7 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x14);
      lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000018);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar6 + 3) < 3) || (plVar6[6] = lVar9, *(int *)(lVar7 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar7 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x18);
      lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,(long)&stack0x00000010 + 4);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar6 + 3) < 4) || (plVar6[7] = lVar9, *(int *)(lVar7 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar7 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x1c);
      lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000010);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
      goto LAB_014532bc;
      if (*(uint *)(plVar6 + 3) < 5) goto LAB_014532b8;
      plVar6[8] = lVar9;
      uVar8 = FUN_01600be4(*(undefined8 *)PTR_DAT_033f38f8,plVar6,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      FUN_02660dac(uVar8,0);
    }
  }
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x18) == 0) {
      if (lVar7 == 0) goto LAB_014532b4;
      if (*(long *)(lVar7 + 0x18) == 0) {
        return (long *)0x0;
      }
      if ((int)*(long *)(lVar7 + 0x18) == 0) goto LAB_014532b8;
      lVar4 = *(long *)(lVar7 + 0x20);
    }
    else {
      if (lVar7 == 0) goto LAB_014532b4;
      iVar13 = (int)*(long *)(lVar4 + 0x18);
      if (*(long *)(lVar7 + 0x18) == 0) {
        if (iVar13 == 0) goto LAB_014532b8;
        lVar4 = *(long *)(lVar4 + 0x20);
      }
      else {
        if ((iVar13 == 0) || ((int)*(long *)(lVar7 + 0x18) == 0)) goto LAB_014532b8;
        lVar4 = FUN_014532d8(*(undefined8 *)(lVar4 + 0x20),*(undefined8 *)(lVar7 + 0x20),
                             *(undefined4 *)(unaff_x19 + 0x1c),*(undefined4 *)(unaff_x19 + 0x20),1);
      }
    }
    FUN_01322050();
    *(long *)(unaff_x19 + 0x58) = unaff_x22;
    if (lVar4 == 0) {
      plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0);
    }
    else {
      plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,1);
      if (plVar6 == (long *)0x0) goto LAB_014532b4;
      lVar7 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar7 == 0) {
LAB_014532bc:
        uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar8,0);
      }
      if ((int)plVar6[3] == 0) {
LAB_014532b8:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar6[4] = lVar4;
    }
    return plVar6;
  }
LAB_014532b4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


