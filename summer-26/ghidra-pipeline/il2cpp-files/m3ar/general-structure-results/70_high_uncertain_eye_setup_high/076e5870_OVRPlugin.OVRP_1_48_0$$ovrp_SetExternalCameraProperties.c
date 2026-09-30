/*
FUNCTION_NAME: OVRPlugin.OVRP_1_48_0$$ovrp_SetExternalCameraProperties
ENTRY_POINT: 076e5870
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_48_0__ovrp_SetExternalCameraProperties
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  
  if ((DAT_095482cb & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fae348);
    FUN_0403162c(PTR_DAT_08f65908);
    DAT_095482cb = 1;
  }
  puVar1 = PTR_DAT_08fae348;
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (plVar9 = *(long **)(*(long *)(param_4 + 0x20) + 0x138), plVar9 != (long *)0x0)) {
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08fae348) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076e590c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08fae348,0);
LAB_076e590c:
    uVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    uVar6 = (ulong)uVar2;
    if ((*(long *)(param_4 + 0x30) == 0) || (uVar2 != *(uint *)(*(long *)(param_4 + 0x30) + 0x18)))
    {
      uVar4 = FUN_040316d0(*(undefined8 *)PTR_DAT_08f65908,uVar6);
      *(undefined8 *)(param_4 + 0x30) = uVar4;
      if (*(long *)(param_4 + 0x28) == 0) goto LAB_076e5a34;
      FUN_0854952c(*(long *)(param_4 + 0x28),uVar6,0);
    }
    if (0 < (int)uVar2) {
      uVar10 = 0;
      do {
        if ((*(long *)(param_4 + 0x20) == 0) ||
           (plVar9 = *(long **)(*(long *)(param_4 + 0x20) + 0x138), plVar9 == (long *)0x0))
        goto LAB_076e5a34;
        lVar5 = *plVar9;
        lVar11 = *(long *)(param_4 + 0x30);
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_076e59d8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)puVar1,1);
LAB_076e59d8:
        uVar12 = (*(code *)*puVar3)(plVar9,uVar10 & 0xffffffff,puVar3[1]);
        if (lVar11 == 0) goto LAB_076e5a34;
        if (*(uint *)(lVar11 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        lVar11 = lVar11 + uVar10 * 0xc;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(lVar11 + 0x20) = uVar12;
        *(undefined4 *)(lVar11 + 0x24) = param_2;
        *(undefined4 *)(lVar11 + 0x28) = param_3;
      } while (uVar10 != uVar6);
    }
    if (*(long *)(param_4 + 0x28) != 0) {
      FUN_0854a1a8(*(long *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x30),0);
      return;
    }
  }
LAB_076e5a34:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


