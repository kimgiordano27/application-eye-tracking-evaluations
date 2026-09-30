/*
FUNCTION_NAME: FUN_01825490
ENTRY_POINT: 01825490
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01825490(undefined4 *param_1)

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
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  
  if ((DAT_037794ad & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_89__);
    thunk_FUN_00d48444(StringLiteral_5867);
    thunk_FUN_00d48444(PTR_DAT_033edb78);
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
                      UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugData_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_get_Count__)
    ;
    DAT_037794ad = 1;
  }
  puVar14 = StringLiteral_5867;
  puVar13 = StringLiteral_3643;
  puVar12 = Method_OVRPlugin_<>c_<_cctor>b__796_89__;
  puVar11 = Method_UnityEngine_ProBuilder_ProBuilderMesh_SetFaceColor__;
  puVar9 = UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugData_TypeInfo;
  puVar8 = System_Predicate<ScriptableRenderPass>_TypeInfo;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  auVar6 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  auVar21 = ZEXT816(0);
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  auVar7 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  plVar19 = *(long **)(param_1 + 8);
  switch(*param_1) {
  case 0:
    local_80 = *(undefined1 (*) [16])(param_1 + 0xe);
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 0xffffffff;
    goto LAB_018255e4;
  case 1:
    local_80 = *(undefined1 (*) [16])(param_1 + 0xe);
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 0xffffffff;
    goto LAB_01825714;
  case 2:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x12);
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *param_1 = 0xffffffff;
    local_80 = ZEXT816(0);
LAB_01825694:
    FUN_016a1990(local_90,0);
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar20 = FUN_01816070(plVar19,param_1[0xc],0);
    break;
  case 3:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x12);
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *param_1 = 0xffffffff;
LAB_01825c64:
    local_80 = auVar21;
    FUN_016a1990(local_90,0);
    uVar20 = 0;
    break;
  case 4:
    local_a0 = *(undefined1 (*) [16])(param_1 + 0x16);
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *param_1 = 0xffffffff;
LAB_01825b64:
    local_90 = auVar5;
    local_80 = auVar6;
    FUN_0127e70c(local_a0,&local_68,
                 *(undefined8 *)
                  Method_UnityEngine_TextCore_Text_FontFeatureTable_<>c_<SortGlyphPairAdjustmentRecords>b__6_1__
                );
    goto LAB_01825c24;
  case 5:
    local_a0 = *(undefined1 (*) [16])(param_1 + 0x16);
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *param_1 = 0xffffffff;
LAB_01825c0c:
    local_90 = auVar3;
    local_80 = auVar4;
    FUN_0127e70c(local_a0,&local_68,
                 *(undefined8 *)
                  Method_UnityEngine_TextCore_Text_FontFeatureTable_<>c_<SortGlyphPairAdjustmentRecords>b__6_1__
                );
    goto LAB_01825c24;
  case 6:
    local_80 = *(undefined1 (*) [16])(param_1 + 0xe);
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 0xffffffff;
    local_90 = ZEXT816(0);
LAB_018259d4:
    FUN_0127e70c(local_80,&local_68,*(undefined8 *)puVar11);
    if ((char)local_68 == '\0') {
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    else {
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar15 = plVar19[0x10];
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar1 = *(int *)((long)plVar19 + 0x8c) + 1;
      if (*(uint *)(lVar15 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (*(short *)(lVar15 + (long)(int)uVar1 * 2 + 0x20) == 0x49) {
        lVar15 = FUN_018114a4(plVar19,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        local_a0 = FUN_013bdbc8(lVar15,0,*(undefined8 *)
                                          Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_get_Count__
                               );
        uVar16 = FUN_0127e6c0(local_a0,*(undefined8 *)
                                        Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_u32__);
        if ((uVar16 & 1) == 0) {
          *param_1 = 7;
          *(undefined1 (*) [16])(param_1 + 0x16) = local_a0;
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01098fc0(param_1 + 2,local_a0,param_1,*(undefined8 *)puVar12);
          return;
        }
        goto LAB_018256e4;
      }
    }
    lVar15 = FUN_018115b8(plVar19,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    auVar21 = FUN_017e7d94(lVar15,0,0);
    local_90 = auVar21;
    uVar16 = FUN_016a1974(local_90,0);
    if ((uVar16 & 1) == 0) {
      *param_1 = 8;
      *(undefined1 (*) [16])(param_1 + 0x12) = local_90;
      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098fc0(param_1 + 2,local_90,param_1,*(undefined8 *)puVar14);
      return;
    }
    goto LAB_01825cb4;
  case 7:
    local_a0 = *(undefined1 (*) [16])(param_1 + 0x16);
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *param_1 = 0xffffffff;
    local_80 = ZEXT816(0);
    local_90 = ZEXT816(0);
LAB_018256e4:
    FUN_0127e70c(local_a0,&local_68,
                 *(undefined8 *)
                  Method_UnityEngine_TextCore_Text_FontFeatureTable_<>c_<SortGlyphPairAdjustmentRecords>b__6_1__
                );
LAB_01825c24:
    uVar20 = CONCAT44(uStack_64,local_68);
    break;
  case 8:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x12);
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *param_1 = 0xffffffff;
    local_80 = auVar21;
LAB_01825cb4:
    FUN_016a1990(local_90,0);
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar20 = (**(code **)(*plVar19 + 0x248))(plVar19,*(undefined8 *)(*plVar19 + 0x250));
    break;
  case 9:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x12);
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *param_1 = 0xffffffff;
    local_80 = ZEXT816(0);
LAB_018258d0:
    FUN_016a1990(local_90,0);
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar20 = (**(code **)(*plVar19 + 0x248))(plVar19,*(undefined8 *)(*plVar19 + 0x250));
    break;
  case 10:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x12);
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *param_1 = 0xffffffff;
    local_80 = ZEXT816(0);
    goto LAB_01825ab4;
  case 0xb:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x12);
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *param_1 = 0xffffffff;
    local_80 = ZEXT816(0);
    goto LAB_01825618;
  case 0xc:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x12);
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *param_1 = 0xffffffff;
LAB_01825654:
    FUN_016a1990(local_90,0);
    uVar20 = 0;
    break;
  default:
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0180fd40(plVar19,0);
    uVar1 = *(uint *)((long)plVar19 + 0x24);
    if (0xc < uVar1) {
LAB_018260dc:
      lVar15 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar20 = FUN_01731954(0);
      local_68 = *(undefined4 *)((long)plVar19 + 0x24);
      uVar17 = thunk_FUN_00d48444(StringLiteral_12546);
      uVar17 = thunk_FUN_00d61fa0(uVar17,&local_68);
      uVar18 = thunk_FUN_00d48444(
                                 Method_System_DateTime_System_Runtime_Serialization_ISerializable_GetObjectData__
                                 );
      uVar20 = FUN_018651d4(uVar18,uVar20,uVar17,0);
      uVar20 = FUN_018056b4(plVar19,uVar20,0);
      uVar17 = thunk_FUN_00d48444(
                                 Method_System_Collections_Generic_List<IXRSelectInteractor>_set_Item__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar20,uVar17);
    }
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x665U) != 0) goto LAB_0182572c;
    if (uVar1 != 8) {
      if (uVar1 != 0xc) goto LAB_018260dc;
      lVar15 = FUN_01811bac(plVar19,*(undefined8 *)(param_1 + 10),0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_90 = FUN_017e7d94(lVar15,0,0);
      uVar16 = FUN_016a1974(local_90,0);
      if ((uVar16 & 1) == 0) {
        *param_1 = 0xc;
        *(undefined1 (*) [16])(param_1 + 0x12) = local_90;
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                    /* try { // try from 0182606c to 0192607b has its CatchHandler @ 0182607c */
          thunk_FUN_00d32864();
        }
                    /* catch() { ... } // from try @ 01825fc8 with catch @ 0182607c
                       catch() { ... } // from try @ 0182606c with catch @ 0182607c */
                    /* try { // try from 01826080 to 01926083 has its CatchHandler @ 0182608c */
        FUN_01098fc0(param_1 + 2,local_90,param_1,*(undefined8 *)puVar14);
        return;
                    /* try { // try from 01826084 to 0192608f has its CatchHandler @ 01825ec0 */
      }
      goto LAB_01825654;
    }
    lVar15 = FUN_0180ff90(plVar19,1,*(undefined8 *)(param_1 + 10),0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    local_80 = FUN_013bdbc8(lVar15,0,*(undefined8 *)puVar9);
    uVar16 = FUN_0127e6c0(local_80,*(undefined8 *)puVar8);
    if ((uVar16 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_80;
      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098fc0(param_1 + 2,local_80,param_1,*(undefined8 *)PTR_DAT_033edb78);
      return;
    }
LAB_018255e4:
    FUN_0127e70c(local_80,&local_68,*(undefined8 *)puVar11);
    if ((char)local_68 == '\0') {
LAB_0182572c:
      puVar10 = Newtonsoft_Json_JsonReader_State_TypeInfo;
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar15 = plVar19[0x10];
joined_r0x01825734:
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar1 = *(uint *)((long)plVar19 + 0x8c);
      if (*(uint *)(lVar15 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01826080 with catch @ 0182608c
                        */
        FUN_00da5194();
      }
      uVar2 = *(ushort *)(lVar15 + (long)(int)uVar1 * 2 + 0x20);
      if (0x39 < uVar2) {
        if (uVar2 < 0x4f) {
          if (uVar2 != 0x49) {
            if (uVar2 != 0x4e) goto switchD_01825784_caseD_b;
            lVar15 = FUN_0181127c(plVar19,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            local_a0 = FUN_013bdbc8(lVar15,0,*(undefined8 *)
                                              Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_get_Count__
                                   );
            uVar16 = FUN_0127e6c0(local_a0,*(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_u32__);
            auVar5 = local_90;
            auVar6 = local_80;
            if ((uVar16 & 1) == 0) {
              *param_1 = 4;
              *(undefined1 (*) [16])(param_1 + 0x16) = local_a0;
              if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_01098fc0(param_1 + 2,local_a0,param_1,*(undefined8 *)puVar12);
              return;
            }
            goto LAB_01825b64;
          }
          lVar15 = FUN_01811390(plVar19,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          local_a0 = FUN_013bdbc8(lVar15,0,*(undefined8 *)
                                            Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_get_Count__
                                 );
          uVar16 = FUN_0127e6c0(local_a0,*(undefined8 *)
                                          Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_u32__);
          auVar3 = local_90;
          auVar4 = local_80;
          if ((uVar16 & 1) == 0) {
            *param_1 = 5;
            *(undefined1 (*) [16])(param_1 + 0x16) = local_a0;
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_01098fc0(param_1 + 2,local_a0,param_1,*(undefined8 *)puVar12);
            return;
          }
          goto LAB_01825c0c;
        }
        if (uVar2 == 0x5d) {
          *(uint *)((long)plVar19 + 0x8c) = uVar1 + 1;
          if ((1 < *(int *)((long)plVar19 + 0x24) - 5U) && (*(int *)((long)plVar19 + 0x24) != 8)) {
            uVar20 = FUN_01815378(plVar19,0x5d,0);
            uVar17 = thunk_FUN_00d48444(
                                       Method_System_Collections_Generic_List<IXRSelectInteractor>_set_Item__
                                       );
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar20,uVar17);
          }
          FUN_01806a80(plVar19,0xe,0);
          uVar20 = 0;
          break;
        }
        if (uVar2 == 0x6e) {
          lVar15 = FUN_01811ad0(plVar19,*(undefined8 *)(param_1 + 10),0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          auVar21 = FUN_017e7d94(lVar15,0,0);
          local_90 = auVar21;
          uVar16 = FUN_016a1974(local_90,0);
          auVar21 = local_80;
          if ((uVar16 & 1) == 0) {
            *param_1 = 3;
            *(undefined1 (*) [16])(param_1 + 0x12) = local_90;
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_01098fc0(param_1 + 2,local_90,param_1,*(undefined8 *)puVar14);
            return;
          }
          goto LAB_01825c64;
        }
switchD_01825784_caseD_b:
        *(uint *)((long)plVar19 + 0x8c) = uVar1 + 1;
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_016f68bc(uVar2,0);
        if ((uVar16 & 1) == 0) {
          uVar20 = FUN_01815378(plVar19,uVar2,0);
          uVar17 = thunk_FUN_00d48444(
                                     Method_System_Collections_Generic_List<IXRSelectInteractor>_set_Item__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar20,uVar17);
        }
        goto LAB_018257e8;
      }
      switch(uVar2) {
      case 9:
      case 0x20:
        *(uint *)((long)plVar19 + 0x8c) = uVar1 + 1;
        break;
      case 10:
        FUN_01815490(plVar19,0);
        break;
      case 0xb:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x21:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
        goto switchD_01825784_caseD_b;
      case 0xd:
        goto switchD_01825784_caseD_d;
      case 0x22:
      case 0x27:
        lVar15 = FUN_01810bc4(plVar19,uVar2,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar21 = FUN_017e7d94(lVar15,0,0);
        local_90 = auVar21;
        uVar16 = FUN_016a1974(local_90,0);
        if ((uVar16 & 1) == 0) {
          *param_1 = 2;
          *(undefined1 (*) [16])(param_1 + 0x12) = local_90;
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01098fc0(param_1 + 2,local_90,param_1,*(undefined8 *)puVar14);
          return;
        }
        goto LAB_01825694;
      case 0x2c:
        FUN_0181530c(plVar19,0);
        break;
      case 0x2d:
        lVar15 = FUN_018105e4(plVar19,1,1,*(undefined8 *)(param_1 + 10),0);
                    /* try { // try from 01825ec0 to 01925f33 has its CatchHandler @ 01825ec0
                       catch() { ... } // from try @ 01825ec0 with catch @ 01825ec0
                       catch() { ... } // from try @ 01825f50 with catch @ 01825ec0
                       catch() { ... } // from try @ 01825fac with catch @ 01825ec0
                       catch() { ... } // from try @ 01825fe0 with catch @ 01825ec0
                       catch() { ... } // from try @ 01826084 with catch @ 01825ec0 */
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar21 = FUN_013bdbc8(lVar15,0,*(undefined8 *)puVar9);
        local_80 = auVar21;
        uVar16 = FUN_0127e6c0(local_80,*(undefined8 *)puVar8);
        if ((uVar16 & 1) == 0) {
          *param_1 = 6;
          *(undefined1 (*) [16])(param_1 + 0xe) = local_80;
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01098fc0(param_1 + 2,local_80,param_1,*(undefined8 *)PTR_DAT_033edb78);
          return;
        }
        goto LAB_018259d4;
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
        lVar15 = FUN_018115b8(plVar19,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar21 = FUN_017e7d94(lVar15,0,0);
        local_90 = auVar21;
        uVar16 = FUN_016a1974(local_90,0);
        if ((uVar16 & 1) == 0) {
          *param_1 = 9;
          *(undefined1 (*) [16])(param_1 + 0x12) = local_90;
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01098fc0(param_1 + 2,local_90,param_1,*(undefined8 *)puVar14);
          return;
        }
        goto LAB_018258d0;
      case 0x2f:
                    /* try { // try from 01825fa8 to 01925fab has its CatchHandler @ 01825fb0 */
                    /* try { // try from 01825fac to 01925fc7 has its CatchHandler @ 01825ec0 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01825f34 with catch @ 01825fb0
                       catch(type#1 @ 03274860) { ... } // from try @ 01825fa8 with catch @ 01825fb0
                        */
        lVar15 = FUN_01810a00(plVar19,0,*(undefined8 *)(param_1 + 10),0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar21 = FUN_017e7d94(lVar15,0,0);
                    /* try { // try from 01825fc8 to 01925fdf has its CatchHandler @ 0182607c */
        local_90 = auVar21;
        uVar16 = FUN_016a1974(local_90,0);
        if ((uVar16 & 1) == 0) {
                    /* try { // try from 01825fe0 to 0192606b has its CatchHandler @ 01825ec0 */
          *param_1 = 10;
          *(undefined1 (*) [16])(param_1 + 0x12) = local_90;
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01098fc0(param_1 + 2,local_90,param_1,*(undefined8 *)puVar14);
          return;
        }
LAB_01825ab4:
        FUN_016a1990(local_90,0);
        goto LAB_0182572c;
      default:
        if (uVar2 != 0) goto switchD_01825784_caseD_b;
        lVar15 = FUN_018119d0(plVar19,*(undefined8 *)(param_1 + 10),0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar21 = FUN_013bdbc8(lVar15,0,*(undefined8 *)puVar9);
        local_80 = auVar21;
        uVar16 = FUN_0127e6c0(local_80,*(undefined8 *)puVar8);
        auVar7 = local_90;
        if ((uVar16 & 1) == 0) {
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 0xe) = local_80;
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01098fc0(param_1 + 2,local_80,param_1,*(undefined8 *)PTR_DAT_033edb78);
          return;
        }
LAB_01825714:
        local_90 = auVar7;
        FUN_0127e70c(local_80,&local_68,*(undefined8 *)puVar11);
        if ((char)local_68 != '\0') {
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01805d48(plVar19,0,0,0,0);
          uVar20 = 0;
          goto LAB_01825cdc;
        }
        goto LAB_0182572c;
      }
LAB_018257e8:
      lVar15 = plVar19[0x10];
      goto joined_r0x01825734;
    }
    uVar20 = 0;
  }
LAB_01825cdc:
  *param_1 = 0xfffffffe;
  puVar8 = PTR_DAT_033f2918;
  if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_011ccb9c(param_1 + 2,uVar20,*(undefined8 *)puVar8);
  return;
switchD_01825784_caseD_d:
                    /* try { // try from 01825f34 to 01925f4f has its CatchHandler @ 01825fb0 */
  lVar15 = FUN_018104d4(plVar19,0,*(undefined8 *)(param_1 + 10),0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* try { // try from 01825f50 to 01925fa7 has its CatchHandler @ 01825ec0 */
  auVar21 = FUN_017e7d94(lVar15,0,0);
  local_90 = auVar21;
  uVar16 = FUN_016a1974(local_90,0);
  if ((uVar16 & 1) == 0) {
    *param_1 = 0xb;
    *(undefined1 (*) [16])(param_1 + 0x12) = local_90;
    if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01098fc0(param_1 + 2,local_90,param_1,*(undefined8 *)puVar14);
    return;
  }
LAB_01825618:
  FUN_016a1990(local_90,0);
  goto LAB_0182572c;
}


