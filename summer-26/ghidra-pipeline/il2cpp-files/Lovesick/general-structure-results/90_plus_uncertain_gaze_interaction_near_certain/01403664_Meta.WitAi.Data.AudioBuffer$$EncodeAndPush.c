/*
FUNCTION_NAME: Meta.WitAi.Data.AudioBuffer$$EncodeAndPush
ENTRY_POINT: 01403664
PROGRAM: Lovesick-libil2cpp.so
SCORE: 152
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


long Meta_WitAi_Data_AudioBuffer__EncodeAndPush(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  int *piVar15;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long lVar16;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
  thunk_FUN_00d48444(UnityEngine_Pose___TypeInfo);
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                    );
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__);
  thunk_FUN_00d48444(Method_TuneTargetBasic_<Complete>b__23_0__);
  thunk_FUN_00d48444(System_Net_ServerCertValidationCallback_CallbackContext_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_3758);
  thunk_FUN_00d48444(PTR_DAT_033f4af0);
  thunk_FUN_00d48444(PTR_DAT_033f3868);
  thunk_FUN_00d48444(Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__);
  thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  thunk_FUN_00d48444(System_Func<Mesh,_Vector3[]>_TypeInfo);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vuzp1_s8__);
  thunk_FUN_00d48444(OVR_OpenVR_IVRApplications__SetDefaultApplicationForMimeType_TypeInfo);
  thunk_FUN_00d48444(
                    Method_System_Reflection_CustomAttributeData_UnboxValues<CustomAttributeTypedArgument>__
                    );
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vaddvq_u64__);
  thunk_FUN_00d48444(OVR_OpenVR_EDualAnalogWhich_TypeInfo);
  *(undefined1 *)(unaff_x24 + 0x90f) = 1;
  puVar3 = StringLiteral_302;
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vuzp1_s8__;
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (unaff_x23 == (long *)0x0) goto LAB_01403f9c;
  if (4 < (int)unaff_x23[7]) {
    if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_016f5f58((long)&stack0x00000000 + 4,0);
    uVar7 = FUN_015f5b28(*(undefined8 *)puVar1,uVar7,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    FUN_02660dac(uVar7,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_0268b4e0();
  if ((uVar8 & 1) != 0) {
    iVar5 = *(int *)(*(long *)puVar3 + 0xe0);
    puVar12 = (undefined8 *)OVR_OpenVR_IVRApplications__SetDefaultApplicationForMimeType_TypeInfo;
joined_r0x01403880:
    if (iVar5 == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*puVar12,0);
    return 0;
  }
  uVar7 = (**(code **)(*unaff_x23 + 0x498))();
                    /* try { // try from 01403844 to 01503907 has its CatchHandler @ 01403844
                       catch() { ... } // from try @ 01403844 with catch @ 01403844
                       catch() { ... } // from try @ 01403998 with catch @ 01403844
                       catch() { ... } // from try @ 014039e4 with catch @ 01403844
                       catch() { ... } // from try @ 01403a14 with catch @ 01403844
                       catch() { ... } // from try @ 01403a4c with catch @ 01403844 */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar8 = FUN_0268b4e0(uVar7,0,0);
  if ((uVar8 & 1) != 0) {
    iVar5 = *(int *)(*(long *)puVar3 + 0xe0);
    puVar12 = (undefined8 *)OVR_OpenVR_EDualAnalogWhich_TypeInfo;
    goto joined_r0x01403880;
  }
  if (unaff_x22 == 0) goto LAB_01403f9c;
  FUN_010e58e8();
  lVar16 = in_stack_00000008;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_02681b9c(lVar16,0,0);
  if ((uVar8 & 1) != 0) {
    iVar5 = *(int *)(*(long *)puVar3 + 0xe0);
    puVar12 = (undefined8 *)System_Func<Mesh,_Vector3[]>_TypeInfo;
    goto joined_r0x01403880;
  }
  if (in_stack_00000000._4_1_ == '\0') {
    uVar7 = (**(code **)(*unaff_x23 + 0x4d8))();
                    /* try { // try from 01403908 to 0150390f has its CatchHandler @ 014039f4 */
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* try { // try from 01403918 to 0150391f has its CatchHandler @ 014039ec */
      thunk_FUN_00d32864(*(long *)puVar2);
    }
                    /* try { // try from 01403928 to 01503933 has its CatchHandler @ 014039f0 */
    uVar8 = FUN_02681b9c(uVar7,0,0);
    if ((uVar8 & 1) == 0) {
LAB_014039b8:
      lVar16 = FUN_010e6254();
      if (lVar16 == 0) goto LAB_01403f9c;
                    /* try { // try from 014039dc to 015039df has its CatchHandler @ 014039e8 */
                    /* try { // try from 014039e0 to 015039e3 has its CatchHandler @ 014039e4 */
      if (*(int *)(lVar16 + 0x18) != 1) goto LAB_014038ec;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014039e0 with catch @ 014039e4
                       try { // try from 014039e4 to 01503a0f has its CatchHandler @ 01403844 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014039dc with catch @ 014039e8
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01403918 with catch @ 014039ec
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01403928 with catch @ 014039f0
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01403908 with catch @ 014039f4
                        */
      if ((*(long *)(lVar16 + 0x20) == 0) ||
         (lVar10 = FUN_0268fd10(*(long *)(lVar16 + 0x20),0), lVar10 == 0)) goto LAB_01403f9c;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0140396c with catch @ 014039f8
                        */
      uVar7 = FUN_0269fe30(lVar10,0);
      uVar9 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        ();
                    /* try { // try from 01403a10 to 01503a13 has its CatchHandler @ 01403a3c */
                    /* try { // try from 01403a14 to 01503a43 has its CatchHandler @ 01403844 */
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar8 = FUN_02681b9c(uVar7,uVar9,0);
      puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaddvq_u64__;
      if ((uVar8 & 1) != 0) {
                    /* catch() { ... } // from try @ 01403a10 with catch @ 01403a3c */
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026610e4(*(undefined8 *)puVar1,0);
      }
      if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar16 = *(long *)(lVar16 + 0x20);
    }
    else {
      lVar16 = (**(code **)(*unaff_x23 + 0x4d8))();
      if ((lVar16 == 0) || (lVar16 = FUN_0268fd10(lVar16,0), lVar16 == 0)) goto LAB_01403f9c;
      uVar7 = FUN_0269fe30(lVar16,0);
                    /* try { // try from 0140396c to 01503997 has its CatchHandler @ 014039f8 */
      uVar9 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        ();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar8 = FUN_0268b4e0(uVar7,uVar9,0);
                    /* try { // try from 01403998 to 015039db has its CatchHandler @ 01403844 */
      if ((uVar8 & 1) == 0) goto LAB_014039b8;
      lVar16 = (**(code **)(*unaff_x23 + 0x4d8))();
    }
    if (lVar16 == 0) goto LAB_01403f9c;
    lVar16 = FUN_0268fd10(lVar16,0);
  }
  else {
LAB_014038ec:
    lVar16 = 0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_02681b9c(lVar16,0,0);
  lVar10 = lVar16;
  if ((uVar8 & 1) != 0) {
    if (lVar16 == 0) goto LAB_01403f9c;
    uVar7 = FUN_0269fe30(lVar16,0);
    uVar9 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      ();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar8 = FUN_02681b9c(uVar7,uVar9,0);
    lVar10 = 0;
    if ((uVar8 & 1) == 0) {
      lVar10 = lVar16;
    }
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_0268b4e0(lVar10,0,0);
  puVar1 = PTR_DAT_033f3868;
  if ((uVar8 & 1) != 0) {
    uVar7 = FUN_015f5b28(unaff_x23[3],
                         *(undefined8 *)
                          Method_System_Reflection_CustomAttributeData_UnboxValues<CustomAttributeTypedArgument>__
                         ,0);
    lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar16 == 0) goto LAB_01403f9c;
    FUN_0268afbc(lVar16,uVar7,0);
    lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                       (lVar16,0);
    uVar7 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      ();
    if (lVar10 == 0) goto LAB_01403f9c;
    FUN_0269fea8(lVar10,uVar7,0);
    lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                       (lVar16,0);
  }
  uVar7 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                    ();
  if (lVar10 != 0) {
    FUN_0269fea8(lVar10,uVar7,0);
    lVar16 = FUN_0268fd4c(lVar10,0);
    plVar11 = (long *)FUN_013eae18();
    if (plVar11 != (long *)0x0) {
      lVar10 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
            puVar12 = (undefined8 *)(lVar10 + (long)(*piVar15 + 0x24) * 0x10 + 0x138);
            goto LAB_01403c34;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_00d59724(plVar11,*(long *)
                                      Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                             ,0x24);
LAB_01403c34:
      iVar5 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      puVar4 = StringLiteral_3758;
      puVar3 = Method_TuneTargetBasic_<Complete>b__23_0__;
      puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__;
      if (lVar16 != 0) {
        if (iVar5 == 1) {
          FUN_010e58e8(lVar16,&stack0x00000008,
                       *(undefined8 *)Method_TuneTargetBasic_<Complete>b__23_0__);
          lVar10 = in_stack_00000008;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_02681b9c(lVar10,0,0);
          if ((uVar8 & 1) != 0) {
            FUN_0142deac(lVar10,0);
          }
          FUN_010e58e8(lVar16,&stack0x00000008,*(undefined8 *)puVar1);
          lVar10 = in_stack_00000008;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_02681b9c(lVar10,0,0);
          if ((uVar8 & 1) != 0) {
            FUN_0142deac(lVar10,0);
          }
          FUN_010e58e8(lVar16,&stack0x00000008,*(undefined8 *)puVar4);
          lVar13 = in_stack_00000008;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_0268b4e0(lVar13,0,0);
          plVar11 = (long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__;
          if ((uVar8 & 1) != 0) {
            lVar13 = FUN_010e5800(lVar16,*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                                 );
          }
          lVar10 = 0;
        }
        else {
          FUN_010e58e8(lVar16,&stack0x00000008,*(undefined8 *)StringLiteral_3758);
          lVar10 = in_stack_00000008;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_02681b9c(lVar10,0,0);
          if ((uVar8 & 1) != 0) {
            FUN_0142deac(lVar10,0);
          }
          FUN_010e58e8(lVar16,&stack0x00000008,*(undefined8 *)puVar1);
          lVar10 = in_stack_00000008;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_0268b4e0(lVar10,0,0);
          if ((uVar8 & 1) != 0) {
            FUN_010e5800(lVar16,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
          }
          FUN_010e58e8(lVar16,&stack0x00000008,*(undefined8 *)puVar3);
          lVar10 = in_stack_00000008;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_0268b4e0(lVar10,0,0);
          plVar11 = (long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__;
          if ((uVar8 & 1) != 0) {
            lVar10 = FUN_010e5800(lVar16,*(undefined8 *)UnityEngine_Pose___TypeInfo);
          }
          lVar13 = 0;
        }
        plVar14 = (long *)FUN_013eae18();
        if (plVar14 != (long *)0x0) {
          lVar16 = *plVar14;
          uVar8 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *plVar11) {
                puVar12 = (undefined8 *)(lVar16 + (long)(*piVar15 + 0x24) * 0x10 + 0x138);
                goto LAB_01403ea4;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(plVar14,*plVar11,0x24);
LAB_01403ea4:
          iVar5 = (*(code *)*puVar12)(plVar14,puVar12[1]);
          if (iVar5 == 1) {
            if (lVar13 == 0) goto LAB_01403f9c;
            FUN_026699d8(lVar13,unaff_x23[0x33],0);
            uVar6 = FUN_026698d8(lVar13,0);
            FUN_02669914(lVar13,1,0);
            FUN_02669914(lVar13,uVar6 & 1,0);
          }
          FUN_01403fa4();
          plVar14 = (long *)FUN_013eae18();
          if (plVar14 != (long *)0x0) {
            lVar16 = *plVar14;
            uVar8 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar8 != 0) {
              piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *plVar11) {
                  puVar12 = (undefined8 *)(lVar16 + (long)(*piVar15 + 0x24) * 0x10 + 0x138);
                  goto LAB_01403f80;
                }
                uVar8 = uVar8 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar8 != 0);
            }
            puVar12 = (undefined8 *)FUN_00d59724(plVar14,*plVar11,0x24);
LAB_01403f80:
            iVar5 = (*(code *)*puVar12)(plVar14,puVar12[1]);
            if (iVar5 == 1) {
              return lVar13;
            }
            return lVar10;
          }
        }
      }
    }
  }
LAB_01403f9c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


