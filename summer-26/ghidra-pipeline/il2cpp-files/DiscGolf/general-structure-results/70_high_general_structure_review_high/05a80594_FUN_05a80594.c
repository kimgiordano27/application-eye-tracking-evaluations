/*
FUNCTION_NAME: FUN_05a80594
ENTRY_POINT: 05a80594
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_05a80594(long param_1,long param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
                    /* try { // try from 05a805a4 to 05b80667 has its CatchHandler @ 05a8041c */
  if ((DAT_06dc1c01 & 1) == 0) {
    FUN_02d965b8(TMPro_TMP_InputField_OnValidateInput_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<InternedString,_Type>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<long,_TMP_FontAsset>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<long,_FontAsset>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<IntPtr,_CAPI_AppPoseNodeCallback>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<InternedString,_InternedString>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<InternedString,_InternedString[]>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<long,_ScheduledInvocation>_TypeInfo);
    FUN_02d965b8(System_Threading_Tasks_TaskToApm_TaskWrapperAsyncResult_TypeInfo);
    FUN_02d965b8(Assets_Scripts_Menu_TeamSeriesPane_<UpdateRect>d__6_TypeInfo);
    DAT_06dc1c01 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  if (param_3 == (long *)0x0) goto LAB_05a81108;
  lVar8 = (**(code **)(*param_3 + 0x208))(param_3,*(undefined8 *)(*param_3 + 0x210));
                    /* try { // try from 05a80668 to 05b8066b has its CatchHandler @ 05a8067c */
                    /* try { // try from 05a8066c to 05b80697 has its CatchHandler @ 05a8041c */
  iVar5 = (**(code **)(*param_3 + 0x198))(param_3,*(undefined8 *)(*param_3 + 0x1a0));
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05a80574 with catch @ 05a8067c
                       catch(type#1 @ 066567d8) { ... } // from try @ 05a80668 with catch @ 05a8067c
                        */
  if (iVar5 < 10) {
    if (iVar5 < 5) {
      if (iVar5 == 1) {
        uStack_68 = *(undefined8 *)(param_1 + 0x18);
        local_70 = *(undefined8 *)(param_1 + 0x10);
        uVar9 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
        lVar12 = FUN_05a81500(&local_70,uVar9);
        uVar9 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
        if (lVar12 == 0) goto LAB_05a81108;
        uVar9 = FUN_05a8154c(lVar12,uVar9);
        lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                     System_Collections_Generic_Dictionary<InternedString,_InternedString>_TypeInfo
                                   );
        FUN_05a815a8(lVar12,uVar9);
        plVar19 = (long *)(param_1 + 0x40);
        if ((*plVar19 != 0) && (uVar13 = FUN_0536ba54(*plVar19,lVar8,0), (uVar13 & 1) != 0)) {
          if (lVar12 == 0) goto LAB_05a81108;
          FUN_05a817f0(lVar12,lVar8);
        }
        puVar2 = TMPro_TMP_InputField_OnValidateInput_TypeInfo;
        plVar21 = *(long **)(param_1 + 0x30);
        if (plVar21 != (long *)0x0) {
          lVar16 = *plVar21;
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar13 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)TMPro_TMP_InputField_OnValidateInput_TypeInfo)
              {
                puVar14 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_05a80c98;
              }
              uVar13 = uVar13 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)
                    FUN_02dd004c(plVar21,*(long *)TMPro_TMP_InputField_OnValidateInput_TypeInfo,0);
LAB_05a80c98:
          uVar13 = (*(code *)*puVar14)(plVar21,puVar14[1]);
          if ((uVar13 & 1) != 0) {
            plVar21 = *(long **)(param_1 + 0x30);
            if (plVar21 == (long *)0x0) goto LAB_05a81108;
            lVar17 = *plVar21;
            lVar16 = *(long *)puVar2;
            uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar13 != 0) {
              piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == lVar16) {
                  puVar14 = (undefined8 *)(lVar17 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_05a80d58;
                }
                uVar13 = uVar13 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar13 != 0);
            }
            puVar14 = (undefined8 *)FUN_02dd004c(plVar21,lVar16,1);
LAB_05a80d58:
            uVar6 = (*(code *)*puVar14)(plVar21,puVar14[1]);
            plVar21 = *(long **)(param_1 + 0x30);
            if (plVar21 == (long *)0x0) goto LAB_05a81108;
            lVar17 = *plVar21;
            lVar16 = *(long *)puVar2;
            uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar13 != 0) {
              piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == lVar16) {
                  puVar14 = (undefined8 *)(lVar17 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                  goto LAB_05a80dc0;
                }
                uVar13 = uVar13 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar13 != 0);
            }
            puVar14 = (undefined8 *)FUN_02dd004c(plVar21,lVar16,2);
