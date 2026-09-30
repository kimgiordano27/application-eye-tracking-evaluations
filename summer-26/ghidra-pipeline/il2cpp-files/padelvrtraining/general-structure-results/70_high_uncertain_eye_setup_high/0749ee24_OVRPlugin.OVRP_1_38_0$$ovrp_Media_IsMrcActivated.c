/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_IsMrcActivated
ENTRY_POINT: 0749ee24
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_38_0__ovrp_Media_IsMrcActivated
          (undefined8 param_1,undefined4 param_2,ulong param_3,ulong param_4,ulong param_5,
          long param_6,ulong param_7)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  float *pfVar6;
  undefined4 in_w9;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *unaff_x24;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  uint in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  uStack0000000000000000 = param_1;
  uStack0000000000000008 = in_w9;
  uStack000000000000000c = param_2;
  while( true ) {
    uStack0000000000000010 = (undefined4)param_3;
    uStack0000000000000014 = (undefined4)param_4;
    uStack0000000000000018 = (undefined4)param_5;
    FUN_07499284(param_6,param_7);
    lVar11 = *(long *)(unaff_x21 + 0xa8);
    unaff_w22 = unaff_w22 + 1;
    if (lVar11 == 0) break;
    if (unaff_w22 == 0x1a) {
      FUN_07499428(lVar11,1);
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar11 + 0x18);
      thunk_FUN_03d1023c();
      puVar3 = PTR_DAT_0921fad0;
      puVar2 = PTR_DAT_091a0f90;
      lVar12 = 0;
      lVar11 = 0;
      uVar7 = 0;
      goto LAB_0749ee8c;
    }
    FUN_07499244(&stack0x00000020,lVar11,unaff_w22);
    uVar13 = uStack000000000000002c;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000048 = uStack0000000000000028;
    lVar11 = *(long *)(unaff_x21 + 0xa0);
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= unaff_w22) goto LAB_0749f010;
    plVar10 = *(long **)(lVar11 + (long)(int)unaff_w22 * 8 + 0x20);
    if (plVar10 == (long *)0x0) break;
    lVar11 = *plVar10;
    param_3 = (ulong)uStack0000000000000030;
    param_4 = (ulong)uStack0000000000000034;
    param_5 = (ulong)in_stack_00000038;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0749eddc;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370(plVar10,*unaff_x24,2);
LAB_0749eddc:
    uVar13 = (*(code *)*puVar4)(uVar13,plVar10,puVar4[1]);
    param_6 = *(long *)(unaff_x21 + 0xa8);
    in_stack_00000020 = in_stack_00000040;
    uStack0000000000000028 = in_stack_00000048;
    if (param_6 == 0) break;
    param_7 = (ulong)unaff_w22;
    uStack0000000000000000 = in_stack_00000040;
    uStack0000000000000008 = in_stack_00000048;
    uStack000000000000000c = uVar13;
  }
LAB_0749ee44:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
LAB_0749ee8c:
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar5 = *(long *)puVar3;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) goto LAB_0749ee44;
  if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_0749f010;
  uVar1 = *(uint *)(lVar5 + lVar11 + 0x20);
  lVar5 = *(long *)(unaff_x19 + 0x48);
  if ((int)uVar1 < 0) {
    if (DAT_098362c8 == '\0') {
      FUN_03d2d2b0(puVar2);
      DAT_098362c8 = '\x01';
    }
    pfVar6 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar15 = *pfVar6;
    fVar17 = pfVar6[1];
    fVar19 = pfVar6[2];
    fVar14 = pfVar6[3];
  }
  else {
    lVar8 = *unaff_x20;
    if (lVar8 == 0) goto LAB_0749ee44;
    if (*(uint *)(lVar8 + 0x18) <= uVar1) {
LAB_0749f010:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar8 = lVar8 + (ulong)uVar1 * 0x1c;
    fVar16 = *(float *)(lVar8 + 0x30);
    fVar18 = *(float *)(lVar8 + 0x34);
    fVar20 = *(float *)(lVar8 + 0x38);
    fVar14 = (float)UnityEngine_UIElements_DoubleField_DoubleInput__StringToValue
                              (*(undefined4 *)(lVar8 + 0x2c),0);
    lVar8 = *unaff_x20;
    if (lVar8 == 0) goto LAB_0749ee44;
    if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_0749f010;
    lVar8 = lVar8 + lVar12;
    fVar21 = *(float *)(lVar8 + 0x2c);
    fVar24 = *(float *)(lVar8 + 0x30);
    fVar23 = *(float *)(lVar8 + 0x34);
    fVar22 = *(float *)(lVar8 + 0x38);
    fVar15 = (fVar16 * fVar23 + fVar20 * fVar21 + fVar14 * fVar22) - fVar18 * fVar24;
    fVar17 = (fVar18 * fVar21 + fVar20 * fVar24 + fVar16 * fVar22) - fVar14 * fVar23;
    fVar19 = (fVar14 * fVar24 + fVar20 * fVar23 + fVar18 * fVar22) - fVar16 * fVar21;
    fVar14 = ((fVar20 * fVar22 - fVar14 * fVar21) - fVar16 * fVar24) - fVar18 * fVar23;
  }
  if (lVar5 == 0) goto LAB_0749ee44;
  if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_0749f010;
  lVar5 = lVar5 + lVar11 * 4;
  lVar11 = lVar11 + 4;
  uVar7 = uVar7 + 1;
  lVar12 = lVar12 + 0x1c;
  *(float *)(lVar5 + 0x20) = fVar15;
  *(float *)(lVar5 + 0x24) = fVar17;
  *(float *)(lVar5 + 0x28) = fVar19;
  *(float *)(lVar5 + 0x2c) = fVar14;
  if (lVar11 == 0x68) {
    return 1;
  }
  goto LAB_0749ee8c;
}


