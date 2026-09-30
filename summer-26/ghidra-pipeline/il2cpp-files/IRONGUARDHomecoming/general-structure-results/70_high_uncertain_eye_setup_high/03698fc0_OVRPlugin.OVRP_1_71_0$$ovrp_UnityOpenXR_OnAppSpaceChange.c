/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnAppSpaceChange
ENTRY_POINT: 03698fc0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnAppSpaceChange(long param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  int unaff_w19;
  uint unaff_w20;
  ulong unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  float fVar6;
  undefined1 auVar7 [16];
  float unaff_s8;
  
  do {
    if (!(bool)in_ZR && in_NG == in_OV) {
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar1 = unaff_x21 & 0xffffffff;
      uVar2 = unaff_x22 & 0xffffffff;
LAB_0369906c:
      auVar7 = FUN_0369911c(uVar1,uVar2);
      return auVar7;
    }
    while( true ) {
      unaff_x21 = unaff_x22;
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        param_1 = *unaff_x23;
      }
      lVar3 = **(long **)(param_1 + 0xb8);
      if (lVar3 == 0) goto LAB_036990a4;
      puVar4 = *(uint **)(lVar3 + 0x10);
      if (unaff_x21 == unaff_x24) {
        if ((*puVar4 == 0) || (puVar4[4] == 0)) goto LAB_036990a0;
        fVar6 = *(float *)(lVar3 + 0x20);
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (fVar6 < unaff_s8) {
          uVar2 = 1;
          uVar1 = 0;
          goto LAB_0369906c;
        }
        lVar3 = **(long **)(*unaff_x23 + 0xb8);
        if (lVar3 == 0) goto LAB_036990a4;
        if ((**(uint **)(lVar3 + 0x10) <= unaff_w20) ||
           (lVar5 = *(long *)(*(uint **)(lVar3 + 0x10) + 4), (int)lVar5 == 0)) goto LAB_036990a0;
        if (unaff_s8 <= *(float *)(lVar3 + lVar5 * (int)unaff_w20 * 4 + 0x20)) {
          return ZEXT416(0x3f000000);
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar1 = (ulong)(unaff_w19 - 2);
        uVar2 = (ulong)unaff_w20;
        goto LAB_0369906c;
      }
      if ((*puVar4 <= unaff_x21) || ((int)*(long *)(puVar4 + 4) == 0)) goto LAB_036990a0;
      if (*(float *)(lVar3 + *(long *)(puVar4 + 4) * unaff_x21 * 4 + 0x20) <= unaff_s8) break;
      unaff_x22 = unaff_x21 + 1;
    }
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_1 = *unaff_x23;
    }
    lVar3 = **(long **)(param_1 + 0xb8);
    if (lVar3 == 0) {
LAB_036990a4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_x22 = unaff_x21 + 1;
    if ((**(uint **)(lVar3 + 0x10) <= unaff_x22) ||
       (lVar5 = *(long *)(*(uint **)(lVar3 + 0x10) + 4), (int)lVar5 == 0)) {
LAB_036990a0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    fVar6 = *(float *)(lVar3 + lVar5 * (int)unaff_x22 * 4 + 0x20);
    in_NG = '\0';
    in_ZR = false;
    in_OV = '\x01';
    if (!NAN(fVar6) && !NAN(unaff_s8)) {
      in_NG = fVar6 < unaff_s8;
      in_ZR = fVar6 == unaff_s8;
      in_OV = '\0';
    }
  } while( true );
}


