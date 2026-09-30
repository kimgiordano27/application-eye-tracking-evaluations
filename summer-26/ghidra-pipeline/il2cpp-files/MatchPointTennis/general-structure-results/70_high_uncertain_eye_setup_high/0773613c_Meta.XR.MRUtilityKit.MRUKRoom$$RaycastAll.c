/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$RaycastAll
ENTRY_POINT: 0773613c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__RaycastAll(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  ulong uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 uStack00000000000001d0;
  undefined8 uStack00000000000001e0;
  int in_stack_0000029c;
  
  uStack00000000000001d0 = param_1;
  uStack00000000000001e0 = param_2;
  FUN_095126ac(&stack0x00000110,&stack0x000001d0,0);
  fVar2 = DAT_01c7607c;
  lVar4 = *(long *)(unaff_x27 + 0xc0);
  if (lVar4 != 0) {
    uVar9 = 0;
    do {
      iVar3 = FUN_094f3ae4(lVar4,0);
      if ((long)iVar3 <= (long)uVar9) {
        return;
      }
      uVar1 = (int)uVar9 + in_stack_0000029c;
      if (unaff_x24 != 0) {
        if (unaff_x19 == 0) break;
        if (*(uint *)(unaff_x19 + 0x18) <= uVar9) goto LAB_0773661c;
        lVar4 = unaff_x19 + uVar9 * 0xc;
        uVar12 = *(undefined4 *)(lVar4 + 0x24);
        uVar14 = *(undefined4 *)(lVar4 + 0x28);
        uVar10 = FUN_09513720(*(undefined4 *)(lVar4 + 0x20),&stack0x00000250,0);
        if (*(uint *)(unaff_x24 + 0x18) <= uVar1) goto LAB_0773661c;
        lVar4 = unaff_x24 + (long)(int)uVar1 * 0xc;
        *(undefined4 *)(lVar4 + 0x20) = uVar10;
        *(undefined4 *)(lVar4 + 0x24) = uVar12;
        *(undefined4 *)(lVar4 + 0x28) = uVar14;
      }
      lVar4 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f30ab8) {
            puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_0773623c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_044822ac();
LAB_0773623c:
      uVar7 = (*(code *)*puVar5)();
      if ((unaff_x25 != 0) && ((uVar7 & 1) != 0)) {
        if (*(uint *)(unaff_x25 + 0x18) <= uVar9) goto LAB_0773661c;
        lVar4 = unaff_x25 + uVar9 * 0xc;
        fVar13 = *(float *)(lVar4 + 0x24);
        fVar15 = *(float *)(lVar4 + 0x28);
        fVar11 = (float)FUN_09513720(*(undefined4 *)(lVar4 + 0x20),&stack0x00000210,0);
        if (DAT_0a51bf42 == '\0') {
          FUN_04447ba8(PTR_DAT_09f1e748);
          DAT_0a51bf42 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        fVar16 = SQRT(fVar15 * fVar15 + fVar11 * fVar11 + fVar13 * fVar13);
        if (fVar16 <= fVar2) {
          if (DAT_0a51bf43 == '\0') {
            FUN_04447ba8(PTR_DAT_09f1e740);
            DAT_0a51bf43 = '\x01';
          }
          pfVar6 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
          fVar11 = *pfVar6;
          fVar13 = pfVar6[1];
          fVar15 = pfVar6[2];
        }
        else {
          fVar11 = fVar11 / fVar16;
          fVar13 = fVar13 / fVar16;
          fVar15 = fVar15 / fVar16;
        }
        if (unaff_x23 == 0) break;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar1) goto LAB_0773661c;
        lVar4 = unaff_x23 + (long)(int)uVar1 * 0xc;
        *(float *)(lVar4 + 0x20) = fVar11;
        *(float *)(lVar4 + 0x24) = fVar13;
        *(float *)(lVar4 + 0x28) = fVar15;
      }
      lVar4 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f30ab8) {
            puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 6) * 0x10 + 0x138);
            goto LAB_077363a4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_044822ac();
LAB_077363a4:
      uVar7 = (*(code *)*puVar5)();
      if ((unaff_x21 != 0) && ((uVar7 & 1) != 0)) {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar9) {
LAB_0773661c:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar4 = unaff_x21 + uVar9 * 0x10;
        fVar13 = *(float *)(lVar4 + 0x24);
        fVar15 = *(float *)(lVar4 + 0x28);
        uVar10 = *(undefined4 *)(lVar4 + 0x2c);
        fVar11 = (float)FUN_09513720(*(undefined4 *)(lVar4 + 0x20),&stack0x00000210,0);
        if (DAT_0a51bf42 == '\0') {
          FUN_04447ba8(PTR_DAT_09f1e748);
          DAT_0a51bf42 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        fVar16 = SQRT(fVar15 * fVar15 + fVar11 * fVar11 + fVar13 * fVar13);
        if (fVar16 <= fVar2) {
          if (DAT_0a51bf43 == '\0') {
            FUN_04447ba8(PTR_DAT_09f1e740);
            DAT_0a51bf43 = '\x01';
          }
          pfVar6 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
          fVar11 = *pfVar6;
          fVar13 = pfVar6[1];
          fVar15 = pfVar6[2];
        }
        else {
          fVar11 = fVar11 / fVar16;
          fVar13 = fVar13 / fVar16;
          fVar15 = fVar15 / fVar16;
        }
        if (unaff_x26 == 0) break;
        if (*(uint *)(unaff_x26 + 0x18) <= uVar1) goto LAB_0773661c;
        lVar4 = unaff_x26 + (long)(int)uVar1 * 0x10;
        *(undefined4 *)(lVar4 + 0x2c) = 0;
        *(float *)(lVar4 + 0x20) = fVar11;
        *(float *)(lVar4 + 0x24) = fVar13;
        *(float *)(lVar4 + 0x28) = fVar15;
        if (*(uint *)(unaff_x26 + 0x18) <= uVar1) goto LAB_0773661c;
        *(undefined4 *)(lVar4 + 0x2c) = uVar10;
      }
      lVar4 = *(long *)(unaff_x27 + 0xc0);
      uVar9 = uVar9 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


