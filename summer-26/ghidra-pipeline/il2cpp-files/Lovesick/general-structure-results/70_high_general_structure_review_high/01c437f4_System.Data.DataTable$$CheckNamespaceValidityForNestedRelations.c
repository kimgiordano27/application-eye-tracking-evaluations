/*
FUNCTION_NAME: System.Data.DataTable$$CheckNamespaceValidityForNestedRelations
ENTRY_POINT: 01c437f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


undefined2
System_Data_DataTable__CheckNamespaceValidityForNestedRelations
          (long param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long in_x9;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined1 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  piVar14 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar14 + -2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)(*piVar14 + 0x10) * 0x10 + 0x138);
      goto LAB_01c43834;
    }
    in_x9 = in_x9 + -1;
    piVar14 = piVar14 + 4;
  } while (in_x9 != 0);
  puVar6 = (undefined8 *)FUN_00d59724();
LAB_01c43834:
  puVar4 = StringLiteral_4901;
  puVar3 = Method_System_Tuple<TextWriter,_string>__ctor__;
  cVar5 = (*(code *)*puVar6)();
  lVar12 = *unaff_x19;
  uVar1 = *(ushort *)(lVar12 + 0x12a);
  uVar13 = (ulong)uVar1;
  if (cVar5 == '\x03') {
    if (uVar1 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x19) * 0x10 + 0x138);
          goto LAB_01c438e8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724();
LAB_01c438e8:
    uVar13 = (*(code *)*puVar6)();
    if ((uVar13 & 1) != 0) {
      return in_stack_00000030._4_2_;
    }
    lVar12 = *unaff_x19;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 8) * 0x10 + 0x138);
          goto LAB_01c43b6c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724();
LAB_01c43b6c:
    lVar12 = (*(code *)*puVar6)();
    if ((lVar12 != 0) &&
       (lVar12 = FUN_01c25128(), puVar2 = UnityEngine_Rendering_LODParameters_TypeInfo, lVar12 != 0)
       ) {
      lVar9 = FUN_01c254c8();
      lVar12 = in_stack_00000038;
      in_stack_00000018 = *(undefined8 *)puVar4;
      in_stack_00000020 = 0xffffffffffffffff;
      in_stack_00000028 = 3;
      uVar10 = FUN_017a7f78(&stack0x00000018,0);
      uVar10 = FUN_0160073c(*(undefined8 *)puVar2,lVar12,*(undefined8 *)puVar3,uVar10,0);
      if (lVar9 != 0) {
        FUN_01c25764(lVar9,uVar10);
        return in_stack_00000030._4_2_;
      }
    }
  }
  else {
    if (uVar1 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 8) * 0x10 + 0x138);
          goto LAB_01c4394c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724();
LAB_01c4394c:
    lVar12 = (*(code *)*puVar6)();
    if ((lVar12 != 0) && (lVar12 = FUN_01c25128(), puVar2 = PTR_DAT_033ea8a0, lVar12 != 0)) {
      lVar12 = FUN_01c254c8();
      plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,6);
      puVar2 = 
      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__;
      if (plVar7 != (long *)0x0) {
        if ((*(long *)
              Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
             != 0) &&
           (lVar9 = thunk_FUN_00d6225c(*(long *)
                                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
                                       ,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_01c43c0c:
          uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar10,0);
        }
        if ((int)plVar7[3] != 0) {
          plVar7[4] = *(long *)puVar2;
          in_stack_00000018 = *(undefined8 *)puVar4;
          in_stack_00000028 = 3;
          in_stack_00000020 = 0xffffffffffffffff;
          lVar9 = FUN_017a7f78(&stack0x00000018,0);
          if ((lVar9 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
          goto LAB_01c43c0c;
          puVar4 = StringLiteral_12066;
          uVar11 = *(uint *)(plVar7 + 3);
          if (1 < uVar11) {
            plVar7[5] = lVar9;
            lVar9 = *(long *)puVar4;
            if (lVar9 != 0) {
              lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar9 == 0) goto LAB_01c43c0c;
              uVar11 = *(uint *)(plVar7 + 3);
            }
            lVar9 = in_stack_00000038;
            if (2 < uVar11) {
              plVar7[6] = *(long *)puVar4;
              if (in_stack_00000038 != 0) {
                lVar8 = thunk_FUN_00d6225c(in_stack_00000038,*(undefined8 *)(*plVar7 + 0x40));
                if (lVar8 == 0) goto LAB_01c43c0c;
                uVar11 = *(uint *)(plVar7 + 3);
              }
              if (3 < uVar11) {
                plVar7[7] = lVar9;
                if (*(long *)puVar3 != 0) {
                  lVar9 = thunk_FUN_00d6225c(*(long *)puVar3,*(undefined8 *)(*plVar7 + 0x40));
                  if (lVar9 == 0) goto LAB_01c43c0c;
                  uVar11 = *(uint *)(plVar7 + 3);
                }
                if (4 < uVar11) {
                  plVar7[8] = *(long *)puVar3;
                  lVar9 = FUN_017a7f78();
                  if ((lVar9 != 0) &&
                     (lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)
                     ) goto LAB_01c43c0c;
                  if (5 < *(uint *)(plVar7 + 3)) {
                    plVar7[9] = lVar9;
                    uVar10 = FUN_01600844(plVar7,0);
                    if (lVar12 != 0) {
                      FUN_01c25764(lVar12,uVar10);
                      lVar12 = *unaff_x19;
                      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                      if (uVar13 != 0) {
                        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) == *unaff_x24) {
                            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x25) * 0x10 + 0x138)
                            ;
                            goto LAB_01c43b48;
                          }
                          uVar13 = uVar13 - 1;
                          piVar14 = piVar14 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar6 = (undefined8 *)FUN_00d59724();
LAB_01c43b48:
                      (*(code *)*puVar6)();
                      return 0;
                    }
                    goto LAB_01c43c04;
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
    }
  }
LAB_01c43c04:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


