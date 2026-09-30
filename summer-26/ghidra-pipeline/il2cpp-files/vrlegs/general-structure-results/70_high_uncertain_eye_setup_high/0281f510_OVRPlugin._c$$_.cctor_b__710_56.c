/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_56
ENTRY_POINT: 0281f510
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__710_56(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int in_w8;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long unaff_x19;
  int *unaff_x20;
  uint *unaff_x21;
  int *unaff_x22;
  int *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  
  uVar4 = FUN_0281f324(param_1,in_w8 + unaff_w25);
  if ((((uVar4 & 1) == 0) || (0x3b < *unaff_x23)) ||
     ((*unaff_x20 == 0x18 && (*unaff_x23 != 0 || *unaff_x22 != 0)))) {
LAB_0281f540:
    uVar5 = 0;
  }
  else {
    lVar6 = *unaff_x24;
    uVar9 = *unaff_x21;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *unaff_x24;
    }
    *unaff_x21 = *(int *)(*(long *)(lVar6 + 0xb8) + 0x30) + uVar9;
    uVar4 = FUN_0281f14c();
    if ((uVar4 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x18) = 0;
      lVar6 = 0;
      uVar9 = *unaff_x21 + 1;
      *unaff_x21 = uVar9;
      if (*(int *)(unaff_x19 + 0x30) <= (int)uVar9) {
        return 0;
      }
      lVar8 = *(long *)(unaff_x19 + 0x28);
      if (lVar8 == 0) {
LAB_0281f698:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c(lVar6);
      }
      uVar2 = *(uint *)(lVar8 + 0x18);
      uVar7 = 0xffffffff;
      do {
        if (uVar2 <= uVar9) goto LAB_0281f694;
        uVar9 = (uint)*(ushort *)(lVar8 + (long)(int)uVar9 * 2 + 0x20);
        if (9 < uVar9 - 0x30) {
          if (uVar7 != 0xffffffff) goto LAB_0281f62c;
          goto LAB_0281f540;
        }
        *(uint *)(unaff_x19 + 0x18) = uVar9 + *(int *)(unaff_x19 + 0x18) * 10 + -0x30;
        uVar1 = uVar7 + 1;
        uVar7 = uVar7 + 1;
        uVar9 = *unaff_x21 + 1;
        *unaff_x21 = uVar9;
      } while ((uVar1 < 6) && ((int)uVar9 < *(int *)(unaff_x19 + 0x30)));
      if (uVar7 < 6) {
LAB_0281f62c:
        lVar6 = *unaff_x24;
        iVar3 = *(int *)(unaff_x19 + 0x18);
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar6 = *unaff_x24;
        }
        lVar8 = **(long **)(lVar6 + 0xb8);
        if (lVar8 == 0) goto LAB_0281f698;
        lVar6 = 7 - (long)(int)(uVar7 + 1);
        if (*(uint *)(lVar8 + 0x18) <= (uint)lVar6) {
LAB_0281f694:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(int *)(unaff_x19 + 0x18) = *(int *)(lVar8 + lVar6 * 4 + 0x20) * iVar3;
      }
      if ((*unaff_x20 == 0x18) && (*(int *)(unaff_x19 + 0x18) != 0)) goto LAB_0281f540;
    }
    uVar5 = 1;
  }
  return uVar5;
}


