/*
FUNCTION_NAME: UnityEngine.BoneWeight1$$Equals
ENTRY_POINT: 02581a70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02582740) */
/* WARNING: Removing unreachable block (ram,0x02582758) */
/* WARNING: Removing unreachable block (ram,0x025826fc) */
/* WARNING: Removing unreachable block (ram,0x02581ef0) */
/* WARNING: Removing unreachable block (ram,0x02582750) */
/* WARNING: Removing unreachable block (ram,0x02581e68) */
/* WARNING: Removing unreachable block (ram,0x025820fc) */
/* WARNING: Removing unreachable block (ram,0x02582768) */
/* WARNING: Removing unreachable block (ram,0x02582730) */
/* WARNING: Removing unreachable block (ram,0x02582774) */
/* WARNING: Removing unreachable block (ram,0x0258244c) */
/* WARNING: Removing unreachable block (ram,0x0258271c) */
/* WARNING: Removing unreachable block (ram,0x02582694) */

void UnityEngine_BoneWeight1__Equals(undefined8 param_1,ulong param_2)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  int in_w9;
  long lVar12;
  int in_w10;
  int *piVar13;
  long *in_x11;
  long unaff_x19;
  undefined4 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  undefined8 in_stack_000000e0;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  int iStack0000000000000108;
  int iStack000000000000010c;
  
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_80__;
  puVar7 = (undefined8 *)PTR_DAT_033f4dd0;
  puVar14 = *(undefined8 **)(unaff_x28 + 0xc58);
  iStack0000000000000108 = in_w10;
  iStack000000000000010c = in_w9;
  if (*(char *)(unaff_x19 + 0x270) == '\0') {
    lVar11 = *(long *)(unaff_x19 + 0x268);
    plVar5 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
    if ((lVar11 != 0) && (0 < *(int *)(lVar11 + 0x18))) {
      if ((param_2 & 1) != 0) {
        FUN_01323390(lVar11,&stack0x000000e0,*(undefined8 *)StringLiteral_4984);
        in_stack_000000a8 = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
        in_stack_000000b0 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
        in_stack_000000a0 = in_stack_000000e0;
        while (uVar4 = FUN_012b894c(&stack0x000000a0,*unaff_x27), (uVar4 & 1) != 0) {
          plVar5 = (long *)FUN_00cc3d7c(&stack0x000000a0,*puVar14);
          uVar15 = *(undefined8 *)((long)unaff_x22 + 0x14);
          uVar16 = *unaff_x22;
          uStack00000000000000d0 =
               (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
          uVar23 = uStack00000000000000d0;
          uStack00000000000000c8 = (undefined4)unaff_x22[1];
          uVar17 = uStack00000000000000c8;
          uStack00000000000000cc = (undefined4)((ulong)unaff_x22[1] >> 0x20);
          uVar20 = uStack00000000000000cc;
          in_stack_000000c0 = uVar16;
          uStack00000000000000d4 = uVar15;
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar21 = unaff_x21[1];
          uVar18 = unaff_x21[2];
          uVar19 = *unaff_x21;
          lVar11 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar4 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                goto LAB_02581c9c;
              }
              uVar4 = uVar4 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar4 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar3,3);
LAB_02581c9c:
          uStack00000000000000e8 = uVar17;
          uStack00000000000000f4 = (undefined4)uVar15;
          in_stack_000000f8 = (undefined4)((ulong)uVar15 >> 0x20);
          uStack00000000000000ec = uVar20;
          uStack00000000000000f0 = uVar23;
          in_stack_000000e0 = uVar16;
          (*(code *)*puVar10)(uVar19,uVar21,uVar18,plVar5);
        }
        FUN_012b8948(&stack0x000000a0,*puVar7);
        in_x11 = (long *)
                 Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_AddListValue__;
      }
      lVar11 = *(long *)(unaff_x19 + 0x268);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar12 = *in_x11;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      uVar4 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 200));
      if ((uVar4 & 1) == 0) goto LAB_02581f48;
      iVar1 = *(int *)(lVar11 + 0x18);
      *(undefined4 *)(lVar11 + 0x18) = 0;
      plVar5 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
      if (0 < iVar1) {
        FUN_0179519c(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
        plVar5 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
      }
    }
  }
  else {
    if ((param_2 & 1) != 0) {
      if (0 < in_w10) {
        FUN_01323390(param_1,&stack0x000000e0,*(undefined8 *)StringLiteral_4984);
        in_stack_000000a8 = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
        in_stack_000000b0 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
        in_stack_000000a0 = in_stack_000000e0;
        while (uVar4 = FUN_012b894c(&stack0x000000a0,*unaff_x27), (uVar4 & 1) != 0) {
          plVar5 = (long *)FUN_00cc3d7c(&stack0x000000a0,*puVar14);
          plVar6 = *(long **)(unaff_x19 + 600);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar4 = (**(code **)(*plVar6 + 0x188))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 400));
          if ((uVar4 & 1) != 0) {
            uVar15 = *(undefined8 *)((long)unaff_x22 + 0x14);
            in_stack_000000e0 = *unaff_x22;
            uStack00000000000000f4 = (undefined4)uVar15;
            in_stack_000000f8 = (undefined4)((ulong)uVar15 >> 0x20);
            uStack00000000000000f0 =
                 (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
            uStack00000000000000e8 = (undefined4)unaff_x22[1];
            uStack00000000000000ec = (undefined4)((ulong)unaff_x22[1] >> 0x20);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar20 = unaff_x21[1];
            uVar17 = unaff_x21[2];
            uVar23 = *unaff_x21;
            uStack000000000000008c = uStack00000000000000ec;
            uStack0000000000000090 = uStack00000000000000f0;
            lVar11 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
            in_stack_00000080 = in_stack_000000e0;
            uStack0000000000000088 = uStack00000000000000e8;
            uStack0000000000000094 = uVar15;
            if (uVar4 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                  puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                  goto LAB_02581b8c;
                }
                uVar4 = uVar4 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar3,3);
LAB_02581b8c:
            uStack00000000000000c8 = uStack0000000000000088;
            in_stack_000000c0 = in_stack_00000080;
            uStack00000000000000d4 = uStack0000000000000094;
            uStack00000000000000cc = uStack000000000000008c;
            uStack00000000000000d0 = uStack0000000000000090;
            (*(code *)*puVar7)(uVar23,uVar20,uVar17,plVar5);
          }
        }
        FUN_012b8948(&stack0x000000a0,*(undefined8 *)PTR_DAT_033f4dd0);
        in_x11 = (long *)
                 Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_AddListValue__;
      }
      if (0 < iStack000000000000010c) {
        if (*(long *)(unaff_x19 + 0x260) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar11 = *(long *)(*(long *)(unaff_x19 + 0x260) + 0x10);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01323390(lVar11,&stack0x000000e0,*(undefined8 *)StringLiteral_4984);
        in_stack_000000a8 = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
        in_stack_000000b0 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
        in_stack_000000a0 = in_stack_000000e0;
        while (uVar4 = FUN_012b894c(&stack0x000000a0,*unaff_x27), (uVar4 & 1) != 0) {
          plVar5 = (long *)FUN_00cc3d7c(&stack0x000000a0,*puVar14);
          plVar6 = *(long **)(unaff_x19 + 0x260);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar4 = (**(code **)(*plVar6 + 0x188))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 400));
          if ((uVar4 & 1) != 0) {
            uVar15 = *unaff_x22;
            uStack0000000000000074 = (undefined4)*(undefined8 *)((long)unaff_x22 + 0x14);
            uVar18 = uStack0000000000000074;
            in_stack_00000078 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0x14) >> 0x20)
            ;
            uVar21 = in_stack_00000078;
            uStack0000000000000070 =
                 (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
            uVar23 = uStack0000000000000070;
            uStack0000000000000068 = (undefined4)unaff_x22[1];
            uVar17 = uStack0000000000000068;
            uStack000000000000006c = (undefined4)((ulong)unaff_x22[1] >> 0x20);
            uVar20 = uStack000000000000006c;
            in_stack_00000060 = uVar15;
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar22 = unaff_x21[1];
            uVar19 = unaff_x21[2];
            uVar24 = *unaff_x21;
            lVar11 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar4 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                  puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                  goto LAB_02581df8;
                }
                uVar4 = uVar4 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar3,3);
