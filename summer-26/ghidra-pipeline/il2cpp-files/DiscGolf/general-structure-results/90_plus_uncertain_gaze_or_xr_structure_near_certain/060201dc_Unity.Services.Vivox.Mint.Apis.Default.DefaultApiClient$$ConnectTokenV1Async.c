/*
FUNCTION_NAME: Unity.Services.Vivox.Mint.Apis.Default.DefaultApiClient$$ConnectTokenV1Async
ENTRY_POINT: 060201dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06020638) */

void Unity_Services_Vivox_Mint_Apis_Default_DefaultApiClient__ConnectTokenV1Async(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  long *unaff_x21;
  long *unaff_x22;
  
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_06020228;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02dd004c();
LAB_06020228:
  uVar4 = (*(code *)*puVar3)();
  FUN_05362cb4(*(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__28>__
               ,uVar4,0);
  if (unaff_x19 != 0) {
    FUN_04e935f0();
    if (*(int *)(*(long *)PTR_DAT_069fc218 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_06304ca4(0);
    puVar1 = PTR_DAT_069fb9d8;
    if (unaff_x19 != 0) {
      FUN_04e935f0();
      FUN_04e935f0();
      uVar4 = FUN_02d966a4(*(undefined8 *)puVar1,0);
      lVar6 = FUN_02d966a4(*(undefined8 *)puVar1,2);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) != 0) {
          *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_06a0e3f8;
          LeanTween__value((undefined8 *)(lVar6 + 0x20));
          puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar6 + 0x28) =
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<UpdateKickedUsersList>d__67>__
            ;
            uVar5 = LeanTween__value();
            uVar5 = FUN_0601f9e0(uVar5,lVar6);
            uVar7 = FUN_0536c9cc(uVar5,0);
            if ((uVar7 & 1) == 0) {
              uVar7 = FUN_04e935f0();
            }
            uVar5 = *(undefined8 *)puVar1;
            uVar4 = FUN_0601fab8(uVar7,uVar4);
            uVar7 = FUN_0536c9cc(uVar4,0);
            if ((((uVar7 & 1) == 0) ||
                (uVar7 = thunk_FUN_0536b75c(uVar5,*(undefined8 *)PTR_DAT_069ff540,0),
                (uVar7 & 1) != 0)) ||
               (uVar7 = thunk_FUN_0536b75c(uVar5,*(undefined8 *)
                                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                           ,0), (uVar7 & 1) != 0)) {
              FUN_04e935f0();
            }
            if (unaff_x20 == 0) {
              return;
            }
            plVar9 = *(long **)(unaff_x20 + 0x28);
            if (plVar9 == (long *)0x0) {
              return;
            }
            lVar6 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) ==
                    *(long *)
                     UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo) {
                  puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_06020480;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)
                     FUN_02dd004c(plVar9,*(long *)
                                          UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                                  ,0);
LAB_06020480:
            plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
            puVar2 = UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyGroundPosition_TypeInfo;
            puVar1 = PTR_DAT_069fbff8;
            do {
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar6 = *plVar9;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_06020504;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar3 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar1,0);
LAB_06020504:
              uVar7 = (*(code *)*puVar3)(plVar9,puVar3[1]);
              if ((uVar7 & 1) == 0) {
                if (plVar9 == (long *)0x0) {
                  return;
                }
                lVar6 = *plVar9;
                uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar7 == 0) goto LAB_060205dc;
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                goto LAB_060205c4;
              }
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar6 = *plVar9;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_06020568;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar3 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar2,0);
LAB_06020568:
              (*(code *)*puVar3)(plVar9,puVar3[1]);
              FUN_04e935dc();
            } while( true );
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_060205c4:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_060205f8;
    }
  }
LAB_060205dc:
  puVar3 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)PTR_DAT_069fbff0,0);
LAB_060205f8:
  (*(code *)*puVar3)(plVar9,puVar3[1]);
  return;
}


