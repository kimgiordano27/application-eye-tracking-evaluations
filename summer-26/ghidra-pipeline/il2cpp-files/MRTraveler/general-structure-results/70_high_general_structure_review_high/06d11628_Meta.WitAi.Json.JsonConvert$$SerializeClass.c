/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$SerializeClass
ENTRY_POINT: 06d11628
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__SerializeClass(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined *puVar9;
  
  FUN_03c8f898(PTR_DAT_08e8cf50);
  FUN_03c8f898(PTR_DAT_08e8cc38);
  FUN_03c8f898(PTR_DAT_08e889b0);
  FUN_03c8f898(PTR_DAT_08e8cf58);
  FUN_03c8f898(PTR_DAT_08e8cf60);
  FUN_03c8f898(PTR_DAT_08e8cf68);
  FUN_03c8f898(PTR_DAT_08e8cf70);
  *(undefined1 *)(unaff_x22 + 0x6de) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (unaff_x20 != (long *)0x0) {
    lVar10 = *unaff_x20;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e889b0) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06d116e4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348();
LAB_06d116e4:
    iVar5 = (*(code *)*puVar6)();
    puVar9 = PTR_DAT_08e699d0;
    if (iVar5 != *(int *)(unaff_x21 + 0x18)) {
      thunk_FUN_03ce5214(PTR_DAT_08e699d0);
      uVar7 = thunk_FUN_03cf4e64();
      FUN_036f8b10();
      uVar13 = thunk_FUN_03ce5214(PTR_DAT_08e889b0);
      uStack000000000000001c = FUN_03709c04(0,uVar13);
      uVar13 = thunk_FUN_03ce5214(puVar9);
      uVar13 = thunk_FUN_03cf4e64(uVar13,&stack0x0000001c);
      puVar9 = PTR_DAT_08e8cf78;
LAB_06d1199c:
      uVar8 = thunk_FUN_03ce5214(puVar9);
      uVar13 = FUN_06f75240(uVar8,uVar7,uVar13,0);
      thunk_FUN_03ce5214(PTR_DAT_08e76350);
      uVar7 = thunk_FUN_03cf5234();
      FUN_07064ba8(uVar7,uVar13,0);
      uVar13 = thunk_FUN_03ce5214(PTR_DAT_08e8cf88);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar7,uVar13);
    }
    if (unaff_x19 != (long *)0x0) {
      lVar10 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e8cf50) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06d11754;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348();
LAB_06d11754:
      iVar5 = (*(code *)*puVar6)();
      puVar4 = PTR_DAT_08e8cf58;
      puVar3 = PTR_DAT_08e8cf40;
      puVar2 = PTR_DAT_08e8cf38;
      puVar1 = PTR_DAT_08e8cc38;
      puVar9 = PTR_DAT_08e699d0;
      if (iVar5 != *(int *)(unaff_x21 + 0x1c)) {
        thunk_FUN_03ce5214(PTR_DAT_08e699d0);
        uVar7 = thunk_FUN_03cf4e64();
        FUN_036f8b10();
        uVar13 = thunk_FUN_03ce5214(PTR_DAT_08e8cf50);
        uStack000000000000001c = FUN_03709c04(0,uVar13);
        uVar13 = thunk_FUN_03ce5214(puVar9);
        uVar13 = thunk_FUN_03cf4e64(uVar13,&stack0x0000001c);
        puVar9 = PTR_DAT_08e8cf80;
        goto LAB_06d1199c;
      }
      if (*(long *)(unaff_x21 + 0x10) != 0) {
        FUN_05213710(*(long *)(unaff_x21 + 0x10),*(undefined8 *)PTR_DAT_08e8cf60);
        in_stack_00000020 = in_stack_00000000;
        in_stack_00000028 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000010;
        do {
          uVar11 = FUN_049dc4d0(&stack0x00000020,*(undefined8 *)puVar3);
          if ((uVar11 & 1) == 0) {
            FUN_049dc4cc(&stack0x00000020,*(undefined8 *)puVar2);
            return;
          }
          if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar10 = *unaff_x20;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_06d11820;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_03cf1348();
LAB_06d11820:
          uVar13 = (*(code *)*puVar6)();
          lVar10 = *unaff_x19;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_06d11884;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_03cf1348();
LAB_06d11884:
          (*(code *)*puVar6)(uVar13);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


