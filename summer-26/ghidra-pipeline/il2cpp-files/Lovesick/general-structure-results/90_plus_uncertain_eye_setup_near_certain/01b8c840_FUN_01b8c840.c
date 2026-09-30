/*
FUNCTION_NAME: FUN_01b8c840
ENTRY_POINT: 01b8c840
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_18;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x01b8ced8) */

long FUN_01b8c840(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long *plVar20;
  
  puVar1 = Method_System_Linq_Expressions_BinaryExpression_GetBinaryOpFromAssignmentOp__;
  if ((DAT_0377e5f1 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(PTR_DAT_033f36b0);
    thunk_FUN_00d48444(
                      Method_System_Diagnostics_TraceListenerCollection_System_Collections_IList_Add__
                      );
    thunk_FUN_00d48444(Method_System_Linq_Expressions_BinaryExpression_GetBinaryOpFromAssignmentOp__
                      );
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceEventData_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_8536);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XROcclusionSubsystem,_XROcclusionSubsystemDescriptor,_XROcclusionSubsystem_Provider>_OnDisable__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(StringLiteral_9853);
    thunk_FUN_00d48444(Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_SetDefault__);
    thunk_FUN_00d48444(Method_Mono_Net_Security_MonoTlsProviderFactory_CreateDefaultProviderImpl__);
    thunk_FUN_00d48444(Method_TagRemover_OnGrabbedTag__);
    thunk_FUN_00d48444(StringLiteral_8957);
    thunk_FUN_00d48444(PTR_DAT_033f4810);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_Update__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_MoveNext__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ef350);
    thunk_FUN_00d48444(PTR_DAT_033f2158);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vceqq_s16__);
    DAT_0377e5f1 = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = 
  Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XROcclusionSubsystem,_XROcclusionSubsystemDescriptor,_XROcclusionSubsystem_Provider>_OnDisable__
  ;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01320e50(lVar4,*(undefined8 *)
                      Method_System_Diagnostics_TraceListenerCollection_System_Collections_IList_Add__
              );
  plVar5 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0203b63c(plVar5,0);
  plVar20 = (long *)StringLiteral_10310;
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_8536);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0203fb2c(lVar6,0);
  puVar1 = Method_TagRemover_OnGrabbedTag__;
  *(undefined8 *)(lVar6 + 0x18) =
       *(undefined8 *)Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_SetDefault__;
  uVar15 = *(undefined8 *)puVar1;
  *(undefined1 *)(lVar6 + 0x40) = 0;
  *(undefined8 *)(lVar6 + 0x10) = uVar15;
  FUN_0203fbbc(lVar6,1,0);
  *(undefined2 *)(lVar6 + 0x69) = 0x101;
  *(undefined1 *)(lVar6 + 0x6b) = 1;
  FUN_0203c628(plVar5,lVar6,0);
  FUN_0203d338(plVar5,0);
  plVar7 = (long *)FUN_0203c828(plVar5,0);
  plVar8 = (long *)FUN_0203c8c4(plVar5,0);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar15 = (**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar9 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
  uVar15 = FUN_015f5b28(uVar15,uVar9,0);
  iVar2 = FUN_0203b780(plVar5,0);
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  if (iVar2 == 0) {
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_020217f0(lVar6,*(undefined8 *)
                        Method_Mono_Net_Security_MonoTlsProviderFactory_CreateDefaultProviderImpl__,
                 0);
    lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_020217f0(lVar17,*(undefined8 *)PTR_DAT_033f4810,0);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_020217f0(lVar10,*(undefined8 *)PTR_DAT_033f2158,0);
    lVar6 = FUN_02020d78(lVar6,uVar15,0);
    puVar1 = PTR_DAT_033ef350;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar18 = 0;
      uVar16 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar16 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar11 = FUN_02020d78(lVar17,*(undefined8 *)(lVar6 + 0x20 + uVar18 * 8),0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (4 < *(int *)(lVar11 + 0x18)) {
          if (*(long *)(lVar11 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar16 = FUN_015fe250(*(long *)(lVar11 + 0x28),*(undefined8 *)puVar1,0);
          if ((uVar16 & 1) == 0) {
            if (*(uint *)(lVar11 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            if (*(long *)(lVar11 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar16 = FUN_015fe250(*(long *)(lVar11 + 0x28),
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_MoveNext__
                                  ,0);
            if ((uVar16 & 1) == 0) goto LAB_01b8cde4;
          }
          if (*(uint *)(lVar11 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar12 = FUN_020205ac(lVar10,*(undefined8 *)(lVar11 + 0x30),
                                *(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_Update__
                                ,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar13 = FUN_01602744(lVar12,0x3a,0,0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar13 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar15 = *(undefined8 *)(lVar13 + 0x28);
          uVar16 = FUN_015fe7e8(param_1,uVar15,0);
          if ((uVar16 & 1) == 0) {
            if (*(uint *)(lVar11 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            if (*(long *)(lVar11 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar16 = FUN_015fe250(*(long *)(lVar11 + 0x28),*(undefined8 *)puVar1,0);
            if ((uVar16 & 1) == 0) {
              if (*(uint *)(lVar11 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar9 = *(undefined8 *)(lVar11 + 0x48);
              if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) ==
                  0) {
                thunk_FUN_00d32864();
              }
              uVar3 = FUN_016feee8(uVar9,0);
            }
            else {
              if (*(uint *)(lVar11 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar9 = *(undefined8 *)(lVar11 + 0x40);
              if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) ==
                  0) {
                thunk_FUN_00d32864();
              }
              uVar3 = FUN_016feee8(uVar9,0);
            }
            lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                         UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceEventData_TypeInfo
                                       );
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_017b46ec(lVar13,0);
            uVar16 = FUN_0160472c(lVar12,*(undefined8 *)
                                          Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_Update__
                                  ,0);
            if ((uVar16 & 1) == 0) {
              if (*(uint *)(lVar11 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar9 = FUN_015f6780(*(undefined8 *)StringLiteral_9853,*(undefined8 *)(lVar11 + 0x28),
                                   0);
            }
            else {
              if (*(uint *)(lVar11 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar9 = FUN_015f6780(*(undefined8 *)StringLiteral_8957,*(undefined8 *)(lVar11 + 0x28),
                                   0);
            }
            *(undefined8 *)(lVar13 + 0x20) = uVar15;
            *(undefined8 *)(lVar13 + 0x28) = uVar9;
            uVar15 = FUN_01b8c774(uVar3);
            *(undefined8 *)(lVar13 + 0x10) = uVar15;
            *(undefined4 *)(lVar13 + 0x18) = uVar3;
            FUN_00c385e8(lVar4,lVar13,*(undefined8 *)PTR_DAT_033f36b0);
          }
        }
LAB_01b8cde4:
        uVar16 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar18 = uVar18 + 1;
      } while ((long)uVar18 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    lVar6 = 0;
    iVar2 = 0x10;
    plVar20 = (long *)StringLiteral_10310;
  }
  else {
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqq_s16__,0);
    iVar2 = 3;
    lVar6 = lVar4;
  }
  lVar17 = *plVar5;
  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *plVar20) {
        puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_01b8ce58;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar14 = (undefined8 *)FUN_00d59724(plVar5,*plVar20,0);
LAB_01b8ce58:
  (*(code *)*puVar14)(plVar5,puVar14[1]);
  if (iVar2 != 3) {
    lVar6 = lVar4;
  }
  return lVar6;
}


