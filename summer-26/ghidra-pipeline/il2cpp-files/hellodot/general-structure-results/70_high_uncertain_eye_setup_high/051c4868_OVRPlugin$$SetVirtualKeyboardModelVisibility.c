/*
FUNCTION_NAME: OVRPlugin$$SetVirtualKeyboardModelVisibility
ENTRY_POINT: 051c4868
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051c4a20) */

void OVRPlugin__SetVirtualKeyboardModelVisibility(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int in_w9;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined4 unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined4 uStack0000000000000000;
  uint in_stack_00000008;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
code_r0x051c4868:
  puVar1 = (undefined8 *)(param_1 + (long)in_w9 * 0x10 + 0x138);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x22,unaff_w23);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar8 = (ulong)in_stack_00000008;
      uVar2 = _uStack0000000000000000 >> 0x20;
      uVar6 = FUN_05f0009c(uStack0000000000000000,_uStack0000000000000000 >> 0x20,uVar8,
                           *(long *)(unaff_x20 + 0x38),0);
      fVar5 = (float)((ulong)unaff_x21 >> 0x20);
      if ((float)unaff_x21 <= fVar5) {
        fVar11 = 1.0;
        fVar5 = 0.0;
LAB_051c4924:
        fVar10 = 0.0;
        fVar7 = 1.0;
      }
      else {
        if (fVar5 <= 0.0) {
          fVar5 = 1.0;
          fVar11 = 0.0;
          goto LAB_051c4924;
        }
        fVar5 = ((float)unaff_x21 / fVar5) * 0.5;
        fVar7 = fVar5;
        if (1.0 < fVar5) {
          fVar7 = 1.0;
        }
        if (fVar5 < 0.0) {
          fVar7 = 0.0;
        }
        fVar5 = fVar7 * 0.0 + 1.0;
        fVar11 = fStack000000000000006c - fVar7 * fStack000000000000006c;
        fVar10 = fStack0000000000000068 - fVar7 * fStack0000000000000068;
        fVar7 = fVar5;
      }
      lVar3 = *unaff_x28;
      fVar9 = *(float *)(unaff_x20 + 0x40);
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar3 = *unaff_x28;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      *(float *)(lVar3 + 0x18) = fVar7;
      *(float *)(lVar3 + 0x1c) = fVar9 * 0.5;
      *(float *)(lVar3 + 0xc) = fVar5;
      *(float *)(lVar3 + 0x10) = fVar11;
      *(float *)(lVar3 + 0x14) = fVar10;
      FUN_05154750(uVar6,uVar2,uVar8,0,0);
    }
    lVar3 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_051c47a4;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_051c47a4:
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_051c49b0;
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_051c4800;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_051c4800:
    auVar12 = (*(code *)*puVar1)();
    unaff_x21 = auVar12._8_8_;
    if (auVar12._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    unaff_x22 = *(long **)(unaff_x20 + 0x30);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    param_1 = *unaff_x22;
    unaff_w23 = *(undefined4 *)(auVar12._0_8_ + 0x10);
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x27) {
          in_w9 = *piVar4 + 4;
          goto code_r0x051c4868;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c(unaff_x22,*unaff_x27,4);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar4 + -2) == *unaff_x24) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_051c49cc;
    }
  }
LAB_051c49b0:
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_051c49cc:
  (*(code *)*puVar1)();
  return;
}


