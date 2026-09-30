/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.QueryFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 071507e4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07150a74) */
/* WARNING: Removing unreachable block (ram,0x07150cbc) */
/* WARNING: Removing unreachable block (ram,0x071513a8) */

undefined8
Newtonsoft_Json_Linq_JsonPath_QueryFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
          (long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  long lVar11;
  long in_stack_00000000;
  long in_stack_00000008;
  
code_r0x071507e4:
  puVar3 = (undefined8 *)FUN_03cf1348(param_1,param_2,param_3);
  param_1 = unaff_x21;
  do {
    uVar4 = (*(code *)*puVar3)(param_1,puVar3[1]);
    if ((uVar4 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        lVar8 = *param_1;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e6a288) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_07150a5c;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_03cf1348(param_1,*(long *)PTR_DAT_08e6a288,0);
LAB_07150a5c:
        (*(code *)*puVar3)(param_1,puVar3[1]);
      }
      puVar2 = PTR_DAT_08e9fa80;
      if (*(int *)(*(long *)PTR_DAT_08e9fa80 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      in_stack_00000000 = FUN_0714f928(in_stack_00000000);
      if (in_stack_00000000 == 0) {
        if (unaff_x23 != 0) {
          uVar5 = FUN_05214770();
          return uVar5;
        }
LAB_071513a4:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      unaff_w24 = unaff_w24 + 1;
      plVar6 = (long *)FUN_07150140(in_stack_00000000);
      if (plVar6 == (long *)0x0) goto LAB_071513a4;
      lVar8 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e80a00) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_07150798;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e80a00,0);
LAB_07150798:
      param_1 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
    }
    else {
      lVar8 = *param_1;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_07150854;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(param_1,*unaff_x26,0);
LAB_07150854:
      lVar8 = (*(code *)*puVar3)(param_1,puVar3[1]);
      if (lVar8 == 0) {
        thunk_FUN_03ce5214(PTR_DAT_08ea7220);
        uVar5 = thunk_FUN_03cf5234();
        uVar7 = thunk_FUN_03ce5214(PTR_DAT_08ea72a8);
        FUN_0702b9e8(uVar5,uVar7,0);
        uVar7 = thunk_FUN_03ce5214(PTR_DAT_08ea72b0);
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar5,uVar7);
      }
      uVar5 = FUN_07037a80(lVar8,0);
      if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar4 = FUN_0711a11c();
      if ((uVar4 & 1) != 0) {
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar4 = (**(code **)(*unaff_x19 + 0x2c8))();
        if ((uVar4 & 1) == 0) goto LAB_071507ac;
      }
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar4 = FUN_06a4feb4();
      if ((uVar4 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_08e9fa80 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        lVar11 = FUN_0714fcec(uVar5);
        if (unaff_w24 == 0) goto LAB_07150928;
LAB_071508f0:
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(char *)(lVar11 + 0x15) != '\0') goto LAB_0715092c;
      }
      else {
        if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar11 = *(long *)(in_stack_00000008 + 0x10);
        if (unaff_w24 != 0) goto LAB_071508f0;
LAB_07150928:
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
LAB_0715092c:
        if (((*(char *)(lVar11 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
           (*(int *)(in_stack_00000008 + 0x18) == unaff_w24)) {
          if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar9 = *(long *)(unaff_x23 + 0x10);
          *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
            plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *plVar6 = lVar8;
            thunk_FUN_03d233cc(plVar6,lVar8);
          }
          else {
            FUN_05212cf4();
          }
        }
      }
      if (in_stack_00000008 == 0) {
        lVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08ea71d8);
        *(long *)(lVar8 + 0x10) = lVar11;
        thunk_FUN_03d233cc((long *)(lVar8 + 0x10),lVar11);
        *(int *)(lVar8 + 0x18) = unaff_w24;
        FUN_06a4e380();
      }
    }
LAB_071507ac:
    lVar8 = *param_1;
    param_2 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 == 0) break;
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    while (*(long *)(piVar10 + -2) != param_2) {
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 4;
      if (uVar4 == 0) goto LAB_071507dc;
    }
    puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
  } while( true );
LAB_071507dc:
  param_3 = 0;
  unaff_x21 = param_1;
  goto code_r0x071507e4;
}


