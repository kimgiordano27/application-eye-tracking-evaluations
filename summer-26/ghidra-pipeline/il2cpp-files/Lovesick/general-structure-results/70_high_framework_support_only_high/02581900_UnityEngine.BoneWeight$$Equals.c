/*
FUNCTION_NAME: UnityEngine.BoneWeight$$Equals
ENTRY_POINT: 02581900
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
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

void UnityEngine_BoneWeight__Equals
               (long param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  int *piVar17;
  long unaff_x24;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
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
  
  puVar3 = Method_UnityEngine_GameObject_AddComponent<RawImage>__;
  if ((*(byte *)(unaff_x24 + 0xec4) & 1) == 0) {
    thunk_FUN_00d48444(Method_StickerSheet_GlassesWorn__);
    thunk_FUN_00d48444(PTR_DAT_033f4dd0);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f4c58);
    thunk_FUN_00d48444(System_Collections_Generic_List<fsData>_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_80__);
    thunk_FUN_00d48444(
                      Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_AddListValue__
                      );
    thunk_FUN_00d48444(StringLiteral_4984);
    thunk_FUN_00d48444(StringLiteral_272);
    thunk_FUN_00d48444(Method_System_Net_CookieContainer_GetCookieHeader__);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<RawImage>__);
    *(undefined1 *)(unaff_x24 + 0xec4) = 1;
  }
  in_stack_000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000a0 = 0;
  *(undefined1 *)(param_1 + 0x27c) = 1;
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar3;
  }
  uVar18 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (DAT_0377a0ed == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ed = '\x01';
  }
  uVar8 = FUN_017bc96c(uVar18,**(undefined8 **)
                                (*(long *)
                                  Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                + 0xb8),0);
  if ((uVar8 & 1) != 0) {
    FUN_0265d9e8(uVar18,0);
  }
  uVar8 = FUN_0257ab78(param_1);
  puVar6 = Method_OVRPlugin_<>c_<_cctor>b__796_80__;
  puVar4 = 
  Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
  ;
  puVar12 = (undefined8 *)PTR_DAT_033f4dd0;
  puVar3 = PTR_DAT_033f4c58;
  if (*(long *)(param_1 + 600) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar7 = *(long *)(*(long *)(param_1 + 600) + 0x10);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(param_1 + 0x260) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar16 = *(long *)(*(long *)(param_1 + 0x260) + 0x10);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  in_stack_00000108 = *(int *)(lVar7 + 0x18);
  iStack000000000000010c = *(int *)(lVar16 + 0x18);
  if (*(char *)(param_1 + 0x270) == '\0') {
    lVar7 = *(long *)(param_1 + 0x268);
    plVar10 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
    if ((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x18))) {
      if ((uVar8 & 1) != 0) {
        FUN_01323390(lVar7,&stack0x000000e0,*(undefined8 *)StringLiteral_4984);
        in_stack_000000a8 = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
        in_stack_000000b0 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
        in_stack_000000a0 = in_stack_000000e0;
        while (uVar9 = FUN_012b894c(&stack0x000000a0,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
          plVar10 = (long *)FUN_00cc3d7c(&stack0x000000a0,*(undefined8 *)puVar3);
          uVar19 = *(undefined8 *)((long)param_3 + 0x14);
          uVar20 = *param_3;
          uStack00000000000000d0 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20)
          ;
          uVar27 = uStack00000000000000d0;
          uStack00000000000000c8 = (undefined4)param_3[1];
          uVar21 = uStack00000000000000c8;
          uStack00000000000000cc = (undefined4)((ulong)param_3[1] >> 0x20);
          uVar24 = uStack00000000000000cc;
          in_stack_000000c0 = uVar20;
          uStack00000000000000d4 = uVar19;
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar25 = param_4[1];
          uVar22 = param_4[2];
          uVar23 = *param_4;
          lVar7 = *plVar10;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar9 != 0) {
            piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                puVar15 = (undefined8 *)(lVar7 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                goto LAB_02581c9c;
              }
              uVar9 = uVar9 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar9 != 0);
          }
          puVar15 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar6,3);
LAB_02581c9c:
          uStack00000000000000e8 = uVar21;
          uStack00000000000000f4 = (undefined4)uVar19;
          in_stack_000000f8 = (undefined4)((ulong)uVar19 >> 0x20);
          uStack00000000000000ec = uVar24;
          uStack00000000000000f0 = uVar27;
          in_stack_000000e0 = uVar20;
          (*(code *)*puVar15)(uVar23,uVar25,uVar22,plVar10,param_1,&stack0x000000e0,puVar15[1]);
        }
        FUN_012b8948(&stack0x000000a0,*puVar12);
      }
      lVar7 = *(long *)(param_1 + 0x268);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar16 = *(long *)
                Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_AddListValue__;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
      if ((uVar9 & 1) == 0) goto LAB_02581f48;
      iVar1 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      plVar10 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
      if (0 < iVar1) {
        FUN_0179519c(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
        plVar10 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
      }
    }
  }
  else {
    if ((uVar8 & 1) != 0) {
      if (0 < in_stack_00000108) {
        FUN_01323390(lVar7,&stack0x000000e0,*(undefined8 *)StringLiteral_4984);
        in_stack_000000a8 = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
        in_stack_000000b0 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
        in_stack_000000a0 = in_stack_000000e0;
        while (uVar9 = FUN_012b894c(&stack0x000000a0,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
          plVar10 = (long *)FUN_00cc3d7c(&stack0x000000a0,*(undefined8 *)puVar3);
          plVar11 = *(long **)(param_1 + 600);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,plVar10,*(undefined8 *)(*plVar11 + 400));
          if ((uVar9 & 1) != 0) {
            uVar19 = *(undefined8 *)((long)param_3 + 0x14);
            in_stack_000000e0 = *param_3;
            uStack00000000000000f4 = (undefined4)uVar19;
            in_stack_000000f8 = (undefined4)((ulong)uVar19 >> 0x20);
            uStack00000000000000f0 =
                 (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
            uStack00000000000000e8 = (undefined4)param_3[1];
            uStack00000000000000ec = (undefined4)((ulong)param_3[1] >> 0x20);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar24 = param_4[1];
            uVar21 = param_4[2];
            uVar27 = *param_4;
            uStack000000000000008c = uStack00000000000000ec;
            uStack0000000000000090 = uStack00000000000000f0;
            lVar7 = *plVar10;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
            in_stack_00000080 = in_stack_000000e0;
            uStack0000000000000088 = uStack00000000000000e8;
            uStack0000000000000094 = uVar19;
            if (uVar9 != 0) {
              piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                  puVar12 = (undefined8 *)(lVar7 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                  goto LAB_02581b8c;
                }
                uVar9 = uVar9 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar9 != 0);
            }
            puVar12 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar6,3);
LAB_02581b8c:
            uStack00000000000000c8 = uStack0000000000000088;
            in_stack_000000c0 = in_stack_00000080;
            uStack00000000000000d4 = uStack0000000000000094;
            uStack00000000000000cc = uStack000000000000008c;
            uStack00000000000000d0 = uStack0000000000000090;
            (*(code *)*puVar12)(uVar27,uVar24,uVar21,plVar10,param_1,&stack0x000000c0,puVar12[1]);
          }
        }
        FUN_012b8948(&stack0x000000a0,*(undefined8 *)PTR_DAT_033f4dd0);
      }
      if (0 < iStack000000000000010c) {
        if (*(long *)(param_1 + 0x260) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar7 = *(long *)(*(long *)(param_1 + 0x260) + 0x10);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01323390(lVar7,&stack0x000000e0,*(undefined8 *)StringLiteral_4984);
        in_stack_000000a8 = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
        in_stack_000000b0 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
        in_stack_000000a0 = in_stack_000000e0;
        while (uVar9 = FUN_012b894c(&stack0x000000a0,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
          plVar10 = (long *)FUN_00cc3d7c(&stack0x000000a0,*(undefined8 *)puVar3);
          plVar11 = *(long **)(param_1 + 0x260);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,plVar10,*(undefined8 *)(*plVar11 + 400));
          if ((uVar9 & 1) != 0) {
            uVar19 = *param_3;
            uStack0000000000000074 = (undefined4)*(undefined8 *)((long)param_3 + 0x14);
            uVar22 = uStack0000000000000074;
            in_stack_00000078 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0x14) >> 0x20);
            uVar25 = in_stack_00000078;
            uStack0000000000000070 =
                 (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
            uVar27 = uStack0000000000000070;
            uStack0000000000000068 = (undefined4)param_3[1];
            uVar21 = uStack0000000000000068;
            uStack000000000000006c = (undefined4)((ulong)param_3[1] >> 0x20);
            uVar24 = uStack000000000000006c;
            in_stack_00000060 = uVar19;
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar26 = param_4[1];
            uVar23 = param_4[2];
            uVar28 = *param_4;
            lVar7 = *plVar10;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar9 != 0) {
              piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                  puVar12 = (undefined8 *)(lVar7 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                  goto LAB_02581df8;
                }
                uVar9 = uVar9 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar9 != 0);
            }
            puVar12 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar6,3);
LAB_02581df8:
            uStack00000000000000e8 = uVar21;
            uStack00000000000000ec = uVar24;
            uStack00000000000000f0 = uVar27;
            in_stack_000000e0 = uVar19;
            uStack00000000000000f4 = uVar22;
            in_stack_000000f8 = uVar25;
            (*(code *)*puVar12)(uVar28,uVar26,uVar23,plVar10,param_1,&stack0x000000e0,puVar12[1]);
          }
        }
        FUN_012b8948(&stack0x000000a0,*(undefined8 *)PTR_DAT_033f4dd0);
      }
    }
    puVar5 = Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_AddListValue__;
    puVar12 = (undefined8 *)PTR_DAT_033f4dd0;
    lVar7 = *(long *)(param_1 + 0x268);
    *(undefined1 *)(param_1 + 0x270) = 0;
    plVar10 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
    if (lVar7 != 0) {
      lVar16 = *(long *)puVar5;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
      if ((uVar9 & 1) == 0) {
LAB_02581f48:
        *(undefined4 *)(lVar7 + 0x18) = 0;
        plVar10 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
      }
      else {
        iVar1 = *(int *)(lVar7 + 0x18);
        *(undefined4 *)(lVar7 + 0x18) = 0;
        plVar10 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
        if (0 < iVar1) {
          FUN_0179519c(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
          plVar10 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
        }
      }
    }
  }
  System_Collections_Generic_List<fsData>_TypeInfo = (undefined *)plVar10;
  if ((uVar8 & 1) == 0) {
    if (0 < iStack000000000000010c) {
      if (*(long *)(param_1 + 0x260) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar7 = *(long *)(*(long *)(param_1 + 0x260) + 0x10);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01323390(lVar7,&stack0x00000060,*(undefined8 *)StringLiteral_4984);
      in_stack_000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      in_stack_000000b0 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
      in_stack_000000a0 = in_stack_00000060;
      while (uVar8 = FUN_012b894c(&stack0x000000a0,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
        plVar11 = (long *)FUN_00cc3d7c(&stack0x000000a0,*(undefined8 *)puVar3);
        plVar13 = (long *)thunk_FUN_00d6225c(plVar11,*plVar10);
        if (plVar13 != (long *)0x0) {
          plVar14 = *(long **)(param_1 + 0x260);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar8 = (**(code **)(*plVar14 + 0x188))(plVar14,plVar11,*(undefined8 *)(*plVar14 + 400));
          if ((uVar8 & 1) != 0) {
            lVar7 = *plVar13;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *plVar10) {
                  puVar15 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                  goto UnityEngine_SystemInfo__get_supportsMultisampleAutoResolve;
                }
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
            puVar15 = (undefined8 *)FUN_00d59724(plVar13,*plVar10,0);
UnityEngine_SystemInfo__get_supportsMultisampleAutoResolve:
            uVar8 = (*(code *)*puVar15)(plVar13,puVar15[1]);
            if ((uVar8 & 1) != 0) {
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar7 = *plVar11;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar8 != 0) {
                piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                    puVar15 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                    goto FUN_025823ac;
                  }
                  uVar8 = uVar8 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar8 != 0);
              }
              puVar15 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar6,0);
FUN_025823ac:
              uVar8 = (*(code *)*puVar15)(plVar11,puVar15[1]);
              if ((uVar8 & 1) != 0) {
                lVar7 = *plVar11;
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                if (uVar8 != 0) {
                  piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                      puVar15 = (undefined8 *)(lVar7 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                      goto LAB_0258240c;
                    }
                    uVar8 = uVar8 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar8 != 0);
                }
                puVar15 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar6,4);
LAB_0258240c:
                (*(code *)*puVar15)(plVar11,param_1,param_2,param_3,param_4,puVar15[1]);
              }
            }
          }
        }
      }
      FUN_012b8948(&stack0x000000a0,*puVar12);
    }
    if (0 < in_stack_00000108) {
      if (*(long *)(param_1 + 600) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar7 = *(long *)(*(long *)(param_1 + 600) + 0x10);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01323390(lVar7,&stack0x00000060,*(undefined8 *)StringLiteral_4984);
      in_stack_000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      in_stack_000000b0 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
      in_stack_000000a0 = in_stack_00000060;
      while (uVar8 = FUN_012b894c(&stack0x000000a0,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
        plVar11 = (long *)FUN_00cc3d7c(&stack0x000000a0,*(undefined8 *)puVar3);
        plVar13 = (long *)thunk_FUN_00d6225c(plVar11,*plVar10);
        if (plVar13 != (long *)0x0) {
          plVar14 = *(long **)(param_1 + 600);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar8 = (**(code **)(*plVar14 + 0x188))(plVar14,plVar11,*(undefined8 *)(*plVar14 + 400));
          if ((uVar8 & 1) != 0) {
            lVar7 = *plVar13;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *plVar10) {
                  puVar15 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_02582528;
                }
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
            puVar15 = (undefined8 *)FUN_00d59724(plVar13,*plVar10,0);
LAB_02582528:
            uVar8 = (*(code *)*puVar15)(plVar13,puVar15[1]);
            if ((uVar8 & 1) != 0) {
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar7 = *plVar11;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar8 != 0) {
                piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                    puVar15 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                    goto FUN_02582588;
                  }
                  uVar8 = uVar8 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar8 != 0);
              }
              puVar15 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar6,0);
FUN_02582588:
              uVar8 = (*(code *)*puVar15)(plVar11,puVar15[1]);
              if ((uVar8 & 1) != 0) {
                lVar7 = *plVar11;
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                if (uVar8 != 0) {
                  piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                      puVar15 = (undefined8 *)(lVar7 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                      goto LAB_025825e8;
                    }
                    uVar8 = uVar8 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar8 != 0);
                }
                puVar15 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar6,4);
LAB_025825e8:
                (*(code *)*puVar15)(plVar11,param_1,param_2,param_3,param_4,puVar15[1]);
              }
            }
          }
        }
      }
      FUN_012b8948(&stack0x000000a0,*puVar12);
    }
    goto LAB_02582634;
  }
  if (iStack000000000000010c < 1) {
LAB_02581f80:
    bVar2 = false;
  }
  else {
    lVar7 = FUN_0257aad8(param_1);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((*(int *)(lVar7 + 0x18) < 2) && (uVar8 = FUN_02582b80(param_1), (uVar8 & 1) != 0))
    goto LAB_02581f80;
    if (*(long *)(param_1 + 0x260) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x260) + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01323390(lVar7,&stack0x00000060,*(undefined8 *)StringLiteral_4984);
    in_stack_000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    in_stack_000000b0 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
    bVar2 = false;
    in_stack_000000a0 = in_stack_00000060;
    while (uVar8 = FUN_012b894c(&stack0x000000a0,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
      plVar10 = (long *)FUN_00cc3d7c(&stack0x000000a0,*(undefined8 *)puVar3);
      plVar11 = *(long **)(param_1 + 0x260);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar8 = (**(code **)(*plVar11 + 0x188))(plVar11,plVar10,*(undefined8 *)(*plVar11 + 400));
      if ((uVar8 & 1) != 0) {
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
              puVar15 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_02582050;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar15 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar6,0);
LAB_02582050:
        uVar8 = (*(code *)*puVar15)(plVar10,puVar15[1]);
        if ((uVar8 & 1) != 0) {
          lVar7 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar8 != 0) {
            piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                puVar15 = (undefined8 *)(lVar7 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                goto LAB_025820b0;
              }
              uVar8 = uVar8 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar8 != 0);
          }
          puVar15 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar6,4);
LAB_025820b0:
          bVar2 = true;
          (*(code *)*puVar15)(plVar10,param_1,param_2,param_3,param_4,puVar15[1]);
        }
      }
    }
    FUN_012b8948(&stack0x000000a0,*puVar12);
  }
  if ((0 < in_stack_00000108) && (!bVar2)) {
    if (*(long *)(param_1 + 600) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = *(long *)(*(long *)(param_1 + 600) + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01323390(lVar7,&stack0x00000060,*(undefined8 *)StringLiteral_4984);
    in_stack_000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    in_stack_000000b0 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
    in_stack_000000a0 = in_stack_00000060;
    while (uVar8 = FUN_012b894c(&stack0x000000a0,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
      plVar10 = (long *)FUN_00cc3d7c(&stack0x000000a0,*(undefined8 *)puVar3);
      plVar11 = *(long **)(param_1 + 600);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar8 = (**(code **)(*plVar11 + 0x188))(plVar11,plVar10,*(undefined8 *)(*plVar11 + 400));
      if ((uVar8 & 1) != 0) {
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
              puVar15 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_025821d0;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar15 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar6,0);
LAB_025821d0:
        uVar8 = (*(code *)*puVar15)(plVar10,puVar15[1]);
        if ((uVar8 & 1) != 0) {
          lVar7 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar8 != 0) {
            piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                puVar15 = (undefined8 *)(lVar7 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                goto LAB_02582230;
              }
              uVar8 = uVar8 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar8 != 0);
          }
          puVar15 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar6,4);
LAB_02582230:
          (*(code *)*puVar15)(plVar10,param_1,param_2,param_3,param_4,puVar15[1]);
        }
      }
    }
    FUN_012b8948(&stack0x000000a0,*puVar12);
  }
LAB_02582634:
  if (DAT_0377a0ef == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ef = '\x01';
  }
  uVar8 = FUN_017bc96c(uVar18,**(undefined8 **)
                                (*(long *)
                                  Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                + 0xb8),0);
  if ((uVar8 & 1) != 0) {
    FUN_0265dab4(uVar18,0);
  }
  *(undefined1 *)(param_1 + 0x27c) = 0;
  return;
}