LAB_05a80dc0:
            uVar7 = (*(code *)*puVar14)(plVar21,puVar14[1]);
            if (lVar12 == 0) goto LAB_05a81108;
            FUN_05a81868(lVar12,uVar6,uVar7);
          }
        }
        uVar13 = (**(code **)(*param_3 + 0x418))(param_3,*(undefined8 *)(*param_3 + 0x420));
        puVar4 = TMPro_TMP_InputField_OnValidateInput_TypeInfo;
        puVar3 = System_Collections_Generic_Dictionary<InternedString,_Type>_TypeInfo;
        puVar2 = PTR_DAT_069fb9c0;
        if ((uVar13 & 1) != 0) {
          do {
            uStack_68 = *(undefined8 *)(param_1 + 0x28);
            local_70 = *(undefined8 *)(param_1 + 0x20);
            lVar16 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
            if (lVar16 == 0) goto LAB_05a81108;
            if (*(int *)(lVar16 + 0x10) == 0) {
              uVar9 = **(undefined8 **)(*(long *)(puVar2 + 0x90) + 0xb8);
            }
            else {
              uVar9 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
            }
            lVar16 = FUN_05a81500(&local_70,uVar9);
            uVar9 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
            if (lVar16 == 0) goto LAB_05a81108;
            uVar9 = FUN_05a8154c(lVar16,uVar9);
            uVar15 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
            lVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
            FUN_05a7d38c(lVar16,uVar9,uVar15);
            plVar21 = *(long **)(param_1 + 0x30);
            if (plVar21 != (long *)0x0) {
              lVar17 = *plVar21;
              uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar13 != 0) {
                piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                    puVar14 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_05a80f0c;
                  }
                  uVar13 = uVar13 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar13 != 0);
              }
              puVar14 = (undefined8 *)FUN_02dd004c(plVar21,*(long *)puVar4,0);
LAB_05a80f0c:
              uVar13 = (*(code *)*puVar14)(plVar21,puVar14[1]);
              if ((uVar13 & 1) != 0) {
                plVar21 = *(long **)(param_1 + 0x30);
                if (plVar21 == (long *)0x0) goto LAB_05a81108;
                lVar17 = *plVar21;
                uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar13 != 0) {
                  piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                      puVar14 = (undefined8 *)(lVar17 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                      goto LAB_05a80f74;
                    }
                    uVar13 = uVar13 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar13 != 0);
                }
                puVar14 = (undefined8 *)FUN_02dd004c(plVar21,*(long *)puVar4,1);
LAB_05a80f74:
                uVar6 = (*(code *)*puVar14)(plVar21,puVar14[1]);
                plVar21 = *(long **)(param_1 + 0x30);
                if (plVar21 == (long *)0x0) goto LAB_05a81108;
                lVar17 = *plVar21;
                uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar13 != 0) {
                  piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                      puVar14 = (undefined8 *)(lVar17 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                      goto LAB_05a80fdc;
                    }
                    uVar13 = uVar13 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar13 != 0);
                }
                puVar14 = (undefined8 *)FUN_02dd004c(plVar21,*(long *)puVar4,2);