LAB_02581df8:
            uStack00000000000000e8 = uVar17;
            uStack00000000000000ec = uVar20;
            uStack00000000000000f0 = uVar23;
            in_stack_000000e0 = uVar15;
            uStack00000000000000f4 = uVar18;
            in_stack_000000f8 = uVar21;
            (*(code *)*puVar7)(uVar24,uVar22,uVar19,plVar5);
          }
        }
        FUN_012b8948(&stack0x000000a0,*(undefined8 *)PTR_DAT_033f4dd0);
        in_x11 = (long *)
                 Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_AddListValue__;
      }
    }
    puVar7 = (undefined8 *)PTR_DAT_033f4dd0;
    lVar11 = *(long *)(unaff_x19 + 0x268);
    *(undefined1 *)(unaff_x19 + 0x270) = 0;
    plVar5 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
    if (lVar11 != 0) {
      lVar12 = *in_x11;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      uVar4 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 200));
      if ((uVar4 & 1) == 0) {
LAB_02581f48:
        *(undefined4 *)(lVar11 + 0x18) = 0;
        plVar5 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
      }
      else {
        iVar1 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        plVar5 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
        if (0 < iVar1) {
          FUN_0179519c(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
          plVar5 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
        }
      }
    }
  }
  System_Collections_Generic_List<fsData>_TypeInfo = (undefined *)plVar5;
  if ((param_2 & 1) == 0) {
    if (0 < iStack000000000000010c) {
      if (*(long *)(unaff_x19 + 0x260) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar11 = *(long *)(*(long *)(unaff_x19 + 0x260) + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01323390(lVar11,&stack0x00000060,*(undefined8 *)StringLiteral_4984);
      in_stack_000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      in_stack_000000b0 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
      in_stack_000000a0 = in_stack_00000060;
      while (uVar4 = FUN_012b894c(&stack0x000000a0,*unaff_x27), (uVar4 & 1) != 0) {
        plVar6 = (long *)FUN_00cc3d7c(&stack0x000000a0,*puVar14);
        plVar8 = (long *)thunk_FUN_00d6225c(plVar6,*plVar5);
        if (plVar8 != (long *)0x0) {
          plVar9 = *(long **)(unaff_x19 + 0x260);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar4 = (**(code **)(*plVar9 + 0x188))(plVar9,plVar6,*(undefined8 *)(*plVar9 + 400));
          if ((uVar4 & 1) != 0) {
            lVar11 = *plVar8;
            uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar4 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *plVar5) {
                  puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto UnityEngine_SystemInfo__get_supportsMultisampleAutoResolve;
                }
                uVar4 = uVar4 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar4 != 0);
            }
            puVar10 = (undefined8 *)FUN_00d59724(plVar8,*plVar5,0);
UnityEngine_SystemInfo__get_supportsMultisampleAutoResolve:
            uVar4 = (*(code *)*puVar10)(plVar8,puVar10[1]);
            if ((uVar4 & 1) != 0) {
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar11 = *plVar6;
              uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar4 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                    puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                    goto FUN_025823ac;
                  }
                  uVar4 = uVar4 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar4 != 0);
              }
              puVar10 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
FUN_025823ac:
              uVar4 = (*(code *)*puVar10)(plVar6,puVar10[1]);
              if ((uVar4 & 1) != 0) {
                lVar11 = *plVar6;
                uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar4 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                      puVar10 = (undefined8 *)(lVar11 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                      goto LAB_0258240c;
                    }
                    uVar4 = uVar4 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar4 != 0);
                }
                puVar10 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,4);
