/*
FUNCTION_NAME: FUN_06b58ecc
ENTRY_POINT: 06b58ecc
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_06b58ecc(uint *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 uVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined1 uVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  code *pcVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  long alStack_100 [2];
  long *local_f0;
  undefined8 uStack_e8;
  undefined4 local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  long *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  long *local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar12 = tpidr_el0;
  local_68 = *(long *)(lVar12 + 0x28);
  if ((DAT_095442fc & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f6e320);
    FUN_0403162c(PTR_DAT_08f6dab8);
    FUN_0403162c(PTR_DAT_08f6dac0);
    FUN_0403162c(PTR_DAT_08f65af8);
    FUN_0403162c(PTR_DAT_08f8cf80);
    FUN_0403162c(PTR_DAT_08f6db00);
    FUN_0403162c(PTR_DAT_08f67a58);
    DAT_095442fc = 1;
  }
  lVar11 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0406aaec();
  }
  plVar14 = (long *)((long)alStack_100 -
                    ((ulong)*(uint *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x30) + 0xfc) + 0xf &
                    0x1fffffff0));
  uVar1 = *param_1;
  local_b0._0_8_ = (long *)0x0;
  local_b0._8_8_ = 0;
  auVar4 = ZEXT816(0);
  local_c0._0_8_ = 0;
  local_c0._8_8_ = 0;
  auVar24 = ZEXT816(0);
  local_c8 = 0;
  if (1 < uVar1) {
    if (uVar1 == 2) {
      local_c0 = *(undefined1 (*) [16])(param_1 + 0x18);
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      *param_1 = 0xffffffff;
      local_b0 = ZEXT816(0);
      goto OVRTask_CallbackInvoker<bool>___ctor;
    }
    plVar20 = *(long **)(param_1 + 8);
    if (plVar20 == (long *)0x0) {
      alStack_100[1] = lVar12;
      if (*(long *)(lVar12 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_06b59b8c;
    }
    lVar11 = *(long *)(param_2 + 0x20);
    uVar22 = *(undefined8 *)(param_1 + 10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0406aaec();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0406aaec(lVar11);
    }
    lVar16 = *plVar20;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06b59058;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_0406ae20(plVar20,lVar11,0);
LAB_06b59058:
    uVar22 = (*(code *)*puVar13)(plVar20,uVar22,puVar13[1]);
    *(undefined8 *)(param_1 + 0xe) = uVar22;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  puVar7 = PTR_DAT_08f6db00;
  puVar6 = PTR_DAT_08f6dac0;
  puVar5 = PTR_DAT_08f6dab8;
  if (uVar1 == 0) {
    local_b0._8_8_ = *(undefined8 *)(param_1 + 0x16);
    local_b0._0_8_ = *(undefined8 *)(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = 0xffffffff;
    alStack_100[1] = lVar12;
    goto LAB_06b59320;
  }
  alStack_100[1] = lVar12;
  if (uVar1 != 1) goto LAB_06b593d0;
  local_b0 = *(undefined1 (*) [16])(param_1 + 0x14);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = 0xffffffff;
  do {
    uVar22 = local_b0._0_8_;
    if ((long *)local_b0._0_8_ == (long *)0x0) {
      if (local_b0[8] != '\0') goto LAB_06b59194;
      uVar15 = 0;
LAB_06b59510:
      lVar12 = alStack_100[1];
      *(undefined1 *)(param_1 + 0x13) = uVar15;
      param_1[0x12] = 1;
      plVar14 = *(long **)(param_1 + 0xe);
      if (plVar14 == (long *)0x0) goto LAB_06b59774;
      lVar11 = *plVar14;
      uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar17 == 0) goto UnityEngine_InputSystem_Utilities_CallbackArray<object>__LockForChanges;
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      goto LAB_06b59548;
    }
    uVar8 = local_b0._10_2_;
    lVar12 = *(long *)(*(long *)puVar5 + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0406aaec();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0406aaec(lVar12);
    }
    lVar11 = *(long *)uVar22;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar12) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06b59180;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_0406ae20(uVar22,lVar12,0);
LAB_06b59180:
    uVar17 = (*(code *)*puVar13)(uVar22,uVar8,puVar13[1]);
    if ((uVar17 & 1) == 0) {
      uVar15 = 0;
      goto LAB_06b59510;
    }
LAB_06b59194:
    auVar24._8_8_ = local_c0._8_8_;
    auVar24._0_8_ = local_c0._0_8_;
    plVar20 = *(long **)(param_1 + 0xe);
    if (plVar20 == (long *)0x0) {
      auVar4 = local_b0;
      if (*(long *)(alStack_100[1] + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_06b59b8c;
    }
    lVar12 = *(long *)(param_2 + 0x20);
    lVar11 = *(long *)(param_1 + 0xc);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0406aaec();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0406aaec(lVar12);
    }
    lVar16 = *plVar20;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar12) {
          lVar12 = lVar16 + (long)*piVar18 * 0x10 + 0x138;
          goto LAB_06b5921c;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    lVar12 = FUN_0406ae20(plVar20,lVar12,0);
LAB_06b5921c:
    lVar12 = *(long *)(lVar12 + 8);
    local_80 = plVar14;
    (**(code **)(lVar12 + 0x10))(*(undefined8 *)(lVar12 + 8),lVar12,plVar20,&local_80,plVar14);
    auVar24._8_8_ = local_c0._8_8_;
    auVar24._0_8_ = local_c0._0_8_;
    if (lVar11 == 0) {
      auVar4 = local_b0;
      if (*(long *)(alStack_100[1] + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_06b59b8c;
    }
    lVar16 = *(long *)(param_2 + 0x20);
    uVar22 = *(undefined8 *)(param_1 + 10);
    uVar3 = *(ushort *)(lVar16 + 0x135);
    lVar12 = lVar16;
    if ((uVar3 & 1) == 0) {
      lVar12 = FUN_0406aaec();
      lVar16 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar16 + 0x135);
    }
    uVar23 = **(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x38);
    lVar12 = lVar16;
    if ((uVar3 & 1) == 0) {
      lVar12 = FUN_0406aaec();
      lVar16 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar16 + 0x135);
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x38);
    if ((uVar3 & 1) == 0) {
      lVar16 = FUN_0406aaec();
    }
    local_98 = plVar14;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x30) + 0x28)) {
      local_98 = (long *)*plVar14;
    }
    local_90 = &local_88;
    local_88 = uVar22;
    (**(code **)(lVar12 + 0x10))(uVar23,lVar12,lVar11,&local_98,&local_80);
    uStack_e8 = uStack_78;
    local_f0 = local_80;
    if ((*(ushort *)(*(long *)(*(long *)puVar7 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    local_b0._8_8_ = uStack_e8;
    local_b0._0_8_ = local_f0;
    uVar17 = FUN_0425a2e4(local_b0,*(undefined8 *)puVar6);
    lVar12 = alStack_100[1];
    if ((uVar17 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x16) = local_b0._8_8_;
      *(undefined8 *)(param_1 + 0x14) = local_b0._0_8_;
      lVar16 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar16 + 0x135);
      lVar11 = lVar16;
      if ((uVar3 & 1) == 0) {
        lVar11 = FUN_0406aaec();
        lVar16 = *(long *)(param_2 + 0x20);
        uVar3 = *(ushort *)(lVar16 + 0x135);
      }
      pcVar19 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x40);
      if ((uVar3 & 1) == 0) {
        lVar16 = FUN_0406aaec();
      }
      (*pcVar19)(param_1 + 2,local_b0,param_1,*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x40));
      goto LAB_06b598a0;
    }
LAB_06b59320:
    uVar22 = local_b0._0_8_;
    if ((long *)local_b0._0_8_ == (long *)0x0) {
      if (local_b0[8] != '\0') goto LAB_06b593a8;
    }
    else {
      uVar8 = local_b0._10_2_;
      lVar12 = *(long *)(*(long *)puVar5 + 0x20);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0406aaec();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0406aaec(lVar12);
      }
      lVar11 = *(long *)uVar22;
      uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar12) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_06b593bc;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_0406ae20(uVar22,lVar12,0);
LAB_06b593bc:
      uVar17 = (*(code *)*puVar13)(uVar22,uVar8,puVar13[1]);
      if ((uVar17 & 1) != 0) {
LAB_06b593a8:
        uVar15 = 1;
        goto LAB_06b59510;
      }
    }
LAB_06b593d0:
    auVar4._8_8_ = local_b0._8_8_;
    auVar4._0_8_ = local_b0._0_8_;
    auVar24._8_8_ = local_c0._8_8_;
    auVar24._0_8_ = local_c0._0_8_;
    plVar20 = *(long **)(param_1 + 0xe);
    if (plVar20 == (long *)0x0) {
      if (*(long *)(alStack_100[1] + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_06b59b8c;
    }
    lVar12 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0406aaec();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0406aaec(lVar12);
    }
    lVar11 = *plVar20;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar12) {
          puVar13 = (undefined8 *)(lVar11 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_06b59458;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_0406ae20(plVar20,lVar12,1);
LAB_06b59458:
    auVar24 = (*(code *)*puVar13)(plVar20,puVar13[1]);
    if ((*(ushort *)(*(long *)(*(long *)puVar7 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    local_b0 = auVar24;
    uVar17 = FUN_0425a2e4(local_b0,*(undefined8 *)puVar6);
    lVar12 = alStack_100[1];
  } while ((uVar17 & 1) != 0);
  *param_1 = 1;
  *(undefined1 (*) [16])(param_1 + 0x14) = local_b0;
  lVar16 = *(long *)(param_2 + 0x20);
  uVar3 = *(ushort *)(lVar16 + 0x135);
  lVar11 = lVar16;
  if ((uVar3 & 1) == 0) {
    lVar11 = FUN_0406aaec();
    lVar16 = *(long *)(param_2 + 0x20);
    uVar3 = *(ushort *)(lVar16 + 0x135);
  }
  pcVar19 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x40);
  if ((uVar3 & 1) == 0) {
    lVar16 = FUN_0406aaec();
  }
  (*pcVar19)(param_1 + 2,local_b0,param_1,*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x40));
  goto LAB_06b598a0;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_06b59548:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08f8cf80) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
      goto FUN_06b595ec;
    }
  }
UnityEngine_InputSystem_Utilities_CallbackArray<object>__LockForChanges:
  puVar13 = (undefined8 *)FUN_0406ae20(plVar14,*(long *)PTR_DAT_08f8cf80,0);
FUN_06b595ec:
  auVar24 = (*(code *)*puVar13)(plVar14,puVar13[1]);
  puVar5 = PTR_DAT_08f67a58;
  plVar14 = auVar24._0_8_;
  if (*(int *)(*(long *)PTR_DAT_08f67a58 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  local_c0 = auVar24;
  if (DAT_09539e0c == '\0') {
    FUN_0403162c(PTR_DAT_08f67a58);
    DAT_09539e0c = '\x01';
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  if (DAT_09539e0d == '\0') {
    FUN_0403162c(PTR_DAT_08f67c08);
    DAT_09539e0d = '\x01';
  }
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08f67c08) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06b596cc;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_0406ae20(plVar14,*(long *)PTR_DAT_08f67c08,0);
LAB_06b596cc:
    iVar10 = (*(code *)*puVar13)(plVar14,auVar24._8_8_ & 0xffffffff,puVar13[1]);
    if (iVar10 == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0x18) = local_c0;
      lVar16 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar16 + 0x135);
      lVar11 = lVar16;
      if ((uVar3 & 1) == 0) {
        lVar11 = FUN_0406aaec();
        lVar16 = *(long *)(param_2 + 0x20);
        uVar3 = *(ushort *)(lVar16 + 0x135);
      }
      pcVar19 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x58);
      if ((uVar3 & 1) == 0) {
        lVar16 = FUN_0406aaec();
      }
      (*pcVar19)(param_1 + 2,local_c0,param_1,*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x58));
      goto LAB_06b598a0;
    }
  }
OVRTask_CallbackInvoker<bool>___ctor:
  if (DAT_09539e0e == '\0') {
    FUN_0403162c(PTR_DAT_08f67c08);
    DAT_09539e0e = '\x01';
  }
  uVar22 = local_c0._0_8_;
  if ((long *)local_c0._0_8_ != (long *)0x0) {
    lVar11 = *(long *)local_c0._0_8_;
    uVar21 = local_c0._8_8_ & 0xffff;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08f67c08) {
          puVar13 = (undefined8 *)(lVar11 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_06b59764;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_0406ae20(local_c0._0_8_,*(long *)PTR_DAT_08f67c08,2);
LAB_06b59764:
    (*(code *)*puVar13)(uVar22,uVar21,puVar13[1]);
  }
LAB_06b59774:
  plVar14 = *(long **)(param_1 + 0x10);
  if (plVar14 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_08f65af8 + 0x130);
    if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_08f65af8))
    {
      alStack_100[1] = lVar12;
      auVar24 = local_c0;
      auVar4 = local_b0;
      if (*(long *)(lVar12 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_04031750(plVar14,param_2);
      }
      goto LAB_06b59b8c;
    }
    lVar11 = FUN_07408528(plVar14,0);
    if (lVar11 == 0) {
      auVar24 = local_c0;
      auVar4 = local_b0;
      if (*(long *)(lVar12 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_06b59b8c;
    }
    FUN_074085e8(lVar11,0);
  }
  if (param_1[0x12] == 1) {
    bVar9 = (char)param_1[0x13] != '\0';
  }
  else {
    bVar9 = false;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  plVar14 = *(long **)(param_1 + 2);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = 0xfffffffe;
  if (plVar14 == (long *)0x0) {
    *(bool *)(param_1 + 6) = bVar9;
  }
  else {
    lVar11 = *(long *)(*(long *)PTR_DAT_08f6e320 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0406aaec();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0406aaec(lVar11);
    }
    lVar16 = *plVar14;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_06b59890;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_0406ae20(plVar14,lVar11,2);
LAB_06b59890:
    (*(code *)*puVar13)(plVar14,bVar9,puVar13[1]);
  }
LAB_06b598a0:
  auVar24 = local_c0;
  auVar4 = local_b0;
  if (*(long *)(lVar12 + 0x28) == local_68) {
    return;
  }
LAB_06b59b8c:
  local_c0 = auVar24;
  local_b0 = auVar4;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


