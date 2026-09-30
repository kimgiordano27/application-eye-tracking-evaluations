/*
FUNCTION_NAME: Hyper.PopupModule.Providers.PremiumAccessRequestProvider$$Dispose
ENTRY_POINT: 0917aaf0
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


byte Hyper_PopupModule_Providers_PremiumAccessRequestProvider__Dispose(ulong param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 unaff_w19;
  uint unaff_w20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  byte unaff_w25;
  undefined8 *unaff_x26;
  
  do {
    uVar3 = FUN_09179a48(param_1,unaff_w19);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x23 + 0x28) == 0) {
LAB_0917ab54:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      uVar1 = FUN_0917dae8(*(long *)(unaff_x23 + 0x28),unaff_w21);
      if ((*(uint *)(unaff_x23 + 0xb8) & (uVar1 | unaff_w20)) != 0) {
        unaff_w25 = 0;
        goto LAB_0917ab38;
      }
      unaff_w25 = (*(uint *)(unaff_x23 + 0x4c) & (uVar1 | unaff_w20)) != 0 | unaff_w25;
    }
    unaff_w22 = unaff_w22 + 1;
    lVar2 = *unaff_x24;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar2 = *unaff_x24;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_0917ab54;
    if (*(int *)(lVar4 + 0x18) <= unaff_w22) {
LAB_0917ab38:
      return unaff_w25 & 1;
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar4 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_0917ab54;
    }
    unaff_x23 = FUN_06b7fba4(lVar4,unaff_w22,*unaff_x26);
    if (unaff_x23 == 0) goto LAB_0917ab54;
    param_1 = (ulong)*(uint *)(unaff_x23 + 0x10);
  } while( true );
}


