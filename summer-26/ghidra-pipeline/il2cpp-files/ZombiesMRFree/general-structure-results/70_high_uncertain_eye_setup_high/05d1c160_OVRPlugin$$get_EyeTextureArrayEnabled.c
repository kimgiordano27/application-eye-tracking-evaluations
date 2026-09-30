/*
FUNCTION_NAME: OVRPlugin$$get_EyeTextureArrayEnabled
ENTRY_POINT: 05d1c160
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_EyeTextureArrayEnabled(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x28;
  ulong unaff_x29;
  
  do {
    uVar1 = FUN_04430b40();
    if (unaff_x24 == 0) break;
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x29) {
LAB_05d1c1a4:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined4 *)(unaff_x24 + unaff_x28 * 4) = uVar1;
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *unaff_x23;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) break;
    unaff_x29 = unaff_x28 - 7;
    if ((long)*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= (long)unaff_x29) {
      return;
    }
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb8a68);
    FUN_05b32c00(lVar2,0);
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar3 = *unaff_x23;
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x29) goto LAB_05d1c1a4;
    if (lVar2 == 0) break;
    *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar3 + (unaff_x28 + 1) * 4);
    unaff_x24 = *unaff_x20;
    uVar4 = thunk_FUN_0301080c(*unaff_x25);
    FUN_0494bc5c(uVar4,lVar2,*unaff_x26,0);
    unaff_x28 = unaff_x28 + 1;
  } while (unaff_x19 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


