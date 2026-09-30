/*
FUNCTION_NAME: Oculus.Interaction.UnityCanvas.CanvasCylinder$$get_Rotation
ENTRY_POINT: 018c0e98
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_UnityCanvas_CanvasCylinder__get_Rotation
               (int param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  long lStack0000000000000018;
  
  puVar5 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  lVar1 = tpidr_el0;
  lStack0000000000000018 = *(long *)(lVar1 + 0x28);
  if ((DAT_037799a5 & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_ListBindableAttribute_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Texture2D___TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(Method_System_Data_Common_UInt32Storage_Aggregate__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7239);
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(
                      Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                      );
    thunk_FUN_00d48444(Method_TMPro_SetPropertyUtility_SetStruct<char>__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
    DAT_037799a5 = 1;
  }
  puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
  puVar6 = OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
  puVar19 = (undefined8 *)System_ComponentModel_ListBindableAttribute_TypeInfo;
  puVar4 = System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo;
  puVar3 = PTR_DAT_033f2f78;
  if ((((param_2 == (long *)0x0) || (*param_2 != *(long *)puVar5)) &&
      ((param_3 == (long *)0x0 || (*param_3 != *(long *)puVar5)))) ||
     ((param_1 != 0x3f && (param_1 != 0)))) {
    if (((param_2 == (long *)0x0) ||
        (*param_2 != *(long *)System_ComponentModel_ListBindableAttribute_TypeInfo)) &&
       ((param_3 == (long *)0x0 ||
        (*param_3 != *(long *)System_ComponentModel_ListBindableAttribute_TypeInfo)))) {
      if (((((param_2 != (long *)0x0) &&
            (*param_2 == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__)) ||
           ((param_3 != (long *)0x0 &&
            (*param_3 == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__)))) ||
          ((param_2 != (long *)0x0 &&
           (*param_2 == *(long *)System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo)))) ||
         ((param_3 != (long *)0x0 &&
          (*param_3 == *(long *)System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo)))) {
        if ((param_2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_018c1618;
        if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01731954(0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar7);
        }
        auVar22 = FUN_017004ec(param_2,uVar8,0);
        uVar10 = auVar22._8_8_;
        uVar8 = auVar22._0_8_;
        uVar9 = FUN_01731954(0);
        auVar22 = FUN_017004ec(param_3,uVar9,0);
        uVar11 = auVar22._8_8_;
        uVar9 = auVar22._0_8_;
        puVar19 = (undefined8 *)puVar4;
        if (0x2a < param_1) {
          if (param_1 < 0x42) {
            if (param_1 != 0x3f) {
              if (param_1 == 0x41) {
LAB_018c1420:
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                auVar22 = FUN_017d22e0(uVar8,uVar10,uVar9,uVar11,0);
                goto LAB_018c151c;
              }
              goto LAB_018c16d0;
            }
LAB_018c14f4:
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            auVar22 = FUN_017d20c8(uVar8,uVar10,uVar9,uVar11,0);
          }
          else if (param_1 == 0x45) {
LAB_018c14c8:
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            auVar22 = FUN_017d2230(uVar8,uVar10,uVar9,uVar11,0);
          }
          else {
            if (param_1 != 0x49) goto LAB_018c16d0;
LAB_018c1388:
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            auVar22 = FUN_017d217c(uVar8,uVar10,uVar9,uVar11,0);
          }
LAB_018c151c:
          uVar8 = *puVar19;
          goto LAB_018c152c;
        }
        if (param_1 < 0xd) {
          if (param_1 == 0) goto LAB_018c14f4;
          if (param_1 == 0xc) goto LAB_018c1420;
        }
        else {
          if (param_1 == 0x1a) goto LAB_018c14c8;
          if (param_1 == 0x2a) goto LAB_018c1388;
        }
        goto LAB_018c16d0;
      }
      if ((((param_2 != (long *)0x0) &&
           (*param_2 == *(long *)System_Runtime_InteropServices_InAttribute_TypeInfo)) ||
          ((param_3 != (long *)0x0 &&
           (*param_3 == *(long *)System_Runtime_InteropServices_InAttribute_TypeInfo)))) ||
         (((param_2 != (long *)0x0 && (*param_2 == *(long *)PTR_DAT_033f2f78)) ||
          ((param_3 != (long *)0x0 && (*param_3 == *(long *)PTR_DAT_033f2f78)))))) {
        if ((param_2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_018c1618;
        if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01731954(0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar7);
        }
        dVar20 = (double)FUN_01700318(param_2,uVar8,0);
        uVar8 = FUN_01731954(0);
        dVar21 = (double)FUN_01700318(param_3,uVar8,0);
        if (param_1 < 0x2b) {
          if (param_1 < 0xd) {
            if (param_1 == 0) goto LAB_018c16ac;
            if (param_1 == 0xc) goto LAB_018c1670;
          }
          else {
            if (param_1 == 0x1a) goto LAB_018c16a0;
            if (param_1 == 0x2a) goto LAB_018c14bc;
          }
          goto LAB_018c16d0;
        }
        if (param_1 < 0x42) {
          if (param_1 != 0x3f) {
            if (param_1 == 0x41) {
LAB_018c1670:
              uVar8 = *(undefined8 *)puVar3;
              auVar22._8_8_ = in_stack_00000010;
              auVar22._0_8_ = dVar20 / dVar21;
              goto LAB_018c152c;
            }
            goto LAB_018c16d0;
          }
LAB_018c16ac:
          uVar8 = *(undefined8 *)puVar3;
          auVar22._8_8_ = in_stack_00000010;
          auVar22._0_8_ = dVar20 + dVar21;
        }
        else if (param_1 == 0x45) {
LAB_018c16a0:
          uVar8 = *(undefined8 *)puVar3;
          auVar22._8_8_ = in_stack_00000010;
          auVar22._0_8_ = dVar20 * dVar21;
        }
        else {
          if (param_1 != 0x49) goto LAB_018c16d0;
LAB_018c14bc:
          uVar8 = *(undefined8 *)puVar3;
          auVar22._8_8_ = in_stack_00000010;
          auVar22._0_8_ = dVar20 - dVar21;
        }
        goto LAB_018c152c;
      }
      if (param_2 == (long *)0x0) {
        lVar12 = *(long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__;
        lVar13 = *(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
        lVar14 = *(long *)Method_System_Data_Common_UInt32Storage_Aggregate__;
        lVar15 = *(long *)
                  Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
        ;
        lVar16 = *(long *)StringLiteral_7239;
        lVar17 = *(long *)UnityEngine_Texture2D___TypeInfo;
LAB_018c1550:
        if ((param_3 == (long *)0x0) ||
           ((((lVar18 = *param_3,
              lVar18 != *(long *)
                         Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
              && (lVar18 != lVar12)) &&
             ((lVar18 != lVar13 &&
              (((lVar18 != lVar14 && (lVar18 != lVar15)) && (lVar18 != lVar16)))))) &&
            (lVar18 != lVar17)))) goto LAB_018c16d0;
      }
      else {
        lVar18 = *param_2;
        if (((((lVar18 != *(long *)
                           Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
               ) && (lVar12 = *(long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__,
                    lVar18 != lVar12)) &&
             (lVar13 = *(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo,
             lVar18 != lVar13)) &&
            ((lVar14 = *(long *)Method_System_Data_Common_UInt32Storage_Aggregate__,
             lVar18 != lVar14 &&
             (lVar15 = *(long *)
                        Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
             , lVar18 != lVar15)))) &&
           ((lVar16 = *(long *)StringLiteral_7239, lVar18 != lVar16 &&
            (lVar17 = *(long *)UnityEngine_Texture2D___TypeInfo, lVar18 != lVar17))))
        goto LAB_018c1550;
      }
      if ((param_2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_018c1618;
      if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01731954(0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar7);
      }
      lVar12 = FUN_016ff5a8(param_2,uVar8,0);
      uVar8 = FUN_01731954(0);
      lVar13 = FUN_016ff5a8(param_3,uVar8,0);
      if (param_1 < 0x2b) {
        if (param_1 < 0xd) {
          if (param_1 == 0) goto LAB_018c1700;
          if (param_1 == 0xc) goto LAB_018c16e8;
        }
        else {
          if (param_1 == 0x1a) goto LAB_018c16f4;
          if (param_1 == 0x2a) goto LAB_018c1694;
        }
LAB_018c16d0:
        uVar8 = 0;
        *param_4 = 0;
        goto LAB_018c1620;
      }
      if (param_1 < 0x42) {
        if (param_1 != 0x3f) {
          if (param_1 == 0x41) {
LAB_018c16e8:
            uVar8 = *(undefined8 *)puVar6;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = in_stack_00000010;
            auVar22 = auVar2 << 0x40;
            if (lVar13 != 0) {
              auVar22._8_8_ = in_stack_00000010;
              auVar22._0_8_ = lVar12 / lVar13;
            }
            goto LAB_018c152c;
          }
          goto LAB_018c16d0;
        }
LAB_018c1700:
        uVar8 = *(undefined8 *)puVar6;
        auVar22._8_8_ = in_stack_00000010;
        auVar22._0_8_ = lVar13 + lVar12;
      }
      else if (param_1 == 0x45) {
LAB_018c16f4:
        uVar8 = *(undefined8 *)puVar6;
        auVar22._8_8_ = in_stack_00000010;
        auVar22._0_8_ = lVar13 * lVar12;
      }
      else {
        if (param_1 != 0x49) goto LAB_018c16d0;
LAB_018c1694:
        uVar8 = *(undefined8 *)puVar6;
        auVar22._8_8_ = in_stack_00000010;
        auVar22._0_8_ = lVar12 - lVar13;
      }
LAB_018c152c:
      _in_stack_00000008 = auVar22;
      uVar8 = thunk_FUN_00d61fa0(uVar8,&stack0x00000008);
      goto LAB_018c1530;
    }
    if ((param_2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      auVar22 = FUN_0184da2c(param_2,0);
      uVar10 = auVar22._8_8_;
      uVar8 = auVar22._0_8_;
      auVar22 = FUN_0184da2c(param_3,0);
      uVar11 = auVar22._8_8_;
      uVar9 = auVar22._0_8_;
      if (param_1 < 0x2b) {
        if (param_1 < 0xd) {
          if (param_1 == 0) goto LAB_018c1478;
          if (param_1 == 0xc) goto LAB_018c13d4;
        }
        else {
          if (param_1 == 0x1a) goto LAB_018c144c;
          if (param_1 == 0x2a) goto LAB_018c1344;
        }
      }
      else if (param_1 < 0x42) {
        if (param_1 == 0x3f) {
LAB_018c1478:
          if (*(int *)(*puVar19 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar22 = FUN_01e1a92c(uVar8,uVar10,uVar9,uVar11,0);
          goto LAB_018c151c;
        }
        if (param_1 == 0x41) {
LAB_018c13d4:
          if (*(int *)(*puVar19 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar22 = FUN_01e1adf0(uVar8,uVar10,uVar9,uVar11,0);
          goto LAB_018c151c;
        }
      }
      else {
        if (param_1 == 0x45) {
LAB_018c144c:
          if (*(int *)(*puVar19 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar22 = FUN_01e1a9d8(uVar8,uVar10,uVar9,uVar11,0);
          goto LAB_018c151c;
        }
        if (param_1 == 0x49) {
LAB_018c1344:
          if (*(int *)(*puVar19 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar22 = FUN_01e1949c(uVar8,uVar10,uVar9,uVar11,0);
          goto LAB_018c151c;
        }
      }
      goto LAB_018c16d0;
    }
LAB_018c1618:
    *param_4 = 0;
  }
  else {
    if (param_2 == (long *)0x0) {
      uVar8 = 0;
      if (param_3 != (long *)0x0) goto LAB_018c0fec;
LAB_018c1290:
      uVar9 = 0;
    }
    else {
      uVar8 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      if (param_3 == (long *)0x0) goto LAB_018c1290;
LAB_018c0fec:
      uVar9 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
    }
    uVar8 = FUN_015f5b28(uVar8,uVar9,0);
LAB_018c1530:
    *param_4 = uVar8;
  }
  uVar8 = 1;
LAB_018c1620:
  if (*(long *)(lVar1 + 0x28) != lStack0000000000000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


