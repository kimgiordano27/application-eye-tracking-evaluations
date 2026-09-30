/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnDeserializedCallbacks
ENTRY_POINT: 08e66730
PROGRAM: Hyper-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x08e66b38) */
/* WARNING: Removing unreachable block (ram,0x08e66908) */
/* WARNING: Removing unreachable block (ram,0x08e66d94) */
/* WARNING: Removing unreachable block (ram,0x08e66d90) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Serialization_JsonContract__get_OnDeserializedCallbacks(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  undefined8 unaff_x21;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar4 = (undefined8 *)FUN_04980e68();
  in_stack_00000040 = (long *)(*(code *)*puVar4)();
  puVar3 = PTR_DAT_0ac6ca40;
  do {
    plVar10 = in_stack_00000040;
    if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = *in_stack_00000040;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08e667cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68(in_stack_00000040,*unaff_x26,0);
LAB_08e667cc:
    uVar8 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    plVar10 = in_stack_00000040;
    if ((uVar8 & 1) == 0) {
      if ((-1 < in_stack_00000048._4_4_) || (in_stack_00000040 == (long *)0x0)) goto LAB_08e668f8;
      lVar6 = *in_stack_00000040;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_08e668d0;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = *in_stack_00000040;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08e66830;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68(in_stack_00000040,*unaff_x27,0);
LAB_08e66830:
    uVar5 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar5 = FUN_09a767c4(uVar5,0);
    unaff_x21 = FUN_08bda228(unaff_x21,*(undefined8 *)puVar3,uVar5,*unaff_x29,0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_08e668ec;
    }
  }
LAB_08e668d0:
  puVar4 = (undefined8 *)FUN_04980e68(in_stack_00000040,*(long *)PTR_DAT_0ac09b90,0);
LAB_08e668ec:
  (*(code *)*puVar4)(plVar10,puVar4[1]);
LAB_08e668f8:
  plVar10 = *(long **)(unaff_x19 + 0xc);
  if ((plVar10 == (long *)0x0) &&
     (plVar10 = (long *)FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac097b0,0), plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar6 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x24) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_08e6697c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_04980e68(plVar10,*unaff_x24,0);
LAB_08e6697c:
  in_stack_00000040 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
  puVar3 = PTR_DAT_0ac6d528;
  do {
    plVar10 = in_stack_00000040;
    if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = *in_stack_00000040;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08e669fc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68(in_stack_00000040,*unaff_x26,0);
LAB_08e669fc:
    uVar8 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    plVar10 = in_stack_00000040;
    if ((uVar8 & 1) == 0) {
      if ((-1 < in_stack_00000048._4_4_) || (in_stack_00000040 == (long *)0x0)) goto LAB_08e66b28;
      lVar6 = *in_stack_00000040;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_08e66b00;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = *in_stack_00000040;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08e66a60;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68(in_stack_00000040,*unaff_x27,0);
LAB_08e66a60:
    uVar5 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar5 = FUN_09a767c4(uVar5,0);
    unaff_x21 = FUN_08bda228(unaff_x21,*(undefined8 *)puVar3,uVar5,*unaff_x29,0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_08e66b1c;
    }
  }
LAB_08e66b00:
  puVar4 = (undefined8 *)FUN_04980e68(in_stack_00000040,*(long *)PTR_DAT_0ac09b90,0);
LAB_08e66b1c:
  (*(code *)*puVar4)(plVar10,puVar4[1]);
LAB_08e66b28:
  if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (*(long *)(unaff_x25 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar6 = FUN_09a6c868(*(long *)(unaff_x25 + 0x20),0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar5 = FUN_08bde56c(lVar6,0x2f,0);
  uVar5 = FUN_08bcc3c0(uVar5,in_stack_00000008,0);
  uVar12 = *(undefined8 *)(unaff_x25 + 0x20);
  lVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac12198);
  FUN_09abd444(lVar6,uVar12,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_09abdc2c(lVar6,uVar5,0);
  FUN_09abdcec(lVar6,unaff_x21,0);
  uVar5 = FUN_09abdda4(lVar6,0);
  uVar11 = *(undefined8 *)PTR_DAT_0ac10e80;
  lVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
  FUN_0870ca1c(lVar6,*(undefined8 *)PTR_DAT_0ac0a400);
  uVar12 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(unaff_x19 + 0x10),0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
            (lVar6,*(undefined8 *)PTR_DAT_0ac121f0,uVar12,*(undefined8 *)PTR_DAT_0ac10e30);
  plVar10 = *(long **)(unaff_x25 + 0x10);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar7 = *plVar10;
  uVar2 = *(undefined4 *)(unaff_x25 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x12);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x14);
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac6ca28) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto LAB_08e66ca0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e66ca0:
  lVar6 = (*(code *)*puVar4)(plVar10,uVar11,uVar5,lVar6,0,uVar2,uVar12,uVar1);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  in_stack_00000038 = FUN_07764808(lVar6,*(undefined8 *)PTR_DAT_0ac0e268);
  uVar8 = FUN_076844c8(&stack0x00000038,*(undefined8 *)PTR_DAT_0ac0e260);
  if ((uVar8 & 1) == 0) {
    in_stack_00000048._4_4_ = 0;
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000038;
    thunk_FUN_049ee3d8(unaff_x19 + 0x16,0);
    if (*(int *)(*(long *)PTR_DAT_0ac6c9e0 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_0548c1b8(unaff_x19 + 2,&stack0x00000038);
  }
  else {
    uVar5 = FUN_07684508(&stack0x00000038,*(undefined8 *)PTR_DAT_0ac0e258);
    uVar5 = FUN_05c7e4a8(uVar5,*(undefined8 *)PTR_DAT_0ac6d518);
    puVar3 = PTR_DAT_0ac6c9e0;
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_07b6c5d8(unaff_x19 + 2,uVar5,*(undefined8 *)PTR_DAT_0ac6d510);
  }
  return;
}


