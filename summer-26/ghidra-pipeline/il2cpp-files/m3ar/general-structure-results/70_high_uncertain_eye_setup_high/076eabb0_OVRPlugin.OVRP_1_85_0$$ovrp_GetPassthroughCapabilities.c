/*
FUNCTION_NAME: OVRPlugin.OVRP_1_85_0$$ovrp_GetPassthroughCapabilities
ENTRY_POINT: 076eabb0
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_85_0__ovrp_GetPassthroughCapabilities
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 6) * 0x10 + 0x138);
      goto LAB_076eabd4;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_0406ae20();
LAB_076eabd4:
  iVar1 = (*(code *)*puVar2)();
  if ((iVar1 == 0) && (*(int *)(unaff_x19 + 0x40) == 0)) {
    plVar6 = *(long **)(unaff_x19 + 0x38);
    if (plVar6 == (long *)0x0)
    goto OVRPlugin_OVRP_1_86_0__ovrp_AreHandPosesGeneratedByControllerData;
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08fab668) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_076eac48;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08fab668,0);
LAB_076eac48:
    (*(code *)*puVar2)(plVar6,puVar2[1]);
    FUN_076eada4();
  }
  plVar6 = *(long **)(unaff_x19 + 0x28);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
          goto LAB_076eacb4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*unaff_x21,6);
LAB_076eacb4:
    iVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if (iVar1 != 2) {
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
      plVar6 = *(long **)(unaff_x19 + 0x38);
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08fab668) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto FUN_076ead50;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08fab668,0);
FUN_076ead50:
        (*(code *)*puVar2)(plVar6,puVar2[1]);
        FUN_076eae40();
        return;
      }
    }
  }
OVRPlugin_OVRP_1_86_0__ovrp_AreHandPosesGeneratedByControllerData:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


