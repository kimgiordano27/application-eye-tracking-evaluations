/*
FUNCTION_NAME: FUN_05ae0418
ENTRY_POINT: 05ae0418
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_5;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05ae0418(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  
  if ((DAT_06dc1e72 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ff840);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetLivePhysicalBoundsInfo_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaIdentityConstraint_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaGroupRef_TypeInfo);
    FUN_02d965b8(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_BaseCompositeField<Vector2,_FloatField,_float>__ctor__
                );
    FUN_02d965b8(
                Method_UnityEngine_UIElements_BaseCompositeField<Vector2Int,_IntegerField,_int>__ctor__
                );
    FUN_02d965b8(PTR_DAT_06a1ac90);
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float>__ctor__
                );
    FUN_02d965b8(
                Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__
                );
    DAT_06dc1e72 = 1;
  }
  puVar5 = PTR_DAT_069ff840;
  if (param_2 != (long *)0x0) {
    bVar3 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__GetLivePhysicalBoundsInfo_TypeInfo +
                     0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)OVR_OpenVR_IVRChaperoneSetup__GetLivePhysicalBoundsInfo_TypeInfo)) {
      lVar13 = param_2[10];
      lVar10 = param_2[0xb];
      lVar1 = param_2[0xc];
      lVar2 = param_2[0xd];
      if (*(int *)(*(long *)PTR_DAT_069ff840 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      puVar5 = OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo;
      uVar8 = FUN_05547e88(lVar13,lVar10,lVar1,lVar2,0);
      if ((uVar8 & 1) != 0) {
        FUN_05b121a0(param_2,param_2[0xc],param_2[0xd],0);
        uVar8 = FUN_05bfde88(param_1,*(undefined8 *)
                                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float>__ctor__
                             ,param_2,0);
      }
      puVar6 = System_Xml_Schema_XmlSchemaIdentityConstraint_TypeInfo;
      lVar13 = *param_2;
      bVar3 = *(byte *)(lVar13 + 0x130);
      bVar4 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((bVar3 < bVar4) ||
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar5)) {
        bVar4 = *(byte *)(*(long *)System_Xml_Schema_XmlSchemaGroupRef_TypeInfo + 0x130);
        if ((bVar3 < bVar4) ||
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)System_Xml_Schema_XmlSchemaGroupRef_TypeInfo)) {
          bVar4 = *(byte *)(*(long *)
                             OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose_TypeInfo
                           + 0x130);
          if ((bVar3 < bVar4) ||
             (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose_TypeInfo
             )) {
            bVar4 = *(byte *)(*(long *)System_Xml_Schema_XmlSchemaIdentityConstraint_TypeInfo +
                             0x130);
            if ((bVar4 <= bVar3) &&
               (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar4 * 8 + -8) ==
                *(long *)System_Xml_Schema_XmlSchemaIdentityConstraint_TypeInfo)) {
              uVar15 = *(undefined8 *)(param_1 + 0x48);
              lVar13 = FUN_02979eb8(param_2);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar9 = FUN_02979eb8(param_2,*(undefined8 *)puVar6);
              uVar8 = FUN_05b0a4d4(uVar9,uVar15,0);
            }
          }
          else {
            if (param_2[0xf] == 0) goto LAB_05ae0910;
            uVar8 = FUN_05bca8a4(param_2[0xf],0);
            if ((uVar8 & 1) == 0) {
              uVar8 = FUN_05adf548(param_1,param_2,*(undefined8 *)PTR_DAT_06a1ac90,param_2[0xf]);
            }
            else {
              uVar8 = FUN_05bfde00(param_1,*(undefined8 *)
                                            Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                                   ,*(undefined8 *)PTR_DAT_06a1ac90,param_2,0);
            }
          }
        }
        else {
          plVar11 = (long *)(**(code **)(lVar13 + 0x238))(param_2,*(undefined8 *)(lVar13 + 0x240));
          if (plVar11 == (long *)0x0) goto LAB_05ae0910;
          uVar8 = FUN_05489ff8(plVar11,0);
          puVar6 = OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo;
          puVar5 = OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo;
          if (0 < (int)uVar8) {
            iVar14 = 0;
            do {
              lVar13 = (**(code **)(*plVar11 + 0x308))
                                 (plVar11,iVar14,*(undefined8 *)(*plVar11 + 0x310));
              if (lVar13 == 0) goto LAB_05ae0910;
              *(long *)(lVar13 + 0x28) = (long)param_2;
              LeanTween__value((long *)(lVar13 + 0x28),param_2);
              plVar12 = (long *)(**(code **)(*plVar11 + 0x308))
                                          (plVar11,iVar14,*(undefined8 *)(*plVar11 + 0x310));
              if (plVar12 == (long *)0x0) {
LAB_05ae0af4:
                plVar12 = (long *)(**(code **)(*plVar11 + 0x308))
                                            (plVar11,iVar14,*(undefined8 *)(*plVar11 + 0x310));
                if (plVar12 != (long *)0x0) {
                  bVar3 = *(byte *)(*(long *)puVar6 + 0x130);
                  if ((*(byte *)(*plVar12 + 0x130) < bVar3) ||
                     (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar3 * 8 + -8) !=
                      *(long *)puVar6)) goto LAB_05ae0bf4;
                }
                FUN_05ae0418(param_1,plVar12);
              }
              else {
                bVar3 = *(byte *)(*(long *)puVar5 + 0x130);
                if ((*(byte *)(*plVar12 + 0x130) < bVar3) ||
                   (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar5)
                   ) goto LAB_05ae0af4;
                FUN_05adfd4c(param_1,plVar12);
              }
              iVar14 = iVar14 + 1;
              uVar8 = FUN_05489ff8(plVar11,0);
            } while (iVar14 < (int)uVar8);
          }
        }
      }
      else {
        plVar11 = (long *)(**(code **)(lVar13 + 0x238))(param_2,*(undefined8 *)(lVar13 + 0x240));
        if (plVar11 == (long *)0x0) goto LAB_05ae0910;
        uVar8 = FUN_05489ff8(plVar11,0);
        puVar6 = OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo;
        puVar5 = OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo;
        if (0 < (int)uVar8) {
          iVar14 = 0;
          do {
            lVar13 = (**(code **)(*plVar11 + 0x308))
                               (plVar11,iVar14,*(undefined8 *)(*plVar11 + 0x310));
            if (lVar13 == 0) goto LAB_05ae0910;
            *(long *)(lVar13 + 0x28) = (long)param_2;
            LeanTween__value((long *)(lVar13 + 0x28),param_2);
            plVar12 = (long *)(**(code **)(*plVar11 + 0x308))
                                        (plVar11,iVar14,*(undefined8 *)(*plVar11 + 0x310));
            if (plVar12 == (long *)0x0) {
LAB_05ae09c4:
              plVar12 = (long *)(**(code **)(*plVar11 + 0x308))
                                          (plVar11,iVar14,*(undefined8 *)(*plVar11 + 0x310));
              if (plVar12 != (long *)0x0) {
                bVar3 = *(byte *)(*(long *)puVar6 + 0x130);
                if ((*(byte *)(*plVar12 + 0x130) < bVar3) ||
                   (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar6)
                   ) {
LAB_05ae0bf4:
                    /* WARNING: Subroutine does not return */
                  FUN_02d96be0(plVar12);
                }
              }
              FUN_05ae0418(param_1,plVar12);
            }
            else {
              bVar3 = *(byte *)(*(long *)puVar5 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar3) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar5))
              goto LAB_05ae09c4;
              FUN_05adfd4c(param_1,plVar12);
            }
            iVar14 = iVar14 + 1;
            uVar8 = FUN_05489ff8(plVar11,0);
          } while (iVar14 < (int)uVar8);
        }
      }
