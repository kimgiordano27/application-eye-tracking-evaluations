/*
FUNCTION_NAME: Newtonsoft.Json.JsonReaderException$$get_LinePosition
ENTRY_POINT: 0760f078
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0760f278) */

void Newtonsoft_Json_JsonReaderException__get_LinePosition(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long *in_stack_00000018;
  
code_r0x0760f078:
  lVar3 = *unaff_x23;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x28) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0760f0c4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00(unaff_x23,*unaff_x28,0);
LAB_0760f0c4:
  lVar3 = (*(code *)*puVar2)(unaff_x23,puVar2[1]);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar8 = *unaff_x19;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)(unaff_x25 + 0xe0));
  }
  uVar4 = FUN_07691f40(uVar6,uVar8,0);
  unaff_x23 = in_stack_00000018;
  if ((uVar4 & 1) != 0) {
    *unaff_x20 = unaff_x22;
    thunk_FUN_040ec700();
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar6 = (**(code **)(*unaff_x22 + 0x1c8))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x1d0));
    *unaff_x19 = uVar6;
    thunk_FUN_040ec700();
    iVar7 = 9;
    goto LAB_0760f15c;
  }
  do {
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0760f060;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(unaff_x23,*unaff_x29,0);
LAB_0760f060:
    uVar4 = (*(code *)*puVar2)(unaff_x23,puVar2[1]);
    in_stack_00000018 = unaff_x23;
    if ((uVar4 & 1) != 0) break;
    iVar7 = 6;
LAB_0760f15c:
    if (in_stack_00000018 != (long *)0x0) {
      lVar3 = *in_stack_00000018;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092860c0) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0760f1bc;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_0760f1bc:
      (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
    }
    if ((iVar7 != 6) && (iVar7 != 0)) {
      return;
    }
    do {
      unaff_x26 = unaff_x26 + 1;
      if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x26) {
        return;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_x26) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      unaff_x22 = *(long **)(unaff_x21 + unaff_x26 * 8 + 0x20);
      plVar1 = (long *)FUN_04f54354(unaff_x22,*unaff_x27);
    } while (plVar1 == (long *)0x0);
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092d8490) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0760eff4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar1,*(long *)PTR_DAT_092d8490,0);
LAB_0760eff4:
    unaff_x23 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
  } while( true );
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  goto code_r0x0760f078;
}


