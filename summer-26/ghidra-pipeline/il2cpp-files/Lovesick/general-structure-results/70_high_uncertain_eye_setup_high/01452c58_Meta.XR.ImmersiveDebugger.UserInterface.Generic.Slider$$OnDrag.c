/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$OnDrag
ENTRY_POINT: 01452c58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__OnDrag
                 (long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  int iVar11;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  lVar3 = thunk_FUN_00d6225c(param_2,*(undefined8 *)(param_1 + 0x40));
  if (lVar3 == 0) {
LAB_014532bc:
    uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,0);
  }
  if ((*(uint *)(unaff_x25 + 3) < 3) || (unaff_x25[6] = unaff_x21, *(int *)(unaff_x29 + 0x18) == 0))
  goto LAB_014532b8;
  if (*(long *)(unaff_x29 + 0x20) == 0) goto LAB_014532b4;
  uStack0000000000000014 = *(undefined4 *)(*(long *)(unaff_x29 + 0x20) + 0x18);
  lVar3 = thunk_FUN_00d61fa0(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                             ,(long)&stack0x00000010 + 4);
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x25 + 0x40)), lVar4 == 0))
  goto LAB_014532bc;
  if ((*(uint *)(unaff_x25 + 3) < 4) || (unaff_x25[7] = lVar3, *(int *)(unaff_x29 + 0x18) == 0))
  goto LAB_014532b8;
  if (*(long *)(unaff_x29 + 0x20) == 0) goto LAB_014532b4;
  uStack0000000000000010 = *(undefined4 *)(*(long *)(unaff_x29 + 0x20) + 0x1c);
  lVar3 = thunk_FUN_00d61fa0(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                             ,&stack0x00000010);
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x25 + 0x40)), lVar4 == 0))
  goto LAB_014532bc;
  if (*(uint *)(unaff_x25 + 3) < 5) goto LAB_014532b8;
  unaff_x25[8] = lVar3;
  uVar5 = FUN_01600be4(*(undefined8 *)
                        Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_<CreatePixelValidationMode>b__0__
                      );
  if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)StringLiteral_302);
  }
  FUN_02660dac(uVar5,0);
  if (*(int *)(unaff_x23 + 0x18) < 1) {
    lVar3 = FUN_00da4fb8(*(undefined8 *)
                          Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,0);
  }
  else {
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                              );
    if (lVar3 == 0) goto LAB_014532b4;
    FUN_01320e50(lVar3,*(undefined8 *)StringLiteral_11365);
    if (0 < *(int *)(unaff_x23 + 0x18)) {
      iVar11 = 0;
      do {
        FUN_0132138c();
        if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
        iVar1 = *(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x38);
        FUN_0132138c();
        if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
        FUN_00bbed00((float)iVar1,
                     (float)*(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x3c)
                     ,lVar3,*unaff_x26);
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(unaff_x23 + 0x18));
    }
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar6 = (long *)Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(1,0);
    puVar2 = Method_UnityEngine_Vector3_set_Item__;
    if (plVar6 == (long *)0x0) goto LAB_014532b4;
    *(undefined1 *)((long)plVar6 + 0x14) = 0;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11575);
    if (lVar4 == 0) goto LAB_014532b4;
    FUN_01320e50(lVar4,*(undefined8 *)System_Xml_IXmlLineInfo_TypeInfo);
    if (0 < *(int *)(lVar3 + 0x18)) {
      iVar11 = 0;
      do {
        FUN_00bbf8e0(lVar4,CONCAT44(*(undefined4 *)(unaff_x19 + 0x18),
                                    *(undefined4 *)(unaff_x19 + 0x18)),*(undefined8 *)puVar2);
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(lVar3 + 0x18));
    }
    if (unaff_x29 == 0) goto LAB_014532b4;
    if (*(long *)(unaff_x29 + 0x18) != 0) {
      if ((int)*(long *)(unaff_x29 + 0x18) == 0) goto LAB_014532b8;
      if (*(long *)(unaff_x29 + 0x20) == 0) goto LAB_014532b4;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_014532b4;
    lVar8 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x28) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto FUN_01452f54;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724();
