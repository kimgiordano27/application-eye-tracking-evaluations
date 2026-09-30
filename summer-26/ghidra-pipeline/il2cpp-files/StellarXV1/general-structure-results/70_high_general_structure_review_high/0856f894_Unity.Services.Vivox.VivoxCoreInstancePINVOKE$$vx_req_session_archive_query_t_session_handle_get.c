/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_archive_query_t_session_handle_get
ENTRY_POINT: 0856f894
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_session_handle_get
          (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iStack0000000000000008;
  
  puVar2 = PTR_DAT_092871d8;
  if ((DAT_0989db15 & 1) == 0) {
    FUN_04077588(PTR_DAT_0932ee58);
    FUN_04077588(PTR_DAT_0932ee60);
    FUN_04077588(PTR_DAT_0932ee68);
    FUN_04077588(PTR_DAT_0932b8a8);
    FUN_04077588(PTR_DAT_092871d8);
    DAT_0989db15 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar4 = FUN_08581e30(0);
  uVar6 = 0;
  if (lVar4 != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar4 = FUN_08581e30(0);
    puVar3 = PTR_DAT_0932ee68;
    puVar2 = PTR_DAT_0932b8a8;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    auVar7 = FUN_084df44c(lVar4,0);
    auVar8 = FUN_06478da4(0,*(undefined8 *)puVar2);
    uVar5 = FUN_064789c4(auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_,*(undefined8 *)puVar3);
    uVar6 = 0;
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_06478d04();
      if ((uVar5 & 1) == 0) {
        uVar1 = *(uint *)(param_1 + 0x38);
        uVar6 = 0;
        if ((-1 < (int)uVar1) &&
           (iStack0000000000000008 = auVar7._8_4_, (int)uVar1 < iStack0000000000000008)) {
          uVar6 = *(undefined8 *)(auVar7._0_8_ + (ulong)uVar1 * 8);
        }
      }
      else {
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}


