/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$Raycast
ENTRY_POINT: 038572dc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void UnityEngine_PhysicsScene__Raycast(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  thunk_FUN_01ad9084(PTR_DAT_03da6268);
  thunk_FUN_01ad9084(PTR_DAT_03da6270);
  thunk_FUN_01ad9084(PTR_DAT_03da65d0);
  thunk_FUN_01ad9084(PTR_DAT_03da65d8);
  thunk_FUN_01ad9084(PTR_DAT_03da65e0);
  thunk_FUN_01ad9084(PTR_DAT_03da5cf8);
  thunk_FUN_01ad9084(PTR_DAT_03da6318);
  thunk_FUN_01ad9084(PTR_DAT_03da6338);
  thunk_FUN_01ad9084(PTR_DAT_03da6310);
  thunk_FUN_01ad9084(PTR_DAT_03da65e8);
  thunk_FUN_01ad9084(PTR_DAT_03da7460);
  thunk_FUN_01ad9084(PTR_DAT_03da6398);
  thunk_FUN_01ad9084(PTR_DAT_03da63a0);
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  thunk_FUN_01ad9084(StringLiteral_2731);
  thunk_FUN_01ad9084(PTR_DAT_03da58f0);
  thunk_FUN_01ad9084(PTR_DAT_03da5820);
  *(undefined1 *)(unaff_x21 + 0x632) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  if (unaff_x19 == 0) {
LAB_038576dc:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  iVar1 = *(int *)(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (0 < iVar1) {
    FUN_03062488(*(undefined8 *)(unaff_x19 + 0x10),0,iVar1,0);
  }
  if (unaff_x22 == 0) goto LAB_038576dc;
  if (*(int *)(unaff_x22 + 0x18) == 0) {
    return;
  }
  if (*(int *)(unaff_x22 + 0x18) == 1) {
    uVar11 = FUN_02b59714();
    lVar14 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar14 != 0) {
      uVar3 = *(uint *)(unaff_x19 + 0x18);
      if (uVar3 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar3 + 1;
        *(undefined8 *)(lVar14 + (long)(int)uVar3 * 8 + 0x20) = uVar11;
        thunk_FUN_01b4f09c();
        return;
      }
      FUN_02b599e4();
      return;
    }
    goto LAB_038576dc;
  }
  FUN_02b59bf0();
  puVar5 = StringLiteral_2731;
  lVar14 = *(long *)StringLiteral_2731;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar14 = *(long *)puVar5;
  }
  if (**(long **)(lVar14 + 0xb8) == 0) goto LAB_038576dc;
  FUN_025c560c(**(long **)(lVar14 + 0xb8),*(undefined8 *)PTR_DAT_03da6268);
  if (unaff_x20 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_03da5820 + 0x130);
    if (bVar2 <= *(byte *)(*unaff_x20 + 0x130)) {
      if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)PTR_DAT_03da5820) {
        unaff_x20 = (long *)0x0;
      }
      goto LAB_03857500;
    }
  }
  unaff_x20 = (long *)0x0;
LAB_03857500:
  FUN_02b5a400(&stack0x00000008);
  puVar9 = PTR_DAT_03da65d8;
  puVar8 = PTR_DAT_03da6270;
  puVar7 = PTR_DAT_03da5cf8;
  puVar6 = PTR_DAT_03da58f0;
  puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  do {
    uVar12 = FUN_02739b98(&stack0x00000020,*(undefined8 *)puVar9);
    plVar10 = in_stack_00000030;
    if ((uVar12 & 1) == 0) {
      FUN_02739b94(&stack0x00000020,*(undefined8 *)PTR_DAT_03da65d0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_02b5b3cc();
      return;
    }
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
    if ((*(byte *)(*in_stack_00000030 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*in_stack_00000030 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar6))
    {
LAB_038575d4:
      lVar14 = *plVar10;
      uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar12 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar7) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar15 + 0xb) * 0x10 + 0x138);
            goto LAB_03857624;
          }
          uVar12 = uVar12 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)puVar7,0xb);
LAB_03857624:
      uVar11 = (*(code *)*puVar13)(plVar10);
    }
    else {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar12 = FUN_0391f968(unaff_x20,0,0);
      if ((uVar12 & 1) == 0) goto LAB_038575d4;
      uVar11 = (**(code **)(*plVar10 + 0x808))(plVar10,unaff_x20,*(undefined8 *)(*plVar10 + 0x810));
    }
    lVar14 = *(long *)puVar5;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar14 = *(long *)puVar5;
    }
    if (**(long **)(lVar14 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_025c5468(uVar11,**(long **)(lVar14 + 0xb8),plVar10,*(undefined8 *)puVar8);
  } while( true );
}


