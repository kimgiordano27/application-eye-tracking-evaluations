/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemVolume
ENTRY_POINT: 0696ec6c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVolume(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar10;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  puVar5 = *(undefined4 **)(param_1 + 0xb8);
  if (unaff_x22 == (long *)0x0) goto LAB_0696eee8;
  (**(code **)(*unaff_x22 + 0x2a8))(*puVar5,puVar5[1],puVar5[2],puVar5[3]);
  uVar10 = *(undefined8 *)(unaff_x19 + 0xd8);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar2 = FUN_07c9c218(uVar10,0,0);
  if ((uVar2 & 1) != 0) {
    if ((((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0xe8), lVar6 == 0)) ||
        (lVar6 = *(long *)(lVar6 + 0x40), lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0x88), lVar6 == 0)) goto LAB_0696eee8;
    plVar3 = *(long **)(unaff_x19 + 0xd8);
    if (*(char *)(lVar6 + 0x10) == '\0') {
      if (plVar3 == (long *)0x0) goto LAB_0696eee8;
      (**(code **)(*plVar3 + 0x5e8))(plVar3,*unaff_x24,*(undefined8 *)(*plVar3 + 0x5f0));
      plVar3 = *(long **)(unaff_x19 + 0xe0);
      if (plVar3 == (long *)0x0) goto LAB_0696eee8;
      lVar6 = *plVar3;
      uVar10 = *unaff_x24;
    }
    else {
      if (plVar3 == (long *)0x0) goto LAB_0696eee8;
      (**(code **)(*plVar3 + 0x5e8))
                (plVar3,*(undefined8 *)PTR_DAT_084b71e0,*(undefined8 *)(*plVar3 + 0x5f0));
      if (((*(long *)(unaff_x19 + 0xe8) == 0) ||
          (lVar6 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8), lVar6 == 0)) ||
         ((lVar6 = *(long *)(lVar6 + 0x40), lVar6 == 0 ||
          (lVar6 = *(long *)(lVar6 + 0x88), lVar6 == 0)))) goto LAB_0696eee8;
      plVar3 = *(long **)(unaff_x19 + 0xe0);
      in_stack_00000008._4_4_ = *(float *)(lVar6 + 0x14) * 100.0;
      uVar10 = FUN_067638d0((long)&stack0x00000008 + 4,*(undefined8 *)PTR_DAT_084b71c8,0);
      uVar10 = FUN_065c0764(uVar10,*(undefined8 *)PTR_DAT_084b71f8,0);
      if (plVar3 == (long *)0x0) goto LAB_0696eee8;
      lVar6 = *plVar3;
    }
    (**(code **)(lVar6 + 0x5e8))(plVar3,uVar10,*(undefined8 *)(lVar6 + 0x5f0));
  }
  if (*unaff_x20 != 0) {
    lVar6 = FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7190);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x25);
    }
    uVar2 = FUN_07c9c218(lVar6,0,0);
    if ((uVar2 & 1) == 0) {
LAB_0696eec0:
      *unaff_x21 = *unaff_x20;
      thunk_FUN_03afed3c();
      return;
    }
    if ((*(long *)(unaff_x19 + 0x60) != 0) && (lVar6 != 0)) {
      plVar3 = *(long **)(*(long *)(unaff_x19 + 0x60) + 0xe0);
      uVar2 = FUN_07c986c8(lVar6,0);
      puVar1 = PTR_DAT_084b71b0;
      lVar4 = *(long *)PTR_DAT_084b71b0;
      if ((uVar2 & 1) == 0) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar4 = *(long *)puVar1;
        }
        puVar5 = *(undefined4 **)(lVar4 + 0xb8);
        puVar7 = puVar5 + 1;
        puVar8 = puVar5 + 2;
        puVar9 = puVar5 + 3;
      }
      else {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar4 = *(long *)puVar1;
        }
        lVar4 = *(long *)(lVar4 + 0xb8);
        puVar5 = (undefined4 *)(lVar4 + 0x10);
        puVar7 = (undefined4 *)(lVar4 + 0x14);
        puVar8 = (undefined4 *)(lVar4 + 0x18);
        puVar9 = (undefined4 *)(lVar4 + 0x1c);
      }
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x2a8))
                  (*puVar5,*puVar7,*puVar8,*puVar9,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
        plVar3 = *(long **)(unaff_x19 + 0xd0);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x428))
                    (*(undefined4 *)(lVar6 + 0x98),plVar3,*(undefined8 *)(*plVar3 + 0x430));
          goto LAB_0696eec0;
        }
      }
    }
  }
LAB_0696eee8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


