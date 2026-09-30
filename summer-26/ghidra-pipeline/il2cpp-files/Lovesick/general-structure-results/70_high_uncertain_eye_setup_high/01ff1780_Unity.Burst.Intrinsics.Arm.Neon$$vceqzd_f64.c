/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vceqzd_f64
ENTRY_POINT: 01ff1780
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01ff23e0) */
/* WARNING: Removing unreachable block (ram,0x01ff234c) */
/* WARNING: Removing unreachable block (ram,0x01ff223c) */
/* WARNING: Removing unreachable block (ram,0x01ff2320) */
/* WARNING: Removing unreachable block (ram,0x01ff1db0) */
/* WARNING: Removing unreachable block (ram,0x01ff1db4) */
/* WARNING: Removing unreachable block (ram,0x01ff22f8) */

long * Unity_Burst_Intrinsics_Arm_Neon__vceqzd_f64(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long unaff_x19;
  undefined8 uVar20;
  long *unaff_x24;
  long lVar21;
  uint uVar22;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  char cStack000000000000003c;
  
  thunk_FUN_00d48444(PTR_DAT_033f1220);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovn_s32__);
  thunk_FUN_00d48444(System_Globalization_DateTimeFormatInfoScanner_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_10310);
  thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_Sort__
                    );
  thunk_FUN_00d48444(StringLiteral_11818);
  thunk_FUN_00d48444(StringLiteral_11665);
  thunk_FUN_00d48444(StringLiteral_3919);
  thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_InternalUtility_DemandComponent<ProBuilderMesh>__
                    );
  thunk_FUN_00d48444(System_Xml_Schema_XmlSchemaSimpleTypeList_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x818) = 1;
  cStack000000000000003c = '\0';
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar12 = (undefined8 *)
            Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
  plVar5 = (long *)FUN_01ff1698();
  puVar2 = StringLiteral_3919;
  if (plVar5 != (long *)0x0) {
    lVar6 = *(long *)StringLiteral_3919;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar2;
    }
    in_stack_00000028 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x78);
    in_stack_00000020 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x70);
    uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                               ,&stack0x00000020);
    lVar6 = *plVar5;
    uVar18 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) ==
            *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar19 * 0x10 + 0x138);
          goto Unity_Burst_Intrinsics_Arm_Neon__vcgeq_f64;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_00d59724(plVar5,*(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo,0)
    ;
Unity_Burst_Intrinsics_Arm_Neon__vcgeq_f64:
    uVar7 = (*(code *)*puVar8)(plVar5,uVar7,puVar8[1]);
    plVar9 = (long *)thunk_FUN_00d6225c(uVar7,*puVar12);
    if (plVar9 != (long *)0x0) {
      return plVar9;
    }
  }
  puVar2 = StringLiteral_3919;
  lVar6 = *(long *)StringLiteral_3919;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar2;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x48);
  thunk_FUN_00d8e500();
  puVar2 = StringLiteral_3919;
  if (lVar6 == 0) {
    lVar6 = *(long *)StringLiteral_3919;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar2;
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x88);
    cStack000000000000003c = '\0';
    FUN_017d75a8(uVar7,&stack0x0000003c,0);
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x48);
    thunk_FUN_00d8e500();
    puVar2 = StringLiteral_3919;
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f1220);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01747a0c(lVar6,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      thunk_FUN_00d8e500();
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) = lVar6;
    }
    if (cStack000000000000003c != '\0') {
      thunk_FUN_00d56f10(uVar7,0);
    }
  }
  if (unaff_x29 == 0) goto LAB_01ff232c;
  lVar6 = thunk_FUN_00d93c64();
  puVar2 = StringLiteral_3919;
  lVar17 = *(long *)StringLiteral_3919;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar17);
    lVar17 = *(long *)puVar2;
  }
  plVar9 = *(long **)(*(long *)(lVar17 + 0xb8) + 0x48);
  thunk_FUN_00d8e500();
  puVar3 = StringLiteral_11818;
  if (plVar9 == (long *)0x0) goto LAB_01ff232c;
  lVar17 = (**(code **)(*plVar9 + 0x308))(plVar9,lVar6,*(undefined8 *)(*plVar9 + 0x310));
  if (lVar17 == 0) {
    lVar17 = *(long *)puVar2;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar17 = *(long *)puVar2;
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x88);
    cStack000000000000003c = '\0';
    FUN_017d75a8(uVar7,&stack0x0000003c,0);
    lVar17 = *(long *)puVar2;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar17 = *(long *)puVar2;
    }
    plVar9 = *(long **)(*(long *)(lVar17 + 0xb8) + 0x48);
    thunk_FUN_00d8e500();
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar17 = (**(code **)(*plVar9 + 0x308))(plVar9,lVar6,*(undefined8 *)(*plVar9 + 0x310));
    if (lVar17 == 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar17 = FUN_01ff5160(lVar6);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar4 = FUN_020cc784(lVar17,0);
      plVar9 = (long *)thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ee168);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01743cd4(plVar9,uVar4,0);
      plVar11 = (long *)FUN_020cd250(lVar17,0);
      puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar10 = *plVar11;
        lVar17 = *(long *)puVar3;
        uVar18 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar17) {
              puVar12 = (undefined8 *)(lVar10 + (long)*piVar19 * 0x10 + 0x138);
              goto Unity_Burst_Intrinsics_Arm_Neon__vcle_u64;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar11,lVar17,0);
