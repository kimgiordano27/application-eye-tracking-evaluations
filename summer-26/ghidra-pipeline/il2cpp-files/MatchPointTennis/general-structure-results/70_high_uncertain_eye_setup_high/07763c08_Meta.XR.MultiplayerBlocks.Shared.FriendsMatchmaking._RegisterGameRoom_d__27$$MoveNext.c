/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking.<RegisterGameRoom>d__27$$MoveNext
ENTRY_POINT: 07763c08
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


void Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<RegisterGameRoom>d__27__MoveNext
               (long param_1,ulong param_2,undefined8 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  float *unaff_x19;
  int unaff_w21;
  undefined8 *unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar16;
  int iVar17;
  float unaff_s8;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  
  while ((lVar10 = FUN_05badb74(param_1,param_2,param_3), lVar10 != 0 &&
         (*(long *)(lVar10 + 0x20) != 0))) {
    iVar6 = *(int *)(*(long *)(lVar10 + 0x20) + 0x10);
    lVar10 = FUN_05badb74(unaff_x28,unaff_x27 & 0xffffffff,*unaff_x23);
    if (lVar10 == 0) break;
    iVar7 = *(int *)(lVar10 + 0x20);
    lVar10 = FUN_05badb74(unaff_x28,unaff_x27 & 0xffffffff,*unaff_x23);
    if (lVar10 == 0) break;
    iVar8 = *(int *)(lVar10 + 0x14);
    lVar10 = FUN_05badb74(unaff_x28,unaff_x27 & 0xffffffff,*unaff_x23);
    if ((lVar10 == 0) || (in_stack_00000030 == 0)) break;
    if (*(uint *)(in_stack_00000030 + 0x18) <= unaff_x27) {
LAB_07764100:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    iVar17 = *(int *)(lVar10 + 0x18);
    unaff_x19[-3] = (float)(unaff_w21 - iVar6);
    unaff_x19[-2] = (float)iVar7;
    unaff_x19[-1] = (float)iVar8;
    *unaff_x19 = (float)iVar17;
    lVar10 = FUN_05badb74(unaff_x28,unaff_x27 & 0xffffffff,*unaff_x23);
    if ((lVar10 == 0) || (unaff_x25 == 0)) break;
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_x27) goto LAB_07764100;
    unaff_x19 = unaff_x19 + 4;
    *(undefined4 *)(in_stack_00000028 + unaff_x27 * 4) = *(undefined4 *)(lVar10 + 0x10);
    unaff_x27 = unaff_x27 + 1;
    if ((long)*(int *)(unaff_x28 + 0x18) <= (long)unaff_x27) {
      do {
        if (in_stack_00000020 == 0) goto LAB_077640fc;
        uVar11 = FUN_05a2ad3c(in_stack_00000020,*(undefined8 *)PTR_DAT_09f32cc8);
        lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
        FUN_07a80df4(lVar10,0);
        *(undefined8 *)(lVar10 + 0x28) = uVar11;
        thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x28),uVar11);
        puVar9 = PTR_DAT_09f32d00;
        uVar11 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
        puVar1 = (uint *)(lVar10 + 0x18);
        puVar2 = (uint *)(lVar10 + 0x1c);
        FUN_07762688(in_stack_00000018,uVar11,puVar1,puVar2);
        iVar6 = *(int *)(lVar10 + 0x18);
        lVar12 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)puVar9);
        if ((lVar12 == 0) || (*(long *)(lVar12 + 0x20) == 0)) goto LAB_077640fc;
        *puVar1 = iVar6 - *(int *)(*(long *)(lVar12 + 0x20) + 0x10);
        lVar12 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
        if ((lVar12 == 0) ||
           (((*(long *)(lVar12 + 0x20) == 0 ||
             (lVar12 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00),
             lVar12 == 0)) || (*(long *)(lVar12 + 0x20) == 0)))) goto LAB_077640fc;
        if (*(char *)(in_stack_00000018 + 0x14) == '\0') {
          uVar14 = *puVar2;
          uVar5 = *puVar1;
        }
        else {
          fVar16 = logf((float)(int)*puVar1);
          fVar16 = exp2f((float)(int)(fVar16 / unaff_s8));
          uVar4 = 0x80000000;
          if (fVar16 != INFINITY) {
            uVar4 = (int)fVar16;
          }
          if (uVar4 < 3) {
            uVar4 = 2;
          }
          lVar12 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
          if ((lVar12 == 0) || (*(long *)(lVar12 + 0x20) == 0)) goto LAB_077640fc;
          uVar14 = *(uint *)(*(long *)(lVar12 + 0x20) + 0x18);
          if ((int)uVar14 <= (int)uVar4) {
            uVar4 = uVar14;
          }
          fVar16 = logf((float)(int)*puVar2);
          fVar16 = exp2f((float)(int)(fVar16 / unaff_s8));
          uVar5 = 0x80000000;
          if (fVar16 != INFINITY) {
            uVar5 = (int)fVar16;
          }
          if (uVar5 < 3) {
            uVar5 = 2;
          }
          lVar12 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
          if ((lVar12 == 0) || (*(long *)(lVar12 + 0x20) == 0)) goto LAB_077640fc;
          uVar14 = *(uint *)(*(long *)(lVar12 + 0x20) + 0x1c);
          if ((int)uVar14 <= (int)uVar5) {
            uVar5 = uVar14;
          }
          uVar3 = uVar4;
          if ((int)uVar4 < 0) {
            uVar3 = uVar4 + 1;
          }
          uVar14 = (int)uVar3 >> 1;
          if ((int)uVar3 >> 1 <= (int)uVar5) {
            uVar14 = uVar5;
          }
          uVar3 = uVar14;
          if ((int)uVar14 < 0) {
            uVar3 = uVar14 + 1;
          }
          uVar5 = (int)uVar3 >> 1;
          if ((int)uVar3 >> 1 <= (int)uVar4) {
            uVar5 = uVar4;
          }
        }
        *(uint *)(lVar10 + 0x10) = uVar5;
        *(uint *)(lVar10 + 0x14) = uVar14;
        *(long *)(lVar10 + 0x20) = in_stack_00000030;
        thunk_FUN_044bb4b4();
        *(long *)(lVar10 + 0x30) = unaff_x25;
        thunk_FUN_044bb4b4((long *)(lVar10 + 0x30),unaff_x25);
        FUN_077606dc(lVar10);
        if (in_stack_00000010 == 0) goto LAB_077640fc;
        lVar12 = *(long *)(in_stack_00000010 + 0x10);
        lVar15 = *(long *)PTR_DAT_09f32cb8;
        *(int *)(in_stack_00000010 + 0x1c) = *(int *)(in_stack_00000010 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_077640fc;
        uVar14 = *(uint *)(in_stack_00000010 + 0x18);
        if (uVar14 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(in_stack_00000010 + 0x18) = uVar14 + 1;
          plVar13 = (long *)(lVar12 + (long)(int)uVar14 * 8 + 0x20);
          *plVar13 = lVar10;
          thunk_FUN_044bb4b4(plVar13,lVar10);
        }
        else {
          FUN_05bade44(in_stack_00000010,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        uVar11 = FUN_05a28f70(in_stack_00000020,unaff_w24,*(undefined8 *)PTR_DAT_09f32c78);
        FUN_07761148(uVar11,lVar10,uVar11);
        if (3 < *(int *)(in_stack_00000018 + 0x10)) {
          lVar12 = *(long *)PTR_DAT_09f22e40;
          lVar10 = *(long *)(lVar12 + 0x38);
          if (lVar10 == 0) {
            FUN_04482014(lVar12);
            lVar10 = *(long *)(lVar12 + 0x38);
          }
          lVar10 = *(long *)(lVar10 + 0x10);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_04481fb8();
          }
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_04481fb8();
          }
          uVar11 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f32d68,**(undefined8 **)(lVar10 + 0xb8),0);
          lVar12 = *(long *)PTR_DAT_09f22e40;
          lVar10 = *(long *)(lVar12 + 0x38);
          if (lVar10 == 0) {
            FUN_04482014(lVar12);
            lVar10 = *(long *)(lVar12 + 0x38);
          }
          lVar10 = *(long *)(lVar10 + 0x10);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_04481fb8();
          }
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_04481fb8();
          }
          FUN_0771ec00(uVar11,**(undefined8 **)(lVar10 + 0xb8),0);
        }
        unaff_w24 = unaff_w24 + 1;
        if (*(int *)(unaff_x29 + 0x18) <= (int)unaff_w24) {
          if (in_stack_00000010 != 0) {
            FUN_05baf9bc(in_stack_00000010,*(undefined8 *)PTR_DAT_09f32cd0);
            return;
          }
          goto LAB_077640fc;
        }
        unaff_x28 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
        FUN_05bad610(unaff_x28,*(undefined8 *)PTR_DAT_09f32ce0);
        uVar11 = FUN_05badb74(unaff_x29,unaff_w24,*(undefined8 *)PTR_DAT_09f32d00);
        FUN_077617f0(uVar11,unaff_x28);
        if (unaff_x28 == 0) goto LAB_077640fc;
        in_stack_00000030 =
             FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(unaff_x28 + 0x18));
        unaff_x25 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(unaff_x28 + 0x18));
      } while (*(int *)(unaff_x28 + 0x18) < 1);
      in_stack_00000028 = unaff_x25 + 0x20;
      unaff_x27 = 0;
      unaff_x19 = (float *)(in_stack_00000030 + 0x2c);
    }
    lVar10 = FUN_05badb74(unaff_x28,unaff_x27 & 0xffffffff,*unaff_x23);
    if (lVar10 == 0) break;
    unaff_w21 = *(int *)(lVar10 + 0x1c);
    param_2 = (ulong)unaff_w24;
    param_3 = *(undefined8 *)PTR_DAT_09f32d00;
    param_1 = unaff_x29;
  }
LAB_077640fc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