FUN_01452f54:
    (*(code *)*puVar7)();
    lVar3 = (**(code **)(*plVar6 + 0x188))
                      (plVar6,lVar3,lVar4,uStack0000000000000024,uStack0000000000000020,0,
                       *(undefined8 *)(*plVar6 + 400));
    if (3 < in_stack_00000008._4_4_) {
      plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
      uStack0000000000000038 = *(undefined4 *)(unaff_x23 + 0x18);
      lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000038);
      puVar2 = StringLiteral_302;
      if (plVar6 == (long *)0x0) goto LAB_014532b4;
      if ((lVar4 != 0) &&
         (lVar8 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_014532bc;
      if ((int)plVar6[3] == 0) goto LAB_014532b8;
      plVar6[4] = lVar4;
      if (lVar3 == 0) goto LAB_014532b4;
      if (*(int *)(lVar3 + 0x18) == 0) goto LAB_014532b8;
      if (*(long *)(lVar3 + 0x20) == 0) goto LAB_014532b4;
      uStack000000000000001c = *(undefined4 *)(*(long *)(lVar3 + 0x20) + 0x10);
      lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,(long)&stack0x00000018 + 4);
      if ((lVar4 != 0) &&
         (lVar8 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar6 + 3) < 2) || (plVar6[5] = lVar4, *(int *)(lVar3 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar3 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar3 + 0x20) + 0x14);
      lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000018);
      if ((lVar4 != 0) &&
         (lVar8 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar6 + 3) < 3) || (plVar6[6] = lVar4, *(int *)(lVar3 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar3 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar3 + 0x20) + 0x18);
      lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,(long)&stack0x00000010 + 4);
      if ((lVar4 != 0) &&
         (lVar8 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar6 + 3) < 4) || (plVar6[7] = lVar4, *(int *)(lVar3 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar3 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar3 + 0x20) + 0x1c);
      lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000010);
      if ((lVar4 != 0) &&
         (lVar8 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_014532bc;
      if (*(uint *)(plVar6 + 3) < 5) goto LAB_014532b8;
      plVar6[8] = lVar4;
      uVar5 = FUN_01600be4(*(undefined8 *)PTR_DAT_033f38f8,plVar6,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      FUN_02660dac(uVar5,0);
    }
  }
  if (unaff_x29 != 0) {
    if (*(long *)(unaff_x29 + 0x18) == 0) {
      if (lVar3 == 0) goto LAB_014532b4;
      if (*(long *)(lVar3 + 0x18) == 0) {
        return (long *)0x0;
      }
      if ((int)*(long *)(lVar3 + 0x18) == 0) goto LAB_014532b8;
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    else {
      if (lVar3 == 0) goto LAB_014532b4;
      iVar11 = (int)*(long *)(unaff_x29 + 0x18);
      if (*(long *)(lVar3 + 0x18) == 0) {
        if (iVar11 == 0) goto LAB_014532b8;
        lVar3 = *(long *)(unaff_x29 + 0x20);
      }
      else {
        if ((iVar11 == 0) || ((int)*(long *)(lVar3 + 0x18) == 0)) goto LAB_014532b8;
        lVar3 = FUN_014532d8(*(undefined8 *)(unaff_x29 + 0x20),*(undefined8 *)(lVar3 + 0x20),
                             *(undefined4 *)(unaff_x19 + 0x1c),*(undefined4 *)(unaff_x19 + 0x20),1);
      }
    }
    FUN_01322050();
    *(undefined8 *)(unaff_x19 + 0x58) = unaff_x22;
    if (lVar3 == 0) {
      plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0);
    }
    else {
      plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,1);
      if (plVar6 == (long *)0x0) goto LAB_014532b4;
      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar4 == 0) goto LAB_014532bc;
      if ((int)plVar6[3] == 0) {
LAB_014532b8:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar6[4] = lVar3;
    }
    return plVar6;
  }
LAB_014532b4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


