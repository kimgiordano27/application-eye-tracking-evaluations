/*
FUNCTION_NAME: FUN_025818d8
ENTRY_POINT: 025818d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
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

void FUN_025818d8(long param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  int *piVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  
  puVar5 = Method_UnityEngine_GameObject_AddComponent<RawImage>__;
  if ((DAT_03782ec4 & 1) == 0) {
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
    DAT_03782ec4 = 1;
  }
  uStack_d8 = 0;
  local_d0 = 0;
  local_e0 = 0;
  *(undefined1 *)(param_1 + 0x27c) = 1;
  lVar9 = *(long *)puVar5;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar9 = *(long *)puVar5;
  }
  uVar20 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (DAT_0377a0ed == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ed = '\x01';
  }
  uVar10 = FUN_017bc96c(uVar20,**(undefined8 **)
                                 (*(long *)
                                   Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                 + 0xb8),0);
  if ((uVar10 & 1) != 0) {
    FUN_0265d9e8(uVar20,0);
  }
  uVar10 = FUN_0257ab78(param_1);
  puVar8 = Method_OVRPlugin_<>c_<_cctor>b__796_80__;
  puVar6 = 
  Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
  ;
  puVar14 = (undefined8 *)PTR_DAT_033f4dd0;
  puVar5 = PTR_DAT_033f4c58;
  if (*(long *)(param_1 + 600) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar9 = *(long *)(*(long *)(param_1 + 600) + 0x10);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(param_1 + 0x260) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar18 = *(long *)(*(long *)(param_1 + 0x260) + 0x10);
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar1 = *(int *)(lVar9 + 0x18);
  iVar2 = *(int *)(lVar18 + 0x18);
  if (*(char *)(param_1 + 0x270) == '\0') {
    lVar9 = *(long *)(param_1 + 0x268);
    plVar12 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
    if ((lVar9 != 0) && (0 < *(int *)(lVar9 + 0x18))) {
      if ((uVar10 & 1) != 0) {
        FUN_01323390(lVar9,&local_a0,*(undefined8 *)StringLiteral_4984);
        uStack_d8 = CONCAT44(uStack_94,uStack_98);
        local_d0 = CONCAT44(uStack_8c,local_90);
        local_e0 = local_a0;
        while (uVar11 = FUN_012b894c(&local_e0,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
          plVar12 = (long *)FUN_00cc3d7c(&local_e0,*(undefined8 *)puVar5);
          uVar21 = *(undefined8 *)((long)param_3 + 0x14);
          uVar22 = *param_3;
          uStack_b0 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
          uVar29 = uStack_b0;
          uStack_b8 = (undefined4)param_3[1];
          uVar23 = uStack_b8;
          uStack_b4 = (undefined4)((ulong)param_3[1] >> 0x20);
          uVar26 = uStack_b4;
          local_c0 = uVar22;
          uStack_ac = uVar21;
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar27 = param_4[1];
          uVar24 = param_4[2];
          uVar25 = *param_4;
          lVar9 = *plVar12;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar11 != 0) {
            piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar8) {
                puVar17 = (undefined8 *)(lVar9 + (long)(*piVar19 + 3) * 0x10 + 0x138);
                goto LAB_02581c9c;
              }
              uVar11 = uVar11 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar11 != 0);
          }
          puVar17 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,3);
LAB_02581c9c:
          uStack_98 = uVar23;
          uStack_8c = (undefined4)uVar21;
          uStack_88 = (undefined4)((ulong)uVar21 >> 0x20);
          uStack_94 = uVar26;
          local_90 = uVar29;
          local_a0 = uVar22;
          (*(code *)*puVar17)(uVar25,uVar27,uVar24,plVar12,param_1,&local_a0,puVar17[1]);
        }
        FUN_012b8948(&local_e0,*puVar14);
      }
      lVar9 = *(long *)(param_1 + 0x268);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar18 = *(long *)
                Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_AddListValue__;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      uVar11 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 200));
      if ((uVar11 & 1) == 0) goto LAB_02581f48;
      iVar3 = *(int *)(lVar9 + 0x18);
      *(undefined4 *)(lVar9 + 0x18) = 0;
      plVar12 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
      if (0 < iVar3) {
        FUN_0179519c(*(undefined8 *)(lVar9 + 0x10),0,iVar3,0);
        plVar12 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
      }
    }
  }
  else {
    if ((uVar10 & 1) != 0) {
      if (0 < iVar1) {
        FUN_01323390(lVar9,&local_a0,*(undefined8 *)StringLiteral_4984);
        uStack_d8 = CONCAT44(uStack_94,uStack_98);
        local_d0 = CONCAT44(uStack_8c,local_90);
        local_e0 = local_a0;
        while (uVar11 = FUN_012b894c(&local_e0,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
          plVar12 = (long *)FUN_00cc3d7c(&local_e0,*(undefined8 *)puVar5);
          plVar13 = *(long **)(param_1 + 600);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar11 = (**(code **)(*plVar13 + 0x188))(plVar13,plVar12,*(undefined8 *)(*plVar13 + 400));
          if ((uVar11 & 1) != 0) {
            uVar21 = *(undefined8 *)((long)param_3 + 0x14);
            local_a0 = *param_3;
            uStack_8c = (undefined4)uVar21;
            uStack_88 = (undefined4)((ulong)uVar21 >> 0x20);
            local_90 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
            uStack_98 = (undefined4)param_3[1];
            uStack_94 = (undefined4)((ulong)param_3[1] >> 0x20);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar26 = param_4[1];
            uVar23 = param_4[2];
            uVar29 = *param_4;
            uStack_f4 = uStack_94;
            uStack_f0 = local_90;
            lVar9 = *plVar12;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
            local_100 = local_a0;
            uStack_f8 = uStack_98;
            uStack_ec = uVar21;
            if (uVar11 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar8) {
                  puVar14 = (undefined8 *)(lVar9 + (long)(*piVar19 + 3) * 0x10 + 0x138);
                  goto LAB_02581b8c;
                }
                uVar11 = uVar11 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar11 != 0);
            }
            puVar14 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,3);
LAB_02581b8c:
            uStack_b8 = uStack_f8;
            local_c0 = local_100;
            uStack_ac = uStack_ec;
            uStack_b4 = uStack_f4;
            uStack_b0 = uStack_f0;
            (*(code *)*puVar14)(uVar29,uVar26,uVar23,plVar12,param_1,&local_c0,puVar14[1]);
          }
        }
        FUN_012b8948(&local_e0,*(undefined8 *)PTR_DAT_033f4dd0);
      }
      if (0 < iVar2) {
        if (*(long *)(param_1 + 0x260) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar9 = *(long *)(*(long *)(param_1 + 0x260) + 0x10);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01323390(lVar9,&local_a0,*(undefined8 *)StringLiteral_4984);
        uStack_d8 = CONCAT44(uStack_94,uStack_98);
        local_d0 = CONCAT44(uStack_8c,local_90);
        local_e0 = local_a0;
        while (uVar11 = FUN_012b894c(&local_e0,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
          plVar12 = (long *)FUN_00cc3d7c(&local_e0,*(undefined8 *)puVar5);
          plVar13 = *(long **)(param_1 + 0x260);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar11 = (**(code **)(*plVar13 + 0x188))(plVar13,plVar12,*(undefined8 *)(*plVar13 + 400));
          if ((uVar11 & 1) != 0) {
            uVar21 = *param_3;
            uStack_10c = (undefined4)*(undefined8 *)((long)param_3 + 0x14);
            uVar24 = uStack_10c;
            uStack_108 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0x14) >> 0x20);
            uVar27 = uStack_108;
            uStack_110 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
            uVar29 = uStack_110;
            uStack_118 = (undefined4)param_3[1];
            uVar23 = uStack_118;
            local_114 = (undefined4)((ulong)param_3[1] >> 0x20);
            uVar26 = local_114;
            uStack_120 = uVar21;
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar28 = param_4[1];
            uVar25 = param_4[2];
            uVar30 = *param_4;
            lVar9 = *plVar12;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar11 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar8) {
                  puVar14 = (undefined8 *)(lVar9 + (long)(*piVar19 + 3) * 0x10 + 0x138);
                  goto LAB_02581df8;
                }
                uVar11 = uVar11 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar11 != 0);
            }
            puVar14 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,3);
LAB_02581df8:
            uStack_98 = uVar23;
            uStack_94 = uVar26;
            local_90 = uVar29;
            local_a0 = uVar21;
            uStack_8c = uVar24;
            uStack_88 = uVar27;
            (*(code *)*puVar14)(uVar30,uVar28,uVar25,plVar12,param_1,&local_a0,puVar14[1]);
          }
        }
        FUN_012b8948(&local_e0,*(undefined8 *)PTR_DAT_033f4dd0);
      }
    }
    puVar7 = Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_AddListValue__;
    puVar14 = (undefined8 *)PTR_DAT_033f4dd0;
    lVar9 = *(long *)(param_1 + 0x268);
    *(undefined1 *)(param_1 + 0x270) = 0;
    plVar12 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
    if (lVar9 != 0) {
      lVar18 = *(long *)puVar7;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      uVar11 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 200));
      if ((uVar11 & 1) == 0) {
LAB_02581f48:
        *(undefined4 *)(lVar9 + 0x18) = 0;
        plVar12 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
      }
      else {
        iVar3 = *(int *)(lVar9 + 0x18);
        *(undefined4 *)(lVar9 + 0x18) = 0;
        plVar12 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
        if (0 < iVar3) {
          FUN_0179519c(*(undefined8 *)(lVar9 + 0x10),0,iVar3,0);
          plVar12 = (long *)System_Collections_Generic_List<fsData>_TypeInfo;
        }
      }
    }
  }
  System_Collections_Generic_List<fsData>_TypeInfo = (undefined *)plVar12;
  if ((uVar10 & 1) == 0) {
    if (0 < iVar2) {
      if (*(long *)(param_1 + 0x260) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x260) + 0x10);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01323390(lVar9,&uStack_120,*(undefined8 *)StringLiteral_4984);
      uStack_d8 = CONCAT44(local_114,uStack_118);
      local_d0 = CONCAT44(uStack_10c,uStack_110);
      local_e0 = uStack_120;
      while (uVar10 = FUN_012b894c(&local_e0,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
        plVar13 = (long *)FUN_00cc3d7c(&local_e0,*(undefined8 *)puVar5);
        plVar15 = (long *)thunk_FUN_00d6225c(plVar13,*plVar12);
        if (plVar15 != (long *)0x0) {
          plVar16 = *(long **)(param_1 + 0x260);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar10 = (**(code **)(*plVar16 + 0x188))(plVar16,plVar13,*(undefined8 *)(*plVar16 + 400));
          if ((uVar10 & 1) != 0) {
            lVar9 = *plVar15;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar10 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *plVar12) {
                  puVar17 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                  goto UnityEngine_SystemInfo__get_supportsMultisampleAutoResolve;
                }
                uVar10 = uVar10 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar10 != 0);
            }
            puVar17 = (undefined8 *)FUN_00d59724(plVar15,*plVar12,0);
UnityEngine_SystemInfo__get_supportsMultisampleAutoResolve:
            uVar10 = (*(code *)*puVar17)(plVar15,puVar17[1]);
            if ((uVar10 & 1) != 0) {
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar9 = *plVar13;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar10 != 0) {
                piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)puVar8) {
                    puVar17 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                    goto FUN_025823ac;
                  }
                  uVar10 = uVar10 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar10 != 0);
              }
              puVar17 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar8,0);
FUN_025823ac:
              uVar10 = (*(code *)*puVar17)(plVar13,puVar17[1]);
              if ((uVar10 & 1) != 0) {
                lVar9 = *plVar13;
                uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
                if (uVar10 != 0) {
                  piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)puVar8) {
                      puVar17 = (undefined8 *)(lVar9 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                      goto LAB_0258240c;
                    }
                    uVar10 = uVar10 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar10 != 0);
                }
                puVar17 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar8,4);
LAB_0258240c:
                (*(code *)*puVar17)(plVar13,param_1,param_2,param_3,param_4,puVar17[1]);
              }
            }
          }
        }
      }
      FUN_012b8948(&local_e0,*puVar14);
    }
    if (0 < iVar1) {
      if (*(long *)(param_1 + 600) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar9 = *(long *)(*(long *)(param_1 + 600) + 0x10);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01323390(lVar9,&uStack_120,*(undefined8 *)StringLiteral_4984);
      uStack_d8 = CONCAT44(local_114,uStack_118);
      local_d0 = CONCAT44(uStack_10c,uStack_110);
      local_e0 = uStack_120;
      while (uVar10 = FUN_012b894c(&local_e0,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
        plVar13 = (long *)FUN_00cc3d7c(&local_e0,*(undefined8 *)puVar5);
        plVar15 = (long *)thunk_FUN_00d6225c(plVar13,*plVar12);
        if (plVar15 != (long *)0x0) {
          plVar16 = *(long **)(param_1 + 600);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar10 = (**(code **)(*plVar16 + 0x188))(plVar16,plVar13,*(undefined8 *)(*plVar16 + 400));
          if ((uVar10 & 1) != 0) {
            lVar9 = *plVar15;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar10 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *plVar12) {
                  puVar17 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_02582528;
                }
                uVar10 = uVar10 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar10 != 0);
            }
            puVar17 = (undefined8 *)FUN_00d59724(plVar15,*plVar12,0);
LAB_02582528:
            uVar10 = (*(code *)*puVar17)(plVar15,puVar17[1]);
            if ((uVar10 & 1) != 0) {
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar9 = *plVar13;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar10 != 0) {
                piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)puVar8) {
                    puVar17 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                    goto FUN_02582588;
                  }
                  uVar10 = uVar10 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar10 != 0);
              }
              puVar17 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar8,0);
FUN_02582588:
              uVar10 = (*(code *)*puVar17)(plVar13,puVar17[1]);
              if ((uVar10 & 1) != 0) {
                lVar9 = *plVar13;
                uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
                if (uVar10 != 0) {
                  piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)puVar8) {
                      puVar17 = (undefined8 *)(lVar9 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                      goto LAB_025825e8;
                    }
                    uVar10 = uVar10 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar10 != 0);
                }
                puVar17 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar8,4);
LAB_025825e8:
                (*(code *)*puVar17)(plVar13,param_1,param_2,param_3,param_4,puVar17[1]);
              }
            }
          }
        }
      }
      FUN_012b8948(&local_e0,*puVar14);
    }
    goto LAB_02582634;
  }
  if (iVar2 < 1) {
LAB_02581f80:
    bVar4 = false;
  }
  else {
    lVar9 = FUN_0257aad8(param_1);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((*(int *)(lVar9 + 0x18) < 2) && (uVar10 = FUN_02582b80(param_1), (uVar10 & 1) != 0))
    goto LAB_02581f80;
    if (*(long *)(param_1 + 0x260) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar9 = *(long *)(*(long *)(param_1 + 0x260) + 0x10);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01323390(lVar9,&uStack_120,*(undefined8 *)StringLiteral_4984);
    uStack_d8 = CONCAT44(local_114,uStack_118);
    local_d0 = CONCAT44(uStack_10c,uStack_110);
    bVar4 = false;
    local_e0 = uStack_120;
    while (uVar10 = FUN_012b894c(&local_e0,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
      plVar12 = (long *)FUN_00cc3d7c(&local_e0,*(undefined8 *)puVar5);
      plVar13 = *(long **)(param_1 + 0x260);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar10 = (**(code **)(*plVar13 + 0x188))(plVar13,plVar12,*(undefined8 *)(*plVar13 + 400));
      if ((uVar10 & 1) != 0) {
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar8) {
              puVar17 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_02582050;
            }
            uVar10 = uVar10 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar10 != 0);
        }
        puVar17 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,0);
LAB_02582050:
        uVar10 = (*(code *)*puVar17)(plVar12,puVar17[1]);
        if ((uVar10 & 1) != 0) {
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar10 != 0) {
            piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar8) {
                puVar17 = (undefined8 *)(lVar9 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                goto LAB_025820b0;
              }
              uVar10 = uVar10 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar10 != 0);
          }
          puVar17 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,4);
LAB_025820b0:
          bVar4 = true;
          (*(code *)*puVar17)(plVar12,param_1,param_2,param_3,param_4,puVar17[1]);
        }
      }
    }
    FUN_012b8948(&local_e0,*puVar14);
  }
  if ((0 < iVar1) && (!bVar4)) {
    if (*(long *)(param_1 + 600) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar9 = *(long *)(*(long *)(param_1 + 600) + 0x10);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01323390(lVar9,&uStack_120,*(undefined8 *)StringLiteral_4984);
    uStack_d8 = CONCAT44(local_114,uStack_118);
    local_d0 = CONCAT44(uStack_10c,uStack_110);
    local_e0 = uStack_120;
    while (uVar10 = FUN_012b894c(&local_e0,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
      plVar12 = (long *)FUN_00cc3d7c(&local_e0,*(undefined8 *)puVar5);
      plVar13 = *(long **)(param_1 + 600);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar10 = (**(code **)(*plVar13 + 0x188))(plVar13,plVar12,*(undefined8 *)(*plVar13 + 400));
      if ((uVar10 & 1) != 0) {
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar8) {
              puVar17 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_025821d0;
            }
            uVar10 = uVar10 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar10 != 0);
        }
        puVar17 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,0);
LAB_025821d0:
        uVar10 = (*(code *)*puVar17)(plVar12,puVar17[1]);
        if ((uVar10 & 1) != 0) {
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar10 != 0) {
            piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar8) {
                puVar17 = (undefined8 *)(lVar9 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                goto LAB_02582230;
              }
              uVar10 = uVar10 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar10 != 0);
          }
          puVar17 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,4);
LAB_02582230:
          (*(code *)*puVar17)(plVar12,param_1,param_2,param_3,param_4,puVar17[1]);
        }
      }
    }
    FUN_012b8948(&local_e0,*puVar14);
  }
LAB_02582634:
  if (DAT_0377a0ef == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ef = '\x01';
  }
  uVar10 = FUN_017bc96c(uVar20,**(undefined8 **)
                                 (*(long *)
                                   Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                 + 0xb8),0);
  if ((uVar10 & 1) != 0) {
    FUN_0265dab4(uVar20,0);
  }
  *(undefined1 *)(param_1 + 0x27c) = 0;
  return;
}


