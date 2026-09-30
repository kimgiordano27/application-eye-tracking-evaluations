/*
FUNCTION_NAME: OVRPlugin$$.cctor
ENTRY_POINT: 05332754
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin___cctor(long param_1,long *param_2,undefined4 *param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if ((DAT_06bbb37c & 1) == 0) {
    FUN_02f08768(System_Linq_Expressions_Interpreter_EnterTryCatchFinallyInstruction_TypeInfo);
    DAT_06bbb37c = 1;
  }
  puVar2 = System_Linq_Expressions_Interpreter_EnterTryCatchFinallyInstruction_TypeInfo;
  if (param_2 != (long *)0x0) {
    uVar8 = 0;
    iVar7 = 0;
    do {
      lVar4 = *param_2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_053327f4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0(param_2,*(long *)puVar2,0);
LAB_053327f4:
      (*(code *)*puVar3)((long)&stack0x00000000 + 4,param_2,iVar7,puVar3[1]);
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) break;
      uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
      if (uVar5 <= uVar8) {
LAB_05332910:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      *(undefined4 *)(lVar4 + uVar8 * 4 + 0x20) = uStack0000000000000010;
      if (uVar5 <= uVar8 + 1) goto LAB_05332910;
      *(undefined4 *)(lVar4 + (uVar8 + 1) * 4 + 0x20) = uStack0000000000000014;
      if (uVar5 <= uVar8 + 2) goto LAB_05332910;
      *(undefined4 *)(lVar4 + (uVar8 + 2) * 4 + 0x20) = uStack0000000000000018;
      if (uVar5 <= uVar8 + 3) goto LAB_05332910;
      *(undefined4 *)(lVar4 + (uVar8 + 3) * 4 + 0x20) = uStack000000000000001c;
      if (uVar5 <= uVar8 + 4) goto LAB_05332910;
      *(undefined4 *)(lVar4 + (uVar8 + 4) * 4 + 0x20) = in_stack_00000000._4_4_;
      if (uVar5 <= uVar8 + 5) goto LAB_05332910;
      uVar1 = uVar8 + 6;
      *(undefined4 *)(lVar4 + (uVar8 + 5) * 4 + 0x20) = uStack0000000000000008;
      if (uVar5 <= uVar1) goto LAB_05332910;
      iVar7 = iVar7 + 1;
      uVar8 = uVar8 + 7;
      *(undefined4 *)(lVar4 + uVar1 * 4 + 0x20) = uStack000000000000000c;
      if (iVar7 == 0x18) {
        *(undefined4 *)(param_1 + 0x18) = param_3[3];
        *(undefined4 *)(param_1 + 0x1c) = param_3[4];
        *(undefined4 *)(param_1 + 0x20) = param_3[5];
        *(undefined4 *)(param_1 + 0x24) = param_3[6];
        *(undefined4 *)(param_1 + 0x28) = *param_3;
        *(undefined4 *)(param_1 + 0x2c) = param_3[1];
        uVar9 = param_3[2];
        *(undefined4 *)(param_1 + 0x34) = param_4;
        *(undefined4 *)(param_1 + 0x30) = uVar9;
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