LAB_05ae0bc4:
      FUN_05adbc04(uVar8,param_2);
      FUN_05ad92a4(param_1,param_2);
      return;
    }
    lVar10 = *(long *)PTR_DAT_069ff840;
    lVar13 = param_2[10];
    lVar1 = param_2[0xb];
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar10 = *(long *)puVar5;
    }
    uVar8 = FUN_05547cdc(lVar13,lVar1,**(undefined8 **)(lVar10 + 0xb8),
                         (*(undefined8 **)(lVar10 + 0xb8))[1],0);
    if ((uVar8 & 1) != 0) {
      lVar10 = *(long *)puVar5;
      lVar13 = param_2[10];
      lVar1 = param_2[0xb];
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar10 = *(long *)puVar5;
      }
      uVar8 = FUN_05547cdc(lVar13,lVar1,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10),
                           *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18),0);
      if ((uVar8 & 1) != 0) {
        lVar13 = *(long *)puVar5;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar13 = *(long *)puVar5;
        }
        FUN_05b121a0(param_2,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10),
                     *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18),0);
        FUN_05bfde88(param_1,*(undefined8 *)
                              Method_UnityEngine_UIElements_BaseCompositeField<Vector2Int,_IntegerField,_int>__ctor__
                     ,param_2,0);
      }
    }
    lVar10 = *(long *)puVar5;
    lVar13 = param_2[0xc];
    lVar1 = param_2[0xd];
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar10 = *(long *)puVar5;
    }
    uVar8 = FUN_05547cdc(lVar13,lVar1,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10),
                         *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18),0);
    if ((uVar8 & 1) != 0) {
      lVar13 = *(long *)puVar5;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar13 = *(long *)puVar5;
      }
      FUN_05b122d8(param_2,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10),
                   *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18),0);
      FUN_05bfde88(param_1,*(undefined8 *)
                            Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__
                   ,param_2,0);
    }
    lVar13 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    puVar7 = Method_UnityEngine_UIElements_BaseCompositeField<Vector2,_FloatField,_float>__ctor__;
    puVar6 = OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo;
    if (lVar13 != 0) {
      iVar14 = 0;
      do {
        uVar8 = FUN_05489ff8(lVar13,0);
        if ((int)uVar8 <= iVar14) goto LAB_05ae0bc4;
        plVar11 = (long *)(**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240))
        ;
        if ((plVar11 == (long *)0x0) ||
           (plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                        (plVar11,iVar14,*(undefined8 *)(*plVar11 + 0x310)),
           plVar11 == (long *)0x0)) break;
        bVar3 = *(byte *)(*(long *)puVar6 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar11);
        }
        lVar10 = *(long *)puVar5;
        lVar13 = plVar11[0xc];
        lVar1 = plVar11[0xd];
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar10 = *(long *)puVar5;
        }
        uVar8 = FUN_05547cdc(lVar13,lVar1,**(undefined8 **)(lVar10 + 0xb8),
                             (*(undefined8 **)(lVar10 + 0xb8))[1],0);
        if ((uVar8 & 1) != 0) {
          lVar10 = *(long *)puVar5;
          lVar13 = plVar11[0xc];
          lVar1 = plVar11[0xd];
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar10 = *(long *)puVar5;
          }
          uVar8 = FUN_05547cdc(lVar13,lVar1,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10),
                               *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18),0);
          if ((uVar8 & 1) != 0) {
            lVar13 = *(long *)puVar5;
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar13 = *(long *)puVar5;
            }
            FUN_05b122d8(plVar11,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10),
                         *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18),0);
            FUN_05bfde88(param_1,*(undefined8 *)puVar7,plVar11,0);
          }
        }
        plVar11[5] = (long)param_2;
        LeanTween__value(plVar11 + 5,param_2);
        FUN_05adfd4c(param_1,plVar11);
        iVar14 = iVar14 + 1;
        lVar13 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      } while (lVar13 != 0);
    }
  }
LAB_05ae0910:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


