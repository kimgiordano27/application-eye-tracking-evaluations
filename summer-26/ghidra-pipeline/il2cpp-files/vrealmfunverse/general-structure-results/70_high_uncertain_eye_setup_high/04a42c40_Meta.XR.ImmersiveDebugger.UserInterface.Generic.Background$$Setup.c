/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Background$$Setup
ENTRY_POINT: 04a42c40
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Background__Setup(undefined1 param_1 [16])

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint in_w8;
  ulong in_x9;
  long in_x10;
  long in_x11;
  int in_w12;
  uint in_w13;
  long lVar6;
  undefined8 in_x16;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = param_1._8_8_;
  uVar7 = param_1._0_8_;
  while( true ) {
    lVar6 = unaff_x21 + (long)(int)in_w13 * (long)in_w12;
    *(undefined8 *)(lVar6 + 0x30) = in_x16;
    *(undefined8 *)(lVar6 + 0x28) = uVar8;
    *(undefined8 *)(lVar6 + 0x20) = uVar7;
    if (*(uint *)(unaff_x21 + 0x18) <= in_w8) break;
    if (unaff_x22 == 0) {
LAB_04a42d24:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar2 = *(int *)(in_x10 + (long)(int)in_w13 * (long)in_w12);
    iVar4 = 0;
    if (unaff_w20 != 0) {
      iVar4 = iVar2 / unaff_w20;
    }
    uVar3 = iVar2 - iVar4 * unaff_w20;
    if (*(uint *)(unaff_x22 + 0x18) <= uVar3) break;
    lVar6 = unaff_x22 + (long)(int)uVar3 * 4;
    lVar5 = (long)(int)in_w13;
    in_w13 = in_w8 + 1;
    *(int *)(in_x10 + lVar5 * in_w12 + 4) = *(int *)(lVar6 + 0x20) + -1;
    *(uint *)(lVar6 + 0x20) = in_w13;
    do {
      in_x9 = in_x9 + 1;
      in_x11 = in_x11 + 0x18;
      if ((long)*(int *)(unaff_x19 + 0x24) <= (long)in_x9) {
        *(uint *)(unaff_x19 + 0x24) = in_w13;
        *(long *)(unaff_x19 + 0x18) = unaff_x21;
        thunk_FUN_02bb0e9c();
        *(long *)(unaff_x19 + 0x10) = unaff_x22;
        thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10));
        *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
        return;
      }
      lVar6 = *(long *)(unaff_x19 + 0x18);
      if (lVar6 == 0) goto LAB_04a42d24;
      if (*(uint *)(lVar6 + 0x18) <= in_x9) goto LAB_04a42d20;
    } while (*(int *)(lVar6 + in_x11) < 0);
    if (unaff_x21 == 0) goto LAB_04a42d24;
    if (*(uint *)(unaff_x21 + 0x18) <= in_w13) break;
    puVar1 = (undefined8 *)(lVar6 + in_x11);
    in_x16 = puVar1[2];
    uVar8 = puVar1[1];
    uVar7 = *puVar1;
    in_w8 = in_w13;
  }
LAB_04a42d20:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


