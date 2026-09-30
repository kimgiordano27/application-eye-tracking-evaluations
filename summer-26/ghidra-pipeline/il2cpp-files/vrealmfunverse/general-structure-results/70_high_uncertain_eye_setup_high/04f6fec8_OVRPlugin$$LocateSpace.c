/*
FUNCTION_NAME: OVRPlugin$$LocateSpace
ENTRY_POINT: 04f6fec8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__LocateSpace
               (long param_1,undefined4 param_2,ulong param_3,ulong param_4,float param_5)

{
  float *pfVar1;
  uint uVar2;
  ulong uVar3;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  float *unaff_x24;
  long unaff_x25;
  undefined1 unaff_w26;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  undefined8 in_stack_00000000;
  
  while( true ) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(int *)(param_1 + 0x10) = (int)param_3;
    *(int *)(param_1 + 0x14) = (int)param_4;
    *(float *)(param_1 + 0x18) = param_5;
    lVar4 = *unaff_x20;
    if (lVar4 == 0) break;
    uVar2 = *(uint *)(lVar4 + 0x18);
    if (unaff_x25 == 0x20) {
      fVar8 = 0.0;
      if ((ulong)uVar2 == 0) goto LAB_04f6ff98;
    }
    else {
      if ((uVar2 <= unaff_x23) || (uVar2 <= (int)unaff_x23 - 1U)) goto LAB_04f6ff98;
      fVar8 = *(float *)(lVar4 + unaff_x25 + -4);
      if (*(char *)(unaff_x22 + 0xd9c) == '\0') {
        FUN_02b3c81c();
        *(undefined1 *)(unaff_x22 + 0xd9c) = unaff_w26;
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      fVar5 = (float)((ulong)in_stack_00000000 >> 0x20);
      fVar8 = SQRT((float)in_stack_00000000 * (float)in_stack_00000000 + fVar5 * fVar5 +
                   unaff_s8 * unaff_s8) / unaff_s9 + fVar8;
    }
    uVar3 = *(ulong *)(unaff_x19 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    lVar4 = lVar4 + unaff_x25;
    unaff_x25 = unaff_x25 + 0x20;
    pfVar1 = unaff_x24 + 3;
    *(float *)(lVar4 + 0x1c) = fVar8;
    if ((long)(int)(uint)uVar3 <= (long)unaff_x23) {
      return;
    }
    if (unaff_x25 == 0x20) {
      if ((uint)uVar3 < 2) goto LAB_04f6ff98;
      fVar8 = *(float *)(unaff_x19 + 0x34);
      uVar6 = *(undefined8 *)(unaff_x19 + 0x2c);
      uVar7 = *(undefined8 *)(unaff_x19 + 0x20);
      param_5 = *(float *)(unaff_x19 + 0x28);
    }
    else {
      if ((uVar3 & 0xffffffff) <= unaff_x23) goto LAB_04f6ff98;
      fVar8 = *pfVar1;
      uVar6 = *(undefined8 *)(unaff_x24 + 1);
      uVar7 = *(undefined8 *)(unaff_x24 + -2);
      param_5 = *unaff_x24;
    }
    fVar5 = (float)((ulong)uVar6 >> 0x20) - (float)((ulong)uVar7 >> 0x20);
    in_stack_00000000 = CONCAT44(fVar5,(float)uVar6 - (float)uVar7);
    unaff_s8 = fVar8 - param_5;
    lVar4 = *unaff_x20;
    if (lVar4 == 0) break;
    if (((uVar3 & 0xffffffff) <= unaff_x23) || (*(uint *)(lVar4 + 0x18) <= unaff_x23)) {
LAB_04f6ff98:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    fVar8 = *pfVar1;
    *(undefined8 *)(lVar4 + unaff_x25) = *(undefined8 *)(unaff_x24 + 1);
    *(float *)((undefined8 *)(lVar4 + unaff_x25) + 1) = fVar8;
    param_1 = *unaff_x20;
    if (param_1 == 0) break;
    param_3 = (ulong)(uint)fVar5;
    param_4 = (ulong)(uint)unaff_s8;
    param_2 = FUN_05c7bb74(0);
    if (*(uint *)(param_1 + 0x18) <= unaff_x23) goto LAB_04f6ff98;
    param_1 = param_1 + unaff_x25;
    unaff_x24 = pfVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


