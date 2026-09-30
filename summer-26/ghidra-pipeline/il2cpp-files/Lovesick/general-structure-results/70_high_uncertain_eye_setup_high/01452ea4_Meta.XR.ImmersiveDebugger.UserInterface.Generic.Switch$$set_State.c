/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Switch$$set_State
ENTRY_POINT: 01452ea4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_Switch__set_State(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x22;
  long unaff_x23;
  long *unaff_x26;
  long *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000038;
  
  if (unaff_x29 == 0) {
LAB_014532b4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
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
        puVar2 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
        goto FUN_01452f54;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar2 = (undefined8 *)FUN_00d59724();
FUN_01452f54:
  (*(code *)*puVar2)();
  lVar8 = (**(code **)(*unaff_x26 + 0x188))();
  if (3 < in_stack_00000008._4_4_) {
    plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
    in_stack_00000038 = *(undefined4 *)(unaff_x23 + 0x18);
    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,&stack0x00000038);
    puVar1 = StringLiteral_302;
    if (plVar4 == (long *)0x0) goto LAB_014532b4;
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
    goto LAB_014532bc;
    if ((int)plVar4[3] == 0) goto LAB_014532b8;
    plVar4[4] = lVar5;
    if (lVar8 == 0) goto LAB_014532b4;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_014532b8;
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_014532b4;
    uStack000000000000001c = *(undefined4 *)(*(long *)(lVar8 + 0x20) + 0x10);
    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,(long)&stack0x00000018 + 4);
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar4 + 3) < 2) || (plVar4[5] = lVar5, *(int *)(lVar8 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar8 + 0x20) + 0x14);
    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,&stack0x00000018);
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar4 + 3) < 3) || (plVar4[6] = lVar5, *(int *)(lVar8 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar8 + 0x20) + 0x18);
    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,(long)&stack0x00000010 + 4);
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar4 + 3) < 4) || (plVar4[7] = lVar5, *(int *)(lVar8 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar8 + 0x20) + 0x1c);
    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,&stack0x00000010);
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
    goto LAB_014532bc;
    if (*(uint *)(plVar4 + 3) < 5) goto LAB_014532b8;
    plVar4[8] = lVar5;
    uVar6 = FUN_01600be4(*(undefined8 *)PTR_DAT_033f38f8,plVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    FUN_02660dac(uVar6,0);
  }
  if (unaff_x29 == 0) goto LAB_014532b4;
  if (*(long *)(unaff_x29 + 0x18) == 0) {
    if (lVar8 == 0) goto LAB_014532b4;
    if (*(long *)(lVar8 + 0x18) == 0) {
      return (long *)0x0;
    }
    if ((int)*(long *)(lVar8 + 0x18) == 0) goto LAB_014532b8;
    lVar8 = *(long *)(lVar8 + 0x20);
  }
  else {
    if (lVar8 == 0) goto LAB_014532b4;
    iVar7 = (int)*(long *)(unaff_x29 + 0x18);
    if (*(long *)(lVar8 + 0x18) == 0) {
      if (iVar7 == 0) goto LAB_014532b8;
      lVar8 = *(long *)(unaff_x29 + 0x20);
    }
    else {
      if ((iVar7 == 0) || ((int)*(long *)(lVar8 + 0x18) == 0)) goto LAB_014532b8;
      lVar8 = FUN_014532d8(*(undefined8 *)(unaff_x29 + 0x20),*(undefined8 *)(lVar8 + 0x20),
                           *(undefined4 *)(unaff_x19 + 0x1c),*(undefined4 *)(unaff_x19 + 0x20),1);
    }
  }
  FUN_01322050();
  *(undefined8 *)(unaff_x19 + 0x58) = unaff_x22;
  if (lVar8 == 0) {
    plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)
                                   Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                  ,0);
  }
  else {
    plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)
                                   Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                  ,1);
    if (plVar4 == (long *)0x0) goto LAB_014532b4;
    lVar5 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar4 + 0x40));
    if (lVar5 == 0) {
LAB_014532bc:
      uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar6,0);
    }
    if ((int)plVar4[3] == 0) {
LAB_014532b8:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar4[4] = lVar8;
  }
  return plVar4;
}


