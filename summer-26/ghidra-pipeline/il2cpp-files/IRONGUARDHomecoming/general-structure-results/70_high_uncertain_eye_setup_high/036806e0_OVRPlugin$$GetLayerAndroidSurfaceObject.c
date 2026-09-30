/*
FUNCTION_NAME: OVRPlugin$$GetLayerAndroidSurfaceObject
ENTRY_POINT: 036806e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetLayerAndroidSurfaceObject
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long lVar5;
  long *plVar6;
  long *unaff_x21;
  long unaff_x22;
  undefined4 uVar7;
  
  lVar1 = (*(code *)*param_4)();
  if ((lVar1 != 0) && (uVar7 = FUN_0407d7c4(lVar1,0), unaff_x22 != 0)) {
    *(undefined4 *)(unaff_x22 + 0x50) = uVar7;
    *(undefined4 *)(unaff_x22 + 0x54) = param_2;
    *(undefined4 *)(unaff_x22 + 0x58) = param_3;
    plVar6 = *(long **)(unaff_x19 + 0x48);
    if (plVar6 != (long *)0x0) {
      lVar1 = *plVar6;
      lVar5 = *(long *)(unaff_x19 + 0x58);
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x21) {
            puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0368075c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x21,0);
LAB_0368075c:
      lVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      if ((lVar1 != 0) && (uVar7 = FUN_0407d840(lVar1,0), lVar5 != 0)) {
        *(undefined4 *)(lVar5 + 0x5c) = uVar7;
        *(undefined4 *)(lVar5 + 0x60) = param_2;
        *(undefined4 *)(lVar5 + 100) = param_3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


