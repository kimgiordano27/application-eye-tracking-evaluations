/*
FUNCTION_NAME: FUN_05213e84
ENTRY_POINT: 05213e84
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05213e84(undefined8 param_1,undefined2 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined2 local_24 [2];
  
  puVar1 = PTR_DAT_06646310;
  local_24[0] = param_2;
  if ((DAT_06a520ae & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06646730);
    FUN_02d4dc40(PTR_DAT_06646310);
    FUN_02d4dc40(PlayFab_MultiplayerModels_UpdateBuildNameRequest_var);
    FUN_02d4dc40(PTR_DAT_066495b0);
    FUN_02d4dc40(
                UnityEngine_Pool_CollectionPool<List<FocusController_FocusedElement>,_FocusController_FocusedElement>_TypeInfo
                );
    DAT_06a520ae = 1;
  }
  lVar2 = FUN_02d4dd2c(*(undefined8 *)puVar1,6);
  uVar3 = FUN_05213524(param_1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x20),uVar3);
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) =
             *(undefined8 *)
              UnityEngine_Pool_CollectionPool<List<FocusController_FocusedElement>,_FocusController_FocusedElement>_TypeInfo
        ;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x28));
        uVar3 = FUN_04ffe748(local_24,0);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = uVar3;
          thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x30),uVar3);
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)PTR_DAT_066495b0;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x38));
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = param_3;
              thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x40),param_3);
              puVar1 = PTR_DAT_06646730;
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) =
                     *(undefined8 *)PlayFab_MultiplayerModels_UpdateBuildNameRequest_var;
                thunk_FUN_02dc1ef0();
                uVar3 = FUN_04e80ce4(lVar2,0);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_02dabd98(*(long *)puVar1);
                }
                FUN_05ea2238(uVar3,0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


