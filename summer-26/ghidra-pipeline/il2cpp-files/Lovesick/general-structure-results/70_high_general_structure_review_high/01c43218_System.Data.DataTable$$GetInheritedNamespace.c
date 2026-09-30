/*
FUNCTION_NAME: System.Data.DataTable$$GetInheritedNamespace
ENTRY_POINT: 01c43218
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


undefined1  [16]
System_Data_DataTable__GetInheritedNamespace(long param_1,undefined8 param_2,long param_3)

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
  undefined1 auVar15 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  char in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined1 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  if (in_x9 != 0) {
    piVar14 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == param_3) {
        puVar6 = (undefined8 *)(param_1 + (long)(*piVar14 + 0x10) * 0x10 + 0x138);
        goto LAB_01c4325c;
      }
      in_x9 = in_x9 + -1;
      piVar14 = piVar14 + 4;
    } while (in_x9 != 0);
  }
  puVar6 = (undefined8 *)FUN_00d59724();
LAB_01c4325c:
  puVar4 = StringLiteral_4901;
  puVar3 = Method_System_Tuple<TextWriter,_string>__ctor__;
  cVar5 = (*(code *)*puVar6)();
  lVar12 = *unaff_x19;
  uVar1 = *(ushort *)(lVar12 + 0x12a);
  uVar13 = (ulong)uVar1;
  if (cVar5 == '\x02') {
    if (uVar1 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x17) * 0x10 + 0x138);
          goto LAB_01c43310;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724();
LAB_01c43310:
    uVar13 = (*(code *)*puVar6)();
    if ((uVar13 & 1) != 0) {
LAB_01c43614:
      auVar15._8_8_ = in_stack_00000040;
      auVar15._0_8_ = in_stack_00000038;
      return auVar15;
    }
    lVar12 = *unaff_x19;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 8) * 0x10 + 0x138);
          goto LAB_01c43598;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724();
LAB_01c43598:
    lVar12 = (*(code *)*puVar6)();
    if ((lVar12 != 0) &&
       (lVar12 = FUN_01c25128(), puVar2 = UnityEngine_Rendering_LODParameters_TypeInfo, lVar12 != 0)
       ) {
      lVar9 = FUN_01c254c8();
      lVar12 = in_stack_00000048;
      in_stack_00000020 = *(undefined8 *)puVar4;
      in_stack_00000028 = 0xffffffffffffffff;
      in_stack_00000030 = 2;
      uVar10 = FUN_017a7f78(&stack0x00000020,0);
      uVar10 = FUN_0160073c(*(undefined8 *)puVar2,lVar12,*(undefined8 *)puVar3,uVar10,0);
      if (lVar9 != 0) {
        FUN_01c25764(lVar9,uVar10);
        goto LAB_01c43614;
      }
    }
  }
  else {
    if (uVar1 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 8) * 0x10 + 0x138);
          goto LAB_01c43374;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724();
LAB_01c43374:
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
LAB_01c43638:
          uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar10,0);
        }
        if ((int)plVar7[3] != 0) {
          plVar7[4] = *(long *)puVar2;
          in_stack_00000020 = *(undefined8 *)puVar4;
          in_stack_00000030 = 2;
          in_stack_00000028 = 0xffffffffffffffff;
          lVar9 = FUN_017a7f78(&stack0x00000020,0);
          if ((lVar9 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
          goto LAB_01c43638;
          puVar2 = StringLiteral_12066;
          uVar11 = *(uint *)(plVar7 + 3);
          if (1 < uVar11) {
            plVar7[5] = lVar9;
            lVar9 = *(long *)puVar2;
            if (lVar9 != 0) {
              lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar9 == 0) goto LAB_01c43638;
              uVar11 = *(uint *)(plVar7 + 3);
            }
            lVar9 = in_stack_00000048;
            if (2 < uVar11) {
              plVar7[6] = *(long *)puVar2;
              if (in_stack_00000048 != 0) {
                lVar8 = thunk_FUN_00d6225c(in_stack_00000048,*(undefined8 *)(*plVar7 + 0x40));
                if (lVar8 == 0) goto LAB_01c43638;
                uVar11 = *(uint *)(plVar7 + 3);
              }
              if (3 < uVar11) {
                plVar7[7] = lVar9;
                if (*(long *)puVar3 != 0) {
                  lVar9 = thunk_FUN_00d6225c(*(long *)puVar3,*(undefined8 *)(*plVar7 + 0x40));
                  if (lVar9 == 0) goto LAB_01c43638;
                  uVar11 = *(uint *)(plVar7 + 3);
                }
                if (4 < uVar11) {
                  plVar7[8] = *(long *)puVar3;
                  in_stack_00000008 = *(undefined8 *)puVar4;
                  in_stack_00000010 = 0xffffffffffffffff;
                  in_stack_00000018 = cVar5;
                  lVar9 = FUN_017a7f78(&stack0x00000008,0);
                  if ((lVar9 != 0) &&
                     (lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)
                     ) goto LAB_01c43638;
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
                            goto LAB_01c43570;
                          }
                          uVar13 = uVar13 - 1;
                          piVar14 = piVar14 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar6 = (undefined8 *)FUN_00d59724();
LAB_01c43570:
                      (*(code *)*puVar6)();
                      in_stack_00000038 = 0;
                      in_stack_00000040 = 0;
                      goto LAB_01c43614;
                    }
                    goto LAB_01c43630;
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
LAB_01c43630:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


