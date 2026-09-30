/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockInfo
ENTRY_POINT: 052b2850
PROGRAM: Untangled-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddBlockInfo(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar6;
  ulong uVar7;
  
  *(undefined8 *)(param_1 + 0x48) = unaff_x21;
  thunk_FUN_02f411dc();
  lVar2 = FUN_056109c0(*unaff_x22,0);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_02ef170c(lVar2,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0)) {
LAB_052b29b0:
    uVar6 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar6,0);
  }
  puVar1 = PTR_DAT_06d3d158;
  if (6 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20[10] = lVar2;
    thunk_FUN_02f411dc(unaff_x20 + 10,lVar2);
    lVar2 = FUN_056109c0(*(undefined8 *)puVar1,0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_02ef170c(lVar2,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0))
    goto LAB_052b29b0;
    if (7 < *(uint *)(unaff_x20 + 3)) {
      unaff_x20[0xb] = lVar2;
      thunk_FUN_02f411dc(unaff_x20 + 0xb,lVar2);
      puVar1 = PTR_DAT_06d01e20;
      if (0 < (int)unaff_x20[3]) {
        uVar7 = 0;
        uVar4 = unaff_x20[3] & 0xffffffff;
        do {
          if (uVar4 <= uVar7) goto LAB_052b29a8;
          lVar2 = FUN_066c6b68();
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
            uVar4 = 0;
            uVar5 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
            do {
              if (uVar5 <= uVar4) goto LAB_052b29a8;
              uVar6 = *(undefined8 *)(lVar2 + 0x20 + uVar4 * 8);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              FUN_066cdd04(uVar6,0);
              uVar5 = (ulong)*(uint *)(lVar2 + 0x18);
              uVar4 = uVar4 + 1;
            } while ((long)uVar4 < (long)(int)*(uint *)(lVar2 + 0x18));
          }
          uVar4 = (ulong)*(uint *)(unaff_x20 + 3);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(unaff_x20 + 3));
      }
      return;
    }
  }
LAB_052b29a8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


