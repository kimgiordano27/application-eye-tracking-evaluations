/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.get_IsSupported
ENTRY_POINT: 04a5f2bc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_get_IsSupported
               (void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  iVar2 = FUN_04c8d044();
  puVar1 = PTR_DAT_06312310;
  lVar7 = *unaff_x21;
  uVar9 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110);
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
  }
  uVar9 = FUN_04d8a7b0(uVar9,0);
  if (lVar7 != 0) {
    lVar7 = FUN_04c8ae78(lVar7,*(undefined8 *)PTR_DAT_06322688,uVar9,0);
    lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02b76218(lVar10);
    }
    if (lVar7 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_02b79548(lVar7,lVar10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(lVar7,lVar10);
      }
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    *(long *)(unaff_x20 + 0x30) = lVar4;
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02b76218(lVar10);
    }
    if (lVar7 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_02b79548(lVar7,lVar10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(lVar7,lVar10);
      }
    }
    thunk_FUN_02bb0e9c((long *)(unaff_x20 + 0x30),lVar4);
    *(undefined4 *)(unaff_x20 + 0x28) = 0xffffffff;
    if (iVar2 == 0) {
      *(undefined8 *)(unaff_x20 + 0x10) = 0;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x10),0);
    }
    else {
      uVar9 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313588,iVar2);
      *(undefined8 *)(unaff_x20 + 0x10) = uVar9;
      thunk_FUN_02bb0e9c();
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02b76218();
      }
      uVar9 = FUN_02b3c908(lVar7,iVar2);
      *(undefined8 *)(unaff_x20 + 0x18) = uVar9;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x18),uVar9);
      lVar7 = *(long *)(unaff_x20 + 0x40);
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar9 = FUN_04d8a7b0(uVar9,0);
      if (lVar7 == 0) goto LAB_04a5f578;
      lVar7 = FUN_04c8ae78(lVar7,*(undefined8 *)PTR_DAT_06322b98,uVar9,0);
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02b76218(lVar10);
      }
      if (lVar7 == 0) {
        thunk_FUN_02ba3594(PTR_DAT_06320988);
        uVar9 = thunk_FUN_02b79644();
        uVar5 = thunk_FUN_02ba3594(PTR_DAT_06322ba8);
        FUN_04c82410(uVar9,uVar5,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar9);
      }
      lVar4 = thunk_FUN_02b79548(lVar7,lVar10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(lVar7,lVar10);
      }
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar8 = 0;
        uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          FUN_04a60d4c();
          uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
    }
    if (*unaff_x21 != 0) {
      uVar3 = FUN_04c8d044(*unaff_x21,*(undefined8 *)PTR_DAT_06320978,0);
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      *(undefined4 *)(unaff_x20 + 0x38) = uVar3;
      thunk_FUN_02bb0e9c();
      return;
    }
  }
LAB_04a5f578:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


