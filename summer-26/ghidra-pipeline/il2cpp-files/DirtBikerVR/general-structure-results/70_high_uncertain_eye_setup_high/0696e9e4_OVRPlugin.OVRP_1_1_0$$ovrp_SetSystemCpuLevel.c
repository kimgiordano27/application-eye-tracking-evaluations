/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetSystemCpuLevel
ENTRY_POINT: 0696e9e4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetSystemCpuLevel(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  thunk_FUN_03ae8be4();
  puVar4 = *(undefined4 **)(*unaff_x23 + 0xb8);
  if (unaff_x22 == (long *)0x0) goto LAB_0696eee8;
  (**(code **)(*unaff_x22 + 0x2a8))(*puVar4,puVar4[1],puVar4[2],puVar4[3]);
  puVar1 = PTR_DAT_084b71b0;
  if (*(long *)(unaff_x19 + 0x118) != 0) {
    if ((*(long *)(unaff_x19 + 0x50) == 0) ||
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x18), lVar5 == 0)) goto LAB_0696eee8;
    plVar9 = *(long **)(*(long *)(unaff_x19 + 0x50) + 0xe0);
    lVar2 = *(long *)PTR_DAT_084b71b0;
    if (*(char *)(lVar5 + 0x18) == '\0') {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar2 = *(long *)puVar1;
      }
      puVar4 = *(undefined4 **)(lVar2 + 0xb8);
      puVar6 = puVar4 + 1;
      puVar7 = puVar4 + 2;
      puVar8 = puVar4 + 3;
    }
    else {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar2 = *(long *)puVar1;
      }
      lVar5 = *(long *)(lVar2 + 0xb8);
      puVar4 = (undefined4 *)(lVar5 + 0x10);
      puVar6 = (undefined4 *)(lVar5 + 0x14);
      puVar7 = (undefined4 *)(lVar5 + 0x18);
      puVar8 = (undefined4 *)(lVar5 + 0x1c);
    }
    if (plVar9 == (long *)0x0) goto LAB_0696eee8;
    (**(code **)(*plVar9 + 0x2a8))
              (*puVar4,*puVar6,*puVar7,*puVar8,plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
  }
  puVar1 = PTR_DAT_084b71b0;
  if (*(long *)(unaff_x19 + 0x120) != 0) {
    if ((*(long *)(unaff_x19 + 0x58) == 0) ||
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x18), lVar5 == 0)) goto LAB_0696eee8;
    plVar9 = *(long **)(*(long *)(unaff_x19 + 0x58) + 0xe0);
    lVar2 = *(long *)PTR_DAT_084b71b0;
    if (*(char *)(lVar5 + 0x18) == '\0') {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar2 = *(long *)puVar1;
      }
      puVar4 = *(undefined4 **)(lVar2 + 0xb8);
      puVar6 = puVar4 + 1;
      puVar7 = puVar4 + 2;
      puVar8 = puVar4 + 3;
    }
    else {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar2 = *(long *)puVar1;
      }
      lVar5 = *(long *)(lVar2 + 0xb8);
      puVar4 = (undefined4 *)(lVar5 + 0x10);
      puVar6 = (undefined4 *)(lVar5 + 0x14);
      puVar7 = (undefined4 *)(lVar5 + 0x18);
      puVar8 = (undefined4 *)(lVar5 + 0x1c);
    }
    if (plVar9 == (long *)0x0) goto LAB_0696eee8;
    (**(code **)(*plVar9 + 0x2a8))
              (*puVar4,*puVar6,*puVar7,*puVar8,plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
  }
  puVar1 = PTR_DAT_084b71b0;
  if (*(long *)(unaff_x19 + 0x128) != 0) {
    if ((*(long *)(unaff_x19 + 0x78) == 0) ||
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x128) + 0x18), lVar5 == 0)) goto LAB_0696eee8;
    plVar9 = *(long **)(*(long *)(unaff_x19 + 0x78) + 0xe0);
    lVar2 = *(long *)PTR_DAT_084b71b0;
    if (*(char *)(lVar5 + 0x18) == '\0') {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar2 = *(long *)puVar1;
      }
      puVar4 = *(undefined4 **)(lVar2 + 0xb8);
      puVar6 = puVar4 + 1;
      puVar7 = puVar4 + 2;
      puVar8 = puVar4 + 3;
    }
    else {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar2 = *(long *)puVar1;
      }
      lVar5 = *(long *)(lVar2 + 0xb8);
      puVar4 = (undefined4 *)(lVar5 + 0x10);
      puVar6 = (undefined4 *)(lVar5 + 0x14);
      puVar7 = (undefined4 *)(lVar5 + 0x18);
      puVar8 = (undefined4 *)(lVar5 + 0x1c);
    }
    if (plVar9 == (long *)0x0) goto LAB_0696eee8;
    (**(code **)(*plVar9 + 0x2a8))
              (*puVar4,*puVar6,*puVar7,*puVar8,plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
  }
  puVar1 = PTR_DAT_084b71b0;
  if (*(long *)(unaff_x19 + 0x130) != 0) {
    if ((*(long *)(unaff_x19 + 0x70) == 0) ||
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x130) + 0x18), lVar5 == 0)) goto LAB_0696eee8;
    plVar9 = *(long **)(*(long *)(unaff_x19 + 0x70) + 0xe0);
    lVar2 = *(long *)PTR_DAT_084b71b0;
    if (*(char *)(lVar5 + 0x18) == '\0') {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar2 = *(long *)puVar1;
      }
      puVar4 = *(undefined4 **)(lVar2 + 0xb8);
      puVar6 = puVar4 + 1;
      puVar7 = puVar4 + 2;
      puVar8 = puVar4 + 3;
    }
    else {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar2 = *(long *)puVar1;
      }
      lVar5 = *(long *)(lVar2 + 0xb8);
      puVar4 = (undefined4 *)(lVar5 + 0x10);
      puVar6 = (undefined4 *)(lVar5 + 0x14);
      puVar7 = (undefined4 *)(lVar5 + 0x18);
      puVar8 = (undefined4 *)(lVar5 + 0x1c);
    }
    if (plVar9 == (long *)0x0) goto LAB_0696eee8;
    (**(code **)(*plVar9 + 0x2a8))
              (*puVar4,*puVar6,*puVar7,*puVar8,plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
  }
  uVar10 = *(undefined8 *)(unaff_x19 + 0xd8);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar3 = FUN_07c9c218(uVar10,0,0);
  if ((uVar3 & 1) != 0) {
    if ((((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0xe8), lVar5 == 0)) ||
        (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) ||
       (lVar5 = *(long *)(lVar5 + 0x88), lVar5 == 0)) goto LAB_0696eee8;
    plVar9 = *(long **)(unaff_x19 + 0xd8);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      if (plVar9 == (long *)0x0) goto LAB_0696eee8;
      (**(code **)(*plVar9 + 0x5e8))(plVar9,*unaff_x24,*(undefined8 *)(*plVar9 + 0x5f0));
      plVar9 = *(long **)(unaff_x19 + 0xe0);
      if (plVar9 == (long *)0x0) goto LAB_0696eee8;
      lVar5 = *plVar9;
      uVar10 = *unaff_x24;
    }
    else {
      if (plVar9 == (long *)0x0) goto LAB_0696eee8;
      (**(code **)(*plVar9 + 0x5e8))
                (plVar9,*(undefined8 *)PTR_DAT_084b71e0,*(undefined8 *)(*plVar9 + 0x5f0));
      if (((*(long *)(unaff_x19 + 0xe8) == 0) ||
          (lVar5 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8), lVar5 == 0)) ||
         ((lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0 ||
          (lVar5 = *(long *)(lVar5 + 0x88), lVar5 == 0)))) goto LAB_0696eee8;
      plVar9 = *(long **)(unaff_x19 + 0xe0);
      in_stack_00000008._4_4_ = *(float *)(lVar5 + 0x14) * 100.0;
      uVar10 = FUN_067638d0((long)&stack0x00000008 + 4,*(undefined8 *)PTR_DAT_084b71c8,0);
      uVar10 = FUN_065c0764(uVar10,*(undefined8 *)PTR_DAT_084b71f8,0);
      if (plVar9 == (long *)0x0) goto LAB_0696eee8;
      lVar5 = *plVar9;
    }
    (**(code **)(lVar5 + 0x5e8))(plVar9,uVar10,*(undefined8 *)(lVar5 + 0x5f0));
  }
  if (*unaff_x20 != 0) {
    lVar5 = FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7190);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x25);
    }
    uVar3 = FUN_07c9c218(lVar5,0,0);
    if ((uVar3 & 1) == 0) {
LAB_0696eec0:
      *unaff_x21 = *unaff_x20;
      thunk_FUN_03afed3c();
      return;
    }
    if ((*(long *)(unaff_x19 + 0x60) != 0) && (lVar5 != 0)) {
      plVar9 = *(long **)(*(long *)(unaff_x19 + 0x60) + 0xe0);
      uVar3 = FUN_07c986c8(lVar5,0);
      puVar1 = PTR_DAT_084b71b0;
      lVar2 = *(long *)PTR_DAT_084b71b0;
      if ((uVar3 & 1) == 0) {
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar2 = *(long *)puVar1;
        }
        puVar4 = *(undefined4 **)(lVar2 + 0xb8);
        puVar6 = puVar4 + 1;
        puVar7 = puVar4 + 2;
        puVar8 = puVar4 + 3;
      }
      else {
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar2 = *(long *)puVar1;
        }
        lVar2 = *(long *)(lVar2 + 0xb8);
        puVar4 = (undefined4 *)(lVar2 + 0x10);
        puVar6 = (undefined4 *)(lVar2 + 0x14);
        puVar7 = (undefined4 *)(lVar2 + 0x18);
        puVar8 = (undefined4 *)(lVar2 + 0x1c);
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x2a8))
                  (*puVar4,*puVar6,*puVar7,*puVar8,plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
        plVar9 = *(long **)(unaff_x19 + 0xd0);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x428))
                    (*(undefined4 *)(lVar5 + 0x98),plVar9,*(undefined8 *)(*plVar9 + 0x430));
          goto LAB_0696eec0;
        }
      }
    }
  }
LAB_0696eee8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


