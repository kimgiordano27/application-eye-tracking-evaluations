/*
FUNCTION_NAME: HurricaneVR.Framework.Core.HandPoser.HVRPhysicsPoser$$TestClose
ENTRY_POINT: 051c224c
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void HurricaneVR_Framework_Core_HandPoser_HVRPhysicsPoser__TestClose(ulong param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) != 0) {
    FUN_051c2414();
    return;
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    FUN_02eea768(lVar5);
  }
  plVar3 = (long *)thunk_FUN_02ef170c();
  if (plVar3 != (long *)0x0) {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768(lVar5);
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_051c2314;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(plVar3,lVar5,0);
LAB_051c2314:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  FUN_051c4e78();
  HurricaneVR_Framework_Core_HandPoser_HVRPosableGrabPoint__GetPoseRotationOffset();
  iVar1 = *(int *)(unaff_x20 + 0x20);
  if (0 < iVar1) {
    if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(*(long *)(unaff_x20 + 0x18) + 0x18) / iVar1;
    }
    if (3 < iVar2) {
      FUN_051c4c54();
      return;
    }
  }
  return;
}


