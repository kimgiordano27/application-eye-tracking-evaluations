/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 076c89a0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076c8c7c) */
/* WARNING: Removing unreachable block (ram,0x076c8ec4) */
/* WARNING: Removing unreachable block (ram,0x076c95f0) */

undefined8
Newtonsoft_Json_Linq_JsonPath_ScanMultipleFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
          (void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  long lVar10;
  long unaff_x29;
  long in_stack_00000008;
  long in_stack_00000020;
  long *in_stack_00000028;
  
  do {
    lVar6 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076c89ec;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(unaff_x21,*unaff_x26,0);
LAB_076c89ec:
    uVar8 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
    if ((uVar8 & 1) == 0) {
      if (in_stack_00000028 != (long *)0x0) {
        lVar6 = *in_stack_00000028;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092860c0) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_076c8c64;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000028,*(long *)PTR_DAT_092860c0,0);
LAB_076c8c64:
        (*(code *)*puVar2)(in_stack_00000028,puVar2[1]);
      }
      if (*(int *)(*(long *)PTR_DAT_092d4030 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      in_stack_00000008 = FUN_076c7ba0(in_stack_00000008);
      if (in_stack_00000008 == 0) {
        if (unaff_x23 != 0) {
                    /* try { // try from 076c8e50 to 077c8e97 has its CatchHandler @ 076c8e50
                       catch() { ... } // from try @ 076c8e50 with catch @ 076c8e50
                       catch() { ... } // from try @ 076c8f30 with catch @ 076c8e50
                       catch() { ... } // from try @ 076c8fb8 with catch @ 076c8e50
                       catch() { ... } // from try @ 076c8ffc with catch @ 076c8e50 */
          uVar3 = FUN_05c287cc();
          return uVar3;
        }
LAB_076c95ec:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(*(long *)PTR_DAT_092d4030 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      unaff_w24 = unaff_w24 + 1;
      plVar4 = (long *)FUN_076c8348(in_stack_00000008);
      if (plVar4 == (long *)0x0) goto LAB_076c95ec;
      lVar6 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092b7840) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_076c8980;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar4,*(long *)PTR_DAT_092b7840,0);
LAB_076c8980:
      unaff_x21 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
    }
    else {
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar6 = *in_stack_00000028;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x20) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_076c8a50;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000028,*unaff_x20,0);
LAB_076c8a50:
      lVar6 = (*(code *)*puVar2)(in_stack_00000028,puVar2[1]);
      if (lVar6 == 0) {
        thunk_FUN_040dedf8(PTR_DAT_092dbff8);
        uVar3 = thunk_FUN_040b4efc();
        uVar5 = thunk_FUN_040dedf8(PTR_DAT_092dc080);
        FUN_0759fb44(uVar3,uVar5,0);
        uVar5 = thunk_FUN_040dedf8(PTR_DAT_092dc088);
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar3,uVar5);
      }
      uVar3 = FUN_075ac0e4(lVar6,0);
      if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar8 = FUN_07692be0();
      unaff_x21 = in_stack_00000028;
      if ((uVar8 & 1) != 0) {
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar8 = (**(code **)(*unaff_x19 + 0x2b8))();
        if ((uVar8 & 1) == 0) goto joined_r0x076c8bf0;
      }
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar8 = FUN_06efe340();
      if ((uVar8 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_092d4030 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar10 = FUN_076c7f0c(uVar3);
        if (unaff_w24 != 0) goto LAB_076c8ae4;
LAB_076c8b1c:
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
LAB_076c8b20:
        if (((*(char *)(lVar10 + 0x14) != '\0') || (in_stack_00000020 == 0)) ||
           (*(int *)(in_stack_00000020 + 0x18) == unaff_w24)) {
          if (unaff_x23 == 0) {
LAB_076c8d38:
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar7 = *(long *)(unaff_x23 + 0x10);
          *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_076c8d38;
          uVar1 = *(uint *)(unaff_x23 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
            plVar4 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar4 = lVar6;
            thunk_FUN_040ec700(plVar4,lVar6);
          }
          else {
            FUN_05c26d88();
          }
        }
      }
      else {
        if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar10 = *(long *)(in_stack_00000020 + 0x10);
        if (unaff_w24 == 0) goto LAB_076c8b1c;
LAB_076c8ae4:
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(char *)(lVar10 + 0x15) != '\0') goto LAB_076c8b20;
      }
      if (in_stack_00000020 == 0) {
        lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092dbfc0);
        *(long *)(lVar6 + 0x10) = lVar10;
        thunk_FUN_040ec700((long *)(lVar6 + 0x10),lVar10);
        *(int *)(lVar6 + 0x18) = unaff_w24;
        FUN_06efc7d8();
      }
    }
joined_r0x076c8bf0:
    in_stack_00000028 = unaff_x21;
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  } while( true );
}