LAB_0258240c:
                (*(code *)*puVar10)(plVar6);
              }
            }
          }
        }
      }
      FUN_012b8948(&stack0x000000a0,*puVar7);
    }
    if (0 < iStack0000000000000108) {
      if (*(long *)(unaff_x19 + 600) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar11 = *(long *)(*(long *)(unaff_x19 + 600) + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01323390(lVar11,&stack0x00000060,*(undefined8 *)StringLiteral_4984);
      in_stack_000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      in_stack_000000b0 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
      in_stack_000000a0 = in_stack_00000060;
      while (uVar4 = FUN_012b894c(&stack0x000000a0,*unaff_x27), (uVar4 & 1) != 0) {
        plVar6 = (long *)FUN_00cc3d7c(&stack0x000000a0,*puVar14);
        plVar8 = (long *)thunk_FUN_00d6225c(plVar6,*plVar5);
        if (plVar8 != (long *)0x0) {
          plVar9 = *(long **)(unaff_x19 + 600);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar4 = (**(code **)(*plVar9 + 0x188))(plVar9,plVar6,*(undefined8 *)(*plVar9 + 400));
          if ((uVar4 & 1) != 0) {
            lVar11 = *plVar8;
            uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar4 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *plVar5) {
                  puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_02582528;
                }
                uVar4 = uVar4 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar4 != 0);
            }
            puVar10 = (undefined8 *)FUN_00d59724(plVar8,*plVar5,0);
LAB_02582528:
            uVar4 = (*(code *)*puVar10)(plVar8,puVar10[1]);
            if ((uVar4 & 1) != 0) {
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar11 = *plVar6;
              uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar4 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                    puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                    goto FUN_02582588;
                  }
                  uVar4 = uVar4 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar4 != 0);
              }
              puVar10 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
FUN_02582588:
              uVar4 = (*(code *)*puVar10)(plVar6,puVar10[1]);
              if ((uVar4 & 1) != 0) {
                lVar11 = *plVar6;
                uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar4 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                      puVar10 = (undefined8 *)(lVar11 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                      goto LAB_025825e8;
                    }
                    uVar4 = uVar4 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar4 != 0);
                }
                puVar10 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,4);
