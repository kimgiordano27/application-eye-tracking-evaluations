/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.ScreenSpaceShadows.ScreenSpaceShadowsPostPass$$Configure
ENTRY_POINT: 03d02ed0
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void UnityEngine_Rendering_Universal_ScreenSpaceShadows_ScreenSpaceShadowsPostPass__Configure
               (long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  int *piVar17;
  char *pcVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long *unaff_x19;
  long lVar24;
  long lVar25;
  long *unaff_x21;
  int iVar26;
  undefined8 *unaff_x22;
  int iVar27;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long *plVar28;
  undefined8 uVar29;
  long lVar30;
  ushort *puVar31;
  long unaff_x29;
  ulong in_stack_00000020;
  long *in_stack_00000028;
  int in_stack_00000030;
  long in_stack_00000048;
  undefined4 in_stack_00000060;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  long in_stack_00000150;
  undefined8 in_stack_00000158;
  ulong in_stack_00000160;
  ulong in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  long in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  ushort uStack00000000000001b0;
  ulong in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  long *in_stack_000001e0;
  long *in_stack_000001e8;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  ulong in_stack_00000330;
  ulong in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  long in_stack_00000358;
  
code_r0x03d02ed0:
  uVar29 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70);
  memcpy(&stack0x00000320,&stack0x000002d0,0x48);
  FUN_03642a1c(unaff_x25,&stack0x00000320,uVar29);
  do {
    in_stack_00000030 = in_stack_00000030 + 1;
    if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_03d03818;
    lVar24 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x18);
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_046b2c58 + 0x20) + 0x135) & 1) == 0) {
      FUN_02091334();
    }
    if (*(int *)(lVar24 + 8) <= in_stack_00000030) {
      lVar24 = *(long *)(unaff_x29 + 0x30);
      if (lVar24 == 0) goto LAB_03d03818;
      thunk_FUN_020ccb58(&stack0x00000320);
      uVar29 = 0xffffffff;
      in_stack_00000190 = lVar24;
      in_stack_00000198 = uVar29;
      uVar14 = FUN_03cfb5d4(&stack0x00000190);
      puVar9 = PTR_DAT_046b3c80;
      puVar8 = PTR_DAT_046b3a60;
      if ((uVar14 & 1) != 0) goto LAB_03d02fb0;
      goto LAB_03d032c8;
    }
    if (*(long *)(unaff_x29 + 0x18) == 0) goto LAB_03d03818;
    lVar24 = FUN_034a2698(*(long *)(unaff_x29 + 0x18),in_stack_00000030,
                          *(undefined8 *)PTR_DAT_046b2c48);
    if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_03d03818;
    puVar12 = (undefined4 *)
              FUN_03714464(*(long *)(unaff_x29 + 0x30) + 0x18,in_stack_00000030,
                           *(undefined8 *)PTR_DAT_046b2c50);
    lVar25 = *(long *)(unaff_x29 + 0x30);
    if (lVar25 == 0) goto LAB_03d03818;
    uVar11 = *puVar12;
    if (DAT_04921b19 == '\0') {
      FUN_020612a4(PTR_DAT_046b38c0);
      DAT_04921b19 = '\x01';
    }
    lVar25 = *(long *)(lVar25 + 0x28);
    if (lVar25 == 0) goto LAB_03d03818;
    puVar13 = (undefined8 *)FUN_02f715c8(lVar25,uVar11,*(undefined8 *)PTR_DAT_046b38c0);
    in_stack_000001d0 = FUN_03d016a0(*puVar13);
    in_stack_000001d8 = 0;
    in_stack_000001e8 = (long *)0x0;
    in_stack_000001e0 = (long *)0x0;
    thunk_FUN_020ccb58(&stack0x000001d0,in_stack_000001d0);
    puVar8 = PTR_DAT_046b2cf0;
    in_stack_000001d8 = CONCAT44(in_stack_000001d8._4_4_,puVar12[1]);
    if (lVar24 == 0) goto LAB_03d03818;
    in_stack_000001e0 =
         (long *)RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)PTR_DAT_046b2cf0,3);
    thunk_FUN_020ccb58(&stack0x000001e0,in_stack_000001e0);
    in_stack_000001e8 = (long *)RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)puVar8,3);
    thunk_FUN_020ccb58(&stack0x000001e8,in_stack_000001e8);
    lVar25 = *(long *)PTR_DAT_046b2fa0;
    if (*(int *)(lVar25 + 0xe4) == 0) {
      thunk_FUN_020b5864();
      lVar25 = *(long *)PTR_DAT_046b2fa0;
    }
    if (**(long **)(lVar25 + 0xb8) == 0) goto LAB_03d03818;
    FUN_02ecc4e4(**(long **)(lVar25 + 0xb8),lVar24,&stack0x00000210,*(undefined8 *)PTR_DAT_046b2fe8)
    ;
    lVar25 = thunk_FUN_02094760(*(undefined8 *)PTR_DAT_046b3ca8);
    FUN_03ce8580();
    thunk_FUN_020ccb58(&stack0x00000208,lVar25);
    if ((((lVar25 == 0) || (*(undefined4 *)(lVar25 + 0x28) = puVar12[0x15], lVar25 == 0)) ||
        (*(undefined4 *)(lVar25 + 0x2c) = puVar12[0x16], lVar25 == 0)) ||
       ((*(undefined4 *)(lVar25 + 0x30) = puVar12[0x17], lVar25 == 0 ||
        (*(undefined4 *)(lVar25 + 0x34) = puVar12[0x18], lVar25 == 0)))) goto LAB_03d03818;
    *(undefined1 *)(lVar25 + 0x38) = *(undefined1 *)((long)puVar12 + 0x6d);
    if (*(long *)(lVar24 + 0x98) == 0) goto LAB_03d03818;
    FUN_0341dd38(&stack0x00000320,*(long *)(lVar24 + 0x98),*(undefined8 *)PTR_DAT_046b2f80);
    in_stack_000001a0 = in_stack_00000320;
    in_stack_000001a8 = in_stack_00000328;
    _uStack00000000000001b0 = in_stack_00000330;
    in_stack_000001b8 = in_stack_00000338;
    in_stack_000001c0 = in_stack_00000340;
    while (uVar14 = FUN_02fd8d30(&stack0x000001a0,*(undefined8 *)PTR_DAT_046b2f70),
          (uVar14 & 1) != 0) {
      if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0206154c();
      }
      uVar5 = uStack00000000000001b0;
      uVar14 = _uStack00000000000001b0 & 0xffff;
      lVar30 = *(long *)(lVar25 + 0x20);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      if (lVar30 == 0) {
LAB_03d02f0c:
                    /* WARNING: Subroutine does not return */
        FUN_0206154c();
      }
      lVar20 = *(long *)(lVar30 + 0x10);
      lVar22 = *unaff_x19;
      *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
      if (lVar20 == 0) goto LAB_03d02f0c;
      uVar6 = *(uint *)(lVar30 + 0x18);
      if (uVar6 < *(uint *)(lVar20 + 0x18)) {
        *(uint *)(lVar30 + 0x18) = uVar6 + 1;
        *(uint *)(lVar20 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
      }
      else {
        FUN_03462398(lVar30,uVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_02fd8d2c(&stack0x000001a0,*(undefined8 *)PTR_DAT_046b2f68);
    uVar14 = 0;
    do {
      plVar28 = in_stack_000001e0;
      lVar30 = thunk_FUN_02094760(*(undefined8 *)StringLiteral_9044);
      System_Collections_Generic_List<CinemachineClearShot_Pair>__CopyTo
                (lVar30,*(undefined8 *)StringLiteral_9045);
      if (plVar28 == (long *)0x0) goto LAB_03d03818;
      if ((lVar30 != 0) &&
         (lVar20 = thunk_FUN_02094664(lVar30,*(undefined8 *)(*plVar28 + 0x40)), lVar20 == 0)) {
LAB_03d03840:
        uVar29 = thunk_FUN_020a1c44();
                    /* WARNING: Subroutine does not return */
        FUN_02061410(uVar29,0);
      }
      if (*(uint *)(plVar28 + 3) <= uVar14) {
LAB_03d0383c:
                    /* WARNING: Subroutine does not return */
        FUN_02061554();
      }
      plVar28[uVar14 + 4] = lVar30;
      thunk_FUN_020ccb58(plVar28 + uVar14 + 4,lVar30);
      plVar28 = in_stack_000001e8;
      lVar30 = thunk_FUN_02094760(*(undefined8 *)StringLiteral_9044);
      System_Collections_Generic_List<CinemachineClearShot_Pair>__CopyTo
                (lVar30,*(undefined8 *)StringLiteral_9045);
      if (plVar28 == (long *)0x0) goto LAB_03d03818;
      if ((lVar30 != 0) &&
         (lVar20 = thunk_FUN_02094664(lVar30,*(undefined8 *)(*plVar28 + 0x40)), lVar20 == 0))
      goto LAB_03d03840;
      if (*(uint *)(plVar28 + 3) <= uVar14) goto LAB_03d0383c;
      plVar28[uVar14 + 4] = lVar30;
      thunk_FUN_020ccb58(plVar28 + uVar14 + 4,lVar30);
      lVar30 = *(long *)(lVar24 + 0x78);
      if (lVar30 == 0) goto LAB_03d03818;
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_03d0383c;
      lVar30 = *(long *)(lVar30 + uVar14 * 8 + 0x20);
      if (lVar30 == 0) goto LAB_03d03818;
      FUN_034ff2c0(&stack0x00000320,lVar30,*(undefined8 *)PTR_DAT_046b2e80);
LAB_03d02a98:
      uVar15 = FUN_02ffd7f8(&stack0x00000290,*unaff_x22);
      if ((uVar15 & 1) != 0) {
        if (*(long *)(lVar24 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0206154c();
        }
        uVar15 = FUN_034fec14(*(long *)(lVar24 + 0xa8),in_stack_00000330,
                              in_stack_00000338 & 0xffffffff,*unaff_x23);
        if ((uVar15 & 1) == 0) {
          if (in_stack_000001e0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0206154c();
          }
          if (*(uint *)(in_stack_000001e0 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_02061554();
          }
          lVar30 = in_stack_000001e0[uVar14 + 4];
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_020b5864();
          }
          if (lVar30 != 0) {
            lVar20 = *(long *)(lVar30 + 0x10);
            lVar22 = *unaff_x19;
            *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
            if (lVar20 != 0) {
              uVar7 = *(uint *)(lVar30 + 0x18);
              uVar6 = (uint)in_stack_00000330 & 0xffff;
              if (uVar7 < *(uint *)(lVar20 + 0x18)) {
                *(uint *)(lVar30 + 0x18) = uVar7 + 1;
                *(uint *)(lVar20 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
              }
              else {
                FUN_03462398(lVar30,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_03d02a98;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_0206154c();
        }
        goto LAB_03d02a98;
      }
      FUN_02ffd7f4(&stack0x00000290,*(undefined8 *)PTR_DAT_046b2e68);
      lVar30 = *(long *)(lVar24 + 0x80);
      if (lVar30 == 0) goto LAB_03d03818;
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_03d0383c;
      lVar30 = *(long *)(lVar30 + uVar14 * 8 + 0x20);
      if (lVar30 == 0) goto LAB_03d03818;
      FUN_034ff2c0(&stack0x00000320,lVar30,*(undefined8 *)PTR_DAT_046b2e80);
      in_stack_00000320 = 0;
      while (uVar15 = FUN_02ffd7f8(&stack0x00000290,*unaff_x22), (uVar15 & 1) != 0) {
        if (in_stack_000001e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0206154c();
        }
        if (*(uint *)(in_stack_000001e8 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_02061554();
        }
        lVar30 = in_stack_000001e8[uVar14 + 4];
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_020b5864();
        }
        if (lVar30 == 0) {
LAB_03d02c68:
                    /* WARNING: Subroutine does not return */
          FUN_0206154c();
        }
        lVar20 = *(long *)(lVar30 + 0x10);
        lVar22 = *unaff_x19;
        *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_03d02c68;
        uVar7 = *(uint *)(lVar30 + 0x18);
        uVar6 = (uint)in_stack_00000330 & 0xffff;
        if (uVar7 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar30 + 0x18) = uVar7 + 1;
          *(uint *)(lVar20 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
        }
        else {
          FUN_03462398(lVar30,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_02ffd7f4(&stack0x00000290,*(undefined8 *)PTR_DAT_046b2e68);
      uVar14 = uVar14 + 1;
    } while (uVar14 != 3);
    lVar24 = *(long *)(in_stack_00000048 + 0x30);
    if (DAT_04921b1a == '\0') {
      FUN_020612a4(PTR_DAT_046b3a98);
      DAT_04921b1a = '\x01';
    }
    if (lVar24 == 0) goto LAB_03d03818;
    iVar27 = puVar12[0xd];
    uVar6 = puVar12[0xe];
    uVar14 = (ulong)uVar6;
    lVar20 = *(long *)PTR_DAT_046b3a98;
    lVar30 = *(long *)(lVar20 + 0x38);
    if (lVar30 == 0) {
      FUN_02091390(lVar20);
      lVar30 = *(long *)(lVar20 + 0x38);
    }
    lVar24 = FUN_024ee284(*(undefined8 *)(lVar24 + 0x40),*(undefined8 *)(lVar30 + 0x10));
    if ((int)uVar6 < 0) {
      FUN_0384bcc8(0);
    }
    else if (uVar6 != 0) {
      puVar31 = (ushort *)(lVar24 + (long)iVar27 * 0x18);
      do {
        if (lVar25 == 0) goto LAB_03d03818;
        uVar5 = *puVar31;
        lVar24 = *(long *)(lVar25 + 0x18);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_020b5864();
        }
        if (lVar24 == 0) goto LAB_03d03818;
        lVar30 = *(long *)(lVar24 + 0x10);
        lVar20 = *unaff_x19;
        *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
        if (lVar30 == 0) goto LAB_03d03818;
        uVar6 = *(uint *)(lVar24 + 0x18);
        if (uVar6 < *(uint *)(lVar30 + 0x18)) {
          *(uint *)(lVar24 + 0x18) = uVar6 + 1;
          *(uint *)(lVar30 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
        }
        else {
          FUN_03462398(lVar24,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
        }
        uVar14 = uVar14 - 1;
        puVar31 = puVar31 + 0xc;
      } while (uVar14 != 0);
    }
    if ((*in_stack_00000028 == 0) ||
       (unaff_x25 = *(long *)(*in_stack_00000028 + 0x10), unaff_x25 == 0)) goto LAB_03d03818;
    memcpy(&stack0x000002d0,&stack0x000001d0,0x48);
    lVar24 = *(long *)(unaff_x25 + 0x10);
    lVar25 = *(long *)PTR_DAT_046b2ff0;
    *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
    if (lVar24 == 0) goto LAB_03d03818;
    uVar6 = *(uint *)(unaff_x25 + 0x18);
    unaff_x29 = in_stack_00000048;
    in_stack_00000328 = unaff_x24;
    if (*(uint *)(lVar24 + 0x18) <= uVar6) break;
    lVar24 = lVar24 + (long)(int)uVar6 * 0x48;
    *(uint *)(unaff_x25 + 0x18) = uVar6 + 1;
    memcpy((void *)(lVar24 + 0x20),&stack0x000002d0,0x48);
    thunk_FUN_020ccb58(lVar24 + 0x20,0);
  } while( true );
  param_1 = *(long *)(lVar25 + 0x20);
  goto code_r0x03d02ed0;
  while( true ) {
    if (0 < *(int *)(lVar25 + 0x2a0)) {
      lVar20 = thunk_FUN_02094760(*(undefined8 *)PTR_DAT_046b3cb8);
      FUN_0386ec04(lVar20,0);
      uVar16 = FUN_03d00e4c(*(undefined8 *)(in_stack_00000048 + 0x30),lVar25);
      if (lVar20 == 0) goto LAB_03d03818;
      *(undefined8 *)(lVar20 + 0x10) = uVar16;
      thunk_FUN_020ccb58();
      lVar22 = thunk_FUN_02094760(*(undefined8 *)PTR_DAT_046b3ca0);
      FUN_034a2100(lVar22,*(undefined8 *)PTR_DAT_046b3c88);
      plVar28 = (long *)(lVar20 + 0x18);
      *plVar28 = lVar22;
      thunk_FUN_020ccb58(plVar28,lVar22);
      iVar27 = 0;
      while( true ) {
        iVar3 = *(int *)(lVar25 + 0x294);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_020b5864();
        }
        if (iVar3 <= iVar27) break;
        lVar22 = *plVar28;
        uVar16 = FUN_03d0096c(*(undefined8 *)(in_stack_00000048 + 0x30),lVar25,iVar27);
        if (lVar22 == 0) goto LAB_03d03818;
        lVar21 = *(long *)(lVar22 + 0x10);
        lVar23 = *(long *)puVar9;
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        if (lVar21 == 0) goto LAB_03d03818;
        uVar6 = *(uint *)(lVar22 + 0x18);
        if (uVar6 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar22 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar21 + (long)(int)uVar6 * 8 + 0x20) = uVar16;
          thunk_FUN_020ccb58();
        }
        else {
          FUN_034a2968(lVar22,uVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
        iVar27 = iVar27 + 1;
      }
      uVar16 = thunk_FUN_02094760(*(undefined8 *)PTR_DAT_046b3c70);
      System_Array_EmptyInternalEnumerator<KeyValuePair<ConversionRegistry_ConverterKey,_object>>___ctor
                (uVar16,*(undefined8 *)PTR_DAT_046b3c58);
      *(undefined8 *)(lVar20 + 0x20) = uVar16;
      thunk_FUN_020ccb58((undefined8 *)(lVar20 + 0x20),uVar16);
      *(long *)(lVar20 + 0x28) = lVar30;
      thunk_FUN_020ccb58((long *)(lVar20 + 0x28),lVar30);
      puVar10 = PTR_DAT_046b3c90;
      if (lVar30 == 0) goto LAB_03d03818;
      if (0 < *(int *)(lVar30 + 0x18)) {
        iVar27 = 0;
        do {
          uVar11 = FUN_034620a0(lVar30,iVar27,*(undefined8 *)StringLiteral_9697);
          if (*in_stack_00000028 == 0) goto LAB_03d03818;
          lVar25 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar25 == 0) ||
             (FUN_0364268c(&stack0x00000320,lVar25,uVar11,*(undefined8 *)puVar10),
             in_stack_00000150 = lVar24, in_stack_00000158 = uVar29,
             in_stack_00000160 = in_stack_00000330, in_stack_00000168 = in_stack_00000338,
             in_stack_00000170 = in_stack_00000340, in_stack_00000178 = in_stack_00000348,
             in_stack_00000180 = in_stack_00000350, in_stack_00000358 == 0)) goto LAB_03d03818;
          *(long *)(in_stack_00000358 + 0x10) = lVar20;
          thunk_FUN_020ccb58((long *)(in_stack_00000358 + 0x10),lVar20);
          in_stack_00000350 = in_stack_00000180;
          in_stack_00000348 = in_stack_00000178;
          in_stack_00000340 = in_stack_00000170;
          in_stack_00000338 = in_stack_00000168;
          in_stack_00000330 = in_stack_00000160;
          uVar29 = in_stack_00000158;
          lVar24 = in_stack_00000150;
          if ((*in_stack_00000028 == 0) ||
             (lVar25 = *(long *)(*in_stack_00000028 + 0x10), lVar25 == 0)) goto LAB_03d03818;
          FUN_036426f0(lVar25,uVar11,&stack0x00000320,*(undefined8 *)PTR_DAT_046b3c98);
          iVar27 = iVar27 + 1;
        } while (iVar27 < *(int *)(lVar30 + 0x18));
      }
    }
    uVar14 = FUN_03cfb5d4(&stack0x00000190);
    if ((uVar14 & 1) == 0) break;
LAB_03d02fb0:
    lVar25 = FUN_03cfb57c(&stack0x00000190);
    lVar30 = thunk_FUN_02094760(*(undefined8 *)StringLiteral_9044);
    System_Collections_Generic_List<CinemachineClearShot_Pair>__CopyTo
              (lVar30,*(undefined8 *)StringLiteral_9045);
    iVar27 = *(int *)(lVar25 + 0x298);
    if (iVar27 < *(int *)(lVar25 + 0x29c) + 1) {
      if (lVar30 == 0) goto LAB_03d03818;
      lVar20 = *unaff_x19;
      do {
        lVar22 = *(long *)(lVar30 + 0x10);
        *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
        if (lVar22 == 0) goto LAB_03d03818;
        uVar6 = *(uint *)(lVar30 + 0x18);
        if (uVar6 < *(uint *)(lVar22 + 0x18)) {
          *(uint *)(lVar30 + 0x18) = uVar6 + 1;
          *(int *)(lVar22 + (long)(int)uVar6 * 4 + 0x20) = iVar27;
        }
        else {
          FUN_03462398(lVar30,iVar27,
                       *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          lVar20 = *unaff_x19;
        }
        iVar27 = iVar27 + 1;
      } while (iVar27 < *(int *)(lVar25 + 0x29c) + 1);
    }
  }
LAB_03d032c8:
  lVar24 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar24 != 0) {
    iVar27 = 0;
    do {
      lVar24 = *(long *)(lVar24 + 0x18);
      if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_046b2c58 + 0x20) + 0x135) & 1) == 0) {
        FUN_02091334();
      }
      if (*(int *)(lVar24 + 8) <= iVar27) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar17 = (int *)FUN_03714464(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar27,
                                    *(undefined8 *)PTR_DAT_046b2c50);
      if (((*in_stack_00000028 == 0) || (lVar24 = *(long *)(*in_stack_00000028 + 0x10), lVar24 == 0)
          ) || (FUN_0364268c(&stack0x00000320,lVar24,*piVar17,*(undefined8 *)PTR_DAT_046b3c90),
               in_stack_00000358 == 0)) break;
      lVar24 = *(long *)(in_stack_00000358 + 0x10);
      if (lVar24 != 0) {
        lVar25 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_04921b0e == '\0') {
          FUN_020612a4(PTR_DAT_046b39d8);
          DAT_04921b0e = '\x01';
        }
        puVar8 = PTR_DAT_046b3cd0;
        if (lVar25 == 0) break;
        iVar3 = piVar17[7];
        uVar6 = piVar17[8];
        uVar14 = (ulong)uVar6;
        lVar20 = *(long *)PTR_DAT_046b39d8;
        lVar30 = *(long *)(lVar20 + 0x38);
        if (lVar30 == 0) {
          FUN_02091390(lVar20);
          lVar30 = *(long *)(lVar20 + 0x38);
        }
        lVar25 = FUN_024ee298(*(undefined8 *)(lVar25 + 0x30),*(undefined8 *)(lVar30 + 0x10));
        if ((int)uVar6 < 0) {
          FUN_0384bcc8(0);
        }
        else if (uVar6 != 0) {
          puVar12 = (undefined4 *)(lVar25 + (long)iVar3 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar25 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar25 == 0))
            goto LAB_03d03818;
            pcVar18 = (char *)FUN_03d08478(lVar25,*(undefined8 *)(puVar12 + -2),*puVar12,0);
            if (*pcVar18 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_03d03818;
              iVar3 = *(int *)(pcVar18 + 4);
              plVar28 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_046b3a88 + 0x20) + 0x135) & 1) == 0) {
                FUN_02091334(*(long *)(*(long *)PTR_DAT_046b3a88 + 0x20));
              }
              memcpy(&stack0x000000e0,(void *)(*plVar28 + (long)iVar3 * 0x70),0x70);
              if (in_stack_000000f0._4_4_ < 0) {
                FUN_03d06d28(&stack0x00000320,3,*piVar17,0);
                uVar29 = 0;
              }
              else {
                uVar29 = FUN_03d07d04(*(undefined8 *)(in_stack_00000048 + 0x30),
                                      in_stack_000000f0._4_4_,*piVar17,0);
              }
              uVar16 = FUN_03d00f6c(*(undefined8 *)(in_stack_00000048 + 0x30),piVar17,
                                    &stack0x000000e0,uVar29);
              in_stack_000000d0 = FUN_0372b580(*(undefined8 *)puVar8,uVar16,0);
              uVar11 = in_stack_000000e0;
              in_stack_000000d8 = 0;
              lVar25 = *(long *)(lVar24 + 0x20);
              thunk_FUN_020ccb58(&stack0x000000d0,in_stack_000000d0);
              in_stack_000000d8 = CONCAT71(in_stack_000000d8._1_7_,(int)uVar29 == 9);
              if (lVar25 == 0) goto LAB_03d03818;
              FUN_02e98db0(lVar25,uVar11,in_stack_000000d0,in_stack_000000d8,
                           *(undefined8 *)PTR_DAT_046b3c48);
            }
            uVar14 = uVar14 - 1;
            puVar12 = puVar12 + 3;
          } while (uVar14 != 0);
        }
        if (-1 < piVar17[5]) {
          lVar25 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_04921b11 == '\0') {
            FUN_020612a4(PTR_DAT_046b39f8);
            DAT_04921b11 = '\x01';
          }
          if (lVar25 == 0) break;
          iVar3 = piVar17[9];
          uVar6 = piVar17[10];
          lVar20 = *(long *)PTR_DAT_046b39f8;
          lVar30 = *(long *)(lVar20 + 0x38);
          if (lVar30 == 0) {
            FUN_02091390(lVar20);
            lVar30 = *(long *)(lVar20 + 0x38);
          }
          lVar25 = FUN_024ee2ac(*(undefined8 *)(lVar25 + 0x38),*(undefined8 *)(lVar30 + 0x10));
          if ((int)uVar6 < 0) {
            FUN_0384bcc8(0);
          }
          else if (uVar6 != 0) {
            uVar14 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_03d03818;
              puVar13 = (undefined8 *)(lVar25 + (long)iVar3 * 0xc + uVar14 * 0xc);
              in_stack_00000020 =
                   in_stack_00000020 & 0xffffffff00000000 | (ulong)*(uint *)(puVar13 + 1);
              lVar30 = FUN_03d04e08(*(long *)(in_stack_00000048 + 0x30),*puVar13,in_stack_00000020,0
                                   );
              if (*(int *)(lVar30 + 8) != *piVar17) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar30 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar30 == 0))
                goto LAB_03d03818;
                lVar30 = FUN_03d08478(lVar30,*puVar13,*(undefined4 *)(puVar13 + 1),0);
                iVar4 = *(int *)(lVar30 + 8);
                if (0 < iVar4) {
                  iVar26 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar30 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar30 == 0)
                       ) goto LAB_03d03818;
                    uVar29 = *puVar13;
                    if (DAT_04921b09 == '\0') {
                      FUN_020612a4();
                      DAT_04921b09 = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_020b5864();
                    }
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar20 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar20 == 0)
                       ) goto LAB_03d03818;
                    lVar20 = *(long *)(lVar20 + 0x20);
                    uVar7 = *(uint *)(puVar13 + 1);
                    iVar1 = *(int *)(lVar30 + 0x28);
                    iVar2 = *(int *)(lVar30 + 0x2c);
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_020b5864();
                    }
                    if (DAT_04921567 == '\0') {
                      FUN_020612a4();
                      DAT_04921567 = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_020b5864();
                    }
                    if (lVar20 == 0) goto LAB_03d03818;
                    if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_03d0383c;
                    piVar19 = (int *)FUN_0371c840(lVar20 + (long)(int)uVar7 * 8 + 0x20,
                                                  iVar26 + ((int)((ulong)uVar29 >> 0x20) +
                                                           iVar1 * ((uint)uVar29 & 0xffff)) * iVar2,
                                                  *(undefined8 *)PTR_DAT_046b38a8);
                    lVar30 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar30 == 0) goto LAB_03d03818;
                    iVar1 = *piVar19;
                    plVar28 = *(long **)(lVar30 + 0x18);
                    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_046b3a88 + 0x20) + 0x135) & 1) == 0)
                    {
                      FUN_02091334(*(long *)(*(long *)PTR_DAT_046b3a88 + 0x20));
                      lVar30 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar28 + (long)iVar1 * 0x70),0x70);
                    uVar11 = in_stack_00000060;
                    uVar29 = FUN_03d07d04(lVar30,piVar17[5],in_stack_00000060,0);
                    uVar16 = FUN_03d00f6c(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar17,uVar29);
                    in_stack_000000d0 = FUN_0372b580(*(undefined8 *)PTR_DAT_046b3cc8,uVar16,0);
                    in_stack_000000d8 = 0;
                    lVar30 = *(long *)(lVar24 + 0x20);
                    thunk_FUN_020ccb58(&stack0x000000d0,in_stack_000000d0);
                    in_stack_000000d8 = CONCAT71(in_stack_000000d8._1_7_,(int)uVar29 == 9);
                    if (lVar30 == 0) goto LAB_03d03818;
                    FUN_02e98db0(lVar30,uVar11,in_stack_000000d0,in_stack_000000d8,
                                 *(undefined8 *)PTR_DAT_046b3c48);
                    iVar26 = iVar26 + 1;
                  } while (iVar4 != iVar26);
                }
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 != uVar6);
          }
        }
      }
      lVar24 = *(long *)(in_stack_00000048 + 0x30);
      iVar27 = iVar27 + 1;
    } while (lVar24 != 0);
  }
LAB_03d03818:
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


