/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.ScreenSpaceShadows.ScreenSpaceShadowsPostPass$$ExecutePass
ENTRY_POINT: 03d02f34
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


void UnityEngine_Rendering_Universal_ScreenSpaceShadows_ScreenSpaceShadowsPostPass__ExecutePass
               (void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool in_ZR;
  undefined4 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  int *piVar17;
  char *pcVar18;
  undefined8 uVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long *unaff_x19;
  long *unaff_x21;
  int iVar26;
  undefined8 *unaff_x22;
  undefined4 *puVar27;
  int iVar28;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined4 *unaff_x25;
  long unaff_x26;
  long lVar29;
  ushort *puVar30;
  ulong uVar31;
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
  long in_stack_00000208;
  undefined8 in_stack_00000328;
  ulong in_stack_00000330;
  ulong in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  long in_stack_00000358;
  
  if (!in_ZR) {
    FUN_0201f0a0(&stack0x00000320);
                    /* WARNING: Subroutine does not return */
    FUN_02140b1c();
  }
  plVar15 = (long *)__cxa_begin_catch();
  lVar29 = *plVar15;
  __cxa_end_catch();
  FUN_02fd8d2c(in_stack_00000328,*(undefined8 *)PTR_DAT_046b2f68);
  if (lVar29 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02061544(lVar29);
  }
  do {
    uVar31 = 0;
    do {
      plVar15 = in_stack_000001e0;
      lVar29 = thunk_FUN_02094760(*(undefined8 *)StringLiteral_9044);
      System_Collections_Generic_List<CinemachineClearShot_Pair>__CopyTo
                (lVar29,*(undefined8 *)StringLiteral_9045);
      if (plVar15 == (long *)0x0) goto LAB_03d03818;
      if ((lVar29 != 0) &&
         (lVar13 = thunk_FUN_02094664(lVar29,*(undefined8 *)(*plVar15 + 0x40)), lVar13 == 0)) {
LAB_03d03840:
        uVar19 = thunk_FUN_020a1c44();
                    /* WARNING: Subroutine does not return */
        FUN_02061410(uVar19,0);
      }
      if (*(uint *)(plVar15 + 3) <= uVar31) {
LAB_03d0383c:
                    /* WARNING: Subroutine does not return */
        FUN_02061554();
      }
      plVar15[uVar31 + 4] = lVar29;
      thunk_FUN_020ccb58(plVar15 + uVar31 + 4,lVar29);
      plVar15 = in_stack_000001e8;
      lVar29 = thunk_FUN_02094760(*(undefined8 *)StringLiteral_9044);
      System_Collections_Generic_List<CinemachineClearShot_Pair>__CopyTo
                (lVar29,*(undefined8 *)StringLiteral_9045);
      if (plVar15 == (long *)0x0) goto LAB_03d03818;
      if ((lVar29 != 0) &&
         (lVar13 = thunk_FUN_02094664(lVar29,*(undefined8 *)(*plVar15 + 0x40)), lVar13 == 0))
      goto LAB_03d03840;
      if (*(uint *)(plVar15 + 3) <= uVar31) goto LAB_03d0383c;
      plVar15[uVar31 + 4] = lVar29;
      thunk_FUN_020ccb58(plVar15 + uVar31 + 4,lVar29);
      lVar29 = *(long *)(unaff_x26 + 0x78);
      if (lVar29 == 0) goto LAB_03d03818;
      if (*(uint *)(lVar29 + 0x18) <= uVar31) goto LAB_03d0383c;
      lVar29 = *(long *)(lVar29 + uVar31 * 8 + 0x20);
      if (lVar29 == 0) goto LAB_03d03818;
      FUN_034ff2c0(&stack0x00000320,lVar29,*(undefined8 *)PTR_DAT_046b2e80);
LAB_03d02a98:
      uVar14 = FUN_02ffd7f8(&stack0x00000290,*unaff_x22);
      if ((uVar14 & 1) != 0) {
        if (*(long *)(unaff_x26 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0206154c();
        }
        uVar14 = FUN_034fec14(*(long *)(unaff_x26 + 0xa8),in_stack_00000330,
                              in_stack_00000338 & 0xffffffff,*unaff_x23);
        if ((uVar14 & 1) == 0) {
          if (in_stack_000001e0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0206154c();
          }
          if (*(uint *)(in_stack_000001e0 + 3) <= uVar31) {
                    /* WARNING: Subroutine does not return */
            FUN_02061554();
          }
          lVar29 = in_stack_000001e0[uVar31 + 4];
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_020b5864();
          }
          if (lVar29 != 0) {
            lVar13 = *(long *)(lVar29 + 0x10);
            lVar23 = *unaff_x19;
            *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
            if (lVar13 != 0) {
              uVar7 = *(uint *)(lVar29 + 0x18);
              uVar1 = (uint)in_stack_00000330 & 0xffff;
              if (uVar7 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar29 + 0x18) = uVar7 + 1;
                *(uint *)(lVar13 + (long)(int)uVar7 * 4 + 0x20) = uVar1;
              }
              else {
                FUN_03462398(lVar29,uVar1,
                             *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
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
      lVar29 = *(long *)(unaff_x26 + 0x80);
      if (lVar29 == 0) goto LAB_03d03818;
      if (*(uint *)(lVar29 + 0x18) <= uVar31) goto LAB_03d0383c;
      lVar29 = *(long *)(lVar29 + uVar31 * 8 + 0x20);
      if (lVar29 == 0) goto LAB_03d03818;
      FUN_034ff2c0(&stack0x00000320,lVar29,*(undefined8 *)PTR_DAT_046b2e80);
      while (uVar14 = FUN_02ffd7f8(&stack0x00000290,*unaff_x22), (uVar14 & 1) != 0) {
        if (in_stack_000001e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0206154c();
        }
        if (*(uint *)(in_stack_000001e8 + 3) <= uVar31) {
                    /* WARNING: Subroutine does not return */
          FUN_02061554();
        }
        lVar29 = in_stack_000001e8[uVar31 + 4];
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_020b5864();
        }
        if (lVar29 == 0) {
LAB_03d02c68:
                    /* WARNING: Subroutine does not return */
          FUN_0206154c();
        }
        lVar13 = *(long *)(lVar29 + 0x10);
        lVar23 = *unaff_x19;
        *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_03d02c68;
        uVar7 = *(uint *)(lVar29 + 0x18);
        uVar1 = (uint)in_stack_00000330 & 0xffff;
        if (uVar7 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar29 + 0x18) = uVar7 + 1;
          *(uint *)(lVar13 + (long)(int)uVar7 * 4 + 0x20) = uVar1;
        }
        else {
          FUN_03462398(lVar29,uVar1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_02ffd7f4(&stack0x00000290,*(undefined8 *)PTR_DAT_046b2e68);
      uVar31 = uVar31 + 1;
    } while (uVar31 != 3);
    lVar29 = *(long *)(in_stack_00000048 + 0x30);
    if (DAT_04921b1a == '\0') {
      FUN_020612a4(PTR_DAT_046b3a98);
      DAT_04921b1a = '\x01';
    }
    if (lVar29 == 0) goto LAB_03d03818;
    iVar28 = unaff_x25[0xd];
    uVar1 = unaff_x25[0xe];
    uVar31 = (ulong)uVar1;
    lVar23 = *(long *)PTR_DAT_046b3a98;
    lVar13 = *(long *)(lVar23 + 0x38);
    if (lVar13 == 0) {
      FUN_02091390(lVar23);
      lVar13 = *(long *)(lVar23 + 0x38);
    }
    lVar29 = FUN_024ee284(*(undefined8 *)(lVar29 + 0x40),*(undefined8 *)(lVar13 + 0x10));
    if ((int)uVar1 < 0) {
      FUN_0384bcc8(0);
    }
    else if (uVar1 != 0) {
      puVar30 = (ushort *)(lVar29 + (long)iVar28 * 0x18);
      do {
        if (in_stack_00000208 == 0) goto LAB_03d03818;
        uVar6 = *puVar30;
        lVar29 = *(long *)(in_stack_00000208 + 0x18);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_020b5864();
        }
        if (lVar29 == 0) goto LAB_03d03818;
        lVar13 = *(long *)(lVar29 + 0x10);
        lVar23 = *unaff_x19;
        *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_03d03818;
        uVar1 = *(uint *)(lVar29 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar29 + 0x18) = uVar1 + 1;
          *(uint *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = (uint)uVar6;
        }
        else {
          FUN_03462398(lVar29,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
        uVar31 = uVar31 - 1;
        puVar30 = puVar30 + 0xc;
      } while (uVar31 != 0);
    }
    if ((*in_stack_00000028 == 0) || (lVar29 = *(long *)(*in_stack_00000028 + 0x10), lVar29 == 0))
    goto LAB_03d03818;
    memcpy(&stack0x000002d0,&stack0x000001d0,0x48);
    lVar13 = *(long *)(lVar29 + 0x10);
    lVar23 = *(long *)PTR_DAT_046b2ff0;
    *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_03d03818;
    uVar1 = *(uint *)(lVar29 + 0x18);
    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
      lVar13 = lVar13 + (long)(int)uVar1 * 0x48;
      *(uint *)(lVar29 + 0x18) = uVar1 + 1;
      memcpy((void *)(lVar13 + 0x20),&stack0x000002d0,0x48);
      thunk_FUN_020ccb58(lVar13 + 0x20,0);
    }
    else {
      uVar19 = *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70);
      memcpy(&stack0x00000320,&stack0x000002d0,0x48);
      FUN_03642a1c(lVar29,&stack0x00000320,uVar19);
    }
    in_stack_00000030 = in_stack_00000030 + 1;
    if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_03d03818;
    lVar29 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_046b2c58 + 0x20) + 0x135) & 1) == 0) {
      FUN_02091334();
    }
    if (*(int *)(lVar29 + 8) <= in_stack_00000030) {
      lVar29 = *(long *)(in_stack_00000048 + 0x30);
      if (lVar29 != 0) {
        thunk_FUN_020ccb58(&stack0x00000320);
        uVar19 = 0xffffffff;
        in_stack_00000190 = lVar29;
        in_stack_00000198 = uVar19;
        uVar31 = FUN_03cfb5d4(&stack0x00000190);
        puVar9 = PTR_DAT_046b3c80;
        puVar8 = PTR_DAT_046b3a60;
        if ((uVar31 & 1) != 0) break;
        goto LAB_03d032c8;
      }
      goto LAB_03d03818;
    }
    if (*(long *)(in_stack_00000048 + 0x18) == 0) goto LAB_03d03818;
    unaff_x26 = FUN_034a2698(*(long *)(in_stack_00000048 + 0x18),in_stack_00000030,
                             *(undefined8 *)PTR_DAT_046b2c48);
    if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_03d03818;
    unaff_x25 = (undefined4 *)
                FUN_03714464(*(long *)(in_stack_00000048 + 0x30) + 0x18,in_stack_00000030,
                             *(undefined8 *)PTR_DAT_046b2c50);
    lVar29 = *(long *)(in_stack_00000048 + 0x30);
    if (lVar29 == 0) goto LAB_03d03818;
    uVar11 = *unaff_x25;
    if (DAT_04921b19 == '\0') {
      FUN_020612a4(PTR_DAT_046b38c0);
      DAT_04921b19 = '\x01';
    }
    lVar29 = *(long *)(lVar29 + 0x28);
    if (lVar29 == 0) goto LAB_03d03818;
    puVar12 = (undefined8 *)FUN_02f715c8(lVar29,uVar11,*(undefined8 *)PTR_DAT_046b38c0);
    in_stack_000001d0 = FUN_03d016a0(*puVar12);
    in_stack_000001d8 = 0;
    in_stack_000001e8 = (long *)0x0;
    in_stack_000001e0 = (long *)0x0;
    thunk_FUN_020ccb58(&stack0x000001d0,in_stack_000001d0);
    puVar8 = PTR_DAT_046b2cf0;
    in_stack_000001d8 = CONCAT44(in_stack_000001d8._4_4_,unaff_x25[1]);
    if (unaff_x26 == 0) goto LAB_03d03818;
    in_stack_000001e0 =
         (long *)RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)PTR_DAT_046b2cf0,3);
    thunk_FUN_020ccb58(&stack0x000001e0,in_stack_000001e0);
    in_stack_000001e8 = (long *)RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)puVar8,3);
    thunk_FUN_020ccb58(&stack0x000001e8,in_stack_000001e8);
    lVar29 = *(long *)PTR_DAT_046b2fa0;
    if (*(int *)(lVar29 + 0xe4) == 0) {
      thunk_FUN_020b5864();
      lVar29 = *(long *)PTR_DAT_046b2fa0;
    }
    if (**(long **)(lVar29 + 0xb8) == 0) goto LAB_03d03818;
    FUN_02ecc4e4(**(long **)(lVar29 + 0xb8),unaff_x26,&stack0x00000210,
                 *(undefined8 *)PTR_DAT_046b2fe8);
    in_stack_00000208 = thunk_FUN_02094760(*(undefined8 *)PTR_DAT_046b3ca8);
    FUN_03ce8580();
    thunk_FUN_020ccb58(&stack0x00000208,in_stack_00000208);
    if ((((in_stack_00000208 == 0) ||
         (*(undefined4 *)(in_stack_00000208 + 0x28) = unaff_x25[0x15], in_stack_00000208 == 0)) ||
        (*(undefined4 *)(in_stack_00000208 + 0x2c) = unaff_x25[0x16], in_stack_00000208 == 0)) ||
       ((*(undefined4 *)(in_stack_00000208 + 0x30) = unaff_x25[0x17], in_stack_00000208 == 0 ||
        (*(undefined4 *)(in_stack_00000208 + 0x34) = unaff_x25[0x18], in_stack_00000208 == 0))))
    goto LAB_03d03818;
    *(undefined1 *)(in_stack_00000208 + 0x38) = *(undefined1 *)((long)unaff_x25 + 0x6d);
    if (*(long *)(unaff_x26 + 0x98) == 0) goto LAB_03d03818;
    FUN_0341dd38(&stack0x00000320,*(long *)(unaff_x26 + 0x98),*(undefined8 *)PTR_DAT_046b2f80);
    in_stack_000001a0 = 0;
    in_stack_000001a8 = unaff_x24;
    _uStack00000000000001b0 = in_stack_00000330;
    in_stack_000001b8 = in_stack_00000338;
    in_stack_000001c0 = in_stack_00000340;
    while (uVar31 = FUN_02fd8d30(&stack0x000001a0,*(undefined8 *)PTR_DAT_046b2f70),
          (uVar31 & 1) != 0) {
      if (in_stack_00000208 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0206154c();
      }
      uVar6 = uStack00000000000001b0;
      uVar31 = _uStack00000000000001b0 & 0xffff;
      lVar29 = *(long *)(in_stack_00000208 + 0x20);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      if (lVar29 == 0) {
LAB_03d02f0c:
                    /* WARNING: Subroutine does not return */
        FUN_0206154c();
      }
      lVar13 = *(long *)(lVar29 + 0x10);
      lVar23 = *unaff_x19;
      *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_03d02f0c;
      uVar1 = *(uint *)(lVar29 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar29 + 0x18) = uVar1 + 1;
        *(uint *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = (uint)uVar6;
      }
      else {
        FUN_03462398(lVar29,uVar31,
                     *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_02fd8d2c(&stack0x000001a0,*(undefined8 *)PTR_DAT_046b2f68);
  } while( true );
  while( true ) {
    if (0 < *(int *)(lVar13 + 0x2a0)) {
      lVar21 = thunk_FUN_02094760(*(undefined8 *)PTR_DAT_046b3cb8);
      FUN_0386ec04(lVar21,0);
      uVar16 = FUN_03d00e4c(*(undefined8 *)(in_stack_00000048 + 0x30),lVar13);
      if (lVar21 == 0) goto LAB_03d03818;
      *(undefined8 *)(lVar21 + 0x10) = uVar16;
      thunk_FUN_020ccb58();
      lVar24 = thunk_FUN_02094760(*(undefined8 *)PTR_DAT_046b3ca0);
      FUN_034a2100(lVar24,*(undefined8 *)PTR_DAT_046b3c88);
      plVar15 = (long *)(lVar21 + 0x18);
      *plVar15 = lVar24;
      thunk_FUN_020ccb58(plVar15,lVar24);
      iVar28 = 0;
      while( true ) {
        iVar4 = *(int *)(lVar13 + 0x294);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_020b5864();
        }
        if (iVar4 <= iVar28) break;
        lVar24 = *plVar15;
        uVar16 = FUN_03d0096c(*(undefined8 *)(in_stack_00000048 + 0x30),lVar13,iVar28);
        if (lVar24 == 0) goto LAB_03d03818;
        lVar22 = *(long *)(lVar24 + 0x10);
        lVar25 = *(long *)puVar9;
        *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
        if (lVar22 == 0) goto LAB_03d03818;
        uVar1 = *(uint *)(lVar24 + 0x18);
        if (uVar1 < *(uint *)(lVar22 + 0x18)) {
          *(uint *)(lVar24 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar22 + (long)(int)uVar1 * 8 + 0x20) = uVar16;
          thunk_FUN_020ccb58();
        }
        else {
          FUN_034a2968(lVar24,uVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
        }
        iVar28 = iVar28 + 1;
      }
      uVar16 = thunk_FUN_02094760(*(undefined8 *)PTR_DAT_046b3c70);
      System_Array_EmptyInternalEnumerator<KeyValuePair<ConversionRegistry_ConverterKey,_object>>___ctor
                (uVar16,*(undefined8 *)PTR_DAT_046b3c58);
      *(undefined8 *)(lVar21 + 0x20) = uVar16;
      thunk_FUN_020ccb58((undefined8 *)(lVar21 + 0x20),uVar16);
      *(long *)(lVar21 + 0x28) = lVar23;
      thunk_FUN_020ccb58((long *)(lVar21 + 0x28),lVar23);
      puVar10 = PTR_DAT_046b3c90;
      if (lVar23 == 0) goto LAB_03d03818;
      if (0 < *(int *)(lVar23 + 0x18)) {
        iVar28 = 0;
        do {
          uVar11 = FUN_034620a0(lVar23,iVar28,*(undefined8 *)StringLiteral_9697);
          if (*in_stack_00000028 == 0) goto LAB_03d03818;
          lVar13 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar13 == 0) ||
             (FUN_0364268c(&stack0x00000320,lVar13,uVar11,*(undefined8 *)puVar10),
             in_stack_00000150 = lVar29, in_stack_00000158 = uVar19,
             in_stack_00000160 = in_stack_00000330, in_stack_00000168 = in_stack_00000338,
             in_stack_00000170 = in_stack_00000340, in_stack_00000178 = in_stack_00000348,
             in_stack_00000180 = in_stack_00000350, in_stack_00000358 == 0)) goto LAB_03d03818;
          *(long *)(in_stack_00000358 + 0x10) = lVar21;
          thunk_FUN_020ccb58((long *)(in_stack_00000358 + 0x10),lVar21);
          in_stack_00000350 = in_stack_00000180;
          in_stack_00000348 = in_stack_00000178;
          in_stack_00000340 = in_stack_00000170;
          in_stack_00000338 = in_stack_00000168;
          in_stack_00000330 = in_stack_00000160;
          uVar19 = in_stack_00000158;
          lVar29 = in_stack_00000150;
          if ((*in_stack_00000028 == 0) ||
             (lVar13 = *(long *)(*in_stack_00000028 + 0x10), lVar13 == 0)) goto LAB_03d03818;
          FUN_036426f0(lVar13,uVar11,&stack0x00000320,*(undefined8 *)PTR_DAT_046b3c98);
          iVar28 = iVar28 + 1;
        } while (iVar28 < *(int *)(lVar23 + 0x18));
      }
    }
    uVar31 = FUN_03cfb5d4(&stack0x00000190);
    if ((uVar31 & 1) == 0) break;
    lVar13 = FUN_03cfb57c(&stack0x00000190);
    lVar23 = thunk_FUN_02094760(*(undefined8 *)StringLiteral_9044);
    System_Collections_Generic_List<CinemachineClearShot_Pair>__CopyTo
              (lVar23,*(undefined8 *)StringLiteral_9045);
    iVar28 = *(int *)(lVar13 + 0x298);
    if (iVar28 < *(int *)(lVar13 + 0x29c) + 1) {
      if (lVar23 == 0) goto LAB_03d03818;
      lVar21 = *unaff_x19;
      do {
        lVar24 = *(long *)(lVar23 + 0x10);
        *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
        if (lVar24 == 0) goto LAB_03d03818;
        uVar1 = *(uint *)(lVar23 + 0x18);
        if (uVar1 < *(uint *)(lVar24 + 0x18)) {
          *(uint *)(lVar23 + 0x18) = uVar1 + 1;
          *(int *)(lVar24 + (long)(int)uVar1 * 4 + 0x20) = iVar28;
        }
        else {
          FUN_03462398(lVar23,iVar28,
                       *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
          lVar21 = *unaff_x19;
        }
        iVar28 = iVar28 + 1;
      } while (iVar28 < *(int *)(lVar13 + 0x29c) + 1);
    }
  }
LAB_03d032c8:
  lVar29 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar29 != 0) {
    iVar28 = 0;
    do {
      lVar29 = *(long *)(lVar29 + 0x18);
      if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_046b2c58 + 0x20) + 0x135) & 1) == 0) {
        FUN_02091334();
      }
      if (*(int *)(lVar29 + 8) <= iVar28) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar17 = (int *)FUN_03714464(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar28,
                                    *(undefined8 *)PTR_DAT_046b2c50);
      if (((*in_stack_00000028 == 0) || (lVar29 = *(long *)(*in_stack_00000028 + 0x10), lVar29 == 0)
          ) || (FUN_0364268c(&stack0x00000320,lVar29,*piVar17,*(undefined8 *)PTR_DAT_046b3c90),
               in_stack_00000358 == 0)) break;
      lVar29 = *(long *)(in_stack_00000358 + 0x10);
      if (lVar29 != 0) {
        lVar13 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_04921b0e == '\0') {
          FUN_020612a4(PTR_DAT_046b39d8);
          DAT_04921b0e = '\x01';
        }
        puVar8 = PTR_DAT_046b3cd0;
        if (lVar13 == 0) break;
        iVar4 = piVar17[7];
        uVar1 = piVar17[8];
        uVar31 = (ulong)uVar1;
        lVar21 = *(long *)PTR_DAT_046b39d8;
        lVar23 = *(long *)(lVar21 + 0x38);
        if (lVar23 == 0) {
          FUN_02091390(lVar21);
          lVar23 = *(long *)(lVar21 + 0x38);
        }
        lVar13 = FUN_024ee298(*(undefined8 *)(lVar13 + 0x30),*(undefined8 *)(lVar23 + 0x10));
        if ((int)uVar1 < 0) {
          FUN_0384bcc8(0);
        }
        else if (uVar1 != 0) {
          puVar27 = (undefined4 *)(lVar13 + (long)iVar4 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar13 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar13 == 0))
            goto LAB_03d03818;
            pcVar18 = (char *)FUN_03d08478(lVar13,*(undefined8 *)(puVar27 + -2),*puVar27,0);
            if (*pcVar18 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_03d03818;
              iVar4 = *(int *)(pcVar18 + 4);
              plVar15 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_046b3a88 + 0x20) + 0x135) & 1) == 0) {
                FUN_02091334(*(long *)(*(long *)PTR_DAT_046b3a88 + 0x20));
              }
              memcpy(&stack0x000000e0,(void *)(*plVar15 + (long)iVar4 * 0x70),0x70);
              if (in_stack_000000f0._4_4_ < 0) {
                FUN_03d06d28(&stack0x00000320,3,*piVar17,0);
                uVar19 = 0;
              }
              else {
                uVar19 = FUN_03d07d04(*(undefined8 *)(in_stack_00000048 + 0x30),
                                      in_stack_000000f0._4_4_,*piVar17,0);
              }
              uVar16 = FUN_03d00f6c(*(undefined8 *)(in_stack_00000048 + 0x30),piVar17,
                                    &stack0x000000e0,uVar19);
              in_stack_000000d0 = FUN_0372b580(*(undefined8 *)puVar8,uVar16,0);
              uVar11 = in_stack_000000e0;
              in_stack_000000d8 = 0;
              lVar13 = *(long *)(lVar29 + 0x20);
              thunk_FUN_020ccb58(&stack0x000000d0,in_stack_000000d0);
              in_stack_000000d8 = CONCAT71(in_stack_000000d8._1_7_,(int)uVar19 == 9);
              if (lVar13 == 0) goto LAB_03d03818;
              FUN_02e98db0(lVar13,uVar11,in_stack_000000d0,in_stack_000000d8,
                           *(undefined8 *)PTR_DAT_046b3c48);
            }
            uVar31 = uVar31 - 1;
            puVar27 = puVar27 + 3;
          } while (uVar31 != 0);
        }
        if (-1 < piVar17[5]) {
          lVar13 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_04921b11 == '\0') {
            FUN_020612a4(PTR_DAT_046b39f8);
            DAT_04921b11 = '\x01';
          }
          if (lVar13 == 0) break;
          iVar4 = piVar17[9];
          uVar1 = piVar17[10];
          lVar21 = *(long *)PTR_DAT_046b39f8;
          lVar23 = *(long *)(lVar21 + 0x38);
          if (lVar23 == 0) {
            FUN_02091390(lVar21);
            lVar23 = *(long *)(lVar21 + 0x38);
          }
          lVar13 = FUN_024ee2ac(*(undefined8 *)(lVar13 + 0x38),*(undefined8 *)(lVar23 + 0x10));
          if ((int)uVar1 < 0) {
            FUN_0384bcc8(0);
          }
          else if (uVar1 != 0) {
            uVar31 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_03d03818;
              puVar12 = (undefined8 *)(lVar13 + (long)iVar4 * 0xc + uVar31 * 0xc);
              in_stack_00000020 =
                   in_stack_00000020 & 0xffffffff00000000 | (ulong)*(uint *)(puVar12 + 1);
              lVar23 = FUN_03d04e08(*(long *)(in_stack_00000048 + 0x30),*puVar12,in_stack_00000020,0
                                   );
              if (*(int *)(lVar23 + 8) != *piVar17) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar23 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar23 == 0))
                goto LAB_03d03818;
                lVar23 = FUN_03d08478(lVar23,*puVar12,*(undefined4 *)(puVar12 + 1),0);
                iVar5 = *(int *)(lVar23 + 8);
                if (0 < iVar5) {
                  iVar26 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar23 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar23 == 0)
                       ) goto LAB_03d03818;
                    uVar19 = *puVar12;
                    if (DAT_04921b09 == '\0') {
                      FUN_020612a4();
                      DAT_04921b09 = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_020b5864();
                    }
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar21 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar21 == 0)
                       ) goto LAB_03d03818;
                    lVar21 = *(long *)(lVar21 + 0x20);
                    uVar7 = *(uint *)(puVar12 + 1);
                    iVar2 = *(int *)(lVar23 + 0x28);
                    iVar3 = *(int *)(lVar23 + 0x2c);
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
                    if (lVar21 == 0) goto LAB_03d03818;
                    if (*(uint *)(lVar21 + 0x18) <= uVar7) goto LAB_03d0383c;
                    piVar20 = (int *)FUN_0371c840(lVar21 + (long)(int)uVar7 * 8 + 0x20,
                                                  iVar26 + ((int)((ulong)uVar19 >> 0x20) +
                                                           iVar2 * ((uint)uVar19 & 0xffff)) * iVar3,
                                                  *(undefined8 *)PTR_DAT_046b38a8);
                    lVar23 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar23 == 0) goto LAB_03d03818;
                    iVar2 = *piVar20;
                    plVar15 = *(long **)(lVar23 + 0x18);
                    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_046b3a88 + 0x20) + 0x135) & 1) == 0)
                    {
                      FUN_02091334(*(long *)(*(long *)PTR_DAT_046b3a88 + 0x20));
                      lVar23 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar15 + (long)iVar2 * 0x70),0x70);
                    uVar11 = in_stack_00000060;
                    uVar19 = FUN_03d07d04(lVar23,piVar17[5],in_stack_00000060,0);
                    uVar16 = FUN_03d00f6c(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar17,uVar19);
                    in_stack_000000d0 = FUN_0372b580(*(undefined8 *)PTR_DAT_046b3cc8,uVar16,0);
                    in_stack_000000d8 = 0;
                    lVar23 = *(long *)(lVar29 + 0x20);
                    thunk_FUN_020ccb58(&stack0x000000d0,in_stack_000000d0);
                    in_stack_000000d8 = CONCAT71(in_stack_000000d8._1_7_,(int)uVar19 == 9);
                    if (lVar23 == 0) goto LAB_03d03818;
                    FUN_02e98db0(lVar23,uVar11,in_stack_000000d0,in_stack_000000d8,
                                 *(undefined8 *)PTR_DAT_046b3c48);
                    iVar26 = iVar26 + 1;
                  } while (iVar5 != iVar26);
                }
              }
              uVar31 = uVar31 + 1;
            } while (uVar31 != uVar1);
          }
        }
      }
      lVar29 = *(long *)(in_stack_00000048 + 0x30);
      iVar28 = iVar28 + 1;
    } while (lVar29 != 0);
  }
LAB_03d03818:
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


