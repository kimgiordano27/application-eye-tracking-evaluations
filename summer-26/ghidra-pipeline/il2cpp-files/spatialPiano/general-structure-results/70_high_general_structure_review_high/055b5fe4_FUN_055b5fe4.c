/*
FUNCTION_NAME: FUN_055b5fe4
ENTRY_POINT: 055b5fe4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x055b65b8) */
/* WARNING: Removing unreachable block (ram,0x055b6764) */
/* WARNING: Removing unreachable block (ram,0x055b6780) */

void FUN_055b5fe4(long param_1,long param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  int *piVar21;
  long lVar22;
  
  if ((DAT_06bbfb3a & 1) == 0) {
    FUN_02f08768(System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo);
    FUN_02f08768(PTR_DAT_067d78c8);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000966_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<string>_OnViewDataReady__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
                );
    DAT_06bbfb3a = 1;
  }
  if (param_3 != (long *)0x0) {
    uVar10 = (**(code **)(*param_3 + 0x348))(param_3,param_2,*(undefined8 *)(*param_3 + 0x350));
    if ((uVar10 & 1) != 0) {
      return;
    }
    (**(code **)(*param_3 + 0x308))(param_3,param_2,*(undefined8 *)(*param_3 + 0x310));
    if ((param_2 != 0) && (*(long *)(param_2 + 0x60) != 0)) {
      lVar11 = FUN_057715f4(*(long *)(param_2 + 0x60),0);
      puVar9 = Method_UnityEngine_UIElements_BaseField<string>_OnViewDataReady__;
      puVar8 = Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__;
      puVar7 = Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__;
      puVar6 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__;
      puVar5 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__;
      puVar4 = 
      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
      ;
      while( true ) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar10 = FUN_057718f4(lVar11,0);
        puVar3 = PTR_DAT_067c91b0;
        if ((uVar10 & 1) == 0) break;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar12 = (long *)FUN_05771994(lVar11,0);
        if (plVar12 != (long *)0x0) {
          lVar19 = *plVar12;
          uVar20 = (uint)*(byte *)(lVar19 + 0x130);
          bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((bVar1 <= *(byte *)(lVar19 + 0x130)) &&
             (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)) {
            if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            FUN_0576aff0(*(long *)(param_1 + 0x50),plVar12,0);
            lVar19 = *plVar12;
            uVar20 = (uint)*(byte *)(lVar19 + 0x130);
          }
          bVar1 = *(byte *)(*(long *)puVar8 + 0x130);
          if ((bVar1 <= uVar20) &&
             (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar8)) {
            if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            FUN_0576aff0(*(long *)(param_1 + 0x58),plVar12,0);
            plVar13 = *(long **)(param_1 + 0x68);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            (**(code **)(*plVar13 + 0x318))
                      (plVar13,plVar12[0x18],plVar12,*(undefined8 *)(*plVar13 + 800));
            lVar19 = *plVar12;
            uVar20 = (uint)*(byte *)(lVar19 + 0x130);
          }
          bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
          if ((bVar1 <= uVar20) &&
             (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar7)) {
            plVar13 = *(long **)(param_1 + 0x60);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            (**(code **)(*plVar13 + 0x318))
                      (plVar13,plVar12[0x10],plVar12,*(undefined8 *)(*plVar13 + 800));
            lVar19 = *plVar12;
            uVar20 = (uint)*(byte *)(lVar19 + 0x130);
          }
          bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
          if ((bVar1 <= uVar20) &&
             (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar6)) {
            plVar13 = *(long **)(param_1 + 0x70);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            (**(code **)(*plVar13 + 0x318))
                      (plVar13,plVar12[0xd],plVar12,*(undefined8 *)(*plVar13 + 800));
            lVar19 = *plVar12;
            uVar20 = (uint)*(byte *)(lVar19 + 0x130);
          }
          lVar18 = *(long *)puVar9;
          uVar10 = (ulong)*(byte *)(lVar18 + 0x130);
          if ((*(byte *)(lVar18 + 0x130) <= uVar20) &&
             (*(long *)(*(long *)(lVar19 + 200) + uVar10 * 8 + -8) == lVar18)) {
            lVar22 = *(long *)puVar4;
            bVar1 = *(byte *)(lVar22 + 0x130);
            if ((bVar1 <= uVar20) &&
               (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar1 * 8 + -8) == lVar22)) {
              if (*(int *)(*(long *)
                            UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                          + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar18 = *(long *)puVar9;
                lVar19 = *plVar12;
                uVar20 = (uint)*(byte *)(lVar19 + 0x130);
                uVar10 = (ulong)*(byte *)(lVar18 + 0x130);
              }
              if ((uVar20 < (uint)uVar10) ||
                 (*(long *)(*(long *)(lVar19 + 200) + uVar10 * 8 + -8) != lVar18)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar12);
              }
              FUN_055b68ec(plVar12,*(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
                          );
              lVar18 = *(long *)puVar9;
              lVar19 = *plVar12;
              uVar20 = (uint)*(byte *)(lVar19 + 0x130);
              uVar10 = (ulong)*(byte *)(lVar18 + 0x130);
            }
            if ((uVar20 < (uint)uVar10) ||
               (*(long *)(*(long *)(lVar19 + 200) + uVar10 * 8 + -8) != lVar18)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar12);
            }
            plVar13 = *(long **)(param_1 + 0x78);
            uVar14 = FUN_0577ac88(plVar12,0);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8(uVar14,uVar14);
            }
            (**(code **)(*plVar13 + 0x318))(plVar13,uVar14,plVar12,*(undefined8 *)(*plVar13 + 800));
            lVar19 = *(long *)puVar4;
            bVar1 = *(byte *)(lVar19 + 0x130);
            if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) == lVar19)) {
              plVar13 = *(long **)(param_1 + 0x90);
              if (plVar13 == (long *)0x0) {
                plVar13 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d78c8);
                FUN_0508402c(plVar13,0);
                *(long **)(param_1 + 0x90) = plVar13;
              }
              plVar15 = (long *)FUN_0577ac88(plVar12,0);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uVar14 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8(uVar14,uVar14);
              }
              (**(code **)(*plVar13 + 0x318))
                        (plVar13,uVar14,plVar12,*(undefined8 *)(*plVar13 + 800));
              plVar15 = *(long **)(param_1 + 0x98);
              plVar13 = (long *)FUN_0577ac88(plVar12,0);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uVar14 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8(uVar14,uVar14);
              }
              plVar13 = (long *)(**(code **)(*plVar15 + 0x308))
                                          (plVar15,uVar14,*(undefined8 *)(*plVar15 + 0x310));
              if (plVar13 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)
                                   System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo
                                 + 0x130);
                if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48();
                }
                lVar19 = plVar13[0x1a];
                if (lVar19 != 0) {
                  lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                               UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000966_PostfixBurstDelegate_TypeInfo
                                             );
                  FUN_055ad7b0(lVar18,plVar12,0);
                  lVar19 = FUN_055aeb14(lVar19,lVar18,0);
                  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                  if (*(int *)(lVar19 + 0x10) != 0) {
                    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089c8();
                    }
                    uVar14 = FUN_055ae2bc(lVar18,0);
                    uVar14 = FUN_0556826c(uVar14,lVar19,0);
                    uVar17 = thunk_FUN_02f6ef30(
                                               Method_UnityEngine_UIElements_BaseField<string>_SetValueWithoutNotify__
                                               );
                    /* WARNING: Subroutine does not return */
                    FUN_02f0888c(uVar14,uVar17);
                  }
                }
              }
            }
          }
        }
      }
      plVar12 = (long *)thunk_FUN_02f45174(lVar11,*(undefined8 *)PTR_DAT_067c91b0);
      if (plVar12 != (long *)0x0) {
        lVar11 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar10 != 0) {
          piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
              puVar16 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
              goto System_Runtime_Serialization_XmlReaderDelegator__ReadElementContentAsGuid;
            }
            uVar10 = uVar10 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar10 != 0);
        }
        puVar16 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar3,0);
