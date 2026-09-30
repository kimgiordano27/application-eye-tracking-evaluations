/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_UpdateCameraDevices
ENTRY_POINT: 0316e0a0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_UpdateCameraDevices
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_DAT_03d7f9e0;
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03d7f9e0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_0316e12c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_0316e12c:
    (*(code *)*puVar2)();
    lVar3 = FUN_0391c27c();
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      plVar7 = *(long **)(unaff_x19 + 0x48);
      uVar8 = FUN_03928d34(*(long *)(unaff_x19 + 0x20),0);
      uVar9 = FUN_03925cf4(0);
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_0316e1d0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar1,2);
LAB_0316e1d0:
        (*(code *)*puVar2)(uVar8,param_2,param_3,uVar9,plVar7,puVar2[1]);
        if (lVar3 != 0) {
          FUN_03928dd4(lVar3,0);
          puVar1 = PTR_DAT_03d809e8;
          if (*(char *)(unaff_x19 + 0x38) == '\0') {
            lVar3 = FUN_0391c27c();
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0316e384;
            FUN_039274a0(*(long *)(unaff_x19 + 0x20),0);
          }
          else {
            plVar7 = *(long **)(unaff_x19 + 0x50);
            if (plVar7 == (long *)0x0) goto LAB_0316e384;
            lVar3 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03d809e8) {
                  puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                  goto LAB_0316e294;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar2 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)PTR_DAT_03d809e8,1);
LAB_0316e294:
            (*(code *)*puVar2)(plVar7,unaff_x19 + 0x3c,puVar2[1]);
            lVar3 = FUN_0391c27c();
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0316e384;
            plVar7 = *(long **)(unaff_x19 + 0x50);
            uVar8 = FUN_039274a0(*(long *)(unaff_x19 + 0x20),0);
            uVar10 = FUN_03925cf4(0);
            if (plVar7 == (long *)0x0) goto LAB_0316e384;
            lVar4 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                  puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                  goto LAB_0316e33c;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar2 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar1,2);
LAB_0316e33c:
            (*(code *)*puVar2)(uVar8,param_2,param_3,uVar9,uVar10,plVar7,puVar2[1]);
          }
          if (lVar3 != 0) {
            FUN_03928f54(lVar3,0);
            return;
          }
        }
      }
    }
  }
LAB_0316e384:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


