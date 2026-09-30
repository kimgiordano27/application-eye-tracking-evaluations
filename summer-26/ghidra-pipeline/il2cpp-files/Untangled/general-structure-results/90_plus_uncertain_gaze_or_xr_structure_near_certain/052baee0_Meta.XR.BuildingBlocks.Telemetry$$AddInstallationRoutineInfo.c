/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddInstallationRoutineInfo
ENTRY_POINT: 052baee0
PROGRAM: Untangled-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddInstallationRoutineInfo(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_071c102b & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d01e20);
    FUN_02f07e70(PTR_DAT_06d3d288);
    DAT_071c102b = 1;
  }
  lVar3 = param_1[0x24];
  (**(code **)(*param_1 + 0x528))(param_1,*(undefined8 *)(*param_1 + 0x530));
  if (lVar3 != 0) {
    FUN_0475b7b0(lVar3,*(undefined8 *)PTR_DAT_06d3d288);
    puVar1 = PTR_DAT_06d01e20;
    if ((param_1[7] != 0) && (param_1[8] != 0)) {
      lVar3 = *(long *)(param_1[7] + 0x98);
      lVar5 = *(long *)(param_1[8] + 0x98);
      if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar2 = FUN_066cd30c(lVar3,0);
      lVar4 = 0;
      if ((uVar2 & 1) != 0) {
        if (lVar3 == 0) goto LAB_052bb0c0;
        lVar4 = *(long *)(lVar3 + 0xa8);
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar2 = FUN_066cd30c(lVar5,0);
      lVar3 = 0;
      if ((uVar2 & 1) != 0) {
        if (lVar5 == 0) goto LAB_052bb0c0;
        lVar3 = *(long *)(lVar5 + 0xa8);
      }
      if ((param_1[7] != 0) && (lVar5 = *(long *)(param_1[7] + 0x78), lVar5 != 0)) {
        FUN_06741454(*(undefined4 *)((long)param_1 + 0x204),(int)param_1[0x41],
                     *(undefined4 *)((long)param_1 + 0x20c),lVar5,0);
        if ((param_1[8] != 0) && (lVar5 = *(long *)(param_1[8] + 0x78), lVar5 != 0)) {
          FUN_06741454((int)param_1[0x42],*(undefined4 *)((long)param_1 + 0x214),(int)param_1[0x43],
                       lVar5,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar2 = FUN_066cd30c(lVar4,0);
          if ((uVar2 & 1) != 0) {
            if (lVar4 == 0) goto LAB_052bb0c0;
            FUN_06741454(*(undefined4 *)((long)param_1 + 0x21c),(int)param_1[0x44],
                         *(undefined4 *)((long)param_1 + 0x224),lVar4,0);
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar2 = FUN_066cd30c(lVar3,0);
          if ((uVar2 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar2 = FUN_066c971c(lVar3,lVar4,0);
            if ((uVar2 & 1) != 0) {
              if (lVar3 != 0) {
                FUN_06741454((int)param_1[0x45],*(undefined4 *)((long)param_1 + 0x22c),
                             (int)param_1[0x46],lVar3,0);
                return;
              }
              goto LAB_052bb0c0;
            }
          }
          return;
        }
      }
    }
  }
LAB_052bb0c0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 052bb0c0 to 053bb12f has its CatchHandler @ 052bb0c0
                       catch() { ... } // from try @ 052bb0c0 with catch @ 052bb0c0
                       catch() { ... } // from try @ 052bb368 with catch @ 052bb0c0
                       catch() { ... } // from try @ 052bb3b0 with catch @ 052bb0c0
                       catch() { ... } // from try @ 052bb41c with catch @ 052bb0c0 */
  FUN_02f080c0();
}


