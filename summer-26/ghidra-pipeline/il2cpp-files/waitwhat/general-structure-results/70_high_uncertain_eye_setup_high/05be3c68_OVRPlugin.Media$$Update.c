/*
FUNCTION_NAME: OVRPlugin.Media$$Update
ENTRY_POINT: 05be3c68
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_Media__Update(code *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  ulong unaff_x20;
  int *unaff_x21;
  int unaff_w22;
  long *unaff_x24;
  long *unaff_x25;
  int iVar9;
  ushort uVar10;
  undefined2 uVar11;
  float fVar12;
  undefined2 uVar13;
  float unaff_s8;
  float unaff_s9;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  int iStack0000000000000018;
  uint uStack000000000000001c;
  
code_r0x05be3c68:
  fVar12 = (float)(*param_1)();
  if (unaff_s8 <= fVar12) {
    unaff_s8 = fVar12;
  }
LAB_05be3d04:
  unaff_w22 = unaff_w22 + 1;
  if (unaff_w22 == 5) goto LAB_05be3d10;
  if ((unaff_x20 & 1) != 0) goto LAB_05be3adc;
  if (unaff_x19 != (long *)0x0) goto code_r0x05be3a7c;
  goto LAB_05be3d70;
code_r0x05be3a7c:
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x25) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05be3ac8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_031c0d08();
LAB_05be3ac8:
  uVar7 = (*(code *)*puVar5)();
  if ((uVar7 & 1) != 0) goto LAB_05be3d04;
LAB_05be3adc:
  iVar9 = unaff_x21[4];
  iVar1 = *unaff_x21;
  iVar3 = unaff_x21[1];
  iVar2 = unaff_x21[2];
  iVar4 = unaff_x21[3];
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if (unaff_w22 < 2) {
    iVar9 = iVar1;
    if ((unaff_w22 != 0) && (iVar9 = iVar3, unaff_w22 != 1)) goto LAB_05be3d04;
  }
  else if ((unaff_w22 != 4) && ((iVar9 = iVar4, unaff_w22 != 3 && (iVar9 = iVar2, unaff_w22 != 2))))
  goto LAB_05be3d04;
  if (iVar9 == 0) goto LAB_05be3d04;
  iVar9 = unaff_x21[4];
  iVar1 = *unaff_x21;
  iVar3 = unaff_x21[1];
  iVar2 = unaff_x21[2];
  iVar4 = unaff_x21[3];
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if (unaff_w22 < 2) {
    iVar9 = iVar1;
    if ((unaff_w22 == 0) || (iVar9 = iVar3, unaff_w22 == 1)) goto LAB_05be3bac;
  }
  else if ((unaff_w22 == 4) || ((iVar9 = iVar4, unaff_w22 == 3 || (iVar9 = iVar2, unaff_w22 == 2))))
  {
LAB_05be3bac:
    if (iVar9 == 1) goto code_r0x05be3bb4;
  }
  iVar9 = unaff_x21[4];
  iVar1 = *unaff_x21;
  iVar3 = unaff_x21[1];
  iVar2 = unaff_x21[2];
  iVar4 = unaff_x21[3];
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if (unaff_w22 < 2) {
    iVar9 = iVar1;
    if ((unaff_w22 != 0) && (iVar9 = iVar3, unaff_w22 != 1)) goto LAB_05be3d10;
  }
  else if ((unaff_w22 != 4) && ((iVar9 = iVar4, unaff_w22 != 3 && (iVar9 = iVar2, unaff_w22 != 2))))
  {
LAB_05be3d10:
    if ((uStack000000000000001c & 1) == 0) {
      unaff_s9 = 0.0;
    }
    uVar10 = NEON_umaxv(CONCAT26(-(ushort)((int)((ulong)in_stack_00000008 >> 0x20) == 2),
                                 CONCAT24(-(ushort)((int)in_stack_00000008 == 2),
                                          CONCAT22(-(ushort)((int)((ulong)in_stack_00000000 >> 0x20)
                                                            == 2),
                                                   -(ushort)((int)in_stack_00000000 == 2)))),2);
    uVar11 = SUB42(unaff_s9,0);
    uVar13 = (undefined2)((uint)unaff_s9 >> 0x10);
    if ((uVar10 & 1) == 0 && iStack0000000000000018 != 2) {
      uVar11 = SUB42(unaff_s8,0);
      uVar13 = (undefined2)((uint)unaff_s8 >> 0x10);
    }
    return CONCAT22(uVar13,uVar11);
  }
  if (iVar9 == 2) {
    if (unaff_x19 == (long *)0x0) goto LAB_05be3d70;
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_05be3ce4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_031c0d08();
LAB_05be3ce4:
    fVar12 = (float)(*(code *)*puVar5)();
    uStack000000000000001c = 1;
    if (fVar12 <= unaff_s9) {
      unaff_s9 = fVar12;
    }
  }
  goto LAB_05be3d04;
code_r0x05be3bb4:
  if (unaff_x19 == (long *)0x0) {
LAB_05be3d70:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x25) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_05be3c60;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_031c0d08();
LAB_05be3c60:
  param_1 = (code *)*puVar5;
  goto code_r0x05be3c68;
}


