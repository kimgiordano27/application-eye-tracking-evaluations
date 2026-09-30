/*
FUNCTION_NAME: OVRManager$$GetFixedFoveatedRenderingSupported
ENTRY_POINT: 05d65988
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 121
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x05d65b14) */

void OVRManager__GetFixedFoveatedRenderingSupported
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long *plVar6;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined4 uStack0000000000000000;
  uint in_stack_00000008;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  do {
    uVar8 = FUN_06bf2f54(uStack0000000000000000,param_2,param_3,param_4,0);
    fVar7 = (float)((ulong)unaff_x21 >> 0x20);
    if ((float)unaff_x21 <= fVar7) {
      fVar12 = 1.0;
      fVar7 = 0.0;
LAB_05d65a18:
      fVar11 = 0.0;
      fVar9 = 1.0;
    }
    else {
      if (fVar7 <= 0.0) {
        fVar7 = 1.0;
        fVar12 = 0.0;
        goto LAB_05d65a18;
      }
      fVar7 = ((float)unaff_x21 / fVar7) * 0.5;
      fVar9 = fVar7;
      if (1.0 < fVar7) {
        fVar9 = 1.0;
      }
      if (fVar7 < 0.0) {
        fVar9 = 0.0;
      }
      fVar7 = fVar9 * 0.0 + 1.0;
      fVar12 = fStack000000000000006c - fVar9 * fStack000000000000006c;
      fVar11 = fStack0000000000000068 - fVar9 * fStack0000000000000068;
      fVar9 = fVar7;
    }
    lVar3 = *unaff_x28;
    fVar10 = *(float *)(unaff_x20 + 0x40);
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = *unaff_x28;
    }
    lVar3 = *(long *)(lVar3 + 0xb8);
    *(float *)(lVar3 + 0x18) = fVar9;
    *(float *)(lVar3 + 0x1c) = fVar10 * 0.5;
    *(float *)(lVar3 + 0xc) = fVar7;
    *(float *)(lVar3 + 0x10) = fVar12;
    *(float *)(lVar3 + 0x14) = fVar11;
    FUN_05cf02c4(uVar8,param_2,param_3,0,0);
    do {
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
      uVar4 = (*(code *)*puVar2)();
      if ((uVar4 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar3 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_05d65aa4;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_05d65a8c;
      }
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
      auVar13 = (*(code *)*puVar2)();
      unaff_x21 = auVar13._8_8_;
      if (auVar13._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      plVar6 = *(long **)(unaff_x20 + 0x30);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar3 = *plVar6;
      uVar1 = *(undefined4 *)(auVar13._0_8_ + 0x10);
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
    } while ((uVar4 & 1) == 0);
    param_4 = *(long *)(unaff_x20 + 0x38);
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    param_3 = (ulong)in_stack_00000008;
    param_2 = _uStack0000000000000000 >> 0x20;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_05d65a8c:
    if (*(long *)(piVar5 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_05d65ac0;
    }
  }
LAB_05d65aa4:
  puVar2 = (undefined8 *)FUN_032937ac();
LAB_05d65ac0:
  (*(code *)*puVar2)();
  return;
}


