/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$delete_Future_LongLong
ENTRY_POINT: 044959d0
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


uint Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__delete_Future_LongLong
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long lVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  
  FUN_0403162c(*(undefined8 *)(param_4 + 0xac0));
  FUN_0403162c(PTR_DAT_08f7eac8);
  *(undefined1 *)(unaff_x21 + 0xc14) = 1;
  lVar4 = thunk_FUN_0406deb8(*unaff_x22);
  FUN_075273c0(lVar4,0);
  if (lVar4 == 0) goto LAB_04495e80;
  *(undefined4 *)(lVar4 + 0x10) = unaff_w20;
  uVar3 = FUN_04495e8c();
  if ((uVar3 & 1) == 0) goto LAB_04495e60;
  iVar1 = *(int *)(lVar4 + 0x10);
  if (iVar1 < 5) {
    if (1 < iVar1) {
      if (iVar1 == 2) {
        if (*(int *)(*(long *)PTR_DAT_08f71f30 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar5 = FUN_04442348(0);
        if (lVar5 == 0) goto LAB_04495e80;
        lVar5 = *(long *)(lVar5 + 0x220);
        puVar2 = (undefined8 *)PTR_DAT_08f7eab0;
      }
      else if (iVar1 == 3) {
        if (*(int *)(*(long *)PTR_DAT_08f71f30 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar5 = FUN_04442348(0);
        if (lVar5 == 0) goto LAB_04495e80;
        lVar5 = *(long *)(lVar5 + 0x220);
        puVar2 = (undefined8 *)PTR_DAT_08f7eac8;
      }
      else {
        if (iVar1 != 4) goto LAB_04495d04;
        if (*(int *)(*(long *)PTR_DAT_08f71f30 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar5 = FUN_04442348(0);
        if (lVar5 == 0) goto LAB_04495e80;
        lVar5 = *(long *)(lVar5 + 0x220);
        puVar2 = (undefined8 *)PTR_DAT_08f7eab8;
      }
      goto joined_r0x04495bd0;
    }
    if (iVar1 == 0) {
      if (*(int *)(*(long *)PTR_DAT_08f71f30 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar5 = FUN_04442348(0);
      if (lVar5 == 0) goto LAB_04495e80;
      lVar5 = *(long *)(lVar5 + 0x220);
      puVar2 = (undefined8 *)PTR_DAT_08f7ea88;
      goto joined_r0x04495bd0;
    }
    if (iVar1 == 1) {
      if (*(int *)(*(long *)PTR_DAT_08f71f30 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar5 = FUN_04442348(0);
      if (lVar5 == 0) goto LAB_04495e80;
      lVar5 = *(long *)(lVar5 + 0x220);
      puVar2 = (undefined8 *)PTR_DAT_08f7ea78;
      goto joined_r0x04495bd0;
    }
  }
  else {
    if (iVar1 < 8) {
      if (iVar1 == 5) {
        if (*(int *)(*(long *)PTR_DAT_08f71f30 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar5 = FUN_04442348(0);
        if (lVar5 == 0) goto LAB_04495e80;
        lVar5 = *(long *)(lVar5 + 0x220);
        puVar2 = (undefined8 *)PTR_DAT_08f7eaa8;
      }
      else if (iVar1 == 6) {
        if (*(int *)(*(long *)PTR_DAT_08f71f30 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar5 = FUN_04442348(0);
        if (lVar5 == 0) goto LAB_04495e80;
        lVar5 = *(long *)(lVar5 + 0x220);
        puVar2 = (undefined8 *)PTR_DAT_08f7eac0;
      }
      else {
        if (iVar1 != 7) goto LAB_04495d04;
        if (*(int *)(*(long *)PTR_DAT_08f71f30 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar5 = FUN_04442348(0);
        if (lVar5 == 0) goto LAB_04495e80;
        lVar5 = *(long *)(lVar5 + 0x220);
        puVar2 = (undefined8 *)PTR_DAT_08f7ea80;
      }
    }
    else if (iVar1 == 8) {
      if (*(int *)(*(long *)PTR_DAT_08f71f30 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar5 = FUN_04442348(0);
      if (lVar5 == 0) goto LAB_04495e80;
      lVar5 = *(long *)(lVar5 + 0x220);
      puVar2 = (undefined8 *)PTR_DAT_08f7ea90;
    }
    else if (iVar1 == 9) {
      if (*(int *)(*(long *)PTR_DAT_08f71f30 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar5 = FUN_04442348(0);
      if (lVar5 == 0) goto LAB_04495e80;
      lVar5 = *(long *)(lVar5 + 0x220);
      puVar2 = (undefined8 *)PTR_DAT_08f7ea98;
    }
    else {
      if (iVar1 != 10) goto LAB_04495d04;
      if (*(int *)(*(long *)PTR_DAT_08f71f30 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar5 = FUN_04442348(0);
      if (lVar5 == 0) goto LAB_04495e80;
      lVar5 = *(long *)(lVar5 + 0x220);
      puVar2 = (undefined8 *)PTR_DAT_08f7eaa0;
    }
joined_r0x04495bd0:
    if (lVar5 == 0) goto LAB_04495e80;
    FUN_044aed1c(lVar5,*puVar2,0);
  }
LAB_04495d04:
  lVar5 = unaff_x19[0x16];
  uVar6 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f7ea68);
  FUN_05ce3064(uVar6,lVar4,*(undefined8 *)PTR_DAT_08f7ea70,0);
  if (lVar5 != 0) {
    auVar9 = FUN_05666b84(lVar5,uVar6,*(undefined8 *)PTR_DAT_08f7ea58);
    lVar4 = auVar9._8_8_;
    if ((unaff_x19[9] != 0) && (lVar4 != 0)) {
      lVar7 = *(long *)(unaff_x19[9] + 0x50);
      lVar5 = FUN_085883f0(lVar4,0);
      if (lVar5 != 0) {
        uVar8 = FUN_08598884(lVar5,0);
        (**(code **)(*unaff_x19 + 0x238))();
        if (lVar7 != 0) {
          FUN_0445597c(uVar8,param_2,param_3,lVar7);
          lVar5 = FUN_04b60dd0(lVar4,*(undefined8 *)PTR_DAT_08f70b20);
          if (lVar5 != 0) {
            FUN_0850d428(lVar5,*(undefined8 *)PTR_DAT_08f7c640,0);
            if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            UnityEngine_Tilemaps_Tilemap__set_tileAnchor(0x40000000,lVar4,0);
            if ((unaff_x19[0x16] != 0) &&
               (FUN_05667a00(unaff_x19[0x16],auVar9._0_8_,lVar4,*(undefined8 *)PTR_DAT_08f7ea60),
               unaff_x19[0x16] != 0)) {
              FUN_0446c0a4();
LAB_04495e60:
              return uVar3 & 1;
            }
          }
        }
      }
    }
  }
LAB_04495e80:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