Unity_Burst_Intrinsics_Arm_Neon__vcle_u64:
        uVar18 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        puVar12 = (undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
        if ((uVar18 & 1) == 0) {
          plVar11 = (long *)thunk_FUN_00d6225c(plVar11,*(undefined8 *)StringLiteral_10310);
          if (plVar11 == (long *)0x0) goto LAB_01ff2230;
          lVar17 = *plVar11;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar18 == 0) goto LAB_01ff2208;
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_01ff21f0;
        }
        lVar10 = *plVar11;
        lVar17 = *(long *)puVar3;
        uVar18 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar17) {
              puVar12 = (undefined8 *)(lVar10 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_01ff1ee0;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar11,lVar17,1);
LAB_01ff1ee0:
        plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if (plVar13 != (long *)0x0) {
          lVar17 = *plVar13;
          bVar1 = *(byte *)(*(long *)Mono_Security_Cryptography_PKCS1_TypeInfo + 300);
          if ((*(byte *)(lVar17 + 300) < bVar1) ||
             (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Mono_Security_Cryptography_PKCS1_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar13);
          }
          if (lVar17 == *(long *)
                         Method_System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_Sort__
             ) {
            lVar17 = plVar13[3];
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar17 = FUN_01ff40ac(lVar17);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864();
            }
            uVar18 = FUN_0178a8c4(lVar17,0,0);
            if ((uVar18 & 1) != 0) {
              uVar20 = FUN_015f5b28(*(undefined8 *)
                                     System_Xml_Schema_XmlSchemaSimpleTypeList_TypeInfo,plVar13[2],0
                                   );
              plVar14 = (long *)FUN_00da4fb8(*(undefined8 *)
                                              Method_System_Collections_Generic_List<PropertyInfo>_get_Item__
                                             ,1);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if ((lVar17 != 0) &&
                 (lVar10 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar14 + 0x40)), lVar10 == 0)
                 ) {
                uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar7,0);
              }
              if ((int)plVar14[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar14[4] = lVar17;
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              plVar14 = (long *)FUN_0178c410(lVar6,uVar20,plVar14,0);
              uVar18 = FUN_016ac4bc(plVar14,0,0);
              if ((uVar18 & 1) != 0) {
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar18 = FUN_016ac334(plVar14,0);
                if (((uVar18 & 1) == 0) && (uVar18 = FUN_016ac3e4(plVar14,0), (uVar18 & 1) != 0)) {
                  uVar20 = FUN_015f5b28(*(undefined8 *)
                                         Method_UnityEngine_ProBuilder_InternalUtility_DemandComponent<ProBuilderMesh>__
                                        ,plVar13[2],0);
                  plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                  Method_System_Collections_Generic_List<PropertyInfo>_get_Item__
                                                 ,2);
                  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if ((lVar17 != 0) &&
                     (lVar10 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar10 == 0)) {
                    uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(uVar7,0);
                  }
                  if ((int)plVar15[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  plVar15[4] = lVar17;
                  lVar10 = (**(code **)(*plVar14 + 0x3f8))
                                     (plVar14,*(undefined8 *)(*plVar14 + 0x400));
                  if ((lVar10 != 0) &&
                     (lVar16 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar16 == 0)) {
                    uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(uVar7,0);
                  }
                  if (*(uint *)(plVar15 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  plVar15[5] = lVar10;
                  lVar10 = FUN_0178c410(lVar6,uVar20,plVar15,0);
                  uVar18 = FUN_016ac4bc(lVar10,0,0);
                  if ((uVar18 & 1) != 0) {
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    uVar18 = FUN_016ac334(lVar10,0);
                    if (((uVar18 & 1) != 0) || (uVar18 = FUN_016ac3e4(lVar10,0), (uVar18 & 1) == 0))
                    {
                      lVar10 = 0;
                    }
                  }
                  lVar21 = plVar13[2];
                  uVar20 = (**(code **)(*plVar14 + 0x3f8))
                                     (plVar14,*(undefined8 *)(*plVar14 + 0x400));
                  lVar16 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11665);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_01fe9a90(lVar16,lVar6,lVar21,uVar20,lVar17,plVar14,lVar10,0);
                  (**(code **)(*plVar9 + 0x308))(plVar9,lVar16,*(undefined8 *)(*plVar9 + 0x310));
                }
              }
            }
          }
        }
      } while( true );
    }
    uVar20 = *(undefined8 *)StringLiteral_11818;
    lVar10 = thunk_FUN_00d6225c(lVar17,uVar20);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(lVar17,uVar20);
    }
    goto LAB_01ff22d0;
  }
  uVar7 = *(undefined8 *)puVar3;
  lVar10 = thunk_FUN_00d6225c(lVar17,uVar7);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(lVar17,uVar7);
  }
  goto LAB_01ff19cc;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_01ff21f0:
    if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_10310) {
      puVar8 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_01ff2224;
    }
  }
