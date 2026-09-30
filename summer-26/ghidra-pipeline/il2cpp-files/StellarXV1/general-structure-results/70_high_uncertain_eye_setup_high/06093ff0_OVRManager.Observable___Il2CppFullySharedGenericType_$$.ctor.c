/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 06093ff0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<__Il2CppFullySharedGenericType>___ctor(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined *puVar6;
  
  if (in_w8 == 0) {
    thunk_FUN_040d65a8();
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar4 = *unaff_x20;
    uVar5 = unaff_x20[1];
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    uVar3 = FUN_06dd7ee4(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x1e8));
    if ((uVar3 & 1) == 0) {
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_040b1acc();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_040b1acc();
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_040b1acc();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_040b1acc();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
      if (lVar1 == 0) goto LAB_060941c0;
      lVar2 = *(long *)(unaff_x19 + 0x20);
      uVar4 = *unaff_x20;
      uVar5 = unaff_x20[1];
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_040b1acc();
      }
      uVar3 = FUN_06dd7ee4(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x298));
      if ((uVar3 & 1) == 0) {
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_040b1acc();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_040b1acc();
        }
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_040b1acc();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_040b1acc();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
        if (lVar1 == 0) goto LAB_060941c0;
        lVar2 = *(long *)(unaff_x19 + 0x20);
        uVar4 = *unaff_x20;
        uVar5 = unaff_x20[1];
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_040b1acc();
        }
        uVar3 = FUN_06dd7ee4(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x2a0));
        if ((uVar3 & 1) == 0) {
          return;
        }
        thunk_FUN_040dedf8(PTR_DAT_09289148);
        uVar4 = thunk_FUN_040b4b34();
        puVar6 = PTR_DAT_092ba9f8;
      }
      else {
        thunk_FUN_040dedf8(PTR_DAT_09289148);
        uVar4 = thunk_FUN_040b4b34();
        puVar6 = PTR_DAT_092ba9f0;
      }
    }
    else {
      thunk_FUN_040dedf8(PTR_DAT_09289148);
      uVar4 = thunk_FUN_040b4b34();
      puVar6 = PTR_DAT_092ba9e0;
    }
    uVar5 = thunk_FUN_040dedf8(puVar6);
    uVar4 = FUN_074d57ec(uVar5,uVar4,0);
    thunk_FUN_040dedf8(PTR_DAT_0929cb88);
    uVar5 = thunk_FUN_040b4efc();
    FUN_07679464(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar5);
  }
LAB_060941c0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


