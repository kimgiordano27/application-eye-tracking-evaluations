/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_58
ENTRY_POINT: 0281f5e8
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


undefined8 OVRPlugin_<>c__<_cctor>b__710_58(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint in_w8;
  long in_x9;
  long lVar5;
  uint in_w10;
  uint uVar6;
  int in_w11;
  int in_w12;
  long unaff_x19;
  int *unaff_x20;
  uint *unaff_x21;
  long *unaff_x24;
  
  do {
    *(int *)(unaff_x19 + 0x18) = in_w11 + -0x30;
    uVar1 = in_w8 + 1;
    uVar6 = *unaff_x21 + 1;
    *unaff_x21 = uVar6;
    if ((5 < in_w8 + 1) || (*(int *)(unaff_x19 + 0x30) <= (int)uVar6)) {
      if (uVar1 < 6) {
LAB_0281f62c:
        lVar3 = *unaff_x24;
        iVar2 = *(int *)(unaff_x19 + 0x18);
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar3 = *unaff_x24;
        }
        lVar3 = **(long **)(lVar3 + 0xb8);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar5 = 7 - (long)(int)(in_w8 + 2);
        if (*(uint *)(lVar3 + 0x18) <= (uint)lVar5) {
LAB_0281f694:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(int *)(unaff_x19 + 0x18) = *(int *)(lVar3 + lVar5 * 4 + 0x20) * iVar2;
      }
      if ((*unaff_x20 == 0x18) && (*(int *)(unaff_x19 + 0x18) != 0)) {
LAB_0281f540:
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      return uVar4;
    }
    if (in_w10 <= uVar6) goto LAB_0281f694;
    uVar6 = (uint)*(ushort *)(in_x9 + (long)(int)uVar6 * 2 + 0x20);
    if (9 < uVar6 - 0x30) {
      if (uVar1 == 0xffffffff) goto LAB_0281f540;
      goto LAB_0281f62c;
    }
    in_w11 = uVar6 + *(int *)(unaff_x19 + 0x18) * in_w12;
    in_w8 = uVar1;
  } while( true );
}


