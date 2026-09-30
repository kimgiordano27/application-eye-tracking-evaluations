/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$OnDestroy
ENTRY_POINT: 04abfd5c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__OnDestroy
               (ushort *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  int *unaff_x22;
  int unaff_w24;
  
  do {
    if ((*param_1 & 1) == 0) {
      param_3 = FUN_02b76218(param_3);
    }
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_3) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04abfdb8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c();
LAB_04abfdb8:
    uVar1 = (*(code *)*puVar2)();
    if (((uVar1 & 1) != 0) || (unaff_w24 = unaff_w24 + 1, *unaff_x22 <= unaff_w24)) {
      return uVar1 & 1;
    }
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    FUN_04abeb98();
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    param_3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xe0);
    param_1 = (ushort *)(param_3 + 0x135);
  } while( true );
}