System_Runtime_Serialization_XmlReaderDelegator__ReadElementContentAsGuid:
        (*(code *)*puVar16)(plVar12,puVar16[1]);
      }
      if (*(long *)(param_2 + 0x58) != 0) {
        lVar11 = FUN_057715f4(*(long *)(param_2 + 0x58),0);
        puVar5 = Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__;
        puVar4 = Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__;
        while( true ) {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar10 = FUN_057718f4(lVar11,0);
          if ((uVar10 & 1) == 0) break;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          plVar12 = (long *)FUN_05771994(lVar11,0);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          bVar1 = *(byte *)(*plVar12 + 0x130);
          bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((bVar1 < bVar2) ||
             (lVar19 = *(long *)(*plVar12 + 200),
             *(long *)(lVar19 + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48();
          }
          bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
          if (((bVar1 < bVar2) || (*(long *)(lVar19 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) &&
             (plVar12[9] != 0)) {
            FUN_055b5fe4(param_1,plVar12[9],param_3);
          }
        }
        plVar12 = (long *)thunk_FUN_02f45174(lVar11,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) {
          return;
        }
        lVar11 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar10 != 0) {
          piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
              puVar16 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_055b66f4;
            }
            uVar10 = uVar10 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar10 != 0);
        }
        puVar16 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar3,0);
LAB_055b66f4:
        (*(code *)*puVar16)(plVar12,puVar16[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


