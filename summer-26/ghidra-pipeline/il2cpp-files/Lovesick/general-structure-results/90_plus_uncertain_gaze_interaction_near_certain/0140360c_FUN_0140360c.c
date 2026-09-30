/*
FUNCTION_NAME: FUN_0140360c
ENTRY_POINT: 0140360c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 182
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


long FUN_0140360c(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,byte param_5,
                 undefined8 param_6)

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
  long lVar15;
  int *piVar16;
  long lVar17;
  byte local_6c [4];
  long local_68;
  
  local_6c[0] = param_5 & 1;
  if ((DAT_0377690f & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Pose___TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__)
    ;
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
    DAT_0377690f = 1;
  }
  puVar3 = StringLiteral_302;
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vuzp1_s8__;
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (param_2 == (long *)0x0) goto LAB_01403f9c;
  if (4 < (int)param_2[7]) {
    if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_016f5f58(local_6c,0);
    uVar7 = FUN_015f5b28(*(undefined8 *)puVar1,uVar7,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    FUN_02660dac(uVar7,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_0268b4e0(param_3,0,0);
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
  uVar7 = (**(code **)(*param_2 + 0x498))(param_2,*(undefined8 *)(*param_2 + 0x4a0));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar8 = FUN_0268b4e0(uVar7,0,0);
  if ((uVar8 & 1) != 0) {
    iVar5 = *(int *)(*(long *)puVar3 + 0xe0);
    puVar12 = (undefined8 *)OVR_OpenVR_EDualAnalogWhich_TypeInfo;
    goto joined_r0x01403880;
  }
  if (param_3 == 0) goto LAB_01403f9c;
  FUN_010e58e8(param_3,&local_68,
               *(undefined8 *)System_Net_ServerCertValidationCallback_CallbackContext_TypeInfo);
  lVar17 = local_68;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_02681b9c(lVar17,0,0);
  if ((uVar8 & 1) != 0) {
    iVar5 = *(int *)(*(long *)puVar3 + 0xe0);
    puVar12 = (undefined8 *)System_Func<Mesh,_Vector3[]>_TypeInfo;
    goto joined_r0x01403880;
  }
  if (local_6c[0] == 0) {
    uVar7 = (**(code **)(*param_2 + 0x4d8))(param_2,*(undefined8 *)(*param_2 + 0x4e0));
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar8 = FUN_02681b9c(uVar7,0,0);
    if ((uVar8 & 1) == 0) {
LAB_014039b8:
      lVar17 = FUN_010e6254(param_3,1,*(undefined8 *)PTR_DAT_033f4af0);
      if (lVar17 == 0) goto LAB_01403f9c;
      if (*(int *)(lVar17 + 0x18) != 1) goto LAB_014038ec;
      if ((*(long *)(lVar17 + 0x20) == 0) ||
         (lVar10 = FUN_0268fd10(*(long *)(lVar17 + 0x20),0), lVar10 == 0)) goto LAB_01403f9c;
      uVar7 = FUN_0269fe30(lVar10,0);
      uVar9 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (param_3,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar8 = FUN_02681b9c(uVar7,uVar9,0);
      puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaddvq_u64__;
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026610e4(*(undefined8 *)puVar1,0);
      }
      if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar17 = *(long *)(lVar17 + 0x20);
    }
    else {
      lVar17 = (**(code **)(*param_2 + 0x4d8))(param_2,*(undefined8 *)(*param_2 + 0x4e0));
      if ((lVar17 == 0) || (lVar17 = FUN_0268fd10(lVar17,0), lVar17 == 0)) goto LAB_01403f9c;
      uVar7 = FUN_0269fe30(lVar17,0);
      uVar9 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (param_3,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar8 = FUN_0268b4e0(uVar7,uVar9,0);
      if ((uVar8 & 1) == 0) goto LAB_014039b8;
      lVar17 = (**(code **)(*param_2 + 0x4d8))(param_2,*(undefined8 *)(*param_2 + 0x4e0));
    }
    if (lVar17 == 0) goto LAB_01403f9c;
    lVar17 = FUN_0268fd10(lVar17,0);
  }
  else {
LAB_014038ec:
    lVar17 = 0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_02681b9c(lVar17,0,0);
  lVar10 = lVar17;
  if ((uVar8 & 1) != 0) {
    if (lVar17 == 0) goto LAB_01403f9c;
    uVar7 = FUN_0269fe30(lVar17,0);
    uVar9 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (param_3,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar8 = FUN_02681b9c(uVar7,uVar9,0);
    lVar10 = 0;
    if ((uVar8 & 1) == 0) {
      lVar10 = lVar17;
    }
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_0268b4e0(lVar10,0,0);
  puVar1 = PTR_DAT_033f3868;
  if ((uVar8 & 1) != 0) {
    uVar7 = FUN_015f5b28(param_2[3],
                         *(undefined8 *)
                          Method_System_Reflection_CustomAttributeData_UnboxValues<CustomAttributeTypedArgument>__
                         ,0);
    lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar17 == 0) goto LAB_01403f9c;
    FUN_0268afbc(lVar17,uVar7,0);
    lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                       (lVar17,0);
    uVar7 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (param_3,0);
    if (lVar10 == 0) goto LAB_01403f9c;
    FUN_0269fea8(lVar10,uVar7,0);
    lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                       (lVar17,0);
  }
  uVar7 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                    (param_3,0);
  if (lVar10 != 0) {
    FUN_0269fea8(lVar10,uVar7,0);
    lVar17 = FUN_0268fd4c(lVar10,0);
    plVar11 = (long *)FUN_013eae18(param_1,0);
    if (plVar11 != (long *)0x0) {
      lVar10 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
            puVar12 = (undefined8 *)(lVar10 + (long)(*piVar16 + 0x24) * 0x10 + 0x138);
            goto LAB_01403c34;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
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
      if (lVar17 != 0) {
        if (iVar5 == 1) {
          FUN_010e58e8(lVar17,&local_68,*(undefined8 *)Method_TuneTargetBasic_<Complete>b__23_0__);
          lVar10 = local_68;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_02681b9c(lVar10,0,0);
          if ((uVar8 & 1) != 0) {
            FUN_0142deac(lVar10,0);
          }
          FUN_010e58e8(lVar17,&local_68,*(undefined8 *)puVar1);
          lVar10 = local_68;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_02681b9c(lVar10,0,0);
          if ((uVar8 & 1) != 0) {
            FUN_0142deac(lVar10,0);
          }
          FUN_010e58e8(lVar17,&local_68,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_0268b4e0(local_68,0,0);
          plVar11 = (long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__;
          lVar13 = local_68;
          if ((uVar8 & 1) != 0) {
            lVar13 = FUN_010e5800(lVar17,*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                                 );
          }
          lVar10 = 0;
          lVar17 = 0;
        }
        else {
          FUN_010e58e8(lVar17,&local_68,*(undefined8 *)StringLiteral_3758);
          lVar10 = local_68;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_02681b9c(lVar10,0,0);
          if ((uVar8 & 1) != 0) {
            FUN_0142deac(lVar10,0);
          }
          FUN_010e58e8(lVar17,&local_68,*(undefined8 *)puVar1);
          lVar10 = local_68;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_0268b4e0(lVar10,0,0);
          if ((uVar8 & 1) != 0) {
            lVar10 = FUN_010e5800(lVar17,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
          }
          FUN_010e58e8(lVar17,&local_68,*(undefined8 *)puVar3);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_0268b4e0(local_68,0,0);
          plVar11 = (long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__;
          if ((uVar8 & 1) != 0) {
            local_68 = FUN_010e5800(lVar17,*(undefined8 *)UnityEngine_Pose___TypeInfo);
          }
          lVar13 = 0;
          lVar17 = local_68;
        }
        plVar14 = (long *)FUN_013eae18(param_1,0);
        if (plVar14 != (long *)0x0) {
          lVar15 = *plVar14;
          uVar8 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar8 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *plVar11) {
                puVar12 = (undefined8 *)(lVar15 + (long)(*piVar16 + 0x24) * 0x10 + 0x138);
                goto LAB_01403ea4;
              }
              uVar8 = uVar8 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar8 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(plVar14,*plVar11,0x24);
LAB_01403ea4:
          iVar5 = (*(code *)*puVar12)(plVar14,puVar12[1]);
          if (iVar5 == 1) {
            if (lVar13 == 0) goto LAB_01403f9c;
            FUN_026699d8(lVar13,param_2[0x33],0);
            uVar6 = FUN_026698d8(lVar13,0);
            FUN_02669914(lVar13,1,0);
            FUN_02669914(lVar13,uVar6 & 1,0);
          }
          FUN_01403fa4(param_2,param_3,lVar17,lVar10,lVar13,param_4,param_6);
          plVar14 = (long *)FUN_013eae18(param_1,0);
          if (plVar14 != (long *)0x0) {
            lVar10 = *plVar14;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar8 != 0) {
              piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *plVar11) {
                  puVar12 = (undefined8 *)(lVar10 + (long)(*piVar16 + 0x24) * 0x10 + 0x138);
                  goto LAB_01403f80;
                }
                uVar8 = uVar8 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar8 != 0);
            }
            puVar12 = (undefined8 *)FUN_00d59724(plVar14,*plVar11,0x24);
LAB_01403f80:
            iVar5 = (*(code *)*puVar12)(plVar14,puVar12[1]);
            if (iVar5 == 1) {
              return lVar13;
            }
            return lVar17;
          }
        }
      }
    }
  }
LAB_01403f9c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


