/*
FUNCTION_NAME: Unity.VisualScripting.LudiqScriptableObject$$OnPostDeserializeInEditor
ENTRY_POINT: 082d2c38
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


undefined4
Unity_VisualScripting_LudiqScriptableObject__OnPostDeserializeInEditor
          (long *param_1,undefined1 param_2 [16],ulong param_3)

{
  undefined4 uVar1;
  byte bVar2;
  float fVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined4 *puVar23;
  long lVar24;
  long unaff_x19;
  long *plVar25;
  long *plVar26;
  uint *unaff_x23;
  uint unaff_w24;
  undefined8 uVar27;
  uint unaff_w25;
  long unaff_x26;
  uint unaff_w27;
  uint unaff_w29;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  uint in_stack_00000020;
  uint uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  int iStack0000000000000038;
  undefined4 uStack000000000000003c;
  long in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000e0;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  long in_stack_00000138;
  uint uStack0000000000000148;
  undefined1 uStack000000000000014c;
  
code_r0x082d2c38:
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uStack0000000000000024 = FUN_08322014(0);
Unity_VisualScripting_RequiresUnityAPIAttribute___ctor:
  *unaff_x23 = uStack0000000000000024;
  uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
  if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar12 = FUN_082eacf4(uStack0000000000000024,uVar27,1,0,400,(long)&stack0x00000148 + 4,0);
  if (lVar12 == 0) {
    if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar12 = FUN_08322588(0);
    if (lVar12 != 0) {
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar12 = FUN_08322588(0);
      if (lVar12 == 0) goto LAB_082d43c0;
      if (0 < *(int *)(lVar12 + 0x18)) {
        uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
        if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar11 = FUN_08322588(0);
        if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
          thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
        }
        lVar12 = FUN_082eb454(uStack0000000000000024,uVar27,uVar11,1,0,400,
                              (long)&stack0x00000148 + 4,0);
        unaff_x26 = in_stack_00000040;
        if (lVar12 != 0) goto LAB_082d2f0c;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar27 = FUN_08322188(0);
    if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)PTR_DAT_08f65598);
    }
    uVar13 = FUN_0858816c(uVar27,0,0);
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar27 = FUN_08322188(0);
      if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
        thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
      }
      lVar12 = FUN_082eacf4(uStack0000000000000024,uVar27,1,0,400,(long)&stack0x00000148 + 4,0);
      if (lVar12 != 0) goto LAB_082d2f0c;
    }
    if (*(uint *)(unaff_x26 + 0x18) <= unaff_w27) goto LAB_082d4458;
    *unaff_x23 = 0x20;
    uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
    if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uStack0000000000000024 = 0x20;
    lVar12 = FUN_082eacf4(0x20,uVar27,1,0,400,(long)&stack0x00000148 + 4,0);
    if (lVar12 == 0) {
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_w27) goto LAB_082d4458;
      *unaff_x23 = 3;
      uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
      if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uStack0000000000000024 = 3;
      lVar12 = FUN_082eacf4(3,uVar27,1,0,400,(long)&stack0x00000148 + 4,0);
    }
  }
LAB_082d2f0c:
  if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar13 = FUN_0832212c(0);
  uVar10 = unaff_w27;
  if ((uVar13 & 1) == 0) {
    plVar14 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08f65d88,4);
    if (unaff_w25 >> 0x10 == 0) {
      in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,unaff_w25);
      lVar15 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x00000050);
      if (plVar14 == (long *)0x0) goto LAB_082d43c0;
      if ((lVar15 != 0) &&
         (lVar16 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar14 + 0x40)), lVar16 == 0))
      goto LAB_082d445c;
      if ((int)plVar14[3] == 0) goto LAB_082d4458;
      plVar14[4] = lVar15;
      if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_082d43c0;
      lVar15 = thunk_FUN_0858dfc0(*(long *)(unaff_x19 + 0xf8),0);
      if ((lVar15 != 0) &&
         (lVar16 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar14 + 0x40)), lVar16 == 0))
      goto LAB_082d445c;
      if ((*(uint *)(plVar14 + 3) & 0xfffffffe) == 0) goto LAB_082d4458;
      plVar14[5] = lVar15;
      if (lVar12 == 0) goto LAB_082d43c0;
      in_stack_000000e0 = *(undefined4 *)(lVar12 + 0x14);
      lVar15 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x000000e0);
      if ((lVar15 != 0) &&
         (lVar16 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar14 + 0x40)), lVar16 == 0))
      goto LAB_082d445c;
      if (*(uint *)(plVar14 + 3) < 3) goto LAB_082d4458;
      plVar14[6] = lVar15;
      lVar15 = thunk_FUN_0858dfc0();
      if ((lVar15 != 0) &&
         (lVar16 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar14 + 0x40)), lVar16 == 0))
      goto LAB_082d445c;
      if ((*(uint *)(plVar14 + 3) & 0xfffffffc) == 0) goto LAB_082d4458;
      plVar14[7] = lVar15;
      puVar21 = (undefined8 *)PTR_DAT_08ff6898;
    }
    else {
      in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,unaff_w25);
      lVar15 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x00000050);
      if (plVar14 == (long *)0x0) goto LAB_082d43c0;
      if ((lVar15 != 0) &&
         (lVar16 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar14 + 0x40)), lVar16 == 0))
      goto LAB_082d445c;
      if ((int)plVar14[3] == 0) goto LAB_082d4458;
      plVar14[4] = lVar15;
      if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_082d43c0;
      lVar15 = thunk_FUN_0858dfc0(*(long *)(unaff_x19 + 0xf8),0);
      if ((lVar15 != 0) &&
         (lVar16 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar14 + 0x40)), lVar16 == 0))
      goto LAB_082d445c;
      if ((*(uint *)(plVar14 + 3) & 0xfffffffe) == 0) goto LAB_082d4458;
      plVar14[5] = lVar15;
      if (lVar12 == 0) goto LAB_082d43c0;
      in_stack_000000e0 = *(undefined4 *)(lVar12 + 0x14);
      lVar15 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x000000e0);
      if ((lVar15 != 0) &&
         (lVar16 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar14 + 0x40)), lVar16 == 0))
      goto LAB_082d445c;
      if (*(uint *)(plVar14 + 3) < 3) goto LAB_082d4458;
      plVar14[6] = lVar15;
      lVar15 = thunk_FUN_0858dfc0();
      if ((lVar15 != 0) &&
         (lVar16 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar14 + 0x40)), lVar16 == 0))
      goto LAB_082d445c;
      if ((*(uint *)(plVar14 + 3) & 0xfffffffc) == 0) goto LAB_082d4458;
      plVar14[7] = lVar15;
      puVar21 = (undefined8 *)PTR_DAT_08ff6890;
    }
    uVar27 = FUN_0736a31c(*puVar21,plVar14,0);
    if (*(int *)(*(long *)PTR_DAT_08f655a0 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_085392e4(uVar27);
    unaff_x26 = in_stack_00000040;
  }
LAB_082d2b28:
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar15 == 0)) goto LAB_082d43c0;
  if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_082d4458;
  *(undefined8 *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) = 0;
  if (lVar12 == 0) goto LAB_082d43c0;
  if (*(char *)(lVar12 + 0x10) == '\x01') {
    if (*(long *)(lVar12 + 0x18) == 0) goto LAB_082d43c0;
    iVar6 = FUN_082d75b4(*(long *)(lVar12 + 0x18),0);
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
    iVar7 = FUN_082d75b4(*(long *)(unaff_x19 + 0x100),0);
    bVar5 = iVar6 != iVar7;
    if (bVar5) {
      plVar14 = *(long **)(lVar12 + 0x18);
      if (plVar14 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_08fc1610 + 0x130);
        if (*(byte *)(*plVar14 + 0x130) < bVar2) {
          plVar14 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                 *(long *)PTR_DAT_08fc1610) {
          plVar14 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x100) = plVar14;
    }
    if ((unaff_w24 >> 4 == 0xfe0) || (unaff_w24 - 0xe0100 < 0xf0)) {
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
      iVar6 = FUN_082e450c(*(long *)(unaff_x19 + 0x100),uStack0000000000000024,unaff_w24,0);
      if (iVar6 != 0) {
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
        uVar13 = FUN_082e6834(*(long *)(unaff_x19 + 0x100),iVar6,&stack0x00000130,0);
        if ((uVar13 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
             (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar15 == 0))
          goto LAB_082d43c0;
          if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_082d4458;
          *(undefined8 *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
               in_stack_00000130;
        }
      }
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_w29) goto LAB_082d4458;
      *(undefined4 *)(in_stack_00000048 + (long)(int)unaff_w29 * 0x10 + 4) = 0x1a;
      uVar10 = unaff_w29;
    }
    if ((in_stack_00000020 & 1) != 0) {
      if (((*(long *)(unaff_x19 + 0x100) == 0) ||
          (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar15 == 0)) ||
         (lVar15 = *(long *)(lVar15 + 0x38), lVar15 == 0)) goto LAB_082d43c0;
      uVar13 = FUN_070b305c(lVar15,*(undefined4 *)(lVar12 + 0x28),&stack0x00000138,
                            *(undefined8 *)PTR_DAT_08ff6838);
      if ((uVar13 & 1) == 0) goto LAB_082d345c;
      if (in_stack_00000138 == 0) {
LAB_082d3af0:
        plVar14 = (long *)PTR_DAT_08fc16b0;
        if (*(char *)(unaff_x19 + 0x42d) != '\0') {
          *(undefined1 *)(unaff_x19 + 0x42d) = 0;
          goto LAB_082d3afc;
        }
        lVar12 = *(long *)(unaff_x19 + 0x3a0);
        if (lVar12 == 0) goto LAB_082d43c0;
        lVar15 = *(long *)PTR_DAT_08fc16b0;
        *(int *)(lVar12 + 0x1c) = iStack0000000000000038;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar15 = *plVar14;
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
        if (lVar15 == 0) goto LAB_082d43c0;
        uVar10 = FUN_06ee1f14(lVar15,*(undefined8 *)PTR_DAT_08f76d38);
        *(uint *)(lVar12 + 0x34) = uVar10;
        if (*(long *)(unaff_x19 + 0x3a0) == 0) goto LAB_082d43c0;
        plVar25 = (long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60);
        lVar12 = *plVar25;
        if (lVar12 == 0) goto LAB_082d43c0;
        uVar13 = (ulong)uVar10;
        if (*(int *)(lVar12 + 0x18) < (int)uVar10) {
          if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<quaternion>
                    (plVar25,uVar13,0,*(undefined8 *)PTR_DAT_08ff6880);
        }
        if (*(long *)(unaff_x19 + 0x720) == 0) goto LAB_082d43c0;
        plVar25 = (long *)(unaff_x19 + 0x720);
        if (*(int *)(*(long *)(unaff_x19 + 0x720) + 0x18) < (int)uVar10) {
          uVar20 = uVar10 | (int)uVar10 >> 0x10;
          uVar20 = uVar20 | (int)uVar20 >> 8;
          uVar20 = uVar20 | (int)uVar20 >> 4;
          uVar20 = uVar20 | (int)uVar20 >> 2;
          if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          FUN_04d0f434(plVar25,(uVar20 | (int)uVar20 >> 1) + 1,*(undefined8 *)PTR_DAT_08ff69b8);
        }
        if (*(char *)(unaff_x19 + 0x359) != '\0') {
          if (*(long *)(unaff_x19 + 0x3a0) == 0) goto LAB_082d43c0;
          plVar26 = (long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38);
          lVar12 = *plVar26;
          if (lVar12 == 0) goto LAB_082d43c0;
          iVar6 = *(int *)(unaff_x19 + 0x4a0);
          if (0x100 < *(int *)(lVar12 + 0x18) - iVar6) {
            iVar7 = 0x100;
            if (0x100 < iVar6 + 1) {
              iVar7 = iVar6 + 1;
            }
            if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            FUN_04d0f664(plVar26,iVar7,1,*(undefined8 *)PTR_DAT_08ff6878);
          }
        }
        puVar4 = PTR_DAT_08ff65a8;
        fVar3 = DAT_01a2e7f0;
        if ((int)uVar10 < 1) goto LAB_082d4308;
        lVar12 = 0;
        uVar17 = 0;
        lVar15 = 0x54;
        goto LAB_082d3cbc;
      }
      iVar6 = 0;
      while (unaff_x26 = in_stack_00000040, iVar6 < *(int *)(in_stack_00000138 + 0x18)) {
        auVar32 = FUN_057805a8(in_stack_00000138,iVar6,*(undefined8 *)PTR_DAT_08ff6860);
        lVar15 = auVar32._0_8_;
        if (lVar15 == 0) goto LAB_082d43c0;
        uVar13 = *(ulong *)(lVar15 + 0x18);
        iVar7 = (int)uVar13;
        if (1 < iVar7) {
          lVar16 = 0;
          do {
            uVar20 = uVar10 + 1 + (int)lVar16;
            if (*(uint *)(in_stack_00000040 + 0x18) <= uVar20) goto LAB_082d4458;
            if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
            iVar8 = FUN_082e4430(*(long *)(unaff_x19 + 0x100),
                                 *(undefined4 *)(in_stack_00000048 + (long)(int)uVar20 * 0x10 + 4),0
                                );
            if (*(uint *)(lVar15 + 0x18) <= (int)lVar16 + 1U) goto LAB_082d4458;
            if (iVar8 != *(int *)(lVar15 + 0x24 + lVar16 * 4)) goto LAB_082d338c;
            lVar16 = lVar16 + 1;
          } while (iVar7 + -1 != (int)lVar16);
        }
        if (auVar32._8_4_ != 0) {
          if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
          uVar17 = FUN_082e6834(*(long *)(unaff_x19 + 0x100),auVar32._8_8_ & 0xffffffff,
                                &stack0x00000128,0);
          if ((uVar17 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
               (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar15 == 0))
            goto LAB_082d43c0;
            if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_082d4458;
            *(undefined8 *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
                 in_stack_00000128;
            if (iVar7 < 1) goto LAB_082d3454;
            uVar17 = 0;
            goto LAB_082d3410;
          }
        }
LAB_082d338c:
        iVar6 = iVar6 + 1;
        if (in_stack_00000138 == 0) goto LAB_082d43c0;
      }
    }
  }
  else {
    bVar5 = false;
  }
  goto LAB_082d345c;
LAB_082d3410:
  do {
    if (uVar17 == 0) {
      if (*(uint *)(in_stack_00000040 + 0x18) <= uVar10) goto LAB_082d4458;
      *(int *)(in_stack_00000048 + (long)(int)uVar10 * 0x10 + 0xc) = iVar7;
    }
    else {
      uVar20 = uVar10 + (int)uVar17;
      if (*(uint *)(in_stack_00000040 + 0x18) <= uVar20) goto LAB_082d4458;
      *(undefined4 *)(in_stack_00000048 + (long)(int)uVar20 * 0x10 + 4) = 0x1a;
    }
    uVar17 = uVar17 + 1;
  } while ((uVar13 & 0xffffffff) != uVar17);
LAB_082d3454:
  uVar10 = (uVar10 + iVar7) - 1;
LAB_082d345c:
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar15 == 0)) goto LAB_082d43c0;
  uVar20 = *(uint *)(unaff_x19 + 0x4a0);
  if (*(uint *)(lVar15 + 0x18) <= uVar20) goto LAB_082d4458;
  puVar23 = (undefined4 *)(lVar15 + 0x20 + (long)(int)uVar20 * 0x178);
  *puVar23 = 0;
  *(long *)(puVar23 + 4) = lVar12;
  *(short *)(puVar23 + 1) = (short)uStack0000000000000024;
  *(undefined1 *)(puVar23 + 0xd) = uStack000000000000014c;
  if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_082d4458;
  lVar16 = lVar15 + 0x20 + (long)(int)uVar20 * 0x178;
  *(undefined8 *)(lVar16 + 8) = *(undefined8 *)(in_stack_00000048 + (long)(int)uVar10 * 0x10 + 8);
  lVar15 = *(long *)(unaff_x19 + 0x100);
  *(long *)(lVar16 + 0x20) = lVar15;
  puVar4 = PTR_DAT_08fc16b0;
  if (*(char *)(lVar12 + 0x10) == '\x02') {
    plVar14 = *(long **)(lVar12 + 0x18);
    if (plVar14 == (long *)0x0) goto LAB_082d43c0;
    bVar2 = *(byte *)(*(long *)PTR_DAT_08fc1658 + 0x130);
    if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_08fc1658))
    goto LAB_082d43c0;
    lVar15 = plVar14[0x11];
    lVar12 = *(long *)PTR_DAT_08fc16b0;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar12 = *(long *)puVar4;
    }
    uVar20 = FUN_082c63fc(lVar15,plVar14,*(long *)(lVar12 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
    lVar12 = *(long *)puVar4;
    *(uint *)(unaff_x19 + 0x120) = uVar20;
    lVar12 = **(long **)(lVar12 + 0xb8);
    if (lVar12 == 0) goto LAB_082d43c0;
    if (*(uint *)(lVar12 + 0x18) <= uVar20) goto LAB_082d4458;
    lVar12 = lVar12 + (long)(int)uVar20 * 0x38;
    *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar12 == 0)) goto LAB_082d43c0;
    uVar20 = *(uint *)(unaff_x19 + 0x4a0);
    if (uVar20 < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + (long)(int)uVar20 * 0x178;
      *(undefined4 *)(lVar12 + 0x20) = 1;
      *(undefined4 *)(lVar12 + 0x50) = *(undefined4 *)(unaff_x19 + 0x120);
      *(undefined4 *)(unaff_x19 + 0x65c) = 0;
      *(undefined4 *)(unaff_x19 + 0x120) = uStack000000000000003c;
      goto LAB_082d35bc;
    }
    goto LAB_082d4458;
  }
  if (bVar5) {
    if (lVar15 == 0) goto LAB_082d43c0;
    iVar6 = FUN_082d75b4(lVar15,0);
    if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_082d43c0;
    iVar7 = FUN_082d75b4(*(long *)(unaff_x19 + 0xf8),0);
    if (iVar6 != iVar7) {
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar13 = FUN_08322644(0);
      if ((uVar13 & 1) == 0) {
        lVar15 = *(long *)(unaff_x19 + 0x100);
        if (lVar15 == 0) goto LAB_082d43c0;
        uVar27 = *(undefined8 *)(lVar15 + 0x88);
      }
      else {
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
        uVar27 = *(undefined8 *)(unaff_x19 + 0x118);
        uVar11 = *(undefined8 *)(*(long *)(unaff_x19 + 0x100) + 0x88);
        if (*(int *)(*(long *)PTR_DAT_08ff6870 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar27 = UnityEngine_XR_Interaction_Toolkit_XRInteractionManager__ClearInteractorHover
                           (uVar27,uVar11,0);
        lVar15 = *(long *)(unaff_x19 + 0x100);
      }
      puVar4 = PTR_DAT_08fc16b0;
      *(undefined8 *)(unaff_x19 + 0x118) = uVar27;
      lVar16 = *(long *)puVar4;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar16 = *(long *)puVar4;
      }
      uVar9 = FUN_082c61e4(uVar27,lVar15,*(long *)(lVar16 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
      *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
    }
  }
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar15 == 0)) goto LAB_082d43c0;
  if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_082d4458;
  lVar15 = *(long *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38);
  if ((lVar15 == 0) && (lVar15 = *(long *)(lVar12 + 0x20), lVar15 == 0)) goto LAB_082d43c0;
  iVar6 = FUN_086475ac(lVar15,0);
  if (0 < iVar6) {
    uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
    uVar11 = *(undefined8 *)(unaff_x19 + 0x118);
    if (*(int *)(*(long *)PTR_DAT_08ff6870 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar27 = FUN_0831d274(uVar27,uVar11,iVar6,0);
    puVar4 = PTR_DAT_08fc16b0;
    *(undefined8 *)(unaff_x19 + 0x118) = uVar27;
    uVar11 = *(undefined8 *)(unaff_x19 + 0x100);
    lVar12 = *(long *)puVar4;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar12 = *(long *)puVar4;
    }
    uVar9 = FUN_082c61e4(uVar27,uVar11,*(long *)(lVar12 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
    bVar5 = true;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
  }
  if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar13 = FUN_0744db94(uStack0000000000000024,0);
  puVar4 = PTR_DAT_08fc16b0;
  if (((uVar13 & 1) != 0) || (uStack0000000000000024 == 0x200b)) goto LAB_082d39f8;
  lVar12 = *(long *)PTR_DAT_08fc16b0;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar12 = *(long *)puVar4;
  }
  lVar15 = **(long **)(lVar12 + 0xb8);
  if (lVar15 == 0) goto LAB_082d43c0;
  uVar20 = *(uint *)(unaff_x19 + 0x120);
  if (*(uint *)(lVar15 + 0x18) <= uVar20) goto LAB_082d4458;
  if (*(int *)(lVar15 + (long)(int)uVar20 * 0x38 + 0x54) < 0x3fff) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      plVar14 = *(long **)(*(long *)PTR_DAT_08fc16b0 + 0xb8);
      goto Unity_VisualScripting_CoroutineRunner__Awake;
    }
LAB_082d3964:
    uVar20 = *(uint *)(unaff_x19 + 0x120);
  }
  else {
    if (bVar5) {
      if (*(long *)(unaff_x19 + 0x7b8) == 0) goto LAB_082d43c0;
      uVar13 = FUN_06ee3b1c(*(long *)(unaff_x19 + 0x7b8),(long)(int)uVar20,
                            (long)&stack0x00000120 + 4,*(undefined8 *)PTR_DAT_08fc5190);
      puVar4 = PTR_DAT_08fc16b0;
      if ((uVar13 & 1) == 0) {
LAB_082d3890:
        uVar11 = *(undefined8 *)(unaff_x19 + 0x118);
        uVar27 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f68540);
        FUN_0854ff98(uVar27,uVar11,0);
        puVar4 = PTR_DAT_08fc16b0;
        uVar11 = *(undefined8 *)(unaff_x19 + 0x100);
        lVar12 = *(long *)PTR_DAT_08fc16b0;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar12 = *(long *)puVar4;
        }
        uVar20 = FUN_082c61e4(uVar27,uVar11,*(long *)(lVar12 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
        if (*(long *)(unaff_x19 + 0x7b8) == 0) goto LAB_082d43c0;
        FUN_06ee2204(*(long *)(unaff_x19 + 0x7b8),*(undefined4 *)(unaff_x19 + 0x120),uVar20,
                     *(undefined8 *)PTR_DAT_08f7cfc8);
        lVar12 = *(long *)PTR_DAT_08fc16b0;
      }
      else {
        lVar12 = *(long *)PTR_DAT_08fc16b0;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar12 = *(long *)puVar4;
        }
        lVar15 = **(long **)(lVar12 + 0xb8);
        if (lVar15 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000120._4_4_) goto LAB_082d4458;
        uVar20 = in_stack_00000120._4_4_;
        if (0x3ffe < *(int *)(lVar15 + (long)(int)in_stack_00000120._4_4_ * 0x38 + 0x54))
        goto LAB_082d3890;
      }
      *(uint *)(unaff_x19 + 0x120) = uVar20;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar12 = *(long *)PTR_DAT_08fc16b0;
      }
      plVar14 = *(long **)(lVar12 + 0xb8);
Unity_VisualScripting_CoroutineRunner__Awake:
      lVar15 = *plVar14;
      if (lVar15 == 0) goto LAB_082d43c0;
      goto LAB_082d3964;
    }
    uVar11 = *(undefined8 *)(unaff_x19 + 0x118);
    uVar27 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f68540);
    FUN_0854ff98(uVar27,uVar11,0);
    puVar4 = PTR_DAT_08fc16b0;
    uVar11 = *(undefined8 *)(unaff_x19 + 0x100);
    lVar12 = *(long *)PTR_DAT_08fc16b0;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar12 = *(long *)puVar4;
    }
    uVar20 = FUN_082c61e4(uVar27,uVar11,*(long *)(lVar12 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
    lVar12 = *(long *)puVar4;
    *(uint *)(unaff_x19 + 0x120) = uVar20;
    lVar15 = **(long **)(lVar12 + 0xb8);
    if (lVar15 == 0) goto LAB_082d43c0;
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar20) goto LAB_082d4458;
  lVar15 = lVar15 + (long)(int)uVar20 * 0x38;
  *(int *)(lVar15 + 0x54) = *(int *)(lVar15 + 0x54) + 1;
LAB_082d39f8:
  if ((*(long *)(unaff_x19 + 0x3a0) != 0) &&
     (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar12 != 0)) {
    if (*(uint *)(unaff_x19 + 0x4a0) < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
      *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)(unaff_x19 + 0x118);
      *(undefined4 *)(lVar12 + 0x50) = *(undefined4 *)(unaff_x19 + 0x120);
      puVar4 = PTR_DAT_08fc16b0;
      lVar12 = *(long *)PTR_DAT_08fc16b0;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar12 = *(long *)puVar4;
      }
      lVar15 = **(long **)(lVar12 + 0xb8);
      if (lVar15 == 0) goto LAB_082d43c0;
      if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_082d4458;
      *(bool *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38 + 0x41) = bVar5;
      if (bVar5) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar15 = **(long **)(*(long *)PTR_DAT_08fc16b0 + 0xb8);
          if (lVar15 == 0) goto LAB_082d43c0;
        }
        if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_082d4458;
        *(undefined8 *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38 + 0x48) =
             in_stack_00000030;
        *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000030;
        *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000028;
        *(undefined4 *)(unaff_x19 + 0x120) = uStack000000000000003c;
      }
      uVar20 = *(uint *)(unaff_x19 + 0x4a0);
      do {
        *(uint *)(unaff_x19 + 0x4a0) = uVar20 + 1;
        uVar20 = uVar10;
        do {
          uVar10 = *(uint *)(unaff_x26 + 0x18);
          unaff_w27 = uVar20 + 1;
          if ((int)uVar10 <= (int)unaff_w27) goto LAB_082d3af0;
          if (uVar10 <= unaff_w27) goto LAB_082d4458;
          unaff_x23 = (uint *)(in_stack_00000048 + (long)(int)unaff_w27 * 0x10 + 4);
          if (*unaff_x23 == 0) goto LAB_082d3af0;
          if (*(long *)(unaff_x19 + 0x3a0) == 0) goto LAB_082d43c0;
          plVar14 = (long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38);
          lVar12 = *plVar14;
          iVar6 = *(int *)(unaff_x19 + 0x4a0);
          if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) <= iVar6)) {
            if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            FUN_04d0f664(plVar14,iVar6 + 1,1,*(undefined8 *)PTR_DAT_08ff6878);
            uVar10 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar10 <= unaff_w27) goto LAB_082d4458;
          unaff_w25 = *unaff_x23;
          uStack000000000000003c = *(undefined4 *)(unaff_x19 + 0x120);
          if ((*(char *)(unaff_x19 + 0x33a) == '\0') || (unaff_w25 != 0x3c)) {
LAB_082d28b0:
            in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x100);
            in_stack_00000030 = *(undefined8 *)(unaff_x19 + 0x118);
            uStack000000000000014c = 0;
            if (*(int *)(unaff_x19 + 0x65c) != 0) goto LAB_082d2978;
            uVar10 = *(uint *)(unaff_x19 + 0x284);
            if ((uVar10 >> 4 & 1) == 0) {
              if ((uVar10 >> 3 & 1) == 0) {
                if ((uVar10 >> 5 & 1) != 0) goto LAB_082d28d8;
              }
              else {
                if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_0408f364();
                }
                uVar13 = FUN_0745015c(unaff_w25,0);
                if ((uVar13 & 1) != 0) {
                  if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                  }
                  uVar10 = FUN_074505fc(unaff_w25,0);
                  goto LAB_082d2974;
                }
              }
            }
            else {
LAB_082d28d8:
              if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              uVar13 = System_Threading_Monitor__TryEnter(unaff_w25,0);
              if ((uVar13 & 1) != 0) {
                if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_0408f364();
                }
                uVar10 = FUN_07450484(unaff_w25,0);
LAB_082d2974:
                unaff_w25 = uVar10 & 0xffff;
              }
            }
LAB_082d2978:
            unaff_w29 = uVar20 + 2;
            if ((int)unaff_w29 < (int)*(uint *)(unaff_x26 + 0x18)) {
              if (*(uint *)(unaff_x26 + 0x18) <= unaff_w29) goto LAB_082d4458;
              unaff_w24 = *(uint *)(in_stack_00000048 + (long)(int)unaff_w29 * 0x10 + 4);
            }
            else {
              unaff_w24 = 0;
            }
            uVar10 = unaff_w27;
            uStack0000000000000024 = unaff_w25;
            if (*(char *)(unaff_x19 + 0x33b) != '\0') {
              if (*(int *)(*(long *)PTR_DAT_08ff65e0 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              uVar13 = FUN_0832c2a4(unaff_w25,0);
              if (((uVar13 & 1) == 0) || (unaff_w24 == 0xfe0e)) {
                if (*(int *)(*(long *)PTR_DAT_08ff65e0 + 0xe4) == 0) {
                  thunk_FUN_0408f364();
                }
                uVar13 = FUN_0832c224(unaff_w25,0);
                if (((uVar13 & 1) == 0) || (unaff_w24 != 0xfe0f)) goto LAB_082d2afc;
              }
              if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              lVar12 = FUN_08322990(0);
              if (lVar12 != 0) {
                if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
                  thunk_FUN_0408f364();
                }
                lVar12 = FUN_08322990(0);
                if (lVar12 == 0) goto LAB_082d43c0;
                if (0 < *(int *)(lVar12 + 0x18)) {
                  uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
                  if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                  }
                  uVar11 = FUN_08322990(0);
                  uVar9 = *(undefined4 *)(unaff_x19 + 0x280);
                  uVar1 = *(undefined4 *)(unaff_x19 + 0x238);
                  if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
                    thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
                  }
                  lVar12 = FUN_082eb668(unaff_w25,uVar27,uVar11,1,uVar9,uVar1,
                                        (long)&stack0x00000148 + 4,0);
                  unaff_x26 = in_stack_00000040;
                  if (lVar12 != 0) goto LAB_082d2b28;
                }
              }
            }
LAB_082d2afc:
            lVar12 = FUN_0830d168();
            if (lVar12 != 0) goto LAB_082d2b28;
            if (*(uint *)(unaff_x26 + 0x18) <= unaff_w27) goto LAB_082d4458;
            FUN_0830d810();
            if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            iVar6 = FUN_08322014(0);
            bVar5 = *(uint *)(unaff_x26 + 0x18) <= unaff_w27;
            if (iVar6 != 0) {
              param_1 = (long *)PTR_DAT_08ff65b8;
              if (bVar5) goto LAB_082d4458;
              goto code_r0x082d2c38;
            }
            if (bVar5) goto LAB_082d4458;
            uStack0000000000000024 = 0x25a1;
            goto Unity_VisualScripting_RequiresUnityAPIAttribute___ctor;
          }
          uVar13 = FUN_083025c8();
          uVar10 = uStack0000000000000148;
          if ((uVar13 & 1) == 0) {
            uStack000000000000003c = *(undefined4 *)(unaff_x19 + 0x120);
            goto LAB_082d28b0;
          }
          if (*(uint *)(unaff_x26 + 0x18) <= unaff_w27) goto LAB_082d4458;
          iVar6 = *(int *)(in_stack_00000048 + (long)(int)unaff_w27 * 0x10 + 8);
          if ((*(byte *)(unaff_x19 + 0x284) & 1) != 0) {
            *(undefined1 *)(unaff_x19 + 0x292) = 1;
          }
          puVar4 = PTR_DAT_08fc16b0;
          uVar20 = uStack0000000000000148;
        } while (*(int *)(unaff_x19 + 0x65c) != 1);
        lVar12 = *(long *)PTR_DAT_08fc16b0;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar12 = *(long *)puVar4;
        }
        lVar12 = **(long **)(lVar12 + 0xb8);
        if (lVar12 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) break;
        lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
        *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar12 == 0))
        goto LAB_082d43c0;
        uVar20 = *(uint *)(unaff_x19 + 0x4a0);
        if (*(uint *)(lVar12 + 0x18) <= uVar20) break;
        lVar15 = lVar12 + 0x20 + (long)(int)uVar20 * 0x178;
        *(short *)(lVar15 + 4) = *(short *)(unaff_x19 + 0x6bc) + -0x2000;
        *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)(unaff_x19 + 0x100);
        *(undefined4 *)(lVar15 + 0x30) = *(undefined4 *)(unaff_x19 + 0x120);
        if ((*(long *)(unaff_x19 + 0x6b0) == 0) ||
           (lVar15 = FUN_08325f94(*(long *)(unaff_x19 + 0x6b0),0), lVar15 == 0)) goto LAB_082d43c0;
        uVar27 = FUN_057d50ec(lVar15,*(undefined4 *)(unaff_x19 + 0x6bc),
                              *(undefined8 *)PTR_DAT_08ff6858);
        if (*(uint *)(lVar12 + 0x18) <= uVar20) break;
        *(undefined8 *)(lVar12 + 0x20 + (long)(int)uVar20 * 0x178 + 0x10) = uVar27;
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar12 == 0))
        goto LAB_082d43c0;
        uVar20 = *(uint *)(unaff_x19 + 0x4a0);
        if (*(uint *)(lVar12 + 0x18) <= uVar20) break;
        puVar23 = (undefined4 *)(lVar12 + 0x20 + (long)(int)uVar20 * 0x178);
        *puVar23 = *(undefined4 *)(unaff_x19 + 0x65c);
        puVar23[2] = iVar6;
        if (*(uint *)(unaff_x26 + 0x18) <= uVar10) break;
        *(int *)(lVar12 + 0x20 + (long)(int)uVar20 * 0x178 + 0xc) =
             (*(int *)(in_stack_00000048 + (long)(int)uVar10 * 0x10 + 8) - iVar6) + 1;
        *(undefined4 *)(unaff_x19 + 0x65c) = 0;
        *(undefined4 *)(unaff_x19 + 0x120) = uStack000000000000003c;
LAB_082d35bc:
        iStack0000000000000038 = iStack0000000000000038 + 1;
      } while( true );
    }
    goto LAB_082d4458;
  }
  goto LAB_082d43c0;
LAB_082d3cbc:
  do {
    fVar31 = (float)param_3;
    if (uVar17 == 0) {
      lVar16 = *plVar14;
    }
    else {
      lVar16 = *plVar25;
      if (lVar16 == 0) goto LAB_082d43c0;
      if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_082d4458;
      uVar27 = *(undefined8 *)(lVar16 + uVar17 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar18 = FUN_08589e5c(uVar27,0,0);
      if ((uVar18 & 1) != 0) {
        lVar16 = *plVar14;
        plVar26 = (long *)*plVar25;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar16 = *plVar14;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_082d4458;
        lVar16 = lVar16 + lVar15;
        in_stack_000000d0 = *(undefined8 *)(lVar16 + -4);
        in_stack_000000c8 = *(undefined8 *)(lVar16 + -0xc);
        in_stack_000000c0 = *(undefined8 *)(lVar16 + -0x14);
        in_stack_000000a8 = *(undefined8 *)(lVar16 + -0x2c);
        uVar27 = *(undefined8 *)(lVar16 + -0x34);
        in_stack_000000b8 = *(undefined8 *)(lVar16 + -0x1c);
        in_stack_000000b0 = *(undefined8 *)(lVar16 + -0x24);
        in_stack_000000a0 = uVar27;
        lVar16 = FUN_08329e2c();
        fVar31 = (float)uVar27;
        if (plVar26 == (long *)0x0) goto LAB_082d43c0;
        if ((lVar16 != 0) &&
           (lVar19 = thunk_FUN_0406ddbc(lVar16,*(undefined8 *)(*plVar26 + 0x40)), lVar19 == 0)) {
LAB_082d445c:
          uVar27 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
          FUN_04031750(uVar27,0);
        }
        if (*(uint *)(plVar26 + 3) <= uVar17) goto LAB_082d4458;
        plVar26[uVar17 + 4] = lVar16;
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60), lVar16 == 0))
        goto LAB_082d43c0;
        if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_082d4458;
        *(undefined8 *)(lVar16 + lVar12 + 0x30) = 0;
      }
      if (*(long *)(unaff_x19 + 0x3b8) == 0) goto LAB_082d43c0;
      fVar28 = (float)FUN_08597b2c(*(long *)(unaff_x19 + 0x3b8),0);
      lVar16 = *plVar25;
      if (lVar16 == 0) goto LAB_082d43c0;
      if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_082d4458;
      lVar16 = *(long *)(lVar16 + uVar17 * 8 + 0x20);
      if ((lVar16 == 0) ||
         (fVar30 = fVar31,
         lVar16 = UnityEngine_UIElements_StyleSheets_StylePropertyReader__ReadFloat(lVar16,0),
         lVar16 == 0)) goto LAB_082d43c0;
      fVar29 = (float)FUN_08597b2c(lVar16,0);
      fVar31 = (fVar31 - fVar30) * (fVar31 - fVar30);
      param_3 = (ulong)(uint)fVar31;
      if (fVar3 <= (fVar28 - fVar29) * (fVar28 - fVar29) + fVar31) {
        lVar16 = *plVar25;
        if (lVar16 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_082d4458;
        lVar16 = *(long *)(lVar16 + uVar17 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_082d43c0;
        lVar16 = UnityEngine_UIElements_StyleSheets_StylePropertyReader__ReadFloat(lVar16,0);
        if ((*(long *)(unaff_x19 + 0x3b8) == 0) ||
           (FUN_08597b2c(*(long *)(unaff_x19 + 0x3b8),0), lVar16 == 0)) goto LAB_082d43c0;
        FUN_08597bf4(lVar16,0);
      }
      lVar16 = *plVar25;
      if (lVar16 == 0) goto LAB_082d43c0;
      if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_082d4458;
      lVar16 = *(long *)(lVar16 + uVar17 * 8 + 0x20);
      if (lVar16 == 0) goto LAB_082d43c0;
      uVar27 = *(undefined8 *)(lVar16 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar18 = FUN_08589e5c(uVar27,0,0);
      if ((uVar18 & 1) == 0) {
        lVar16 = *plVar25;
        if (lVar16 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_082d4458;
        lVar16 = *(long *)(lVar16 + uVar17 * 8 + 0x20);
        if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0xf0), lVar16 == 0)) goto LAB_082d43c0;
        iVar6 = FUN_0858dd10(lVar16,0);
        lVar16 = *plVar14;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_0408f364(lVar16);
          lVar16 = *plVar14;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_082d4458;
        lVar16 = *(long *)(lVar16 + lVar15 + -0x1c);
        if (lVar16 == 0) goto LAB_082d43c0;
        iVar7 = FUN_0858dd10(lVar16,0);
        if (iVar6 != iVar7) goto LAB_082d3f50;
        lVar16 = *plVar14;
      }
      else {
LAB_082d3f50:
        lVar16 = *plVar25;
        if (lVar16 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_082d4458;
        lVar19 = *plVar14;
        lVar16 = *(long *)(lVar16 + uVar17 * 8 + 0x20);
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar19 = *plVar14;
        }
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar19 + 0x18) <= uVar17) goto LAB_082d4458;
        if (lVar16 == 0) goto LAB_082d43c0;
        FUN_08329aa4(lVar16,*(undefined8 *)(lVar19 + lVar15 + -0x1c),0);
        lVar19 = *plVar25;
        if (lVar19 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar19 + 0x18) <= uVar17) goto LAB_082d4458;
        lVar16 = *plVar14;
        lVar22 = **(long **)(lVar16 + 0xb8);
        if (lVar22 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar22 + 0x18) <= uVar17) goto LAB_082d4458;
        lVar19 = lVar19 + uVar17 * 8;
        lVar24 = *(long *)(lVar19 + 0x20);
        if (lVar24 == 0) goto LAB_082d43c0;
        *(undefined8 *)(lVar24 + 0xd8) = *(undefined8 *)(lVar22 + lVar15 + -0x2c);
        lVar19 = *(long *)(lVar19 + 0x20);
        if (lVar19 == 0) goto LAB_082d43c0;
        *(undefined8 *)(lVar19 + 0xe0) = *(undefined8 *)(lVar22 + lVar15 + -0x24);
      }
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar16 = *plVar14;
      }
      lVar19 = **(long **)(lVar16 + 0xb8);
      if (lVar19 == 0) goto LAB_082d43c0;
      if (*(uint *)(lVar19 + 0x18) <= uVar17) goto LAB_082d4458;
      if (*(char *)(lVar19 + lVar15 + -0x13) != '\0') {
        lVar22 = *plVar25;
        if (lVar22 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar22 + 0x18) <= uVar17) goto LAB_082d4458;
        lVar22 = *(long *)(lVar22 + uVar17 * 8 + 0x20);
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar19 = **(long **)(*plVar14 + 0xb8);
          if (lVar19 == 0) goto LAB_082d43c0;
        }
        if (*(uint *)(lVar19 + 0x18) <= uVar17) goto LAB_082d4458;
        if (lVar22 == 0) goto LAB_082d43c0;
        FUN_08329b0c(lVar22,*(undefined8 *)(lVar19 + lVar15 + -0x1c),0);
        lVar19 = *plVar25;
        if (lVar19 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar19 + 0x18) <= uVar17) goto LAB_082d4458;
        lVar16 = *plVar14;
        lVar22 = **(long **)(lVar16 + 0xb8);
        if (lVar22 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar22 + 0x18) <= uVar17) goto LAB_082d4458;
        lVar19 = *(long *)(lVar19 + uVar17 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_082d43c0;
        *(undefined8 *)(lVar19 + 0x100) = *(undefined8 *)(lVar22 + lVar15 + -0xc);
      }
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar16 = *plVar14;
    }
    plVar14 = (long *)PTR_DAT_08fc16b0;
    lVar16 = **(long **)(lVar16 + 0xb8);
    if (lVar16 == 0) goto LAB_082d43c0;
    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_082d4458;
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60), lVar19 == 0)) goto LAB_082d43c0;
    if (*(uint *)(lVar19 + 0x18) <= uVar17) goto LAB_082d4458;
    uVar20 = *(uint *)(lVar16 + lVar15);
    lVar16 = *(long *)(lVar19 + lVar12 + 0x30);
    if (lVar16 == 0) {
      if (uVar17 == 0) {
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        in_stack_00000078 = 0;
        in_stack_00000070 = 0;
        in_stack_00000088 = 0;
        in_stack_00000080 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        in_stack_00000058 = 0;
        in_stack_00000050 = 0;
        FUN_0831e2c8(&stack0x00000050,*(undefined8 *)(unaff_x19 + 0x3d8),uVar20 + 1,0);
        if (*(int *)(lVar19 + 0x18) == 0) goto LAB_082d4458;
      }
      else {
        lVar16 = *plVar25;
        if (lVar16 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_082d4458;
        lVar16 = *(long *)(lVar16 + uVar17 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_082d43c0;
        uVar27 = FUN_08329ce0(lVar16,0);
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        in_stack_00000078 = 0;
        in_stack_00000070 = 0;
        in_stack_00000088 = 0;
        in_stack_00000080 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        in_stack_00000058 = 0;
        in_stack_00000050 = 0;
        FUN_0831e2c8(&stack0x00000050,uVar27,uVar20 + 1,0);
        if (*(uint *)(lVar19 + 0x18) <= uVar17) goto LAB_082d4458;
        lVar19 = lVar19 + lVar12;
      }
      memmove((void *)(lVar19 + 0x20),&stack0x00000050,0x50);
      plVar14 = (long *)PTR_DAT_08fc16b0;
    }
    else {
      iVar6 = *(int *)(lVar16 + 0x18);
      if (iVar6 < (int)(uVar20 * 4)) {
        if ((int)uVar20 < 0x401) {
          uVar20 = uVar20 | (int)uVar20 >> 0x10;
          uVar20 = uVar20 | (int)uVar20 >> 8;
          uVar20 = uVar20 | (int)uVar20 >> 4;
          uVar20 = uVar20 | (int)uVar20 >> 2;
          uVar20 = uVar20 | (int)uVar20 >> 1;
LAB_082d4230:
          iVar6 = uVar20 + 1;
        }
        else {
LAB_082d4158:
          iVar6 = uVar20 + 0x100;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        FUN_0831ef9c(lVar19 + lVar12 + 0x20,iVar6,0);
      }
      else if ((*(char *)(unaff_x19 + 0x359) != '\0') && (0 < (int)uVar20)) {
        iVar7 = iVar6 + 3;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        if (0x100 < (int)((iVar7 >> 2) - uVar20)) {
          if (uVar20 < 0x401) {
            uVar20 = uVar20 >> 4 | uVar20 >> 8 | uVar20;
            uVar20 = uVar20 | uVar20 >> 2;
            uVar20 = uVar20 | uVar20 >> 1;
            goto LAB_082d4230;
          }
          goto LAB_082d4158;
        }
      }
    }
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60), lVar16 == 0)) goto LAB_082d43c0;
    lVar19 = *plVar14;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar19 = *plVar14;
    }
    lVar19 = **(long **)(lVar19 + 0xb8);
    if (lVar19 == 0) goto LAB_082d43c0;
    if ((*(uint *)(lVar19 + 0x18) <= uVar17) || (*(uint *)(lVar16 + 0x18) <= uVar17))
    goto LAB_082d4458;
    lVar19 = lVar19 + lVar15;
    uVar17 = uVar17 + 1;
    lVar16 = lVar16 + lVar12;
    lVar12 = lVar12 + 0x50;
    lVar15 = lVar15 + 0x38;
    *(undefined8 *)(lVar16 + 0x68) = *(undefined8 *)(lVar19 + -0x1c);
  } while (uVar13 != uVar17);
LAB_082d4308:
  lVar12 = *plVar25;
  if (lVar12 != 0) {
    lVar15 = (long)(int)uVar10 + 4;
    do {
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x18);
      if ((long)(int)uVar10 <= lVar15 + -4) {
LAB_082d3afc:
        return *(undefined4 *)(unaff_x19 + 0x4a0);
      }
      uVar20 = (uint)uVar13;
      if (uVar10 <= uVar20) {
LAB_082d4458:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      uVar27 = *(undefined8 *)(lVar12 + lVar15 * 8);
      if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar13 = FUN_0858816c(uVar27,0,0);
      if ((uVar13 & 1) == 0) goto LAB_082d3afc;
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60), lVar12 == 0)) break;
      if (lVar15 + -4 < (long)*(int *)(lVar12 + 0x18)) {
        lVar12 = *plVar25;
        if (lVar12 == 0) break;
        if (*(uint *)(lVar12 + 0x18) <= uVar20) goto LAB_082d4458;
        lVar12 = *(long *)(lVar12 + lVar15 * 8);
        if ((lVar12 == 0) || (lVar12 = FUN_0869bc74(lVar12,0), lVar12 == 0)) break;
        FUN_08868968(lVar12,0,0);
      }
      lVar12 = *plVar25;
      lVar15 = lVar15 + 1;
      uVar13 = (ulong)(uVar20 + 1);
    } while (lVar12 != 0);
  }
LAB_082d43c0:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


