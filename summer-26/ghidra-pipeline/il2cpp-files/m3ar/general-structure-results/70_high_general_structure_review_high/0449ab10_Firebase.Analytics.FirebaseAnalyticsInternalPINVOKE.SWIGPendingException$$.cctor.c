/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE.SWIGPendingException$$.cctor
ENTRY_POINT: 0449ab10
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE_SWIGPendingException___cctor(void)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08f7ed00);
  *(undefined1 *)(unaff_x20 + 0xc51) = 1;
  if (*(char *)(unaff_x19 + 0x50) != '\0') {
    return;
  }
  iVar1 = *(int *)(unaff_x19 + 0x6c);
  if (iVar1 == 1) {
    FUN_0449a69c();
    FUN_0446d3d4(0);
    puVar2 = PTR_DAT_08f7ed00;
    if (((*(long *)(unaff_x19 + 0x48) == 0) ||
        (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x50), lVar8 == 0)) ||
       (lVar8 = *(long *)(lVar8 + 0x40), lVar8 == 0)) {
LAB_0449aef8:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    plVar7 = *(long **)(lVar8 + 0x10);
    lVar8 = *(long *)PTR_DAT_08f7ed00;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar8 = *(long *)puVar2;
    }
    puVar4 = *(undefined8 **)(lVar8 + 0xb8);
    lVar9 = puVar4[3];
    if (lVar9 == 0) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar10 = *puVar4;
      lVar9 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f7b7f8);
      FUN_0532c238(lVar9,uVar10,*(undefined8 *)PTR_DAT_08f7ecf8,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar9;
    }
    if (plVar7 == (long *)0x0) goto LAB_0449aef8;
    lVar8 = *plVar7;
    lVar11 = *(long *)PTR_DAT_08f7b800;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uVar3 = (uint)*(ushort *)(lVar11 + 0x50);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar11 + 0x20)) goto LAB_0449aebc;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  else if (iVar1 == 2) {
    FUN_0449a69c();
    lVar8 = *(long *)(unaff_x19 + 0x38);
    uVar10 = *(undefined8 *)PTR_DAT_08f7ddb8;
    if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar10 = FUN_074f3c94(uVar10,0);
    if (lVar8 == 0) goto LAB_0449aef8;
    FUN_04431a04(lVar8,uVar10,0);
    puVar2 = PTR_DAT_08f7ed00;
    if (((*(long *)(unaff_x19 + 0x48) == 0) ||
        (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x50), lVar8 == 0)) ||
       (lVar8 = *(long *)(lVar8 + 0x40), lVar8 == 0)) goto LAB_0449aef8;
    plVar7 = *(long **)(lVar8 + 0x10);
    lVar8 = *(long *)PTR_DAT_08f7ed00;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar8 = *(long *)puVar2;
    }
    puVar4 = *(undefined8 **)(lVar8 + 0xb8);
    lVar9 = puVar4[2];
    if (lVar9 == 0) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar10 = *puVar4;
      lVar9 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f7b7f8);
      FUN_0532c238(lVar9,uVar10,*(undefined8 *)PTR_DAT_08f7ecf0,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar9;
    }
    if (plVar7 == (long *)0x0) goto LAB_0449aef8;
    lVar8 = *plVar7;
    lVar11 = *(long *)PTR_DAT_08f7b800;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uVar3 = (uint)*(ushort *)(lVar11 + 0x50);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar11 + 0x20)) goto LAB_0449aebc;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    FUN_0449a69c();
    lVar8 = *(long *)(unaff_x19 + 0x38);
    uVar10 = *(undefined8 *)PTR_DAT_08f7ddb8;
    if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar10 = FUN_074f3c94(uVar10,0);
    if (lVar8 == 0) goto LAB_0449aef8;
    FUN_04431a04(lVar8,uVar10,0);
    puVar2 = PTR_DAT_08f7ed00;
    if (((*(long *)(unaff_x19 + 0x48) == 0) ||
        (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x50), lVar8 == 0)) ||
       (lVar8 = *(long *)(lVar8 + 0x40), lVar8 == 0)) goto LAB_0449aef8;
    plVar7 = *(long **)(lVar8 + 0x10);
    lVar8 = *(long *)PTR_DAT_08f7ed00;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar8 = *(long *)puVar2;
    }
    puVar4 = *(undefined8 **)(lVar8 + 0xb8);
    lVar9 = puVar4[1];
    if (lVar9 == 0) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar10 = *puVar4;
      lVar9 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f7b7f8);
      FUN_0532c238(lVar9,uVar10,*(undefined8 *)PTR_DAT_08f7ece8,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar9;
    }
    if (plVar7 == (long *)0x0) goto LAB_0449aef8;
    lVar8 = *plVar7;
    lVar11 = *(long *)PTR_DAT_08f7b800;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uVar3 = (uint)*(ushort *)(lVar11 + 0x50);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar11 + 0x20)) goto LAB_0449aebc;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  lVar8 = FUN_0406ae20(plVar7);
Firebase_AppOptions__get_DatabaseUrl:
  lVar8 = Crosstales_Common_Util_BaseHelper__FormatSecondsToHRF(*(undefined8 *)(lVar8 + 8),lVar11);
                    /* WARNING: Could not recover jumptable at 0x0449aef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 8))(plVar7,lVar9,lVar8);
  return;
LAB_0449aebc:
  lVar8 = lVar8 + (long)(int)(*piVar6 + uVar3) * 0x10 + 0x138;
  goto Firebase_AppOptions__get_DatabaseUrl;
}


