/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$OnEnable
ENTRY_POINT: 07764054
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__OnEnable(long param_1)

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
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  float *pfVar18;
  undefined8 unaff_x19;
  undefined8 *unaff_x23;
  int unaff_w24;
  long unaff_x25;
  ulong uVar19;
  long unaff_x27;
  long unaff_x29;
  float fVar20;
  int iVar21;
  float unaff_s8;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  
  do {
    if (param_1 == 0) {
      FUN_04482014(unaff_x25);
      param_1 = *(long *)(unaff_x25 + 0x38);
    }
    lVar16 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_04481fb8();
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar16 = *(long *)(*(long *)(unaff_x25 + 0x38) + 0x10);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_04481fb8();
    }
    FUN_0771ec00(unaff_x19,**(undefined8 **)(lVar16 + 0xb8),0);
    do {
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
      lVar16 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
      FUN_05bad610(lVar16,*(undefined8 *)PTR_DAT_09f32ce0);
      uVar11 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
      FUN_077617f0(uVar11,lVar16);
      if (lVar16 == 0) goto LAB_077640fc;
      lVar12 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar16 + 0x18));
      lVar13 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar16 + 0x18));
      if (0 < *(int *)(lVar16 + 0x18)) {
        uVar19 = 0;
        pfVar18 = (float *)(lVar12 + 0x2c);
        do {
          lVar14 = FUN_05badb74(lVar16,uVar19 & 0xffffffff,*unaff_x23);
          if (lVar14 == 0) goto LAB_077640fc;
          iVar6 = *(int *)(lVar14 + 0x1c);
          lVar14 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
          if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0)) goto LAB_077640fc;
          iVar7 = *(int *)(*(long *)(lVar14 + 0x20) + 0x10);
          lVar14 = FUN_05badb74(lVar16,uVar19 & 0xffffffff,*unaff_x23);
          if (lVar14 == 0) goto LAB_077640fc;
          iVar8 = *(int *)(lVar14 + 0x20);
          lVar14 = FUN_05badb74(lVar16,uVar19 & 0xffffffff,*unaff_x23);
          if (lVar14 == 0) goto LAB_077640fc;
          iVar9 = *(int *)(lVar14 + 0x14);
          lVar14 = FUN_05badb74(lVar16,uVar19 & 0xffffffff,*unaff_x23);
          if ((lVar14 == 0) || (lVar12 == 0)) goto LAB_077640fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar19) {
LAB_07764100:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          iVar21 = *(int *)(lVar14 + 0x18);
          pfVar18[-3] = (float)(iVar6 - iVar7);
          pfVar18[-2] = (float)iVar8;
          pfVar18[-1] = (float)iVar9;
          *pfVar18 = (float)iVar21;
          lVar14 = FUN_05badb74(lVar16,uVar19 & 0xffffffff,*unaff_x23);
          if ((lVar14 == 0) || (lVar13 == 0)) goto LAB_077640fc;
          if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_07764100;
          pfVar18 = pfVar18 + 4;
          *(undefined4 *)(lVar13 + 0x20 + uVar19 * 4) = *(undefined4 *)(lVar14 + 0x10);
          uVar19 = uVar19 + 1;
        } while ((long)uVar19 < (long)*(int *)(lVar16 + 0x18));
      }
      if (in_stack_00000020 == 0) goto LAB_077640fc;
      uVar11 = FUN_05a2ad3c(in_stack_00000020,*(undefined8 *)PTR_DAT_09f32cc8);
      lVar16 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
      FUN_07a80df4(lVar16,0);
      *(undefined8 *)(lVar16 + 0x28) = uVar11;
      thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x28),uVar11);
      puVar10 = PTR_DAT_09f32d00;
      uVar11 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
      puVar1 = (uint *)(lVar16 + 0x18);
      puVar2 = (uint *)(lVar16 + 0x1c);
      FUN_07762688(in_stack_00000018,uVar11,puVar1,puVar2);
      iVar6 = *(int *)(lVar16 + 0x18);
      lVar14 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)puVar10);
      if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0)) goto LAB_077640fc;
      *puVar1 = iVar6 - *(int *)(*(long *)(lVar14 + 0x20) + 0x10);
      lVar14 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
      if ((lVar14 == 0) ||
         (((*(long *)(lVar14 + 0x20) == 0 ||
           (lVar14 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00), lVar14 == 0)
           ) || (*(long *)(lVar14 + 0x20) == 0)))) goto LAB_077640fc;
      if (*(char *)(in_stack_00000018 + 0x14) == '\0') {
        uVar17 = *puVar2;
        uVar5 = *puVar1;
      }
      else {
        fVar20 = logf((float)(int)*puVar1);
        fVar20 = exp2f((float)(int)(fVar20 / unaff_s8));
        uVar4 = 0x80000000;
        if (fVar20 != INFINITY) {
          uVar4 = (int)fVar20;
        }
        if (uVar4 < 3) {
          uVar4 = 2;
        }
        lVar14 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
        if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0)) goto LAB_077640fc;
        uVar17 = *(uint *)(*(long *)(lVar14 + 0x20) + 0x18);
        if ((int)uVar17 <= (int)uVar4) {
          uVar4 = uVar17;
        }
        fVar20 = logf((float)(int)*puVar2);
        fVar20 = exp2f((float)(int)(fVar20 / unaff_s8));
        uVar5 = 0x80000000;
        if (fVar20 != INFINITY) {
          uVar5 = (int)fVar20;
        }
        if (uVar5 < 3) {
          uVar5 = 2;
        }
        lVar14 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
        if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0)) goto LAB_077640fc;
        uVar17 = *(uint *)(*(long *)(lVar14 + 0x20) + 0x1c);
        if ((int)uVar17 <= (int)uVar5) {
          uVar5 = uVar17;
        }
        uVar3 = uVar4;
        if ((int)uVar4 < 0) {
          uVar3 = uVar4 + 1;
        }
        uVar17 = (int)uVar3 >> 1;
        if ((int)uVar3 >> 1 <= (int)uVar5) {
          uVar17 = uVar5;
        }
        uVar3 = uVar17;
        if ((int)uVar17 < 0) {
          uVar3 = uVar17 + 1;
        }
        uVar5 = (int)uVar3 >> 1;
        if ((int)uVar3 >> 1 <= (int)uVar4) {
          uVar5 = uVar4;
        }
      }
      *(uint *)(lVar16 + 0x10) = uVar5;
      *(uint *)(lVar16 + 0x14) = uVar17;
      *(long *)(lVar16 + 0x20) = lVar12;
      thunk_FUN_044bb4b4();
      *(long *)(lVar16 + 0x30) = lVar13;
      thunk_FUN_044bb4b4((long *)(lVar16 + 0x30),lVar13);
      FUN_077606dc(lVar16);
      if (in_stack_00000010 == 0) goto LAB_077640fc;
      lVar12 = *(long *)(in_stack_00000010 + 0x10);
      lVar13 = *(long *)PTR_DAT_09f32cb8;
      *(int *)(in_stack_00000010 + 0x1c) = *(int *)(in_stack_00000010 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_077640fc;
      uVar17 = *(uint *)(in_stack_00000010 + 0x18);
      if (uVar17 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(in_stack_00000010 + 0x18) = uVar17 + 1;
        plVar15 = (long *)(lVar12 + (long)(int)uVar17 * 8 + 0x20);
        *plVar15 = lVar16;
        thunk_FUN_044bb4b4(plVar15,lVar16);
      }
      else {
        FUN_05bade44(in_stack_00000010,lVar16,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      uVar11 = FUN_05a28f70(in_stack_00000020,unaff_w24,*(undefined8 *)PTR_DAT_09f32c78);
      FUN_07761148(uVar11,lVar16,uVar11);
      unaff_x27 = in_stack_00000010;
    } while (*(int *)(in_stack_00000018 + 0x10) < 4);
    lVar12 = *(long *)PTR_DAT_09f22e40;
    lVar16 = *(long *)(lVar12 + 0x38);
    if (lVar16 == 0) {
      FUN_04482014(lVar12);
      lVar16 = *(long *)(lVar12 + 0x38);
    }
    lVar16 = *(long *)(lVar16 + 0x10);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_04481fb8();
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar16 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_04481fb8();
    }
    unaff_x19 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f32d68,**(undefined8 **)(lVar16 + 0xb8),0);
    unaff_x25 = *(long *)PTR_DAT_09f22e40;
    param_1 = *(long *)(unaff_x25 + 0x38);
  } while( true );
}


