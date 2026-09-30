/*
FUNCTION_NAME: OVRPlugin$$AddInsightPassthroughSurfaceGeometry
ENTRY_POINT: 01f73b6c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__AddInsightPassthroughSurfaceGeometry(void)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint in_w9;
  int in_w10;
  uint *unaff_x19;
  int unaff_w20;
  ushort *puVar6;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar7;
  uint uVar8;
  int unaff_w27;
  int unaff_w28;
  long *unaff_x29;
  undefined1 *in_stack_00000010;
  ulong in_stack_00000018;
  
  while( true ) {
    bVar3 = unaff_w20 == -1;
    unaff_w20 = unaff_w20 + 1;
    uVar8 = in_w10 - 0x30;
    if (bVar3) break;
    if (unaff_w23 <= in_w9) goto LAB_01f73d34;
    uVar1 = *(ushort *)(unaff_x21 + (long)(unaff_w27 + unaff_w20 + 9) * 2);
    uVar7 = (uint)uVar1;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    if (9 < uVar1 - 0x30) {
      bVar3 = false;
      unaff_w24 = unaff_w27 + unaff_w20 + 9;
      goto LAB_01f73c70;
    }
    in_w9 = unaff_w27 + unaff_w20 + 10;
    in_w10 = (uint)uVar1 + uVar8 * unaff_w28;
  }
  if (in_w9 < unaff_w23) {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar7 = (uint)uVar1;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar2 = uVar1 - 0x30;
    if (uVar2 < 10) {
      unaff_w24 = unaff_w27 + 10;
      if ((0x19999999 < uVar8) || ((bVar3 = false, uVar8 == 0x19999999 && (0x35 < uVar1)))) {
        bVar3 = true;
      }
      uVar8 = uVar2 + uVar8 * 10;
      if (unaff_w23 <= unaff_w24) goto LAB_01f73d30;
      do {
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        uVar7 = (uint)uVar1;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        if (9 < uVar1 - 0x30) goto LAB_01f73c70;
        unaff_w24 = unaff_w24 + 1;
        bVar3 = true;
      } while (unaff_w23 != unaff_w24);
    }
    else {
      bVar3 = false;
LAB_01f73c70:
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      if ((uVar7 - 9 < 5) || (uVar7 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) == 0) goto LAB_01f73d50;
        uVar7 = unaff_w24 + 1;
        if ((int)uVar7 < (int)unaff_w23) {
          puVar6 = (ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
          do {
            if (unaff_w23 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_01230ca8();
            }
            uVar1 = *puVar6;
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_01f73cec;
            uVar7 = uVar7 + 1;
            puVar6 = puVar6 + 1;
          } while (unaff_w23 != uVar7);
        }
        else {
LAB_01f73cec:
          if (uVar7 < unaff_w23) goto LAB_01f73d00;
        }
      }
      else {
LAB_01f73d00:
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar4 = FUN_01f74de0();
        if ((uVar4 & 1) == 0) {
LAB_01f73d50:
          uVar8 = 0;
          uVar5 = 0;
          goto LAB_01f73d58;
        }
      }
LAB_01f73d30:
      if (!bVar3) goto LAB_01f73d34;
    }
  }
  else {
LAB_01f73d34:
    if ((in_stack_00000018 & 0x100000000) != 0 || uVar8 == 0) {
      uVar5 = 1;
      goto LAB_01f73d58;
    }
  }
  uVar8 = 0;
  uVar5 = 0;
  *in_stack_00000010 = 1;
LAB_01f73d58:
  *unaff_x19 = uVar8;
  return uVar5;
}


