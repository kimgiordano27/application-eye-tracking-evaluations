/*
FUNCTION_NAME: Amazon.S3.Model.PutObjectRequest$$get_AutoCloseStream
ENTRY_POINT: 04b5fcdc
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

long Amazon_S3_Model_PutObjectRequest__get_AutoCloseStream(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  int unaff_w24;
  int unaff_w25;
  long *unaff_x27;
  undefined8 uVar16;
  long *plVar17;
  long lStack0000000000000008;
  undefined4 in_stack_00000010;
  int iStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  long in_stack_00000028;
  undefined8 *in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000040;
  int iStack000000000000004c;
  
  lStack0000000000000008 = param_1;
  FUN_08dbf2f0(param_1,0);
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
  uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
  lVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
  FUN_0870ca48(lVar6,uVar16,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0ac12f70;
  puVar1 = PTR_DAT_0ac12f58;
  if (lStack0000000000000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  plVar17 = (long *)(lStack0000000000000008 + 0x10);
  *plVar17 = lVar6;
  thunk_FUN_049ee3d8(plVar17,lVar6);
  uVar16 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
  FUN_04bc98dc(uVar16,0);
  in_stack_00000030 = &stack0x00000040;
  in_stack_00000028 = 0;
  in_stack_00000040 = uVar16;
  plVar7 = (long *)thunk_FUN_04983f60(*(undefined8 *)puVar1);
  FUN_04b08ab4(plVar7,uVar16,0);
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
    uVar16 = FUN_08cf5044(0);
    puVar1 = PTR_DAT_0ac09758;
    uVar10 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),&stack0x00000014);
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000010 = FUN_04b08c28(in_stack_00000038,0);
    uVar11 = thunk_FUN_04983b98(*(undefined8 *)(puVar1 + 0x48),&stack0x00000010);
    uVar12 = thunk_FUN_049ae08c(PTR_DAT_0ac12f90);
    uVar16 = FUN_08bda7ac(uVar16,uVar12,uVar10,uVar11,0);
    thunk_FUN_049ae08c(PTR_DAT_0ac12f80);
    uVar10 = thunk_FUN_04983f60();
    FUN_04b5f7f8(uVar10,uVar16);
    uVar16 = thunk_FUN_049ae08c(PTR_DAT_0ac12f88);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar10,uVar16);
  }
  if (unaff_w24 != unaff_w21) {
    lVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac0b718);
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar16 = FUN_08cf5044(0);
    puVar1 = PTR_DAT_0ac09758;
    uVar10 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),&stack0x00000014);
    uVar11 = thunk_FUN_04983b98(*(undefined8 *)(puVar1 + 0x48),&stack0x00000010);
    uVar12 = thunk_FUN_049ae08c(PTR_DAT_0ac12f78);
    uVar16 = FUN_08bda7ac(uVar16,uVar12,uVar10,uVar11,0);
    thunk_FUN_049ae08c(PTR_DAT_0ac12f80);
    uVar10 = thunk_FUN_04983f60();
    FUN_04b5f7f8(uVar10,uVar16);
    uVar16 = thunk_FUN_049ae08c(PTR_DAT_0ac12f88);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar10,uVar16);
  }
  if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  (**(code **)(*in_stack_00000038 + 0x398))();
  puVar2 = PTR_DAT_0ac12f10;
  puVar1 = PTR_DAT_0ac12ec8;
  iVar3 = unaff_w22 + 0xc;
  lVar6 = lStack0000000000000008;
  iStack000000000000004c = iVar3;
  if (0 < unaff_w23) {
    while (iVar3 = iStack000000000000004c, lVar6 = lStack0000000000000008,
          iStack000000000000004c + -0xc < unaff_w23) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      lVar6 = FUN_04b5e398();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
                (*plVar17,*(undefined8 *)(lVar6 + 0x10),lVar6,*(undefined8 *)puVar2);
    }
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    (**(code **)(*in_stack_00000038 + 0x398))();
  }
  lVar8 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac09740,(unaff_w21 - unaff_w23) + -0x10);
  plVar7 = (long *)(lVar6 + 0x18);
  *plVar7 = lVar8;
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
    uVar16 = FUN_08cf5044(0);
    puVar1 = PTR_DAT_0ac09758;
    iStack0000000000000014 = iVar3;
    uVar10 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),&stack0x00000014);
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000010 = FUN_04b08c28(in_stack_00000038,0);
    uVar11 = thunk_FUN_04983b98(*(undefined8 *)(puVar1 + 0x48),&stack0x00000010);
    uVar12 = thunk_FUN_049ae08c(PTR_DAT_0ac12f98);
    uVar16 = FUN_08bda7ac(uVar16,uVar12,uVar10,uVar11,0);
    thunk_FUN_049ae08c(PTR_DAT_0ac12f80);
    uVar10 = thunk_FUN_04983f60();
    FUN_04b5f7f8(uVar10,uVar16);
    uVar16 = thunk_FUN_049ae08c(PTR_DAT_0ac12f88);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar10,uVar16);
  }
  if (in_stack_00000038 != (long *)0x0) {
    lVar13 = *in_stack_00000038;
    lVar8 = *(long *)puVar2;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar8) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_04b60014;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(in_stack_00000038,lVar8,0);
LAB_04b60014:
    (*(code *)*puVar9)(plVar7,puVar9[1]);
  }
  plVar7 = (long *)*in_stack_00000030;
  if (plVar7 != (long *)0x0) {
    lVar13 = *plVar7;
    lVar8 = *(long *)puVar2;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar8) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_04b6007c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar7,lVar8,0);
LAB_04b6007c:
    (*(code *)*puVar9)(plVar7,puVar9[1]);
  }
  if (in_stack_00000028 == 0) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


