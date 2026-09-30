/*
FUNCTION_NAME: FUN_055c25b0
ENTRY_POINT: 055c25b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x055c33e0) */
/* WARNING: Removing unreachable block (ram,0x055c30f8) */
/* WARNING: Removing unreachable block (ram,0x055c2d60) */
/* WARNING: Removing unreachable block (ram,0x055c36e8) */
/* WARNING: Removing unreachable block (ram,0x055c3720) */
/* WARNING: Removing unreachable block (ram,0x055c3710) */
/* WARNING: Removing unreachable block (ram,0x055c3954) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_055c25b0(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  undefined8 uVar24;
  
  puVar5 = PTR_DAT_067d4730;
  lVar11 = param_1;
  if ((DAT_06bbfb59 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067d4730);
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo);
    FUN_02f08768(System_Xml_Schema_XdrBuilder_XdrBeginChildFunction_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<float>_GetClosestPowerOfTen__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<int>_get_clampedDragger__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<string>_set_showMixedValue__);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(
                UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_TypeInfo
                );
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
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<float>_SetHighValueWithoutNotify__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
                );
    FUN_02f08768(PTR_DAT_067d0878);
    FUN_02f08768(PTR_DAT_067cab28);
    FUN_02f08768(PTR_DAT_067ce970);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__);
    FUN_02f08768(PTR_DAT_067cab38);
    FUN_02f08768(PTR_DAT_067cbf00);
    FUN_02f08768(PTR_DAT_067d11b0);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<string>_get_rawValue__);
    lVar11 = FUN_02f08768(PTR_DAT_067d11b8);
    DAT_06bbfb59 = 1;
  }
  uVar12 = FUN_055b7858(lVar11,param_2);
  plVar13 = (long *)thunk_FUN_02f45270(*(undefined8 *)puVar5);
  FUN_05079bb8(plVar13,0);
  puVar5 = Oculus_Interaction_MAction<PokeInteractor>_TypeInfo;
  if (((param_2 == 0) || (*(long *)(param_2 + 0xc0) == 0)) || (*(long *)(param_1 + 0x20) == 0))
  goto LAB_055c2b5c;
  uVar24 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x18);
  lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar14 = FUN_0581a024(uVar12,0);
  puVar6 = 
  UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
  ;
  if (lVar11 == 0) goto LAB_055c2b5c;
  plVar15 = (long *)FUN_0558c9c4(lVar11,uVar14,uVar24,0);
  if (*(char *)(param_1 + 0xa0) == '\0') {
    if (plVar15 != (long *)0x0) {
      if ((param_4 & 1) != 0) {
        return plVar15;
      }
      uVar12 = FUN_0556814c(uVar12,0);
      uVar24 = thunk_FUN_02f6ef30(
                                 Method_UnityEngine_UIElements_BaseSlider<float>_add_onSetValueWithoutNotify__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar12,uVar24);
    }
LAB_055c2818:
    if ((param_4 & 1) != 0) {
      plVar15 = *(long **)(param_1 + 0x40);
      uVar14 = FUN_04f6f6b4(uVar24,*(undefined8 *)PTR_DAT_067ce970,uVar12,0);
      if (plVar15 == (long *)0x0) goto LAB_055c2b5c;
      (**(code **)(*plVar15 + 0x308))(plVar15,uVar14,*(undefined8 *)(*plVar15 + 0x310));
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar12 = FUN_0581a024(uVar12,0);
    plVar15 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                          System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo
                                        );
    FUN_05544a50(plVar15,uVar12,0);
    if (plVar15 == (long *)0x0) goto LAB_055c2b5c;
    plVar15[0x26] = *(long *)(param_2 + 0xb0);
    uVar12 = FUN_05548958(plVar15,uVar24,0);
    uVar12 = FUN_055bb368(uVar12,param_2,
                          *(undefined8 *)
                           Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
                          ,uVar24);
    uVar12 = FUN_05548958(plVar15,uVar12,0);
    puVar7 = Method_UnityEngine_UIElements_BaseSlider<float>_SetHighValueWithoutNotify__;
    puVar5 = PTR_DAT_067cbf00;
    lVar11 = FUN_055bb368(uVar12,param_3,
                          *(undefined8 *)
                           Method_UnityEngine_UIElements_BaseSlider<float>_SetHighValueWithoutNotify__
                          ,*(undefined8 *)PTR_DAT_067cbf00);
    if (lVar11 == 0) goto LAB_055c2b5c;
    iVar10 = *(int *)(lVar11 + 0x10);
    if (iVar10 == 0) {
      lVar11 = FUN_055bb368(lVar11,param_2,*(undefined8 *)puVar7,*(undefined8 *)puVar5);
      if (lVar11 == 0) goto LAB_055c2b5c;
      iVar10 = *(int *)(lVar11 + 0x10);
    }
    if (0 < iVar10) {
      uVar16 = thunk_FUN_04f6d944(lVar11,*(undefined8 *)PTR_DAT_067cab38,0);
      if (((uVar16 & 1) != 0) ||
         (uVar16 = thunk_FUN_04f6d944(lVar11,*(undefined8 *)PTR_DAT_067d11b8,0), (uVar16 & 1) != 0))
      {
        FUN_0554b5b4(plVar15,1,0);
      }
      uVar16 = thunk_FUN_04f6d944(lVar11,*(undefined8 *)PTR_DAT_067cab28,0);
      if (((uVar16 & 1) != 0) ||
         (uVar16 = thunk_FUN_04f6d944(lVar11,*(undefined8 *)PTR_DAT_067d11b0,0), (uVar16 & 1) != 0))
      {
        FUN_0554b5b4(plVar15,0,0);
      }
    }
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar11 = FUN_055b68ec(param_2,*(undefined8 *)
                                   Method_UnityEngine_UIElements_BaseField<string>_get_rawValue__);
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x10) < 1) {
        if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar12 = FUN_050656a0(0);
      }
      else {
        uVar12 = thunk_FUN_02f45270();
        FUN_0506ee6c(uVar12,lVar11,0);
      }
      FUN_0554c850(plVar15,uVar12,0);
    }
    if (*(char *)(param_1 + 0xa0) == '\0') {
      lVar11 = *(long *)(param_2 + 0x50);
      plVar15[0x22] = *(long *)(param_2 + 0x58);
      plVar15[0x21] = lVar11;
      lVar11 = *(long *)(param_2 + 0x60);
      plVar15[0x24] = *(long *)(param_2 + 0x68);
      plVar15[0x23] = lVar11;
    }
    else {
      lVar11 = System_Runtime_Serialization_XmlFormatWriterInterpreter__InvokeOnSerialized
                         (param_1,uVar24);
      if (lVar11 != 0) {
        FUN_0554f158(plVar15,lVar11,0);
      }
    }
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar11 == 0)) goto LAB_055c2b5c;
    FUN_0558cc18(lVar11,plVar15,0);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      lVar11 = *(long *)(param_1 + 0x88);
      uVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                   UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_PostfixBurstDelegate_TypeInfo
                                 );
      FUN_03abf108(uVar12,*(undefined8 *)
                           UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_BurstDirectCall_TypeInfo
                  );
      if (lVar11 == 0) goto LAB_055c2b5c;
      FUN_0492cd38(lVar11,plVar15,uVar12,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseSlider<float>_GetClosestPowerOfTen__);
    }
  }
  else if (plVar15 == (long *)0x0) goto LAB_055c2818;
  FUN_055bf1bc(param_1,param_3,plVar15,plVar13,*(undefined1 *)(param_2 + 0x76));
  plVar17 = (long *)plVar15[8];
  if (plVar17 != (long *)0x0) {
    iVar10 = 0;
    while (iVar9 = (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0)),
          iVar10 < iVar9) {
      if ((plVar15[8] == 0) || (lVar11 = FUN_0557e298(plVar15[8],iVar10,0), lVar11 == 0))
      goto LAB_055c2b5c;
      FUN_05560704(lVar11,iVar10,0);
      plVar17 = (long *)plVar15[8];
      iVar10 = iVar10 + 1;
      if (plVar17 == (long *)0x0) goto LAB_055c2b5c;
    }
    uVar12 = *(undefined8 *)(param_2 + 0x48);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_055b6a84(plVar15,uVar12);
    FUN_055b6fb0(plVar15,*(undefined8 *)(param_2 + 0x48));
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar11 = FUN_0576fe78(*(long *)(param_1 + 0x18),0), lVar11 == 0)) goto LAB_055c2d64;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar11 = FUN_0576fe78(*(long *)(param_1 + 0x18),0), lVar11 != 0)) {
      lVar11 = FUN_057715f4(lVar11,0);
      puVar6 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__;
      puVar5 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
      goto joined_r0x055c2bd0;
    }
  }
LAB_055c2b5c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
joined_r0x055c2bd0:
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar16 = FUN_057718f4(lVar11,0);
  if ((uVar16 & 1) != 0) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar17 = (long *)FUN_05771994(lVar11,0);
    if (plVar17 != (long *)0x0) goto code_r0x055c2c08;
    goto LAB_055c2c54;
  }
  plVar17 = (long *)thunk_FUN_02f45174(lVar11,*(undefined8 *)PTR_DAT_067c91b0);
  if (plVar17 == (long *)0x0) goto LAB_055c2d64;
  lVar11 = *plVar17;
  uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar16 == 0) goto LAB_055c2d2c;
  piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
  goto LAB_055c2d14;
code_r0x055c2c08:
  bVar1 = *(byte *)(*plVar17 + 0x130);
  bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
  if ((bVar1 < bVar2) ||
     (lVar21 = *(long *)(*plVar17 + 200),
     *(long *)(lVar21 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(plVar17);
  }
  bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
  if ((bVar1 < bVar2) || (*(long *)(lVar21 + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
LAB_055c2c54:
    uVar12 = FUN_055c15a8(plVar17,plVar17);
    uVar16 = thunk_FUN_04f6d944(uVar12,plVar15[0x12],0);
    if ((uVar16 & 1) != 0) {
      uVar12 = FUN_055c3970(param_1,plVar17);
      uVar24 = FUN_05546520(plVar15,0);
      uVar16 = thunk_FUN_04f6d944(uVar12,uVar24,0);
      if (((uVar16 & 1) != 0) || (lVar21 = FUN_055c3970(param_1,plVar17), lVar21 == 0)) {
        FUN_055c16c0(param_1,plVar17);
      }
    }
  }
  goto joined_r0x055c2bd0;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar23 = piVar23 + 4;
    if (uVar16 == 0) break;
LAB_055c2d14:
    if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_055c2d48;
    }
  }
LAB_055c2d2c:
  puVar18 = (undefined8 *)FUN_02f421d0(plVar17,*(long *)PTR_DAT_067c91b0,0);
LAB_055c2d48:
  (*(code *)*puVar18)(plVar17,puVar18[1]);
LAB_055c2d64:
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)(**(code **)(*plVar13 + 0x388))(plVar13,*(undefined8 *)(*plVar13 + 0x390));
    puVar8 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
    puVar7 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__;
    puVar6 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
    puVar5 = PTR_DAT_067c91b8;
joined_r0x055c2d90:
    do {
      do {
        do {
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar11 = *plVar13;
          uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar16 != 0) {
            piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
                puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_055c2e04;
              }
              uVar16 = uVar16 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar16 != 0);
          }
          puVar18 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar5,0);
LAB_055c2e04:
          uVar16 = (*(code *)*puVar18)(plVar13,puVar18[1]);
          puVar4 = PTR_DAT_067c91b0;
          if ((uVar16 & 1) == 0) {
            plVar13 = (long *)thunk_FUN_02f45174(plVar13,*(undefined8 *)PTR_DAT_067c91b0);
            if (plVar13 == (long *)0x0) {
              return plVar15;
            }
            lVar11 = *plVar13;
            uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar16 == 0) goto LAB_055c3900;
            piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            goto LAB_055c38e8;
          }
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar11 = *plVar13;
          uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar16 != 0) {
            piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
                puVar18 = (undefined8 *)(lVar11 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                goto LAB_055c2e6c;
              }
              uVar16 = uVar16 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar16 != 0);
          }
          puVar18 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar5,1);
LAB_055c2e6c:
          plVar17 = (long *)(*(code *)*puVar18)(plVar13,puVar18[1]);
          if (plVar17 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)
                               System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo
                             + 0x130);
            if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar17);
            }
          }
          if (plVar17 != plVar15) {
            uVar12 = FUN_05546520(plVar15,0);
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            uVar24 = FUN_05546520(plVar17,0);
            uVar16 = thunk_FUN_04f6d944(uVar12,uVar24,0);
            if ((uVar16 & 1) != 0) {
              plVar17[0x13] = 0;
            }
          }
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar11 = FUN_0576fe78(*(long *)(param_1 + 0x18),0), lVar11 != 0)) {
            if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar11 = FUN_0576fe78(*(long *)(param_1 + 0x18),0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar11 = FUN_057715f4(lVar11,0);
            while( true ) {
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uVar16 = FUN_057718f4(lVar11,0);
              if ((uVar16 & 1) == 0) break;
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              plVar19 = (long *)FUN_05771994(lVar11,0);
              if (plVar19 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar19 + 0x130);
                bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
                if ((bVar1 < bVar2) ||
                   (lVar21 = *(long *)(*plVar19 + 200),
                   *(long *)(lVar21 + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(plVar19);
                }
                bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
                if (((bVar2 <= bVar1) &&
                    (*(long *)(lVar21 + (ulong)bVar2 * 8 + -8) == *(long *)puVar7)) &&
                   (uVar16 = FUN_055b8f80(plVar19,plVar19,*(undefined8 *)puVar8,0),
                   (uVar16 & 1) != 0)) {
                  uVar12 = FUN_055c15a8(uVar16,plVar19);
                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                  uVar16 = thunk_FUN_04f6d944(uVar12,plVar17[0x12],0);
                  if ((uVar16 & 1) != 0) {
                    if (plVar17[4] == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089c8();
                    }
                    lVar21 = *(long *)(plVar17[4] + 0x28);
                    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089c8();
                    }
                    iVar10 = FUN_0558c670(lVar21,plVar17[0x12],0);
                    if (iVar10 < -1) {
                      uVar12 = FUN_055c3970(param_1,plVar19);
                      uVar24 = FUN_05546520(plVar17,0);
                      uVar16 = thunk_FUN_04f6d944(uVar12,uVar24,0);
                      if ((uVar16 & 1) != 0) {
                        FUN_055c0e40(param_1,plVar19);
                      }
                    }
                    else {
                      FUN_055c0e40(param_1,plVar19);
                    }
                  }
                }
              }
            }
            plVar19 = (long *)thunk_FUN_02f45174(lVar11,*(undefined8 *)PTR_DAT_067c91b0);
            if (plVar19 != (long *)0x0) {
              lVar11 = *plVar19;
              uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar16 != 0) {
                piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_067c91b0) {
                    puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
                    goto LAB_055c30e0;
                  }
                  uVar16 = uVar16 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar16 != 0);
              }
              puVar18 = (undefined8 *)FUN_02f421d0(plVar19,*(long *)PTR_DAT_067c91b0,0);
LAB_055c30e0:
              (*(code *)*puVar18)(plVar19,puVar18[1]);
            }
          }
          plVar19 = (long *)FUN_0554c018(plVar15,0);
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar11 = 0;
          for (iVar10 = 0;
              iVar9 = (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0)),
              iVar10 < iVar9; iVar10 = iVar10 + 1) {
            plVar20 = (long *)(**(code **)(*plVar19 + 0x208))
                                        (plVar19,iVar10,*(undefined8 *)(*plVar19 + 0x210));
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            uVar16 = (**(code **)(*plVar20 + 0x1d8))(plVar20,*(undefined8 *)(*plVar20 + 0x1e0));
            if ((uVar16 & 1) != 0) {
              plVar20 = (long *)(**(code **)(*plVar19 + 0x208))
                                          (plVar19,iVar10,*(undefined8 *)(*plVar19 + 0x210));
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              plVar20 = (long *)(**(code **)(*plVar20 + 0x188))
                                          (plVar20,*(undefined8 *)(*plVar20 + 400));
              if (plVar17 == plVar20) {
                lVar11 = (**(code **)(*plVar19 + 0x208))
                                   (plVar19,iVar10,*(undefined8 *)(*plVar19 + 0x210));
              }
            }
          }
        } while (lVar11 != 0);
        if (*(char *)(param_1 + 0xa0) == '\0') {
          uVar12 = FUN_05556718(plVar15,0);
        }
        else {
          iVar10 = (int)plVar15[0x43];
          if (iVar10 == -1) {
            plVar19 = (long *)plVar15[8];
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            plVar19 = (long *)(**(code **)(*plVar19 + 0x1e8))
                                        (plVar19,*(undefined8 *)(*plVar19 + 0x1f0));
            puVar4 = PTR_DAT_067c91b0;
            do {
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar11 = *plVar19;
              uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar16 != 0) {
                piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
                    puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
                    goto LAB_055c3258;
                  }
                  uVar16 = uVar16 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar16 != 0);
              }
              puVar18 = (undefined8 *)FUN_02f421d0(plVar19,*(long *)puVar5,0);
LAB_055c3258:
              uVar16 = (*(code *)*puVar18)(plVar19,puVar18[1]);
              if ((uVar16 & 1) == 0) {
                iVar10 = -1;
                goto LAB_055c3350;
              }
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar11 = *plVar19;
              uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar16 != 0) {
                piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
                    puVar18 = (undefined8 *)(lVar11 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                    goto LAB_055c32c0;
                  }
                  uVar16 = uVar16 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar16 != 0);
              }
              puVar18 = (undefined8 *)FUN_02f421d0(plVar19,*(long *)puVar5,1);
LAB_055c32c0:
              plVar20 = (long *)(*(code *)*puVar18)(plVar19,puVar18[1]);
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar11 = *plVar20;
              bVar1 = *(byte *)(*(long *)
                                 System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo +
                               0x130);
              if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar20);
              }
              iVar10 = (**(code **)(lVar11 + 0x1d8))(plVar20,*(undefined8 *)(lVar11 + 0x1e0));
            } while (iVar10 != 2);
            iVar10 = *(int *)((long)plVar20 + 100);
LAB_055c3350:
            plVar19 = (long *)thunk_FUN_02f45174(plVar19,*(undefined8 *)puVar4);
            if (plVar19 != (long *)0x0) {
              lVar11 = *plVar19;
              uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar16 != 0) {
                piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_067c91b0) {
                    puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
                    goto LAB_055c33c8;
                  }
                  uVar16 = uVar16 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar16 != 0);
              }
              puVar18 = (undefined8 *)FUN_02f421d0(plVar19,*(long *)PTR_DAT_067c91b0,0);
LAB_055c33c8:
              (*(code *)*puVar18)(plVar19,puVar18[1]);
            }
          }
          uVar12 = FUN_055564c0(plVar15,iVar10,0);
        }
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar11 = FUN_05556720(plVar17,uVar12,0);
        if (*(char *)(param_1 + 0xa0) != '\0') {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_0555ea34(lVar11,plVar17[0x14],0);
        }
        uVar24 = FUN_04f6f6b4(plVar15[0x12],*(undefined8 *)PTR_DAT_067d0878,plVar17[0x12],0);
        plVar19 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                              System_Xml_Schema_XdrBuilder_XdrBeginChildFunction_TypeInfo
                                            );
        FUN_05581e5c(plVar19,uVar24,uVar12,lVar11,1,0);
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        (**(code **)(*plVar19 + 0x1e8))(plVar19,1,*(undefined8 *)(*plVar19 + 0x1f0));
        if (plVar17[4] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar11 = *(long *)(plVar17[4] + 0x30);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_055854fc(lVar11,plVar19,0);
      } while ((*(char *)(param_1 + 0xa0) == '\0') ||
              (uVar16 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0)),
              (uVar16 & 1) == 0));
      lVar11 = *(long *)(param_1 + 0x88);
      uVar12 = (**(code **)(*plVar19 + 0x1b8))(plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8(uVar12,uVar12);
      }
      uVar16 = FUN_0492cf2c(lVar11,uVar12,
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_BaseSlider<int>_get_clampedDragger__);
    } while ((uVar16 & 1) == 0);
    lVar11 = *(long *)(param_1 + 0x88);
    uVar12 = (**(code **)(*plVar19 + 0x1b8))(plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8(uVar12,uVar12);
    }
    lVar11 = FUN_0492ccb8(lVar11,uVar12,
                          *(undefined8 *)
                           Method_UnityEngine_UIElements_BaseField<string>_set_showMixedValue__);
    uVar12 = (**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400));
    if (lVar11 != 0) {
      lVar21 = *(long *)(lVar11 + 0x10);
      lVar22 = *(long *)
                UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_TypeInfo
      ;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar21 != 0) {
        uVar3 = *(uint *)(lVar11 + 0x18);
        if (uVar3 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar3 + 1;
          *(undefined8 *)(lVar21 + (long)(int)uVar3 * 8 + 0x20) = uVar12;
        }
        else {
          FUN_03abf904(lVar11,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
        }
        goto joined_r0x055c2d90;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  goto LAB_055c2b5c;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar23 = piVar23 + 4;
    if (uVar16 == 0) break;
LAB_055c38e8:
    if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
      puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_055c391c;
    }
  }
LAB_055c3900:
  puVar18 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar4,0);
LAB_055c391c:
  (*(code *)*puVar18)(plVar13,puVar18[1]);
  return plVar15;
}


