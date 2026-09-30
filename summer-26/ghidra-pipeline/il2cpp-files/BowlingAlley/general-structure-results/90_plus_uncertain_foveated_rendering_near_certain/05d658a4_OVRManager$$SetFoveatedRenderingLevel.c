/*
FUNCTION_NAME: OVRManager$$SetFoveatedRenderingLevel
ENTRY_POINT: 05d658a4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x05d65b14) */

void OVRManager__SetFoveatedRenderingLevel(ulong param_1)

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
  
  while ((param_1 & 1) != 0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05d658f4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_032937ac();
LAB_05d658f4:
    auVar14 = (*(code *)*puVar2)();
    if (auVar14._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    plVar6 = *(long **)(unaff_x20 + 0x30);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar3 = *plVar6;
    uVar1 = *(undefined4 *)(auVar14._0_8_ + 0x10);
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_05d65964;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_032937ac(plVar6,*unaff_x27,4);
LAB_05d65964:
    uVar4 = (*(code *)*puVar2)(plVar6,uVar1);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar10 = (ulong)in_stack_00000008;
      uVar4 = _uStack0000000000000000 >> 0x20;
      uVar8 = FUN_06bf2f54(uStack0000000000000000,_uStack0000000000000000 >> 0x20,uVar10,
                           *(long *)(unaff_x20 + 0x38),0);
      fVar7 = auVar14._12_4_;
      if (auVar14._8_4_ <= fVar7) {
        fVar13 = 1.0;
        fVar7 = 0.0;
LAB_05d65a18:
        fVar12 = 0.0;
        fVar9 = 1.0;
      }
      else {
        if (fVar7 <= 0.0) {
          fVar7 = 1.0;
          fVar13 = 0.0;
          goto LAB_05d65a18;
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
      lVar3 = *unaff_x28;
      fVar11 = *(float *)(unaff_x20 + 0x40);
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar3 = *unaff_x28;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      *(float *)(lVar3 + 0x18) = fVar9;
      *(float *)(lVar3 + 0x1c) = fVar11 * 0.5;
      *(float *)(lVar3 + 0xc) = fVar7;
      *(float *)(lVar3 + 0x10) = fVar13;
      *(float *)(lVar3 + 0x14) = fVar12;
      FUN_05cf02c4(uVar8,uVar4,uVar10,0,0);
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05d65898;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_032937ac();
LAB_05d65898:
    param_1 = (*(code *)*puVar2)();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05d65ac0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_032937ac();
LAB_05d65ac0:
    (*(code *)*puVar2)();
  }
  return;
}


