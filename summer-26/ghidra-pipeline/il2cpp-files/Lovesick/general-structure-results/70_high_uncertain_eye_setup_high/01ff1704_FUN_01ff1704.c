/*
FUNCTION_NAME: FUN_01ff1704
ENTRY_POINT: 01ff1704
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01ff23e0) */
/* WARNING: Removing unreachable block (ram,0x01ff234c) */
/* WARNING: Removing unreachable block (ram,0x01ff223c) */
/* WARNING: Removing unreachable block (ram,0x01ff2320) */
/* WARNING: Removing unreachable block (ram,0x01ff1db0) */
/* WARNING: Removing unreachable block (ram,0x01ff1db4) */
/* WARNING: Removing unreachable block (ram,0x01ff22f8) */

long * FUN_01ff1704(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 uVar21;
  long lVar22;
  uint uVar23;
  undefined8 local_80;
  undefined8 uStack_78;
  char local_64 [4];
  
  puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if ((DAT_03780818 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ee168);
    thunk_FUN_00d48444(System_Xml_QueryOutputWriter_TypeInfo);
    thunk_FUN_00d48444(Mono_Security_Cryptography_PKCS1_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10109);
    thunk_FUN_00d48444(Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f1220);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovn_s32__);
    thunk_FUN_00d48444(System_Globalization_DateTimeFormatInfoScanner_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__)
    ;
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_Sort__
                      );
    thunk_FUN_00d48444(StringLiteral_11818);
    thunk_FUN_00d48444(StringLiteral_11665);
    thunk_FUN_00d48444(StringLiteral_3919);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_InternalUtility_DemandComponent<ProBuilderMesh>__
                      );
    thunk_FUN_00d48444(System_Xml_Schema_XmlSchemaSimpleTypeList_TypeInfo);
    DAT_03780818 = 1;
  }
  local_64[0] = '\0';
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar13 = (undefined8 *)
            Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
  plVar6 = (long *)FUN_01ff1698(param_1);
  puVar3 = StringLiteral_3919;
  if (plVar6 != (long *)0x0) {
    lVar7 = *(long *)StringLiteral_3919;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar3;
    }
    uStack_78 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x78);
    local_80 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x70);
    uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                               ,&local_80);
    lVar7 = *plVar6;
    uVar19 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) ==
            *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar20 * 0x10 + 0x138);
          goto Unity_Burst_Intrinsics_Arm_Neon__vcgeq_f64;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_00d59724(plVar6,*(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo,0)
    ;
Unity_Burst_Intrinsics_Arm_Neon__vcgeq_f64:
    uVar8 = (*(code *)*puVar9)(plVar6,uVar8,puVar9[1]);
    plVar10 = (long *)thunk_FUN_00d6225c(uVar8,*puVar13);
    if (plVar10 != (long *)0x0) {
      return plVar10;
    }
  }
  puVar3 = StringLiteral_3919;
  lVar7 = *(long *)StringLiteral_3919;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar3;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x48);
  thunk_FUN_00d8e500();
  puVar3 = StringLiteral_3919;
  if (lVar7 == 0) {
    lVar7 = *(long *)StringLiteral_3919;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar3;
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x88);
    local_64[0] = '\0';
    FUN_017d75a8(uVar8,local_64,0);
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar3;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x48);
    thunk_FUN_00d8e500();
    puVar3 = StringLiteral_3919;
    if (lVar7 == 0) {
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f1220);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01747a0c(lVar7,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      thunk_FUN_00d8e500();
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48) = lVar7;
    }
    if (local_64[0] != '\0') {
      thunk_FUN_00d56f10(uVar8,0);
    }
  }
  if (param_1 == 0) goto LAB_01ff232c;
  lVar7 = thunk_FUN_00d93c64(param_1,0);
  puVar3 = StringLiteral_3919;
  lVar18 = *(long *)StringLiteral_3919;
  if (*(int *)(lVar18 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar18);
    lVar18 = *(long *)puVar3;
  }
  plVar10 = *(long **)(*(long *)(lVar18 + 0xb8) + 0x48);
  thunk_FUN_00d8e500();
  puVar4 = StringLiteral_11818;
  if (plVar10 == (long *)0x0) goto LAB_01ff232c;
  lVar18 = (**(code **)(*plVar10 + 0x308))(plVar10,lVar7,*(undefined8 *)(*plVar10 + 0x310));
  if (lVar18 == 0) {
    lVar18 = *(long *)puVar3;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar18 = *(long *)puVar3;
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 0x88);
    local_64[0] = '\0';
    FUN_017d75a8(uVar8,local_64,0);
    lVar18 = *(long *)puVar3;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar18 = *(long *)puVar3;
    }
    plVar10 = *(long **)(*(long *)(lVar18 + 0xb8) + 0x48);
    thunk_FUN_00d8e500();
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar18 = (**(code **)(*plVar10 + 0x308))(plVar10,lVar7,*(undefined8 *)(*plVar10 + 0x310));
    if (lVar18 == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar18 = FUN_01ff5160(lVar7);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar5 = FUN_020cc784(lVar18,0);
      plVar10 = (long *)thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ee168);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01743cd4(plVar10,uVar5,0);
      plVar12 = (long *)FUN_020cd250(lVar18,0);
      puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar11 = *plVar12;
        lVar18 = *(long *)puVar2;
        uVar19 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar18) {
              puVar13 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
              goto Unity_Burst_Intrinsics_Arm_Neon__vcle_u64;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar18,0);
