/*
FUNCTION_NAME: Meta.XR.MetaXRSubsampledLayout$$OnInstanceCreate
ENTRY_POINT: 0906cbe8
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MetaXRSubsampledLayout__OnInstanceCreate(code *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined1 uVar16;
  long *plVar17;
  undefined8 uVar18;
  long *unaff_x26;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  
  uVar4 = (*param_1)();
  if ((uVar4 & 1) == 0) {
    uStack0000000000000010 = *(undefined4 *)(unaff_x19 + 100);
    plVar17 = *(long **)(unaff_x19 + 0x48);
    uVar18 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac783f0,&stack0x00000010);
    uVar6 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac783e8,&stack0x0000000c);
    uVar18 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac783f8,uVar18,uVar6,0);
    if (plVar17 == (long *)0x0) goto LAB_0906cfa8;
    (**(code **)(*plVar17 + 0x558))(plVar17,uVar18,*(undefined8 *)(*plVar17 + 0x560));
    if (*(char *)(unaff_x19 + 0x60) == '\0') {
      return;
    }
    lVar8 = *(long *)(unaff_x19 + 0x58);
LAB_0906cf58:
    uVar16 = 0;
    puVar10 = (undefined4 *)(unaff_x19 + 0x28);
    puVar12 = (undefined4 *)(unaff_x19 + 0x2c);
    puVar14 = (undefined4 *)(unaff_x19 + 0x30);
    puVar15 = (undefined4 *)(unaff_x19 + 0x34);
  }
  else {
    plVar17 = *(long **)(unaff_x19 + 0x50);
    if (plVar17 == (long *)0x0) goto LAB_0906cfa8;
    lVar8 = *plVar17;
    uVar1 = *(undefined4 *)(unaff_x19 + 100);
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto Meta_XR_Samples_SampleMetadata__OnDestroy;
        }
        uVar4 = uVar4 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(plVar17,*unaff_x26,2);
Meta_XR_Samples_SampleMetadata__OnDestroy:
    uVar4 = (*(code *)*puVar5)(plVar17,uVar1,unaff_w20,puVar5[1]);
    lVar8 = *(long *)(unaff_x19 + 0x68);
    in_stack_00000018 = uVar4;
    if ((lVar8 == 0) || (plVar17 = *(long **)(unaff_x19 + 0x50), plVar17 == (long *)0x0))
    goto LAB_0906cfa8;
    lVar9 = *plVar17;
    uVar1 = *(undefined4 *)(unaff_x19 + 100);
    uVar2 = *(undefined4 *)(lVar8 + 0x10);
    uVar18 = *(undefined8 *)(lVar8 + 0x18);
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_0906cd70;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(plVar17,*unaff_x26,1);
LAB_0906cd70:
    bVar3 = (*(code *)*puVar5)(plVar17,uVar1,unaff_w20,uVar2,uVar18,puVar5[1]);
    if ((uVar4 & 0xff) == 0) {
      uVar18 = *(undefined8 *)PTR_DAT_0ac1db28;
    }
    else {
      uStack0000000000000014 = FUN_06fc9c6c(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac16090);
      uVar18 = FUN_08d8d754((long)&stack0x00000010 + 4,*(undefined8 *)PTR_DAT_0ac1e590,0);
    }
    plVar17 = *(long **)(unaff_x19 + 0x48);
    lVar8 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac097b0,5);
    uStack0000000000000010 = *(undefined4 *)(unaff_x19 + 100);
    uVar6 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac783f0,&stack0x00000010);
    uVar7 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac783e8,&stack0x0000000c);
    uVar6 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac12e78,uVar6,uVar7,0);
    if (lVar8 == 0) goto LAB_0906cfa8;
    if (*(int *)(lVar8 + 0x18) == 0) {
LAB_0906cfac:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    *(undefined8 *)(lVar8 + 0x20) = uVar6;
    thunk_FUN_049ee3d8((undefined8 *)(lVar8 + 0x20),uVar6);
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0906cfac;
    *(undefined8 *)(lVar8 + 0x28) = in_stack_00000028;
    thunk_FUN_049ee3d8((undefined8 *)(lVar8 + 0x28));
    if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_0906cfac;
    *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_0ac26410;
    thunk_FUN_049ee3d8((undefined8 *)(lVar8 + 0x30));
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0) goto LAB_0906cfac;
    *(undefined8 *)(lVar8 + 0x38) = uVar18;
    thunk_FUN_049ee3d8((undefined8 *)(lVar8 + 0x38),uVar18);
    if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_0906cfac;
    *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_0ac0b0f0;
    thunk_FUN_049ee3d8();
    uVar18 = FUN_08bda330(lVar8,0);
    if (plVar17 == (long *)0x0) goto LAB_0906cfa8;
    (**(code **)(*plVar17 + 0x558))(plVar17,uVar18,*(undefined8 *)(*plVar17 + 0x560));
    if (*(byte *)(unaff_x19 + 0x60) == (bVar3 & 1)) {
      return;
    }
    lVar8 = *(long *)(unaff_x19 + 0x58);
    if ((bVar3 & 1) == 0) goto LAB_0906cf58;
    puVar10 = (undefined4 *)(unaff_x19 + 0x38);
    puVar12 = (undefined4 *)(unaff_x19 + 0x3c);
    puVar14 = (undefined4 *)(unaff_x19 + 0x40);
    puVar15 = (undefined4 *)(unaff_x19 + 0x44);
    uVar16 = 1;
  }
  if (lVar8 != 0) {
    FUN_0a14a4e8(*puVar10,*puVar12,*puVar14,*puVar15,lVar8,0);
    *(undefined1 *)(unaff_x19 + 0x60) = uVar16;
    return;
  }
LAB_0906cfa8:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


