/*
FUNCTION_NAME: OVRPlugin$$SetEyeBufferSharpenType
ENTRY_POINT: 051cbbec
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetEyeBufferSharpenType(ulong param_1,long param_2,long *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 unaff_w19;
  undefined4 *unaff_x20;
  int iVar7;
  long unaff_x23;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608ee0);
    *(undefined1 *)(unaff_x23 + 0x44c) = 1;
  }
  puVar2 = PTR_DAT_06608ee0;
  if (param_3 != (long *)0x0) {
    uVar8 = 0;
    iVar7 = 0;
    do {
      lVar4 = *param_3;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_051cbc6c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(param_3,*(long *)puVar2,0);
LAB_051cbc6c:
      (*(code *)*puVar3)(param_3,iVar7,puVar3[1]);
      lVar4 = *(long *)(param_2 + 0x10);
      if (lVar4 == 0) break;
      uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
      if (uVar5 <= uVar8) {
LAB_051cbd88:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      *(undefined4 *)(lVar4 + uVar8 * 4 + 0x20) = uStack000000000000000c;
      if (uVar5 <= uVar8 + 1) goto LAB_051cbd88;
      *(undefined4 *)(lVar4 + (uVar8 + 1) * 4 + 0x20) = uStack0000000000000010;
      if (uVar5 <= uVar8 + 2) goto LAB_051cbd88;
      *(undefined4 *)(lVar4 + (uVar8 + 2) * 4 + 0x20) = uStack0000000000000014;
      if (uVar5 <= uVar8 + 3) goto LAB_051cbd88;
      *(undefined4 *)(lVar4 + (uVar8 + 3) * 4 + 0x20) = in_stack_00000018;
      if (uVar5 <= uVar8 + 4) goto LAB_051cbd88;
      *(undefined4 *)(lVar4 + (uVar8 + 4) * 4 + 0x20) = uStack0000000000000000;
      if (uVar5 <= uVar8 + 5) goto LAB_051cbd88;
      uVar1 = uVar8 + 6;
      *(undefined4 *)(lVar4 + (uVar8 + 5) * 4 + 0x20) = uStack0000000000000004;
      if (uVar5 <= uVar1) goto LAB_051cbd88;
      iVar7 = iVar7 + 1;
      uVar8 = uVar8 + 7;
      *(undefined4 *)(lVar4 + uVar1 * 4 + 0x20) = uStack0000000000000008;
      if (iVar7 == 0x18) {
        *(undefined4 *)(param_2 + 0x18) = unaff_x20[3];
        *(undefined4 *)(param_2 + 0x1c) = unaff_x20[4];
        *(undefined4 *)(param_2 + 0x20) = unaff_x20[5];
        *(undefined4 *)(param_2 + 0x24) = unaff_x20[6];
        *(undefined4 *)(param_2 + 0x28) = *unaff_x20;
        *(undefined4 *)(param_2 + 0x2c) = unaff_x20[1];
        uVar9 = unaff_x20[2];
        *(undefined4 *)(param_2 + 0x34) = unaff_w19;
        *(undefined4 *)(param_2 + 0x30) = uVar9;
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


