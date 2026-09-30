/*
FUNCTION_NAME: FUN_01e1d0f4
ENTRY_POINT: 01e1d0f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_01e1d0f4(uint param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 *param_9,
                 byte *param_10)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined1 auVar6 [12];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  undefined2 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  uint uVar18;
  undefined4 uVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  short sVar23;
  undefined8 uVar24;
  long lVar25;
  undefined1 auVar26 [16];
  undefined1 auStack_240 [256];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  int local_cc;
  uint local_c8;
  uint local_c4;
  undefined8 local_c0;
  long lStack_b8;
  uint *local_b0;
  ulong local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  uint *puStack_80;
  long local_78;
  uint local_6c;
  long local_68;
  
  puVar7 = StringLiteral_7738;
  puVar8 = System_ComponentModel_ListBindableAttribute_TypeInfo;
  lVar25 = tpidr_el0;
  local_68 = *(long *)(lVar25 + 0x28);
  local_e8 = param_7;
  uStack_e0 = param_8;
  local_c8 = param_1;
  local_c4 = param_4;
  local_98 = param_2;
  uStack_90 = param_3;
  if ((DAT_0377fb17 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_95_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3600);
    thunk_FUN_00d48444(System_ComponentModel_ListBindableAttribute_TypeInfo);
    thunk_FUN_00d48444(
                      Method_MotelSand_<FanBrokenVibration>d__24_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(
                      Method_TMPro_TMP_MaterialManager_<>c__DisplayClass13_0_<ReleaseBaseMaterial>b__0__
                      );
    thunk_FUN_00d48444(StringLiteral_7738);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<object>_Add__);
    thunk_FUN_00d48444(Method_RCG_Lovesick_ControllerMapping_TempoReleased__);
    thunk_FUN_00d48444(Method_CW_Common_CwHelper_<>c_<_cctor>b__11_0__);
    thunk_FUN_00d48444(StringLiteral_5790);
    DAT_0377fb17 = 1;
  }
  local_9c = 0;
  lStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = (uint *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  local_88 = 0;
  puStack_80 = (uint *)0x0;
  FUN_00bd59c0(&local_88,&local_140,0x40,*(undefined8 *)puVar7);
  puVar16 = puStack_80;
  lVar20 = local_88;
  auVar26._8_8_ = puStack_80;
  auVar26._0_8_ = local_88;
  auVar6 = auVar26._0_12_;
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar9 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  puVar7 = PTR_DAT_033f3600;
  uVar12 = FUN_01e18f5c(&local_98,lVar20,puVar16,&local_9c,0,0);
  if ((uVar12 & 1) == 0) {
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar13 = *(long *)puVar9;
    lVar20 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
      lVar20 = FUN_00d5941c();
    }
    lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
    if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
      lVar20 = FUN_00d5941c();
    }
    if (*(int *)(lVar20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar20 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
      lVar20 = FUN_00d5941c();
    }
    lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
    if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
      lVar20 = FUN_00d5941c();
    }
    puVar7 = Method_RCG_Lovesick_ControllerMapping_TempoReleased__;
    plVar14 = (long *)**(long **)(lVar20 + 0xb8);
    if (plVar14 == (long *)0x0) goto LAB_01e1d7c8;
    lVar20 = (**(code **)(*plVar14 + 0x178))(plVar14,local_9c,*(undefined8 *)(*plVar14 + 0x180));
    auVar26 = FUN_013aeef8(lVar20,*(undefined8 *)puVar7);
    auVar6 = auVar26._0_12_;
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    local_d8 = lVar20;
    FUN_01e18eac(&local_98,auVar26._0_8_,auVar26._8_8_,&local_9c,0,0);
  }
  else {
    local_d8 = 0;
  }
  uVar2 = local_9c;
  uVar12 = (ulong)local_9c;
  lVar20 = *(long *)
            Method_MotelSand_<FanBrokenVibration>d__24_System_Collections_IEnumerator_Reset__;
  if (auVar6._8_4_ < local_9c) {
    FUN_01792d54(0);
  }
  lVar15 = *(long *)(lVar20 + 0x20);
  uVar5 = *(ushort *)(lVar15 + 0x132);
  lVar13 = lVar15;
  if ((uVar5 & 1) == 0) {
    lVar15 = FUN_00d5941c(lVar15);
    uVar5 = *(ushort *)(*(long *)(lVar20 + 0x20) + 0x132);
    lVar13 = *(long *)(lVar20 + 0x20);
  }
  uVar24 = **(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x40);
  local_f0 = param_2;
  local_cc = param_5;
  if ((uVar5 & 1) == 0) {
    lVar13 = FUN_00d5941c(lVar13);
  }
  puVar8 = Method_TMPro_TMP_MaterialManager_<>c__DisplayClass13_0_<ReleaseBaseMaterial>b__0__;
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x40);
  puStack_80 = &local_6c;
  local_6c = 0;
  local_88 = auVar6._0_8_;
  (**(code **)(lVar13 + 0x10))(uVar24,lVar13,0,&local_88,&local_78);
  lVar13 = local_78;
  if ((*(byte *)(*(long *)(lVar20 + 0x20) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  memset(auStack_240,0,0x100);
  local_88 = 0;
  puStack_80 = (uint *)0x0;
  FUN_00bd76c4(&local_88,auStack_240,0x80,*(undefined8 *)puVar8);
  iVar21 = uVar2 - 1;
  local_a8 = local_a8 & 0xffffffff00000000;
  local_c0 = 0;
  lStack_b8 = local_88;
  local_b0 = puStack_80;
  if (-1 < iVar21) {
    bVar10 = *(byte *)(lVar13 + iVar21);
    uVar5 = (ushort)bVar10;
    if (0xf7 < bVar10) {
      uVar5 = bVar10 + 0x10;
    }
    uVar3 = uVar5 & 0xff;
    if ((0xf7 < bVar10) || (uVar3 < 8)) {
      if (uVar3 < 10) {
        sVar23 = uVar3 + 0x30;
      }
      else if ((local_c4 & 0xffff) == 0x58) {
        sVar23 = (uVar5 & 0xf) + 0x37;
      }
      else {
        sVar23 = (uVar5 & 0xf) + 0x57;
      }
      if (DAT_0377fb39 == '\0') {
        thunk_FUN_00d48444(StringLiteral_4591);
        puVar16 = (uint *)((ulong)local_b0 & 0xffffffff);
        DAT_0377fb39 = '\x01';
        uVar18 = (uint)local_a8;
      }
      else {
        puVar16 = puStack_80;
        uVar18 = 0;
      }
      if ((int)uVar18 < (int)(uint)puVar16) {
        if ((uint)puVar16 <= uVar18) {
LAB_01e1d7c4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(short *)(lStack_b8 + (long)(int)uVar18 * 2) = sVar23;
        local_a8 = CONCAT44(local_a8._4_4_,uVar18 + 1);
      }
      else {
        FUN_01e234c8(&local_c0,sVar23);
      }
      iVar21 = uVar2 - 2;
      if (iVar21 < 0) goto LAB_01e1d670;
    }
    uVar2 = iVar21 * 2 + 2;
    if (DAT_0377fb3a == '\0') {
      thunk_FUN_00d48444(StringLiteral_3573);
      thunk_FUN_00d48444(StringLiteral_4591);
      DAT_0377fb3a = '\x01';
    }
    uVar18 = (uint)local_a8;
    local_f8 = lVar25;
    if ((int)((uint)local_b0 - uVar2) < (int)(uint)local_a8) {
      FUN_01e23208(&local_c0,uVar2);
    }
    lVar25 = *(long *)StringLiteral_3573;
    local_a8 = CONCAT44(local_a8._4_4_,uVar18 + uVar2);
    if (((uint)local_b0 < uVar18) || ((uint)local_b0 - uVar18 < uVar2)) {
      FUN_01792d54(0);
    }
    lVar20 = lStack_b8;
    lVar17 = *(long *)(lVar25 + 0x20);
    uVar5 = *(ushort *)(lVar17 + 0x132);
    lVar15 = lVar17;
    if ((uVar5 & 1) == 0) {
      lVar17 = FUN_00d5941c(lVar17);
      uVar5 = *(ushort *)(*(long *)(lVar25 + 0x20) + 0x132);
      lVar15 = *(long *)(lVar25 + 0x20);
    }
    uVar24 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
    if ((uVar5 & 1) == 0) {
      lVar15 = FUN_00d5941c(lVar15);
    }
    plVar14 = (long *)StringLiteral_5790;
    puVar8 = Method_CW_Common_CwHelper_<>c_<_cctor>b__11_0__;
    lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x40);
    puStack_80 = &local_6c;
    local_6c = uVar18;
    local_88 = lVar20;
    (**(code **)(lVar15 + 0x10))(uVar24,lVar15,0,&local_88,&local_78);
    if ((*(byte *)(*(long *)(lVar25 + 0x20) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    lVar25 = local_f8;
    uVar18 = 0;
    if ((local_c4 & 0xffff) != 0x78) {
      plVar14 = (long *)puVar8;
    }
    lVar20 = *plVar14;
    uVar22 = (long)iVar21;
    do {
      if ((uVar12 <= uVar22) || (uVar2 <= uVar18)) goto LAB_01e1d7c4;
      if (lVar20 == 0) goto LAB_01e1d7c8;
      bVar10 = *(byte *)(lVar13 + uVar22);
      uVar11 = FUN_015fa29c(lVar20,bVar10 >> 4,0);
      *(undefined2 *)(local_78 + (long)(int)uVar18 * 2) = uVar11;
      if (uVar2 <= uVar18 + 1) goto LAB_01e1d7c4;
      uVar11 = FUN_015fa29c(lVar20,bVar10 & 0xf,0);
      *(undefined2 *)(local_78 + (long)(int)(uVar18 + 1) * 2) = uVar11;
      uVar18 = uVar18 + 2;
      bVar1 = 0 < (long)uVar22;
      uVar22 = uVar22 - 1;
    } while (bVar1);
  }
LAB_01e1d670:
  if ((int)(uint)local_a8 < local_cc) {
    uVar19 = 0x66;
    if ((local_c4 & 0xffff) != 0x78) {
      uVar19 = 0x46;
    }
    uVar4 = 0x30;
    if ((int)local_f0 < 0) {
      uVar4 = uVar19;
    }
    FUN_01e1d7e0(&local_c0,0,uVar4,local_cc - (uint)local_a8);
  }
  lVar20 = local_d8;
  puVar8 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  if (local_d8 != 0) {
    if (*(int *)(*(long *)PTR_DAT_033f3600 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar15 = *(long *)puVar8;
    lVar13 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar13 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    plVar14 = (long *)**(long **)(lVar13 + 0xb8);
    if (plVar14 == (long *)0x0) {
LAB_01e1d7c8:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*plVar14 + 0x188))(plVar14,lVar20,0,*(undefined8 *)(*plVar14 + 400));
  }
  if ((local_c8 & 1) == 0) {
    *param_9 = 0;
    *param_10 = 0;
    uVar24 = FUN_01e1ddf8(&local_c0);
  }
  else {
    bVar10 = FUN_01e1daf4(&local_c0,local_e8,uStack_e0);
    uVar24 = 0;
    *param_10 = bVar10 & 1;
  }
  if (*(long *)(lVar25 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar24);
  }
  return;
}


