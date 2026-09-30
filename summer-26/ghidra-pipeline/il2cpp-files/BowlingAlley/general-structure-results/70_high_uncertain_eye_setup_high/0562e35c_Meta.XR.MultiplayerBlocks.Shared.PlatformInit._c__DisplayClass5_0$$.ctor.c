/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlatformInit.<>c__DisplayClass5_0$$.ctor
ENTRY_POINT: 0562e35c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0___ctor(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int in_w9;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x25;
  uint unaff_w26;
  ulong unaff_x27;
  int unaff_w28;
  
  do {
    if (in_w9 == unaff_w21) {
      plVar11 = *(long **)(unaff_x19 + 0x30);
      if (plVar11 == (long *)0x0) goto LAB_0562e57c;
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
      uVar12 = *(undefined8 *)(unaff_x25 + (unaff_x27 & 0xffffffff) * 0x10 + 0x28);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_032934b8(lVar6);
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0562e3e0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac(plVar11,lVar6,0);
LAB_0562e3e0:
      uVar9 = (*(code *)*puVar4)(plVar11,uVar12);
      if ((uVar9 & 1) != 0) {
        return 0;
      }
      param_1 = *(undefined8 *)(unaff_x25 + 0x18);
    }
    uVar7 = (uint)param_1;
    if ((int)uVar7 <= unaff_w28) {
      thunk_FUN_032e1da0(PTR_DAT_07279578);
      uVar12 = thunk_FUN_032a56a0();
      uVar5 = thunk_FUN_032e1da0(PTR_DAT_07282490);
      FUN_0592371c(uVar12,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar12);
    }
    if (uVar7 <= (uint)unaff_x27)
    goto 
    Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0__<GetEntitlementInformation>g__CheckEntitlement_1
    ;
    uVar1 = *(uint *)(unaff_x25 + (unaff_x27 & 0xffffffff) * 0x10 + 0x24);
    unaff_x27 = (ulong)uVar1;
    unaff_w28 = unaff_w28 + 1;
    if ((int)uVar1 < 0) {
      uVar7 = *(uint *)(unaff_x19 + 0x28);
      if ((int)uVar7 < 0) {
        if (unaff_x25 == 0) goto LAB_0562e57c;
        uVar7 = *(uint *)(unaff_x19 + 0x24);
        if (uVar7 == *(uint *)(unaff_x25 + 0x18)) {
          FUN_0562e0b4();
          if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0562e57c;
          uVar7 = *(uint *)(unaff_x19 + 0x24);
          unaff_x25 = *(long *)(unaff_x19 + 0x18);
          iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
          *(uint *)(unaff_x19 + 0x24) = uVar7 + 1;
          if (unaff_x25 == 0) goto LAB_0562e57c;
          iVar3 = 0;
          if (iVar2 != 0) {
            iVar3 = unaff_w21 / iVar2;
          }
          unaff_w26 = unaff_w21 - iVar3 * iVar2;
        }
        else {
          *(uint *)(unaff_x19 + 0x24) = uVar7 + 1;
        }
      }
      else {
        if (unaff_x25 == 0) goto LAB_0562e57c;
        if (*(uint *)(unaff_x25 + 0x18) <= uVar7)
        goto 
        Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0__<GetEntitlementInformation>g__CheckEntitlement_1
        ;
        *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x25 + (ulong)uVar7 * 0x10 + 0x24);
      }
      if (uVar7 < *(uint *)(unaff_x25 + 0x18)) {
        lVar6 = unaff_x25 + (long)(int)uVar7 * 0x10;
        *(int *)(lVar6 + 0x20) = unaff_w21;
        *(undefined8 *)(lVar6 + 0x28) = unaff_x20;
        lVar6 = *(long *)(unaff_x19 + 0x10);
        if (lVar6 == 0) {
LAB_0562e57c:
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if ((unaff_w26 < *(uint *)(lVar6 + 0x18)) && (uVar7 < *(uint *)(unaff_x25 + 0x18))) {
          piVar10 = (int *)(lVar6 + (long)(int)unaff_w26 * 4 + 0x20);
          *(int *)(unaff_x25 + (long)(int)uVar7 * 0x10 + 0x24) = *piVar10 + -1;
          *piVar10 = uVar7 + 1;
          *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
          *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
          return 1;
        }
      }

      Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0__<GetEntitlementInformation>g__CheckEntitlement_1
      :
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    if (uVar7 <= uVar1)
    goto 
    Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0__<GetEntitlementInformation>g__CheckEntitlement_1
    ;
    in_w9 = *(int *)(unaff_x25 + unaff_x27 * 0x10 + 0x20);
  } while( true );
}


