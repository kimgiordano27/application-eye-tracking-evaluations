/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$GetPosition
ENTRY_POINT: 04ebccec
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonReader__GetPosition(void)

{
  undefined4 *puVar1;
  long *plVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong uVar13;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined1 auVar14 [16];
  long *in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined4 *in_stack_00000058;
  
  auVar14._8_8_ = unaff_x21;
  auVar14._0_8_ = unaff_x20;
  do {
    thunk_FUN_02cd038c();
    do {
      in_stack_00000020 = auVar14._0_8_;
      in_stack_00000028 = auVar14._8_8_ & 0xffff;
      if (DAT_06a6dac6 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ccaf8);
        DAT_06a6dac6 = '\x01';
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (DAT_06a675a7 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ccb08);
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89a0);
        DAT_06a675a7 = '\x01';
      }
      plVar2 = in_stack_00000020;
      if (in_stack_00000020 != (long *)0x0) {
        lVar10 = *in_stack_00000020;
        bVar3 = *(byte *)(*unaff_x25 + 0x130);
        if ((bVar3 <= *(byte *)(lVar10 + 0x130)) &&
           (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar3 * 8 + -8) == *unaff_x25)) {
          auVar14 = FUN_04fa4eac(in_stack_00000020,0);
          uVar8 = auVar14._8_8_;
          if ((auVar14._0_8_ & 1) == 0) goto LAB_04ebcf20;
          goto LAB_04ebce0c;
        }
        uVar13 = in_stack_00000028 & 0xffff;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x26) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_04ebcdf8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_02ce0a7c(in_stack_00000020,*unaff_x26,0);
LAB_04ebcdf8:
        iVar5 = (*(code *)*puVar6)(plVar2,uVar13,puVar6[1]);
        uVar8 = extraout_x1;
        if (iVar5 != 0) goto LAB_04ebce0c;
LAB_04ebcf20:
        puVar1 = in_stack_00000058;
        in_stack_00000048._4_4_ = 1;
        *in_stack_00000058 = 1;
        *(ulong *)(in_stack_00000058 + 0x18) = in_stack_00000028;
        *(long **)(in_stack_00000058 + 0x16) = in_stack_00000020;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*unaff_x23,uVar8,in_stack_00000058);
        }
        FUN_03363d68(puVar1 + 2,&stack0x00000020,in_stack_00000058,*(undefined8 *)PTR_DAT_065f7b80);
LAB_04ebcfb8:
        iVar5 = 7;
LAB_04ebcfbc:
        FUN_02bd015c(&stack0x00000008);
        if ((iVar5 == 0) || (iVar5 == 10)) {
          *in_stack_00000058 = 0xfffffffe;
          *(undefined8 *)(in_stack_00000058 + 0x10) = 0;
          puVar1 = in_stack_00000058 + 2;
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_04e5a1e4(puVar1,0);
        }
        return;
      }
LAB_04ebce0c:
      if (DAT_06a6dac7 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ccaf8);
        DAT_06a6dac7 = '\x01';
      }
      lVar10 = *unaff_x24;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        lVar10 = thunk_FUN_02cd038c();
      }
      if (DAT_06a675a9 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ccb08);
        lVar10 = AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89a0);
        DAT_06a675a9 = '\x01';
      }
      plVar2 = in_stack_00000020;
      if (in_stack_00000020 != (long *)0x0) {
        lVar10 = *in_stack_00000020;
        bVar3 = *(byte *)(*unaff_x25 + 0x130);
        if ((*(byte *)(lVar10 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x25)) {
          uVar13 = in_stack_00000028 & 0xffff;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *unaff_x26) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_04ebceec;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_02ce0a7c(in_stack_00000020,*unaff_x26,2);
LAB_04ebceec:
          lVar10 = (*(code *)*puVar6)(plVar2,uVar13,puVar6[1]);
        }
        else {
          lVar10 = FUN_04e5b610(in_stack_00000020,0);
        }
      }
      lVar7 = *(long *)(in_stack_00000058 + 0x10);
      if (lVar7 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(long *)(lVar7 + 0x18) << 0x20;
      }
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(lVar10,lVar7,lVar9);
      }
      auVar14 = (**(code **)(*unaff_x19 + 0x2f8))();
      lVar10 = *(long *)PTR_DAT_065e1bb8;
      uVar4 = *(ushort *)(*(long *)(lVar10 + 0x20) + 0x135);
      if ((uVar4 & 1) == 0) {
        FUN_02ce0978();
        uVar4 = *(ushort *)(*(long *)(lVar10 + 0x20) + 0x135);
      }
      if ((uVar4 & 1) == 0) {
        FUN_02ce0978();
      }
      if ((*(byte *)(*(long *)(*(long *)PTR_DAT_065e1b78 + 0x20) + 0x135) & 1) == 0) {
        FUN_02ce0978();
      }
      in_stack_00000038 = auVar14._8_8_ & 0xffffffffffff;
      lVar10 = *(long *)(*(long *)PTR_DAT_065e1b88 + 0x20);
      in_stack_00000030 = auVar14._0_8_;
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02ce0978();
      }
      auVar14 = FUN_04187994(&stack0x00000030,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x10));
      puVar1 = in_stack_00000058;
      if ((auVar14._0_8_ & 1) == 0) {
        in_stack_00000048._4_4_ = 0;
        *in_stack_00000058 = 0;
        *(ulong *)(in_stack_00000058 + 0x14) = in_stack_00000038;
        *(undefined8 *)(in_stack_00000058 + 0x12) = in_stack_00000030;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*unaff_x23,auVar14._8_8_,in_stack_00000058);
        }
        FUN_033603c0(puVar1 + 2,&stack0x00000030,in_stack_00000058,*(undefined8 *)PTR_DAT_065f7b88);
        goto LAB_04ebcfb8;
      }
      lVar10 = *(long *)(*(long *)PTR_DAT_065e1b80 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02ce0978();
      }
      auVar14 = FUN_04187ab0(&stack0x00000030,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20));
      lVar10 = auVar14._0_8_;
      if (auVar14._0_4_ == 0) {
        iVar5 = 10;
        goto LAB_04ebcfbc;
      }
      plVar2 = *(long **)(in_stack_00000058 + 0xe);
      lVar7 = *(long *)(in_stack_00000058 + 0x10);
      if (lVar7 == 0) {
        auVar14 = FUN_04f51680(0);
        lVar7 = 0;
        lVar10 = 0;
      }
      else {
        if (*(uint *)(lVar7 + 0x18) < auVar14._0_4_) {
          auVar14 = FUN_04f51680(0);
        }
        lVar10 = lVar10 << 0x20;
      }
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(auVar14._0_8_,auVar14._8_8_,lVar10);
      }
      auVar14 = (**(code **)(*plVar2 + 0x338))
                          (plVar2,lVar7,lVar10,*(undefined8 *)(in_stack_00000058 + 0xc),
                           *(undefined8 *)(*plVar2 + 0x340));
    } while (*(int *)(*unaff_x24 + 0xe0) != 0);
  } while( true );
}


