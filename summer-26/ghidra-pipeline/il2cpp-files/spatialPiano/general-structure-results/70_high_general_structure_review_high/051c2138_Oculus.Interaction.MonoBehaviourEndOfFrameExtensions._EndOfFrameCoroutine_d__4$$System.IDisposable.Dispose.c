/*
FUNCTION_NAME: Oculus.Interaction.MonoBehaviourEndOfFrameExtensions.<EndOfFrameCoroutine>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 051c2138
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_MonoBehaviourEndOfFrameExtensions_<EndOfFrameCoroutine>d__4__System_IDisposable_Dispose
               (undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long unaff_x19;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  
  thunk_FUN_02f6670c(param_1);
  uVar4 = FUN_051b57cc();
  puVar2 = UnityEngine_UIElements_EventCallback<PointerUpEvent>_TypeInfo;
  if ((uVar4 & 1) == 0) {
    uVar9 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar10 = *(undefined8 *)UnityEngine_UIElements_EventCallback<PointerUpEvent>_TypeInfo;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_050e4454(uVar10,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*unaff_x25);
    }
    uVar4 = FUN_051b57cc(uVar9,uVar10,&stack0x00000018,0);
    if ((uVar4 & 1) == 0) {
      bVar3 = 0;
      *(undefined1 *)(unaff_x19 + 0xf1) = 1;
      goto Oculus_Interaction_PoseUtils__Delta;
    }
    if (in_stack_00000018 == (long *)0x0) goto LAB_051c26cc;
    lVar5 = (**(code **)(*in_stack_00000018 + 0x458))
                      (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x460));
    if (lVar5 == 0) goto LAB_051c26cc;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_051c26d0;
    lVar8 = *(long *)(unaff_x23 + 0xe0);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x60);
    uVar10 = *(undefined8 *)puVar2;
    iVar1 = *(int *)(lVar8 + 0xe4);
    *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(lVar5 + 0x20);
    if (iVar1 == 0) {
      thunk_FUN_02f6670c(lVar8);
    }
    uVar10 = FUN_050e4454(uVar10,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*unaff_x25);
    }
    uVar4 = FUN_051b574c(uVar9,uVar10,0);
    if ((uVar4 & 1) != 0) {
      uVar9 = *unaff_x26;
      if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      plVar6 = (long *)FUN_050e4454(uVar9,0);
      lVar5 = FUN_02f0880c(*unaff_x24,1);
      if (lVar5 == 0) goto LAB_051c26cc;
      uVar9 = *(undefined8 *)(unaff_x19 + 0xc0);
      FUN_02a81aa0(lVar5,uVar9);
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_051c26d0;
      *(undefined8 *)(lVar5 + 0x20) = uVar9;
      if (plVar6 == (long *)0x0) goto LAB_051c26cc;
      (**(code **)(*plVar6 + 0x938))(plVar6,lVar5,*(undefined8 *)(*plVar6 + 0x940));
      FUN_051c68fc();
    }
    uVar9 = FUN_051a206c(*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x19 + 0xc0),0);
    *(undefined8 *)(unaff_x19 + 0xf8) = uVar9;
    FUN_051c69b0();
    plVar6 = *(long **)(unaff_x19 + 0x18);
    if (plVar6 == (long *)0x0) goto LAB_051c26cc;
    uVar4 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
    if ((uVar4 & 1) != 0) {
      plVar6 = *(long **)(unaff_x19 + 0x18);
      if (plVar6 == (long *)0x0) goto LAB_051c26cc;
      uVar9 = (**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440));
      uVar10 = *(undefined8 *)puVar2;
      if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)(unaff_x23 + 0xe0));
      }
      uVar10 = FUN_050e4454(uVar10,0);
      uVar4 = FUN_050ed374(uVar9,uVar10,0);
      if ((uVar4 & 1) != 0) {
        *(undefined1 *)(unaff_x19 + 0x28) = 0;
        bVar3 = 1;
        *(undefined1 *)(unaff_x19 + 0xf1) = 0;
        *(long **)(unaff_x19 + 0xd0) = in_stack_00000018;
        goto Oculus_Interaction_PoseUtils__Delta;
      }
    }
    uVar9 = *unaff_x26;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    plVar6 = (long *)FUN_050e4454(uVar9,0);
    plVar7 = (long *)FUN_02f0880c(*unaff_x24,1);
    if (plVar7 == (long *)0x0) goto LAB_051c26cc;
    lVar5 = *(long *)(unaff_x19 + 0xc0);
    if ((lVar5 != 0) &&
       (lVar8 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
    goto LAB_051c26d4;
    if ((int)plVar7[3] == 0) goto LAB_051c26d0;
    plVar7[4] = lVar5;
    if (plVar6 == (long *)0x0) goto LAB_051c26cc;
    uVar9 = (**(code **)(*plVar6 + 0x938))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x940));
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar9;
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
    *(undefined1 *)(unaff_x19 + 0xf1) = 1;
  }
  else {
    if (in_stack_00000018 == (long *)0x0) goto LAB_051c26cc;
    lVar5 = (**(code **)(*in_stack_00000018 + 0x458))
                      (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x460));
    if (lVar5 == 0) goto LAB_051c26cc;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_051c26d0;
    lVar8 = *(long *)(unaff_x23 + 0xe0);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar10 = *unaff_x22;
    iVar1 = *(int *)(lVar8 + 0xe4);
    *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(lVar5 + 0x20);
    if (iVar1 == 0) {
      thunk_FUN_02f6670c(lVar8);
    }
    uVar10 = FUN_050e4454(uVar10,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*unaff_x25);
    }
    uVar4 = FUN_051b574c(uVar9,uVar10,0);
    if ((uVar4 & 1) == 0) {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar10 = *(undefined8 *)
                System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo;
      if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_050e4454(uVar10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*unaff_x25);
      }
      uVar4 = FUN_051b574c(uVar9,uVar10,0);
      if ((uVar4 & 1) != 0) goto LAB_051c2230;
    }
    else {
LAB_051c2230:
      uVar9 = *(undefined8 *)
               System_Func<OpenXRInteractionFeature_ActionBinding,_IEnumerable<string>>_TypeInfo;
      if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      plVar6 = (long *)FUN_050e4454(uVar9,0);
      plVar7 = (long *)FUN_02f0880c(*unaff_x24,1);
      if (plVar7 == (long *)0x0) goto LAB_051c26cc;
      lVar5 = *(long *)(unaff_x19 + 0xc0);
      if ((lVar5 != 0) &&
         (lVar8 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
      goto LAB_051c26d4;
      if ((int)plVar7[3] == 0) goto LAB_051c26d0;
      plVar7[4] = lVar5;
      if (plVar6 == (long *)0x0) goto LAB_051c26cc;
      (**(code **)(*plVar6 + 0x938))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x940));
      FUN_051c68fc();
    }
    uVar9 = *unaff_x26;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    plVar6 = (long *)FUN_050e4454(uVar9,0);
    plVar7 = (long *)FUN_02f0880c(*unaff_x24,1);
    if (plVar7 == (long *)0x0) {
LAB_051c26cc:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar5 = *(long *)(unaff_x19 + 0xc0);
    if ((lVar5 != 0) &&
       (lVar8 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_051c26d4:
      uVar9 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar9,0);
    }
    if ((int)plVar7[3] == 0) {
LAB_051c26d0:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    plVar7[4] = lVar5;
    if (plVar6 == (long *)0x0) goto LAB_051c26cc;
    uVar9 = (**(code **)(*plVar6 + 0x938))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x940));
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar9;
    uVar9 = FUN_051a206c(*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)(unaff_x19 + 0xc0),0);
    *(undefined8 *)(unaff_x19 + 0xf8) = uVar9;
    FUN_051c69b0();
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
  }
  bVar3 = FUN_051c677c();
Oculus_Interaction_PoseUtils__Delta:
  lVar5 = *(long *)(unaff_x23 + 0xe0);
  uVar9 = *(undefined8 *)(unaff_x19 + 0xc0);
  *(byte *)(unaff_x19 + 0xf2) = bVar3 & 1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar5);
  }
  uVar4 = FUN_050edfb8(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
    uVar9 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar10 = *(undefined8 *)(unaff_x19 + 0xc0);
    if (*(int *)(*(long *)System_Func<MouseOutEvent>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar4 = FUN_051ae1f4(uVar9,uVar10,&stack0x00000010,&stack0x00000008,0);
    if ((uVar4 & 1) != 0) {
      FUN_051c68fc();
      *(undefined1 *)(unaff_x19 + 0x28) = 1;
      *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000008;
      *(undefined1 *)(unaff_x19 + 0xf2) = 1;
    }
  }
  return;
}


