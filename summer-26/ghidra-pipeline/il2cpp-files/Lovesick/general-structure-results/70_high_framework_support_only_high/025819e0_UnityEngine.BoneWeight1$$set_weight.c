/*
FUNCTION_NAME: UnityEngine.BoneWeight1$$set_weight
ENTRY_POINT: 025819e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
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

void UnityEngine_BoneWeight1__set_weight(void)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  int in_w9;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  long unaff_x20;
  undefined4 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x25;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
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
  int in_stack_00000108;
  int iStack000000000000010c;
  
  if (in_w9 == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    *(undefined1 *)(unaff_x20 + 0xed) = 1;
  }
  uVar7 = FUN_017bc96c();
  if ((uVar7 & 1) != 0) {
    FUN_0265d9e8();
  }
  uVar7 = FUN_0257ab78();
  puVar6 = Method_OVRPlugin_<>c_<_cctor>b__796_80__;
  puVar4 = 
  Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
  ;
  puVar11 = (undefined8 *)PTR_DAT_033f4dd0;
  puVar3 = PTR_DAT_033f4c58;
  if (*(long *)(unaff_x19 + 600) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar15 = *(long *)(*(long *)(unaff_x19 + 600) + 0x10);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(unaff_x19 + 0x260) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar16 = *(long *)(*(long *)(unaff_x19 + 0x260) + 0x10);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  in_stack_00000108 = *(int *)(lVar15 + 0x18);
  iStack000000000000010c = *(int *)(lVar16 + 0x18);
  if (*(char *)(unaff_x19 + 0x270) == '\0') {
    lVar15 = *(long *)(unaff_x19 + 0x268);
    plVar9 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
    if ((lVar15 != 0) && (0 < *(int *)(lVar15 + 0x18))) {
      if ((uVar7 & 1) != 0) {
        FUN_01323390(lVar15,&stack0x000000e0,*(undefined8 *)StringLiteral_4984);
        in_stack_000000a8 = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
        in_stack_000000b0 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
        in_stack_000000a0 = in_stack_000000e0;
        while (uVar8 = FUN_012b894c(&stack0x000000a0,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
          plVar9 = (long *)FUN_00cc3d7c(&stack0x000000a0,*(undefined8 *)puVar3);
          uVar18 = *(undefined8 *)((long)unaff_x22 + 0x14);
          uVar19 = *unaff_x22;
          uStack00000000000000d0 =
               (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
          uVar26 = uStack00000000000000d0;
          uStack00000000000000c8 = (undefined4)unaff_x22[1];
          uVar20 = uStack00000000000000c8;
          uStack00000000000000cc = (undefined4)((ulong)unaff_x22[1] >> 0x20);
          uVar23 = uStack00000000000000cc;
          in_stack_000000c0 = uVar19;
          uStack00000000000000d4 = uVar18;
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar24 = unaff_x21[1];
          uVar21 = unaff_x21[2];
          uVar22 = *unaff_x21;
          lVar15 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar8 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                puVar14 = (undefined8 *)(lVar15 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                goto LAB_02581c9c;
              }
              uVar8 = uVar8 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar8 != 0);
          }
          puVar14 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar6,3);
LAB_02581c9c:
          uStack00000000000000e8 = uVar20;
          uStack00000000000000f4 = (undefined4)uVar18;
          in_stack_000000f8 = (undefined4)((ulong)uVar18 >> 0x20);
          uStack00000000000000ec = uVar23;
          uStack00000000000000f0 = uVar26;
          in_stack_000000e0 = uVar19;
          (*(code *)*puVar14)(uVar22,uVar24,uVar21,plVar9);
        }
        FUN_012b8948(&stack0x000000a0,*puVar11);
      }
      lVar15 = *(long *)(unaff_x19 + 0x268);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar16 = *(long *)
                Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_AddListValue__;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      uVar8 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
      if ((uVar8 & 1) == 0) goto LAB_02581f48;
      iVar1 = *(int *)(lVar15 + 0x18);
      *(undefined4 *)(lVar15 + 0x18) = 0;
      plVar9 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
      if (0 < iVar1) {
        FUN_0179519c(*(undefined8 *)(lVar15 + 0x10),0,iVar1,0);
        plVar9 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
      }
    }
  }
  else {
    if ((uVar7 & 1) != 0) {
      if (0 < in_stack_00000108) {
        FUN_01323390(lVar15,&stack0x000000e0,*(undefined8 *)StringLiteral_4984);
        in_stack_000000a8 = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
        in_stack_000000b0 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
        in_stack_000000a0 = in_stack_000000e0;
        while (uVar8 = FUN_012b894c(&stack0x000000a0,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
          plVar9 = (long *)FUN_00cc3d7c(&stack0x000000a0,*(undefined8 *)puVar3);
          plVar10 = *(long **)(unaff_x19 + 600);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar8 = (**(code **)(*plVar10 + 0x188))(plVar10,plVar9,*(undefined8 *)(*plVar10 + 400));
          if ((uVar8 & 1) != 0) {
            uVar18 = *(undefined8 *)((long)unaff_x22 + 0x14);
            in_stack_000000e0 = *unaff_x22;
            uStack00000000000000f4 = (undefined4)uVar18;
            in_stack_000000f8 = (undefined4)((ulong)uVar18 >> 0x20);
            uStack00000000000000f0 =
                 (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
            uStack00000000000000e8 = (undefined4)unaff_x22[1];
            uStack00000000000000ec = (undefined4)((ulong)unaff_x22[1] >> 0x20);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar23 = unaff_x21[1];
            uVar20 = unaff_x21[2];
            uVar26 = *unaff_x21;
            uStack000000000000008c = uStack00000000000000ec;
            uStack0000000000000090 = uStack00000000000000f0;
            lVar15 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar15 + 0x12a);
            in_stack_00000080 = in_stack_000000e0;
            uStack0000000000000088 = uStack00000000000000e8;
            uStack0000000000000094 = uVar18;
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                  goto LAB_02581b8c;
                }
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar6,3);
LAB_02581b8c:
            uStack00000000000000c8 = uStack0000000000000088;
            in_stack_000000c0 = in_stack_00000080;
            uStack00000000000000d4 = uStack0000000000000094;
            uStack00000000000000cc = uStack000000000000008c;
            uStack00000000000000d0 = uStack0000000000000090;
            (*(code *)*puVar11)(uVar26,uVar23,uVar20,plVar9);
          }
        }
        FUN_012b8948(&stack0x000000a0,*(undefined8 *)PTR_DAT_033f4dd0);
      }
      if (0 < iStack000000000000010c) {
        if (*(long *)(unaff_x19 + 0x260) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar15 = *(long *)(*(long *)(unaff_x19 + 0x260) + 0x10);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01323390(lVar15,&stack0x000000e0,*(undefined8 *)StringLiteral_4984);
        in_stack_000000a8 = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
        in_stack_000000b0 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
        in_stack_000000a0 = in_stack_000000e0;
        while (uVar8 = FUN_012b894c(&stack0x000000a0,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
          plVar9 = (long *)FUN_00cc3d7c(&stack0x000000a0,*(undefined8 *)puVar3);
          plVar10 = *(long **)(unaff_x19 + 0x260);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar8 = (**(code **)(*plVar10 + 0x188))(plVar10,plVar9,*(undefined8 *)(*plVar10 + 400));
          if ((uVar8 & 1) != 0) {
            uVar18 = *unaff_x22;
            uStack0000000000000074 = (undefined4)*(undefined8 *)((long)unaff_x22 + 0x14);
            uVar21 = uStack0000000000000074;
            in_stack_00000078 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0x14) >> 0x20)
            ;
            uVar24 = in_stack_00000078;
            uStack0000000000000070 =
                 (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
            uVar26 = uStack0000000000000070;
            uStack0000000000000068 = (undefined4)unaff_x22[1];
            uVar20 = uStack0000000000000068;
            uStack000000000000006c = (undefined4)((ulong)unaff_x22[1] >> 0x20);
            uVar23 = uStack000000000000006c;
            in_stack_00000060 = uVar18;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar25 = unaff_x21[1];
            uVar22 = unaff_x21[2];
            uVar27 = *unaff_x21;
            lVar15 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                  goto LAB_02581df8;
                }
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar6,3);
LAB_02581df8:
            uStack00000000000000e8 = uVar20;
            uStack00000000000000ec = uVar23;
            uStack00000000000000f0 = uVar26;
            in_stack_000000e0 = uVar18;
            uStack00000000000000f4 = uVar21;
            in_stack_000000f8 = uVar24;
            (*(code *)*puVar11)(uVar27,uVar25,uVar22,plVar9);
          }
        }
        FUN_012b8948(&stack0x000000a0,*(undefined8 *)PTR_DAT_033f4dd0);
      }
    }
    puVar5 = Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_AddListValue__;
    puVar11 = (undefined8 *)PTR_DAT_033f4dd0;
    lVar15 = *(long *)(unaff_x19 + 0x268);
    *(undefined1 *)(unaff_x19 + 0x270) = 0;
    plVar9 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
    if (lVar15 != 0) {
      lVar16 = *(long *)puVar5;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      uVar8 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
      if ((uVar8 & 1) == 0) {
LAB_02581f48:
        *(undefined4 *)(lVar15 + 0x18) = 0;
        plVar9 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
      }
      else {
        iVar1 = *(int *)(lVar15 + 0x18);
        *(undefined4 *)(lVar15 + 0x18) = 0;
        plVar9 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
        if (0 < iVar1) {
          FUN_0179519c(*(undefined8 *)(lVar15 + 0x10),0,iVar1,0);
          plVar9 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
        }
      }
    }
  }
  System_Collections_Generic_List<fsData>_TypeInfo = (undefined *)plVar9;
  if ((uVar7 & 1) == 0) {
    if (0 < iStack000000000000010c) {
      if (*(long *)(unaff_x19 + 0x260) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar15 = *(long *)(*(long *)(unaff_x19 + 0x260) + 0x10);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01323390(lVar15,&stack0x00000060,*(undefined8 *)StringLiteral_4984);
      in_stack_000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      in_stack_000000b0 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
      in_stack_000000a0 = in_stack_00000060;
      while (uVar7 = FUN_012b894c(&stack0x000000a0,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
        plVar10 = (long *)FUN_00cc3d7c(&stack0x000000a0,*(undefined8 *)puVar3);
        plVar12 = (long *)thunk_FUN_00d6225c(plVar10,*plVar9);
        if (plVar12 != (long *)0x0) {
          plVar13 = *(long **)(unaff_x19 + 0x260);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar7 = (**(code **)(*plVar13 + 0x188))(plVar13,plVar10,*(undefined8 *)(*plVar13 + 400));
          if ((uVar7 & 1) != 0) {
            lVar15 = *plVar12;
            uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar7 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *plVar9) {
                  puVar14 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                  goto UnityEngine_SystemInfo__get_supportsMultisampleAutoResolve;
                }
                uVar7 = uVar7 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar7 != 0);
            }
            puVar14 = (undefined8 *)FUN_00d59724(plVar12,*plVar9,0);
UnityEngine_SystemInfo__get_supportsMultisampleAutoResolve:
            uVar7 = (*(code *)*puVar14)(plVar12,puVar14[1]);
            if ((uVar7 & 1) != 0) {
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar15 = *plVar10;
              uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar7 != 0) {
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                    puVar14 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                    goto FUN_025823ac;
                  }
                  uVar7 = uVar7 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar7 != 0);
              }
              puVar14 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar6,0);
FUN_025823ac:
              uVar7 = (*(code *)*puVar14)(plVar10,puVar14[1]);
              if ((uVar7 & 1) != 0) {
                lVar15 = *plVar10;
                uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
                if (uVar7 != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                      puVar14 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                      goto LAB_0258240c;
                    }
                    uVar7 = uVar7 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar7 != 0);
                }
                puVar14 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar6,4);
LAB_0258240c:
                (*(code *)*puVar14)(plVar10);
              }
            }
          }
        }
      }
      FUN_012b8948(&stack0x000000a0,*puVar11);
    }
    if (0 < in_stack_00000108) {
      if (*(long *)(unaff_x19 + 600) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar15 = *(long *)(*(long *)(unaff_x19 + 600) + 0x10);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01323390(lVar15,&stack0x00000060,*(undefined8 *)StringLiteral_4984);
      in_stack_000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      in_stack_000000b0 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
      in_stack_000000a0 = in_stack_00000060;
      while (uVar7 = FUN_012b894c(&stack0x000000a0,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
        plVar10 = (long *)FUN_00cc3d7c(&stack0x000000a0,*(undefined8 *)puVar3);
        plVar12 = (long *)thunk_FUN_00d6225c(plVar10,*plVar9);
        if (plVar12 != (long *)0x0) {
          plVar13 = *(long **)(unaff_x19 + 600);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar7 = (**(code **)(*plVar13 + 0x188))(plVar13,plVar10,*(undefined8 *)(*plVar13 + 400));
          if ((uVar7 & 1) != 0) {
            lVar15 = *plVar12;
            uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar7 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *plVar9) {
                  puVar14 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_02582528;
                }
                uVar7 = uVar7 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar7 != 0);
            }
            puVar14 = (undefined8 *)FUN_00d59724(plVar12,*plVar9,0);
LAB_02582528:
            uVar7 = (*(code *)*puVar14)(plVar12,puVar14[1]);
            if ((uVar7 & 1) != 0) {
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar15 = *plVar10;
              uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar7 != 0) {
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                    puVar14 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                    goto FUN_02582588;
                  }
                  uVar7 = uVar7 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar7 != 0);
              }
              puVar14 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar6,0);
FUN_02582588:
              uVar7 = (*(code *)*puVar14)(plVar10,puVar14[1]);
              if ((uVar7 & 1) != 0) {
                lVar15 = *plVar10;
                uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
                if (uVar7 != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                      puVar14 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                      goto LAB_025825e8;
                    }
                    uVar7 = uVar7 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar7 != 0);
                }
                puVar14 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar6,4);
LAB_025825e8:
                (*(code *)*puVar14)(plVar10);
              }
            }
          }
        }
      }
      FUN_012b8948(&stack0x000000a0,*puVar11);
    }
    goto LAB_02582634;
  }
  if (iStack000000000000010c < 1) {
LAB_02581f80:
    bVar2 = false;
  }
  else {
    lVar15 = FUN_0257aad8();
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((*(int *)(lVar15 + 0x18) < 2) && (uVar7 = FUN_02582b80(), (uVar7 & 1) != 0))
    goto LAB_02581f80;
    if (*(long *)(unaff_x19 + 0x260) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar15 = *(long *)(*(long *)(unaff_x19 + 0x260) + 0x10);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01323390(lVar15,&stack0x00000060,*(undefined8 *)StringLiteral_4984);
    in_stack_000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    in_stack_000000b0 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
    bVar2 = false;
    in_stack_000000a0 = in_stack_00000060;
    while (uVar7 = FUN_012b894c(&stack0x000000a0,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
      plVar9 = (long *)FUN_00cc3d7c(&stack0x000000a0,*(undefined8 *)puVar3);
      plVar10 = *(long **)(unaff_x19 + 0x260);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar7 = (**(code **)(*plVar10 + 0x188))(plVar10,plVar9,*(undefined8 *)(*plVar10 + 400));
      if ((uVar7 & 1) != 0) {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar15 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar7 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
              puVar14 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_02582050;
            }
            uVar7 = uVar7 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar7 != 0);
        }
        puVar14 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar6,0);
LAB_02582050:
        uVar7 = (*(code *)*puVar14)(plVar9,puVar14[1]);
        if ((uVar7 & 1) != 0) {
          lVar15 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar7 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                puVar14 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                goto LAB_025820b0;
              }
              uVar7 = uVar7 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar7 != 0);
          }
          puVar14 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar6,4);
LAB_025820b0:
          bVar2 = true;
          (*(code *)*puVar14)(plVar9);
        }
      }
    }
    FUN_012b8948(&stack0x000000a0,*puVar11);
  }
  if ((0 < in_stack_00000108) && (!bVar2)) {
    if (*(long *)(unaff_x19 + 600) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar15 = *(long *)(*(long *)(unaff_x19 + 600) + 0x10);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01323390(lVar15,&stack0x00000060,*(undefined8 *)StringLiteral_4984);
    in_stack_000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    in_stack_000000b0 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
    in_stack_000000a0 = in_stack_00000060;
    while (uVar7 = FUN_012b894c(&stack0x000000a0,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
      plVar9 = (long *)FUN_00cc3d7c(&stack0x000000a0,*(undefined8 *)puVar3);
      plVar10 = *(long **)(unaff_x19 + 600);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar7 = (**(code **)(*plVar10 + 0x188))(plVar10,plVar9,*(undefined8 *)(*plVar10 + 400));
      if ((uVar7 & 1) != 0) {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar15 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar7 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
              puVar14 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_025821d0;
            }
            uVar7 = uVar7 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar7 != 0);
        }
        puVar14 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar6,0);
LAB_025821d0:
        uVar7 = (*(code *)*puVar14)(plVar9,puVar14[1]);
        if ((uVar7 & 1) != 0) {
          lVar15 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar7 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                puVar14 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                goto LAB_02582230;
              }
              uVar7 = uVar7 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar7 != 0);
          }
          puVar14 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar6,4);
LAB_02582230:
          (*(code *)*puVar14)(plVar9);
        }
      }
    }
    FUN_012b8948(&stack0x000000a0,*puVar11);
  }
LAB_02582634:
  if (DAT_0377a0ef == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ef = '\x01';
  }
  uVar7 = FUN_017bc96c(unaff_x25,
                       **(undefined8 **)
                         (*(long *)
                           Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                         + 0xb8),0);
  if ((uVar7 & 1) != 0) {
    FUN_0265dab4(unaff_x25,0);
  }
  *(undefined1 *)(unaff_x19 + 0x27c) = 0;
  return;
}


