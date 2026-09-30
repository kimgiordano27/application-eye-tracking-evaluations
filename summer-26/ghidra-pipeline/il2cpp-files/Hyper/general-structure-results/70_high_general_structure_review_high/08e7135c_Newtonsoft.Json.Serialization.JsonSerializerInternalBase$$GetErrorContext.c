/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$GetErrorContext
ENTRY_POINT: 08e7135c
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__GetErrorContext
               (undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 *unaff_x19;
  undefined8 uVar12;
  long unaff_x21;
  long lVar13;
  undefined8 uVar14;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long in_stack_00000010;
  int *in_stack_00000018;
  undefined8 *in_stack_00000020;
  int in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack000000000000004c;
  
  if (param_2 == 1) {
    plVar7 = (long *)__cxa_begin_catch();
    lVar13 = *plVar7;
    in_stack_00000010 = lVar13;
    __cxa_end_catch();
    if ((*in_stack_00000018 < 0) && (plVar7 = (long *)*in_stack_00000020, plVar7 != (long *)0x0)) {
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac09b90) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto Newtonsoft_Json_Serialization_JsonProperty__set_HasMemberAttribute;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac09b90,0);
Newtonsoft_Json_Serialization_JsonProperty__set_HasMemberAttribute:
      (*(code *)*puVar4)(plVar7,puVar4[1]);
    }
    if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04948184(lVar13);
    }
    plVar7 = (long *)PTR_DAT_0ac6c808;
    if (*(char *)(unaff_x19 + 0xc) != '\0') {
      plVar5 = (long *)FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac09b30,4);
      plVar7 = (long *)PTR_DAT_0ac6c808;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if ((unaff_x21 != 0) && (lVar13 = thunk_FUN_04983e64(), lVar13 == 0)) {
        uVar6 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar6,0);
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar5[4] = unaff_x21;
      thunk_FUN_049ee3d8();
      puVar3 = PTR_DAT_0ac6d6f0;
      if ((*(long *)PTR_DAT_0ac6d6f0 != 0) &&
         (lVar13 = thunk_FUN_04983e64(*(long *)PTR_DAT_0ac6d6f0,*(undefined8 *)(*plVar5 + 0x40)),
         lVar13 == 0)) {
        uVar6 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar6,0);
      }
      if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar5[5] = *(long *)puVar3;
      thunk_FUN_049ee3d8();
      in_stack_00000010 = *(long *)(unaff_x19 + 0xc);
      lVar13 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac14a68,&stack0x00000010);
      if ((lVar13 != 0) &&
         (lVar9 = thunk_FUN_04983e64(lVar13,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
        uVar6 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar6,0);
      }
      if (*(uint *)(plVar5 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar5[6] = lVar13;
      thunk_FUN_049ee3d8(plVar5 + 6,lVar13);
      if ((*unaff_x26 != 0) &&
         (lVar13 = thunk_FUN_04983e64(*unaff_x26,*(undefined8 *)(*plVar5 + 0x40)), lVar13 == 0)) {
        uVar6 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar6,0);
      }
      if ((*(uint *)(plVar5 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar5[7] = *unaff_x26;
      thunk_FUN_049ee3d8();
      unaff_x21 = FUN_08bd9b60(plVar5,0);
    }
    lVar13 = *(long *)(unaff_x19 + 0xe);
    if (lVar13 != 0) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar6 = FUN_09a767c4(lVar13,0);
      unaff_x21 = FUN_08bda228(unaff_x21,*(undefined8 *)PTR_DAT_0ac6d6f8,uVar6,*unaff_x26,0);
    }
    lVar13 = *(long *)(unaff_x19 + 0x10);
    if (lVar13 != 0) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar6 = FUN_09a767c4(lVar13,0);
      unaff_x21 = FUN_08bda228(unaff_x21,*(undefined8 *)PTR_DAT_0ac6d828,uVar6,*unaff_x26,0);
    }
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(long *)(unaff_x24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar13 = FUN_09a6c868(*(long *)(unaff_x24 + 0x20),0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_08bde56c(lVar13,0x2f,0);
    uVar6 = FUN_08bcc3c0();
    uVar14 = *(undefined8 *)(unaff_x24 + 0x20);
    lVar13 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac12198);
    FUN_09abd444(lVar13,uVar14,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_09abdc2c(lVar13,uVar6,0);
    FUN_09abdcec(lVar13,unaff_x21,0);
    uVar6 = FUN_09abdda4(lVar13,0);
    uVar12 = *(undefined8 *)PTR_DAT_0ac10e80;
    lVar13 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
    FUN_0870ca1c(lVar13,*(undefined8 *)PTR_DAT_0ac0a400);
    uVar14 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(unaff_x19 + 0x14),0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
              (lVar13,*(undefined8 *)PTR_DAT_0ac121f0,uVar14,*(undefined8 *)PTR_DAT_0ac10e30);
    plVar5 = *(long **)(unaff_x24 + 0x10);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar9 = *plVar5;
    uVar14 = *(undefined8 *)(unaff_x19 + 0x16);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar2 = *(undefined4 *)(unaff_x24 + 0x18);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac6ca28) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_08e710bc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68(plVar5,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e710bc:
    lVar13 = (*(code *)*puVar4)(plVar5,uVar12,uVar6,lVar13,0,uVar2,uVar14,uVar1);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000038 = FUN_07764808(lVar13,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar10 = FUN_076844c8(&stack0x00000038,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar10 & 1) == 0) {
      uStack000000000000004c = 0;
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x1a) = in_stack_00000038;
      thunk_FUN_049ee3d8(unaff_x19 + 0x1a,0);
      if (*(int *)(*plVar7 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0548d1b0(unaff_x19 + 2,&stack0x00000038);
    }
    else {
      uVar6 = FUN_07684508(&stack0x00000038,*(undefined8 *)PTR_DAT_0ac0e258);
      uVar6 = FUN_05c7e4a8(uVar6,*(undefined8 *)PTR_DAT_0ac6d810);
      *unaff_x19 = 0xfffffffe;
      puVar3 = PTR_DAT_0ac6d808;
      if (*(int *)(*plVar7 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_07b6c5d8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar3);
    }
  }
  else {
    FUN_0433b014(&stack0x00000010);
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_04a6935c(param_1);
    }
    puVar4 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac098c8);
    uVar10 = thunk_FUN_049a9d1c(uVar6,*(undefined8 *)*puVar4);
    if ((uVar10 & 1) == 0) {
      puVar8 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar8 = *puVar4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&PTR_PTR_0a568bf8,0);
    }
    uVar6 = *puVar4;
    *(undefined8 *)(&stack0x00000028 + (long)in_stack_00000030 * 8) = uVar6;
    in_stack_00000030 = in_stack_00000030 + 1;
    __cxa_end_catch();
    *unaff_x19 = 0xfffffffe;
    lVar13 = thunk_FUN_049ae08c(PTR_DAT_0ac6c808);
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = thunk_FUN_049ae08c(PTR_DAT_0ac6d840);
    FUN_07b6c824(unaff_x19 + 2,uVar6,uVar14);
  }
  return;
}


