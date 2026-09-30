/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingSupported
ENTRY_POINT: 0337c920
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_15;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__get_eyeTrackingSupported(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x23;
  ulong unaff_x24;
  long *plVar12;
  int unaff_w25;
  long lVar13;
  long unaff_x26;
  int iVar14;
  undefined4 uStack000000000000000c;
  int iStack000000000000001c;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  
  FUN_01c5d288(VoxelBusters_EssentialKit_CloudServices_TypeInfo);
  FUN_01c5d288(VoxelBusters_EssentialKit_CloudServicesSavedDataChangeResult_TypeInfo);
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_IList<IResourceLocation>>_Dispose__
              );
  FUN_01c5d288(VoxelBusters_EssentialKit_CloudServicesSynchronizeResult_TypeInfo);
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_IList<IResourceLocation>>_MoveNext__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_IList<IResourceLocation>>_get_Current__
              );
  FUN_01c5d288(VoxelBusters_EssentialKit_CloudServicesUnitySettings_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x5dd) = 1;
  if ((unaff_x24 & 1) != 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_0337ce7c;
    (**(code **)(*unaff_x20 + 0x208))();
  }
  uVar7 = FUN_031532a8();
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<RoomInfo>_Dispose__ +
                0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    iVar5 = FUN_0337ce84();
    if (iVar5 == 0) {
      if (unaff_x23 == 0) goto LAB_0337ce7c;
    }
    else {
      if (iVar5 == -1) {
        if (unaff_x20 == (long *)0x0) goto LAB_0337ce7c;
        (**(code **)(*unaff_x20 + 0x238))();
        goto LAB_0337ce20;
      }
      if ((*in_stack_00000028 == 0) || (*(int *)(*in_stack_00000028 + 0x18) < iVar5)) {
        lVar8 = FUN_0337b9f0(in_stack_00000020,iVar5);
        *in_stack_00000028 = lVar8;
      }
      if ((unaff_x23 == 0) || (FUN_03158d00(), unaff_x20 == (long *)0x0)) goto LAB_0337ce7c;
      (**(code **)(*unaff_x20 + 0x228))();
    }
    puVar4 = VoxelBusters_EssentialKit_CloudSavedDataChangeReasonCode_TypeInfo;
    iVar10 = *(int *)(unaff_x23 + 0x10);
    plVar12 = (long *)PTR_DAT_04230d30;
    uStack000000000000000c = unaff_w21;
    iStack000000000000001c = unaff_w25;
    iVar14 = iVar5;
    if (iVar5 < iVar10) {
      do {
        uVar7 = FUN_0314e438(unaff_x23,iVar14,0);
        if (unaff_x26 == 0) goto LAB_0337ce7c;
        uVar3 = *(uint *)(unaff_x26 + 0x18);
        uVar6 = (uint)uVar7;
        uVar1 = uVar6 & 0xffff;
        if ((int)uVar1 < (int)uVar3) {
          if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          if (*(char *)(unaff_x26 + (uVar7 & 0xffff) + 0x20) != '\0') goto LAB_0337cae4;
        }
        else {
LAB_0337cae4:
          if (uVar1 < 0x5d) {
            plVar11 = (long *)puVar4;
            switch(uVar6 & 0xffff) {
            case 8:
              plVar11 = (long *)Unity_Services_Core_Configuration_CloudProjectId_TypeInfo;
              break;
            case 9:
              break;
            case 10:
              plVar11 = (long *)UnityEngine_Transform___TypeInfo;
              break;
            case 0xb:
switchD_0337cb14_caseD_b:
              if ((unaff_w25 != 1) && ((int)uVar3 <= (int)uVar1)) goto LAB_0337cd88;
              if (((unaff_w25 == 2) ||
                  (plVar11 = (long *)
                             Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_IList<IResourceLocation>>_Dispose__
                  , (uVar6 & 0xffff) != 0x27)) &&
                 ((unaff_w25 == 2 ||
                  (plVar11 = (long *)VoxelBusters_EssentialKit_CloudServices_TypeInfo,
                  (uVar6 & 0xffff) != 0x22)))) {
                lVar8 = *in_stack_00000028;
                if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) < 6)) {
                  lVar8 = FUN_0337b9f0(in_stack_00000020,6);
                  *in_stack_00000028 = lVar8;
                }
                FUN_0337cf38(uVar7 & 0xffffffff,lVar8);
                plVar11 = plVar12;
              }
              break;
            case 0xc:
              plVar11 = (long *)
                        VoxelBusters_EssentialKit_CloudServicesSavedDataChangeResult_TypeInfo;
              break;
            case 0xd:
              plVar11 = (long *)VoxelBusters_EssentialKit_CloudServicesSynchronizeResult_TypeInfo;
              break;
            default:
              plVar11 = (long *)VoxelBusters_EssentialKit_CloudServicesUnitySettings_TypeInfo;
              if ((uVar6 & 0xffff) != 0x5c) goto switchD_0337cb14_caseD_b;
            }
          }
          else {
            uVar2 = uVar6 & 0xffff;
            plVar11 = (long *)
                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_IList<IResourceLocation>>_get_Current__
            ;
            if (((uVar2 != 0x85) &&
                (plVar11 = (long *)
                           Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_IList<IResourceLocation>>_MoveNext__
                , uVar2 != 0x2028)) &&
               (plVar11 = (long *)
                          Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<OVRGrabbable,_int>_get_Current__
               , uVar2 != 0x2029)) goto switchD_0337cb14_caseD_b;
          }
          lVar8 = *plVar11;
          if (lVar8 != 0) {
            uVar7 = FUN_03152760(lVar8,*plVar12,4,0);
            iVar10 = iVar14 - iVar5;
            if (iVar10 == 0 || iVar14 < iVar5) {
              if ((uVar7 & 1) != 0) {
                if (unaff_x20 != (long *)0x0) goto LAB_0337cd44;
                goto LAB_0337ce7c;
              }
              if (unaff_x20 == (long *)0x0) goto LAB_0337ce7c;
            }
            else {
              lVar13 = *in_stack_00000028;
              iVar9 = 6;
              if ((uVar7 & 1) == 0) {
                iVar9 = 0;
              }
              if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) < iVar14 + (iVar9 - iVar5))) {
                lVar13 = FUN_0337b878(in_stack_00000020);
                if ((uVar7 & 1) != 0) {
                  Oculus_Platform_CAPI__ovr_HttpTransferUpdate_GetID(*in_stack_00000028,lVar13,6,0);
                }
                FUN_0337b940(in_stack_00000020,*in_stack_00000028);
                *in_stack_00000028 = lVar13;
              }
              FUN_03158d00(unaff_x23,iVar5,lVar13,iVar9,iVar10,0);
              if (unaff_x20 == (long *)0x0) goto LAB_0337ce7c;
              (**(code **)(*unaff_x20 + 0x228))
                        (unaff_x20,*in_stack_00000028,iVar9,iVar10,
                         *(undefined8 *)(*unaff_x20 + 0x230));
              plVar12 = (long *)PTR_DAT_04230d30;
              unaff_w25 = iStack000000000000001c;
              if ((uVar7 & 1) != 0) {
LAB_0337cd44:
                iVar5 = iVar14 + 1;
                (**(code **)(*unaff_x20 + 0x228))
                          (unaff_x20,*in_stack_00000028,0,6,*(undefined8 *)(*unaff_x20 + 0x230));
                goto LAB_0337cd88;
              }
            }
            iVar5 = iVar14 + 1;
            (**(code **)(*unaff_x20 + 0x238))(unaff_x20,lVar8,*(undefined8 *)(*unaff_x20 + 0x240));
          }
        }
LAB_0337cd88:
        iVar10 = *(int *)(unaff_x23 + 0x10);
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar10);
      unaff_x24 = unaff_x24 & 0xffffffff;
      unaff_w21 = uStack000000000000000c;
    }
    iVar10 = iVar10 - iVar5;
    if (0 < iVar10) {
      lVar8 = *in_stack_00000028;
      if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) < iVar10)) {
        lVar8 = FUN_0337b9f0(in_stack_00000020,iVar10);
        *in_stack_00000028 = lVar8;
      }
      FUN_03158d00(unaff_x23,iVar5,lVar8,0,iVar10,0);
      if (unaff_x20 == (long *)0x0) goto LAB_0337ce7c;
      (**(code **)(*unaff_x20 + 0x228))
                (unaff_x20,*in_stack_00000028,0,iVar10,*(undefined8 *)(*unaff_x20 + 0x230));
    }
  }
LAB_0337ce20:
  if ((unaff_x24 & 1) == 0) {
    return;
  }
  if (unaff_x20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0337ce58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x20 + 0x208))(unaff_x20,unaff_w21,*(undefined8 *)(*unaff_x20 + 0x210));
    return;
  }
LAB_0337ce7c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


