/*
FUNCTION_NAME: FUN_01827198
ENTRY_POINT: 01827198
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_8
*/


void FUN_01827198(undefined4 *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  
  if ((DAT_037794b1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_13187);
    thunk_FUN_00d48444(Sirenix_Serialization_DecimalSerializer_var);
    thunk_FUN_00d48444(System_Func<STMTextureData,_STMTextureData>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f2918);
    thunk_FUN_00d48444(StringLiteral_3643);
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vfmsq_n_f32__);
    thunk_FUN_00d48444(UnityEngine_Rendering_DebugShapes_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_TextCore_Text_FontFeatureTable_<>c_<SortGlyphPairAdjustmentRecords>b__6_1__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_ProBuilderMesh_SetFaceColor__);
    thunk_FUN_00d48444(System_Predicate<ScriptableRenderPass>_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_u32__);
    thunk_FUN_00d48444(
                      Method_Sirenix_Utilities_DeepReflection_<>c__DisplayClass21_0_<CreateSlowDeepStaticValueGetterDelegate>b__0__
                      );
    thunk_FUN_00d48444(
                      UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugData_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_get_Count__)
    ;
    DAT_037794b1 = 1;
  }
  puVar16 = 
  Method_UnityEngine_TextCore_Text_FontFeatureTable_<>c_<SortGlyphPairAdjustmentRecords>b__6_1__;
  puVar13 = Method_UnityEngine_ProBuilder_ProBuilderMesh_SetFaceColor__;
  puVar10 = UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugData_TypeInfo;
  puVar9 = System_Predicate<ScriptableRenderPass>_TypeInfo;
  puVar8 = System_Func<STMTextureData,_STMTextureData>_TypeInfo;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  auVar6 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auVar25 = ZEXT816(0);
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  auVar7 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  plVar23 = *(long **)(param_1 + 8);
  switch(*param_1) {
  case 0:
    local_80 = *(undefined1 (*) [16])(param_1 + 0xe);
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 0xffffffff;
    goto LAB_018272f0;
  case 1:
    local_80 = *(undefined1 (*) [16])(param_1 + 0xe);
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 0xffffffff;
    goto LAB_01827b18;
  case 2:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *param_1 = 0xffffffff;
    local_80 = ZEXT816(0);
LAB_018273a4:
    FUN_016a1990(local_90,0);
    if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar24 = FUN_018155f8(plVar23,param_1[0xc],0);
    break;
  case 3:
    local_80 = *(undefined1 (*) [16])(param_1 + 0xe);
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 0xffffffff;
    local_90 = ZEXT816(0);
LAB_018273dc:
    FUN_0127e70c(local_80,&local_68,*(undefined8 *)puVar13);
    if ((char)local_68 == '\0') {
      if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    else {
      if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar18 = plVar23[0x10];
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar1 = *(int *)((long)plVar23 + 0x8c) + 1;
      if (*(uint *)(lVar18 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (*(short *)(lVar18 + (long)(int)uVar1 * 2 + 0x20) == 0x49) {
        uVar24 = FUN_01815854(plVar23,param_1[0xc],0);
        break;
      }
    }
    lVar18 = FUN_018115b8(plVar23,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    auVar25 = FUN_017e7d94(lVar18,0,0);
    local_90 = auVar25;
    uVar19 = FUN_016a1974(local_90,0);
    if ((uVar19 & 1) == 0) {
      *param_1 = 4;
      *(undefined1 (*) [16])(param_1 + 0x14) = local_90;
      if (*(int *)(*(long *)StringLiteral_3643 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098fc0(param_1 + 2,local_90,param_1,
                   *(undefined8 *)Sirenix_Serialization_DecimalSerializer_var);
      return;
    }
    goto LAB_01827630;
  case 4:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *param_1 = 0xffffffff;
    local_80 = ZEXT816(0);
LAB_01827630:
    FUN_016a1990(local_90,0);
    if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar24 = (**(code **)(*plVar23 + 0x248))(plVar23,*(undefined8 *)(*plVar23 + 0x250));
    break;
  case 5:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *param_1 = 0xffffffff;
    local_80 = ZEXT816(0);
LAB_0182748c:
    FUN_016a1990(local_90,0);
    if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar24 = (**(code **)(*plVar23 + 0x248))(plVar23,*(undefined8 *)(*plVar23 + 0x250));
    break;
  case 6:
    local_80 = *(undefined1 (*) [16])(param_1 + 0xe);
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 0xffffffff;
LAB_01827578:
    local_90 = auVar3;
    FUN_0127e70c(local_80,&local_68,*(undefined8 *)puVar13);
    if ((char)local_68 == '\0') {
      if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar18 = plVar23[0x10];
      if (lVar18 != 0) {
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)((long)plVar23 + 0x8c)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar24 = FUN_01815378(plVar23,*(undefined2 *)
                                       (lVar18 + (long)(int)*(uint *)((long)plVar23 + 0x8c) * 2 +
                                       0x20),0);
        uVar21 = thunk_FUN_00d48444(Method_System_Numerics_BigInteger_CompareTo__);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar24,uVar21);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0180885c(plVar23,9,*(undefined8 *)(param_1 + 0x12),0);
    uVar24 = *(undefined8 *)(param_1 + 0x12);
    break;
  case 7:
    local_a0 = *(undefined1 (*) [16])(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *param_1 = 0xffffffff;
    local_90 = ZEXT816(0);
    local_80 = ZEXT816(0);
LAB_0182744c:
    FUN_0127e70c(local_a0,&local_68,*(undefined8 *)puVar16);
    goto LAB_018275ec;
  case 8:
    local_a0 = *(undefined1 (*) [16])(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *param_1 = 0xffffffff;
LAB_018275dc:
    local_90 = auVar4;
    local_80 = auVar5;
    FUN_0127e70c(local_a0,&local_68,*(undefined8 *)puVar16);
LAB_018275ec:
    uVar24 = CONCAT44(uStack_64,local_68);
    break;
  case 9:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *param_1 = 0xffffffff;
LAB_0182737c:
    local_80 = auVar25;
    FUN_016a1990(local_90,0);
    uVar24 = 0;
    break;
  case 10:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *param_1 = 0xffffffff;
    local_80 = ZEXT816(0);
    goto LAB_01827ac0;
  case 0xb:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *param_1 = 0xffffffff;
    goto LAB_01827a78;
  case 0xc:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *param_1 = 0xffffffff;
LAB_01827354:
    FUN_016a1990(local_90,0);
    uVar24 = 0;
    break;
  default:
    if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0180fd40(plVar23,0);
    uVar1 = *(uint *)((long)plVar23 + 0x24);
    if (0xc < uVar1) {
LAB_0182773c:
      lVar18 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar24 = FUN_01731954(0);
      local_68 = *(undefined4 *)((long)plVar23 + 0x24);
      uVar21 = thunk_FUN_00d48444(StringLiteral_12546);
      uVar21 = thunk_FUN_00d61fa0(uVar21,&local_68);
      uVar20 = thunk_FUN_00d48444(
                                 Method_System_DateTime_System_Runtime_Serialization_ISerializable_GetObjectData__
                                 );
      uVar24 = FUN_018651d4(uVar20,uVar24,uVar21,0);
      uVar24 = FUN_018056b4(plVar23,uVar24,0);
      uVar21 = thunk_FUN_00d48444(Method_System_Numerics_BigInteger_CompareTo__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar24,uVar21);
    }
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x665U) != 0) goto LAB_018278d8;
    if (uVar1 != 8) {
      if (uVar1 != 0xc) goto LAB_0182773c;
      lVar18 = FUN_01811bac(plVar23,*(undefined8 *)(param_1 + 10),0);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_90 = FUN_017e7d94(lVar18,0,0);
      uVar19 = FUN_016a1974(local_90,0);
      if ((uVar19 & 1) == 0) {
        *param_1 = 0xc;
        *(undefined1 (*) [16])(param_1 + 0x14) = local_90;
        if (*(int *)(*(long *)StringLiteral_3643 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01098fc0(param_1 + 2,local_90,param_1,
                     *(undefined8 *)Sirenix_Serialization_DecimalSerializer_var);
        return;
      }
      goto LAB_01827354;
    }
    lVar18 = FUN_0180ff90(plVar23,1,*(undefined8 *)(param_1 + 10),0);
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    local_80 = FUN_013bdbc8(lVar18,0,*(undefined8 *)puVar10);
    uVar19 = FUN_0127e6c0(local_80,*(undefined8 *)puVar9);
    if ((uVar19 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_80;
      if (*(int *)(*(long *)StringLiteral_3643 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098fc0(param_1 + 2,local_80,param_1,*(undefined8 *)puVar8);
      return;
    }
LAB_018272f0:
    FUN_0127e70c(local_80,&local_68,*(undefined8 *)puVar13);
    if ((char)local_68 == '\0') {
LAB_018278d8:
      do {
        puVar17 = StringLiteral_13187;
        puVar15 = 
        Method_Sirenix_Utilities_DeepReflection_<>c__DisplayClass21_0_<CreateSlowDeepStaticValueGetterDelegate>b__0__
        ;
        puVar14 = Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_u32__;
        puVar12 = Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_get_Count__;
        puVar11 = Newtonsoft_Json_JsonReader_State_TypeInfo;
        if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar18 = plVar23[0x10];
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar1 = *(uint *)((long)plVar23 + 0x8c);
        if (*(uint *)(lVar18 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar2 = *(ushort *)(lVar18 + (long)(int)uVar1 * 2 + 0x20);
        if (uVar2 < 0x4a) {
          if (uVar2 < 0xe) {
            if (uVar2 < 10) {
              if (uVar2 != 0) {
                if (uVar2 == 9) goto switchD_018279ac_caseD_20;
                goto switchD_018279ac_caseD_21;
              }
              lVar18 = FUN_018119d0(plVar23,*(undefined8 *)(param_1 + 10),0);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              auVar25 = FUN_013bdbc8(lVar18,0,*(undefined8 *)puVar10);
              local_80 = auVar25;
              uVar19 = FUN_0127e6c0(local_80,*(undefined8 *)puVar9);
              auVar7 = local_90;
              if ((uVar19 & 1) == 0) {
                *param_1 = 1;
                *(undefined1 (*) [16])(param_1 + 0xe) = local_80;
                if (*(int *)(*(long *)StringLiteral_3643 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_01098fc0(param_1 + 2,local_80,param_1,*(undefined8 *)puVar8);
                return;
              }
LAB_01827b18:
              local_90 = auVar7;
              FUN_0127e70c(local_80,&local_68,*(undefined8 *)puVar13);
              if ((char)local_68 != '\0') {
                if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_01805d48(plVar23,0,0,0,0);
                uVar24 = 0;
                goto LAB_01827b68;
              }
            }
            else if (uVar2 == 10) {
              FUN_01815490(plVar23,0);
            }
            else {
              if (uVar2 != 0xd) goto switchD_018279ac_caseD_21;
              lVar18 = FUN_018104d4(plVar23,0,*(undefined8 *)(param_1 + 10),0);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              auVar25 = FUN_017e7d94(lVar18,0,0);
              local_90 = auVar25;
              uVar19 = FUN_016a1974(local_90,0);
              auVar6 = local_80;
              if ((uVar19 & 1) == 0) {
                *param_1 = 0xb;
                *(undefined1 (*) [16])(param_1 + 0x14) = local_90;
                if (*(int *)(*(long *)StringLiteral_3643 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_01098fc0(param_1 + 2,local_90,param_1,
                             *(undefined8 *)Sirenix_Serialization_DecimalSerializer_var);
                return;
              }
LAB_01827a78:
              local_80 = auVar6;
              FUN_016a1990(local_90,0);
            }
          }
          else {
            switch(uVar2) {
            case 0x20:
switchD_018279ac_caseD_20:
              *(uint *)((long)plVar23 + 0x8c) = uVar1 + 1;
              break;
            default:
              goto switchD_018279ac_caseD_21;
            case 0x22:
            case 0x27:
              lVar18 = FUN_01810bc4(plVar23,uVar2,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              auVar25 = FUN_017e7d94(lVar18,0,0);
              local_90 = auVar25;
              uVar19 = FUN_016a1974(local_90,0);
              if ((uVar19 & 1) == 0) {
                *param_1 = 2;
                *(undefined1 (*) [16])(param_1 + 0x14) = local_90;
                if (*(int *)(*(long *)StringLiteral_3643 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_01098fc0(param_1 + 2,local_90,param_1,
                             *(undefined8 *)Sirenix_Serialization_DecimalSerializer_var);
                return;
              }
              goto LAB_018273a4;
            case 0x2c:
              FUN_0181530c(plVar23,0);
              break;
            case 0x2d:
              lVar18 = FUN_018105e4(plVar23,1,1,*(undefined8 *)(param_1 + 10),0);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              auVar25 = FUN_013bdbc8(lVar18,0,*(undefined8 *)puVar10);
              local_80 = auVar25;
              uVar19 = FUN_0127e6c0(local_80,*(undefined8 *)puVar9);
              if ((uVar19 & 1) == 0) {
                *param_1 = 3;
                *(undefined1 (*) [16])(param_1 + 0xe) = local_80;
                if (*(int *)(*(long *)StringLiteral_3643 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_01098fc0(param_1 + 2,local_80,param_1,*(undefined8 *)puVar8);
                return;
              }
              goto LAB_018273dc;
            case 0x2e:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
              if (param_1[0xc] != 4) {
                *(uint *)((long)plVar23 + 0x8c) = uVar1 + 1;
                uVar24 = FUN_01815378(plVar23,uVar2,0);
                uVar21 = thunk_FUN_00d48444(Method_System_Numerics_BigInteger_CompareTo__);
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar24,uVar21);
              }
              lVar18 = FUN_018115b8(plVar23,4,*(undefined8 *)(param_1 + 10),0);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              auVar25 = FUN_017e7d94(lVar18,0,0);
              local_90 = auVar25;
              uVar19 = FUN_016a1974(local_90,0);
              if ((uVar19 & 1) == 0) {
                *param_1 = 5;
                *(undefined1 (*) [16])(param_1 + 0x14) = local_90;
                if (*(int *)(*(long *)StringLiteral_3643 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_01098fc0(param_1 + 2,local_90,param_1,
                             *(undefined8 *)Sirenix_Serialization_DecimalSerializer_var);
                return;
              }
              goto LAB_0182748c;
            case 0x2f:
              lVar18 = FUN_01810a00(plVar23,0,*(undefined8 *)(param_1 + 10),0);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              auVar25 = FUN_017e7d94(lVar18,0,0);
              local_90 = auVar25;
              uVar19 = FUN_016a1974(local_90,0);
              if ((uVar19 & 1) == 0) {
                *param_1 = 10;
                *(undefined1 (*) [16])(param_1 + 0x14) = local_90;
                if (*(int *)(*(long *)StringLiteral_3643 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_01098fc0(param_1 + 2,local_90,param_1,
                             *(undefined8 *)Sirenix_Serialization_DecimalSerializer_var);
                return;
              }
LAB_01827ac0:
              FUN_016a1990(local_90,0);
              break;
            case 0x49:
              lVar18 = FUN_01811390(plVar23,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              local_a0 = FUN_013bdbc8(lVar18,0,*(undefined8 *)puVar12);
              uVar19 = FUN_0127e6c0(local_a0,*(undefined8 *)puVar14);
              if ((uVar19 & 1) == 0) {
                *param_1 = 7;
                *(undefined1 (*) [16])(param_1 + 0x18) = local_a0;
                if (*(int *)(*(long *)StringLiteral_3643 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_01098fc0(param_1 + 2,local_a0,param_1,*(undefined8 *)puVar17);
                return;
              }
              goto LAB_0182744c;
            }
          }
        }
        else {
          if (0x5d < uVar2) {
            if (uVar2 != 0x66) {
              if (uVar2 == 0x6e) {
                lVar18 = FUN_01811ad0(plVar23,*(undefined8 *)(param_1 + 10),0);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                auVar25 = FUN_017e7d94(lVar18,0,0);
                local_90 = auVar25;
                uVar19 = FUN_016a1974(local_90,0);
                auVar25 = local_80;
                if ((uVar19 & 1) == 0) {
                  *param_1 = 9;
                  *(undefined1 (*) [16])(param_1 + 0x14) = local_90;
                  if (*(int *)(*(long *)StringLiteral_3643 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_01098fc0(param_1 + 2,local_90,param_1,
                               *(undefined8 *)Sirenix_Serialization_DecimalSerializer_var);
                  return;
                }
                goto LAB_0182737c;
              }
              if (uVar2 != 0x74) goto switchD_018279ac_caseD_21;
            }
            if (param_1[0xc] != 4) {
              *(uint *)((long)plVar23 + 0x8c) = uVar1 + 1;
              uVar24 = FUN_01815378(plVar23,uVar2,0);
              uVar21 = thunk_FUN_00d48444(Method_System_Numerics_BigInteger_CompareTo__);
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar24,uVar21);
            }
            lVar18 = *(long *)
                      Method_Sirenix_Utilities_DeepReflection_<>c__DisplayClass21_0_<CreateSlowDeepStaticValueGetterDelegate>b__0__
            ;
            if (uVar2 == 0x74) {
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar18 = *(long *)puVar15;
              }
              lVar22 = 8;
            }
            else {
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar18 = *(long *)puVar15;
              }
              lVar22 = 0x10;
            }
            uVar24 = *(undefined8 *)(*(long *)(lVar18 + 0xb8) + lVar22);
            *(undefined8 *)(param_1 + 0x12) = uVar24;
            lVar18 = FUN_01810dc8(plVar23,uVar24,*(undefined8 *)(param_1 + 10),0);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            auVar25 = FUN_013bdbc8(lVar18,0,*(undefined8 *)puVar10);
            local_80 = auVar25;
            uVar19 = FUN_0127e6c0(local_80,*(undefined8 *)puVar9);
            auVar3 = local_90;
            if ((uVar19 & 1) == 0) {
              *param_1 = 6;
              *(undefined1 (*) [16])(param_1 + 0xe) = local_80;
              if (*(int *)(*(long *)StringLiteral_3643 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_01098fc0(param_1 + 2,local_80,param_1,*(undefined8 *)puVar8);
              return;
            }
            goto LAB_01827578;
          }
          if (uVar2 == 0x4e) {
            lVar18 = FUN_0181127c(plVar23,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            local_a0 = FUN_013bdbc8(lVar18,0,*(undefined8 *)puVar12);
            uVar19 = FUN_0127e6c0(local_a0,*(undefined8 *)puVar14);
            auVar4 = local_90;
            auVar5 = local_80;
            if ((uVar19 & 1) == 0) {
              *param_1 = 8;
              *(undefined1 (*) [16])(param_1 + 0x18) = local_a0;
              if (*(int *)(*(long *)StringLiteral_3643 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_01098fc0(param_1 + 2,local_a0,param_1,*(undefined8 *)puVar17);
              return;
            }
            goto LAB_018275dc;
          }
          if (uVar2 == 0x5d) {
            *(uint *)((long)plVar23 + 0x8c) = uVar1 + 1;
            if ((1 < *(int *)((long)plVar23 + 0x24) - 5U) && (*(int *)((long)plVar23 + 0x24) != 8))
            {
              uVar24 = FUN_01815378(plVar23,0x5d,0);
              uVar21 = thunk_FUN_00d48444(Method_System_Numerics_BigInteger_CompareTo__);
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar24,uVar21);
            }
            FUN_01806a80(plVar23,0xe,0);
            uVar24 = 0;
            goto LAB_01827b68;
          }
switchD_018279ac_caseD_21:
          *(uint *)((long)plVar23 + 0x8c) = uVar1 + 1;
          if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar19 = FUN_016f68bc(uVar2,0);
          if ((uVar19 & 1) == 0) {
            uVar24 = FUN_01815378(plVar23,uVar2,0);
            uVar21 = thunk_FUN_00d48444(Method_System_Numerics_BigInteger_CompareTo__);
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar24,uVar21);
          }
        }
        *(undefined8 *)(param_1 + 0x12) = 0;
      } while( true );
    }
    uVar24 = 0;
  }
LAB_01827b68:
  *param_1 = 0xfffffffe;
  puVar8 = PTR_DAT_033f2918;
  if (*(int *)(*(long *)StringLiteral_3643 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_011ccb9c(param_1 + 2,uVar24,*(undefined8 *)puVar8);
  return;
}


