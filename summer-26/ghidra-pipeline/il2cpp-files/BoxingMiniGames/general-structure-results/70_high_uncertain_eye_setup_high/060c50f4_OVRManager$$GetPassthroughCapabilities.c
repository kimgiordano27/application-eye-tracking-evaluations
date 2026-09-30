/*
FUNCTION_NAME: OVRManager$$GetPassthroughCapabilities
ENTRY_POINT: 060c50f4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__GetPassthroughCapabilities(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *plVar6;
  long *unaff_x23;
  long *unaff_x24;
  float fVar7;
  
  do {
    iVar1 = FUN_060e2b30();
    if (iVar1 != 0) {
      plVar6 = *(long **)(unaff_x20 + 0x130);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_060c515c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(plVar6,*unaff_x24,0);
LAB_060c515c:
      fVar7 = (float)(*(code *)*puVar2)(plVar6,unaff_w21,puVar2[1]);
      if (*(float *)(unaff_x19 + 0xd8) < fVar7) {
        return 1;
      }
    }
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == 5) {
      return 0;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
  } while( true );
}


