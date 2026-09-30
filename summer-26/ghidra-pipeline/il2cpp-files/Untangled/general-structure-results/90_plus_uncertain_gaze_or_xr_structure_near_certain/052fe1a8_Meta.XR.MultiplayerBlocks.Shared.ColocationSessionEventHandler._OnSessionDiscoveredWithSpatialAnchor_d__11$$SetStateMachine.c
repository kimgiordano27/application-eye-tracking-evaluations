/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionDiscoveredWithSpatialAnchor>d__11$$SetStateMachine
ENTRY_POINT: 052fe1a8
PROGRAM: Untangled-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11__SetStateMachine
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  long in_x10;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  piVar6 = (int *)(in_x10 + 8);
  do {
                    /* try { // try from 052fe1b0 to 053fe1bb has its CatchHandler @ 052fe2f8 */
    if (*(long *)(piVar6 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_052fe1e0;
    }
    in_x9 = in_x9 + -1;
    piVar6 = piVar6 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_02eea86c();
LAB_052fe1e0:
  (*(code *)*puVar1)();
  if (unaff_x20 != 0) {
    uVar2 = FUN_04c74820();
    if ((uVar2 & 1) != 0) {
      lVar3 = *unaff_x21;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar3 = *unaff_x21;
      }
      lVar5 = *unaff_x19;
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_052fe274;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_02eea86c();
LAB_052fe274:
      uVar4 = (*(code *)*puVar1)();
      if (lVar3 == 0) goto LAB_052fe2dc;
      FUN_04c75b28(lVar3,uVar4,*(undefined8 *)PTR_DAT_06d3e220);
      lVar3 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
      if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x052fe2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
        return;
      }
    }
    return;
  }
LAB_052fe2dc:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


