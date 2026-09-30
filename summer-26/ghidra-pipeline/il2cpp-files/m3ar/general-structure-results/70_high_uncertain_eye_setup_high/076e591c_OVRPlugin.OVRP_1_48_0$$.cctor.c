/*
FUNCTION_NAME: OVRPlugin.OVRP_1_48_0$$.cctor
ENTRY_POINT: 076e591c
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_48_0___cctor
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               uint param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *unaff_x22;
  long lVar9;
  undefined4 uVar10;
  
  uVar7 = (ulong)param_5;
  if ((param_1 == 0) || (param_5 != *(uint *)(param_1 + 0x18))) {
    uVar1 = FUN_040316d0(*(undefined8 *)PTR_DAT_08f65908,uVar7);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_076e5a34;
    FUN_0854952c(*(long *)(unaff_x19 + 0x28),uVar7,0);
  }
  if (0 < (int)param_5) {
    uVar6 = 0;
    do {
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (plVar8 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x138), plVar8 == (long *)0x0))
      goto LAB_076e5a34;
      lVar3 = *plVar8;
      lVar9 = *(long *)(unaff_x19 + 0x30);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_076e59d8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar8,*unaff_x22,1);
LAB_076e59d8:
      uVar10 = (*(code *)*puVar2)(plVar8,uVar6 & 0xffffffff,puVar2[1]);
      if (lVar9 == 0) goto LAB_076e5a34;
      if (*(uint *)(lVar9 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      lVar9 = lVar9 + uVar6 * 0xc;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(lVar9 + 0x20) = uVar10;
      *(undefined4 *)(lVar9 + 0x24) = param_3;
      *(undefined4 *)(lVar9 + 0x28) = param_4;
    } while (uVar6 != uVar7);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_0854a1a8(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x30),0);
    return;
  }
LAB_076e5a34:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


