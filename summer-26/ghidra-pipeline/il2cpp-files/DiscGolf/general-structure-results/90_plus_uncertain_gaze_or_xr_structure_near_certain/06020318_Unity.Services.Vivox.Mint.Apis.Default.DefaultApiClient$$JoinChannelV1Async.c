/*
FUNCTION_NAME: Unity.Services.Vivox.Mint.Apis.Default.DefaultApiClient$$JoinChannelV1Async
ENTRY_POINT: 06020318
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06020638) */

void Unity_Services_Vivox_Mint_Apis_Default_DefaultApiClient__JoinChannelV1Async(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  
  lVar3 = FUN_02d966a4(param_1);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_06a0e3f8;
    LeanTween__value((undefined8 *)(lVar3 + 0x20));
    puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar3 + 0x28) =
           *(undefined8 *)
            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<UpdateKickedUsersList>d__67>__
      ;
      uVar4 = LeanTween__value();
      uVar4 = FUN_0601f9e0(uVar4,lVar3);
      uVar5 = FUN_0536c9cc(uVar4,0);
      if ((uVar5 & 1) == 0) {
        FUN_04e935f0();
      }
      uVar9 = *(undefined8 *)puVar1;
      uVar4 = FUN_0601fab8();
      uVar5 = FUN_0536c9cc(uVar4,0);
      if ((((uVar5 & 1) == 0) ||
          (uVar5 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)PTR_DAT_069ff540,0), (uVar5 & 1) != 0))
         || (uVar5 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)
                                               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                        ,0), (uVar5 & 1) != 0)) {
        FUN_04e935f0();
      }
      if (unaff_x20 == 0) {
        return;
      }
      plVar8 = *(long **)(unaff_x20 + 0x28);
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo) {
            puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06020480;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02dd004c(plVar8,*(long *)
                                    UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                            ,0);
LAB_06020480:
      plVar8 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
      puVar2 = UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyGroundPosition_TypeInfo;
      puVar1 = PTR_DAT_069fbff8;
      do {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar3 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_06020504;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)puVar1,0);
LAB_06020504:
        uVar5 = (*(code *)*puVar6)(plVar8,puVar6[1]);
        if ((uVar5 & 1) == 0) {
          if (plVar8 == (long *)0x0) {
            return;
          }
          lVar3 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 == 0) goto LAB_060205dc;
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_060205c4;
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar3 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_06020568;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)puVar2,0);
LAB_06020568:
        (*(code *)*puVar6)(plVar8,puVar6[1]);
        FUN_04e935dc();
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar7 = piVar7 + 4;
    if (uVar5 == 0) break;
LAB_060205c4:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_060205f8;
    }
  }
LAB_060205dc:
  puVar6 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)PTR_DAT_069fbff0,0);
LAB_060205f8:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
  return;
}


