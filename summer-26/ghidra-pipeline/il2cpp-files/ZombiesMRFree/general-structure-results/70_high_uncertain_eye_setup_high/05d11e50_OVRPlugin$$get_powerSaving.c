/*
FUNCTION_NAME: OVRPlugin$$get_powerSaving
ENTRY_POINT: 05d11e50
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_powerSaving(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 *in_x9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar5;
  ulong unaff_x23;
  long unaff_x24;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float unaff_s12;
  
  while( true ) {
    uVar6 = *in_x9;
    uVar7 = in_x9[1];
    uVar8 = in_x9[2];
    uVar9 = in_x9[3];
    lVar2 = FUN_05d18ce8(param_1);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) goto LAB_05d11f68;
    uVar6 = FUN_068ecb58(uVar6,0);
    if (unaff_x22 == 0) break;
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) goto LAB_05d11f68;
    puVar1 = (undefined4 *)(unaff_x22 + unaff_x24);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    unaff_x24 = unaff_x24 + 0x10;
    unaff_x23 = unaff_x23 + 1;
    if ((*unaff_x21 == 0) || (lVar2 = FUN_05d18ce8(), lVar2 == 0)) break;
    if ((long)*(int *)(lVar2 + 0x18) <= (long)unaff_x23) {
code_r0x05d11ed0:
      if (unaff_s12 <= 0.5) {
        unaff_x20 = unaff_x21;
      }
      lVar2 = *unaff_x20;
      if ((lVar2 != 0) && (*unaff_x19 != 0)) {
        lVar5 = 8;
        *(undefined4 *)(*unaff_x19 + 0x10) = *(undefined4 *)(lVar2 + 0x10);
        goto LAB_05d11ef0;
      }
      break;
    }
    if ((*unaff_x20 == 0) || (lVar2 = FUN_05d18ce8(), lVar2 == 0)) break;
    if ((long)*(int *)(lVar2 + 0x18) <= (long)unaff_x23) goto code_r0x05d11ed0;
    if (*unaff_x19 == 0) break;
    unaff_x22 = FUN_05d18ce8();
    if ((*unaff_x21 == 0) || (lVar2 = FUN_05d18ce8(*unaff_x21), lVar2 == 0)) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) goto LAB_05d11f68;
    param_1 = *unaff_x20;
    if (param_1 == 0) break;
    in_x9 = (undefined4 *)(lVar2 + unaff_x24);
  }
  goto LAB_05d11f40;
LAB_05d11ef0:
  do {
    lVar3 = FUN_05d196a8();
    lVar4 = FUN_05d196a8(lVar2);
    if (lVar4 == 0) break;
    if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar5 - 8U) {
LAB_05d11f68:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    if (lVar3 == 0) break;
    if ((ulong)*(uint *)(lVar3 + 0x18) <= lVar5 - 8U) goto LAB_05d11f68;
    *(undefined4 *)(lVar3 + lVar5 * 4) = *(undefined4 *)(lVar4 + lVar5 * 4);
    if (lVar5 == 0xc) {
      return;
    }
    lVar5 = lVar5 + 1;
  } while (*unaff_x19 != 0);
LAB_05d11f40:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


