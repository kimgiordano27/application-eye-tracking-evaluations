/*
FUNCTION_NAME: OVRPermissionsRequester$$Request
ENTRY_POINT: 0337ca04
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void OVRPermissionsRequester__Request(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x23;
  uint unaff_w24;
  long *plVar10;
  int unaff_w25;
  long lVar11;
  long unaff_x26;
  int unaff_w27;
  int iVar12;
  long lVar13;
  undefined4 uStack000000000000000c;
  int iStack000000000000001c;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  
  puVar4 = VoxelBusters_EssentialKit_CloudSavedDataChangeReasonCode_TypeInfo;
  if (unaff_x23 != 0) {
    iVar8 = *(int *)(unaff_x23 + 0x10);
    plVar10 = (long *)PTR_DAT_04230d30;
    iVar12 = unaff_w27;
    uStack000000000000000c = unaff_w21;
    iStack000000000000001c = unaff_w25;
    if (unaff_w27 < iVar8) {
      do {
        uVar6 = FUN_0314e438(unaff_x23,unaff_w27,0);
        if (unaff_x26 == 0) goto LAB_0337ce7c;
        uVar3 = *(uint *)(unaff_x26 + 0x18);
        uVar5 = (uint)uVar6;
        uVar1 = uVar5 & 0xffff;
        if ((int)uVar1 < (int)uVar3) {
          if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          if (*(char *)(unaff_x26 + (uVar6 & 0xffff) + 0x20) != '\0') goto LAB_0337cae4;
        }
        else {
LAB_0337cae4:
          if (uVar1 < 0x5d) {
            plVar9 = (long *)puVar4;
            switch(uVar5 & 0xffff) {
            case 8:
              plVar9 = (long *)Unity_Services_Core_Configuration_CloudProjectId_TypeInfo;
              break;
            case 9:
              break;
            case 10:
              plVar9 = (long *)UnityEngine_Transform___TypeInfo;
              break;
            case 0xb:
switchD_0337cb14_caseD_b:
              if ((unaff_w25 != 1) && ((int)uVar3 <= (int)uVar1)) goto LAB_0337cd88;
              if (((unaff_w25 == 2) ||
                  (plVar9 = (long *)
                            Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_IList<IResourceLocation>>_Dispose__
                  , (uVar5 & 0xffff) != 0x27)) &&
                 ((unaff_w25 == 2 ||
                  (plVar9 = (long *)VoxelBusters_EssentialKit_CloudServices_TypeInfo,
                  (uVar5 & 0xffff) != 0x22)))) {
                lVar13 = *in_stack_00000028;
                if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) < 6)) {
                  lVar13 = FUN_0337b9f0(in_stack_00000020,6);
                  *in_stack_00000028 = lVar13;
                }
                FUN_0337cf38(uVar6 & 0xffffffff,lVar13);
                plVar9 = plVar10;
              }
              break;
            case 0xc:
              plVar9 = (long *)VoxelBusters_EssentialKit_CloudServicesSavedDataChangeResult_TypeInfo
              ;
              break;
            case 0xd:
              plVar9 = (long *)VoxelBusters_EssentialKit_CloudServicesSynchronizeResult_TypeInfo;
              break;
            default:
              plVar9 = (long *)VoxelBusters_EssentialKit_CloudServicesUnitySettings_TypeInfo;
              if ((uVar5 & 0xffff) != 0x5c) goto switchD_0337cb14_caseD_b;
            }
          }
          else {
            uVar2 = uVar5 & 0xffff;
            plVar9 = (long *)
                     Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_IList<IResourceLocation>>_get_Current__
            ;
            if (((uVar2 != 0x85) &&
                (plVar9 = (long *)
                          Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_IList<IResourceLocation>>_MoveNext__
                , uVar2 != 0x2028)) &&
               (plVar9 = (long *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<OVRGrabbable,_int>_get_Current__
               , uVar2 != 0x2029)) goto switchD_0337cb14_caseD_b;
          }
          lVar13 = *plVar9;
          if (lVar13 != 0) {
            uVar6 = FUN_03152760(lVar13,*plVar10,4,0);
            iVar8 = unaff_w27 - iVar12;
            if (iVar8 == 0 || unaff_w27 < iVar12) {
              if ((uVar6 & 1) != 0) {
                if (unaff_x20 != (long *)0x0) goto LAB_0337cd44;
                goto LAB_0337ce7c;
              }
              if (unaff_x20 == (long *)0x0) goto LAB_0337ce7c;
            }
            else {
              lVar11 = *in_stack_00000028;
              iVar7 = 6;
              if ((uVar6 & 1) == 0) {
                iVar7 = 0;
              }
              if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) < unaff_w27 + (iVar7 - iVar12))) {
                lVar11 = FUN_0337b878(in_stack_00000020);
                if ((uVar6 & 1) != 0) {
                  Oculus_Platform_CAPI__ovr_HttpTransferUpdate_GetID(*in_stack_00000028,lVar11,6,0);
                }
                FUN_0337b940(in_stack_00000020,*in_stack_00000028);
                *in_stack_00000028 = lVar11;
              }
              FUN_03158d00(unaff_x23,iVar12,lVar11,iVar7,iVar8,0);
              if (unaff_x20 == (long *)0x0) goto LAB_0337ce7c;
              (**(code **)(*unaff_x20 + 0x228))
                        (unaff_x20,*in_stack_00000028,iVar7,iVar8,
                         *(undefined8 *)(*unaff_x20 + 0x230));
              plVar10 = (long *)PTR_DAT_04230d30;
              unaff_w25 = iStack000000000000001c;
              if ((uVar6 & 1) != 0) {
LAB_0337cd44:
                iVar12 = unaff_w27 + 1;
                (**(code **)(*unaff_x20 + 0x228))
                          (unaff_x20,*in_stack_00000028,0,6,*(undefined8 *)(*unaff_x20 + 0x230));
                goto LAB_0337cd88;
              }
            }
            iVar12 = unaff_w27 + 1;
            (**(code **)(*unaff_x20 + 0x238))(unaff_x20,lVar13,*(undefined8 *)(*unaff_x20 + 0x240));
          }
        }
LAB_0337cd88:
        iVar8 = *(int *)(unaff_x23 + 0x10);
        unaff_w27 = unaff_w27 + 1;
        unaff_w21 = uStack000000000000000c;
      } while (unaff_w27 < iVar8);
    }
    iVar8 = iVar8 - iVar12;
    if (0 < iVar8) {
      lVar13 = *in_stack_00000028;
      if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) < iVar8)) {
        lVar13 = FUN_0337b9f0(in_stack_00000020,iVar8);
        *in_stack_00000028 = lVar13;
      }
      FUN_03158d00(unaff_x23,iVar12,lVar13,0,iVar8,0);
      if (unaff_x20 == (long *)0x0) goto LAB_0337ce7c;
      (**(code **)(*unaff_x20 + 0x228))
                (unaff_x20,*in_stack_00000028,0,iVar8,*(undefined8 *)(*unaff_x20 + 0x230));
    }
    if ((unaff_w24 & 1) == 0) {
      return;
    }
    if (unaff_x20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0337ce58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x20 + 0x208))(unaff_x20,unaff_w21,*(undefined8 *)(*unaff_x20 + 0x210));
      return;
    }
  }
LAB_0337ce7c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