LAB_05a80fdc:
                uVar7 = (*(code *)*puVar14)(plVar21,puVar14[1]);
                if (lVar16 == 0) goto LAB_05a81108;
                FUN_05a81868(lVar16,uVar6,uVar7);
              }
            }
            if (lVar12 == 0) goto LAB_05a81108;
            FUN_05a81624(lVar12,lVar16);
            uVar13 = (**(code **)(*param_3 + 0x428))(param_3,*(undefined8 *)(*param_3 + 0x430));
          } while ((uVar13 & 1) != 0);
          (**(code **)(*param_3 + 0x438))(param_3,*(undefined8 *)(*param_3 + 0x440));
        }
        plVar21 = (long *)(param_1 + 0x38);
        if (*plVar21 == 0) goto LAB_05a81108;
        FUN_05a7f54c(*plVar21,lVar12);
        uVar13 = (**(code **)(*param_3 + 0x218))(param_3,*(undefined8 *)(*param_3 + 0x220));
        if ((uVar13 & 1) != 0) {
          return 1;
        }
        *plVar21 = lVar12;
        LeanTween__value(plVar21,lVar12);
        if (*plVar19 == 0) {
          return 1;
        }
        *plVar19 = lVar8;
        goto LAB_05a81084;
      }
      if (iVar5 == 3) goto System_Xml_XmlUtf8RawTextWriter__WriteProcessingInstruction;
                    /* try { // try from 05a80698 to 05b8069b has its CatchHandler @ 05a806a4 */
      if (iVar5 != 4) goto LAB_05a81154;
                    /* catch() { ... } // from try @ 05a80698 with catch @ 05a806a4 */
                    /* try { // try from 05a806a8 to 05b806af has its CatchHandler @ 05a806b8 */
      uVar9 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
      puVar14 = (undefined8 *)System_Collections_Generic_Dictionary<long,_TMP_FontAsset>_TypeInfo;
                    /* try { // try from 05a806b0 to 05b806bb has its CatchHandler @ 05a8041c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05a806a8 with catch @ 05a806b8
                        */
LAB_05a80abc:
      lVar12 = thunk_FUN_02dd3144(*puVar14);
      FUN_05a7e1f0(lVar12,uVar9);
    }
    else {
      if (iVar5 == 5) {
        uVar13 = (**(code **)(*param_3 + 0x4c8))(param_3,*(undefined8 *)(*param_3 + 0x4d0));
        if ((uVar13 & 1) != 0) {
          (**(code **)(*param_3 + 0x4d8))(param_3,*(undefined8 *)(*param_3 + 0x4e0));
          return 1;
        }
        thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
        uVar9 = thunk_FUN_02dd3144();
        uVar15 = thunk_FUN_02dfd288(
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Allocation>_SetResult__
                                   );
        FUN_054e8008(uVar9,uVar15,0);
        uVar15 = thunk_FUN_02dfd288(
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_Start<AsyncProtocolRequest_<StartOperation>d__23>__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar9,uVar15);
      }
      if (iVar5 == 7) {
        uVar9 = (**(code **)(*param_3 + 0x1a8))(param_3,*(undefined8 *)(*param_3 + 0x1b0));
        uVar15 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
        lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                     System_Collections_Generic_Dictionary<InternedString,_InternedString[]>_TypeInfo
                                   );
        FUN_05a81694(lVar12,uVar9,uVar15);
      }
      else {
        if (iVar5 != 8) goto LAB_05a81154;
        uVar9 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
        lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                     System_Collections_Generic_Dictionary<long,_FontAsset>_TypeInfo
                                   );
        FUN_05a7e3b8(lVar12,uVar9);
      }
    }
joined_r0x05a80898:
    if (lVar12 == 0) {
      return 1;
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar13 = FUN_0536ba54(*(long *)(param_1 + 0x40),lVar8,0), (uVar13 & 1) != 0)) {
      FUN_05a817f0(lVar12,lVar8);
    }
    puVar2 = TMPro_TMP_InputField_OnValidateInput_TypeInfo;
    plVar19 = *(long **)(param_1 + 0x30);
    if (plVar19 != (long *)0x0) {
      lVar8 = *plVar19;
      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar13 != 0) {
        piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)TMPro_TMP_InputField_OnValidateInput_TypeInfo) {
            puVar14 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_05a80b84;
          }
          uVar13 = uVar13 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)
                FUN_02dd004c(plVar19,*(long *)TMPro_TMP_InputField_OnValidateInput_TypeInfo,0);
