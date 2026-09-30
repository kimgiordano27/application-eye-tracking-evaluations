/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_InitializeMixedReality
ENTRY_POINT: 05bee4ec
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


void OVRPlugin_OVRP_1_15_0__ovrp_InitializeMixedReality(void)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint in_w8;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar7;
  long *unaff_x22;
  ulong unaff_x23;
  
  do {
    if (-1 < (int)in_w8) {
      lVar4 = *(long *)(unaff_x19 + 0x18);
      if ((lVar4 == 0) || (lVar6 = *(long *)(unaff_x19 + 0x10), lVar6 == 0)) {
LAB_05bee568:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (((uint)*(ulong *)(lVar4 + 0x18) <= in_w8) ||
         ((*(uint *)(lVar6 + 0x18) <= unaff_x20 ||
          ((*(ulong *)(lVar4 + 0x18) & 0xffffffff) <= unaff_x20)))) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      FUN_05b5ed20(lVar4 + 0x20 + (ulong)in_w8 * (unaff_x23 & 0xffffffff),
                   lVar6 + unaff_x20 * 0x1c + 0x20,lVar4 + 0x20 + unaff_x20 * 0x1c,0);
    }
    do {
      unaff_x20 = unaff_x20 + 1;
      if (unaff_x20 == 0x18) {
        *(undefined4 *)(unaff_x19 + 0x44) = 0;
        return;
      }
    } while ((*(uint *)(unaff_x19 + 0x44) >> (ulong)((uint)unaff_x20 & 0x1f) & 1) == 0);
    plVar7 = *(long **)(unaff_x19 + 0x38);
    if (plVar7 == (long *)0x0) goto LAB_05bee568;
    lVar4 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05bee4d8;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_031c0d08(plVar7,*unaff_x22,0);
LAB_05bee4d8:
    puVar2 = (uint *)(*(code *)*puVar1)(plVar7,unaff_x20 & 0xffffffff,puVar1[1]);
    in_w8 = *puVar2;
  } while( true );
}