LAB_01ff2208:
  puVar8 = (undefined8 *)FUN_00d59724(plVar11,*(long *)StringLiteral_10310,0);
LAB_01ff2224:
  (*(code *)*puVar8)(plVar11,puVar8[1]);
LAB_01ff2230:
  uVar4 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
  puVar2 = StringLiteral_3919;
  lVar10 = FUN_00da4fb8(*(undefined8 *)StringLiteral_11818,uVar4);
  (**(code **)(*plVar9 + 0x368))(plVar9,lVar10,0,*(undefined8 *)(*plVar9 + 0x370));
  lVar17 = *(long *)puVar2;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar17 = *(long *)puVar2;
  }
  plVar9 = *(long **)(*(long *)(lVar17 + 0xb8) + 0x48);
  thunk_FUN_00d8e500();
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  (**(code **)(*plVar9 + 0x318))(plVar9,lVar6,lVar10,*(undefined8 *)(*plVar9 + 800));
LAB_01ff22d0:
  if (cStack000000000000003c != '\0') {
    thunk_FUN_00d56f10(uVar7,0);
  }
LAB_01ff19cc:
  if (lVar10 != 0) {
    plVar9 = (long *)FUN_00da4fb8(*puVar12,*(undefined4 *)(lVar10 + 0x18));
    puVar3 = StringLiteral_10109;
    puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovn_s32__;
    if (0 < *(int *)(lVar10 + 0x18)) {
      uVar22 = 0;
      do {
        plVar11 = (long *)thunk_FUN_00d6225c(unaff_x29,*(undefined8 *)puVar2);
        if (plVar11 == (long *)0x0) {
LAB_01ff1a7c:
          plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)System_Xml_QueryOutputWriter_TypeInfo,1);
          lVar6 = *(long *)puVar3;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar6);
            lVar6 = *(long *)puVar3;
          }
          if (plVar11 == (long *)0x0) goto LAB_01ff232c;
          lVar6 = **(long **)(lVar6 + 0xb8);
          if ((lVar6 != 0) &&
             (lVar17 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
          goto LAB_01ff2334;
          if ((int)plVar11[3] == 0) goto LAB_01ff2330;
          plVar11[4] = lVar6;
        }
        else {
          lVar17 = *plVar11;
          lVar6 = *(long *)puVar2;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar6) {
                puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_01ff1a64;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(plVar11,lVar6,0);
LAB_01ff1a64:
          lVar6 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          if (lVar6 == 0) goto LAB_01ff1a7c;
          plVar11 = (long *)0x0;
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar22) {
LAB_01ff2330:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar6 = *(long *)(lVar10 + (long)(int)uVar22 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_01ff232c;
        uVar7 = *(undefined8 *)(lVar6 + 0xd8);
        lVar17 = thunk_FUN_00d62348(*(undefined8 *)
                                     Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_TypeInfo);
        if ((lVar17 == 0) ||
           (FUN_01fda110(lVar17,lVar6,uVar7,unaff_x29,plVar11,0), plVar9 == (long *)0x0))
        goto LAB_01ff232c;
        lVar6 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar9 + 0x40));
        if (lVar6 == 0) {
LAB_01ff2334:
          uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar7,0);
        }
        if (*(uint *)(plVar9 + 3) <= uVar22) goto LAB_01ff2330;
        plVar9[(long)(int)uVar22 + 4] = lVar17;
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < *(int *)(lVar10 + 0x18));
    }
    puVar2 = StringLiteral_3919;
    if (plVar5 != (long *)0x0) {
      lVar6 = *(long *)StringLiteral_3919;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar2;
      }
      in_stack_00000028 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x78);
      in_stack_00000020 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x70);
      uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                 ,&stack0x00000020);
      lVar6 = *plVar5;
      uVar18 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
            puVar12 = (undefined8 *)(lVar6 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_01ff1d24;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_00d59724(plVar5,*(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo
                             ,1);
LAB_01ff1d24:
      (*(code *)*puVar12)(plVar5,uVar7,plVar9,puVar12[1]);
    }
    return plVar9;
  }
LAB_01ff232c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


