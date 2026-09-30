/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 08ebc1c8
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08ebc7f4) */

void Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
               (undefined4 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined4 *puVar9;
  undefined4 in_w9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  int iVar13;
  undefined4 uVar14;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long *in_stack_00000020;
  long in_stack_00000028;
  int *in_stack_00000030;
  long *in_stack_00000038;
  long in_stack_00000040;
  int *in_stack_00000048;
  long *in_stack_00000050;
  int in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a0;
  
  uStack0000000000000078 = *(undefined8 *)(param_1 + 0x20);
  uStack0000000000000070 = *(undefined8 *)(param_1 + 0x1e);
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *param_1 = in_w9;
  uVar1 = FUN_08471dbc(&stack0x00000070,*(undefined8 *)PTR_DAT_0ac10a70);
  *(undefined8 *)(unaff_x24[3] + 0x70) = uVar1;
  thunk_FUN_049ee3d8();
  in_stack_00000018 = (long)&stack0x000000a0 + 4;
  in_stack_00000010 = 0;
  in_stack_00000020 = (long *)&stack0x000000a8;
  if (in_stack_000000a0._4_4_ == 1) {
    puVar9 = (undefined4 *)unaff_x24[3];
    in_stack_000000a0._4_4_ = -1;
    in_stack_00000068 = *(undefined8 *)(puVar9 + 0x22);
    *(undefined8 *)(puVar9 + 0x22) = 0;
    *puVar9 = 0xffffffff;
  }
  else {
    if (*(long *)(unaff_x24[3] + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar2 = *(long *)(*(long *)(unaff_x24[3] + 0x70) + 0x38);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar2 = FUN_097ac46c(lVar2,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000068 = FUN_07764808(lVar2,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar10 = FUN_076844c8(&stack0x00000068,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar10 & 1) == 0) {
      puVar9 = (undefined4 *)unaff_x24[3];
      in_stack_000000a0._4_4_ = 1;
      *puVar9 = 1;
      puVar6 = (undefined8 *)(puVar9 + 0x22);
      *puVar6 = in_stack_00000068;
      thunk_FUN_049ee3d8(puVar6,0);
      lVar4 = unaff_x24[3];
      lVar2 = lVar4;
      if (*(int *)(*(long *)PTR_DAT_0ac10910 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)PTR_DAT_0ac10910,extraout_x1,lVar4);
        lVar2 = unaff_x24[3];
      }
      FUN_056f4ac4(lVar4 + 8,&stack0x00000068,lVar2,*(undefined8 *)PTR_DAT_0ac6f058);
      lVar2 = 0;
      iVar13 = 0x10;
      goto LAB_08ebc53c;
    }
  }
  lVar2 = FUN_07684508(&stack0x00000068,*(undefined8 *)PTR_DAT_0ac0e258);
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  plVar12 = *(long **)(unaff_x23 + 0x10);
  if (plVar12 != (long *)0x0) {
    plVar3 = (long *)FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac09b30,2);
    if (*(long *)(unaff_x24[3] + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000008._4_4_ = *(undefined4 *)(*(long *)(unaff_x24[3] + 0x70) + 0x20);
    lVar4 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac0fdd0,(long)&stack0x00000008 + 4);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_04983e64(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
      uVar1 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar1,0);
    }
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    plVar3[4] = lVar4;
    thunk_FUN_049ee3d8(plVar3 + 4,lVar4);
    if ((lVar2 != 0) &&
       (lVar4 = thunk_FUN_04983e64(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
      uVar1 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar1,0);
    }
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    plVar3[5] = lVar2;
    thunk_FUN_049ee3d8(plVar3 + 5,lVar2);
    lVar4 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar1 = *(undefined8 *)PTR_DAT_0ac6f070;
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac6d268) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_08ebc4fc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac6d268,2);
LAB_08ebc4fc:
    (*(code *)*puVar6)(plVar12,uVar1,plVar3,puVar6[1]);
  }
  lVar4 = *(long *)(unaff_x24[3] + 0x70);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  iVar13 = *(int *)(lVar4 + 0x20);
  if (499 < iVar13) {
    thunk_FUN_049ae08c(PTR_DAT_0ac46c78);
    uVar1 = thunk_FUN_04983f60();
    FUN_08e332ec(uVar1,iVar13,lVar2,0xffffffff,0);
    uVar7 = thunk_FUN_049ae08c(PTR_DAT_0ac6f078);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar1,uVar7);
  }
  uVar10 = System_Text_Json_Utf8JsonWriter__WriteLiteralByOptions(lVar4,0);
  if ((uVar10 & 1) == 0) {
    lVar2 = FUN_05c7e4a8(lVar2,*(undefined8 *)PTR_DAT_0ac6d100);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar10 = FUN_0870ef14(lVar2,*(undefined8 *)PTR_DAT_0ac16450,&stack0x00000098,
                          *(undefined8 *)PTR_DAT_0ac12d58);
    if ((uVar10 & 1) == 0) {
      uVar1 = **(undefined8 **)(*(long *)(PTR_DAT_0ac09758 + 0x90) + 0xb8);
    }
    else {
      plVar12 = (long *)unaff_x24[1];
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      uVar1 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    }
    uVar7 = thunk_FUN_049ae08c(PTR_DAT_0ac16440);
    uVar8 = thunk_FUN_049ae08c(PTR_DAT_0ac12d58);
    uVar10 = FUN_0870ef14(lVar2,uVar7,&stack0x00000090,uVar8);
    if ((uVar10 & 1) == 0) {
      uVar14 = 0xffffffff;
    }
    else {
      puVar9 = (undefined4 *)FUN_0434463c(*unaff_x24,*(undefined8 *)(PTR_DAT_0ac09758 + 0x48));
      uVar14 = *puVar9;
    }
    if (*(long *)(unaff_x24[3] + 0x70) != 0) {
      iVar13 = *(int *)(*(long *)(unaff_x24[3] + 0x70) + 0x20);
      thunk_FUN_049ae08c(PTR_DAT_0ac46c78);
      uVar7 = thunk_FUN_04983f60();
      FUN_08e332ec(uVar7,(long)iVar13,uVar1,uVar14,0);
      uVar1 = thunk_FUN_049ae08c(PTR_DAT_0ac41858);
      uVar8 = thunk_FUN_049ae08c(PTR_DAT_0ac12d58);
      uVar10 = FUN_0870ef14(lVar2,uVar1,&stack0x00000088,uVar8);
      if ((uVar10 & 1) != 0) {
        FUN_08ebcd4c(uVar10,in_stack_00000088,uVar7);
      }
      uVar1 = thunk_FUN_049ae08c(PTR_DAT_0ac6f078);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar7,uVar1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  iVar13 = 0x19;
LAB_08ebc53c:
  if ((in_stack_000000a0._4_4_ < 0) &&
     (plVar12 = *(long **)(*in_stack_00000020 + 0x70), plVar12 != (long *)0x0)) {
    lVar4 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_08ebc5ac;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac09b90,0);
LAB_08ebc5ac:
    (*(code *)*puVar6)(plVar12,puVar6[1]);
  }
  if ((*in_stack_00000030 < 0) &&
     (plVar12 = *(long **)(*in_stack_00000038 + 0x68), plVar12 != (long *)0x0)) {
    lVar4 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_08ebc62c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac09b90,0);
LAB_08ebc62c:
    (*(code *)*puVar6)(plVar12,puVar6[1]);
  }
  if (in_stack_00000028 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  if ((*in_stack_00000048 < 0) &&
     (plVar12 = *(long **)(*in_stack_00000050 + 0x60), plVar12 != (long *)0x0)) {
    lVar4 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_08ebc6b0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac09b90,0);
LAB_08ebc6b0:
    (*(code *)*puVar6)(plVar12,puVar6[1]);
  }
  if (in_stack_00000040 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  if (iVar13 == 0x19) {
    puVar9 = (undefined4 *)unaff_x24[3];
    *puVar9 = 0xfffffffe;
    puVar6 = (undefined8 *)(puVar9 + 0x18);
    *puVar6 = 0;
    thunk_FUN_049ee3d8(puVar6,0);
    lVar4 = unaff_x24[3];
    *(undefined8 *)(lVar4 + 0x68) = 0;
    thunk_FUN_049ee3d8((undefined8 *)(lVar4 + 0x68),0);
    lVar4 = unaff_x24[3];
    *(undefined8 *)(lVar4 + 0x70) = 0;
    thunk_FUN_049ee3d8((undefined8 *)(lVar4 + 0x70),0);
    lVar4 = unaff_x24[3];
    if (*(int *)(*(long *)PTR_DAT_0ac10910 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_07b6c5d8(lVar4 + 8,lVar2,*(undefined8 *)PTR_DAT_0ac10a50);
  }
  else if (iVar13 == 0) {
    puVar9 = (undefined4 *)unaff_x24[3];
    uVar1 = *(undefined8 *)(&stack0x00000058 + (long)(in_stack_00000060 + -1) * 8);
    *puVar9 = 0xfffffffe;
    puVar6 = (undefined8 *)(puVar9 + 0x18);
    *puVar6 = 0;
    thunk_FUN_049ee3d8(puVar6,0);
    lVar2 = unaff_x24[3];
    *(undefined8 *)(lVar2 + 0x68) = 0;
    thunk_FUN_049ee3d8((undefined8 *)(lVar2 + 0x68),0);
    lVar2 = unaff_x24[3];
    *(undefined8 *)(lVar2 + 0x70) = 0;
    thunk_FUN_049ee3d8((undefined8 *)(lVar2 + 0x70),0);
    lVar4 = unaff_x24[3];
    lVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac10910);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar7 = thunk_FUN_049ae08c(PTR_DAT_0ac10a98);
    FUN_07b6c824(lVar4 + 8,uVar1,uVar7);
  }
  return;
}


