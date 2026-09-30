/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$CalculatePropertyValues
ENTRY_POINT: 01bc760c
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CalculatePropertyValues(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar11;
  long *plVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  thunk_FUN_0159f088();
                    /* try { // try from 01bc7618 to 01cc761f has its CatchHandler @ 01bc7634 */
  thunk_FUN_0159f088(PTR_DAT_06e2e2b8);
                    /* try { // try from 01bc7620 to 01cc762b has its CatchHandler @ 01bc720c */
  thunk_FUN_0159f088(PTR_DAT_06e615d8);
                    /* try { // try from 01bc762c to 01cc7633 has its CatchHandler @ 01bc7634 */
  thunk_FUN_0159f088(PTR_DAT_06df70d0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01bc7618 with catch @ 01bc7634
                       catch(type#2 @ 00000000) { ... } // from try @ 01bc762c with catch @ 01bc7634
                        */
  thunk_FUN_0159f088(PTR_DAT_06e64b70);
  *(undefined1 *)(unaff_x19 + 0xd0b) = 1;
  puVar5 = PTR_DAT_06e5e448;
  puVar4 = PTR_DAT_06e5c4d0;
  puVar3 = PTR_DAT_06dc4238;
  puVar2 = PTR_DAT_06d9fd78;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  in_stack_00000020 = 0;
  if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x160) != 0)) {
    FUN_043c2e98(&stack0x00000008,*(long *)(unaff_x21 + 0x160),*(undefined8 *)PTR_DAT_06e1bf60);
    uVar10 = 0;
    plVar1 = (long *)(unaff_x20 + 0x40);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar7 = FUN_03e1bcc4(&stack0x00000020,*(undefined8 *)puVar3), plVar12 = in_stack_00000030
          , (uVar7 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = in_stack_00000030;
        if (*in_stack_00000030 != *(long *)puVar5) {
          plVar11 = (long *)0x0;
        }
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar7 = FUN_051d2ac0(plVar11,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar6 = FUN_051d94d4(plVar11);
        uVar10 = uVar10 | uVar6;
      }
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)0x0;
      }
      else if (*plVar12 != *(long *)puVar4) {
        plVar12 = (long *)0x0;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar7 = FUN_051d2ac0(plVar12,0,0);
      if ((uVar7 & 1) != 0) {
        lVar9 = 0x34;
        if (*(char *)(unaff_x20 + 0x3c) != '\0') {
          lVar9 = 0x30;
        }
        if (*(int *)(unaff_x20 + lVar9) < 0x2c) {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          *plVar1 = plVar12[0xb];
          thunk_FUN_01656ef8(plVar1);
        }
        else {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          *plVar1 = plVar12[0xc];
          thunk_FUN_01656ef8(plVar1);
        }
        if ((uVar10 & 1) == 0) {
          uVar8 = thunk_FUN_0164ba04();
          uVar8 = FUN_02527314(*(undefined8 *)PTR_DAT_06e615d8,uVar8,plVar12,0);
          uVar8 = FUN_02519a6c(uVar8,*(undefined8 *)PTR_DAT_06e2e2b8,0);
          if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          FUN_04866d9c(uVar8,0);
        }
      }
    }
    FUN_03e1bcc0(&stack0x00000020,*(undefined8 *)PTR_DAT_06dbfe78);
    puVar3 = PTR_DAT_06e0ec68;
    if (*(int *)(*(long *)PTR_DAT_06e0ec68 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if (DAT_0722bd88 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e0ec68);
      DAT_0722bd88 = '\x01';
    }
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar9 = *(long *)puVar3;
    }
    uVar8 = **(undefined8 **)(lVar9 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar2);
    }
    uVar7 = FUN_051e0350(uVar8,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if (DAT_0722bd88 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e0ec68);
        DAT_0722bd88 = '\x01';
      }
      lVar9 = *(long *)puVar3;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar9 = *(long *)puVar3;
      }
      if ((**(long **)(lVar9 + 0xb8) == 0) ||
         (lVar9 = FUN_051e516c(**(long **)(lVar9 + 0xb8),0), lVar9 == 0)) goto LAB_01bc79f4;
      lVar9 = FUN_01a257e8(lVar9,*(undefined8 *)PTR_DAT_06e2a928);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar2);
      }
      uVar7 = FUN_051d2ac0(lVar9,0,0);
      if ((uVar7 & 1) == 0) {
        if (*(int *)(unaff_x20 + 0x38) == 1) {
          lVar9 = FUN_051e516c(unaff_x21,0);
          if (lVar9 == 0) goto LAB_01bc79f4;
          uVar8 = FUN_051e0500(lVar9,0);
          uVar8 = FUN_02526be4(*(undefined8 *)PTR_DAT_06df70d0,uVar8,*(undefined8 *)PTR_DAT_06e64b70
                               ,0);
          if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
            thunk_FUN_016466fc(*(long *)PTR_DAT_06e52cd8);
          }
          FUN_0486672c(uVar8,0);
        }
      }
      else {
        if (lVar9 == 0) goto LAB_01bc79f4;
        *(undefined8 *)(unaff_x20 + 0x58) = *(undefined8 *)(lVar9 + 0x28);
        thunk_FUN_01656ef8((undefined8 *)(unaff_x20 + 0x58));
      }
    }
    return;
  }
LAB_01bc79f4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