Unity_Burst_Intrinsics_Arm_Neon__vcle_u64:
        uVar19 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        puVar13 = (undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
        if ((uVar19 & 1) == 0) {
          plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)StringLiteral_10310);
          if (plVar12 == (long *)0x0) goto LAB_01ff2230;
          lVar18 = *plVar12;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 == 0) goto LAB_01ff2208;
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          goto LAB_01ff21f0;
        }
        lVar11 = *plVar12;
        lVar18 = *(long *)puVar2;
        uVar19 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar18) {
              puVar13 = (undefined8 *)(lVar11 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_01ff1ee0;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar18,1);
LAB_01ff1ee0:
        plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
        if (plVar14 != (long *)0x0) {
          lVar18 = *plVar14;
          bVar1 = *(byte *)(*(long *)Mono_Security_Cryptography_PKCS1_TypeInfo + 300);
          if ((*(byte *)(lVar18 + 300) < bVar1) ||
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Mono_Security_Cryptography_PKCS1_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar14);
          }
          if (lVar18 == *(long *)
                         Method_System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_Sort__
             ) {
            lVar18 = plVar14[3];
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar18 = FUN_01ff40ac(lVar18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864();
            }
            uVar19 = FUN_0178a8c4(lVar18,0,0);
            if ((uVar19 & 1) != 0) {
              uVar21 = FUN_015f5b28(*(undefined8 *)
                                     System_Xml_Schema_XmlSchemaSimpleTypeList_TypeInfo,plVar14[2],0
                                   );
              plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)
                                              Method_System_Collections_Generic_List<PropertyInfo>_get_Item__
                                             ,1);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if ((lVar18 != 0) &&
                 (lVar11 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar11 == 0)
                 ) {
                uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar8,0);
              }
              if ((int)plVar15[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar15[4] = lVar18;
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              plVar15 = (long *)FUN_0178c410(lVar7,uVar21,plVar15,0);
              uVar19 = FUN_016ac4bc(plVar15,0,0);
              if ((uVar19 & 1) != 0) {
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar19 = FUN_016ac334(plVar15,0);
                if (((uVar19 & 1) == 0) && (uVar19 = FUN_016ac3e4(plVar15,0), (uVar19 & 1) != 0)) {
                  uVar21 = FUN_015f5b28(*(undefined8 *)
                                         Method_UnityEngine_ProBuilder_InternalUtility_DemandComponent<ProBuilderMesh>__
                                        ,plVar14[2],0);
                  plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                  Method_System_Collections_Generic_List<PropertyInfo>_get_Item__
                                                 ,2);
                  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if ((lVar18 != 0) &&
                     (lVar11 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar16 + 0x40)),
                     lVar11 == 0)) {
                    uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(uVar8,0);
                  }
                  if ((int)plVar16[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  plVar16[4] = lVar18;
                  lVar11 = (**(code **)(*plVar15 + 0x3f8))
                                     (plVar15,*(undefined8 *)(*plVar15 + 0x400));
                  if ((lVar11 != 0) &&
                     (lVar17 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar16 + 0x40)),
                     lVar17 == 0)) {
                    uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(uVar8,0);
                  }
                  if (*(uint *)(plVar16 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  plVar16[5] = lVar11;
                  lVar11 = FUN_0178c410(lVar7,uVar21,plVar16,0);
                  uVar19 = FUN_016ac4bc(lVar11,0,0);
                  if ((uVar19 & 1) != 0) {
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    uVar19 = FUN_016ac334(lVar11,0);
                    if (((uVar19 & 1) != 0) || (uVar19 = FUN_016ac3e4(lVar11,0), (uVar19 & 1) == 0))
                    {
                      lVar11 = 0;
                    }
                  }
                  lVar22 = plVar14[2];
                  uVar21 = (**(code **)(*plVar15 + 0x3f8))
                                     (plVar15,*(undefined8 *)(*plVar15 + 0x400));
                  lVar17 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11665);
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_01fe9a90(lVar17,lVar7,lVar22,uVar21,lVar18,plVar15,lVar11,0,0);
                  (**(code **)(*plVar10 + 0x308))(plVar10,lVar17,*(undefined8 *)(*plVar10 + 0x310));
                }
              }
            }
          }
        }
      } while( true );
    }
    uVar21 = *(undefined8 *)StringLiteral_11818;
    lVar11 = thunk_FUN_00d6225c(lVar18,uVar21);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(lVar18,uVar21);
    }
    goto LAB_01ff22d0;
  }
  uVar8 = *(undefined8 *)puVar4;
  lVar11 = thunk_FUN_00d6225c(lVar18,uVar8);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(lVar18,uVar8);
  }
  goto LAB_01ff19cc;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_01ff21f0:
    if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_10310) {
      puVar9 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_01ff2224;
    }
  }
