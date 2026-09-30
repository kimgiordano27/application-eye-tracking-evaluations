/*
FUNCTION_NAME: Meta.XR.MetaXRSpaceWarp$$MetaSetAppSpacePosition
ENTRY_POINT: 0906cab4
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MetaXRSpaceWarp__MetaSetAppSpacePosition(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  long unaff_x19;
  long unaff_x20;
  undefined1 uVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 uStack0000000000000014;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_04947ee4(PTR_DAT_0ac78210);
  FUN_04947ee4(PTR_DAT_0ac78218);
  FUN_04947ee4(PTR_DAT_0ac783e8);
  FUN_04947ee4(PTR_DAT_0ac783f0);
  FUN_04947ee4(PTR_DAT_0ac773a0);
  FUN_04947ee4(PTR_DAT_0ac16088);
  FUN_04947ee4(PTR_DAT_0ac16090);
  FUN_04947ee4(PTR_DAT_0ac097b0);
  FUN_04947ee4(PTR_DAT_0ac1e590);
  FUN_04947ee4(PTR_DAT_0ac783f8);
  FUN_04947ee4(PTR_DAT_0ac1db28);
  FUN_04947ee4(PTR_DAT_0ac12e78);
  FUN_04947ee4(PTR_DAT_0ac0b0f0);
  FUN_04947ee4(PTR_DAT_0ac26410);
  *(undefined1 *)(unaff_x20 + 0xc4) = 1;
  puVar4 = PTR_DAT_0ac773a0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  uStack0000000000000014 = 0;
  if (*(char *)(unaff_x19 + 0x70) == '\0') {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x68) == 0) ||
     (plVar19 = *(long **)(unaff_x19 + 0x50), plVar19 == (long *)0x0)) goto LAB_0906cfa8;
  lVar9 = *plVar19;
  uVar1 = *(undefined4 *)(*(long *)(unaff_x19 + 0x68) + 0x14);
  uVar2 = *(undefined4 *)(unaff_x19 + 100);
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac773a0) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0906cbe4;
      }
      uVar12 = uVar12 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_04980e68(plVar19,*(long *)PTR_DAT_0ac773a0,0);
LAB_0906cbe4:
  uVar12 = (*(code *)*puVar6)(plVar19,uVar2,uVar1,&stack0x00000028,puVar6[1]);
  if ((uVar12 & 1) == 0) {
    in_stack_00000010 = *(undefined4 *)(unaff_x19 + 100);
    plVar19 = *(long **)(unaff_x19 + 0x48);
    uVar20 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac783f0,&stack0x00000010);
    in_stack_00000008._4_4_ = uVar1;
    uVar7 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac783e8,(long)&stack0x00000008 + 4);
    uVar20 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac783f8,uVar20,uVar7,0);
    if (plVar19 == (long *)0x0) goto LAB_0906cfa8;
    (**(code **)(*plVar19 + 0x558))(plVar19,uVar20,*(undefined8 *)(*plVar19 + 0x560));
    if (*(char *)(unaff_x19 + 0x60) == '\0') {
      return;
    }
    lVar9 = *(long *)(unaff_x19 + 0x58);
LAB_0906cf58:
    uVar18 = 0;
    puVar11 = (undefined4 *)(unaff_x19 + 0x28);
    puVar14 = (undefined4 *)(unaff_x19 + 0x2c);
    puVar16 = (undefined4 *)(unaff_x19 + 0x30);
    puVar17 = (undefined4 *)(unaff_x19 + 0x34);
  }
  else {
    plVar19 = *(long **)(unaff_x19 + 0x50);
    if (plVar19 == (long *)0x0) goto LAB_0906cfa8;
    lVar10 = *plVar19;
    uVar2 = *(undefined4 *)(unaff_x19 + 100);
    lVar9 = *(long *)puVar4;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto Meta_XR_Samples_SampleMetadata__OnDestroy;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar19,lVar9,2);
Meta_XR_Samples_SampleMetadata__OnDestroy:
    uVar12 = (*(code *)*puVar6)(plVar19,uVar2,uVar1,puVar6[1]);
    lVar9 = *(long *)(unaff_x19 + 0x68);
    in_stack_00000018 = uVar12;
    if ((lVar9 == 0) || (plVar19 = *(long **)(unaff_x19 + 0x50), plVar19 == (long *)0x0))
    goto LAB_0906cfa8;
    lVar10 = *plVar19;
    uVar2 = *(undefined4 *)(unaff_x19 + 100);
    uVar3 = *(undefined4 *)(lVar9 + 0x10);
    uVar20 = *(undefined8 *)(lVar9 + 0x18);
    lVar9 = *(long *)puVar4;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_0906cd70;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar19,lVar9,1);
LAB_0906cd70:
    bVar5 = (*(code *)*puVar6)(plVar19,uVar2,uVar1,uVar3,uVar20,puVar6[1]);
    if ((uVar12 & 0xff) == 0) {
      uVar20 = *(undefined8 *)PTR_DAT_0ac1db28;
    }
    else {
      uStack0000000000000014 = FUN_06fc9c6c(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac16090);
      uVar20 = FUN_08d8d754(&stack0x00000014,*(undefined8 *)PTR_DAT_0ac1e590,0);
    }
    plVar19 = *(long **)(unaff_x19 + 0x48);
    lVar9 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac097b0,5);
    in_stack_00000010 = *(undefined4 *)(unaff_x19 + 100);
    uVar7 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac783f0,&stack0x00000010);
    in_stack_00000008._4_4_ = uVar1;
    uVar8 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac783e8,(long)&stack0x00000008 + 4);
    uVar7 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac12e78,uVar7,uVar8,0);
    if (lVar9 == 0) goto LAB_0906cfa8;
    if (*(int *)(lVar9 + 0x18) == 0) {
LAB_0906cfac:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    *(undefined8 *)(lVar9 + 0x20) = uVar7;
    thunk_FUN_049ee3d8((undefined8 *)(lVar9 + 0x20),uVar7);
    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_0906cfac;
    *(undefined8 *)(lVar9 + 0x28) = in_stack_00000028;
    thunk_FUN_049ee3d8((undefined8 *)(lVar9 + 0x28));
    if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_0906cfac;
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_0ac26410;
    thunk_FUN_049ee3d8((undefined8 *)(lVar9 + 0x30));
    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) == 0) goto LAB_0906cfac;
    *(undefined8 *)(lVar9 + 0x38) = uVar20;
    thunk_FUN_049ee3d8((undefined8 *)(lVar9 + 0x38),uVar20);
    if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_0906cfac;
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_0ac0b0f0;
    thunk_FUN_049ee3d8();
    uVar20 = FUN_08bda330(lVar9,0);
    if (plVar19 == (long *)0x0) goto LAB_0906cfa8;
    (**(code **)(*plVar19 + 0x558))(plVar19,uVar20,*(undefined8 *)(*plVar19 + 0x560));
    if (*(byte *)(unaff_x19 + 0x60) == (bVar5 & 1)) {
      return;
    }
    lVar9 = *(long *)(unaff_x19 + 0x58);
    if ((bVar5 & 1) == 0) goto LAB_0906cf58;
    puVar11 = (undefined4 *)(unaff_x19 + 0x38);
    puVar14 = (undefined4 *)(unaff_x19 + 0x3c);
    puVar16 = (undefined4 *)(unaff_x19 + 0x40);
    puVar17 = (undefined4 *)(unaff_x19 + 0x44);
    uVar18 = 1;
  }
  if (lVar9 != 0) {
    FUN_0a14a4e8(*puVar11,*puVar14,*puVar16,*puVar17,lVar9,0);
    *(undefined1 *)(unaff_x19 + 0x60) = uVar18;
    return;
  }
LAB_0906cfa8:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


