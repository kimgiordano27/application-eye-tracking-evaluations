/*
FUNCTION_NAME: FUN_055bb844
ENTRY_POINT: 055bb844
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x055bc3c4) */
/* WARNING: Removing unreachable block (ram,0x055bc3c8) */
/* WARNING: Removing unreachable block (ram,0x055bc82c) */
/* WARNING: Removing unreachable block (ram,0x055bc6dc) */
/* WARNING: Removing unreachable block (ram,0x055bc84c) */
/* WARNING: Removing unreachable block (ram,0x055bc850) */
/* WARNING: Removing unreachable block (ram,0x055bc550) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_055bb844(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  bool bVar22;
  undefined8 uVar23;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long local_70;
  long local_68;
  
  if ((DAT_06bbfb63 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(PTR_DAT_067c9990);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00001219_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00001219_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp_00001218_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(
                UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_00001217_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__);
    FUN_02f08768(
                UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                );
    FUN_02f08768(Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_set_visualInput__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<uint>_get_labelElement__);
    FUN_02f08768(System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<uint>_get_rawValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_MoveItemImmediately__
                );
    FUN_02f08768(Method_Unity_AppUI_UI_AnchorPopup<MenuBuilder>_SetPlacement__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<string>_get_rawValue__);
    DAT_06bbfb63 = 1;
  }
  puVar4 = Method_UnityEngine_UIElements_BaseField<string>_get_rawValue__;
  puVar7 = 
  UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
  ;
  puVar6 = 
  UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_PostfixBurstDelegate_TypeInfo
  ;
  puVar5 = 
  UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_BurstDirectCall_TypeInfo
  ;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = (long *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  if ((((param_2 == 0) || (*(long *)(param_2 + 0xc0) == 0)) || (*(long *)(param_1 + 0x20) == 0)) ||
     (plVar10 = *(long **)(*(long *)(param_1 + 0x20) + 0x28), plVar10 == (long *)0x0))
  goto LAB_055bc7f8;
  lVar19 = *(long *)(*(long *)(param_2 + 0xc0) + 0x18);
  lVar20 = *(long *)(param_2 + 0x98);
  (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
  lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
  FUN_03abf108(lVar11,*(undefined8 *)puVar5);
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar5 = PTR_DAT_067c9fd8;
  lVar12 = FUN_055b68ec(param_2,*(undefined8 *)puVar4);
  if (lVar12 == 0) {
    uVar14 = FUN_055b8f80(0,param_2,
                          *(undefined8 *)
                           Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_MoveItemImmediately__
                          ,0);
    lVar12 = *(long *)(param_1 + 0x20);
    if ((uVar14 & 1) == 0) {
      uVar13 = thunk_FUN_02f45270();
      FUN_0506ee78(uVar13,0x409,0);
    }
    else {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar13 = FUN_05064e74(0);
    }
    if (lVar12 == 0) goto LAB_055bc7f8;
    System_Xml_XmlUTF8TextReader__ReadCData(lVar12,uVar13,0,0);
  }
  else {
    lVar21 = *(long *)(param_1 + 0x20);
    if (*(int *)(lVar12 + 0x10) == 0) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar13 = FUN_050656a0(0);
    }
    else {
      uVar13 = thunk_FUN_02f45270();
      FUN_0506ee6c(uVar13,lVar12,0);
    }
    if (lVar21 == 0) goto LAB_055bc7f8;
    FUN_0556cb9c(lVar21,uVar13,0);
  }
  puVar5 = Method_Unity_AppUI_UI_AnchorPopup<MenuBuilder>_SetPlacement__;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar12 = FUN_055b68ec(param_2,*(undefined8 *)puVar5);
  puVar5 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
  ;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x10) != 0)) {
    lVar20 = lVar12;
  }
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar12 = FUN_055b68ec(param_2,*(undefined8 *)puVar5);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x10) != 0)) {
    lVar19 = lVar12;
  }
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  uVar23 = *(undefined8 *)(param_2 + 0x48);
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_055b6a84(uVar13,uVar23);
  FUN_055b6fb0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x48));
  if ((lVar20 != 0) && (*(int *)(lVar20 + 0x10) != 0)) {
    lVar12 = *(long *)(param_1 + 0x20);
    if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar13 = FUN_0581a024(lVar20,0);
    if (lVar12 == 0) goto LAB_055bc7f8;
    FUN_055685dc(lVar12,uVar13,0);
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_055bc7f8;
  FUN_0556c608(*(long *)(param_1 + 0x20),lVar19,0);
  if (*(char *)(param_1 + 0xa0) != '\0') {
    lVar19 = *(long *)(param_1 + 0x20);
    if (lVar19 == 0) goto LAB_055bc7f8;
    uVar13 = System_Runtime_Serialization_XmlFormatWriterInterpreter__InvokeOnSerialized
                       (param_1,*(undefined8 *)(lVar19 + 0x50));
    FUN_0556ca84(lVar19,uVar13,0);
  }
  plVar10 = (long *)FUN_055bb3e8(param_1,param_2);
  if (plVar10 == (long *)0x0) goto LAB_055bc7f8;
  bVar1 = *(byte *)(*(long *)
                     System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                   + 0x130);
  if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo))
  {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  }
  if (plVar10[0x14] != 0) {
    lVar19 = FUN_055b88e4();
    if (lVar19 == 0) {
      return;
    }
    local_68 = FUN_057715f4(lVar19,0);
    puVar4 = Method_UnityEngine_UIElements_BaseField<uint>_get_labelElement__;
    puVar7 = Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_set_visualInput__;
    puVar6 = Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__;
    puVar5 = PTR_DAT_067c9990;
joined_r0x055bbcb4:
    while( true ) {
      do {
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar14 = FUN_057718f4(local_68,0);
        puVar3 = PTR_DAT_067c91b0;
        if ((uVar14 & 1) == 0) {
          plVar10 = (long *)thunk_FUN_02f45174(local_68,*(undefined8 *)PTR_DAT_067c91b0);
          local_78 = plVar10;
          if (plVar10 == (long *)0x0) goto LAB_055bc554;
          lVar19 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar14 == 0) goto LAB_055bc518;
          piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          goto LAB_055bc500;
        }
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar10 = (long *)FUN_05771994(local_68,0);
      } while (plVar10 == (long *)0x0);
      lVar19 = *(long *)puVar7;
      lVar20 = *plVar10;
      bVar2 = *(byte *)(lVar20 + 0x130);
      bVar1 = *(byte *)(lVar19 + 0x130);
      if ((bVar2 < bVar1) ||
         (lVar12 = *(long *)(lVar20 + 200), *(long *)(lVar12 + (ulong)bVar1 * 8 + -8) != lVar19)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar10);
      }
      lVar19 = *(long *)puVar6;
      uVar14 = (ulong)*(byte *)(lVar19 + 0x130);
      if ((*(byte *)(lVar19 + 0x130) <= bVar2) && (*(long *)(lVar12 + uVar14 * 8 + -8) == lVar19))
      break;
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      if (((bVar1 <= bVar2) && (*(long *)(lVar12 + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) &&
         (lVar19 = (**(code **)(lVar20 + 0x238))(plVar10,*(undefined8 *)(lVar20 + 0x240)),
         lVar19 != 0)) {
        local_70 = FUN_057715f4(lVar19,0);
joined_r0x055bbe70:
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar14 = FUN_057718f4(local_70,0);
        if ((uVar14 & 1) != 0) {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          plVar15 = (long *)FUN_05771994(local_70,0);
          if (plVar15 != (long *)0x0) {
            lVar19 = *(long *)puVar7;
            bVar1 = *(byte *)(*plVar15 + 0x130);
            bVar2 = *(byte *)(lVar19 + 0x130);
            if ((bVar1 < bVar2) ||
               (lVar20 = *(long *)(*plVar15 + 200),
               *(long *)(lVar20 + (ulong)bVar2 * 8 + -8) != lVar19)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar15);
            }
            bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
            if ((bVar2 <= bVar1) && (*(long *)(lVar20 + (ulong)bVar2 * 8 + -8) == *(long *)puVar6))
            {
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_BaseField<uint>_get_rawValue__ +
                               0x130);
              if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_BaseField<uint>_get_rawValue__)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar10);
              }
              lVar12 = *(long *)puVar5;
              lVar19 = plVar10[0xc];
              lVar20 = plVar10[0xd];
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar12 = *(long *)puVar5;
              }
              uVar14 = FUN_05132f8c(lVar19,lVar20,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),
                                    *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),0);
              lVar19 = *(long *)puVar6;
              lVar20 = *plVar15;
              if ((uVar14 & 1) != 0) {
                if ((*(byte *)(lVar20 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
                   (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8)
                    != lVar19)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(plVar15);
                }
                if ((long *)plVar15[0x17] != (long *)0x0) {
                  lVar12 = *(long *)plVar15[0x17];
                  bVar1 = *(byte *)(*(long *)
                                     System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                                   + 0x130);
                  if ((bVar1 <= *(byte *)(lVar12 + 0x130)) &&
                     (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) ==
                      *(long *)
                       System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                     )) {
                    bVar1 = *(byte *)(*(long *)
                                       Method_UnityEngine_UIElements_BaseField<uint>_get_rawValue__
                                     + 0x130);
                    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)Method_UnityEngine_UIElements_BaseField<uint>_get_rawValue__)) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f08d48(plVar10);
                    }
                    FUN_05773438(plVar15,plVar10[0xc],plVar10[0xd],0);
                    lVar19 = *(long *)puVar6;
                    lVar20 = *plVar15;
                  }
                }
              }
              uVar8 = (uint)*(byte *)(lVar20 + 0x130);
              uVar14 = (ulong)*(byte *)(lVar19 + 0x130);
              if ((*(byte *)(lVar20 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
                 (*(long *)(*(long *)(lVar20 + 200) + uVar14 * 8 + -8) != lVar19)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar15);
              }
              if (plVar15[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar12 = *(long *)(plVar15[0x14] + 0x10);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              if ((*(int *)(lVar12 + 0x10) != 0) && (*(char *)(param_1 + 0xa0) == '\0')) {
                lVar12 = *(long *)puVar5;
                lVar19 = plVar15[0xc];
                lVar20 = plVar15[0xd];
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                  lVar12 = *(long *)puVar5;
                }
                uVar16 = FUN_05132de0(lVar19,lVar20,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10)
                                      ,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),0);
                lVar19 = *(long *)puVar6;
                lVar20 = *plVar15;
                uVar8 = (uint)*(byte *)(lVar20 + 0x130);
                uVar14 = (ulong)*(byte *)(lVar19 + 0x130);
                if ((uVar16 & 1) != 0) {
                  if ((*(byte *)(lVar20 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
                     (*(long *)(*(long *)(lVar20 + 200) + uVar14 * 8 + -8) != lVar19)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f08d48(plVar15);
                  }
                  if ((long *)plVar15[0x17] == (long *)0x0) goto joined_r0x055bbe70;
                  lVar12 = *(long *)plVar15[0x17];
                  bVar1 = *(byte *)(*(long *)
                                     System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                                   + 0x130);
                  if ((*(byte *)(lVar12 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)
                       System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                     )) goto joined_r0x055bbe70;
                }
              }
              if ((uVar8 < (uint)uVar14) ||
                 (*(long *)(*(long *)(lVar20 + 200) + uVar14 * 8 + -8) != lVar19)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar15);
              }
              lVar19 = FUN_055bb6cc(param_1,plVar15);
              if (*(char *)(param_1 + 0xa0) != '\0') {
                if (lVar11 == 0) {
System_Runtime_Serialization_XmlWriterDelegator__WriteInt64Array:
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                lVar20 = *(long *)(lVar11 + 0x10);
                lVar12 = *(long *)
                          UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_TypeInfo
                ;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar20 == 0)
                goto System_Runtime_Serialization_XmlWriterDelegator__WriteInt64Array;
                uVar8 = *(uint *)(lVar11 + 0x18);
                if (uVar8 < *(uint *)(lVar20 + 0x18)) {
                  *(uint *)(lVar11 + 0x18) = uVar8 + 1;
                  *(long *)(lVar20 + (long)(int)uVar8 * 8 + 0x20) = lVar19;
                }
                else {
                  FUN_03abf904(lVar11,lVar19,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
              }
              if (lVar19 != 0) {
                *(undefined1 *)(lVar19 + 0xb0) = 1;
              }
            }
          }
          goto joined_r0x055bbe70;
        }
        plVar10 = (long *)thunk_FUN_02f45174(local_70,*(undefined8 *)PTR_DAT_067c91b0);
        local_78 = plVar10;
        if (plVar10 != (long *)0x0) {
          lVar19 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar14 != 0) {
            piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_067c91b0) {
                puVar17 = (undefined8 *)(lVar19 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_055bc3ac;
              }
              uVar14 = uVar14 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar14 != 0);
          }
          puVar17 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)PTR_DAT_067c91b0,0);
LAB_055bc3ac:
          (*(code *)*puVar17)(plVar10,puVar17[1]);
        }
      }
    }
    if (plVar10[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar12 = *(long *)(plVar10[0x14] + 0x10);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(int *)(lVar12 + 0x10) != 0) {
      if (*(char *)(param_1 + 0xa0) == '\0') goto joined_r0x055bbcb4;
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar19 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
      uVar13 = FUN_055b7858(plVar10,plVar10);
      if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar13 = FUN_0581a024(uVar13,0);
      if (*(long *)(param_2 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8(uVar13,uVar13);
      }
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8(uVar13,uVar13);
      }
      lVar19 = FUN_0558c9c4(lVar19,uVar13,*(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x18),0);
      if (lVar19 != 0) {
        if (lVar11 == 0) {
LAB_055bc834:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar20 = *(long *)(lVar11 + 0x10);
        lVar12 = *(long *)
                  UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_TypeInfo
        ;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_055bc834;
        uVar8 = *(uint *)(lVar11 + 0x18);
        if (uVar8 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar8 + 1;
          *(long *)(lVar20 + (long)(int)uVar8 * 8 + 0x20) = lVar19;
        }
        else {
          FUN_03abf904(lVar11,lVar19,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
      lVar19 = *(long *)puVar6;
      lVar20 = *plVar10;
      bVar1 = *(byte *)(lVar19 + 0x130);
      if (*(long *)(param_2 + 200) == 0) {
        if ((*(byte *)(lVar20 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar20 + 200) + (ulong)bVar1 * 8 + -8) != lVar19)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar10);
        }
        if ((long *)plVar10[0x17] == (long *)0x0) goto LAB_055bc238;
        lVar12 = *(long *)plVar10[0x17];
        bVar2 = *(byte *)(*(long *)
                           System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                         + 0x130);
        if ((*(byte *)(lVar12 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)
             System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo))
        goto LAB_055bc238;
        bVar22 = false;
      }
      else {
LAB_055bc238:
        bVar22 = true;
      }
      if ((*(byte *)(lVar20 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar20 + 200) + (ulong)bVar1 * 8 + -8) != lVar19)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar10);
      }
      lVar12 = *(long *)puVar5;
      lVar19 = plVar10[0xc];
      lVar20 = plVar10[0xd];
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar12 = *(long *)puVar5;
      }
      uVar8 = FUN_05132de0(lVar19,lVar20,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),
                           *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),0);
      if (!bVar22 && ((uVar8 ^ 0xffffffff) & 1) == 0) goto joined_r0x055bbcb4;
      lVar19 = *(long *)puVar6;
      lVar20 = *plVar10;
      bVar2 = *(byte *)(lVar20 + 0x130);
      uVar14 = (ulong)*(byte *)(lVar19 + 0x130);
    }
    if (((uint)bVar2 < (uint)uVar14) ||
       (*(long *)(*(long *)(lVar20 + 200) + uVar14 * 8 + -8) != lVar19)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar10);
    }
    lVar19 = FUN_055bb6cc(param_1,plVar10);
    if (lVar19 != 0) {
      *(undefined1 *)(lVar19 + 0xb0) = 1;
    }
    if (*(char *)(param_1 + 0xa0) != '\0') {
      if (lVar11 != 0) {
        lVar20 = *(long *)(lVar11 + 0x10);
        lVar12 = *(long *)
                  UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_TypeInfo
        ;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar20 != 0) {
          uVar8 = *(uint *)(lVar11 + 0x18);
          if (uVar8 < *(uint *)(lVar20 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar8 + 1;
            *(long *)(lVar20 + (long)(int)uVar8 * 8 + 0x20) = lVar19;
          }
          else {
            FUN_03abf904(lVar11,lVar19,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          goto joined_r0x055bbcb4;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto joined_r0x055bbcb4;
  }
  goto LAB_055bc554;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar18 = piVar18 + 4;
    if (uVar14 == 0) break;
LAB_055bc500:
    if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
      puVar17 = (undefined8 *)(lVar19 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_055bc534;
    }
  }
LAB_055bc518:
  puVar17 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar3,0);
LAB_055bc534:
  (*(code *)*puVar17)(plVar10,puVar17[1]);
LAB_055bc554:
  lVar19 = FUN_0576fe78(param_2,0);
  if (lVar19 != 0) {
    lVar19 = FUN_0576fe78(param_2,0);
    if (lVar19 == 0) goto LAB_055bc7f8;
    local_68 = FUN_057715f4(lVar19,0);
    puVar7 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
    puVar6 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__;
    puVar5 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
    while( true ) {
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar14 = FUN_057718f4(local_68,0);
      puVar4 = PTR_DAT_067c91b0;
      if ((uVar14 & 1) == 0) break;
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar10 = (long *)FUN_05771994(local_68,0);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*plVar10 + 0x130);
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((bVar1 < bVar2) ||
           (lVar19 = *(long *)(*plVar10 + 200),
           *(long *)(lVar19 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar10);
        }
        bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
        if (((bVar2 <= bVar1) && (*(long *)(lVar19 + (ulong)bVar2 * 8 + -8) == *(long *)puVar6)) &&
           (uVar14 = FUN_055b8f80(plVar10,plVar10,*(undefined8 *)puVar7,0), (uVar14 & 1) == 0)) {
          FUN_055c0e40(param_1,plVar10);
        }
      }
    }
    plVar10 = (long *)thunk_FUN_02f45174(local_68,*(undefined8 *)PTR_DAT_067c91b0);
    local_78 = plVar10;
    if (plVar10 != (long *)0x0) {
      lVar19 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar14 != 0) {
        piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
            puVar17 = (undefined8 *)(lVar19 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_055bc6c4;
          }
          uVar14 = uVar14 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar14 != 0);
      }
      puVar17 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar4,0);
LAB_055bc6c4:
      (*(code *)*puVar17)(plVar10,puVar17[1]);
    }
  }
  if ((*(char *)(param_1 + 0xa0) == '\0') || ((param_3 & 1) == 0)) {
    return;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (plVar10 = *(long **)(*(long *)(param_1 + 0x20) + 0x28), plVar10 != (long *)0x0)) {
    uVar9 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
    uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                 UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_PostfixBurstDelegate_TypeInfo
                               );
    FUN_03abf17c(uVar13,uVar9,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__);
    if (lVar11 != 0) {
      FUN_03ac039c(&local_90,lVar11,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_00001217_BurstDirectCall_TypeInfo
                  );
      puVar5 = 
      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00001219_PostfixBurstDelegate_TypeInfo
      ;
      while (uVar14 = FUN_04aff1b0(&local_90,*(undefined8 *)puVar5), (uVar14 & 1) != 0) {
        FUN_055c3e7c(param_1,uVar13,local_80);
      }
      FUN_04aff1ac(&local_90,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00001219_BurstDirectCall_TypeInfo
                  );
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar19 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar19 != 0)) {
        FUN_0558e290(lVar19,uVar13,0);
        return;
      }
    }
  }
LAB_055bc7f8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


