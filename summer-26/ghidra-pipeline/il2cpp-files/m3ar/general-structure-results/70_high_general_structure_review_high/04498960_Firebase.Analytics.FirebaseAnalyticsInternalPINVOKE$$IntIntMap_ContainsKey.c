/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$IntIntMap_ContainsKey
ENTRY_POINT: 04498960
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__IntIntMap_ContainsKey
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  FUN_044fb3a8(param_2,param_3,**(undefined8 **)(param_1 + 0xc68));
  FUN_045116e0();
  *(undefined1 *)(unaff_x19 + 0xb4) = 1;
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    uVar4 = FUN_085883f0(*(long *)(unaff_x20 + 0x18),0);
    uVar2 = DAT_01a2ef34;
    fVar1 = DAT_01a2ebc0;
    uVar4 = FUN_04508e74(unaff_s11 + 0.0,unaff_s12 + 0.0,unaff_s13 + DAT_01a2ebc0,DAT_01a2ef34,uVar4
                         ,0,0);
    FUN_04d59a90(uVar4,5,*(undefined8 *)PTR_DAT_08f68a98);
    FUN_0450c714();
    FUN_04500ffc(uVar2);
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      uVar4 = FUN_085883f0(*(long *)(unaff_x20 + 0x18),0);
      uVar4 = FUN_0450c22c(unaff_s10 + 0.0,fStack000000000000000c + 0.0,
                           fStack0000000000000008 + fVar1,0,0x3f000000,uVar4,1,0,0);
      FUN_04d59a90(uVar4,5,*(undefined8 *)PTR_DAT_08f69728);
      FUN_0450c714();
      puVar3 = PTR_DAT_08f67918;
      thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f67918);
      FUN_044fb3a8();
      FUN_045116e0();
      FUN_04500ffc(DAT_01a2ee50);
      thunk_FUN_0406deb8(*(undefined8 *)puVar3);
      FUN_044fb3a8();
      FUN_045116e0();
      FUN_0446d3d4(0);
      puVar3 = PTR_DAT_08f7ec80;
      if (((*(long *)(unaff_x19 + 0x48) != 0) &&
          (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x50), lVar5 != 0)) &&
         (lVar5 = *(long *)(lVar5 + 0x40), lVar5 != 0)) {
        plVar9 = *(long **)(lVar5 + 0x10);
        lVar5 = *(long *)PTR_DAT_08f7ec80;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar5 = *(long *)puVar3;
        }
        puVar6 = *(undefined8 **)(lVar5 + 0xb8);
        lVar10 = puVar6[1];
        if (lVar10 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            puVar6 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar4 = *puVar6;
          lVar10 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f7b7f8);
          FUN_0532c238(lVar10,uVar4,*(undefined8 *)PTR_DAT_08f7ec60,0);
          *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar10;
        }
        if (plVar9 != (long *)0x0) {
          lVar5 = *plVar9;
          lVar11 = *(long *)PTR_DAT_08f7b800;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)(lVar11 + 0x20)) {
                lVar5 = lVar5 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_04498be0;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          lVar5 = FUN_0406ae20(plVar9);
LAB_04498be0:
          lVar5 = Crosstales_Common_Util_BaseHelper__FormatSecondsToHRF
                            (*(undefined8 *)(lVar5 + 8),lVar11);
                    /* WARNING: Could not recover jumptable at 0x04498c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 8))(plVar9,lVar10,lVar5);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


