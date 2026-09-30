/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 051c492c
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x051c4a20) */

void OVRPlugin__get_faceTrackingEnabled(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
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
  undefined8 unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar8;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined1 auVar9 [16];
  undefined4 uStack0000000000000000;
  uint in_stack_00000008;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
code_r0x051c492c:
  do {
    lVar3 = *unaff_x28;
    fVar8 = *(float *)(unaff_x20 + 0x40);
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar3 = *unaff_x28;
    }
    lVar3 = *(long *)(lVar3 + 0xb8);
    *(float *)(lVar3 + 0x18) = unaff_s15;
    *(float *)(lVar3 + 0x1c) = fVar8 * 0.5;
    *(float *)(lVar3 + 0xc) = unaff_s13;
    *(float *)(lVar3 + 0x10) = unaff_s14;
    *(float *)(lVar3 + 0x14) = unaff_s12;
    FUN_05154750(unaff_d8,unaff_d9,unaff_d10,0,0);
    do {
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_051c47a4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_051c47a4:
      uVar4 = (*(code *)*puVar2)();
      if ((uVar4 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar3 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_051c49b0;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_051c4998;
      }
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_051c4800;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_051c4800:
      auVar9 = (*(code *)*puVar2)();
      if (auVar9._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar6 = *(long **)(unaff_x20 + 0x30);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = *plVar6;
      uVar1 = *(undefined4 *)(auVar9._0_8_ + 0x10);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_051c4870;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x27,4);
LAB_051c4870:
      uVar4 = (*(code *)*puVar2)(plVar6,uVar1);
    } while ((uVar4 & 1) == 0);
    if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    unaff_d10 = (ulong)in_stack_00000008;
    unaff_d9 = _uStack0000000000000000 >> 0x20;
    unaff_d8 = FUN_05f0009c(uStack0000000000000000,*(long *)(unaff_x20 + 0x38),0);
    fVar8 = auVar9._12_4_;
    if (auVar9._8_4_ <= fVar8) {
      unaff_s14 = 1.0;
      unaff_s13 = 0.0;
    }
    else {
      if (0.0 < fVar8) {
        fVar7 = (auVar9._8_4_ / fVar8) * 0.5;
        fVar8 = fVar7;
        if (1.0 < fVar7) {
          fVar8 = 1.0;
        }
        if (fVar7 < 0.0) {
          fVar8 = 0.0;
        }
        unaff_s13 = fVar8 * 0.0 + 1.0;
        unaff_s14 = fStack000000000000006c - fVar8 * fStack000000000000006c;
        unaff_s12 = fStack0000000000000068 - fVar8 * fStack0000000000000068;
        unaff_s15 = unaff_s13;
        goto code_r0x051c492c;
      }
      unaff_s13 = 1.0;
      unaff_s14 = 0.0;
    }
    unaff_s12 = 0.0;
    unaff_s15 = 1.0;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_051c4998:
    if (*(long *)(piVar5 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_051c49cc;
    }
  }
LAB_051c49b0:
  puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_051c49cc:
  (*(code *)*puVar2)();
  return;
}


