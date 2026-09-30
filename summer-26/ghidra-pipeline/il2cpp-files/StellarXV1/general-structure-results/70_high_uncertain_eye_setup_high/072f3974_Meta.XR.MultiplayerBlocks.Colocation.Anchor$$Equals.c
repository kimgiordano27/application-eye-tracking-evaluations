/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Anchor$$Equals
ENTRY_POINT: 072f3974
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


void Meta_XR_MultiplayerBlocks_Colocation_Anchor__Equals(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  
  lVar1 = thunk_FUN_040b4e00();
  if (lVar1 != 0) {
    if (*(int *)(unaff_x24 + 0x18) != 0) {
      *(undefined8 *)(unaff_x24 + 0x20) = unaff_x25;
      thunk_FUN_040ec700();
      if ((unaff_x23 != 0) && (lVar1 = thunk_FUN_040b4e00(), lVar1 == 0)) goto LAB_072f3b08;
      if ((*(uint *)(unaff_x24 + 0x18) & 0xfffffffe) != 0) {
        *(long *)(unaff_x24 + 0x28) = unaff_x23;
        thunk_FUN_040ec700();
        if ((unaff_x20 != 0) && (lVar1 = thunk_FUN_040b4e00(), lVar1 == 0)) goto LAB_072f3b08;
        if (2 < *(uint *)(unaff_x24 + 0x18)) {
          *(long *)(unaff_x24 + 0x30) = unaff_x20;
          thunk_FUN_040ec700();
          if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar1 = *unaff_x22;
          uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092b9200) {
                puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 0xc) * 0x10 + 0x138);
                goto LAB_072f3ab4;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined8 *)FUN_040b1e00();
LAB_072f3ab4:
          (*(code *)*puVar2)();
          lVar1 = *(long *)(unaff_x21 + 0x90);
          if (lVar1 != 0) {
            (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
          }
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_072f3b08:
  uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar3,0);
}


