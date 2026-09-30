/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._IsQuitUserPromptRequested$$.ctor
ENTRY_POINT: 04f0b558
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x04f0b964) */

void OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested___ctor(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int iVar10;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar11;
  long *unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  long *in_stack_00000028;
  
  uVar11 = *unaff_x22;
  lVar7 = *(long *)(*(long *)(param_1 + 0x310) + 0xe0);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar7);
  }
  plVar2 = (long *)FUN_04d8a7b0(uVar11,0);
  if ((plVar2 == (long *)0x0) ||
     (uVar11 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0)),
     unaff_x27 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar7 = *unaff_x27;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)
           Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<FingerFeatureConfigBuilder_OppositionStateBuilder>_TypeInfo
         ) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04f0b5ec;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_02b7654c();
LAB_04f0b5ec:
  in_stack_00000028 = (long *)(*(code *)*puVar3)();
  puVar1 = PTR_DAT_06312f90;
  in_stack_00000020 = &stack0x00000028;
  in_stack_00000018 = 0;
  if (in_stack_00000028 != (long *)0x0) {
    iVar10 = 0;
    do {
      plVar2 = in_stack_00000028;
      lVar7 = *in_stack_00000028;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04f0b664;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(in_stack_00000028,*(long *)puVar1,0);
LAB_04f0b664:
      uVar8 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      plVar2 = in_stack_00000028;
      if ((uVar8 & 1) == 0) {
        if (in_stack_00000028 == (long *)0x0) {
          return;
        }
        lVar7 = *in_stack_00000028;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_04f0b8f8;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_04f0b8e0;
      }
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar7 = *in_stack_00000028;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)
               Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
             ) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04f0b6d0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_02b7654c(in_stack_00000028,
                            *(long *)
                             Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
                            ,0);
LAB_04f0b6d0:
      uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      lVar7 = unaff_x20;
      if (unaff_x20 == 0) {
        lVar7 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined8 *)(lVar7 + 0x20) =
             *(undefined8 *)
              Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
        ;
        thunk_FUN_02bb0e9c();
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined8 *)(lVar7 + 0x28) = unaff_x23;
        thunk_FUN_02bb0e9c();
        if (*(uint *)(lVar7 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined8 *)(lVar7 + 0x30) =
             *(undefined8 *)
              Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_AbductionStateBuilder>_TypeInfo
        ;
        thunk_FUN_02bb0e9c();
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined8 *)(lVar7 + 0x38) = unaff_x24;
        thunk_FUN_02bb0e9c();
        if (*(uint *)(lVar7 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined8 *)(lVar7 + 0x40) =
             *(undefined8 *)System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>_TypeInfo;
        thunk_FUN_02bb0e9c();
        lVar7 = FUN_04c0ac30(lVar7,0);
      }
      lVar5 = unaff_x21;
      if (unaff_x21 == 0) {
        in_stack_00000010._4_4_ = iVar10;
        DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                  (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000010 + 4);
        lVar5 = FUN_04c0af28(*(undefined8 *)
                              Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OppositionStateBuilder>_TypeInfo
                            );
      }
      if (unaff_x19 == 0) {
        in_stack_00000010._4_4_ = iVar10;
        DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                  (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000010 + 4);
        FUN_04c0af6c(*(undefined8 *)
                      Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OpenCloseStateBuilder>_TypeInfo
                     ,uVar11);
      }
      uVar6 = FUN_04c0a5c4(lVar7,lVar5);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar8 = FUN_05c8e378(uVar4,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c453b4(uVar6,in_stack_00000008,0);
      }
      iVar10 = iVar10 + 1;
    } while (in_stack_00000028 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_04f0b8e0:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto OVR_OpenVR_IVRChaperone__GetCalibrationState__BeginInvoke;
    }
  }
LAB_04f0b8f8:
  puVar3 = (undefined8 *)FUN_02b7654c(in_stack_00000028,*(long *)PTR_DAT_06312f78,0);
OVR_OpenVR_IVRChaperone__GetCalibrationState__BeginInvoke:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


