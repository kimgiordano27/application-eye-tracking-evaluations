/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_SetSuggestedGpuPerformanceLevel
ENTRY_POINT: 01db9d08
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_71_0__ovrp_SetSuggestedGpuPerformanceLevel(void)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  int unaff_w28;
  long *unaff_x29;
  
  do {
    lVar5 = *unaff_x24;
    plVar3 = unaff_x24;
    if (lVar5 != *unaff_x29) {
      plVar3 = (long *)0x0;
    }
    if (plVar3 == (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0235a790 + 0x130);
      if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0235a790)) {
        lVar5 = *unaff_x26;
        plVar3 = (long *)thunk_FUN_0103ffe0(unaff_x24,lVar5);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(unaff_x24,lVar5);
        }
        if (unaff_w21 == 0) {
          lVar5 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x26) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_01db9e30;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_0103c348(plVar3,*unaff_x26,1);
LAB_01db9e30:
          uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if ((uVar6 & 1) != 0) {
            uVar2 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a768);
            FUN_01dbb700(uVar2,plVar3);
            FUN_01dab44c(uVar2,0);
            goto LAB_01db9ecc;
          }
        }
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_01db9ebc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_0103c348(plVar3,*unaff_x26,0);
LAB_01db9ebc:
        (*(code *)*puVar4)(plVar3);
      }
      else {
        (**(code **)(lVar5 + 0x178))(unaff_x24);
      }
    }
    else {
      lVar5 = *unaff_x27;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar5 = *unaff_x27;
      }
      uVar2 = FUN_00fdc2fc(lVar5);
      OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingSupported(plVar3,unaff_w21,uVar2);
    }
LAB_01db9ecc:
    do {
      unaff_w22 = unaff_w22 + 1;
      if (unaff_w22 == unaff_w28) {
        if (DAT_0247da80 == '\0') {
          FUN_00fdc2e4(PTR_DAT_0234bc90);
          DAT_0247da80 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_0234bc90 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        return;
      }
      unaff_x24 = (long *)FUN_018985f8();
    } while (unaff_x24 == (long *)0x0);
    FUN_01898668();
  } while( true );
}


