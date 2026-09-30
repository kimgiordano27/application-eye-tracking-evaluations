/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ArrayMultipleIndexFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 08eba2c8
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_Linq_JsonPath_ArrayMultipleIndexFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
               (undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  FUN_04947ee4(*param_1);
  FUN_04947ee4(PTR_DAT_0ac6e008);
  FUN_04947ee4(PTR_DAT_0ac6ef68);
  FUN_04947ee4(PTR_DAT_0ac6ef70);
  FUN_04947ee4(PTR_DAT_0ac6b0a8);
  FUN_04947ee4(PTR_DAT_0ac6b0b0);
  FUN_04947ee4(PTR_DAT_0ac6ef78);
  FUN_04947ee4(PTR_DAT_0ac6b0b8);
  FUN_04947ee4(PTR_DAT_0ac6ef80);
  FUN_04947ee4(PTR_DAT_0ac6f008);
  FUN_04947ee4(PTR_DAT_0ac6f010);
  *(undefined1 *)(unaff_x20 + 0xba) = 1;
  puVar4 = PTR_DAT_0ac6c828;
  lVar10 = *(long *)(unaff_x19 + 8);
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000030 = *(undefined8 *)(unaff_x19 + 0x1c);
    unaff_x19[0x1c] = 0;
    unaff_x19[0x1d] = 0;
    *unaff_x19 = -1;
LAB_08eba3a4:
    FUN_07684508(&stack0x00000030,*(undefined8 *)PTR_DAT_0ac6b0a8);
LAB_08eba65c:
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
  }
  else {
    if (*unaff_x19 == 1) {
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x1e);
      unaff_x19[0x1e] = 0;
      unaff_x19[0x1f] = 0;
      *unaff_x19 = -1;
      goto LAB_08eba73c;
    }
    lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac6f010);
    FUN_08e8d6a0(lVar5,0);
    plVar12 = (long *)(unaff_x19 + 0x1a);
    *plVar12 = lVar5;
    thunk_FUN_049ee3d8(plVar12,lVar5);
    if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined8 *)(*plVar12 + 0x10) = *(undefined8 *)(unaff_x19 + 8);
    thunk_FUN_049ee3d8();
    if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined8 *)(*plVar12 + 0x18) = *(undefined8 *)(unaff_x19 + 10);
    thunk_FUN_049ee3d8();
    if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined8 *)(*plVar12 + 0x20) = *(undefined8 *)(unaff_x19 + 0xc);
    thunk_FUN_049ee3d8();
    if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined8 *)(*plVar12 + 0x28) = *(undefined8 *)(unaff_x19 + 0xe);
    thunk_FUN_049ee3d8();
    lVar5 = *plVar12;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar7 = *(undefined8 *)(unaff_x19 + 0x10);
    iVar1 = unaff_x19[0x14];
    *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(unaff_x19 + 0x12);
    *(undefined8 *)(lVar5 + 0x30) = uVar7;
    *(int *)(lVar5 + 0x40) = iVar1;
    *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(unaff_x19 + 0x16);
    thunk_FUN_049ee3d8((undefined8 *)(lVar5 + 0x48),0);
    puVar3 = PTR_DAT_0ac6b170;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(char *)(lVar10 + 0x10) != '\0') {
      if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      plVar14 = *(long **)(*plVar12 + 0x18);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar5 = *plVar14;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac6b170) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 7) * 0x10 + 0x138);
            goto LAB_08eba4d8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_04980e68(plVar14,*(long *)PTR_DAT_0ac6b170,7);
LAB_08eba4d8:
      uVar7 = (*(code *)*puVar6)(plVar14,puVar6[1]);
      uVar8 = FUN_08bd8f18(uVar7,0);
      if ((uVar8 & 1) == 0) {
        if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        plVar14 = *(long **)(*plVar12 + 0x18);
        if (*(int *)(*(long *)PTR_DAT_0ac09b88 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        in_stack_00000038 = FUN_08d59ac8(0);
        puVar2 = PTR_DAT_0ac6aec8;
        lVar5 = *(long *)PTR_DAT_0ac6aec8;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar5 = *(long *)puVar2;
        }
        uVar7 = FUN_08d57e08(&stack0x00000038,**(undefined8 **)(lVar5 + 0xb8),0);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar5 = *plVar14;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
              goto LAB_08eba5ac;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_04980e68(plVar14,*(long *)puVar3,0xb);
LAB_08eba5ac:
        uVar8 = (*(code *)*puVar6)(plVar14,uVar7,puVar6[1]);
        if ((uVar8 & 1) != 0) {
          lVar5 = *plVar12;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          lVar5 = FUN_08e893b8(lVar10,*(undefined8 *)(lVar5 + 0x18),0,
                               *(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)(lVar5 + 0x48),0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          in_stack_00000030 = FUN_07764808(lVar5,*(undefined8 *)PTR_DAT_0ac6b0b8);
          uVar8 = FUN_076844c8(&stack0x00000030,*(undefined8 *)PTR_DAT_0ac6b0b0);
          if ((uVar8 & 1) == 0) {
            *unaff_x19 = 0;
            *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000030;
            thunk_FUN_049ee3d8(unaff_x19 + 0x1c,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            FUN_05589228(unaff_x19 + 2,&stack0x00000030);
            return;
          }
          goto LAB_08eba3a4;
        }
      }
      goto LAB_08eba65c;
    }
  }
  lVar13 = *(long *)(lVar10 + 0x58);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x1a);
  uVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac6ef60);
  FUN_063d4f5c(uVar7,uVar15,*(undefined8 *)PTR_DAT_0ac6f008,0);
  lVar5 = *(long *)(unaff_x19 + 0x1a);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar16 = *(long *)(unaff_x19 + 0x18);
  if (lVar16 == 0) {
    lVar16 = *(long *)(lVar10 + 0x18);
  }
  uVar11 = *(undefined8 *)(lVar5 + 0x18);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  FUN_06fba06c(&stack0x00000008,*(undefined8 *)(lVar5 + 0x48),*(undefined8 *)PTR_DAT_0ac6e000);
  uVar15 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac6e008);
  FUN_08eabadc(uVar15,uVar11,lVar16,in_stack_00000008,in_stack_00000010);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar10 = FUN_05dda5ac(lVar13,uVar7,uVar15,*(undefined8 *)PTR_DAT_0ac6ef68);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  in_stack_00000028 = FUN_07764808(lVar10,*(undefined8 *)PTR_DAT_0ac6ef80);
  uVar8 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac6ef78);
  if ((uVar8 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x1e) = in_stack_00000028;
    thunk_FUN_049ee3d8(unaff_x19 + 0x1e,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_05589228(unaff_x19 + 2,&stack0x00000028);
    return;
  }
LAB_08eba73c:
  uVar7 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac6ef70);
  puVar3 = PTR_DAT_0ac6dd60;
  piVar9 = unaff_x19 + 0x1a;
  piVar9[0] = 0;
  piVar9[1] = 0;
  *unaff_x19 = -2;
  thunk_FUN_049ee3d8(piVar9,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_07b6c5d8(unaff_x19 + 2,uVar7,*(undefined8 *)puVar3);
  return;
}


