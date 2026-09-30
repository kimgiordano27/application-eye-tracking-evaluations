/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ScanFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 07503068
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined8
Newtonsoft_Json_Linq_JsonPath_ScanFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose(void)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long lVar8;
  long unaff_x27;
  uint unaff_w28;
  long in_stack_00000000;
  long in_stack_00000008;
  
  do {
    uVar3 = FUN_06ff82a4();
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_0912d808 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      lVar8 = FUN_075039bc(unaff_x24);
      if (unaff_w21 == 0) goto LAB_07503080;
LAB_075030b0:
      if (lVar8 == 0) goto LAB_075031f0;
      if (*(char *)(lVar8 + 0x15) != '\0') goto LAB_075030bc;
    }
    else {
      if (in_stack_00000008 == 0) {
LAB_075031f0:
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar8 = *(long *)(in_stack_00000008 + 0x10);
      if (unaff_w21 != 0) goto LAB_075030b0;
LAB_07503080:
      if (lVar8 == 0) goto LAB_075031f0;
LAB_075030bc:
      if (((*(char *)(lVar8 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
         (*(int *)(in_stack_00000008 + 0x18) == unaff_w21)) {
        if (unaff_x22 == 0) goto LAB_075031f0;
        lVar7 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_075031f0;
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
          plVar4 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *plVar4 = unaff_x25;
          thunk_FUN_03f86000(plVar4,unaff_x25);
        }
        else {
          FUN_056b08d0();
        }
      }
    }
    if (in_stack_00000008 == 0) {
      lVar7 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_09134df0);
      *(long *)(lVar7 + 0x10) = lVar8;
      thunk_FUN_03f86000((long *)(lVar7 + 0x10),lVar8);
      *(int *)(lVar7 + 0x18) = unaff_w21;
      FUN_06ff673c();
    }
    do {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      unaff_w28 = unaff_w28 + 1;
      if ((int)uVar1 <= (int)unaff_w28) {
        do {
          puVar2 = PTR_DAT_0912d808;
          if (*(int *)(*(long *)PTR_DAT_0912d808 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          in_stack_00000000 = FUN_07503650(in_stack_00000000);
          if (in_stack_00000000 == 0) {
            if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar3 = FUN_074ce748();
            if ((uVar3 & 1) == 0) {
              if (unaff_x19 == (long *)0x0) goto LAB_075031f0;
              uVar3 = FUN_074d06b8();
              if ((uVar3 & 1) == 0) {
                if (unaff_x22 != 0) {
                  uVar5 = FUN_074dc778();
                  uVar5 = thunk_FUN_03f4e590(uVar5,*(undefined8 *)PTR_DAT_0910c888);
                  goto LAB_075034d0;
                }
                goto LAB_075031f0;
              }
            }
            if (unaff_x22 != 0) {
              uVar5 = FUN_03f13470(*(undefined8 *)PTR_DAT_09134178,*(undefined4 *)(unaff_x22 + 0x18)
                                  );
LAB_075034d0:
              FUN_056b0e94();
              return uVar5;
            }
            goto LAB_075031f0;
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          unaff_w21 = unaff_w21 + 1;
          unaff_x20 = FUN_07502b04(in_stack_00000000);
          if (unaff_x20 == 0) goto LAB_075031f0;
          uVar1 = *(uint *)(unaff_x20 + 0x18);
        } while ((int)uVar1 < 1);
        unaff_w28 = 0;
      }
      if (uVar1 <= unaff_w28) {
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      unaff_x25 = *(long *)(unaff_x20 + (long)(int)unaff_w28 * 8 + 0x20);
      if (unaff_x25 == 0) {
        thunk_FUN_03f786f8(PTR_DAT_09134e30);
        uVar5 = thunk_FUN_03f4e68c();
        uVar6 = thunk_FUN_03f786f8(PTR_DAT_09134e38);
        FUN_073de214(uVar5,uVar6,0);
        uVar6 = thunk_FUN_03f786f8(PTR_DAT_09134e40);
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar5,uVar6);
      }
      unaff_x24 = FUN_03f217fc(unaff_x25);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)(unaff_x27 + 0xe0));
      }
      uVar3 = FUN_074cf3e8();
      if ((uVar3 & 1) == 0) break;
      if (unaff_x19 == (long *)0x0) goto LAB_075031f0;
      uVar3 = (**(code **)(*unaff_x19 + 0x2d8))();
    } while ((uVar3 & 1) == 0);
    if (unaff_x23 == 0) goto LAB_075031f0;
  } while( true );
}


