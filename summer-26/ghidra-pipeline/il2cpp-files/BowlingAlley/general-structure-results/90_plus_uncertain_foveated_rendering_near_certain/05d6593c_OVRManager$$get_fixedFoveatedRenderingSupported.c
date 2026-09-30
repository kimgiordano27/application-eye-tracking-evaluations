/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 05d6593c
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

void OVRManager__get_fixedFoveatedRenderingSupported(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong in_x9;
  int *in_x10;
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
  
code_r0x05d6593c:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_05d6592c;
LAB_05d65944:
  puVar1 = (undefined8 *)FUN_032937ac(unaff_x22,param_3,4);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x22,unaff_w23);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar8 = (ulong)in_stack_00000008;
      uVar2 = _uStack0000000000000000 >> 0x20;
      uVar6 = FUN_06bf2f54(uStack0000000000000000,_uStack0000000000000000 >> 0x20,uVar8,
                           *(long *)(unaff_x20 + 0x38),0);
      fVar5 = (float)((ulong)unaff_x21 >> 0x20);
      if ((float)unaff_x21 <= fVar5) {
        fVar11 = 1.0;
        fVar5 = 0.0;
LAB_05d65a18:
        fVar10 = 0.0;
        fVar7 = 1.0;
      }
      else {
        if (fVar5 <= 0.0) {
          fVar5 = 1.0;
          fVar11 = 0.0;
          goto LAB_05d65a18;
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
        thunk_FUN_032cd7c0();
        lVar3 = *unaff_x28;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      *(float *)(lVar3 + 0x18) = fVar7;
      *(float *)(lVar3 + 0x1c) = fVar9 * 0.5;
      *(float *)(lVar3 + 0xc) = fVar5;
      *(float *)(lVar3 + 0x10) = fVar11;
      *(float *)(lVar3 + 0x14) = fVar10;
      FUN_05cf02c4(uVar6,uVar2,uVar8,0,0);
    }
    lVar3 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_05d65898;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_032937ac();
LAB_05d65898:
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_05d65aa4;
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
          goto LAB_05d658f4;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_032937ac();
LAB_05d658f4:
    auVar12 = (*(code *)*puVar1)();
    unaff_x21 = auVar12._8_8_;
    if (auVar12._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    unaff_x22 = *(long **)(unaff_x20 + 0x30);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    param_1 = *unaff_x22;
    unaff_w23 = *(undefined4 *)(auVar12._0_8_ + 0x10);
    param_3 = *unaff_x27;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_05d65944;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_05d6592c:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x05d6593c;
    }
    puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 4) * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar4 + -2) == *unaff_x24) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_05d65ac0;
    }
  }
LAB_05d65aa4:
  puVar1 = (undefined8 *)FUN_032937ac();
LAB_05d65ac0:
  (*(code *)*puVar1)();
  return;
}