LAB_01ff2208:
  puVar9 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_10310,0);
LAB_01ff2224:
  (*(code *)*puVar9)(plVar12,puVar9[1]);
LAB_01ff2230:
  uVar5 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
  puVar2 = StringLiteral_3919;
  lVar11 = FUN_00da4fb8(*(undefined8 *)StringLiteral_11818,uVar5);
  (**(code **)(*plVar10 + 0x368))(plVar10,lVar11,0,*(undefined8 *)(*plVar10 + 0x370));
  lVar18 = *(long *)puVar2;
  if (*(int *)(lVar18 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar18 = *(long *)puVar2;
  }
  plVar10 = *(long **)(*(long *)(lVar18 + 0xb8) + 0x48);
  thunk_FUN_00d8e500();
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  (**(code **)(*plVar10 + 0x318))(plVar10,lVar7,lVar11,*(undefined8 *)(*plVar10 + 800));
LAB_01ff22d0:
  if (local_64[0] != '\0') {
    thunk_FUN_00d56f10(uVar8,0);
  }
LAB_01ff19cc:
  if (lVar11 != 0) {
    plVar10 = (long *)FUN_00da4fb8(*puVar13,*(undefined4 *)(lVar11 + 0x18));
    puVar3 = StringLiteral_10109;
    puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovn_s32__;
    if (0 < *(int *)(lVar11 + 0x18)) {
      uVar23 = 0;
      do {
        plVar12 = (long *)thunk_FUN_00d6225c(param_1,*(undefined8 *)puVar2);
        if (plVar12 == (long *)0x0) {
LAB_01ff1a7c:
          plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)System_Xml_QueryOutputWriter_TypeInfo,1);
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar7);
            lVar7 = *(long *)puVar3;
          }
          if (plVar12 == (long *)0x0) goto LAB_01ff232c;
          lVar7 = **(long **)(lVar7 + 0xb8);
          if ((lVar7 != 0) &&
             (lVar18 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar18 == 0))
          goto LAB_01ff2334;
          if ((int)plVar12[3] == 0) goto LAB_01ff2330;
          plVar12[4] = lVar7;
        }
        else {
          lVar18 = *plVar12;
          lVar7 = *(long *)puVar2;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == lVar7) {
                puVar13 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_01ff1a64;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar7,0);
LAB_01ff1a64:
          lVar7 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          if (lVar7 == 0) goto LAB_01ff1a7c;
          plVar12 = (long *)0x0;
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar23) {
LAB_01ff2330:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar7 = *(long *)(lVar11 + (long)(int)uVar23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_01ff232c;
        uVar8 = *(undefined8 *)(lVar7 + 0xd8);
        lVar18 = thunk_FUN_00d62348(*(undefined8 *)
                                     Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_TypeInfo);
        if ((lVar18 == 0) ||
           (FUN_01fda110(lVar18,lVar7,uVar8,param_1,plVar12,0), plVar10 == (long *)0x0))
        goto LAB_01ff232c;
        lVar7 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar7 == 0) {
LAB_01ff2334:
          uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar8,0);
        }
        if (*(uint *)(plVar10 + 3) <= uVar23) goto LAB_01ff2330;
        plVar10[(long)(int)uVar23 + 4] = lVar18;
        uVar23 = uVar23 + 1;
      } while ((int)uVar23 < *(int *)(lVar11 + 0x18));
    }
    puVar2 = StringLiteral_3919;
    if (plVar6 != (long *)0x0) {
      lVar7 = *(long *)StringLiteral_3919;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar2;
      }
      uStack_78 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x78);
      local_80 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x70);
      uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                 ,&local_80);
      lVar7 = *plVar6;
      uVar19 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) ==
              *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
            puVar13 = (undefined8 *)(lVar7 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_01ff1d24;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)
                FUN_00d59724(plVar6,*(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo
                             ,1);
LAB_01ff1d24:
      (*(code *)*puVar13)(plVar6,uVar8,plVar10,puVar13[1]);
    }
    return plVar10;
  }
LAB_01ff232c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


