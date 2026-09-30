/*
FUNCTION_NAME: OVRPlugin$$IsSuccess
ENTRY_POINT: 076c3980
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsSuccess(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar10;
  long *unaff_x23;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *unaff_x26;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar10 = *unaff_x22;
  uVar11 = *unaff_x20;
  FUN_075273c0(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = uVar10;
  *(undefined8 *)(param_1 + 0x18) = uVar11;
  lVar8 = thunk_FUN_0406ddbc(param_1,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar8 != 0) {
    if ((*(uint *)(unaff_x19 + 3) & 0xfffffffe) != 0) {
      unaff_x19[5] = param_1;
      puVar1 = PTR_DAT_08f7c8d0;
      lVar8 = thunk_FUN_0406deb8(*unaff_x21);
      uVar10 = *(undefined8 *)puVar1;
      uVar11 = *unaff_x26;
      FUN_075273c0(lVar8,0);
      *(undefined8 *)(lVar8 + 0x10) = uVar10;
      *(undefined8 *)(lVar8 + 0x18) = uVar11;
      lVar9 = thunk_FUN_0406ddbc(lVar8,*(undefined8 *)(*unaff_x19 + 0x40));
      puVar1 = PTR_DAT_08fad828;
      if (lVar9 == 0) goto LAB_076c3bf4;
      if (2 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[6] = lVar8;
        puVar5 = PTR_DAT_08fad878;
        puVar4 = PTR_DAT_08fad858;
        puVar3 = PTR_DAT_08fad830;
        puVar2 = PTR_DAT_08fad818;
        uVar10 = *(undefined8 *)puVar1;
        *(long **)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = unaff_x19;
        lVar8 = thunk_FUN_0406deb8(uVar10);
        FUN_06f67544(lVar8,*(undefined8 *)puVar2);
        uVar12 = **(undefined8 **)(*unaff_x23 + 0xb8);
        lVar9 = thunk_FUN_0406deb8(*(undefined8 *)puVar3);
        uVar10 = *(undefined8 *)puVar5;
        uVar11 = *(undefined8 *)puVar4;
        FUN_075273c0(lVar9,0);
        *(undefined8 *)(lVar9 + 0x10) = uVar10;
        *(undefined8 *)(lVar9 + 0x18) = uVar11;
        uVar10 = DAT_01a334e8;
        *(undefined8 *)(lVar9 + 0x28) = uVar12;
        *(undefined8 *)(lVar9 + 0x20) = uVar10;
        puVar7 = PTR_DAT_08fad888;
        puVar6 = PTR_DAT_08fad860;
        puVar5 = PTR_DAT_08fad848;
        puVar4 = PTR_DAT_08fad840;
        puVar2 = PTR_DAT_08fad838;
        puVar1 = PTR_DAT_08fad820;
        if (lVar8 != 0) {
          FUN_06f68258(lVar8,0,lVar9,*(undefined8 *)PTR_DAT_08fad820);
          uVar12 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
          lVar9 = thunk_FUN_0406deb8(*(undefined8 *)puVar3);
          uVar13 = *(undefined8 *)puVar2;
          uVar14 = *(undefined8 *)puVar7;
          FUN_075273c0(lVar9,0);
          uVar11 = *(undefined8 *)puVar1;
          *(undefined8 *)(lVar9 + 0x10) = uVar13;
          *(undefined8 *)(lVar9 + 0x18) = uVar14;
          *(undefined8 *)(lVar9 + 0x20) = uVar10;
          *(undefined8 *)(lVar9 + 0x28) = uVar12;
          FUN_06f68258(lVar8,1,lVar9,uVar11);
          uVar12 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
          lVar9 = thunk_FUN_0406deb8(*(undefined8 *)puVar3);
          uVar13 = *(undefined8 *)puVar5;
          uVar14 = *(undefined8 *)puVar4;
          FUN_075273c0(lVar9,0);
          uVar10 = DAT_01a349e0;
          uVar11 = *(undefined8 *)puVar1;
          *(undefined8 *)(lVar9 + 0x10) = uVar13;
          *(undefined8 *)(lVar9 + 0x18) = uVar14;
          *(undefined8 *)(lVar9 + 0x20) = uVar10;
          *(undefined8 *)(lVar9 + 0x28) = uVar12;
          FUN_06f68258(lVar8,2,lVar9,uVar11);
          uVar13 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
          lVar9 = thunk_FUN_0406deb8(*(undefined8 *)puVar3);
          uVar12 = *(undefined8 *)puVar6;
          uVar14 = *(undefined8 *)PTR_DAT_08fad850;
          FUN_075273c0(lVar9,0);
          uVar10 = DAT_01a340a8;
          uVar11 = *(undefined8 *)puVar1;
          *(undefined8 *)(lVar9 + 0x10) = uVar12;
          *(undefined8 *)(lVar9 + 0x18) = uVar14;
          *(undefined8 *)(lVar9 + 0x20) = uVar10;
          *(undefined8 *)(lVar9 + 0x28) = uVar13;
          FUN_06f68258(lVar8,3,lVar9,uVar11);
          *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = lVar8;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
LAB_076c3bf4:
  uVar10 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
  FUN_04031750(uVar10,0);
}


