/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$Awake
ENTRY_POINT: 07763f7c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__Awake(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  float *pfVar16;
  long unaff_x19;
  long lVar17;
  undefined8 *unaff_x23;
  int unaff_w24;
  long unaff_x26;
  ulong uVar18;
  long unaff_x27;
  long unaff_x29;
  float fVar19;
  int iVar20;
  float unaff_s8;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  
code_r0x07763f7c:
  *(long *)(param_1 + 0x20) = unaff_x26;
  thunk_FUN_044bb4b4((long *)(param_1 + 0x20),unaff_x26);
  do {
    uVar13 = FUN_05a28f70(in_stack_00000020,unaff_w24,*(undefined8 *)PTR_DAT_09f32c78);
    FUN_07761148(uVar13,unaff_x26,uVar13);
    if (3 < *(int *)(unaff_x19 + 0x10)) {
      lVar17 = *(long *)PTR_DAT_09f22e40;
      lVar14 = *(long *)(lVar17 + 0x38);
      if (lVar14 == 0) {
        FUN_04482014(lVar17);
        lVar14 = *(long *)(lVar17 + 0x38);
      }
      lVar14 = *(long *)(lVar14 + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_04481fb8();
      }
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar14 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_04481fb8();
      }
      uVar13 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f32d68,**(undefined8 **)(lVar14 + 0xb8),0);
      lVar17 = *(long *)PTR_DAT_09f22e40;
      lVar14 = *(long *)(lVar17 + 0x38);
      if (lVar14 == 0) {
        FUN_04482014(lVar17);
        lVar14 = *(long *)(lVar17 + 0x38);
      }
      lVar14 = *(long *)(lVar14 + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_04481fb8();
      }
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar14 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_04481fb8();
      }
      FUN_0771ec00(uVar13,**(undefined8 **)(lVar14 + 0xb8),0);
    }
    unaff_w24 = unaff_w24 + 1;
    if (*(int *)(unaff_x29 + 0x18) <= unaff_w24) {
      if (unaff_x27 != 0) {
        FUN_05baf9bc(unaff_x27,*(undefined8 *)PTR_DAT_09f32cd0);
        return;
      }
LAB_077640fc:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar14 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
    FUN_05bad610(lVar14,*(undefined8 *)PTR_DAT_09f32ce0);
    uVar13 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
    FUN_077617f0(uVar13,lVar14);
    if (lVar14 == 0) goto LAB_077640fc;
    lVar17 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar14 + 0x18));
    lVar11 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar14 + 0x18));
    if (0 < *(int *)(lVar14 + 0x18)) {
      uVar18 = 0;
      pfVar16 = (float *)(lVar17 + 0x2c);
      do {
        lVar12 = FUN_05badb74(lVar14,uVar18 & 0xffffffff,*unaff_x23);
        if (lVar12 == 0) goto LAB_077640fc;
        iVar6 = *(int *)(lVar12 + 0x1c);
        lVar12 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
        if ((lVar12 == 0) || (*(long *)(lVar12 + 0x20) == 0)) goto LAB_077640fc;
        iVar7 = *(int *)(*(long *)(lVar12 + 0x20) + 0x10);
        lVar12 = FUN_05badb74(lVar14,uVar18 & 0xffffffff,*unaff_x23);
        if (lVar12 == 0) goto LAB_077640fc;
        iVar8 = *(int *)(lVar12 + 0x20);
        lVar12 = FUN_05badb74(lVar14,uVar18 & 0xffffffff,*unaff_x23);
        if (lVar12 == 0) goto LAB_077640fc;
        iVar9 = *(int *)(lVar12 + 0x14);
        lVar12 = FUN_05badb74(lVar14,uVar18 & 0xffffffff,*unaff_x23);
        if ((lVar12 == 0) || (lVar17 == 0)) goto LAB_077640fc;
        if (*(uint *)(lVar17 + 0x18) <= uVar18) {
LAB_07764100:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        iVar20 = *(int *)(lVar12 + 0x18);
        pfVar16[-3] = (float)(iVar6 - iVar7);
        pfVar16[-2] = (float)iVar8;
        pfVar16[-1] = (float)iVar9;
        *pfVar16 = (float)iVar20;
        lVar12 = FUN_05badb74(lVar14,uVar18 & 0xffffffff,*unaff_x23);
        if ((lVar12 == 0) || (lVar11 == 0)) goto LAB_077640fc;
        if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_07764100;
        pfVar16 = pfVar16 + 4;
        *(undefined4 *)(lVar11 + 0x20 + uVar18 * 4) = *(undefined4 *)(lVar12 + 0x10);
        uVar18 = uVar18 + 1;
      } while ((long)uVar18 < (long)*(int *)(lVar14 + 0x18));
    }
    if (in_stack_00000020 == 0) goto LAB_077640fc;
    uVar13 = FUN_05a2ad3c(in_stack_00000020,*(undefined8 *)PTR_DAT_09f32cc8);
    unaff_x26 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
    FUN_07a80df4(unaff_x26,0);
    *(undefined8 *)(unaff_x26 + 0x28) = uVar13;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x26 + 0x28),uVar13);
    puVar10 = PTR_DAT_09f32d00;
    uVar13 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
    puVar1 = (uint *)(unaff_x26 + 0x18);
    puVar2 = (uint *)(unaff_x26 + 0x1c);
    FUN_07762688(in_stack_00000018,uVar13,puVar1,puVar2);
    iVar6 = *(int *)(unaff_x26 + 0x18);
    lVar14 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)puVar10);
    if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0)) goto LAB_077640fc;
    *puVar1 = iVar6 - *(int *)(*(long *)(lVar14 + 0x20) + 0x10);
    lVar14 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
    if ((lVar14 == 0) ||
       (((*(long *)(lVar14 + 0x20) == 0 ||
         (lVar14 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00), lVar14 == 0))
        || (*(long *)(lVar14 + 0x20) == 0)))) goto LAB_077640fc;
    if (*(char *)(in_stack_00000018 + 0x14) == '\0') {
      uVar15 = *puVar2;
      uVar5 = *puVar1;
    }
    else {
      fVar19 = logf((float)(int)*puVar1);
      fVar19 = exp2f((float)(int)(fVar19 / unaff_s8));
      uVar4 = 0x80000000;
      if (fVar19 != INFINITY) {
        uVar4 = (int)fVar19;
      }
      if (uVar4 < 3) {
        uVar4 = 2;
      }
      lVar14 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
      if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0)) goto LAB_077640fc;
      uVar15 = *(uint *)(*(long *)(lVar14 + 0x20) + 0x18);
      if ((int)uVar15 <= (int)uVar4) {
        uVar4 = uVar15;
      }
      fVar19 = logf((float)(int)*puVar2);
      fVar19 = exp2f((float)(int)(fVar19 / unaff_s8));
      uVar5 = 0x80000000;
      if (fVar19 != INFINITY) {
        uVar5 = (int)fVar19;
      }
      if (uVar5 < 3) {
        uVar5 = 2;
      }
      lVar14 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
      if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0)) goto LAB_077640fc;
      uVar15 = *(uint *)(*(long *)(lVar14 + 0x20) + 0x1c);
      if ((int)uVar15 <= (int)uVar5) {
        uVar5 = uVar15;
      }
      uVar3 = uVar4;
      if ((int)uVar4 < 0) {
        uVar3 = uVar4 + 1;
      }
      uVar15 = (int)uVar3 >> 1;
      if ((int)uVar3 >> 1 <= (int)uVar5) {
        uVar15 = uVar5;
      }
      uVar3 = uVar15;
      if ((int)uVar15 < 0) {
        uVar3 = uVar15 + 1;
      }
      uVar5 = (int)uVar3 >> 1;
      if ((int)uVar3 >> 1 <= (int)uVar4) {
        uVar5 = uVar4;
      }
    }
    *(uint *)(unaff_x26 + 0x10) = uVar5;
    *(uint *)(unaff_x26 + 0x14) = uVar15;
    *(long *)(unaff_x26 + 0x20) = lVar17;
    thunk_FUN_044bb4b4();
    *(long *)(unaff_x26 + 0x30) = lVar11;
    thunk_FUN_044bb4b4((long *)(unaff_x26 + 0x30),lVar11);
    FUN_077606dc(unaff_x26);
    if (in_stack_00000010 == 0) goto LAB_077640fc;
    param_1 = *(long *)(in_stack_00000010 + 0x10);
    lVar14 = *(long *)PTR_DAT_09f32cb8;
    *(int *)(in_stack_00000010 + 0x1c) = *(int *)(in_stack_00000010 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_077640fc;
    uVar15 = *(uint *)(in_stack_00000010 + 0x18);
    unaff_x19 = in_stack_00000018;
    unaff_x27 = in_stack_00000010;
    if (uVar15 < *(uint *)(param_1 + 0x18)) break;
    FUN_05bade44(in_stack_00000010,unaff_x26,
                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
  } while( true );
  param_1 = param_1 + (long)(int)uVar15 * 8;
  *(uint *)(in_stack_00000010 + 0x18) = uVar15 + 1;
  goto code_r0x07763f7c;
}


