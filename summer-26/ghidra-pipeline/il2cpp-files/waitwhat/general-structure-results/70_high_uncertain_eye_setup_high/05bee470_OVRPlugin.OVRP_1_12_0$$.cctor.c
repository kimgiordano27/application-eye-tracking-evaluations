/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$.cctor
ENTRY_POINT: 05bee470
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_12_0___cctor(void)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar8;
  long unaff_x22;
  long *plVar9;
  
  plVar9 = *(long **)(unaff_x22 + 0x178);
  do {
    if ((*(uint *)(unaff_x19 + 0x44) >> (ulong)((uint)unaff_x20 & 0x1f) & 1) != 0) {
      plVar8 = *(long **)(unaff_x19 + 0x38);
      if (plVar8 == (long *)0x0) {
LAB_05bee568:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *plVar9) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_05bee4d8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_031c0d08(plVar8,*plVar9,0);
LAB_05bee4d8:
      puVar3 = (uint *)(*(code *)*puVar2)(plVar8,unaff_x20 & 0xffffffff,puVar2[1]);
      uVar1 = *puVar3;
      if (-1 < (int)uVar1) {
        lVar4 = *(long *)(unaff_x19 + 0x18);
        if ((lVar4 == 0) || (lVar7 = *(long *)(unaff_x19 + 0x10), lVar7 == 0)) goto LAB_05bee568;
        if ((((uint)*(ulong *)(lVar4 + 0x18) <= uVar1) || (*(uint *)(lVar7 + 0x18) <= unaff_x20)) ||
           ((*(ulong *)(lVar4 + 0x18) & 0xffffffff) <= unaff_x20)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        FUN_05b5ed20(lVar4 + 0x20 + (ulong)uVar1 * 0x1c,lVar7 + unaff_x20 * 0x1c + 0x20,
                     lVar4 + 0x20 + unaff_x20 * 0x1c,0);
      }
    }
    unaff_x20 = unaff_x20 + 1;
    if (unaff_x20 == 0x18) {
      *(undefined4 *)(unaff_x19 + 0x44) = 0;
      return;
    }
  } while( true );
}


