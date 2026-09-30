/*
FUNCTION_NAME: OVRPlugin.Ktx$$LoadKtxFromMemory
ENTRY_POINT: 033e9844
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__LoadKtxFromMemory(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  uint unaff_w22;
  undefined8 *unaff_x25;
  
  while (lVar3 = FUN_03198ca0(param_1,param_2,param_3), lVar3 != 0) {
    FUN_033e9984();
    FUN_03418f00();
    while( true ) {
      lVar3 = *(long *)(unaff_x19 + 0x28);
      unaff_w22 = unaff_w22 + 1;
      if (lVar3 == 0) goto LAB_033e986c;
      if (*(int *)(lVar3 + 0x18) <= (int)unaff_w22) {
        FUN_03419818();
        if ((unaff_w20 >> 1 & 1) == 0) {
          FUN_033e99c8();
        }
        if ((*(long *)(unaff_x19 + 0x18) != 0 & unaff_w20) == 0) {
          if (unaff_x21 == (long *)0x0) goto LAB_033e986c;
        }
        else {
          if ((unaff_x21 == (long *)0x0) || (lVar3 = FUN_03418f00(), lVar3 == 0)) goto LAB_033e986c;
          FUN_03418f00(lVar3,*(undefined8 *)(unaff_x19 + 0x18),0);
        }
        (**(code **)(*unaff_x21 + 0x168))();
        return;
      }
      if (unaff_w22 != 0) {
        FUN_03418f00();
        lVar3 = *(long *)(unaff_x19 + 0x28);
        if (lVar3 == 0) goto LAB_033e986c;
      }
      lVar3 = FUN_03198ca0(lVar3,unaff_w22,*unaff_x25);
      if (lVar3 == 0) goto LAB_033e986c;
      if (*(long *)(lVar3 + 0x18) == 0) break;
      lVar3 = FUN_03419818();
      if ((((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar1 = FUN_03198ca0(*(long *)(unaff_x19 + 0x28),unaff_w22,*unaff_x25), lVar1 == 0)) ||
          (uVar2 = FUN_033e9984(), lVar3 == 0)) || (lVar3 = FUN_03418f00(lVar3,uVar2,0), lVar3 == 0)
         ) goto LAB_033e986c;
      FUN_03419818(lVar3,0x5d,0);
    }
    param_1 = *(long *)(unaff_x19 + 0x28);
    if (param_1 == 0) break;
    param_3 = *unaff_x25;
    param_2 = (ulong)unaff_w22;
  }
LAB_033e986c:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


