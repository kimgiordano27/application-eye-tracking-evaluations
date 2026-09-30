/*
FUNCTION_NAME: FUN_095e4284
ENTRY_POINT: 095e4284
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_8
*/


void FUN_095e4284(void)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  long lVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  short *in_stack_00000080;
  ulong in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  short *in_stack_000000a0;
  uint uStack00000000000000a8;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000d0;
  ulong in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f0;
  
code_r0x095e4284:
  uVar5 = FUN_046f396c();
  if ((uVar5 == 0xffffffff) || (uVar3 = FUN_046f396c(), uVar3 == 0xffffffff)) {
    return;
  }
  if (unaff_x20 == 0) goto UnityEngine_UIElements_CreationContext__get_serializedDataOverrides;
  uVar13 = *(uint *)(unaff_x20 + 0x18);
  uVar1 = uVar5 + 1;
  if ((int)uVar1 < (int)uVar13) {
    if (uVar13 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    if (uVar3 != uVar1) {
      if (*(short *)(unaff_x20 + (long)(int)uVar1 * 2 + 0x20) != 0x2f) goto LAB_095e3b78;
      if (*(long *)(*(long *)PTR_DAT_09f43690 + 0x38) == 0) {
        FUN_04482014();
        uVar13 = *(uint *)(unaff_x20 + 0x18);
      }
      uVar1 = uVar5 + 2;
      uVar15 = (uVar3 - uVar5) - 2;
      if ((uVar13 < uVar1) || (uVar13 - uVar1 < uVar15)) {
        FUN_07a5ec1c(0);
      }
      auVar18 = FUN_066b27e4(in_stack_00000028 + (long)(int)uVar1 * 2,uVar15,
                             *(undefined8 *)PTR_DAT_09f3a878);
      if (*(int *)(*(long *)PTR_DAT_09fd96f0 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar6 = FUN_095e3510(auVar18._0_8_,auVar18._8_8_,(long)&stack0x00000050 + 4,&stack0x00000048,
                           &stack0x00000080);
      lVar14 = in_stack_00000048;
      if ((uVar6 & 1) == 0) {
joined_r0x095e3cf8:
        if ((unaff_x19 != 0) && (lVar14 != 0)) {
          lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fd9738);
          FUN_07a80df4(lVar9,0);
          *(long *)(lVar9 + 0x18) = lVar14;
          thunk_FUN_044bb4b4((long *)(lVar9 + 0x18),lVar14);
          *(uint *)(lVar9 + 0x10) = uVar5;
          lVar14 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar14 == 0) goto UnityEngine_UIElements_CreationContext__get_serializedDataOverrides;
          uVar5 = *(uint *)(unaff_x19 + 0x18);
          if (uVar5 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar5 + 1;
            plVar10 = (long *)(lVar14 + (long)(int)uVar5 * 8 + 0x20);
            *plVar10 = lVar9;
            thunk_FUN_044bb4b4(plVar10,lVar9);
          }
          else {
            FUN_05bade44();
          }
        }
        goto code_r0x095e4284;
      }
      in_stack_00000060 = CONCAT44(uVar3,uVar5);
      in_stack_00000058 = (ulong)CONCAT14(1,in_stack_00000050._4_4_);
      in_stack_00000068 = 0;
      if (unaff_x21 != 0) {
        in_stack_000000c0 = in_stack_00000058;
        in_stack_000000d0 = 0;
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        in_stack_000000c8 = in_stack_00000060;
        if (lVar14 == 0) goto UnityEngine_UIElements_CreationContext__get_serializedDataOverrides;
        uVar5 = *(uint *)(unaff_x21 + 0x18);
        if (uVar5 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar5 + 1;
          lVar14 = lVar14 + (long)(int)uVar5 * 0x18;
          *(undefined8 *)(lVar14 + 0x30) = 0;
          *(undefined8 *)(lVar14 + 0x28) = in_stack_00000060;
          *(ulong *)(lVar14 + 0x20) = in_stack_00000058;
          thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x30),0);
        }
        else {
          in_stack_000000e0 = in_stack_00000058;
          in_stack_000000f0 = 0;
          in_stack_000000e8 = in_stack_00000060;
          FUN_05e43380();
        }
        goto code_r0x095e4284;
      }
      goto UnityEngine_UIElements_CreationContext__get_serializedDataOverrides;
    }
  }
  else if (uVar3 != uVar1) {
LAB_095e3b78:
    uVar15 = uVar3 + 1;
    if (*(long *)(*(long *)PTR_DAT_09f43690 + 0x38) == 0) {
      FUN_04482014();
      uVar13 = *(uint *)(unaff_x20 + 0x18);
    }
    if ((uVar13 <= uVar5) || (uVar13 - uVar1 < uVar3 + ~uVar5)) {
      FUN_07a5ec1c(0);
    }
    auVar18 = FUN_066b27e4(in_stack_00000028 + (long)(int)uVar1 * 2,uVar3 + ~uVar5,
                           *(undefined8 *)PTR_DAT_09f3a878);
    if (*(int *)(*(long *)PTR_DAT_09fd96f0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar7 = FUN_095e3510(auVar18._0_8_,auVar18._8_8_,(long)&stack0x000000b8 + 4,&stack0x000000b0,
                         &stack0x000000a0);
    uVar1 = in_stack_000000b8._4_4_;
    uVar6 = _uStack00000000000000a8;
    psVar2 = in_stack_000000a0;
    lVar14 = in_stack_000000b0;
    if ((uVar7 & 1) == 0) goto joined_r0x095e3cf8;
    if (in_stack_000000b8._4_4_ == 0) {
      lVar14 = *(long *)PTR_DAT_09fd9748;
      if (DAT_0a51d028 == '\0') {
        FUN_04447ba8(PTR_DAT_09f28738);
        DAT_0a51d028 = '\x01';
        if (lVar14 == 0) goto LAB_095e3eac;
LAB_095e3dec:
        uVar8 = FUN_078b1c78(lVar14,0);
        uVar12 = *(undefined4 *)(lVar14 + 0x10);
      }
      else {
        if (lVar14 != 0) goto LAB_095e3dec;
LAB_095e3eac:
        uVar8 = 0;
        uVar12 = 0;
      }
      uVar6 = FUN_07a4ca80(psVar2,uVar6,uVar8,uVar12,*(undefined8 *)PTR_DAT_09f44d38);
      if ((uVar6 & 1) != 0) {
        if (*(long *)PTR_DAT_09fd9748 == 0)
        goto UnityEngine_UIElements_CreationContext__get_serializedDataOverrides;
        uVar13 = *(uint *)(*(long *)PTR_DAT_09fd9748 + 0x10);
        lVar14 = *(long *)PTR_DAT_09f40e98;
        uVar16 = uStack00000000000000a8;
        if (uStack00000000000000a8 < uVar13) {
          FUN_07a5ec1c(0);
          uVar16 = uStack00000000000000a8;
        }
        psVar2 = in_stack_000000a0;
        if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        _uStack00000000000000a8 = (ulong)(uVar16 - uVar13);
        in_stack_000000a0 = psVar2 + (int)uVar13;
      }
LAB_095e3f28:
      psVar2 = in_stack_000000a0;
      uVar13 = uStack00000000000000a8 - 1;
      if ((int)uStack00000000000000a8 < 1) {
LAB_095e3fe4:
        puVar11 = &stack0x000000a0;
        uVar8 = *(undefined8 *)PTR_DAT_09f43a08;
      }
      else {
        uVar16 = uStack00000000000000a8;
        if (*in_stack_000000a0 == 0x3d) {
          if ((*(byte *)(*(long *)(*(long *)PTR_DAT_09f40e98 + 0x20) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          in_stack_000000a0 = psVar2 + 1;
          uVar16 = uVar13;
          _uStack00000000000000a8 = (ulong)uVar13;
        }
        if ((((int)uVar16 < 2) || (*in_stack_000000a0 != 0x22)) ||
           (in_stack_000000a0[uVar16 - 1] != 0x22)) goto LAB_095e3fe4;
        lVar14 = *(long *)PTR_DAT_09f404c8;
        if (uVar16 - 1 < uVar16 - 2) {
          FUN_07a5ec1c(0);
        }
        psVar2 = in_stack_000000a0;
        if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        in_stack_00000080 = psVar2 + 1;
        puVar11 = &stack0x00000080;
        uVar8 = *(undefined8 *)PTR_DAT_09f43a08;
        in_stack_00000088 = (ulong)(uVar16 - 2);
      }
      uVar8 = FUN_065cd32c(puVar11,uVar8);
      lVar14 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fd9740);
      FUN_07a80df4(lVar14,0);
      *(undefined4 *)(lVar14 + 0x10) = 2;
      *(undefined8 *)(lVar14 + 0x18) = uVar8;
      thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x18),uVar8);
    }
    else {
      if (in_stack_000000b8._4_4_ == 0xe) goto LAB_095e3f28;
      if (in_stack_000000b8._4_4_ == 6) {
        uVar13 = uStack00000000000000a8;
        if ((int)uStack00000000000000a8 < 2) {
LAB_095e3e0c:
          uVar8 = FUN_065cd32c(&stack0x000000a0,*(undefined8 *)PTR_DAT_09f43a08);
          FUN_09510c88(uVar8,&stack0x00000070,0);
          uVar8 = in_stack_00000070;
          uVar17 = in_stack_00000078;
        }
        else {
          if (*in_stack_000000a0 == 0x3d) {
            if ((*(byte *)(*(long *)(*(long *)PTR_DAT_09f40e98 + 0x20) + 0x135) & 1) == 0) {
              FUN_04481fb8();
            }
            uVar13 = uVar13 - 1;
            _uStack00000000000000a8 = (ulong)uVar13;
            in_stack_000000a0 = psVar2 + 1;
          }
          if ((((int)uVar13 < 4) || (*in_stack_000000a0 != 0x22)) ||
             (in_stack_000000a0[uVar13 - 1] != 0x22)) goto LAB_095e3e0c;
          lVar14 = *(long *)PTR_DAT_09f404c8;
          if (uVar13 - 1 < uVar13 - 2) {
            FUN_07a5ec1c(0);
          }
          psVar2 = in_stack_000000a0;
          if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          in_stack_00000080 = psVar2 + 1;
          in_stack_00000088 = (ulong)(uVar13 - 2);
          uVar8 = FUN_065cd32c(&stack0x00000080,*(undefined8 *)PTR_DAT_09f43a08);
          FUN_09510c88(uVar8,&stack0x00000090,0);
          uVar8 = in_stack_00000090;
          uVar17 = in_stack_00000098;
        }
        lVar14 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fd9740);
        FUN_07a80df4(lVar14,0);
        *(undefined4 *)(lVar14 + 0x10) = 4;
        *(undefined8 *)(lVar14 + 0x2c) = uVar17;
        *(undefined8 *)(lVar14 + 0x24) = uVar8;
      }
      else {
        lVar14 = 0;
      }
    }
    in_stack_00000060 = CONCAT44(uVar3,uVar5);
    in_stack_00000058 = (ulong)uVar1;
    in_stack_00000068 = lVar14;
    thunk_FUN_044bb4b4(in_stack_00000020,lVar14);
    if (unaff_x21 != 0) {
      in_stack_000000c8 = in_stack_00000060;
      in_stack_000000c0 = in_stack_00000058;
      in_stack_000000d0 = in_stack_00000068;
      lVar14 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar14 != 0) {
        uVar5 = *(uint *)(unaff_x21 + 0x18);
        if (uVar5 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar5 + 1;
          lVar14 = lVar14 + (long)(int)uVar5 * 0x18;
          *(long *)(lVar14 + 0x30) = in_stack_00000068;
          *(undefined8 *)(lVar14 + 0x28) = in_stack_00000060;
          *(ulong *)(lVar14 + 0x20) = in_stack_00000058;
          thunk_FUN_044bb4b4((long *)(lVar14 + 0x30),0);
        }
        else {
          in_stack_000000e8 = in_stack_00000060;
          in_stack_000000e0 = in_stack_00000058;
          in_stack_000000f0 = in_stack_00000068;
          FUN_05e43380();
        }
        if (uVar1 != 0x13) goto code_r0x095e4284;
        if (*(long *)(*(long *)PTR_DAT_09fd9728 + 0x38) == 0) {
          FUN_04482014();
        }
        uVar5 = *(uint *)(unaff_x20 + 0x18);
        if (uVar5 < uVar15) {
          FUN_07a5ec1c(0);
          uVar5 = *(uint *)(unaff_x20 + 0x18);
        }
        lVar14 = *(long *)PTR_DAT_09f24c08;
        if (DAT_0a51d028 == '\0') {
          FUN_04447ba8(PTR_DAT_09f28738);
          DAT_0a51d028 = '\x01';
        }
        if (lVar14 == 0) {
          uVar8 = 0;
          uVar12 = 0;
        }
        else {
          uVar8 = FUN_078b1c78(lVar14,0);
          uVar12 = *(undefined4 *)(lVar14 + 0x10);
        }
        iVar4 = FUN_095f7bfc(in_stack_00000028 + (long)(int)uVar15 * 2,uVar5 - uVar15,uVar8,uVar12,
                             *(undefined8 *)PTR_DAT_09fd9730);
        if (iVar4 == -1) {
          return;
        }
        if (*(long *)PTR_DAT_09f24c08 == 0)
        goto UnityEngine_UIElements_CreationContext__get_serializedDataOverrides;
        in_stack_00000058 = 0x100000013;
        in_stack_00000060 =
             CONCAT44(*(int *)(*(long *)PTR_DAT_09f24c08 + 0x10) + iVar4 + uVar15,iVar4 + uVar15);
        in_stack_00000068 = 0;
        in_stack_000000d0 = 0;
        in_stack_000000c8 = in_stack_00000060;
        in_stack_000000c0 = 0x100000013;
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar5 = *(uint *)(unaff_x21 + 0x18);
          if (uVar5 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar5 + 1;
            lVar14 = lVar14 + (long)(int)uVar5 * 0x18;
            *(undefined8 *)(lVar14 + 0x30) = 0;
            *(undefined8 *)(lVar14 + 0x28) = in_stack_00000060;
            *(undefined8 *)(lVar14 + 0x20) = 0x100000013;
            thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x30),0);
          }
          else {
            in_stack_000000e8 = in_stack_00000060;
            in_stack_000000e0 = 0x100000013;
            in_stack_000000f0 = 0;
            FUN_05e43380();
          }
          goto code_r0x095e4284;
        }
      }
    }
    goto UnityEngine_UIElements_CreationContext__get_serializedDataOverrides;
  }
  if (unaff_x19 == 0) goto code_r0x095e4284;
  lVar14 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fd9738);
  uVar8 = *(undefined8 *)PTR_DAT_09fd9750;
  FUN_07a80df4(lVar14,0);
  *(undefined8 *)(lVar14 + 0x18) = uVar8;
  thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x18),uVar8);
  *(uint *)(lVar14 + 0x10) = uVar5;
  lVar9 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar9 != 0) {
    uVar5 = *(uint *)(unaff_x19 + 0x18);
    if (uVar5 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar5 + 1;
      plVar10 = (long *)(lVar9 + (long)(int)uVar5 * 8 + 0x20);
      *plVar10 = lVar14;
      thunk_FUN_044bb4b4(plVar10,lVar14);
    }
    else {
      FUN_05bade44();
    }
    goto code_r0x095e4284;
  }
UnityEngine_UIElements_CreationContext__get_serializedDataOverrides:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


