/*
FUNCTION_NAME: Unity.XR.CoreUtils.Vector3UnityEvent$$.ctor
ENTRY_POINT: 060ca7ac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x060caac4) */

void Unity_XR_CoreUtils_Vector3UnityEvent___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)PTR_DAT_06a0e3f8;
    LeanTween__value((undefined8 *)(param_1 + 0x20));
    puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
    if ((*(uint *)(param_1 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(param_1 + 0x28) =
           *(undefined8 *)
            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<UpdateKickedUsersList>d__67>__
      ;
      uVar3 = LeanTween__value();
      uVar3 = FUN_060ca1b0(uVar3,param_1);
      uVar4 = FUN_0536c9cc(uVar3,0);
      if ((uVar4 & 1) == 0) {
        FUN_04e935f0();
      }
      uVar9 = *(undefined8 *)puVar1;
      uVar3 = FUN_060ca288();
      uVar4 = FUN_0536c9cc(uVar3,0);
      if ((((uVar4 & 1) == 0) ||
          (uVar4 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)PTR_DAT_069ff540,0), (uVar4 & 1) != 0))
         || (uVar4 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)
                                               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                        ,0), (uVar4 & 1) != 0)) {
        FUN_04e935f0();
      }
      if (unaff_x20 == 0) {
        return;
      }
      plVar8 = *(long **)(unaff_x20 + 0x28);
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_060ca90c;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_02dd004c(plVar8,*(long *)
                                    UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                            ,0);
LAB_060ca90c:
      plVar8 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
      puVar2 = UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyGroundPosition_TypeInfo;
      puVar1 = PTR_DAT_069fbff8;
      do {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto Unity_XR_CoreUtils_Vector3Extensions__Inverse;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)puVar1,0);
Unity_XR_CoreUtils_Vector3Extensions__Inverse:
        uVar4 = (*(code *)*puVar5)(plVar8,puVar5[1]);
        if ((uVar4 & 1) == 0) {
          if (plVar8 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar8;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 == 0) goto LAB_060caa68;
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_060caa50;
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_060ca9f4;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)puVar2,0);
LAB_060ca9f4:
        (*(code *)*puVar5)(plVar8,puVar5[1]);
        FUN_04e935dc();
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar7 = piVar7 + 4;
    if (uVar4 == 0) break;
LAB_060caa50:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_060caa84;
    }
  }
LAB_060caa68:
  puVar5 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)PTR_DAT_069fbff0,0);
LAB_060caa84:
  (*(code *)*puVar5)(plVar8,puVar5[1]);
  return;
}


