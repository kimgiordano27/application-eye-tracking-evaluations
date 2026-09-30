/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<RequestScenePermissionIfNeeded>d__13$$MoveNext
ENTRY_POINT: 0581f43c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13__MoveNext
               (undefined8 param_1,void *param_2,long param_3)

{
  void *__src;
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long unaff_x29;
  undefined1 auStack_20 [32];
  
  lVar1 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar1 + 0x28);
  *(void **)(unaff_x29 + -0x18) = param_2;
  puVar8 = (undefined8 *)(*(long *)(param_3 + 0x20) + 0xc0);
  lVar3 = *(long *)*puVar8;
  uVar4 = *(uint *)(lVar3 + 0xfc);
  uVar7 = (ulong)uVar4;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02feb2c4();
    uVar4 = *(uint *)(lVar3 + 0xfc);
    puVar8 = (undefined8 *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar3 = *(long *)*puVar8;
  }
  puVar6 = auStack_20 + -((ulong)(uVar4 + 0x10) + 0xf & 0x1fffffff0);
  __src = param_2;
  if (-1 < *(int *)(lVar3 + 0x28)) {
    __src = (void *)(unaff_x29 + -0x18);
  }
  memcpy(puVar6 + -(uVar7 + 0xf & 0x1fffffff0),__src,uVar7);
  uVar7 = FUN_02fe94a8(*(undefined8 *)*puVar8,puVar6 + -(uVar7 + 0xf & 0x1fffffff0));
  if ((uVar7 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    plVar5 = *(long **)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar3 = *plVar5;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4();
      param_2 = *(void **)(unaff_x29 + -0x18);
      plVar5 = *(long **)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    if (-1 < *(int *)(*plVar5 + 0x28)) {
      param_2 = (void *)(unaff_x29 + -0x18);
    }
    FUN_02fe9dc8(lVar3,plVar5[3],puVar6,param_2,0,unaff_x29 + -0xc);
    uVar2 = *(undefined4 *)(unaff_x29 + -0xc);
  }
  if (*(long *)(lVar1 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


