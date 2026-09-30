/*
FUNCTION_NAME: Unity.Mathematics.math$$mul
ENTRY_POINT: 021364d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x02137534) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000524 : 0x02137058 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Unity_Mathematics_math__mul(void)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined *puVar14;
  byte bVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  char *pcVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint uVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  uint *puVar33;
  undefined8 *puVar34;
  long lVar35;
  byte *pbVar36;
  long lVar37;
  long lVar38;
  byte bVar39;
  uint uVar40;
  short sVar41;
  undefined2 *puVar42;
  int *piVar43;
  int *piVar44;
  uint uVar45;
  long unaff_x19;
  uint uVar46;
  long *__src;
  long unaff_x21;
  long lVar47;
  undefined8 uVar48;
  ulong uVar49;
  long in_stack_00000028;
  uint uStack00000000000000a8;
  uint uStack00000000000000ac;
  int iStack00000000000000dc;
  int *in_stack_000000f0;
  uint uStack0000000000000104;
  long lStack0000000000000108;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000004e0;
  long in_stack_000004e8;
  long in_stack_00000548;
  
  thunk_FUN_00d48444(Oculus_Platform_MessageWithBlockedUserList_TypeInfo);
  thunk_FUN_00d48444(SaveServerInterface_SaveArray_<>c_TypeInfo);
  thunk_FUN_00d48444(Method_System_ReadOnlySpan<ushort>__ctor__);
  thunk_FUN_00d48444(StringLiteral_657);
  thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleDataRef<InheritedData>_Release__);
  thunk_FUN_00d48444(StringLiteral_1805);
  *(undefined1 *)(unaff_x19 + 0x16e) = 1;
  if (*(int *)(*(long *)
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
              + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_021433cc(0);
  puVar14 = StringLiteral_11678;
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar37 = *(long *)(unaff_x21 + 0x28);
  lVar38 = *(long *)(unaff_x21 + 0x30);
  if (lVar38 == 0) {
    uStack00000000000000a8 = 0;
  }
  else {
    uStack00000000000000a8 = *(uint *)(lVar38 + 0x18);
  }
  if (lVar37 == 0) {
    uVar40 = 0;
  }
  else {
    uVar40 = *(uint *)(lVar37 + 0x18);
  }
  iVar6 = in_stack_000000f0[10];
  iVar8 = in_stack_000000f0[0xb];
  iVar7 = in_stack_000000f0[0xd];
  iVar9 = in_stack_000000f0[0xe];
  piVar43 = in_stack_000000f0 + 2;
  iVar11 = *piVar43;
  iVar10 = *in_stack_000000f0;
  piVar44 = in_stack_000000f0 + 1;
  iVar12 = *piVar44;
  FUN_021345a0(&stack0x00000450,iVar6 + 1,iVar8 + uVar40,iVar7 + uStack00000000000000a8);
  __src = (long *)(in_stack_000000f0 + 8);
  if (*__src != 0) {
    memcpy(&stack0x00000218,__src,0x80);
    FUN_021346c8(&stack0x00000450,&stack0x00000218);
  }
  memcpy(&stack0x000003e0,(void *)(unaff_x21 + 0x68),0x60);
  FUN_021174f8(&stack0x000001c0);
  lVar31 = *(long *)(unaff_x21 + 0x50);
  FUN_012f7864(&stack0x000003a0,2,0,*(undefined8 *)puVar14);
  if (0 < (int)uStack00000000000000a8) {
    if (lVar38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar49 = 0;
    uVar46 = 0xffffffff;
    lStack0000000000000108 = 0;
    plVar2 = (long *)(in_stack_000000f0 + 0x2c);
    uStack00000000000000ac = 0xffffffff;
    uStack0000000000000104 = 0xffffffff;
    do {
      if (*(uint *)(lVar38 + 0x18) <= uVar49) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar32 = lVar38 + uVar49 * 0x58;
      puVar33 = (uint *)(lVar32 + 0x58);
      uVar45 = *puVar33;
      puVar34 = (undefined8 *)(lVar32 + 0x20);
      uVar29 = (uint)((uVar45 & 4) == 0) & uVar45 >> 3;
      if ((uVar46 == 0xffffffff) && (uVar29 != 0)) {
        memmove(&stack0x000001c0,puVar34,0x58);
        uVar27 = thunk_FUN_00d48444(
                                   UnityEngine_UIElements_TextEditorEngine_OnDetectFocusChangeFunction_TypeInfo
                                   );
        uVar27 = thunk_FUN_00d61fa0(uVar27,&stack0x000001c0);
        uVar28 = thunk_FUN_00d48444(PTR_DAT_033f5488);
        uVar27 = FUN_015f6780(uVar28,uVar27,0);
        thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
        lVar37 = thunk_FUN_00d62348();
        if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_017713a8(lVar37,uVar27,0);
        uVar27 = thunk_FUN_00d48444(StringLiteral_4721);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(lVar37,uVar27);
      }
      lVar32 = lStack0000000000000108;
      uVar17 = uStack0000000000000104;
      if (uVar29 == 0) {
        if (lVar31 == 0) {
          uVar27 = *(undefined8 *)(lVar38 + uVar49 * 0x58 + 0x50);
          uVar24 = FUN_015ff8a0(uVar27,0);
          if ((uVar24 & 1) == 0) {
            uVar17 = FUN_0211c148(unaff_x21,uVar27,0);
            if (uVar17 != 0xffffffff) goto LAB_021367d8;
            lVar32 = 0;
          }
          else {
            lVar32 = 0;
            uVar17 = 0xffffffff;
          }
        }
        else {
          uVar17 = 0;
LAB_021367d8:
          if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar37 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar32 = *(long *)(lVar37 + (long)(int)uVar17 * 8 + 0x20);
        }
      }
      uVar4 = uVar45 & 4;
      uVar3 = iVar7 + (int)uVar49;
      lVar47 = *(long *)(lVar38 + uVar49 * 0x58 + 0x60);
      uVar5 = uVar3;
      uVar13 = uVar17;
      lVar35 = lVar32;
      if (uVar4 == 0) {
        uVar5 = uVar46;
        uVar13 = uStack0000000000000104;
        lVar35 = lStack0000000000000108;
      }
      if (lVar47 == 0) {
        lVar47 = *(long *)(lVar38 + uVar49 * 0x58 + 0x30);
      }
      uVar24 = FUN_015ff8a0(lVar47,0);
      if ((uVar24 & 1) != 0) {
        iStack00000000000000dc = 0;
        iVar21 = 0;
        iVar30 = 0;
        iVar19 = 0;
        iVar20 = -1;
        iVar18 = -1;
        lStack0000000000000108 = lVar35;
        uStack0000000000000104 = uVar13;
        uVar46 = uVar5;
        goto FUN_02136f4c;
      }
      bVar15 = lVar32 == 0;
      if ((uVar4 == 0) && (lVar32 != 0)) {
        lVar25 = *(long *)(*(long *)SaveServerInterface_SaveArray_<>c_TypeInfo + 0x20);
        if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
          lVar25 = FUN_00d5941c();
        }
        lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 8);
        if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
          lVar25 = FUN_00d5941c();
        }
        pcVar26 = (char *)thunk_FUN_00d32ed4(in_stack_000000f0 + 0x2e,*(undefined8 *)(lVar25 + 0x80)
                                            );
        if (*pcVar26 == '\0') {
LAB_02136968:
          lVar25 = *(long *)(*(long *)SaveServerInterface_SaveArray_<>c_TypeInfo + 0x20);
          if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
            lVar25 = FUN_00d5941c();
          }
          lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 8);
          if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
            lVar25 = FUN_00d5941c();
          }
          pcVar26 = (char *)thunk_FUN_00d32ed4(&stack0x000003e0,*(undefined8 *)(lVar25 + 0x80));
          if (*pcVar26 != '\0') {
            FUN_01347408(&stack0x000003e0,&stack0x000001c0,
                         *(undefined8 *)Method_System_ReadOnlySpan<ushort>__ctor__);
            memcpy(&stack0x00000340,&stack0x000001c0,0x58);
            uVar24 = FUN_02135538(&stack0x00000340,puVar34,1);
            if ((uVar24 & 1) == 0) goto LAB_02136a70;
          }
          lVar25 = *(long *)(*(long *)SaveServerInterface_SaveArray_<>c_TypeInfo + 0x20);
          if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
            lVar25 = FUN_00d5941c();
          }
          lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 8);
          if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
            lVar25 = FUN_00d5941c();
          }
          pcVar26 = (char *)thunk_FUN_00d32ed4(lVar32 + 0x50,*(undefined8 *)(lVar25 + 0x80));
          if (*pcVar26 == '\0') {
            bVar15 = 0;
          }
          else {
            FUN_01347408(lVar32 + 0x50,&stack0x000001c0,
                         *(undefined8 *)Method_System_ReadOnlySpan<ushort>__ctor__);
            memcpy(&stack0x00000340,&stack0x000001c0,0x58);
            bVar15 = FUN_02135538(&stack0x00000340,puVar34,1);
            bVar15 = bVar15 ^ 1;
          }
        }
        else {
          FUN_01347408(in_stack_000000f0 + 0x2e,&stack0x000001c0,
                       *(undefined8 *)Method_System_ReadOnlySpan<ushort>__ctor__);
          memcpy(&stack0x00000340,&stack0x000001c0,0x58);
          uVar24 = FUN_02135538(&stack0x00000340,puVar34,1);
          if ((uVar24 & 1) != 0) goto LAB_02136968;
LAB_02136a70:
          bVar15 = 1;
        }
      }
      if (uVar4 == 0 && (bVar15 & 1) == 0) {
        lVar25 = *(long *)(*(long *)Oculus_Platform_MessageWithBlockedUserList_TypeInfo + 0x20);
        iStack00000000000000dc = in_stack_000000f0[0xe];
        if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
          lVar25 = FUN_00d5941c();
        }
        lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 8);
        if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
          lVar25 = FUN_00d5941c();
        }
        pcVar26 = (char *)thunk_FUN_00d32ed4(&stack0x000003c0,*(undefined8 *)(lVar25 + 0x80));
        if (*pcVar26 != '\0') {
          FUN_01347408(&stack0x000003c0,&stack0x000004d8,*(undefined8 *)StringLiteral_657);
          iVar19 = 0;
          iVar30 = (int)((ulong)in_stack_000004e0 >> 0x20);
          if (0 < iVar30) {
            iVar21 = 0;
            iVar19 = 0;
            do {
              FUN_0138116c(&stack0x00000330,iVar21,&stack0x000004e8,
                           *(undefined8 *)StringLiteral_1805);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar24 = FUN_02140b48(in_stack_000004e8,0);
              if ((uVar24 & 1) != 0) {
                iVar18 = FUN_010f3330(in_stack_000004e8,lVar47,0,&stack0x000003a0,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<Hand,_Transform>_ContainsKey__
                                     );
                iVar19 = iVar18 + iVar19;
              }
              iVar21 = iVar21 + 1;
            } while (iVar21 < iVar30);
          }
          goto LAB_02136a94;
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        iVar19 = FUN_010f7c94(lVar47,&stack0x000003a0,*(undefined8 *)StringLiteral_8956);
        if ((bVar15 & 1) == 0) goto LAB_02136ca4;
LAB_02136a98:
        iVar30 = 0;
        iVar21 = 0;
        iVar18 = -1;
        iVar20 = -1;
        uStack0000000000000104 = uVar13;
        lStack0000000000000108 = lVar35;
        uVar46 = uVar5;
LAB_02136abc:
        if ((((iVar19 < 1) || (uVar4 != 0)) || ((uVar45 >> 3 & 1) == 0)) || (uVar46 == 0xffffffff))
        goto FUN_02136f4c;
        uVar24 = FUN_015ff8a0(*puVar34,0);
        if ((uVar24 & 1) != 0) {
          memmove(&stack0x000001c0,puVar34,0x58);
          uVar27 = thunk_FUN_00d48444(
                                     UnityEngine_UIElements_TextEditorEngine_OnDetectFocusChangeFunction_TypeInfo
                                     );
          uVar27 = thunk_FUN_00d61fa0(uVar27,&stack0x000001c0);
          lVar37 = *plVar2;
          if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (uStack00000000000000ac < *(uint *)(lVar37 + 0x18)) {
            uVar48 = *(undefined8 *)(lVar37 + (long)(int)uStack00000000000000ac * 8 + 0x20);
            uVar28 = thunk_FUN_00d48444(Method_Sirenix_Serialization_ProperBitConverter_GetBytes__);
            uVar27 = FUN_01600b5c(uVar28,uVar27,uVar48,0);
            thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
            lVar37 = thunk_FUN_00d62348();
            if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_017713a8(lVar37,uVar27,0);
            uVar27 = thunk_FUN_00d48444(StringLiteral_4721);
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(lVar37,uVar27);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar35 = *plVar2;
        if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar35 + 0x18) <= uStack00000000000000ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar16 = FUN_02137e10(*(undefined8 *)(lVar35 + (long)(int)uStack00000000000000ac * 8 + 0x20)
                              ,*puVar34,&stack0x0000044c);
        pbVar36 = (byte *)((long)(int)uVar46 * 0x20);
        FUN_02133e48(pbVar36,iVar19 + (uint)*pbVar36);
        uVar29 = (uint)*(ushort *)(pbVar36 + 6);
        if (uVar29 == 0xffff) {
          uVar29 = 0xffffffff;
        }
      }
      else {
        iVar19 = 0;
        iStack00000000000000dc = 0;
LAB_02136a94:
        if ((bVar15 & 1) != 0) goto LAB_02136a98;
LAB_02136ca4:
        lVar35 = *(long *)(lVar38 + uVar49 * 0x58 + 0x70);
        if (lVar35 == 0) {
          lVar35 = *(long *)(lVar38 + uVar49 * 0x58 + 0x40);
        }
        uVar24 = FUN_015ff8a0(lVar35,0);
        if ((uVar24 & 1) == 0) {
          iVar21 = FUN_010ef900(in_stack_000000f0,
                                **(undefined8 **)
                                  (*(long *)TunePrompt_<HideCoroutine>d__15_TypeInfo + 0xb8),lVar35,
                                in_stack_000000f0 + 0x2a,in_stack_000000f0,unaff_x21,puVar34,
                                *(undefined8 *)
                                 Method_UnityEngine_InputSystem_InputBindingComposite_GetDisplayFormatString__
                               );
          if (iVar21 == -1) {
            iVar30 = 0;
          }
          else {
            iVar30 = *in_stack_000000f0 - iVar21;
          }
        }
        else {
          iVar30 = 0;
          iVar21 = -1;
        }
        if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar24 = FUN_015ff8a0(*(undefined8 *)(lVar32 + 0x30),0);
        iVar18 = iVar21;
        if (((uVar24 & 1) == 0) &&
           (iVar20 = FUN_010ef900(in_stack_000000f0,
                                  **(undefined8 **)
                                    (*(long *)TunePrompt_<HideCoroutine>d__15_TypeInfo + 0xb8),
                                  *(undefined8 *)(lVar32 + 0x30),in_stack_000000f0 + 0x2a,
                                  in_stack_000000f0,unaff_x21,puVar34,
                                  *(undefined8 *)
                                   Method_UnityEngine_InputSystem_InputBindingComposite_GetDisplayFormatString__
                                 ), iVar20 != -1)) {
          iVar18 = iVar20;
          if (iVar21 != -1) {
            iVar18 = iVar21;
          }
          iVar30 = (iVar30 - iVar20) + *in_stack_000000f0;
        }
        lVar35 = *(long *)(lVar38 + uVar49 * 0x58 + 0x68);
        if (lVar35 == 0) {
          lVar35 = *(long *)(lVar38 + uVar49 * 0x58 + 0x38);
        }
        uVar24 = FUN_015ff8a0(lVar35,0);
        if ((uVar24 & 1) == 0) {
          iVar22 = FUN_010ef900(in_stack_000000f0,
                                **(undefined8 **)(*(long *)StringLiteral_3072 + 0xb8),lVar35,
                                in_stack_000000f0 + 0x28,piVar43,unaff_x21,puVar34,
                                *(undefined8 *)
                                 Method_UnityEngine_ProBuilder_MeshOperations_ElementSelection_<>c_<GetPerimeterFaces>b__7_0__
                               );
          if (iVar22 == -1) {
            iVar21 = 0;
          }
          else {
            iVar21 = *piVar43 - iVar22;
          }
        }
        else {
          iVar21 = 0;
          iVar22 = -1;
        }
        uVar24 = FUN_015ff8a0(*(undefined8 *)(lVar32 + 0x38),0);
        iVar20 = iVar22;
        if (((uVar24 & 1) == 0) &&
           (iVar23 = FUN_010ef900(in_stack_000000f0,
                                  **(undefined8 **)(*(long *)StringLiteral_3072 + 0xb8),
                                  *(undefined8 *)(lVar32 + 0x38),in_stack_000000f0 + 0x28,piVar43,
                                  unaff_x21,puVar34,
                                  *(undefined8 *)
                                   Method_UnityEngine_ProBuilder_MeshOperations_ElementSelection_<>c_<GetPerimeterFaces>b__7_0__
                                 ), iVar23 != -1)) {
          iVar20 = iVar23;
          if (iVar22 != -1) {
            iVar20 = iVar22;
          }
          iVar21 = (iVar21 - iVar23) + *piVar43;
        }
        if (uVar4 == 0) {
          if (uVar29 == 0 && uVar5 != 0xffffffff) {
            lStack0000000000000108 = 0;
            uVar46 = 0xffffffff;
            uStack0000000000000104 = 0xffffffff;
            uStack00000000000000ac = 0xffffffff;
            goto FUN_02136f4c;
          }
          goto LAB_02136abc;
        }
        uVar27 = FUN_02137b1c(puVar34,unaff_x21);
        uStack00000000000000ac =
             FUN_010b20b8(plVar2,piVar44,uVar27,10,*(undefined8 *)PTR_DAT_033f3320);
        iStack00000000000000dc = in_stack_000000f0[0xe];
        lStack0000000000000108 = lVar32;
        uStack0000000000000104 = uVar17;
        uVar46 = uVar3;
FUN_02136f4c:
        uVar29 = uVar17 + iVar8;
        if (uVar17 == 0xffffffff) {
          uVar29 = 0xffffffff;
        }
        uVar16 = 0xff;
      }
      FUN_02133da8(&stack0x00000520,iStack00000000000000dc);
      FUN_02133e48(&stack0x00000520,iVar19);
      FUN_02133ee0(&stack0x00000520,iVar20);
      FUN_02133f90(&stack0x00000520,iVar21);
      FUN_02134028(&stack0x00000520,iVar18);
      FUN_021340d8(&stack0x00000520,iVar30);
      bVar15 = 4;
      if (uVar4 == 0) {
        bVar15 = 0;
      }
      if ((*puVar33 & 8) != 0) {
        bVar15 = bVar15 | 8;
      }
      FUN_02134170(&stack0x00000520,uVar29);
      uVar29 = uStack00000000000000ac;
      if (uVar4 == 0) {
        uVar29 = uVar46;
      }
      FUN_021342b8(&stack0x00000520,uVar29);
      FUN_02134220(&stack0x00000520,in_stack_000000f0[10]);
      pbVar36 = (byte *)((ulong)&stack0x00000520 | 4);
      bVar39 = bVar15;
      if (lVar32 != 0) {
        uVar24 = FUN_02116724(lVar32,0);
        pbVar36 = &stack0x00000524;
        bVar39 = bVar15 | 0x20;
        if ((uVar24 & 1) == 0) {
          bVar39 = bVar15;
        }
      }
      *pbVar36 = bVar39;
      plVar1 = (long *)((long)(int)uVar3 * 0x20);
      plVar1[1] = 0;
      *plVar1 = (ulong)CONCAT11(uVar16,bVar15) << 0x20;
      plVar1[3] = 0;
      plVar1[2] = 0;
      uVar49 = uVar49 + 1;
    } while (uVar49 != uStack00000000000000a8);
  }
  if (in_stack_000000f0[2] == 0) {
    iVar19 = *piVar44;
    if ((iVar19 == 0) && (iVar19 = 0, in_stack_000000f0[0xe] == 0)) goto LAB_0213757c;
  }
  else {
    iVar19 = *piVar44;
  }
  FUN_021345a0(&stack0x000002b0,0,0,0,in_stack_000000f0[0xe],in_stack_000000f0[2],iVar19);
  memcpy(&stack0x00000140,&stack0x00000450,0x80);
  FUN_021346c8(&stack0x000002b0,&stack0x00000140);
  memcpy(&stack0x00000450,&stack0x000002b0,0x80);
LAB_0213757c:
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  FUN_010b1af8(in_stack_000000f0 + 6,&stack0x0000039c,&stack0x00000120,10,
               *(undefined8 *)
                Method_System_Collections_Generic_KeyValuePair<string,_fsData>_get_Value__);
  if (0 < (int)uStack00000000000000a8) {
    uVar49 = 0;
    do {
      iVar19 = iVar7 + (int)uVar49;
      pbVar36 = (byte *)((long)iVar19 * 0x20);
      uVar24 = (ulong)*pbVar36;
      if (uVar24 != 0) {
        piVar43 = (int *)((ulong)*(ushort *)(pbVar36 + 0xe) << 2);
        do {
          uVar24 = uVar24 - 1;
          *piVar43 = iVar19;
          piVar43 = piVar43 + 1;
        } while (uVar24 != 0);
      }
      uVar49 = uVar49 + 1;
    } while (uVar49 != uStack00000000000000a8);
  }
  lVar38 = (long)in_stack_000000f0[0xc];
  if (in_stack_000000f0[0xc] < 0) {
    puVar42 = (undefined2 *)(lVar38 * 0x30);
    do {
      lVar38 = lVar38 + 1;
      *(undefined1 *)(puVar42 + 1) = 1;
      *puVar42 = 0xffff;
      puVar42 = puVar42 + 0x18;
    } while (lVar38 < 0);
  }
  if (0 < (int)uVar40) {
    if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar46 = 0;
    iVar19 = in_stack_000000f0[0xd];
    do {
      if (*(uint *)(lVar37 + 0x18) <= uVar46) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar38 = *(long *)(lVar37 + (long)(int)uVar46 * 8 + 0x20);
      if (lVar38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar29 = uVar46 + iVar8;
      *(uint *)(lVar38 + 0xc0) = uVar29;
      *(short *)((long)(int)(uVar29 * 2) * 2) = (short)iVar19;
      if ((int)uStack00000000000000a8 < 1) {
        iVar30 = 0;
        sVar41 = 0;
        iVar21 = -1;
      }
      else {
        sVar41 = 0;
        iVar30 = 0;
        iVar21 = -1;
        uVar49 = (ulong)uStack00000000000000a8;
        iVar18 = iVar7;
        do {
          pbVar36 = (byte *)((long)iVar18 * 0x20);
          uVar45 = (uint)*(ushort *)(pbVar36 + 6);
          if (uVar45 == 0xffff) {
            uVar45 = 0xffffffff;
          }
          if ((uVar45 == uVar29) && ((pbVar36[4] >> 3 & 1) == 0)) {
            sVar41 = sVar41 + 1;
            iVar20 = iVar18;
            if (iVar21 != -1) {
              iVar20 = iVar21;
            }
            *(short *)((long)iVar19 * 2) = (short)iVar18;
            iVar19 = iVar19 + 1;
            iVar21 = iVar20;
            if ((pbVar36[4] >> 2 & 1) == 0) {
              iVar30 = iVar30 + (uint)*pbVar36;
            }
            else if (*pbVar36 != 0) {
              iVar30 = iVar30 + 1;
            }
          }
          uVar49 = uVar49 - 1;
          iVar18 = iVar18 + 1;
        } while (uVar49 != 0);
      }
      *(short *)((long)(int)(uVar29 * 2 | 1) * 2) = sVar41;
      iVar18 = *(int *)(lVar38 + 0x18);
      FUN_0212f1dc(&stack0x000004f0,iVar6);
      bVar15 = 2;
      if (iVar18 != 2) {
        bVar15 = 0;
      }
      bVar39 = bVar15 | 0x20;
      if (iVar18 != 1) {
        bVar39 = bVar15;
      }
      bVar15 = bVar39 | 4;
      if (iVar18 == 2 || iVar30 < 2) {
        bVar15 = bVar39;
      }
      iVar30 = 0;
      if (iVar21 != -1) {
        iVar30 = iVar21;
      }
      Unity_Mathematics_math__radians(&stack0x000004f0,iVar30);
      puVar34 = (undefined8 *)((long)(int)uVar29 * 0x30);
      puVar34[3] = 0xffff0000;
      puVar34[2] = 0;
      puVar34[5] = 0;
      puVar34[4] = 0;
      uVar46 = uVar46 + 1;
      puVar34[1] = 0;
      *puVar34 = CONCAT62(0xffff0000,(ushort)bVar15 << 8);
    } while (uVar46 != uVar40);
  }
  piVar43 = (int *)((long)iVar6 * 0x30);
  iVar19 = in_stack_000000f0[1];
  iVar30 = in_stack_000000f0[2];
  iVar21 = *in_stack_000000f0;
  *piVar43 = iVar8;
  piVar43[1] = uVar40;
  piVar43[2] = iVar9;
  piVar43[0xb] = iVar19 - iVar12;
  piVar43[3] = 0;
  piVar43[4] = iVar7;
  piVar43[7] = iVar30 - iVar11;
  piVar43[8] = iVar10;
  piVar43[9] = iVar21 - iVar10;
  piVar43[10] = iVar12;
  piVar43[5] = uStack00000000000000a8;
  piVar43[6] = iVar11;
  *(int *)(unaff_x21 + 0x58) = iVar6;
  FUN_010b20b8(in_stack_000000f0 + 4,&stack0x00000398,unaff_x21,4,
               *(undefined8 *)
                Method_Newtonsoft_Json_JsonValidatingReader_<>c_<ValidateEndObject>b__51_1__);
  if (*__src != 0) {
    FUN_0265eb58(*__src,4,0);
    in_stack_000000f0[0x26] = 0;
    in_stack_000000f0[0x27] = 0;
    in_stack_000000f0[0x18] = 0;
    in_stack_000000f0[0x19] = 0;
    in_stack_000000f0[0x12] = 0;
    in_stack_000000f0[0x13] = 0;
    in_stack_000000f0[0x10] = 0;
    in_stack_000000f0[0x11] = 0;
    in_stack_000000f0[0x16] = 0;
    in_stack_000000f0[0x17] = 0;
    in_stack_000000f0[0x14] = 0;
    in_stack_000000f0[0x15] = 0;
    in_stack_000000f0[10] = 0;
    in_stack_000000f0[0xb] = 0;
    *__src = 0;
    in_stack_000000f0[0xe] = 0;
    in_stack_000000f0[0xf] = 0;
    in_stack_000000f0[0xc] = 0;
    in_stack_000000f0[0xd] = 0;
    in_stack_000000f0[0x1e] = 0;
    in_stack_000000f0[0x1f] = 0;
    in_stack_000000f0[0x1c] = 0;
    in_stack_000000f0[0x1d] = 0;
    in_stack_000000f0[0x22] = 0;
    in_stack_000000f0[0x23] = 0;
    in_stack_000000f0[0x20] = 0;
    in_stack_000000f0[0x21] = 0;
  }
  memcpy(__src,&stack0x00000450,0x80);
  FUN_012f9414(&stack0x000003a0,*(undefined8 *)Sirenix_Serialization_Vector2Formatter_TypeInfo);
  if (*(long *)(in_stack_00000028 + 0x28) == in_stack_00000548) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


