/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNodeOrientationTracked
ENTRY_POINT: 0696e788
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetNodeOrientationTracked
               (undefined4 param_1,float param_2,undefined4 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  code *in_x9;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x24;
  long *unaff_x25;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 in_stack_00000008;
  
  if (0.0 <= param_2) {
    param_3 = param_1;
  }
  (*in_x9)(param_3);
  if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
      (lVar6 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar6 != 0)) &&
     (plVar2 = *(long **)(unaff_x19 + 0xc0), plVar2 != (long *)0x0)) {
    fVar11 = *(float *)(lVar6 + 0x24);
    fVar12 = 1.0;
    if (-1.0 <= fVar11) {
      fVar12 = -fVar11;
    }
    fVar13 = 0.0;
    if (fVar11 <= 0.0) {
      fVar13 = fVar12;
    }
    (**(code **)(*plVar2 + 0x428))(fVar13,plVar2,*(undefined8 *)(*plVar2 + 0x430));
    if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
        (lVar6 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar6 != 0)) &&
       (plVar2 = *(long **)(unaff_x19 + 200), plVar2 != (long *)0x0)) {
      fVar11 = *(float *)(lVar6 + 0x24);
      fVar12 = 1.0;
      if (fVar11 <= 1.0) {
        fVar12 = fVar11;
      }
      fVar13 = 0.0;
      if (0.0 <= fVar11) {
        fVar13 = fVar12;
      }
      (**(code **)(*plVar2 + 0x428))(fVar13,plVar2,*(undefined8 *)(*plVar2 + 0x430));
      lVar6 = *(long *)(unaff_x19 + 0xf8);
      if (((lVar6 != 0) && (*(char *)(lVar6 + 0x58) != '\0')) && (*(char *)(lVar6 + 0x21) == '\0'))
      {
        plVar2 = *(long **)(unaff_x19 + 0x20);
        if (plVar2 == (long *)0x0) goto LAB_0696eee8;
        uVar3 = (**(code **)(*plVar2 + 0x5d8))(plVar2,*(undefined8 *)(*plVar2 + 0x5e0));
        uVar3 = FUN_065c0764(uVar3,*(undefined8 *)PTR_DAT_084b71d0,0);
        (**(code **)(*plVar2 + 0x5e8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x5f0));
      }
      lVar6 = *(long *)(unaff_x19 + 0x100);
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x28) == 0)) && (*(char *)(lVar6 + 0x34) != '\0')) {
        plVar2 = *(long **)(unaff_x19 + 0x20);
        if (plVar2 == (long *)0x0) goto LAB_0696eee8;
        uVar3 = (**(code **)(*plVar2 + 0x5d8))(plVar2,*(undefined8 *)(*plVar2 + 0x5e0));
        uVar3 = FUN_065c0764(uVar3,*(undefined8 *)PTR_DAT_084b71f0,0);
        (**(code **)(*plVar2 + 0x5e8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x5f0));
      }
      puVar1 = PTR_DAT_084b71b0;
      if (*(long *)(unaff_x19 + 0x108) != 0) {
        if ((*(long *)(unaff_x19 + 0x40) == 0) ||
           (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x18), lVar6 == 0)) goto LAB_0696eee8;
        plVar2 = *(long **)(*(long *)(unaff_x19 + 0x40) + 0xe0);
        lVar4 = *(long *)PTR_DAT_084b71b0;
        if (*(char *)(lVar6 + 0x18) == '\0') {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar4 = *(long *)puVar1;
          }
          puVar7 = *(undefined4 **)(lVar4 + 0xb8);
          puVar8 = puVar7 + 1;
          puVar9 = puVar7 + 2;
          puVar10 = puVar7 + 3;
        }
        else {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar4 = *(long *)puVar1;
          }
          lVar6 = *(long *)(lVar4 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x10);
          puVar8 = (undefined4 *)(lVar6 + 0x14);
          puVar9 = (undefined4 *)(lVar6 + 0x18);
          puVar10 = (undefined4 *)(lVar6 + 0x1c);
        }
        if (plVar2 == (long *)0x0) goto LAB_0696eee8;
        (**(code **)(*plVar2 + 0x2a8))
                  (*puVar7,*puVar8,*puVar9,*puVar10,plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
      }
      puVar1 = PTR_DAT_084b71b0;
      if (*(long *)(unaff_x19 + 0x110) != 0) {
        if ((*(long *)(unaff_x19 + 0x48) == 0) ||
           (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x110) + 0x18), lVar6 == 0)) goto LAB_0696eee8;
        plVar2 = *(long **)(*(long *)(unaff_x19 + 0x48) + 0xe0);
        lVar4 = *(long *)PTR_DAT_084b71b0;
        if (*(char *)(lVar6 + 0x18) == '\0') {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar4 = *(long *)puVar1;
          }
          puVar7 = *(undefined4 **)(lVar4 + 0xb8);
          puVar8 = puVar7 + 1;
          puVar9 = puVar7 + 2;
          puVar10 = puVar7 + 3;
        }
        else {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar4 = *(long *)puVar1;
          }
          lVar6 = *(long *)(lVar4 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x10);
          puVar8 = (undefined4 *)(lVar6 + 0x14);
          puVar9 = (undefined4 *)(lVar6 + 0x18);
          puVar10 = (undefined4 *)(lVar6 + 0x1c);
        }
        if (plVar2 == (long *)0x0) goto LAB_0696eee8;
        (**(code **)(*plVar2 + 0x2a8))
                  (*puVar7,*puVar8,*puVar9,*puVar10,plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
      }
      puVar1 = PTR_DAT_084b71b0;
      if (*(long *)(unaff_x19 + 0x118) != 0) {
        if ((*(long *)(unaff_x19 + 0x50) == 0) ||
           (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x18), lVar6 == 0)) goto LAB_0696eee8;
        plVar2 = *(long **)(*(long *)(unaff_x19 + 0x50) + 0xe0);
        lVar4 = *(long *)PTR_DAT_084b71b0;
        if (*(char *)(lVar6 + 0x18) == '\0') {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar4 = *(long *)puVar1;
          }
          puVar7 = *(undefined4 **)(lVar4 + 0xb8);
          puVar8 = puVar7 + 1;
          puVar9 = puVar7 + 2;
          puVar10 = puVar7 + 3;
        }
        else {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar4 = *(long *)puVar1;
          }
          lVar6 = *(long *)(lVar4 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x10);
          puVar8 = (undefined4 *)(lVar6 + 0x14);
          puVar9 = (undefined4 *)(lVar6 + 0x18);
          puVar10 = (undefined4 *)(lVar6 + 0x1c);
        }
        if (plVar2 == (long *)0x0) goto LAB_0696eee8;
        (**(code **)(*plVar2 + 0x2a8))
                  (*puVar7,*puVar8,*puVar9,*puVar10,plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
      }
      puVar1 = PTR_DAT_084b71b0;
      if (*(long *)(unaff_x19 + 0x120) != 0) {
        if ((*(long *)(unaff_x19 + 0x58) == 0) ||
           (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x18), lVar6 == 0)) goto LAB_0696eee8;
        plVar2 = *(long **)(*(long *)(unaff_x19 + 0x58) + 0xe0);
        lVar4 = *(long *)PTR_DAT_084b71b0;
        if (*(char *)(lVar6 + 0x18) == '\0') {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar4 = *(long *)puVar1;
          }
          puVar7 = *(undefined4 **)(lVar4 + 0xb8);
          puVar8 = puVar7 + 1;
          puVar9 = puVar7 + 2;
          puVar10 = puVar7 + 3;
        }
        else {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar4 = *(long *)puVar1;
          }
          lVar6 = *(long *)(lVar4 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x10);
          puVar8 = (undefined4 *)(lVar6 + 0x14);
          puVar9 = (undefined4 *)(lVar6 + 0x18);
          puVar10 = (undefined4 *)(lVar6 + 0x1c);
        }
        if (plVar2 == (long *)0x0) goto LAB_0696eee8;
        (**(code **)(*plVar2 + 0x2a8))
                  (*puVar7,*puVar8,*puVar9,*puVar10,plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
      }
      puVar1 = PTR_DAT_084b71b0;
      if (*(long *)(unaff_x19 + 0x128) != 0) {
        if ((*(long *)(unaff_x19 + 0x78) == 0) ||
           (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x128) + 0x18), lVar6 == 0)) goto LAB_0696eee8;
        plVar2 = *(long **)(*(long *)(unaff_x19 + 0x78) + 0xe0);
        lVar4 = *(long *)PTR_DAT_084b71b0;
        if (*(char *)(lVar6 + 0x18) == '\0') {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar4 = *(long *)puVar1;
          }
          puVar7 = *(undefined4 **)(lVar4 + 0xb8);
          puVar8 = puVar7 + 1;
          puVar9 = puVar7 + 2;
          puVar10 = puVar7 + 3;
        }
        else {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar4 = *(long *)puVar1;
          }
          lVar6 = *(long *)(lVar4 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x10);
          puVar8 = (undefined4 *)(lVar6 + 0x14);
          puVar9 = (undefined4 *)(lVar6 + 0x18);
          puVar10 = (undefined4 *)(lVar6 + 0x1c);
        }
        if (plVar2 == (long *)0x0) goto LAB_0696eee8;
        (**(code **)(*plVar2 + 0x2a8))
                  (*puVar7,*puVar8,*puVar9,*puVar10,plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
      }
      puVar1 = PTR_DAT_084b71b0;
      if (*(long *)(unaff_x19 + 0x130) != 0) {
        if ((*(long *)(unaff_x19 + 0x70) == 0) ||
           (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x130) + 0x18), lVar6 == 0)) goto LAB_0696eee8;
        plVar2 = *(long **)(*(long *)(unaff_x19 + 0x70) + 0xe0);
        lVar4 = *(long *)PTR_DAT_084b71b0;
        if (*(char *)(lVar6 + 0x18) == '\0') {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar4 = *(long *)puVar1;
          }
          puVar7 = *(undefined4 **)(lVar4 + 0xb8);
          puVar8 = puVar7 + 1;
          puVar9 = puVar7 + 2;
          puVar10 = puVar7 + 3;
        }
        else {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar4 = *(long *)puVar1;
          }
          lVar6 = *(long *)(lVar4 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x10);
          puVar8 = (undefined4 *)(lVar6 + 0x14);
          puVar9 = (undefined4 *)(lVar6 + 0x18);
          puVar10 = (undefined4 *)(lVar6 + 0x1c);
        }
        if (plVar2 == (long *)0x0) goto LAB_0696eee8;
        (**(code **)(*plVar2 + 0x2a8))
                  (*puVar7,*puVar8,*puVar9,*puVar10,plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
      }
      uVar3 = *(undefined8 *)(unaff_x19 + 0xd8);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar5 = FUN_07c9c218(uVar3,0,0);
      if ((uVar5 & 1) != 0) {
        if ((((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0xe8), lVar6 == 0)) ||
            (lVar6 = *(long *)(lVar6 + 0x40), lVar6 == 0)) ||
           (lVar6 = *(long *)(lVar6 + 0x88), lVar6 == 0)) goto LAB_0696eee8;
        plVar2 = *(long **)(unaff_x19 + 0xd8);
        if (*(char *)(lVar6 + 0x10) == '\0') {
          if (plVar2 == (long *)0x0) goto LAB_0696eee8;
          (**(code **)(*plVar2 + 0x5e8))(plVar2,*unaff_x24,*(undefined8 *)(*plVar2 + 0x5f0));
          plVar2 = *(long **)(unaff_x19 + 0xe0);
          if (plVar2 == (long *)0x0) goto LAB_0696eee8;
          lVar6 = *plVar2;
          uVar3 = *unaff_x24;
        }
        else {
          if (plVar2 == (long *)0x0) goto LAB_0696eee8;
          (**(code **)(*plVar2 + 0x5e8))
                    (plVar2,*(undefined8 *)PTR_DAT_084b71e0,*(undefined8 *)(*plVar2 + 0x5f0));
          if (((*(long *)(unaff_x19 + 0xe8) == 0) ||
              (lVar6 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8), lVar6 == 0)) ||
             ((lVar6 = *(long *)(lVar6 + 0x40), lVar6 == 0 ||
              (lVar6 = *(long *)(lVar6 + 0x88), lVar6 == 0)))) goto LAB_0696eee8;
          plVar2 = *(long **)(unaff_x19 + 0xe0);
          in_stack_00000008._4_4_ = *(float *)(lVar6 + 0x14) * 100.0;
          uVar3 = FUN_067638d0((long)&stack0x00000008 + 4,*(undefined8 *)PTR_DAT_084b71c8,0);
          uVar3 = FUN_065c0764(uVar3,*(undefined8 *)PTR_DAT_084b71f8,0);
          if (plVar2 == (long *)0x0) goto LAB_0696eee8;
          lVar6 = *plVar2;
        }
        (**(code **)(lVar6 + 0x5e8))(plVar2,uVar3,*(undefined8 *)(lVar6 + 0x5f0));
      }
      if (*unaff_x20 != 0) {
        lVar6 = FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7190);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x25);
        }
        uVar5 = FUN_07c9c218(lVar6,0,0);
        if ((uVar5 & 1) == 0) {
LAB_0696eec0:
          *unaff_x21 = *unaff_x20;
          thunk_FUN_03afed3c();
          return;
        }
        if ((*(long *)(unaff_x19 + 0x60) != 0) && (lVar6 != 0)) {
          plVar2 = *(long **)(*(long *)(unaff_x19 + 0x60) + 0xe0);
          uVar5 = FUN_07c986c8(lVar6,0);
          puVar1 = PTR_DAT_084b71b0;
          lVar4 = *(long *)PTR_DAT_084b71b0;
          if ((uVar5 & 1) == 0) {
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar4 = *(long *)puVar1;
            }
            puVar7 = *(undefined4 **)(lVar4 + 0xb8);
            puVar8 = puVar7 + 1;
            puVar9 = puVar7 + 2;
            puVar10 = puVar7 + 3;
          }
          else {
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar4 = *(long *)puVar1;
            }
            lVar4 = *(long *)(lVar4 + 0xb8);
            puVar7 = (undefined4 *)(lVar4 + 0x10);
            puVar8 = (undefined4 *)(lVar4 + 0x14);
            puVar9 = (undefined4 *)(lVar4 + 0x18);
            puVar10 = (undefined4 *)(lVar4 + 0x1c);
          }
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x2a8))
                      (*puVar7,*puVar8,*puVar9,*puVar10,plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
            plVar2 = *(long **)(unaff_x19 + 0xd0);
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 0x428))
                        (*(undefined4 *)(lVar6 + 0x98),plVar2,*(undefined8 *)(*plVar2 + 0x430));
              goto LAB_0696eec0;
            }
          }
        }
      }
    }
  }
LAB_0696eee8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


