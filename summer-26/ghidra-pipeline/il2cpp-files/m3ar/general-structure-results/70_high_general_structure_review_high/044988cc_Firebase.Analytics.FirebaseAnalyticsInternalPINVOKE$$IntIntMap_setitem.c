/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$IntIntMap_setitem
ENTRY_POINT: 044988cc
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


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__IntIntMap_setitem(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *plVar10;
  long unaff_x20;
  long lVar11;
  ulong unaff_x21;
  long lVar12;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  thunk_FUN_0408f364();
  uVar4 = FUN_04c27dbc(unaff_s11);
  puVar3 = PTR_DAT_08f688f0;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0408f364(*(long *)puVar3);
  }
  uVar4 = FUN_044fe6f8(uVar4,0);
  if (((unaff_x21 & 1) != 0) && (*(char *)(unaff_x19 + 0xb4) == '\0')) {
    uVar5 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f67918);
    FUN_044fb3a8();
    FUN_045116e0(uVar4,uVar5,0);
    *(undefined1 *)(unaff_x19 + 0xb4) = 1;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    uVar5 = FUN_085883f0(*(long *)(unaff_x20 + 0x18),0);
    uVar2 = DAT_01a2ef34;
    fVar1 = DAT_01a2ebc0;
    uVar5 = FUN_04508e74(unaff_s11 + 0.0,unaff_s12 + 0.0,unaff_s13 + DAT_01a2ebc0,DAT_01a2ef34,uVar5
                         ,0,0);
    uVar5 = FUN_04d59a90(uVar5,5,*(undefined8 *)PTR_DAT_08f68a98);
    FUN_0450c714(uVar4,uVar5,0);
    FUN_04500ffc(uVar2,uVar4,0);
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      uVar5 = FUN_085883f0(*(long *)(unaff_x20 + 0x18),0);
      uVar5 = FUN_0450c22c(unaff_s10 + 0.0,fStack000000000000000c + 0.0,
                           fStack0000000000000008 + fVar1,0,0x3f000000,uVar5,1,0,0);
      uVar5 = FUN_04d59a90(uVar5,5,*(undefined8 *)PTR_DAT_08f69728);
      FUN_0450c714(uVar4,uVar5,0);
      puVar3 = PTR_DAT_08f67918;
      uVar5 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f67918);
      FUN_044fb3a8();
      FUN_045116e0(uVar4,uVar5,0);
      FUN_04500ffc(DAT_01a2ee50,uVar4,0);
      uVar5 = thunk_FUN_0406deb8(*(undefined8 *)puVar3);
      FUN_044fb3a8();
      FUN_045116e0(uVar4,uVar5,0);
      FUN_0446d3d4(0);
      puVar3 = PTR_DAT_08f7ec80;
      if (((*(long *)(unaff_x19 + 0x48) != 0) &&
          (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x50), lVar6 != 0)) &&
         (lVar6 = *(long *)(lVar6 + 0x40), lVar6 != 0)) {
        plVar10 = *(long **)(lVar6 + 0x10);
        lVar6 = *(long *)PTR_DAT_08f7ec80;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar6 = *(long *)puVar3;
        }
        puVar7 = *(undefined8 **)(lVar6 + 0xb8);
        lVar11 = puVar7[1];
        if (lVar11 == 0) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            puVar7 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar4 = *puVar7;
          lVar11 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f7b7f8);
          FUN_0532c238(lVar11,uVar4,*(undefined8 *)PTR_DAT_08f7ec60,0);
          *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar11;
        }
        if (plVar10 != (long *)0x0) {
          lVar6 = *plVar10;
          lVar12 = *(long *)PTR_DAT_08f7b800;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)(lVar12 + 0x20)) {
                lVar6 = lVar6 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_04498be0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          lVar6 = FUN_0406ae20(plVar10);
LAB_04498be0:
          lVar6 = Crosstales_Common_Util_BaseHelper__FormatSecondsToHRF
                            (*(undefined8 *)(lVar6 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x04498c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar6 + 8))(plVar10,lVar11,lVar6);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


