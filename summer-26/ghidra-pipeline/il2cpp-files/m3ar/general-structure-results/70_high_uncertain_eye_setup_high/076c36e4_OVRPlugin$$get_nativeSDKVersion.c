/*
FUNCTION_NAME: OVRPlugin$$get_nativeSDKVersion
ENTRY_POINT: 076c36e4
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRPlugin__get_nativeSDKVersion(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar11;
  undefined8 *unaff_x26;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
  puVar1 = PTR_DAT_08f671d8;
  plVar8 = (long *)FUN_040316d0(*unaff_x22);
  lVar9 = thunk_FUN_0406deb8(*unaff_x21);
  uVar13 = *(undefined8 *)puVar1;
  uVar15 = *unaff_x24;
  FUN_075273c0(lVar9,0);
  *(undefined8 *)(lVar9 + 0x10) = uVar13;
  *(undefined8 *)(lVar9 + 0x18) = uVar15;
  if (plVar8 == (long *)0x0) goto OVRPlugin__get_initialized;
  lVar10 = thunk_FUN_0406ddbc(lVar9,*(undefined8 *)(*plVar8 + 0x40));
  if (lVar10 != 0) {
    if ((int)plVar8[3] != 0) {
      plVar8[4] = lVar9;
      puVar1 = PTR_DAT_08f67248;
      lVar9 = thunk_FUN_0406deb8(*unaff_x21);
      uVar15 = *(undefined8 *)puVar1;
      uVar13 = *unaff_x26;
      FUN_075273c0(lVar9,0);
      *(undefined8 *)(lVar9 + 0x10) = uVar15;
      *(undefined8 *)(lVar9 + 0x18) = uVar13;
      lVar10 = thunk_FUN_0406ddbc(lVar9,*(undefined8 *)(*plVar8 + 0x40));
      if (lVar10 == 0) goto LAB_076c3bf4;
      if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
        plVar8[5] = lVar9;
        puVar1 = PTR_DAT_08f672a8;
        lVar9 = thunk_FUN_0406deb8(*unaff_x21);
        uVar13 = *(undefined8 *)puVar1;
        uVar15 = *unaff_x25;
        FUN_075273c0(lVar9,0);
        *(undefined8 *)(lVar9 + 0x10) = uVar13;
        *(undefined8 *)(lVar9 + 0x18) = uVar15;
        lVar10 = thunk_FUN_0406ddbc(lVar9,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar10 == 0) goto LAB_076c3bf4;
        if (2 < *(uint *)(plVar8 + 3)) {
          plVar8[6] = lVar9;
          puVar2 = PTR_DAT_08f71a08;
          puVar1 = PTR_DAT_08f67208;
          uVar13 = *unaff_x22;
          *(long **)(*(long *)(*unaff_x23 + 0xb8) + 8) = plVar8;
          plVar8 = (long *)FUN_040316d0(uVar13,3);
          lVar9 = thunk_FUN_0406deb8(*unaff_x21);
          uVar13 = *(undefined8 *)puVar1;
          uVar15 = *(undefined8 *)puVar2;
          FUN_075273c0(lVar9,0);
          *(undefined8 *)(lVar9 + 0x10) = uVar13;
          *(undefined8 *)(lVar9 + 0x18) = uVar15;
          if (plVar8 == (long *)0x0) goto OVRPlugin__get_initialized;
          lVar10 = thunk_FUN_0406ddbc(lVar9,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar10 == 0) goto LAB_076c3bf4;
          if ((int)plVar8[3] != 0) {
            plVar8[4] = lVar9;
            puVar1 = PTR_DAT_08f67240;
            lVar9 = thunk_FUN_0406deb8(*unaff_x21);
            uVar15 = *(undefined8 *)puVar1;
            uVar13 = *unaff_x25;
            FUN_075273c0(lVar9,0);
            *(undefined8 *)(lVar9 + 0x10) = uVar15;
            *(undefined8 *)(lVar9 + 0x18) = uVar13;
            lVar10 = thunk_FUN_0406ddbc(lVar9,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar10 == 0) goto LAB_076c3bf4;
            if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
              plVar8[5] = lVar9;
              puVar1 = PTR_DAT_08f67278;
              lVar9 = thunk_FUN_0406deb8(*unaff_x21);
              uVar15 = *(undefined8 *)puVar1;
              uVar13 = *unaff_x24;
              FUN_075273c0(lVar9,0);
              *(undefined8 *)(lVar9 + 0x10) = uVar15;
              *(undefined8 *)(lVar9 + 0x18) = uVar13;
              lVar10 = thunk_FUN_0406ddbc(lVar9,*(undefined8 *)(*plVar8 + 0x40));
              if (lVar10 == 0) goto LAB_076c3bf4;
              if (2 < *(uint *)(plVar8 + 3)) {
                plVar8[6] = lVar9;
                puVar3 = PTR_DAT_08fad890;
                puVar1 = PTR_DAT_08f671f0;
                uVar13 = *unaff_x22;
                *(long **)(*(long *)(*unaff_x23 + 0xb8) + 0x10) = plVar8;
                plVar8 = (long *)FUN_040316d0(uVar13,3);
                lVar9 = thunk_FUN_0406deb8(*unaff_x21);
                uVar13 = *(undefined8 *)puVar1;
                uVar15 = *(undefined8 *)puVar3;
                FUN_075273c0(lVar9,0);
                *(undefined8 *)(lVar9 + 0x10) = uVar13;
                *(undefined8 *)(lVar9 + 0x18) = uVar15;
                if (plVar8 == (long *)0x0) {
OVRPlugin__get_initialized:
                    /* WARNING: Subroutine does not return */
                  FUN_0403188c();
                }
                lVar10 = thunk_FUN_0406ddbc(lVar9,*(undefined8 *)(*plVar8 + 0x40));
                puVar1 = PTR_DAT_08f7f8a0;
                if (lVar10 == 0) goto LAB_076c3bf4;
                if ((int)plVar8[3] != 0) {
                  plVar8[4] = lVar9;
                  puVar3 = PTR_DAT_08fad868;
                  lVar9 = thunk_FUN_0406deb8(*unaff_x21);
                  uVar13 = *(undefined8 *)puVar1;
                  uVar15 = *(undefined8 *)puVar3;
                  FUN_075273c0(lVar9,0);
                  *(undefined8 *)(lVar9 + 0x10) = uVar13;
                  *(undefined8 *)(lVar9 + 0x18) = uVar15;
                  lVar10 = thunk_FUN_0406ddbc(lVar9,*(undefined8 *)(*plVar8 + 0x40));
                  if (lVar10 == 0) goto LAB_076c3bf4;
                  if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                    plVar8[5] = lVar9;
                    puVar1 = PTR_DAT_08f7c8d0;
                    lVar9 = thunk_FUN_0406deb8(*unaff_x21);
                    uVar13 = *(undefined8 *)puVar1;
                    uVar15 = *(undefined8 *)puVar2;
                    FUN_075273c0(lVar9,0);
                    *(undefined8 *)(lVar9 + 0x10) = uVar13;
                    *(undefined8 *)(lVar9 + 0x18) = uVar15;
                    lVar10 = thunk_FUN_0406ddbc(lVar9,*(undefined8 *)(*plVar8 + 0x40));
                    puVar1 = PTR_DAT_08fad828;
                    if (lVar10 == 0) goto LAB_076c3bf4;
                    if (2 < *(uint *)(plVar8 + 3)) {
                      plVar8[6] = lVar9;
                      puVar5 = PTR_DAT_08fad878;
                      puVar4 = PTR_DAT_08fad858;
                      puVar3 = PTR_DAT_08fad830;
                      puVar2 = PTR_DAT_08fad818;
                      uVar13 = *(undefined8 *)puVar1;
                      *(long **)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = plVar8;
                      lVar9 = thunk_FUN_0406deb8(uVar13);
                      FUN_06f67544(lVar9,*(undefined8 *)puVar2);
                      uVar11 = **(undefined8 **)(*unaff_x23 + 0xb8);
                      lVar10 = thunk_FUN_0406deb8(*(undefined8 *)puVar3);
                      uVar13 = *(undefined8 *)puVar5;
                      uVar15 = *(undefined8 *)puVar4;
                      FUN_075273c0(lVar10,0);
                      *(undefined8 *)(lVar10 + 0x10) = uVar13;
                      *(undefined8 *)(lVar10 + 0x18) = uVar15;
                      uVar13 = DAT_01a334e8;
                      *(undefined8 *)(lVar10 + 0x28) = uVar11;
                      *(undefined8 *)(lVar10 + 0x20) = uVar13;
                      puVar7 = PTR_DAT_08fad888;
                      puVar6 = PTR_DAT_08fad860;
                      puVar5 = PTR_DAT_08fad848;
                      puVar4 = PTR_DAT_08fad840;
                      puVar2 = PTR_DAT_08fad838;
                      puVar1 = PTR_DAT_08fad820;
                      if (lVar9 != 0) {
                        FUN_06f68258(lVar9,0,lVar10,*(undefined8 *)PTR_DAT_08fad820);
                        uVar11 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
                        lVar10 = thunk_FUN_0406deb8(*(undefined8 *)puVar3);
                        uVar12 = *(undefined8 *)puVar2;
                        uVar14 = *(undefined8 *)puVar7;
                        FUN_075273c0(lVar10,0);
                        uVar15 = *(undefined8 *)puVar1;
                        *(undefined8 *)(lVar10 + 0x10) = uVar12;
                        *(undefined8 *)(lVar10 + 0x18) = uVar14;
                        *(undefined8 *)(lVar10 + 0x20) = uVar13;
                        *(undefined8 *)(lVar10 + 0x28) = uVar11;
                        FUN_06f68258(lVar9,1,lVar10,uVar15);
                        uVar11 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
                        lVar10 = thunk_FUN_0406deb8(*(undefined8 *)puVar3);
                        uVar12 = *(undefined8 *)puVar5;
                        uVar14 = *(undefined8 *)puVar4;
                        FUN_075273c0(lVar10,0);
                        uVar13 = DAT_01a349e0;
                        uVar15 = *(undefined8 *)puVar1;
                        *(undefined8 *)(lVar10 + 0x10) = uVar12;
                        *(undefined8 *)(lVar10 + 0x18) = uVar14;
                        *(undefined8 *)(lVar10 + 0x20) = uVar13;
                        *(undefined8 *)(lVar10 + 0x28) = uVar11;
                        FUN_06f68258(lVar9,2,lVar10,uVar15);
                        uVar12 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
                        lVar10 = thunk_FUN_0406deb8(*(undefined8 *)puVar3);
                        uVar11 = *(undefined8 *)puVar6;
                        uVar14 = *(undefined8 *)PTR_DAT_08fad850;
                        FUN_075273c0(lVar10,0);
                        uVar13 = DAT_01a340a8;
                        uVar15 = *(undefined8 *)puVar1;
                        *(undefined8 *)(lVar10 + 0x10) = uVar11;
                        *(undefined8 *)(lVar10 + 0x18) = uVar14;
                        *(undefined8 *)(lVar10 + 0x20) = uVar13;
                        *(undefined8 *)(lVar10 + 0x28) = uVar12;
                        FUN_06f68258(lVar9,3,lVar10,uVar15);
                        *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = lVar9;
                        return;
                      }
                      goto OVRPlugin__get_initialized;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
LAB_076c3bf4:
  uVar13 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
  FUN_04031750(uVar13,0);
}


