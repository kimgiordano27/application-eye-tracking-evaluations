/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 090a2380
PROGRAM: Hyper-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_foveatedRenderingLevel
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x25;
  undefined8 uStack0000000000000060;
  
  uStack0000000000000060 = param_3;
  FUN_090a25cc();
  lVar1 = FUN_090a1150();
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_090a1150();
    if ((unaff_x19 == 0) || (uVar3 = FUN_0a178414(), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar1 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_090a2408;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68(plVar2,*unaff_x25,4);
LAB_090a2408:
    (*(code *)*puVar4)(plVar2,uVar3,puVar4[1]);
    FUN_090a18d0();
  }
  return;
}