LAB_025825e8:
                (*(code *)*puVar10)(plVar6);
              }
            }
          }
        }
      }
      FUN_012b8948(&stack0x000000a0,*puVar7);
    }
    goto LAB_02582634;
  }
  if (iStack000000000000010c < 1) {
LAB_02581f80:
    bVar2 = false;
  }
  else {
    lVar11 = FUN_0257aad8();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((*(int *)(lVar11 + 0x18) < 2) && (uVar4 = FUN_02582b80(), (uVar4 & 1) != 0))
    goto LAB_02581f80;
    if (*(long *)(unaff_x19 + 0x260) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x260) + 0x10);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01323390(lVar11,&stack0x00000060,*(undefined8 *)StringLiteral_4984);
    in_stack_000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    in_stack_000000b0 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
    bVar2 = false;
    in_stack_000000a0 = in_stack_00000060;
    while (uVar4 = FUN_012b894c(&stack0x000000a0,*unaff_x27), (uVar4 & 1) != 0) {
      plVar5 = (long *)FUN_00cc3d7c(&stack0x000000a0,*puVar14);
      plVar6 = *(long **)(unaff_x19 + 0x260);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar4 = (**(code **)(*plVar6 + 0x188))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 400));
      if ((uVar4 & 1) != 0) {
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar11 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar4 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_02582050;
            }
            uVar4 = uVar4 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar4 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar3,0);
LAB_02582050:
        uVar4 = (*(code *)*puVar10)(plVar5,puVar10[1]);
        if ((uVar4 & 1) != 0) {
          lVar11 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar4 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar11 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                goto LAB_025820b0;
              }
              uVar4 = uVar4 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar4 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar3,4);
LAB_025820b0:
          bVar2 = true;
          (*(code *)*puVar10)(plVar5);
        }
      }
    }
    FUN_012b8948(&stack0x000000a0,*puVar7);
  }
  if ((0 < iStack0000000000000108) && (!bVar2)) {
    if (*(long *)(unaff_x19 + 600) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar11 = *(long *)(*(long *)(unaff_x19 + 600) + 0x10);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01323390(lVar11,&stack0x00000060,*(undefined8 *)StringLiteral_4984);
    in_stack_000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    in_stack_000000b0 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
    in_stack_000000a0 = in_stack_00000060;
    while (uVar4 = FUN_012b894c(&stack0x000000a0,*unaff_x27), (uVar4 & 1) != 0) {
      plVar5 = (long *)FUN_00cc3d7c(&stack0x000000a0,*puVar14);
      plVar6 = *(long **)(unaff_x19 + 600);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar4 = (**(code **)(*plVar6 + 0x188))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 400));
      if ((uVar4 & 1) != 0) {
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar11 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar4 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_025821d0;
            }
            uVar4 = uVar4 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar4 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar3,0);
LAB_025821d0:
        uVar4 = (*(code *)*puVar10)(plVar5,puVar10[1]);
        if ((uVar4 & 1) != 0) {
          lVar11 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar4 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar11 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                goto LAB_02582230;
              }
              uVar4 = uVar4 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar4 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar3,4);
LAB_02582230:
          (*(code *)*puVar10)(plVar5);
        }
      }
    }
    FUN_012b8948(&stack0x000000a0,*puVar7);
  }
LAB_02582634:
  if (DAT_0377a0ef == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ef = '\x01';
  }
  uVar4 = FUN_017bc96c(in_stack_00000018,
                       **(undefined8 **)
                         (*(long *)
                           Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                         + 0xb8),0);
  if ((uVar4 & 1) != 0) {
    FUN_0265dab4(in_stack_00000018,0);
  }
  *(undefined1 *)(unaff_x19 + 0x27c) = 0;
  return;
}


