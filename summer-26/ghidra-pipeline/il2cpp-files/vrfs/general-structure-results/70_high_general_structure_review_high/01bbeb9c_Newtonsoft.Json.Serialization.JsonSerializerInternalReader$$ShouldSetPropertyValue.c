/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldSetPropertyValue
ENTRY_POINT: 01bbeb9c
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldSetPropertyValue
          (long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  long in_x9;
  uint in_w10;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined *puVar5;
  
code_r0x01bbeb9c:
                    /* try { // try from 01bbeba0 to 01cbebab has its CatchHandler @ 01bbea84 */
  if (in_w10 <= (uint)param_1) {
LAB_01bbedd8:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01bbeb98 with catch @ 01bbeba8
                        */
  *(char *)(in_x9 + param_1 + 0x20) = (char)param_2;
  do {
    puVar1 = PTR_DAT_06deee58;
    puVar5 = PTR_DAT_06dee988;
    if (*(int *)(unaff_x19 + 0x28) <= *(int *)(unaff_x19 + 0x38)) {
      lVar7 = *(long *)(unaff_x20 + 0x28);
      if (lVar7 == 0) goto LAB_01bbedd4;
      if (*(uint *)(lVar7 + 0x18) < 0x101) goto LAB_01bbedd8;
      if (*(char *)(lVar7 + 0x120) == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e433f8);
        uVar3 = thunk_FUN_015d056c();
        FUN_011a9bc8();
        puVar5 = PTR_DAT_06e44ba8;
LAB_01bbea14:
        uVar4 = thunk_FUN_0159f088(puVar5);
        thunk_FUN_04437484(uVar3,uVar4,0);
        uVar4 = thunk_FUN_0159f088(PTR_DAT_06e682e8);
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar3,uVar4);
      }
      in_stack_00000030 = 0;
      in_stack_00000038 = 0;
      FUN_020029c0(&stack0x00000030,lVar7,0,*(undefined4 *)(unaff_x20 + 0x40),
                   *(undefined8 *)PTR_DAT_06deee58);
      in_stack_00000028 = in_stack_00000038;
      in_stack_00000020 = in_stack_00000030;
      uVar3 = thunk_FUN_015d01b0(*(undefined8 *)puVar5,&stack0x00000020);
      lVar7 = thunk_FUN_015d056c(*unaff_x23);
      if (lVar7 != 0) {
        FUN_02d76b34(lVar7,0);
        FUN_01bbf374(lVar7,uVar3);
        *(long *)(unaff_x20 + 0x30) = lVar7;
        thunk_FUN_01656ef8((long *)(unaff_x20 + 0x30),lVar7);
        in_stack_00000010 = 0;
        in_stack_00000018 = 0;
        FUN_020029c0(&stack0x00000010,*(undefined8 *)(unaff_x20 + 0x28),
                     *(undefined4 *)(unaff_x20 + 0x40),*(undefined4 *)(unaff_x20 + 0x44),
                     *(undefined8 *)puVar1);
        uVar3 = thunk_FUN_015d01b0(*(undefined8 *)puVar5);
        lVar7 = thunk_FUN_015d056c(*unaff_x23);
        if (lVar7 != 0) {
          FUN_02d76b34(lVar7,0);
          FUN_01bbf374(lVar7,uVar3);
          *(long *)(unaff_x20 + 0x38) = lVar7;
          thunk_FUN_01656ef8((long *)(unaff_x20 + 0x38),lVar7);
          *(undefined1 *)(unaff_x19 + 0x14) = 1;
          *(undefined4 *)(unaff_x19 + 0x10) = 9;
          return 1;
        }
      }
      goto LAB_01bbedd4;
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01bbedd4;
    param_2 = FUN_01bbcd30(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x20 + 0x10));
    if (param_2 < 0) {
      *(undefined1 *)(unaff_x19 + 0x14) = 0;
      uVar6 = 5;
LAB_01bbea08:
      *(undefined4 *)(unaff_x19 + 0x10) = uVar6;
      return 1;
    }
    if (param_2 < 0x10) break;
    *(undefined4 *)(unaff_x19 + 0x3c) = 0;
    if (param_2 == 0x11) {
      *(undefined1 *)(unaff_x19 + 0x40) = 0;
      lVar7 = *(long *)(unaff_x20 + 0x10);
      if (lVar7 == 0) goto LAB_01bbedd4;
      iVar2 = FUN_01bbc6e0(lVar7,3);
      if (iVar2 < 0) {
        *(undefined1 *)(unaff_x19 + 0x14) = 0;
        uVar6 = 7;
        goto LAB_01bbea08;
      }
      iVar2 = iVar2 + 3;
      iVar8 = -3;
      *(int *)(unaff_x19 + 0x3c) = iVar2;
      lVar10 = 3;
    }
    else if (param_2 == 0x10) {
      if (*(int *)(unaff_x19 + 0x38) == 0) {
        thunk_FUN_0159f088(PTR_DAT_06e433f8);
        uVar3 = thunk_FUN_015d056c();
        FUN_011a9bc8();
        puVar5 = PTR_DAT_06e25cf8;
        goto LAB_01bbea14;
      }
      lVar7 = *(long *)(unaff_x20 + 0x28);
      if (lVar7 == 0) goto LAB_01bbedd4;
      uVar9 = *(int *)(unaff_x19 + 0x38) - 1;
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_01bbedd8;
      *(undefined1 *)(unaff_x19 + 0x40) = *(undefined1 *)(lVar7 + (int)uVar9 + 0x20);
      lVar7 = *(long *)(unaff_x20 + 0x10);
      if (lVar7 == 0) goto LAB_01bbedd4;
      iVar2 = FUN_01bbc6e0(lVar7,2);
      if (iVar2 < 0) {
        *(undefined1 *)(unaff_x19 + 0x14) = 0;
        uVar6 = 6;
        goto LAB_01bbea08;
      }
      iVar2 = iVar2 + 3;
      iVar8 = -2;
      *(int *)(unaff_x19 + 0x3c) = iVar2;
      lVar10 = 2;
    }
    else {
      *(undefined1 *)(unaff_x19 + 0x40) = 0;
      lVar7 = *(long *)(unaff_x20 + 0x10);
      if (lVar7 == 0) goto LAB_01bbedd4;
      iVar2 = FUN_01bbc6e0(lVar7,7);
      if (iVar2 < 0) {
        *(undefined1 *)(unaff_x19 + 0x14) = 0;
        uVar6 = 8;
        goto LAB_01bbea08;
      }
      iVar2 = iVar2 + 0xb;
      iVar8 = -7;
      lVar10 = 7;
      *(int *)(unaff_x19 + 0x3c) = iVar2;
    }
    *(uint *)(lVar7 + 0x20) = *(uint *)(lVar7 + 0x20) >> lVar10;
    *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + iVar8;
    uVar9 = *(uint *)(unaff_x19 + 0x38);
    if (*(int *)(unaff_x19 + 0x28) < (int)(iVar2 + uVar9)) {
      thunk_FUN_0159f088(PTR_DAT_06e433f8);
      uVar3 = thunk_FUN_015d056c();
      FUN_011a9bc8();
      puVar5 = PTR_DAT_06e371a8;
      goto LAB_01bbea14;
    }
    *(int *)(unaff_x19 + 0x3c) = iVar2 + -1;
    if (0 < iVar2) {
      while( true ) {
        lVar7 = *(long *)(unaff_x20 + 0x28);
        *(uint *)(unaff_x19 + 0x38) = uVar9 + 1;
        if (lVar7 == 0) goto LAB_01bbedd4;
        if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_01bbedd8;
        *(undefined1 *)(lVar7 + (int)uVar9 + 0x20) = *(undefined1 *)(unaff_x19 + 0x40);
        iVar2 = *(int *)(unaff_x19 + 0x3c);
        *(int *)(unaff_x19 + 0x3c) = iVar2 + -1;
        if (iVar2 < 1) break;
        uVar9 = *(uint *)(unaff_x19 + 0x38);
      }
    }
  } while( true );
  param_1 = (long)*(int *)(unaff_x19 + 0x38);
  in_x9 = *(long *)(unaff_x20 + 0x28);
  *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
  if (in_x9 == 0) {
LAB_01bbedd4:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  in_w10 = *(uint *)(in_x9 + 0x18);
  goto code_r0x01bbeb9c;
}


