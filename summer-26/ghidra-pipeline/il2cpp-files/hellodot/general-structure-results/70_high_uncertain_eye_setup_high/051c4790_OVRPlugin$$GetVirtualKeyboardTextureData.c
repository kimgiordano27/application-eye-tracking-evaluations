/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardTextureData
ENTRY_POINT: 051c4790
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051c4a20) */

void OVRPlugin__GetVirtualKeyboardTextureData(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined4 uStack0000000000000000;
  uint in_stack_00000008;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
code_r0x051c4790:
  puVar2 = (undefined8 *)FUN_02ce0a7c();
  do {
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 == 0) goto LAB_051c49b0;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_051c4800;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_051c4800:
    auVar14 = (*(code *)*puVar2)();
    if (auVar14._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar6 = *(long **)(unaff_x20 + 0x30);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar4 = *plVar6;
    uVar1 = *(undefined4 *)(auVar14._0_8_ + 0x10);
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_051c4870;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x27,4);
LAB_051c4870:
    uVar3 = (*(code *)*puVar2)(plVar6,uVar1);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar10 = (ulong)in_stack_00000008;
      uVar3 = _uStack0000000000000000 >> 0x20;
      uVar8 = FUN_05f0009c(uStack0000000000000000,_uStack0000000000000000 >> 0x20,uVar10,
                           *(long *)(unaff_x20 + 0x38),0);
      fVar7 = auVar14._12_4_;
      if (auVar14._8_4_ <= fVar7) {
        fVar13 = 1.0;
        fVar7 = 0.0;
LAB_051c4924:
        fVar12 = 0.0;
        fVar9 = 1.0;
      }
      else {
        if (fVar7 <= 0.0) {
          fVar7 = 1.0;
          fVar13 = 0.0;
          goto LAB_051c4924;
        }
        fVar7 = (auVar14._8_4_ / fVar7) * 0.5;
        fVar9 = fVar7;
        if (1.0 < fVar7) {
          fVar9 = 1.0;
        }
        if (fVar7 < 0.0) {
          fVar9 = 0.0;
        }
        fVar7 = fVar9 * 0.0 + 1.0;
        fVar13 = fStack000000000000006c - fVar9 * fStack000000000000006c;
        fVar12 = fStack0000000000000068 - fVar9 * fStack0000000000000068;
        fVar9 = fVar7;
      }
      lVar4 = *unaff_x28;
      fVar11 = *(float *)(unaff_x20 + 0x40);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar4 = *unaff_x28;
      }
      lVar4 = *(long *)(lVar4 + 0xb8);
      *(float *)(lVar4 + 0x18) = fVar9;
      *(float *)(lVar4 + 0x1c) = fVar11 * 0.5;
      *(float *)(lVar4 + 0xc) = fVar7;
      *(float *)(lVar4 + 0x10) = fVar13;
      *(float *)(lVar4 + 0x14) = fVar12;
      FUN_05154750(uVar8,uVar3,uVar10,0,0);
    }
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 == 0) goto code_r0x051c4790;
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != *unaff_x25) {
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
      if (uVar3 == 0) goto code_r0x051c4790;
    }
    puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar5 = piVar5 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar5 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_051c49cc;
    }
  }
LAB_051c49b0:
  puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_051c49cc:
  (*(code *)*puVar2)();
  return;
}


