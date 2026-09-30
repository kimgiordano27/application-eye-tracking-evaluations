/*
FUNCTION_NAME: FUN_01f69890
ENTRY_POINT: 01f69890
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_01f69890(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  uint local_6c;
  undefined8 local_68;
  
  if ((DAT_03780429 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Type>_Add__);
    thunk_FUN_00d48444(UnityEngine_Vector4_TypeInfo);
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JRaw_var);
    thunk_FUN_00d48444(StringLiteral_11537);
    thunk_FUN_00d48444(StringLiteral_7800);
    thunk_FUN_00d48444(System_Collections_Generic_IDictionary<string,_StyleComplexSelector>_TypeInfo
                      );
    DAT_03780429 = 1;
  }
  local_68 = 0;
  local_6c = 0;
  uVar11 = FUN_015ff8a0(param_1,0);
  puVar5 = Method_System_Collections_Generic_List<Type>_Add__;
  if ((uVar11 & 1) != 0) {
    return param_1;
  }
  if (param_1 == 0) goto LAB_01f6a254;
  iVar2 = *(int *)(param_1 + 0x10);
  iVar7 = FUN_016047a8(param_1,0x5f,0);
  if (iVar7 < 0) {
    plVar14 = (long *)0x0;
    goto LAB_01f69b04;
  }
  lVar12 = *(long *)puVar5;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar12 = *(long *)puVar5;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
  thunk_FUN_00d8e500();
  if (lVar12 == 0) {
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    if (lVar12 == 0) goto LAB_01f6a254;
    FUN_020217f0(lVar12,*(undefined8 *)Newtonsoft_Json_Linq_JRaw_var,0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    thunk_FUN_00d8e500();
    lVar13 = *(long *)puVar5;
    *(long *)(*(long *)(lVar13 + 0xb8) + 0x18) = lVar12;
  }
  else {
    lVar13 = *(long *)puVar5;
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar13 = *(long *)puVar5;
  }
  lVar12 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
  thunk_FUN_00d8e500();
  if ((lVar12 == 0) || (lVar12 = FUN_02020340(lVar12,param_1,iVar7,0), lVar12 == 0))
  goto LAB_01f6a254;
  plVar14 = (long *)FUN_0201e4d8(lVar12,0);
  if (plVar14 == (long *)0x0) {
LAB_01f69b04:
    iVar7 = -1;
    if ((param_2 & 1) == 0) goto LAB_01f69d9c;
LAB_01f69b0c:
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_015fa29c(param_1,0,0);
    uVar11 = FUN_01f69180(*(undefined8 *)(*(long *)puVar5 + 0xb8),uVar9);
    if (((uVar9 & 0xffff) == 0x5f) || ((uVar11 & 1) != 0)) {
      if (iVar7 == 0) goto LAB_01f69b7c;
      goto LAB_01f69d9c;
    }
    if ((((param_3 & 1) == 0) && (sVar6 = FUN_015fa29c(param_1,0,0), iVar7 != 0)) && (sVar6 == 0x3a)
       ) goto LAB_01f69d9c;
LAB_01f69b7c:
    plVar16 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                        );
    if (plVar16 == (long *)0x0) goto LAB_01f6a254;
    FUN_0160aab0(plVar16,iVar2 + 0x14,0);
    FUN_0160c430(plVar16,*(undefined8 *)StringLiteral_7800,0);
    if (((iVar2 < 2) || (uVar9 = FUN_015fa29c(param_1,0,0), (uVar9 >> 10 & 0x3f) != 0x36)) ||
       (uVar9 = FUN_015fa29c(param_1,1,0), (uVar9 >> 10 & 0x3f) != 0x37)) {
      uVar8 = FUN_015fa29c(param_1,0,0);
      local_68 = CONCAT44(local_68._4_4_,uVar8) & 0xffffffff0000ffff;
      if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
      }
      iVar20 = 1;
      puVar15 = &local_68;
      puVar22 = (undefined8 *)
                System_Collections_Generic_IDictionary<string,_StyleComplexSelector>_TypeInfo;
    }
    else {
      uVar9 = FUN_015fa29c(param_1,0,0);
      uVar10 = FUN_015fa29c(param_1,1,0);
      local_68 = CONCAT44((uVar9 & 0xffff) * 0x400 + 0xfca10000 | (uVar10 & 0xffff) - 0xdc00,
                          (undefined4)local_68);
      if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      iVar20 = 2;
      puVar15 = (undefined8 *)((long)&local_68 + 4);
      puVar22 = (undefined8 *)UnityEngine_Vector4_TypeInfo;
    }
    uVar18 = FUN_01731954(0);
    uVar18 = FUN_0176ecf8(puVar15,*puVar22,uVar18,0);
    FUN_0160c430(plVar16,uVar18,0);
    FUN_0160c430(plVar16,*(undefined8 *)StringLiteral_11537,0);
    if (iVar7 == 0) {
      if (plVar14 == (long *)0x0) goto LAB_01f6a254;
      lVar12 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar11 != 0) {
        piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__)
          {
            puVar15 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_01f6a194;
          }
          uVar11 = uVar11 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar11 != 0);
      }
      puVar15 = (undefined8 *)
                FUN_00d59724(plVar14,*(long *)
                                      Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                             ,0);
LAB_01f6a194:
      uVar11 = (*(code *)*puVar15)(plVar14,puVar15[1]);
      if ((uVar11 & 1) == 0) {
        iVar7 = 0;
      }
      else {
        lVar12 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar11 != 0) {
          piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) ==
                *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
               ) {
              puVar15 = (undefined8 *)(lVar12 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_01f6a204;
            }
            uVar11 = uVar11 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar11 != 0);
        }
        puVar15 = (undefined8 *)
                  FUN_00d59724(plVar14,*(long *)
                                        Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                               ,1);
LAB_01f6a204:
        plVar17 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
        if (plVar17 == (long *)0x0) goto LAB_01f6a254;
        bVar3 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__ + 300);
        if ((*(byte *)(*plVar17 + 300) < bVar3) ||
           (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__)) {
LAB_01f6a258:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        iVar7 = (int)plVar17[2] + -1;
      }
    }
  }
  else {
    lVar12 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar11 != 0) {
      piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) ==
            *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
          puVar15 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_01f69aac;
        }
        uVar11 = uVar11 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar11 != 0);
    }
    puVar15 = (undefined8 *)
              FUN_00d59724(plVar14,*(long *)
                                    Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                           ,0);
LAB_01f69aac:
    uVar11 = (*(code *)*puVar15)(plVar14,puVar15[1]);
    if ((uVar11 & 1) == 0) goto LAB_01f69b04;
    lVar12 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar11 != 0) {
      piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) ==
            *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
          puVar15 = (undefined8 *)(lVar12 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_01f69d4c;
        }
        uVar11 = uVar11 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar11 != 0);
    }
    puVar15 = (undefined8 *)
              FUN_00d59724(plVar14,*(long *)
                                    Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                           ,1);
LAB_01f69d4c:
    plVar16 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
    if (plVar16 == (long *)0x0) goto LAB_01f6a254;
    bVar3 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__ + 300);
    if ((*(byte *)(*plVar16 + 300) < bVar3) ||
       (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__)) goto LAB_01f6a258;
    iVar7 = (int)plVar16[2] + -1;
    if ((param_2 & 1) != 0) goto LAB_01f69b0c;
LAB_01f69d9c:
    iVar20 = 0;
    plVar16 = (long *)0x0;
  }
  puVar4 = System_Collections_Generic_IDictionary<string,_StyleComplexSelector>_TypeInfo;
  if (iVar20 < iVar2) {
    iVar21 = iVar20;
    do {
      if ((param_3 & 1) == 0) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_015fa29c(param_1,iVar21,0);
        uVar11 = FUN_01f691b4(*(undefined8 *)(*(long *)puVar5 + 0xb8),uVar9);
        if ((iVar7 == iVar21) || ((uVar9 & 0xffff) != 0x3a && (uVar11 & 1) == 0)) goto LAB_01f69e50;
      }
      else {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_015fa29c(param_1,iVar21,0);
        uVar11 = FUN_01f691b4(*(undefined8 *)(*(long *)puVar5 + 0xb8),uVar8);
        if ((iVar7 == iVar21) || ((uVar11 & 1) == 0)) {
LAB_01f69e50:
          if (plVar16 == (long *)0x0) {
            plVar16 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                                );
            if (plVar16 == (long *)0x0) goto LAB_01f6a254;
            FUN_0160aab0(plVar16,iVar2 + 0x14,0);
          }
          if (iVar7 == iVar21) {
            if (plVar14 == (long *)0x0) goto LAB_01f6a254;
            lVar12 = *plVar14;
            uVar11 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar11 != 0) {
              piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) ==
                    *(long *)
                     Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
                  puVar15 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_01f69ed8;
                }
                uVar11 = uVar11 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar11 != 0);
            }
            puVar15 = (undefined8 *)
                      FUN_00d59724(plVar14,*(long *)
                                            Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                   ,0);
LAB_01f69ed8:
            uVar11 = (*(code *)*puVar15)(plVar14,puVar15[1]);
            iVar7 = iVar21;
            if ((uVar11 & 1) != 0) {
              lVar12 = *plVar14;
              uVar11 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar11 != 0) {
                piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) ==
                      *(long *)
                       Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__)
                  {
                    puVar15 = (undefined8 *)(lVar12 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto LAB_01f69f44;
                  }
                  uVar11 = uVar11 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar11 != 0);
              }
              puVar15 = (undefined8 *)
                        FUN_00d59724(plVar14,*(long *)
                                              Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                     ,1);
LAB_01f69f44:
              plVar17 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
              if (plVar17 == (long *)0x0) goto LAB_01f6a254;
              bVar3 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__ + 300)
              ;
              if ((*(byte *)(*plVar17 + 300) < bVar3) ||
                 (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) !=
                  *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__)) goto LAB_01f6a258;
              iVar7 = (int)plVar17[2] + -1;
            }
          }
          if (plVar16 == (long *)0x0) goto LAB_01f6a254;
          FUN_0160c56c(plVar16,param_1,iVar20,iVar21 - iVar20,0);
          FUN_0160c430(plVar16,*(undefined8 *)StringLiteral_7800,0);
          iVar1 = iVar21 + 1;
          if (((iVar1 < iVar2) &&
              (uVar9 = FUN_015fa29c(param_1,iVar21,0), (uVar9 >> 10 & 0x3f) == 0x36)) &&
             (uVar9 = FUN_015fa29c(param_1,iVar1,0), (uVar9 >> 10 & 0x3f) == 0x37)) {
            uVar9 = FUN_015fa29c(param_1,iVar21,0);
            uVar10 = FUN_015fa29c(param_1,iVar1,0);
            local_6c = (uVar9 & 0xffff) * 0x400 + 0xfca10000 | (uVar10 & 0xffff) - 0xdc00;
            if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) ==
                0) {
              thunk_FUN_00d32864();
            }
            uVar18 = FUN_01731954(0);
            uVar18 = FUN_0176ecf8(&local_6c,*(undefined8 *)UnityEngine_Vector4_TypeInfo,uVar18,0);
            FUN_0160c430(plVar16,uVar18,0);
            iVar20 = iVar21 + 2;
            iVar21 = iVar1;
          }
          else {
            uVar8 = FUN_015fa29c(param_1,iVar21,0);
            local_68 = CONCAT44(local_68._4_4_,uVar8) & 0xffffffff0000ffff;
            if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) ==
                0) {
              thunk_FUN_00d32864(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
            }
            uVar18 = FUN_01731954(0);
            uVar18 = FUN_0176ecf8(&local_68,*(undefined8 *)puVar4,uVar18,0);
            FUN_0160c430(plVar16,uVar18,0);
            iVar20 = iVar1;
          }
          FUN_0160c430(plVar16,*(undefined8 *)StringLiteral_11537,0);
        }
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < iVar2);
  }
  if (iVar20 != 0) {
    if (iVar2 - iVar20 == 0 || iVar2 < iVar20) {
      if (plVar16 == (long *)0x0) goto LAB_01f6a254;
    }
    else {
      if (plVar16 == (long *)0x0) {
LAB_01f6a254:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0160c56c(plVar16,param_1,iVar20,iVar2 - iVar20,0);
    }
    param_1 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
  }
  return param_1;
}


