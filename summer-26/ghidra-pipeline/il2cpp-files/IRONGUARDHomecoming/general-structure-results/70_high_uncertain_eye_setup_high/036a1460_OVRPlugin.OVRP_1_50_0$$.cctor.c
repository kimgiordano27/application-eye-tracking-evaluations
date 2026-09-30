/*
FUNCTION_NAME: OVRPlugin.OVRP_1_50_0$$.cctor
ENTRY_POINT: 036a1460
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_50_0___cctor
               (ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6,int *param_7)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *unaff_x21;
  long unaff_x22;
  undefined4 uStack000000000000002c;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_16__);
    *(undefined1 *)(unaff_x22 + 0xf6d) = 1;
  }
  iVar1 = *param_7;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar3 = *(long *)(param_6 + 0x140);
  if (lVar3 != 0) {
    uVar2 = iVar1 - 2;
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar2 * 0x10;
      *(undefined4 *)(lVar3 + 0x20) = param_2;
      *(undefined4 *)(lVar3 + 0x24) = param_3;
      *(undefined4 *)(lVar3 + 0x28) = param_4;
      *(undefined4 *)(lVar3 + 0x2c) = param_5;
      lVar3 = *(long *)(param_6 + 0xd0);
      if (lVar3 == 0) goto LAB_036a151c;
      if (uVar2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined4 *)(lVar3 + (long)(int)uVar2 * 4 + 0x20) = 0x3f800000;
        uStack000000000000002c = 2;
        FUN_036a1524(param_6,uVar2,&stack0x0000002c,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_036a151c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


