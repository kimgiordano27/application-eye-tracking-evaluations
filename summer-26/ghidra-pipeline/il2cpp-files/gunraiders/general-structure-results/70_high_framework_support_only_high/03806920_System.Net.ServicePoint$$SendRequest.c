/*
FUNCTION_NAME: System.Net.ServicePoint$$SendRequest
ENTRY_POINT: 03806920
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03806a8c) */
/* WARNING: Removing unreachable block (ram,0x03806b34) */
/* WARNING: Removing unreachable block (ram,0x03806aa8) */
/* WARNING: Removing unreachable block (ram,0x03806abc) */
/* WARNING: Removing unreachable block (ram,0x03806ac0) */
/* WARNING: Removing unreachable block (ram,0x03806b24) */
/* WARNING: Removing unreachable block (ram,0x03806acc) */
/* WARNING: Removing unreachable block (ram,0x03806b20) */
/* WARNING: Removing unreachable block (ram,0x03806ad8) */

void System_Net_ServicePoint__SendRequest(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0x560));
  FUN_01c5d288(Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_Mesh>__);
  FUN_01c5d288(Method_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy<IScrollHandler>__);
  *(undefined1 *)(unaff_x22 + 0xad) = 1;
  if (unaff_x21 == 0) {
    if (unaff_x20 == 0) {
      return;
    }
  }
  else {
    FUN_0380bfd4();
    if (unaff_x20 == 0) {
      System_Net_FixedSizeReadStream___ctor();
      return;
    }
  }
  puVar1 = Method_UnityEngine_UI_LayoutGroup_SetProperty<RectOffset>__;
  lVar2 = *(long *)Method_UnityEngine_UI_LayoutGroup_SetProperty<RectOffset>__;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar2 = *(long *)puVar1;
  }
  plVar3 = *(long **)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x238))();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar2 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,4);
    if (lVar2 != 0) {
      if ((*(int *)(lVar2 + 0x18) != 0) &&
         (*(undefined8 *)(lVar2 + 0x20) =
               *(undefined8 *)
                Method_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy<IScrollHandler>__,
         *(int *)(lVar2 + 0x18) != 1)) {
        *(long *)(lVar2 + 0x28) = unaff_x20;
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar4 = *(long *)puVar1;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
        if (lVar4 == 0) goto LAB_03806b2c;
        uVar5 = FUN_037f6b90(lVar4,0);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = uVar5;
          uVar5 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = uVar5;
            FUN_03805714();
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
  }
LAB_03806b2c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


