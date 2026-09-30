/*
FUNCTION_NAME: OVRPlugin$$GetCurrentInteractionProfile
ENTRY_POINT: 02c1d6cc
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetCurrentInteractionProfile(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint in_w8;
  int *piVar4;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long lVar5;
  
  do {
    lVar5 = 0;
    do {
      if (in_w8 <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      if ((*(long *)(unaff_x23 + 0x20 + lVar5 * 8) == 0) ||
         (FUN_0187f3ac(), unaff_x19 == (long *)0x0)) goto LAB_02c1d814;
      uVar1 = (**(code **)(*unaff_x19 + 0x288))();
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      in_w8 = *(uint *)(unaff_x23 + 0x18);
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < (int)in_w8);
    do {
      if (unaff_x22 == 0) {
        if ((unaff_x20 & 1) == 0) {
          return 0;
        }
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        unaff_x22 = FUN_02c1b6b4();
        if (unaff_x22 == 0) goto LAB_02c1d814;
        if (*(char *)(unaff_x22 + 0x15) == '\0') {
          return 0;
        }
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      unaff_x21 = (long *)FUN_02c1b2f0(unaff_x21);
      if (unaff_x21 == (long *)0x0) {
        return 0;
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar1 = FUN_02c1a118(unaff_x21);
      if ((uVar1 & 1) != 0) {
        if (unaff_x21 == (long *)0x0) {
LAB_02c1d814:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        lVar5 = *unaff_x21;
        uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar1 == 0) goto LAB_02c1d7c4;
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_02c1d7ac;
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar1 = FUN_017ea0d8(unaff_x21);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      unaff_x23 = FUN_02c1a2fc(unaff_x21);
    } while ((unaff_x23 == 0) || (in_w8 = *(uint *)(unaff_x23 + 0x18), (int)in_w8 < 1));
  } while( true );
  while( true ) {
    uVar1 = uVar1 - 1;
    piVar4 = piVar4 + 4;
    if (uVar1 == 0) break;
LAB_02c1d7ac:
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_038022f8) {
      puVar2 = (undefined8 *)(lVar5 + (long)(*piVar4 + 1) * 0x10 + 0x138);
      goto LAB_02c1d7ec;
    }
  }
LAB_02c1d7c4:
  puVar2 = (undefined8 *)FUN_0185dba8(unaff_x21,*(long *)PTR_DAT_038022f8,1);
LAB_02c1d7ec:
                    /* WARNING: Could not recover jumptable at 0x02c1d810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar2)(unaff_x21);
  return uVar3;
}


