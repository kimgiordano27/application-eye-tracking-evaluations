/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemBatteryLevel
ENTRY_POINT: 0696ed34
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryLevel(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar10;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  if (param_1 != 0) {
    plVar10 = *(long **)(unaff_x19 + 0xe0);
    in_stack_00000008._4_4_ = *(float *)(param_1 + 0x14) * 100.0;
    uVar2 = FUN_067638d0((long)&stack0x00000008 + 4,*(undefined8 *)PTR_DAT_084b71c8,0);
    uVar2 = FUN_065c0764(uVar2,*(undefined8 *)PTR_DAT_084b71f8,0);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x5e8))(plVar10,uVar2,*(undefined8 *)(*plVar10 + 0x5f0));
      if (*unaff_x20 != 0) {
        lVar3 = FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7190);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x25);
        }
        uVar4 = FUN_07c9c218(lVar3,0,0);
        if ((uVar4 & 1) == 0) {
LAB_0696eec0:
          *unaff_x21 = *unaff_x20;
          thunk_FUN_03afed3c();
          return;
        }
        if ((*(long *)(unaff_x19 + 0x60) != 0) && (lVar3 != 0)) {
          plVar10 = *(long **)(*(long *)(unaff_x19 + 0x60) + 0xe0);
          uVar4 = FUN_07c986c8(lVar3,0);
          puVar1 = PTR_DAT_084b71b0;
          lVar5 = *(long *)PTR_DAT_084b71b0;
          if ((uVar4 & 1) == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar5 = *(long *)puVar1;
            }
            puVar6 = *(undefined4 **)(lVar5 + 0xb8);
            puVar7 = puVar6 + 1;
            puVar8 = puVar6 + 2;
            puVar9 = puVar6 + 3;
          }
          else {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar5 = *(long *)puVar1;
            }
            lVar5 = *(long *)(lVar5 + 0xb8);
            puVar6 = (undefined4 *)(lVar5 + 0x10);
            puVar7 = (undefined4 *)(lVar5 + 0x14);
            puVar8 = (undefined4 *)(lVar5 + 0x18);
            puVar9 = (undefined4 *)(lVar5 + 0x1c);
          }
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x2a8))
                      (*puVar6,*puVar7,*puVar8,*puVar9,plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
            plVar10 = *(long **)(unaff_x19 + 0xd0);
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x428))
                        (*(undefined4 *)(lVar3 + 0x98),plVar10,*(undefined8 *)(*plVar10 + 0x430));
              goto LAB_0696eec0;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


