/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockInfo
ENTRY_POINT: 024621ec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddBlockInfo(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long *plVar5;
  long in_x9;
  int in_w10;
  uint in_w11;
  long unaff_x19;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  uVar2 = (int)in_x9 - 5;
  if (in_w11 <= uVar2) {
LAB_02462324:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x18);
  plVar8 = *(long **)(param_1 + in_x9 * 8 + 0x20);
  plVar9 = *(long **)(param_1 + (long)in_w10 * 8 + 0x20);
  plVar7 = *(long **)(param_1 + (long)(int)uVar2 * 8 + 0x20);
  uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ce28a8);
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03ce1840 + 0x130);
    plVar5 = plVar8;
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03ce1840))
    goto LAB_0246232c;
  }
  if (plVar9 != (long *)0x0) {
    plVar5 = plVar9;
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)PTR_DAT_03ce3d58 + 0x40)) {
LAB_0246232c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar5);
    }
    puVar4 = (undefined4 *)thunk_FUN_01a89fbc();
    if (plVar7 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_03ce2490 + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03ce2490))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar7);
      }
    }
    FUN_024280b4(uVar3,uVar6,plVar8,*puVar4,plVar7,0);
    if (*(long *)(unaff_x19 + 0x138) != 0) {
      if (*(int *)(unaff_x19 + 0x14c) - 3U < *(uint *)(*(long *)(unaff_x19 + 0x138) + 0x18)) {
        FUN_02489790();
        return;
      }
      goto LAB_02462324;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


