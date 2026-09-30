/*
FUNCTION_NAME: Unity.Services.Wire.Internal.CommandManager$$OnCommandReplyReceived
ENTRY_POINT: 06025640
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


/* WARNING: Removing unreachable block (ram,0x060259b4) */

void Unity_Services_Wire_Internal_CommandManager__OnCommandReplyReceived(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long unaff_x20;
  long *plVar9;
  undefined8 *unaff_x26;
  
  FUN_04e935f0();
  FUN_04e935f0();
  uVar3 = FUN_02d966a4(*unaff_x26,0);
  lVar4 = FUN_02d966a4(*unaff_x26,2);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_06a0e3f8;
    LeanTween__value((undefined8 *)(lVar4 + 0x20));
    puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar4 + 0x28) =
           *(undefined8 *)
            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<UpdateKickedUsersList>d__67>__
      ;
      uVar5 = LeanTween__value();
      uVar5 = FUN_06021e18(uVar5,lVar4);
      uVar6 = FUN_0536c9cc(uVar5,0);
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN_04e935f0();
      }
      uVar5 = *(undefined8 *)puVar1;
      uVar3 = FUN_06021ef0(uVar6,uVar3);
      uVar6 = FUN_0536c9cc(uVar3,0);
      if ((((uVar6 & 1) == 0) ||
          (uVar6 = thunk_FUN_0536b75c(uVar5,*(undefined8 *)PTR_DAT_069ff540,0), (uVar6 & 1) != 0))
         || (uVar6 = thunk_FUN_0536b75c(uVar5,*(undefined8 *)
                                               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                        ,0), (uVar6 & 1) != 0)) {
        FUN_04e935f0();
      }
      if (unaff_x20 == 0) {
        return;
      }
      plVar9 = *(long **)(unaff_x20 + 0x28);
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_060257fc;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02dd004c(plVar9,*(long *)
                                    UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                            ,0);
LAB_060257fc:
      plVar9 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
      puVar2 = UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyGroundPosition_TypeInfo;
      puVar1 = PTR_DAT_069fbff8;
      do {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar4 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06025880;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar1,0);
LAB_06025880:
        uVar6 = (*(code *)*puVar7)(plVar9,puVar7[1]);
        if ((uVar6 & 1) == 0) {
          if (plVar9 == (long *)0x0) {
            return;
          }
          lVar4 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 == 0) goto LAB_06025958;
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_06025940;
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar4 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_060258e4;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar2,0);
LAB_060258e4:
        (*(code *)*puVar7)(plVar9,puVar7[1]);
        FUN_04e935dc();
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
LAB_06025940:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_06025974;
    }
  }
LAB_06025958:
  puVar7 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)PTR_DAT_069fbff0,0);
LAB_06025974:
  (*(code *)*puVar7)(plVar9,puVar7[1]);
  return;
}


