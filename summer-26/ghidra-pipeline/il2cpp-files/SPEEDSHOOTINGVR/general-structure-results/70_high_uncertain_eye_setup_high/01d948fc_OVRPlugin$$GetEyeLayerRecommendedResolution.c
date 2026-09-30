/*
FUNCTION_NAME: OVRPlugin$$GetEyeLayerRecommendedResolution
ENTRY_POINT: 01d948fc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetEyeLayerRecommendedResolution(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long lVar7;
  long *unaff_x24;
  long lVar8;
  
  lVar7 = 0;
  while( true ) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar2 = FUN_01d913b8(unaff_x21);
    if ((uVar2 & 1) != 0) break;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar2 = FUN_00fca6a8(unaff_x21);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar3 = FUN_01d9159c(unaff_x21);
    if ((lVar3 != 0) && (uVar1 = *(uint *)(lVar3 + 0x18), 0 < (int)uVar1)) {
      lVar8 = 0;
      do {
        if (uVar1 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        if ((*(long *)(lVar3 + 0x20 + lVar8 * 8) == 0) || (FUN_0105d828(), unaff_x19 == (long *)0x0)
           ) goto LAB_01d94ab4;
        uVar2 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        uVar1 = *(uint *)(lVar3 + 0x18);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar1);
    }
    if (lVar7 == 0) {
      if ((unaff_x20 & 1) == 0) {
        return 0;
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar7 = FUN_01d92954();
      if (lVar7 == 0) goto LAB_01d94ab4;
      if (*(char *)(lVar7 + 0x15) == '\0') {
        return 0;
      }
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    unaff_x21 = (long *)FUN_01d92590(unaff_x21);
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
  }
  if (unaff_x21 == (long *)0x0) {
LAB_01d94ab4:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar7 = *unaff_x21;
  uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar2 != 0) {
    piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_023598d0) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_01d94a8c;
      }
      uVar2 = uVar2 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined8 *)FUN_0103c348(unaff_x21,*(long *)PTR_DAT_023598d0,1);
LAB_01d94a8c:
                    /* WARNING: Could not recover jumptable at 0x01d94ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)*puVar4)(unaff_x21);
  return uVar5;
}


