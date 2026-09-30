/*
FUNCTION_NAME: System.Net.WebRequestPrefixElement$$.ctor
ENTRY_POINT: 01f699c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 System_Net_WebRequestPrefixElement___ctor(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 unaff_x19;
  ulong unaff_x20;
  ulong unaff_x22;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  int unaff_w26;
  long *unaff_x27;
  int iVar20;
  undefined8 in_stack_00000000;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_105__);
  if (lVar8 == 0) goto LAB_01f6a254;
  FUN_020217f0(lVar8,*(undefined8 *)Newtonsoft_Json_Linq_JRaw_var,0);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  thunk_FUN_00d8e500();
  lVar9 = *unaff_x27;
  *(long *)(*(long *)(lVar9 + 0xb8) + 0x18) = lVar8;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar9 = *unaff_x27;
  }
  lVar8 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
  thunk_FUN_00d8e500();
  if ((lVar8 == 0) || (lVar8 = FUN_02020340(lVar8), lVar8 == 0)) goto LAB_01f6a254;
  plVar10 = (long *)FUN_0201e4d8(lVar8,0);
  if (plVar10 == (long *)0x0) {
LAB_01f69b04:
    iVar20 = -1;
    if ((unaff_x22 & 1) == 0) goto LAB_01f69d9c;
LAB_01f69b0c:
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_015fa29c();
    uVar15 = FUN_01f69180(*(undefined8 *)(*unaff_x27 + 0xb8),uVar6);
    if (((uVar6 & 0xffff) == 0x5f) || ((uVar15 & 1) != 0)) {
      if (iVar20 == 0) goto LAB_01f69b7c;
      goto LAB_01f69d9c;
    }
    if ((((unaff_x20 & 1) == 0) && (sVar4 = FUN_015fa29c(), iVar20 != 0)) && (sVar4 == 0x3a))
    goto LAB_01f69d9c;
LAB_01f69b7c:
    plVar12 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                        );
    if (plVar12 == (long *)0x0) goto LAB_01f6a254;
    FUN_0160aab0(plVar12,unaff_w26 + 0x14,0);
    FUN_0160c430(plVar12,*(undefined8 *)StringLiteral_7800,0);
    if (((unaff_w26 < 2) || (uVar6 = FUN_015fa29c(), (uVar6 >> 10 & 0x3f) != 0x36)) ||
       (uVar6 = FUN_015fa29c(), (uVar6 >> 10 & 0x3f) != 0x37)) {
      uStack0000000000000008 = FUN_015fa29c();
      uStack0000000000000008 = uStack0000000000000008 & 0xffff;
      if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
      }
      iVar17 = 1;
      puVar11 = (undefined8 *)&stack0x00000008;
      puVar19 = (undefined8 *)
                System_Collections_Generic_IDictionary<string,_StyleComplexSelector>_TypeInfo;
    }
    else {
      uVar6 = FUN_015fa29c();
      uVar7 = FUN_015fa29c();
      uStack000000000000000c = (uVar6 & 0xffff) * 0x400 + 0xfca10000 | (uVar7 & 0xffff) - 0xdc00;
      if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      iVar17 = 2;
      puVar11 = (undefined8 *)((long)&stack0x00000008 + 4);
      puVar19 = (undefined8 *)UnityEngine_Vector4_TypeInfo;
    }
    uVar14 = FUN_01731954(0);
    uVar14 = FUN_0176ecf8(puVar11,*puVar19,uVar14,0);
    FUN_0160c430(plVar12,uVar14,0);
    FUN_0160c430(plVar12,*(undefined8 *)StringLiteral_11537,0);
    if (iVar20 == 0) {
      if (plVar10 == (long *)0x0) goto LAB_01f6a254;
      lVar8 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__)
          {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01f6a194;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_00d59724(plVar10,*(long *)
                                      Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                             ,0);
LAB_01f6a194:
      uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((uVar15 & 1) == 0) {
        iVar20 = 0;
      }
      else {
        lVar8 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
               ) {
              puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_01f6a204;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_00d59724(plVar10,*(long *)
                                        Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                               ,1);
LAB_01f6a204:
        plVar13 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (plVar13 == (long *)0x0) goto LAB_01f6a254;
        bVar2 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__ + 300);
        if ((*(byte *)(*plVar13 + 300) < bVar2) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__)) {
LAB_01f6a258:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        iVar20 = (int)plVar13[2] + -1;
      }
    }
  }
  else {
    lVar8 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
          puVar11 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01f69aac;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_00d59724(plVar10,*(long *)
                                    Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                           ,0);
LAB_01f69aac:
    uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((uVar15 & 1) == 0) goto LAB_01f69b04;
    lVar8 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_01f69d4c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_00d59724(plVar10,*(long *)
                                    Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                           ,1);
LAB_01f69d4c:
    plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
    if (plVar12 == (long *)0x0) goto LAB_01f6a254;
    bVar2 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__ + 300);
    if ((*(byte *)(*plVar12 + 300) < bVar2) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__)) goto LAB_01f6a258;
    iVar20 = (int)plVar12[2] + -1;
    if ((unaff_x22 & 1) != 0) goto LAB_01f69b0c;
LAB_01f69d9c:
    iVar17 = 0;
    plVar12 = (long *)0x0;
  }
  puVar3 = System_Collections_Generic_IDictionary<string,_StyleComplexSelector>_TypeInfo;
  if (iVar17 < unaff_w26) {
    iVar18 = iVar17;
    do {
      if ((unaff_x20 & 1) == 0) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar6 = FUN_015fa29c();
        uVar15 = FUN_01f691b4(*(undefined8 *)(*unaff_x27 + 0xb8),uVar6);
        if ((iVar20 == iVar18) || ((uVar6 & 0xffff) != 0x3a && (uVar15 & 1) == 0))
        goto LAB_01f69e50;
      }
      else {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar5 = FUN_015fa29c();
        uVar15 = FUN_01f691b4(*(undefined8 *)(*unaff_x27 + 0xb8),uVar5);
        if ((iVar20 == iVar18) || ((uVar15 & 1) == 0)) {
LAB_01f69e50:
          if (plVar12 == (long *)0x0) {
            plVar12 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                                );
            if (plVar12 == (long *)0x0) goto LAB_01f6a254;
            FUN_0160aab0(plVar12,unaff_w26 + 0x14,0);
          }
          if (iVar20 == iVar18) {
            if (plVar10 == (long *)0x0) goto LAB_01f6a254;
            lVar8 = *plVar10;
            uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) ==
                    *(long *)
                     Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
                  puVar11 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_01f69ed8;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_00d59724(plVar10,*(long *)
                                            Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                   ,0);
LAB_01f69ed8:
            uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
            iVar20 = iVar18;
            if ((uVar15 & 1) != 0) {
              lVar8 = *plVar10;
              uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) ==
                      *(long *)
                       Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__)
                  {
                    puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                    goto LAB_01f69f44;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar11 = (undefined8 *)
                        FUN_00d59724(plVar10,*(long *)
                                              Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                     ,1);
LAB_01f69f44:
              plVar13 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
              if (plVar13 == (long *)0x0) goto LAB_01f6a254;
              bVar2 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__ + 300)
              ;
              if ((*(byte *)(*plVar13 + 300) < bVar2) ||
                 (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__)) goto LAB_01f6a258;
              iVar20 = (int)plVar13[2] + -1;
            }
          }
          if (plVar12 == (long *)0x0) goto LAB_01f6a254;
          FUN_0160c56c(plVar12);
          FUN_0160c430(plVar12,*(undefined8 *)StringLiteral_7800,0);
          iVar1 = iVar18 + 1;
          if (((iVar1 < unaff_w26) && (uVar6 = FUN_015fa29c(), (uVar6 >> 10 & 0x3f) == 0x36)) &&
             (uVar6 = FUN_015fa29c(), (uVar6 >> 10 & 0x3f) == 0x37)) {
            uVar6 = FUN_015fa29c();
            uVar7 = FUN_015fa29c();
            in_stack_00000000._4_4_ =
                 (uVar6 & 0xffff) * 0x400 + 0xfca10000 | (uVar7 & 0xffff) - 0xdc00;
            if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) ==
                0) {
              thunk_FUN_00d32864();
            }
            uVar14 = FUN_01731954(0);
            uVar14 = FUN_0176ecf8((long)&stack0x00000000 + 4,
                                  *(undefined8 *)UnityEngine_Vector4_TypeInfo,uVar14,0);
            FUN_0160c430(plVar12,uVar14,0);
            iVar17 = iVar18 + 2;
            iVar18 = iVar1;
          }
          else {
            uStack0000000000000008 = FUN_015fa29c();
            uStack0000000000000008 = uStack0000000000000008 & 0xffff;
            if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) ==
                0) {
              thunk_FUN_00d32864(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
            }
            uVar14 = FUN_01731954(0);
            uVar14 = FUN_0176ecf8(&stack0x00000008,*(undefined8 *)puVar3,uVar14,0);
            FUN_0160c430(plVar12,uVar14,0);
            iVar17 = iVar1;
          }
          FUN_0160c430(plVar12,*(undefined8 *)StringLiteral_11537,0);
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < unaff_w26);
  }
  if (iVar17 != 0) {
    if (iVar17 < unaff_w26) {
      if (plVar12 == (long *)0x0) {
LAB_01f6a254:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0160c56c(plVar12);
    }
    else if (plVar12 == (long *)0x0) goto LAB_01f6a254;
    unaff_x19 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
  }
  return unaff_x19;
}


