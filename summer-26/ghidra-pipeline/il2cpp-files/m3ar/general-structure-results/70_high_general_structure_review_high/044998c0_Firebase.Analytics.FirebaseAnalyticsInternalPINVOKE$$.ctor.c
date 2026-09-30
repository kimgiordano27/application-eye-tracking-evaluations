/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$.ctor
ENTRY_POINT: 044998c0
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE___ctor(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int in_w9;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x23;
  
  if (in_w9 == 0) {
    thunk_FUN_0408f364();
    param_1 = *(undefined8 **)(*unaff_x23 + 0xb8);
  }
  uVar5 = *param_1;
  uVar1 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f7b7f8);
  FUN_0532c238(uVar1,uVar5,*(undefined8 *)PTR_DAT_08f7ecb0,0);
  *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10) = uVar1;
  if (unaff_x20 != (long *)0x0) {
    lVar2 = *unaff_x20;
    lVar6 = *(long *)PTR_DAT_08f7b800;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)(lVar6 + 0x20)) {
          lVar2 = lVar2 + (long)(int)(*piVar4 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
          goto LAB_04499a44;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    lVar2 = FUN_0406ae20();
LAB_04499a44:
    lVar2 = Crosstales_Common_Util_BaseHelper__FormatSecondsToHRF(*(undefined8 *)(lVar2 + 8),lVar6);
    (**(code **)(lVar2 + 8))();
    lVar2 = *(long *)(unaff_x19 + 0x38);
    uVar1 = *(undefined8 *)PTR_DAT_08f7ddb8;
    if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar1 = FUN_074f3c94(uVar1,0);
    if (lVar2 != 0) {
      FUN_04431a04(lVar2,uVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


