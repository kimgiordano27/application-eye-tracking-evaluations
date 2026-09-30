/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$SetPanelPosition
ENTRY_POINT: 051943dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__SetPanelPosition
               (undefined1 param_1 [16],long param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *puVar9;
  long unaff_x23;
  undefined8 *puVar10;
  long *plVar11;
  long unaff_x25;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar13 = param_1._8_8_;
  uVar5 = param_1._0_8_;
  puVar9 = (undefined8 *)(unaff_x21 + 0x10);
  *puVar9 = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x38) = uVar13;
  *(undefined8 *)(param_2 + 0x30) = uVar5;
  *(undefined8 *)(param_2 + 0x48) = uVar13;
  *(undefined8 *)(param_2 + 0x40) = uVar5;
  *(undefined8 *)(param_2 + 0x58) = uVar13;
  *(undefined8 *)(param_2 + 0x50) = uVar5;
  *(undefined8 *)(param_2 + 0x68) = uVar13;
  *(undefined8 *)(param_2 + 0x60) = uVar5;
  *(undefined8 *)(param_2 + 0x88) = uVar13;
  *(undefined8 *)(param_2 + 0x80) = uVar5;
  puVar10 = (undefined8 *)(unaff_x23 + 0x20);
  *(undefined8 *)(unaff_x23 + 0x28) = uVar13;
  *puVar10 = uVar5;
  puVar12 = (undefined8 *)(unaff_x25 + 0x70);
  *(undefined8 *)(unaff_x25 + 0x78) = uVar13;
  *puVar12 = uVar5;
  LeanTween__value(puVar9,0);
  plVar11 = (long *)(unaff_x19 + 6);
  *plVar11 = 0;
  LeanTween__value(plVar11,0);
  unaff_x19[2] = 0;
  *unaff_x19 = 0xffffffff;
  if (unaff_x20 == (long *)0x0) {
    unaff_x19[1] = 0;
    return;
  }
  lVar2 = *(long *)(param_4 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18(lVar2);
  }
  if (*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar2 + 0x130)) {
    lVar3 = *(long *)(param_4 + 0x20);
  }
  else {
    lVar3 = *(long *)(param_4 + 0x20);
    if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2)
    {
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      FUN_0414e254(&stack0x00000008);
      *(undefined8 *)(unaff_x25 + 0x78) = in_stack_00000010;
      *puVar12 = in_stack_00000008;
      *(undefined8 *)(unaff_x25 + 0x88) = in_stack_00000020;
      *(undefined8 *)(unaff_x25 + 0x80) = in_stack_00000018;
      *(undefined8 *)(unaff_x25 + 0x90) = in_stack_00000028;
      LeanTween__value(puVar12,0);
      uVar6 = 2;
      goto LAB_05194784;
    }
  }
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02dcfd18();
  }
  lVar2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    FUN_02dcfd18(lVar2);
  }
  plVar4 = (long *)thunk_FUN_02dd3048();
  if (plVar4 == (long *)0x0) {
    lVar2 = *(long *)(param_4 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x40);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18(lVar2);
    }
    if (*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar2 + 0x130)) {
      lVar3 = *(long *)(param_4 + 0x20);
    }
    else {
      lVar3 = *(long *)(param_4 + 0x20);
      if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2
         ) {
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        FUN_03c76244(&stack0x00000008);
        *(undefined8 *)(unaff_x23 + 0x28) = in_stack_00000010;
        *puVar10 = in_stack_00000008;
        *(undefined8 *)(unaff_x23 + 0x38) = in_stack_00000020;
        *(undefined8 *)(unaff_x23 + 0x30) = in_stack_00000018;
        *(undefined8 *)(unaff_x23 + 0x40) = in_stack_00000028;
        LeanTween__value(puVar10,0);
        uVar6 = 3;
        goto LAB_05194784;
      }
    }
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18(lVar2);
    }
    if (*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar2 + 0x130)) {
      lVar3 = *(long *)(param_4 + 0x20);
    }
    else {
      lVar3 = *(long *)(param_4 + 0x20);
      if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2
         ) {
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        FUN_044f009c(&stack0x00000008);
        *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000010;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000008;
        *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000020;
        *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000018;
        *(undefined8 *)(unaff_x19 + 0x1a) = in_stack_00000028;
        LeanTween__value(unaff_x19 + 0x12,0);
        uVar6 = 4;
        goto LAB_05194784;
      }
    }
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18(lVar2);
    }
    uVar5 = FUN_0297bd6c(0,lVar2);
    *(undefined8 *)(unaff_x19 + 4) = uVar5;
    LeanTween__value(puVar9,uVar5);
    uVar6 = 5;
  }
  else {
    *plVar11 = (long)plVar4;
    LeanTween__value(plVar11,plVar4);
    lVar2 = *(long *)(param_4 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x60);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18(lVar2);
    }
    lVar3 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar2) {
          puVar9 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05194604;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_02dd004c(plVar4,lVar2,0);
LAB_05194604:
    uVar1 = (*(code *)*puVar9)(plVar4,puVar9[1]);
    uVar6 = 1;
    unaff_x19[2] = uVar1;
  }
LAB_05194784:
  unaff_x19[1] = uVar6;
  return;
}


