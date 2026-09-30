/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<XmlTextWriter.Namespace>
ENTRY_POINT: 01970bf4
PROGRAM: sharks-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void System_Array__InternalArray__get_Item<XmlTextWriter_Namespace>(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  uint uVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = FUN_02a54244(*(long *)(param_1 + 0x28),0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      in_stack_00000008 = *(undefined8 *)PTR_DAT_037f6240;
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000018 = *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + 0x20);
      lVar2 = FUN_02c03928(&stack0x00000008,0);
      lVar7 = *unaff_x20;
      if (lVar2 != 0) {
        lVar7 = lVar2;
      }
      if (lVar7 != 0) {
        uVar3 = FUN_02a54244(lVar7,0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          lVar7 = *(long *)(unaff_x19 + 0x38);
          if (lVar7 != 0) {
            uVar5 = *(uint *)(lVar7 + 0x18);
            uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x48);
            if (0 < (int)uVar5) {
              uVar8 = 0;
              do {
                if (uVar5 <= uVar8)
                goto 
                System_Array__InternalArray__get_Item<ClassDataContract_ClassDataContractCriticalHelper_Member>
                ;
                plVar4 = *(long **)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
                if (plVar4 == (long *)0x0) goto LAB_01970d68;
                (**(code **)(*plVar4 + 0x558))(plVar4,uVar1,*(undefined8 *)(*plVar4 + 0x560));
                uVar5 = *(uint *)(lVar7 + 0x18);
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < (int)uVar5);
            }
            lVar7 = *(long *)(unaff_x19 + 0x40);
            if (lVar7 != 0) {
              uVar5 = *(uint *)(lVar7 + 0x18);
              if (0 < (int)uVar5) {
                uVar8 = 0;
                do {
                  if (uVar5 <= uVar8)
                  goto 
                  System_Array__InternalArray__get_Item<ClassDataContract_ClassDataContractCriticalHelper_Member>
                  ;
                  plVar4 = *(long **)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
                  if (plVar4 == (long *)0x0) goto LAB_01970d68;
                  (**(code **)(*plVar4 + 0x558))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x560));
                  uVar5 = *(uint *)(lVar7 + 0x18);
                  uVar8 = uVar8 + 1;
                } while ((int)uVar8 < (int)uVar5);
              }
              lVar7 = *(long *)(unaff_x19 + 0x48);
              if (lVar7 != 0) {
                uVar5 = *(uint *)(lVar7 + 0x18);
                if (0 < (int)uVar5) {
                  uVar8 = 0;
                  do {
                    if (uVar5 <= uVar8) {
System_Array__InternalArray__get_Item<ClassDataContract_ClassDataContractCriticalHelper_Member>:
                    /* WARNING: Subroutine does not return */
                      FUN_017fc5b0();
                    }
                    lVar2 = *(long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
                    if (lVar2 == 0) goto LAB_01970d68;
                    FUN_03478e54(lVar2,uVar6,0);
                    uVar5 = *(uint *)(lVar7 + 0x18);
                    uVar8 = uVar8 + 1;
                  } while ((int)uVar8 < (int)uVar5);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_01970d68:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


