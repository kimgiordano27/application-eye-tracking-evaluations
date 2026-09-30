/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$.cctor
ENTRY_POINT: 076eaad0
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRPlugin_OVRP_1_84_0___cctor(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  
  if ((param_1 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fab668);
    FUN_0403162c(PTR_DAT_08f8e6c8);
    *(undefined1 *)(unaff_x20 + 0x306) = 1;
  }
  puVar1 = PTR_DAT_08f8e6c8;
  if ((*(char *)(unaff_x19 + 0x60) != '\0') && (*(char *)(unaff_x19 + 0x50) != '\0')) {
    plVar7 = *(long **)(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x19 + 0x60) = 0;
    if (plVar7 == (long *)0x0)
    goto OVRPlugin_OVRP_1_86_0__ovrp_AreHandPosesGeneratedByControllerData;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_076eab68;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)puVar1,6);
LAB_076eab68:
    iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (iVar2 != 1) {
      plVar7 = *(long **)(unaff_x19 + 0x28);
      if (plVar7 == (long *)0x0)
      goto OVRPlugin_OVRP_1_86_0__ovrp_AreHandPosesGeneratedByControllerData;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
            goto LAB_076eabd4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)puVar1,6);
LAB_076eabd4:
      iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      if (iVar2 != 0) goto LAB_076eac5c;
    }
    if (*(int *)(unaff_x19 + 0x40) == 0) {
      plVar7 = *(long **)(unaff_x19 + 0x38);
      if (plVar7 == (long *)0x0)
      goto OVRPlugin_OVRP_1_86_0__ovrp_AreHandPosesGeneratedByControllerData;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08fab668) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_076eac48;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)PTR_DAT_08fab668,0);
LAB_076eac48:
      (*(code *)*puVar3)(plVar7,puVar3[1]);
      FUN_076eada4();
    }
  }
LAB_076eac5c:
  plVar7 = *(long **)(unaff_x19 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_076eacb4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)puVar1,6);
LAB_076eacb4:
    iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (iVar2 != 2) {
      return;
    }
    if (*(int *)(unaff_x19 + 0x40) == 0) {
      if (*(char *)(unaff_x19 + 0x50) != '\0') {
        return;
      }
      if (*(char *)(unaff_x19 + 0x60) != '\0') {
        return;
      }
      *(undefined1 *)(unaff_x19 + 0x60) = 1;
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_03a90e9c(0,*(undefined8 *)PTR_DAT_08fab668);
        FUN_076eada4();
        return;
      }
    }
    else {
      if (*(int *)(unaff_x19 + 0x40) != 1) {
        return;
      }
      plVar7 = *(long **)(unaff_x19 + 0x38);
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08fab668) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto FUN_076ead50;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)PTR_DAT_08fab668,0);
FUN_076ead50:
        (*(code *)*puVar3)(plVar7,puVar3[1]);
        FUN_076eae40();
        return;
      }
    }
  }
OVRPlugin_OVRP_1_86_0__ovrp_AreHandPosesGeneratedByControllerData:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


