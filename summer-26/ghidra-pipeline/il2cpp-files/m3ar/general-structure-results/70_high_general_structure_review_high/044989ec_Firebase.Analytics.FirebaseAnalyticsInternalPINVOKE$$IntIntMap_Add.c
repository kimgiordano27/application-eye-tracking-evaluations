/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$IntIntMap_Add
ENTRY_POINT: 044989ec
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__IntIntMap_Add(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined4 unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s14;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  FUN_04500ffc(unaff_s8);
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    uVar2 = FUN_085883f0(*(long *)(unaff_x20 + 0x18),0);
    uVar2 = FUN_0450c22c(unaff_s10 + unaff_s9,fStack000000000000000c + unaff_s9,
                         fStack0000000000000008 + unaff_s14,0,0x3f000000,uVar2,1,0,0);
    FUN_04d59a90(uVar2,5,*(undefined8 *)PTR_DAT_08f69728);
    FUN_0450c714();
    puVar1 = PTR_DAT_08f67918;
    thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f67918);
    FUN_044fb3a8();
    FUN_045116e0();
    FUN_04500ffc(DAT_01a2ee50);
    thunk_FUN_0406deb8(*(undefined8 *)puVar1);
    FUN_044fb3a8();
    FUN_045116e0();
    FUN_0446d3d4(0);
    puVar1 = PTR_DAT_08f7ec80;
    if (((*(long *)(unaff_x19 + 0x48) != 0) &&
        (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x50), lVar3 != 0)) &&
       (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) {
      plVar7 = *(long **)(lVar3 + 0x10);
      lVar3 = *(long *)PTR_DAT_08f7ec80;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar3 = *(long *)puVar1;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0xb8);
      lVar8 = puVar4[1];
      if (lVar8 == 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar2 = *puVar4;
        lVar8 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f7b7f8);
        FUN_0532c238(lVar8,uVar2,*(undefined8 *)PTR_DAT_08f7ec60,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar8;
      }
      if (plVar7 != (long *)0x0) {
        lVar3 = *plVar7;
        lVar9 = *(long *)PTR_DAT_08f7b800;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)(lVar9 + 0x20)) {
              lVar3 = lVar3 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
              goto LAB_04498be0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        lVar3 = FUN_0406ae20(plVar7);
LAB_04498be0:
        lVar3 = Crosstales_Common_Util_BaseHelper__FormatSecondsToHRF
                          (*(undefined8 *)(lVar3 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x04498c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 8))(plVar7,lVar8,lVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


