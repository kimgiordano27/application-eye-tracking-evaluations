/*
FUNCTION_NAME: ThirdParty.Json.LitJson.JsonData$$get_IsArray
ENTRY_POINT: 04643634
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void ThirdParty_Json_LitJson_JsonData__get_IsArray(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  long *in_x10;
  int *piVar8;
  undefined4 *unaff_x19;
  long *plVar9;
  long unaff_x23;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (in_x9 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *in_x10) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar8 + 0x17) * 0x10 + 0x138);
        goto LAB_0464367c;
      }
      in_x9 = in_x9 + -1;
      piVar8 = piVar8 + 4;
    } while (in_x9 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00();
LAB_0464367c:
  lVar4 = (*(code *)*puVar3)();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar9 = (long *)(unaff_x19 + 0xc);
  *plVar9 = *(long *)(lVar4 + 0x50);
  thunk_FUN_040ec700(plVar9);
  lVar4 = *plVar9;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar9 = *(long **)(unaff_x23 + 0x18);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *plVar9;
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09295880) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_0464370c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_09295880,1);
LAB_0464370c:
  lVar4 = (*(code *)*puVar3)(plVar9,uVar1,uVar2,puVar3[1]);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000018 = FUN_06649f2c(lVar4,*(undefined8 *)PTR_DAT_09296450);
  uVar7 = FUN_065f12f0(&stack0x00000018,*(undefined8 *)PTR_DAT_09296448);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
    thunk_FUN_040ec700(unaff_x19 + 0xe,0);
    FUN_04e97e68(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar4 = FUN_065f1330(&stack0x00000018,*(undefined8 *)PTR_DAT_09296440);
    if (lVar4 != 0) {
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar4 = *(long *)(unaff_x19 + 0xc);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar1 = *(undefined8 *)(lVar4 + 0x10);
      uVar2 = *(undefined8 *)(lVar4 + 0x18);
      plVar9 = *(long **)(unaff_x23 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_09285890 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar5 = FUN_076de68c(0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar4 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09296200) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 6) * 0x10 + 0x138);
            goto LAB_04643834;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_09296200,6);
LAB_04643834:
      lVar4 = (*(code *)*puVar3)(plVar9,uVar1,uVar2,uVar5,puVar3[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      in_stack_00000010 = FUN_076f1ee4(lVar4,0);
      uVar7 = FUN_07591eb4(&stack0x00000010,0);
      if ((uVar7 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000010;
        thunk_FUN_040ec700(unaff_x19 + 0x10,0);
        FUN_04ea1674(unaff_x19 + 2,&stack0x00000010);
        return;
      }
      FUN_07591f7c(&stack0x00000010,0);
    }
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    *unaff_x19 = 0xfffffffe;
    thunk_FUN_040ec700(unaff_x19 + 0xc,0);
    FUN_075926a0(unaff_x19 + 2,0);
  }
  return;
}


