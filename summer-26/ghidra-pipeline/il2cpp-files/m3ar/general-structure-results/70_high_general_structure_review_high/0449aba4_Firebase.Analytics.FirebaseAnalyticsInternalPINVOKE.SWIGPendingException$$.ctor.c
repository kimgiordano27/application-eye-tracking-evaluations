/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE.SWIGPendingException$$.ctor
ENTRY_POINT: 0449aba4
PROGRAM: m3ar-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE_SWIGPendingException___ctor(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  FUN_04431a04();
  puVar1 = PTR_DAT_08f7ed00;
  if (((*(long *)(unaff_x19 + 0x48) != 0) &&
      (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x50), lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x40), lVar2 != 0)) {
    plVar6 = *(long **)(lVar2 + 0x10);
    lVar2 = *(long *)PTR_DAT_08f7ed00;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar2 = *(long *)puVar1;
    }
    puVar3 = *(undefined8 **)(lVar2 + 0xb8);
    lVar7 = puVar3[1];
    if (lVar7 == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar3;
      lVar7 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f7b7f8);
      FUN_0532c238(lVar7,uVar8,*(undefined8 *)PTR_DAT_08f7ece8,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar7;
    }
    if (plVar6 != (long *)0x0) {
      lVar2 = *plVar6;
      lVar9 = *(long *)PTR_DAT_08f7b800;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar9 + 0x20)) {
            lVar2 = lVar2 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
            goto Firebase_AppOptions__get_DatabaseUrl;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      lVar2 = FUN_0406ae20(plVar6);
Firebase_AppOptions__get_DatabaseUrl:
      lVar2 = Crosstales_Common_Util_BaseHelper__FormatSecondsToHRF
                        (*(undefined8 *)(lVar2 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x0449aef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 8))(plVar6,lVar7,lVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


