/*
FUNCTION_NAME: OVRManager$$set_monoscopic
ENTRY_POINT: 05ff1130
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_monoscopic(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long lVar5;
  undefined4 uVar6;
  
  do {
    if (unaff_x22 == (long *)0x0) {
LAB_05ff11e8:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar2 = *unaff_x22;
    lVar5 = *(long *)(unaff_x19 + 0x30);
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_05ff1188;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0322c1e8(unaff_x22,*unaff_x23,1);
LAB_05ff1188:
    uVar6 = (*(code *)*puVar1)(unaff_x22,unaff_x21 & 0xffffffff,puVar1[1]);
    if (lVar5 == 0) goto LAB_05ff11e8;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    lVar5 = lVar5 + unaff_x21 * unaff_x25;
    unaff_x21 = unaff_x21 + 1;
    *(undefined4 *)(lVar5 + 0x20) = uVar6;
    *(undefined4 *)(lVar5 + 0x24) = param_2;
    *(undefined4 *)(lVar5 + 0x28) = param_3;
    if (unaff_x21 == unaff_x24) {
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_06e01370(*(long *)(unaff_x19 + 0x28),*unaff_x20,0);
        return;
      }
      goto LAB_05ff11e8;
    }
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05ff11e8;
    unaff_x22 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x128);
  } while( true );
}


