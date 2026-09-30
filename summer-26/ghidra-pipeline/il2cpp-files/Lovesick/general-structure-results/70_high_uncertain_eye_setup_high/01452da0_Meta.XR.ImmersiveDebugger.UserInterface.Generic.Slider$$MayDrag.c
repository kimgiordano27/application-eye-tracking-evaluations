/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$MayDrag
ENTRY_POINT: 01452da0
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


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__MayDrag(void)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int in_w8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  int iVar11;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  if (0 < in_w8) {
    iVar11 = 0;
    do {
      FUN_0132138c();
      if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
      iVar1 = *(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x38);
      FUN_0132138c();
      if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) goto LAB_014532b4;
      FUN_00bbed00((float)iVar1,
                   (float)*(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x3c));
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(unaff_x23 + 0x18));
  }
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar3 = (long *)Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(1,0);
  puVar2 = Method_UnityEngine_Vector3_set_Item__;
  if (plVar3 != (long *)0x0) {
    *(undefined1 *)((long)plVar3 + 0x14) = 0;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11575);
    if (lVar4 == 0) goto LAB_014532b4;
    FUN_01320e50(lVar4,*(undefined8 *)System_Xml_IXmlLineInfo_TypeInfo);
    if (0 < *(int *)(unaff_x25 + 0x18)) {
      iVar11 = 0;
      do {
        FUN_00bbf8e0(lVar4,CONCAT44(*(undefined4 *)(unaff_x19 + 0x18),
                                    *(undefined4 *)(unaff_x19 + 0x18)),*(undefined8 *)puVar2);
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(unaff_x25 + 0x18));
    }
    if (unaff_x29 == 0) goto LAB_014532b4;
    if (*(long *)(unaff_x29 + 0x18) != 0) {
      if ((int)*(long *)(unaff_x29 + 0x18) == 0) goto LAB_014532b8;
      if (*(long *)(unaff_x29 + 0x20) == 0) goto LAB_014532b4;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_014532b4;
    lVar4 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto FUN_01452f54;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724();
FUN_01452f54:
    (*(code *)*puVar5)();
    lVar4 = (**(code **)(*plVar3 + 0x188))(plVar3);
    if (3 < in_stack_00000008._4_4_) {
      plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
      uStack0000000000000038 = *(undefined4 *)(unaff_x23 + 0x18);
      lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000038);
      puVar2 = StringLiteral_302;
      if (plVar3 == (long *)0x0) goto LAB_014532b4;
      if ((lVar7 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
      goto LAB_014532bc;
      if ((int)plVar3[3] == 0) goto LAB_014532b8;
      plVar3[4] = lVar7;
      if (lVar4 == 0) goto LAB_014532b4;
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_014532b8;
      if (*(long *)(lVar4 + 0x20) == 0) goto LAB_014532b4;
      uStack000000000000001c = *(undefined4 *)(*(long *)(lVar4 + 0x20) + 0x10);
      lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,(long)&stack0x00000018 + 4);
      if ((lVar7 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar3 + 3) < 2) || (plVar3[5] = lVar7, *(int *)(lVar4 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar4 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar4 + 0x20) + 0x14);
      lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000018);
      if ((lVar7 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar3 + 3) < 3) || (plVar3[6] = lVar7, *(int *)(lVar4 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar4 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar4 + 0x20) + 0x18);
      lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,(long)&stack0x00000010 + 4);
      if ((lVar7 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
      goto LAB_014532bc;
      if ((*(uint *)(plVar3 + 3) < 4) || (plVar3[7] = lVar7, *(int *)(lVar4 + 0x18) == 0))
      goto LAB_014532b8;
      if (*(long *)(lVar4 + 0x20) == 0) goto LAB_014532b4;
      uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar4 + 0x20) + 0x1c);
      lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000010);
      if ((lVar7 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
      goto LAB_014532bc;
      if (*(uint *)(plVar3 + 3) < 5) goto LAB_014532b8;
      plVar3[8] = lVar7;
      uVar8 = FUN_01600be4(*(undefined8 *)PTR_DAT_033f38f8,plVar3,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      FUN_02660dac(uVar8,0);
    }
    if (unaff_x29 == 0) goto LAB_014532b4;
    if (*(long *)(unaff_x29 + 0x18) == 0) {
      if (lVar4 == 0) goto LAB_014532b4;
      if (*(long *)(lVar4 + 0x18) == 0) {
        return (long *)0x0;
      }
      if ((int)*(long *)(lVar4 + 0x18) == 0) goto LAB_014532b8;
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    else {
      if (lVar4 == 0) goto LAB_014532b4;
      iVar11 = (int)*(long *)(unaff_x29 + 0x18);
      if (*(long *)(lVar4 + 0x18) == 0) {
        if (iVar11 == 0) goto LAB_014532b8;
        lVar4 = *(long *)(unaff_x29 + 0x20);
      }
      else {
        if ((iVar11 == 0) || ((int)*(long *)(lVar4 + 0x18) == 0)) goto LAB_014532b8;
        lVar4 = FUN_014532d8(*(undefined8 *)(unaff_x29 + 0x20),*(undefined8 *)(lVar4 + 0x20),
                             *(undefined4 *)(unaff_x19 + 0x1c),*(undefined4 *)(unaff_x19 + 0x20),1);
      }
    }
    FUN_01322050();
    *(undefined8 *)(unaff_x19 + 0x58) = unaff_x22;
    if (lVar4 == 0) {
      plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0);
    }
    else {
      plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,1);
      if (plVar3 == (long *)0x0) goto LAB_014532b4;
      lVar7 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar7 == 0) {
LAB_014532bc:
        uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar8,0);
      }
      if ((int)plVar3[3] == 0) {
LAB_014532b8:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar3[4] = lVar4;
    }
    return plVar3;
  }
LAB_014532b4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