LAB_05a80b84:
      uVar13 = (*(code *)*puVar14)(plVar19,puVar14[1]);
      if ((uVar13 & 1) != 0) {
        plVar19 = *(long **)(param_1 + 0x30);
        if (plVar19 == (long *)0x0) goto LAB_05a81108;
        lVar16 = *plVar19;
        lVar8 = *(long *)puVar2;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar8) {
              puVar14 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_05a80bf4;
            }
            uVar13 = uVar13 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar13 != 0);
        }
        puVar14 = (undefined8 *)FUN_02dd004c(plVar19,lVar8,1);
LAB_05a80bf4:
        uVar6 = (*(code *)*puVar14)(plVar19,puVar14[1]);
        plVar19 = *(long **)(param_1 + 0x30);
        if (plVar19 == (long *)0x0) goto LAB_05a81108;
        lVar16 = *plVar19;
        lVar8 = *(long *)puVar2;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar8) {
              puVar14 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
              goto LAB_05a80c5c;
            }
            uVar13 = uVar13 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar13 != 0);
        }
        puVar14 = (undefined8 *)FUN_02dd004c(plVar19,lVar8,2);
LAB_05a80c5c:
        uVar7 = (*(code *)*puVar14)(plVar19,puVar14[1]);
        FUN_05a81868(lVar12,uVar6,uVar7);
      }
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_05a7f54c(*(long *)(param_1 + 0x38),lVar12);
      return 1;
    }
    goto LAB_05a81108;
  }
                    /* try { // try from 05a806bc to 05b8077f has its CatchHandler @ 05a806bc
                       catch() { ... } // from try @ 05a806bc with catch @ 05a806bc
                       catch() { ... } // from try @ 05a80814 with catch @ 05a806bc
                       catch() { ... } // from try @ 05a808c0 with catch @ 05a806bc
                       catch() { ... } // from try @ 05a80900 with catch @ 05a806bc */
  if (iVar5 < 0xf) {
    if (1 < iVar5 - 0xdU) {
      if (iVar5 != 10) goto LAB_05a81154;
      uVar9 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
      uVar15 = (**(code **)(*param_3 + 0x3b8))
                         (param_3,*(undefined8 *)
                                   System_Threading_Tasks_TaskToApm_TaskWrapperAsyncResult_TypeInfo,
                          *(undefined8 *)(*param_3 + 0x3c0));
      uVar10 = (**(code **)(*param_3 + 0x3b8))
                         (param_3,*(undefined8 *)
                                   Assets_Scripts_Menu_TeamSeriesPane_<UpdateRect>d__6_TypeInfo,
                          *(undefined8 *)(*param_3 + 0x3c0));
      uVar11 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
      lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   System_Collections_Generic_Dictionary<IntPtr,_CAPI_AppPoseNodeCallback>_TypeInfo
                                 );
      FUN_05a8172c(lVar12,uVar9,uVar15,uVar10,uVar11);
      goto joined_r0x05a80898;
    }
System_Xml_XmlUtf8RawTextWriter__WriteProcessingInstruction:
    if ((*(long *)(param_1 + 0x40) == 0) ||
       (uVar13 = FUN_0536ba54(*(long *)(param_1 + 0x40),lVar8,0), (uVar13 & 1) == 0)) {
      plVar19 = *(long **)(param_1 + 0x30);
      if (plVar19 != (long *)0x0) {
        lVar12 = *plVar19;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)TMPro_TMP_InputField_OnValidateInput_TypeInfo) {
              puVar14 = (undefined8 *)(lVar12 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05a80a94;
            }
            uVar13 = uVar13 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar13 != 0);
        }
        puVar14 = (undefined8 *)
                  FUN_02dd004c(plVar19,*(long *)TMPro_TMP_InputField_OnValidateInput_TypeInfo,0);
LAB_05a80a94:
        uVar13 = (*(code *)*puVar14)(plVar19,puVar14[1]);
        if ((uVar13 & 1) != 0) goto LAB_05a80aa4;
      }
      lVar8 = *(long *)(param_1 + 0x38);
      uVar9 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
      if (lVar8 != 0) {
        FUN_05a7f5cc(lVar8,uVar9);
        return 1;
      }
      goto LAB_05a81108;
    }
