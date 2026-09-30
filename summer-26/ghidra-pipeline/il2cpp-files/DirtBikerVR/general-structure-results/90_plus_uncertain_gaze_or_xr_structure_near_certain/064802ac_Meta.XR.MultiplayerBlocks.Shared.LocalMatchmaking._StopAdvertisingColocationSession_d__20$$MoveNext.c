/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopAdvertisingColocationSession>d__20$$MoveNext
ENTRY_POINT: 064802ac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__20__MoveNext
               (long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  long lVar4;
  undefined8 *unaff_x23;
  long *unaff_x24;
  
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + 0xc0);
    uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
    uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
    if (uVar2 != 0) {
      lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
      do {
        if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06480310;
        uVar2 = uVar2 - 1;
        lVar3 = lVar3 + 0x10;
      } while (uVar2 != 0);
    }
    FUN_03ac43c4();
LAB_06480310:
    FUN_05e42d5c(uVar1);
    if (lVar4 != 0) {
      FUN_070a1194(lVar4,uVar1,0);
      if (*unaff_x20 != 0) {
        lVar4 = *(long *)(*unaff_x20 + 0xc0);
        uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
        uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
        if (uVar2 != 0) {
          lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
          do {
            if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_064803a0;
            uVar2 = uVar2 - 1;
            lVar3 = lVar3 + 0x10;
          } while (uVar2 != 0);
        }
        FUN_03ac43c4();
LAB_064803a0:
        FUN_05e42d5c(uVar1);
        if (lVar4 != 0) {
          FUN_070a12f4(lVar4,uVar1,0);
          if (*unaff_x20 != 0) {
            lVar4 = *(long *)(*unaff_x20 + 0xc0);
            uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
            uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
            if (uVar2 != 0) {
              lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
              do {
                if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06480430;
                uVar2 = uVar2 - 1;
                lVar3 = lVar3 + 0x10;
              } while (uVar2 != 0);
            }
            FUN_03ac43c4();
LAB_06480430:
            FUN_05e42d5c(uVar1);
            if (lVar4 != 0) {
              FUN_070a1244(lVar4,uVar1,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


