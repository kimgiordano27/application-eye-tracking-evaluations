/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$SetConsentWithInts
ENTRY_POINT: 04499844
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__SetConsentWithInts(void)

{
  ushort uVar1;
  undefined *puVar2;
  char in_NG;
  char in_OV;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  if ((in_NG != in_OV) || (*(char *)(unaff_x19 + 0xb0) != '\0')) {
    return;
  }
  FUN_0446c0a4();
  puVar2 = PTR_DAT_08f7eca0;
  lVar3 = *(long *)(unaff_x19 + 0x48);
  if (*(int *)(unaff_x19 + 0x6c) < 1) {
    if (((lVar3 == 0) || (*(long *)(lVar3 + 0x50) == 0)) ||
       (lVar3 = *(long *)(*(long *)(lVar3 + 0x50) + 0x40), lVar3 == 0)) goto LAB_04499ab8;
    plVar7 = *(long **)(lVar3 + 0x10);
    lVar3 = *(long *)PTR_DAT_08f7eca0;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar3 = *(long *)puVar2;
    }
    puVar4 = *(undefined8 **)(lVar3 + 0xb8);
    lVar8 = puVar4[1];
    if (lVar8 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar9 = *puVar4;
      lVar8 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f7b7f8);
      FUN_0532c238(lVar8,uVar9,*(undefined8 *)PTR_DAT_08f7eca8,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar8;
    }
    if (plVar7 == (long *)0x0) goto LAB_04499ab8;
    lVar3 = *plVar7;
    lVar10 = *(long *)PTR_DAT_08f7b800;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    uVar1 = *(ushort *)(lVar10 + 0x50);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar10 + 0x20)) goto LAB_04499a34;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  else {
    if (((lVar3 == 0) || (*(long *)(lVar3 + 0x50) == 0)) ||
       (lVar3 = *(long *)(*(long *)(lVar3 + 0x50) + 0x40), lVar3 == 0)) goto LAB_04499ab8;
    plVar7 = *(long **)(lVar3 + 0x10);
    lVar3 = *(long *)PTR_DAT_08f7eca0;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar3 = *(long *)puVar2;
    }
    puVar4 = *(undefined8 **)(lVar3 + 0xb8);
    lVar8 = puVar4[2];
    if (lVar8 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar9 = *puVar4;
      lVar8 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f7b7f8);
      FUN_0532c238(lVar8,uVar9,*(undefined8 *)PTR_DAT_08f7ecb0,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar8;
    }
    if (plVar7 == (long *)0x0) goto LAB_04499ab8;
    lVar3 = *plVar7;
    lVar10 = *(long *)PTR_DAT_08f7b800;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    uVar1 = *(ushort *)(lVar10 + 0x50);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar10 + 0x20)) goto LAB_04499a34;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  lVar3 = FUN_0406ae20(plVar7);
LAB_04499a44:
  lVar3 = Crosstales_Common_Util_BaseHelper__FormatSecondsToHRF(*(undefined8 *)(lVar3 + 8),lVar10);
  (**(code **)(lVar3 + 8))(plVar7,lVar8,lVar3);
  lVar3 = *(long *)(unaff_x19 + 0x38);
  uVar9 = *(undefined8 *)PTR_DAT_08f7ddb8;
  if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar9 = FUN_074f3c94(uVar9,0);
  if (lVar3 != 0) {
    FUN_04431a04(lVar3,uVar9,0);
    return;
  }
LAB_04499ab8:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
LAB_04499a34:
  lVar3 = lVar3 + (long)(int)(*piVar6 + (uint)uVar1) * 0x10 + 0x138;
  goto LAB_04499a44;
}