LAB_05a80aa4:
    uVar9 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
    puVar14 = (undefined8 *)
              System_Collections_Generic_Dictionary<long,_ScheduledInvocation>_TypeInfo;
    goto LAB_05a80abc;
  }
  if (iVar5 != 0xf) {
    if (iVar5 == 0x10) {
      return 1;
    }
LAB_05a81154:
    FUN_02979e58(param_3);
    local_74 = (**(code **)(*param_3 + 0x198))(param_3,*(undefined8 *)(*param_3 + 0x1a0));
    uVar9 = thunk_FUN_02dfd288(
                              System_Collections_Generic_Dictionary<OvrAvatarEntity,_RemoteLoopbackManagerBase_LoopbackState>_TypeInfo
                              );
    uVar9 = thunk_FUN_02dd2d7c(uVar9,&local_74);
    uVar15 = thunk_FUN_02dfd288(
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Allocation>_get_Task__
                               );
    uVar9 = FUN_05a7d21c(uVar15,uVar9);
    thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
    uVar15 = thunk_FUN_02dd3144();
                    /* try { // try from 05a811b8 to 05b811e7 has its CatchHandler @ 05a812d8 */
    FUN_054e8008(uVar15,uVar9,0);
    uVar9 = thunk_FUN_02dfd288(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_Start<AsyncProtocolRequest_<StartOperation>d__23>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar15,uVar9);
  }
  plVar19 = (long *)(param_1 + 0x38);
  plVar21 = (long *)*plVar19;
  if (plVar21 == (long *)0x0) goto LAB_05a81108;
  if (plVar21[5] == 0) {
    plVar21[5] = **(long **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
    LeanTween__value();
    plVar21 = (long *)*plVar19;
    if (plVar21 != (long *)0x0) goto LAB_05a808dc;
    lVar8 = 0;
  }
  else {
LAB_05a808dc:
    puVar2 = TMPro_TMP_InputField_OnValidateInput_TypeInfo;
    bVar1 = *(byte *)(*(long *)
                       System_Collections_Generic_Dictionary<InternedString,_InternedString>_TypeInfo
                     + 0x130);
    if (((bVar1 <= *(byte *)(*plVar21 + 0x130)) &&
        (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) ==
         *(long *)System_Collections_Generic_Dictionary<InternedString,_InternedString>_TypeInfo))
       && (plVar20 = *(long **)(param_1 + 0x30), plVar20 != (long *)0x0)) {
      lVar8 = *plVar20;
      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar13 != 0) {
        piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)TMPro_TMP_InputField_OnValidateInput_TypeInfo) {
            puVar14 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
            goto System_Xml_XmlUtf8RawTextWriter__WriteSurrogateCharEntity;
          }
          uVar13 = uVar13 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)
                FUN_02dd004c(plVar20,*(long *)TMPro_TMP_InputField_OnValidateInput_TypeInfo,0);
System_Xml_XmlUtf8RawTextWriter__WriteSurrogateCharEntity:
      uVar13 = (*(code *)*puVar14)(plVar20,puVar14[1]);
      if ((uVar13 & 1) != 0) {
        if ((*(long *)(param_1 + 0x30) == 0) ||
           (uVar6 = FUN_0297bd6c(1,*(undefined8 *)puVar2), *(long *)(param_1 + 0x30) == 0))
        goto LAB_05a81108;
        uVar7 = FUN_0297bd6c(2,*(undefined8 *)puVar2);
        FUN_05a818d8(plVar21,uVar6,uVar7);
      }
    }
    lVar8 = *plVar19;
  }
  if (lVar8 == param_2) {
    return 0;
  }
  plVar21 = (long *)(param_1 + 0x40);
  if (*plVar21 != 0) {
    if (lVar8 == 0) goto LAB_05a81108;
    uVar13 = FUN_05a81948();
    lVar8 = *plVar19;
    if ((uVar13 & 1) != 0) {
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x10) == 0)) goto LAB_05a81108;
      lVar8 = FUN_05a8199c();
      *plVar21 = lVar8;
      LeanTween__value(plVar21,lVar8);
      lVar8 = *plVar19;
    }
  }
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x10);
    *plVar19 = lVar8;
LAB_05a81084:
    LeanTween__value(plVar19,lVar8);
    return 1;
  }
LAB_05a81108:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


