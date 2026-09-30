/*
FUNCTION_NAME: Amazon.S3.Model.PutObjectRequest$$set_AutoCloseStream
ENTRY_POINT: 04b5fce4
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04b601cc) */

long Amazon_S3_Model_PutObjectRequest__set_AutoCloseStream(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  int unaff_w24;
  int unaff_w25;
  long *unaff_x27;
  undefined8 uVar15;
  long *plVar16;
  long in_stack_00000008;
  undefined4 in_stack_00000010;
  int iStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  long in_stack_00000028;
  undefined8 *in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000040;
  int iStack000000000000004c;
  
  FUN_08dbf2f0();
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b31f328 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0bef0);
    DAT_0b31f328 = '\x01';
  }
  puVar2 = PTR_DAT_0ac12f60;
  puVar1 = PTR_DAT_0ac12f20;
  lVar6 = *unaff_x27;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar6 = *unaff_x27;
  }
  uVar15 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
  lVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
  FUN_0870ca48(lVar6,uVar15,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0ac12f70;
  puVar1 = PTR_DAT_0ac12f58;
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  plVar16 = (long *)(in_stack_00000008 + 0x10);
  *plVar16 = lVar6;
  thunk_FUN_049ee3d8(plVar16,lVar6);
  uVar15 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
  FUN_04bc98dc(uVar15,0);
  in_stack_00000030 = &stack0x00000040;
  in_stack_00000028 = 0;
  in_stack_00000040 = uVar15;
  plVar7 = (long *)thunk_FUN_04983f60(*(undefined8 *)puVar1);
  FUN_04b08ab4(plVar7,uVar15,0);
  in_stack_00000020 = &stack0x00000038;
  in_stack_00000018 = 0;
  in_stack_00000038 = plVar7;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  (**(code **)(*plVar7 + 0x398))(plVar7);
  if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  iVar3 = FUN_04b08c28(in_stack_00000038,0);
  if (unaff_w25 != iVar3) {
    lVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac0b718);
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar15 = FUN_08cf5044(0);
    puVar1 = PTR_DAT_0ac09758;
    uVar9 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),&stack0x00000014);
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000010 = FUN_04b08c28(in_stack_00000038,0);
    uVar10 = thunk_FUN_04983b98(*(undefined8 *)(puVar1 + 0x48),&stack0x00000010);
    uVar11 = thunk_FUN_049ae08c(PTR_DAT_0ac12f90);
    uVar15 = FUN_08bda7ac(uVar15,uVar11,uVar9,uVar10,0);
    thunk_FUN_049ae08c(PTR_DAT_0ac12f80);
    uVar9 = thunk_FUN_04983f60();
    FUN_04b5f7f8(uVar9,uVar15);
    uVar15 = thunk_FUN_049ae08c(PTR_DAT_0ac12f88);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar9,uVar15);
  }
  if (unaff_w24 != unaff_w21) {
    lVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac0b718);
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar15 = FUN_08cf5044(0);
    puVar1 = PTR_DAT_0ac09758;
    uVar9 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),&stack0x00000014);
    uVar10 = thunk_FUN_04983b98(*(undefined8 *)(puVar1 + 0x48),&stack0x00000010);
    uVar11 = thunk_FUN_049ae08c(PTR_DAT_0ac12f78);
    uVar15 = FUN_08bda7ac(uVar15,uVar11,uVar9,uVar10,0);
    thunk_FUN_049ae08c(PTR_DAT_0ac12f80);
    uVar9 = thunk_FUN_04983f60();
    FUN_04b5f7f8(uVar9,uVar15);
    uVar15 = thunk_FUN_049ae08c(PTR_DAT_0ac12f88);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar9,uVar15);
  }
  if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  (**(code **)(*in_stack_00000038 + 0x398))();
  puVar2 = PTR_DAT_0ac12f10;
  puVar1 = PTR_DAT_0ac12ec8;
  iVar3 = unaff_w22 + 0xc;
  iStack000000000000004c = iVar3;
  if (0 < unaff_w23) {
    while (iVar3 = iStack000000000000004c, iStack000000000000004c + -0xc < unaff_w23) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      lVar6 = FUN_04b5e398();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
                (*plVar16,*(undefined8 *)(lVar6 + 0x10),lVar6,*(undefined8 *)puVar2);
    }
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    (**(code **)(*in_stack_00000038 + 0x398))();
  }
  lVar6 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac09740,(unaff_w21 - unaff_w23) + -0x10);
  plVar7 = (long *)(in_stack_00000008 + 0x18);
  *plVar7 = lVar6;
  thunk_FUN_049ee3d8(plVar7);
  puVar1 = PTR_DAT_0ac12ed8;
  if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_08da99ac();
  if ((*plVar7 == 0) || (in_stack_00000038 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  (**(code **)(*in_stack_00000038 + 0x398))();
  if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  iStack000000000000004c = iVar3 + *(int *)(*plVar7 + 0x18);
  uVar4 = FUN_08cc6928();
  puVar2 = PTR_DAT_0ac09b90;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  iVar3 = FUN_09b49090(uVar4,0);
  if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  iVar5 = FUN_04b08c28(in_stack_00000038,0);
  plVar7 = in_stack_00000038;
  if (iVar3 != iVar5) {
    lVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac0b718);
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar15 = FUN_08cf5044(0);
    puVar1 = PTR_DAT_0ac09758;
    iStack0000000000000014 = iVar3;
    uVar9 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),&stack0x00000014);
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000010 = FUN_04b08c28(in_stack_00000038,0);
    uVar10 = thunk_FUN_04983b98(*(undefined8 *)(puVar1 + 0x48),&stack0x00000010);
    uVar11 = thunk_FUN_049ae08c(PTR_DAT_0ac12f98);
    uVar15 = FUN_08bda7ac(uVar15,uVar11,uVar9,uVar10,0);
    thunk_FUN_049ae08c(PTR_DAT_0ac12f80);
    uVar9 = thunk_FUN_04983f60();
    FUN_04b5f7f8(uVar9,uVar15);
    uVar15 = thunk_FUN_049ae08c(PTR_DAT_0ac12f88);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar9,uVar15);
  }
  if (in_stack_00000038 != (long *)0x0) {
    lVar12 = *in_stack_00000038;
    lVar6 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04b60014;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_04980e68(in_stack_00000038,lVar6,0);
LAB_04b60014:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  plVar7 = (long *)*in_stack_00000030;
  if (plVar7 != (long *)0x0) {
    lVar12 = *plVar7;
    lVar6 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04b6007c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_04980e68(plVar7,lVar6,0);
LAB_04b6007c:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  if (in_stack_00000028 == 0) {
    return in_stack_00000008;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


