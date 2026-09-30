/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlatformInit.<>c__DisplayClass5_0$$<GetEntitlementInformation>g__InitializeComplete|0
ENTRY_POINT: 072f276c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0__<GetEntitlementInformation>g__InitializeComplete_0
               (void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  plVar7 = *(long **)(unaff_x21 + 0x60);
  lVar1 = FUN_04077674(*(undefined8 *)PTR_DAT_09287040,3);
  if (lVar1 == 0) {
LAB_072f2a90:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((unaff_x22 != 0) && (lVar2 = thunk_FUN_040b4e00(), lVar2 == 0)) {
LAB_072f2a98:
    uVar6 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar6,0);
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(long *)(lVar1 + 0x20) = unaff_x22;
    thunk_FUN_040ec700();
    if ((unaff_x19 != 0) && (lVar2 = thunk_FUN_040b4e00(), lVar2 == 0)) goto LAB_072f2a98;
    if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
      *(long *)(lVar1 + 0x28) = unaff_x19;
      thunk_FUN_040ec700();
      if ((unaff_x23 != 0) && (lVar2 = thunk_FUN_040b4e00(), lVar2 == 0)) goto LAB_072f2a98;
      if (2 < *(uint *)(lVar1 + 0x18)) {
        *(long *)(lVar1 + 0x30) = unaff_x23;
        thunk_FUN_040ec700();
        if (plVar7 != (long *)0x0) {
          lVar2 = *plVar7;
          uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
          uVar6 = *(undefined8 *)PTR_DAT_092c48d0;
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092b9200) {
                puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 0xc) * 0x10 + 0x138);
                goto LAB_072f28c0;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092b9200,0xc);
LAB_072f28c0:
          (*(code *)*puVar3)(plVar7,uVar6,lVar1,puVar3[1]);
          return;
        }
        goto LAB_072f2a90;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


