/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking.<RegisterGameRoom>d__27$$SetStateMachine
ENTRY_POINT: 07763f14
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


void Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<RegisterGameRoom>d__27__SetStateMachine
               (undefined8 param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 uVar12;
  uint in_w8;
  long lVar13;
  uint in_w9;
  long lVar14;
  float *pfVar15;
  long unaff_x19;
  undefined8 *unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  ulong uVar16;
  long unaff_x27;
  long unaff_x29;
  float fVar17;
  int iVar18;
  float unaff_s8;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  
  do {
    *(uint *)(unaff_x26 + 0x10) = in_w8;
    *(uint *)(unaff_x26 + 0x14) = in_w9;
    *(long *)(unaff_x26 + 0x20) = param_2;
    thunk_FUN_044bb4b4();
    *(long *)(unaff_x26 + 0x30) = unaff_x25;
    thunk_FUN_044bb4b4((long *)(unaff_x26 + 0x30),unaff_x25);
    FUN_077606dc(unaff_x26);
    if (unaff_x27 == 0) {
LAB_077640fc:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar13 = *(long *)(unaff_x27 + 0x10);
    lVar14 = *(long *)PTR_DAT_09f32cb8;
    *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_077640fc;
    uVar9 = *(uint *)(unaff_x27 + 0x18);
    if (uVar9 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(unaff_x27 + 0x18) = uVar9 + 1;
      plVar11 = (long *)(lVar13 + (long)(int)uVar9 * 8 + 0x20);
      *plVar11 = unaff_x26;
      thunk_FUN_044bb4b4(plVar11,unaff_x26);
    }
    else {
      FUN_05bade44(unaff_x27,unaff_x26,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    uVar12 = FUN_05a28f70(in_stack_00000020,unaff_w24,*(undefined8 *)PTR_DAT_09f32c78);
    FUN_07761148(uVar12,unaff_x26,uVar12);
    if (3 < *(int *)(unaff_x19 + 0x10)) {
      lVar14 = *(long *)PTR_DAT_09f22e40;
      lVar13 = *(long *)(lVar14 + 0x38);
      if (lVar13 == 0) {
        FUN_04482014(lVar14);
        lVar13 = *(long *)(lVar14 + 0x38);
      }
      lVar13 = *(long *)(lVar13 + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_04481fb8();
      }
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_04481fb8();
      }
      uVar12 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f32d68,**(undefined8 **)(lVar13 + 0xb8),0);
      lVar14 = *(long *)PTR_DAT_09f22e40;
      lVar13 = *(long *)(lVar14 + 0x38);
      if (lVar13 == 0) {
        FUN_04482014(lVar14);
        lVar13 = *(long *)(lVar14 + 0x38);
      }
      lVar13 = *(long *)(lVar13 + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_04481fb8();
      }
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_04481fb8();
      }
      FUN_0771ec00(uVar12,**(undefined8 **)(lVar13 + 0xb8),0);
    }
    unaff_w24 = unaff_w24 + 1;
    if (*(int *)(unaff_x29 + 0x18) <= unaff_w24) {
      if (unaff_x27 != 0) {
        FUN_05baf9bc(unaff_x27,*(undefined8 *)PTR_DAT_09f32cd0);
        return;
      }
      goto LAB_077640fc;
    }
    lVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
    FUN_05bad610(lVar13,*(undefined8 *)PTR_DAT_09f32ce0);
    uVar12 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
    FUN_077617f0(uVar12,lVar13);
    if (lVar13 == 0) goto LAB_077640fc;
    param_2 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar13 + 0x18));
    unaff_x25 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar13 + 0x18));
    if (0 < *(int *)(lVar13 + 0x18)) {
      uVar16 = 0;
      pfVar15 = (float *)(param_2 + 0x2c);
      do {
        lVar14 = FUN_05badb74(lVar13,uVar16 & 0xffffffff,*unaff_x23);
        if (lVar14 == 0) goto LAB_077640fc;
        iVar3 = *(int *)(lVar14 + 0x1c);
        lVar14 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
        if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0)) goto LAB_077640fc;
        iVar4 = *(int *)(*(long *)(lVar14 + 0x20) + 0x10);
        lVar14 = FUN_05badb74(lVar13,uVar16 & 0xffffffff,*unaff_x23);
        if (lVar14 == 0) goto LAB_077640fc;
        iVar5 = *(int *)(lVar14 + 0x20);
        lVar14 = FUN_05badb74(lVar13,uVar16 & 0xffffffff,*unaff_x23);
        if (lVar14 == 0) goto LAB_077640fc;
        iVar6 = *(int *)(lVar14 + 0x14);
        lVar14 = FUN_05badb74(lVar13,uVar16 & 0xffffffff,*unaff_x23);
        if ((lVar14 == 0) || (param_2 == 0)) goto LAB_077640fc;
        if (*(uint *)(param_2 + 0x18) <= uVar16) {
LAB_07764100:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        iVar18 = *(int *)(lVar14 + 0x18);
        pfVar15[-3] = (float)(iVar3 - iVar4);
        pfVar15[-2] = (float)iVar5;
        pfVar15[-1] = (float)iVar6;
        *pfVar15 = (float)iVar18;
        lVar14 = FUN_05badb74(lVar13,uVar16 & 0xffffffff,*unaff_x23);
        if ((lVar14 == 0) || (unaff_x25 == 0)) goto LAB_077640fc;
        if (*(uint *)(unaff_x25 + 0x18) <= uVar16) goto LAB_07764100;
        pfVar15 = pfVar15 + 4;
        *(undefined4 *)(unaff_x25 + 0x20 + uVar16 * 4) = *(undefined4 *)(lVar14 + 0x10);
        uVar16 = uVar16 + 1;
      } while ((long)uVar16 < (long)*(int *)(lVar13 + 0x18));
    }
    if (in_stack_00000020 == 0) goto LAB_077640fc;
    uVar12 = FUN_05a2ad3c(in_stack_00000020,*(undefined8 *)PTR_DAT_09f32cc8);
    unaff_x26 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
    FUN_07a80df4(unaff_x26,0);
    *(undefined8 *)(unaff_x26 + 0x28) = uVar12;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x26 + 0x28),uVar12);
    puVar10 = PTR_DAT_09f32d00;
    uVar12 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
    puVar1 = (uint *)(unaff_x26 + 0x18);
    puVar2 = (uint *)(unaff_x26 + 0x1c);
    FUN_07762688(in_stack_00000018,uVar12,puVar1,puVar2);
    iVar3 = *(int *)(unaff_x26 + 0x18);
    lVar13 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)puVar10);
    if ((lVar13 == 0) || (*(long *)(lVar13 + 0x20) == 0)) goto LAB_077640fc;
    *puVar1 = iVar3 - *(int *)(*(long *)(lVar13 + 0x20) + 0x10);
    lVar13 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
    if ((lVar13 == 0) ||
       (((*(long *)(lVar13 + 0x20) == 0 ||
         (lVar13 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00), lVar13 == 0))
        || (*(long *)(lVar13 + 0x20) == 0)))) goto LAB_077640fc;
    unaff_x19 = in_stack_00000018;
    unaff_x27 = in_stack_00000010;
    if (*(char *)(in_stack_00000018 + 0x14) == '\0') {
      in_w9 = *puVar2;
      in_w8 = *puVar1;
    }
    else {
      fVar17 = logf((float)(int)*puVar1);
      fVar17 = exp2f((float)(int)(fVar17 / unaff_s8));
      uVar9 = 0x80000000;
      if (fVar17 != INFINITY) {
        uVar9 = (int)fVar17;
      }
      if (uVar9 < 3) {
        uVar9 = 2;
      }
      lVar13 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
      if ((lVar13 == 0) || (*(long *)(lVar13 + 0x20) == 0)) goto LAB_077640fc;
      uVar7 = *(uint *)(*(long *)(lVar13 + 0x20) + 0x18);
      if ((int)uVar7 <= (int)uVar9) {
        uVar9 = uVar7;
      }
      fVar17 = logf((float)(int)*puVar2);
      fVar17 = exp2f((float)(int)(fVar17 / unaff_s8));
      uVar7 = 0x80000000;
      if (fVar17 != INFINITY) {
        uVar7 = (int)fVar17;
      }
      if (uVar7 < 3) {
        uVar7 = 2;
      }
      lVar13 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
      if ((lVar13 == 0) || (*(long *)(lVar13 + 0x20) == 0)) goto LAB_077640fc;
      uVar8 = *(uint *)(*(long *)(lVar13 + 0x20) + 0x1c);
      if ((int)uVar8 <= (int)uVar7) {
        uVar7 = uVar8;
      }
      uVar8 = uVar9;
      if ((int)uVar9 < 0) {
        uVar8 = uVar9 + 1;
      }
      in_w9 = (int)uVar8 >> 1;
      if ((int)uVar8 >> 1 <= (int)uVar7) {
        in_w9 = uVar7;
      }
      uVar7 = in_w9;
      if ((int)in_w9 < 0) {
        uVar7 = in_w9 + 1;
      }
      in_w8 = (int)uVar7 >> 1;
      if ((int)uVar7 >> 1 <= (int)uVar9) {
        in_w8 = uVar9;
      }
    }
  } while( true );
}


