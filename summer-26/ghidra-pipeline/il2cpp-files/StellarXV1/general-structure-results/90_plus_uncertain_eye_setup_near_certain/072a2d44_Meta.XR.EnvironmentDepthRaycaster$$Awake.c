/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Awake
ENTRY_POINT: 072a2d44
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_EnvironmentDepthRaycaster__Awake(void)

{
  undefined1 in_ZR;
  uint in_w8;
  ulong in_x9;
  long lVar1;
  long lVar2;
  int in_w10;
  long in_x11;
  uint in_w12;
  long in_x13;
  long in_x14;
  long in_x15;
  uint uVar3;
  long unaff_x19;
  long unaff_x22;
  
code_r0x072a2d44:
  if ((bool)in_ZR) {
    in_x9 = in_x9 + 1;
    in_w10 = in_w10 + (int)in_x15;
    if (in_x9 == 0xc) {
      if (in_w12 == 0) goto LAB_072a2e3c;
      lVar1 = *(long *)(in_x11 + 0x20);
      if (lVar1 != 0) {
        if ((*(uint *)(lVar1 + 0x18) < 0xd) || (*(undefined4 *)(lVar1 + 0x50) = 0, in_w12 == 1))
        goto LAB_072a2e3c;
        lVar1 = *(long *)(in_x11 + 0x28);
        if (lVar1 != 0) {
          if ((*(uint *)(lVar1 + 0x18) < 0xd) || (*(undefined4 *)(lVar1 + 0x50) = 0, in_w12 < 3))
          goto LAB_072a2e3c;
          lVar1 = *(long *)(in_x11 + 0x30);
          if (lVar1 != 0) {
            if (0xc < *(uint *)(lVar1 + 0x18)) {
              lVar2 = *(long *)(unaff_x19 + 0xa8);
              *(undefined4 *)(lVar1 + 0x50) = 0;
              if (lVar2 == 0) goto LAB_072a2e40;
              uVar3 = *(uint *)(lVar2 + 0x18);
              if (((((uVar3 != 0) && (in_w8 != 0)) && (uVar3 != 1)) && ((in_w8 != 1 && (2 < uVar3)))
                  ) && ((2 < in_w8 && ((uVar3 != 3 && (in_w8 != 3)))))) {
                return *(int *)(unaff_x22 + 0x20) * *(int *)(lVar2 + 0x20) +
                       *(int *)(unaff_x22 + 0x24) * *(int *)(lVar2 + 0x24) +
                       *(int *)(unaff_x22 + 0x28) * *(int *)(lVar2 + 0x28) +
                       *(int *)(unaff_x22 + 0x2c) * *(int *)(lVar2 + 0x2c);
              }
            }
LAB_072a2e3c:
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
        }
      }
      goto LAB_072a2e40;
    }
    in_x15 = 0;
  }
  if (in_x13 == in_x15) goto LAB_072a2e3c;
  lVar1 = *(long *)(unaff_x19 + 0xb0);
  if (lVar1 != 0) {
    uVar3 = in_w10 + (int)in_x15;
    if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_072a2e3c;
    lVar2 = *(long *)(in_x14 + in_x15 * 8);
    if (lVar2 == 0) goto LAB_072a2e40;
    if (*(uint *)(lVar2 + 0x18) <= in_x9) goto LAB_072a2e3c;
    in_x15 = in_x15 + 1;
    in_ZR = in_x15 == 3;
    *(undefined4 *)(lVar2 + in_x9 * 4 + 0x20) = *(undefined4 *)(lVar1 + (long)(int)uVar3 * 4 + 0x20)
    ;
    goto code_r0x072a2d44;
  }
LAB_072a2e40:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


