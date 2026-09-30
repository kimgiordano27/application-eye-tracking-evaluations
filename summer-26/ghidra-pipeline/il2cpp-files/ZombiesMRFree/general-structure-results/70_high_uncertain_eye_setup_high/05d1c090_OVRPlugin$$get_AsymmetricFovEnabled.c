/*
FUNCTION_NAME: OVRPlugin$$get_AsymmetricFovEnabled
ENTRY_POINT: 05d1c090
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


void OVRPlugin__get_AsymmetricFovEnabled(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long lVar5;
  ulong uVar6;
  
  FUN_05b32c00();
  *(long *)(unaff_x21 + 0x18) = unaff_x19;
  thunk_FUN_03048534((long *)(unaff_x21 + 0x18));
  lVar5 = 8;
  do {
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *unaff_x23;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
LAB_05d1c1a0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar6 = lVar5 - 8;
    if ((long)*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= (long)uVar6) {
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
    if (lVar3 == 0) goto LAB_05d1c1a0;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_05d1c1a4:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    if (lVar2 == 0) goto LAB_05d1c1a0;
    *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar3 + lVar5 * 4);
    lVar3 = *unaff_x20;
    uVar4 = thunk_FUN_0301080c(*unaff_x25);
    FUN_0494bc5c(uVar4,lVar2,*unaff_x26,0);
    if ((unaff_x19 == 0) || (uVar1 = FUN_04430b40(), lVar3 == 0)) goto LAB_05d1c1a0;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_05d1c1a4;
    *(undefined4 *)(lVar3 + lVar5 * 4) = uVar1;
    lVar5 = lVar5 + 1;
  } while( true );
}


