/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureSize
ENTRY_POINT: 01f930d8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin_Ktx__GetKtxTextureSize(void)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined1 in_CY;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x19;
  uint uVar15;
  uint uVar16;
  long *unaff_x20;
  long lVar17;
  long *plVar18;
  ulong unaff_x21;
  undefined8 uVar19;
  long lVar20;
  long unaff_x23;
  long *unaff_x24;
  long lVar21;
  ulong unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  undefined8 uVar22;
  long *unaff_x28;
  long lVar23;
  long *in_stack_00000010;
  long in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *plStack0000000000000048;
  uint in_stack_00000050;
  long *in_stack_00000058;
  
  plStack0000000000000048 = unaff_x27;
code_r0x01f930d8:
  if (!(bool)in_CY) {
                    /* try { // try from 01f930e0 to 020931c7 has its CatchHandler @ 01f93004 */
    unaff_x20[unaff_x19 + 4] = (long)plStack0000000000000048;
    thunk_FUN_01286abc(unaff_x20 + unaff_x19 + 4,plStack0000000000000048);
    uVar13 = (ulong)*(uint *)(unaff_x24 + 3);
    if (unaff_x25 < uVar13) {
      lVar20 = *in_stack_00000028;
      if (lVar20 == 0) goto LAB_01f93120;
LAB_01f93108:
      lVar10 = thunk_FUN_0124baac(lVar20,*(undefined8 *)(*unaff_x24 + 0x40));
      if (lVar10 != 0) {
        uVar13 = unaff_x24[3];
LAB_01f93120:
        if ((uint)unaff_x21 < (uint)uVar13) {
          unaff_x24[unaff_x19 + 4] = lVar20;
          uVar6 = (uint)unaff_x21 + 1;
          unaff_x21 = (ulong)uVar6;
          thunk_FUN_01286abc(unaff_x24 + unaff_x19 + 4,lVar20);
          plVar11 = (long *)PTR_DAT_027b32e0;
          uVar13 = unaff_x25;
LAB_01f93214:
          do {
            uVar7 = *(uint *)(unaff_x24 + 3);
            uVar14 = (ulong)uVar7;
            unaff_x25 = uVar13 + 1;
            if ((long)(int)uVar7 <= (long)unaff_x25) {
              if (uVar6 != 1) {
                if (uVar6 == 0) {
                  uVar19 = thunk_FUN_01279b34(PTR_DAT_027c1bf0);
                  thunk_FUN_01279b34(PTR_DAT_027b3ed0);
                  uVar22 = thunk_FUN_0124bba8();
                  FUN_01f6b058(uVar22,uVar19,0);
                  goto LAB_01f9426c;
                }
                if ((int)uVar6 < 2) {
                  uVar6 = 0;
                  goto LAB_01f934c8;
                }
                if (uVar7 == 0) goto LAB_01f9340c;
                lVar20 = 0;
                lVar10 = 0;
                uVar6 = 0;
                bVar2 = false;
                plVar11 = unaff_x24;
                goto LAB_01f932e8;
              }
              if (in_stack_00000020 != 0) {
                if (unaff_x23 == 0) goto LAB_01f92644;
                if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
                if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_01f92644;
                lVar20 = FUN_01f8a1a8(*(long *)(unaff_x23 + 0x20),0);
                lVar10 = *unaff_x28;
                if ((lVar10 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_01f92644;
                if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                lVar17 = in_stack_00000038[4];
                if (*(int *)(*plVar11 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                bVar4 = FUN_01f801dc(lVar17,0,0);
                lVar17 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
                if (lVar20 == 0) {
                  lVar21 = 0;
                }
                else {
                  uVar19 = *(undefined8 *)PTR_DAT_027b1ca8;
                  lVar21 = thunk_FUN_0124baac(lVar20,uVar19);
                  if (lVar21 == 0) goto LAB_01f93580;
                }
                uVar19 = *(undefined8 *)(lVar10 + 0x18);
                FUN_01fab77c(lVar17,0);
                *(long *)(lVar17 + 0x10) = lVar21;
                thunk_FUN_01286abc((long *)(lVar17 + 0x10),lVar21);
                *(int *)(lVar17 + 0x18) = (int)uVar19;
                *(byte *)(lVar17 + 0x1c) = bVar4 & 1;
                *in_stack_00000010 = lVar17;
                thunk_FUN_01286abc(in_stack_00000010,lVar17);
                if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
                uVar19 = *(undefined8 *)(unaff_x23 + 0x20);
                lVar20 = *unaff_x28;
                if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                FUN_01f94678(uVar19,lVar20);
                uVar7 = (uint)in_stack_00000040[3];
                plVar11 = (long *)PTR_DAT_027b32e0;
                unaff_x24 = in_stack_00000040;
              }
              if (uVar7 == 0) goto LAB_01f9340c;
              plVar8 = unaff_x24 + 4;
              plVar18 = (long *)*plVar8;
              if (((plVar18 == (long *)0x0) ||
                  (lVar20 = (**(code **)(*plVar18 + 0x378))
                                      (plVar18,*(undefined8 *)(*plVar18 + 0x380)), lVar20 == 0)) ||
                 (*unaff_x28 == 0)) goto LAB_01f92644;
              iVar5 = *(int *)(*unaff_x28 + 0x18);
              if (*(int *)(lVar20 + 0x18) == iVar5) {
                if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
                if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                lVar10 = in_stack_00000038[4];
                if (*(int *)(*plVar11 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                uVar13 = FUN_01f801dc(lVar10,0,0);
                if ((uVar13 & 1) == 0) goto LAB_01f94128;
                plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,
                                               *(undefined4 *)(lVar20 + 0x18));
                uVar6 = *(int *)(lVar20 + 0x18) - 1;
                FUN_01f89ca0(*unaff_x28,0,plVar11,0,uVar6,0);
                if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                lVar10 = in_stack_00000038[4];
                lVar20 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
                if (lVar20 == 0) goto LAB_01f92644;
                if (*(int *)(lVar20 + 0x18) == 0) goto LAB_01f9340c;
                *(undefined4 *)(lVar20 + 0x20) = 1;
                lVar20 = thunk_FUN_01f894b8(lVar10,lVar20,0);
                if (plVar11 == (long *)0x0) goto LAB_01f92644;
                if ((lVar20 != 0) &&
                   (lVar10 = thunk_FUN_0124baac(lVar20,*(undefined8 *)(*plVar11 + 0x40)),
                   lVar10 == 0)) goto LAB_01f941d8;
                if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_01f9340c;
                plVar18 = plVar11 + (long)(int)uVar6 + 4;
                *plVar18 = lVar20;
                thunk_FUN_01286abc(plVar18,lVar20);
                if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_01f9340c;
                lVar20 = *unaff_x28;
                if (lVar20 == 0) goto LAB_01f92644;
                if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_01f9340c;
                plVar18 = (long *)*plVar18;
                if (plVar18 == (long *)0x0) goto LAB_01f92644;
                bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
                if ((*(byte *)(*plVar18 + 0x130) < bVar4) ||
                   (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) !=
                    *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
                FUN_01f89750(plVar18,*(undefined8 *)(lVar20 + (long)(int)uVar6 * 8 + 0x20),0,0);
                goto LAB_01f94118;
              }
              if (iVar5 < *(int *)(lVar20 + 0x18)) {
                plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
                lVar10 = *unaff_x28;
                if (lVar10 == 0) goto LAB_01f92644;
                uVar13 = 0;
                plVar18 = plVar11 + 4;
                goto LAB_01f937fc;
              }
              if ((int)unaff_x24[3] == 0) goto LAB_01f9340c;
              plVar11 = (long *)*plVar8;
              if (plVar11 == (long *)0x0) goto LAB_01f92644;
              uVar6 = (**(code **)(*plVar11 + 600))(plVar11,*(undefined8 *)(*plVar11 + 0x260));
              if ((uVar6 >> 1 & 1) != 0) goto LAB_01f94128;
              plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,
                                             *(undefined4 *)(lVar20 + 0x18));
              uVar6 = *(int *)(lVar20 + 0x18) - 1;
              FUN_01f89ca0(*unaff_x28,0,plVar11,0,uVar6,0);
              if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
              if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
              lVar10 = in_stack_00000038[4];
              lVar20 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
              if ((*unaff_x28 == 0) || (lVar20 == 0)) goto LAB_01f92644;
              if (*(int *)(lVar20 + 0x18) == 0) goto LAB_01f9340c;
              *(uint *)(lVar20 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar6;
              lVar20 = thunk_FUN_01f894b8(lVar10,lVar20,0);
              if (plVar11 == (long *)0x0) goto LAB_01f92644;
              if ((lVar20 != 0) &&
                 (lVar10 = thunk_FUN_0124baac(lVar20,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0)
                 ) goto LAB_01f941d8;
              if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_01f9340c;
              plVar18 = plVar11 + (long)(int)uVar6 + 4;
              *plVar18 = lVar20;
              thunk_FUN_01286abc(plVar18,lVar20);
              if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_01f9340c;
              lVar20 = *unaff_x28;
              if (lVar20 == 0) goto LAB_01f92644;
              plVar18 = (long *)*plVar18;
              if (plVar18 != (long *)0x0) {
                bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
                if ((*(byte *)(*plVar18 + 0x130) < bVar4) ||
                   (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) !=
                    *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
              }
              FUN_01f89ca0(lVar20,uVar6,plVar18,0,*(int *)(lVar20 + 0x18) - uVar6,0);
              *unaff_x28 = (long)plVar11;
              thunk_FUN_01286abc(unaff_x28,plVar11);
              unaff_x24 = in_stack_00000040;
              goto LAB_01f94128;
            }
            if (uVar14 <= unaff_x25) goto LAB_01f9340c;
            in_stack_00000028 = unaff_x24 + uVar13 + 5;
            uVar14 = FUN_01ee539c(*in_stack_00000028,0,0);
            uVar13 = unaff_x25;
          } while ((uVar14 & 1) != 0);
          if (*(uint *)(unaff_x24 + 3) <= unaff_x25) goto LAB_01f9340c;
          plVar18 = (long *)*in_stack_00000028;
          if ((plVar18 == (long *)0x0) ||
             (lVar20 = (**(code **)(*plVar18 + 0x378))(plVar18,*(undefined8 *)(*plVar18 + 0x380)),
             lVar20 == 0)) goto LAB_01f92644;
          uVar14 = *(ulong *)(lVar20 + 0x18);
          lVar10 = *unaff_x28;
          if (uVar14 == 0) {
            if (lVar10 == 0) goto LAB_01f92644;
            if (*(long *)(lVar10 + 0x18) == 0) goto LAB_01f92790;
            if (*(uint *)(unaff_x24 + 3) <= unaff_x25) goto LAB_01f9340c;
            plVar18 = (long *)*in_stack_00000028;
            if (plVar18 == (long *)0x0) goto LAB_01f92644;
            uVar7 = (**(code **)(*plVar18 + 600))(plVar18,*(undefined8 *)(*plVar18 + 0x260));
            if ((uVar7 >> 1 & 1) != 0) goto LAB_01f92790;
            goto LAB_01f93214;
          }
          if (lVar10 == 0) goto LAB_01f92644;
          uVar7 = *(uint *)(lVar10 + 0x18);
          iVar5 = (int)uVar14;
          if ((int)uVar7 < iVar5) {
            uVar16 = iVar5 - 1;
            if ((int)uVar7 < (int)uVar16) {
              plVar18 = (long *)(lVar20 + (long)(int)uVar7 * 8 + 0x20);
              do {
                if ((uint)uVar14 <= uVar7) goto LAB_01f9340c;
                plVar8 = (long *)*plVar18;
                if (plVar8 == (long *)0x0) goto LAB_01f92644;
                lVar10 = (**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
                puVar3 = PTR_DAT_027baa38;
                lVar17 = *(long *)PTR_DAT_027baa38;
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_01220628(lVar17);
                  lVar17 = *(long *)puVar3;
                }
                if (lVar10 == **(long **)(lVar17 + 0xb8)) {
                  uVar14 = (ulong)*(uint *)(lVar20 + 0x18);
                  uVar16 = *(uint *)(lVar20 + 0x18) - 1;
                  unaff_x28 = in_stack_00000058;
                  break;
                }
                uVar14 = *(ulong *)(lVar20 + 0x18);
                uVar7 = uVar7 + 1;
                plVar18 = plVar18 + 1;
                uVar16 = (int)uVar14 - 1;
                unaff_x28 = in_stack_00000058;
              } while ((int)uVar7 < (int)uVar16);
            }
            if (uVar7 != uVar16) goto LAB_01f93214;
            if ((uint)uVar14 <= uVar7) goto LAB_01f9340c;
            plVar8 = (long *)(lVar20 + (long)(int)uVar7 * 8 + 0x20);
            plVar18 = (long *)*plVar8;
            if (plVar18 == (long *)0x0) goto LAB_01f92644;
            lVar10 = (**(code **)(*plVar18 + 0x1f8))(plVar18,*(undefined8 *)(*plVar18 + 0x200));
            puVar3 = PTR_DAT_027baa38;
            lVar17 = *(long *)PTR_DAT_027baa38;
            if (*(int *)(lVar17 + 0xe0) == 0) {
              thunk_FUN_01220628(lVar17);
              lVar17 = *(long *)puVar3;
            }
            if (lVar10 != **(long **)(lVar17 + 0xb8)) goto LAB_01f92a28;
            if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_01f9340c;
            plVar18 = (long *)*plVar8;
            if ((plVar18 == (long *)0x0) ||
               (lVar10 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0)),
               lVar10 == 0)) goto LAB_01f92644;
            uVar14 = FUN_01f80ec8(lVar10,0);
            if ((uVar14 & 1) == 0) goto LAB_01f93214;
            if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_01f9340c;
            plVar18 = (long *)*plVar8;
            uVar19 = *(undefined8 *)PTR_DAT_027c1be0;
            if (*(int *)(*plVar11 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar19 = FUN_01f7d8a0(uVar19,0);
            if (plVar18 == (long *)0x0) goto LAB_01f92644;
                    /* try { // try from 01f931c8 to 020931cb has its CatchHandler @ 01f931dc */
                    /* try { // try from 01f931cc to 020931f7 has its CatchHandler @ 01f93004 */
            uVar14 = (**(code **)(*plVar18 + 0x208))
                               (plVar18,uVar19,1,*(undefined8 *)(*plVar18 + 0x210));
            plVar11 = (long *)PTR_DAT_027b32e0;
            if ((uVar14 & 1) == 0) goto LAB_01f93214;
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f930d4 with catch @ 01f931d8
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f931c8 with catch @ 01f931dc
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f930a4 with catch @ 01f931e0
                        */
            if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_01f9340c;
            plVar8 = (long *)*plVar8;
                    /* try { // try from 01f931f8 to 020931fb has its CatchHandler @ 01f93210 */
            if ((plVar8 == (long *)0x0) ||
               (plVar18 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                            (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
               plVar18 == (long *)0x0)) goto LAB_01f92644;
LAB_01f93264:
            plStack0000000000000048 =
                 (long *)(**(code **)(*plVar18 + 0x408))(plVar18,*(undefined8 *)(*plVar18 + 0x410));
          }
          else {
            if (iVar5 == 0) goto LAB_01f9340c;
            uVar16 = iVar5 - 1;
            lVar10 = (long)(int)uVar16;
            plVar8 = (long *)(lVar20 + lVar10 * 8 + 0x20);
            plVar18 = (long *)*plVar8;
            if ((plVar18 == (long *)0x0) ||
               (lVar17 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0)),
               lVar17 == 0)) goto LAB_01f92644;
            uVar14 = FUN_01f80ec8(lVar17,0);
            if (iVar5 < (int)uVar7) {
              unaff_x24 = in_stack_00000040;
              if ((uVar14 & 1) != 0) {
                if (*(uint *)(lVar20 + 0x18) <= uVar16) goto LAB_01f9340c;
                plVar18 = (long *)*plVar8;
                uVar19 = *(undefined8 *)PTR_DAT_027c1be0;
                if (*(int *)(*plVar11 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                uVar19 = FUN_01f7d8a0(uVar19,0);
                if (plVar18 == (long *)0x0) goto LAB_01f92644;
                uVar14 = (**(code **)(*plVar18 + 0x208))
                                   (plVar18,uVar19,1,*(undefined8 *)(*plVar18 + 0x210));
                plVar11 = (long *)PTR_DAT_027b32e0;
                if ((uVar14 & 1) != 0) {
                  if (unaff_x23 == 0) goto LAB_01f92644;
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                  lVar17 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                  if (lVar17 == 0) goto LAB_01f92644;
                  if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_01f9340c;
                  if (*(uint *)(lVar17 + lVar10 * 4 + 0x20) == uVar16) {
LAB_01f9323c:
                    if (uVar16 < *(uint *)(lVar20 + 0x18)) {
                      plVar8 = (long *)*plVar8;
                      if ((plVar8 != (long *)0x0) &&
                         (plVar18 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                                      (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
                         unaff_x24 = in_stack_00000040, plVar18 != (long *)0x0)) goto LAB_01f93264;
                      goto LAB_01f92644;
                    }
                    goto LAB_01f9340c;
                  }
                }
              }
              goto LAB_01f93214;
            }
            unaff_x24 = in_stack_00000040;
            if ((uVar14 & 1) != 0) {
              if (*(uint *)(lVar20 + 0x18) <= uVar16) goto LAB_01f9340c;
              plVar18 = (long *)*plVar8;
              uVar19 = *(undefined8 *)PTR_DAT_027c1be0;
              if (*(int *)(*plVar11 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar19 = FUN_01f7d8a0(uVar19,0);
              if (plVar18 == (long *)0x0) goto LAB_01f92644;
              uVar14 = (**(code **)(*plVar18 + 0x208))
                                 (plVar18,uVar19,1,*(undefined8 *)(*plVar18 + 0x210));
              plVar11 = (long *)PTR_DAT_027b32e0;
              if ((uVar14 & 1) == 0) {
                plStack0000000000000048 = (long *)0x0;
                goto LAB_01f92a2c;
              }
              if (unaff_x23 == 0) goto LAB_01f92644;
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
              lVar17 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
              if (lVar17 == 0) goto LAB_01f92644;
              if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_01f9340c;
              if (*(uint *)(lVar17 + lVar10 * 4 + 0x20) == uVar16) {
                if (uVar16 < *(uint *)(lVar20 + 0x18)) {
                  plVar18 = (long *)*plVar8;
                  if ((plVar18 != (long *)0x0) &&
                     (plVar18 = (long *)(**(code **)(*plVar18 + 0x1d8))
                                                  (plVar18,*(undefined8 *)(*plVar18 + 0x1e0)),
                     unaff_x26 != 0)) {
                    if (uVar16 < *(uint *)(unaff_x26 + 0x18)) {
                      if (plVar18 != (long *)0x0) {
                        uVar14 = (**(code **)(*plVar18 + 0x288))
                                           (plVar18,*(undefined8 *)(unaff_x26 + lVar10 * 8 + 0x20),
                                            *(undefined8 *)(*plVar18 + 0x290));
                        if ((uVar14 & 1) == 0) goto LAB_01f9323c;
                        goto LAB_01f92a28;
                      }
                      goto LAB_01f92644;
                    }
                    goto LAB_01f9340c;
                  }
                  goto LAB_01f92644;
                }
                goto LAB_01f9340c;
              }
            }
LAB_01f92a28:
            plStack0000000000000048 = (long *)0x0;
          }
LAB_01f92a2c:
          if (*(int *)(*plVar11 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar14 = FUN_01f801dc(plStack0000000000000048,0,0);
          if ((uVar14 & 1) == 0) {
            if (*unaff_x28 == 0) goto LAB_01f92644;
            uVar7 = *(uint *)(*unaff_x28 + 0x18);
          }
          else {
            uVar7 = *(int *)(lVar20 + 0x18) - 1;
          }
          if ((int)uVar7 < 1) {
            uVar16 = 0;
          }
          else {
            uVar15 = 0;
            plVar18 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
            do {
              if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_01f9340c;
              lVar10 = (long)(int)uVar15;
              plVar8 = *(long **)(lVar20 + lVar10 * 8 + 0x20);
              if ((plVar8 == (long *)0x0) ||
                 (plVar8 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                             (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
                 plVar8 == (long *)0x0)) goto LAB_01f92644;
              uVar14 = FUN_01f80ed8(plVar8,0);
              if ((uVar14 & 1) != 0) {
                plVar8 = (long *)(**(code **)(*plVar8 + 0x408))
                                           (plVar8,*(undefined8 *)(*plVar8 + 0x410));
              }
              if (unaff_x23 == 0) goto LAB_01f92644;
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
              lVar17 = *plVar18;
              if (lVar17 == 0) goto LAB_01f92644;
              if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_01f9340c;
              if (unaff_x26 == 0) goto LAB_01f92644;
              uVar16 = *(uint *)(lVar17 + lVar10 * 4 + 0x20);
              if (*(uint *)(unaff_x26 + 0x18) <= uVar16) goto LAB_01f9340c;
              uVar19 = *(undefined8 *)(unaff_x26 + (long)(int)uVar16 * 8 + 0x20);
              if (*(int *)(*plVar11 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar14 = FUN_01f7f404(plVar8,uVar19,0);
              if ((uVar14 & 1) == 0) {
                if ((in_stack_00000050 >> 0x12 & 1) != 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                  lVar17 = *plVar18;
                  if (lVar17 == 0) goto LAB_01f92644;
                  if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_01f9340c;
                  lVar21 = *in_stack_00000058;
                  if (lVar21 == 0) goto LAB_01f92644;
                  uVar16 = *(uint *)(lVar17 + lVar10 * 4 + 0x20);
                  if (*(uint *)(lVar21 + 0x18) <= uVar16) goto LAB_01f9340c;
                  lVar17 = *plVar11;
                  lVar21 = *(long *)(lVar21 + (long)(int)uVar16 * 8 + 0x20);
                  if (*(int *)(lVar17 + 0xe0) == 0) {
                    thunk_FUN_01220628();
                    lVar17 = *plVar11;
                  }
                  if (lVar21 == *(long *)(*(long *)(lVar17 + 0xb8) + 0x18)) goto LAB_01f92e70;
                }
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                lVar17 = *plVar18;
                if (lVar17 == 0) goto LAB_01f92644;
                if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_01f9340c;
                lVar21 = *in_stack_00000058;
                if (lVar21 == 0) goto LAB_01f92644;
                uVar16 = *(uint *)(lVar17 + lVar10 * 4 + 0x20);
                if (*(uint *)(lVar21 + 0x18) <= uVar16) goto LAB_01f9340c;
                if (*(long *)(lVar21 + (long)(int)uVar16 * 8 + 0x20) != 0) {
                  uVar19 = *(undefined8 *)PTR_DAT_027b5b48;
                  if (*(int *)(*plVar11 + 0xe0) == 0) {
                    thunk_FUN_01220628();
                  }
                  uVar19 = FUN_01f7d8a0(uVar19,0);
                  uVar14 = FUN_01f7f404(plVar8,uVar19,0);
                  if ((uVar14 & 1) == 0) {
                    if (plVar8 == (long *)0x0) goto LAB_01f92644;
                    uVar14 = FUN_01f81644(plVar8,0);
                    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                    lVar17 = *plVar18;
                    if (lVar17 == 0) goto LAB_01f92644;
                    if ((*(uint *)(lVar17 + 0x18) <= uVar15) ||
                       (uVar16 = *(uint *)(lVar17 + lVar10 * 4 + 0x20),
                       *(uint *)(unaff_x26 + 0x18) <= uVar16)) goto LAB_01f9340c;
                    uVar19 = *(undefined8 *)(unaff_x26 + (long)(int)uVar16 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
                      thunk_FUN_01220628();
                    }
                    uVar9 = FUN_01f7f404(uVar19,0,0);
                    plVar11 = (long *)PTR_DAT_027b32e0;
                    uVar16 = uVar15;
                    if ((uVar14 & 1) == 0) {
                      if ((uVar9 & 1) == 0) {
                        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                        lVar17 = *plVar18;
                        if (lVar17 == 0) goto LAB_01f92644;
                        if ((*(uint *)(lVar17 + 0x18) <= uVar15) ||
                           (uVar1 = *(uint *)(lVar17 + lVar10 * 4 + 0x20),
                           *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_01f9340c;
                        uVar14 = (**(code **)(*plVar8 + 0x288))
                                           (plVar8,*(undefined8 *)
                                                    (unaff_x26 + (long)(int)uVar1 * 8 + 0x20),
                                            *(undefined8 *)(*plVar8 + 0x290));
                        if ((uVar14 & 1) == 0) {
                          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                          lVar17 = *plVar18;
                          if (lVar17 == 0) goto LAB_01f92644;
                          if ((*(uint *)(lVar17 + 0x18) <= uVar15) ||
                             (uVar1 = *(uint *)(lVar17 + lVar10 * 4 + 0x20),
                             *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_01f9340c;
                          lVar17 = *(long *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20);
                          if (lVar17 == 0) goto LAB_01f92644;
                          uVar14 = FUN_01f81468(lVar17,0);
                          unaff_x24 = in_stack_00000040;
                          unaff_x28 = in_stack_00000058;
                          if ((uVar14 & 1) != 0) {
                            if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                              lVar17 = *plVar18;
                              if (lVar17 != 0) {
                                if (uVar15 < *(uint *)(lVar17 + 0x18)) {
                                  lVar21 = *in_stack_00000058;
                                  if (lVar21 != 0) {
                                    uVar1 = *(uint *)(lVar17 + lVar10 * 4 + 0x20);
                                    if (uVar1 < *(uint *)(lVar21 + 0x18)) {
                                      uVar14 = (**(code **)(*plVar8 + 0x828))
                                                         (plVar8,*(undefined8 *)
                                                                  (lVar21 + (long)(int)uVar1 * 8 +
                                                                  0x20),
                                                          *(undefined8 *)(*plVar8 + 0x830));
                                      goto joined_r0x01f92e6c;
                                    }
                                    goto LAB_01f9340c;
                                  }
                                  goto LAB_01f92644;
                                }
                                goto LAB_01f9340c;
                              }
                              goto LAB_01f92644;
                            }
                            goto LAB_01f9340c;
                          }
                          break;
                        }
                      }
                    }
                    else {
                      unaff_x24 = in_stack_00000040;
                      unaff_x28 = in_stack_00000058;
                      if ((uVar9 & 1) != 0) break;
                      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                      lVar17 = *plVar18;
                      if (lVar17 == 0) goto LAB_01f92644;
                      if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_01f9340c;
                      lVar21 = *in_stack_00000058;
                      if (lVar21 == 0) goto LAB_01f92644;
                      uVar1 = *(uint *)(lVar17 + lVar10 * 4 + 0x20);
                      if (*(uint *)(lVar21 + 0x18) <= uVar1) goto LAB_01f9340c;
                      uVar19 = *(undefined8 *)(lVar21 + (long)(int)uVar1 * 8 + 0x20);
                      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                        thunk_FUN_01220628();
                      }
                      bVar4 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
                      if ((*(byte *)(*plVar8 + 0x130) < bVar4) ||
                         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar4 * 8 + -8) !=
                          *(long *)PTR_DAT_027b3ec0)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230f60(plVar8);
                      }
                      uVar14 = FUN_01f9451c(uVar19,plVar8);
                      plVar11 = (long *)PTR_DAT_027b32e0;
joined_r0x01f92e6c:
                      unaff_x24 = in_stack_00000040;
                      unaff_x28 = in_stack_00000058;
                      if ((uVar14 & 1) == 0) break;
                    }
                  }
                }
              }
LAB_01f92e70:
              uVar15 = uVar15 + 1;
              unaff_x24 = in_stack_00000040;
              unaff_x28 = in_stack_00000058;
              uVar16 = uVar7;
            } while (uVar7 != uVar15);
          }
          if (*(int *)(*plVar11 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar14 = FUN_01f801dc(plStack0000000000000048,0,0);
          if (((uVar14 & 1) != 0) && (uVar16 == *(int *)(lVar20 + 0x18) - 1U)) {
            lVar20 = *unaff_x28;
            if (lVar20 == 0) goto LAB_01f92644;
            lVar10 = (-(ulong)(uVar16 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar16 << 3) + 0x20;
            while ((int)uVar16 < *(int *)(lVar20 + 0x18)) {
              if ((plStack0000000000000048 == (long *)0x0) ||
                 (uVar14 = FUN_01f81644(plStack0000000000000048,0), unaff_x26 == 0))
              goto LAB_01f92644;
              if (*(uint *)(unaff_x26 + 0x18) <= uVar16) goto LAB_01f9340c;
              uVar19 = *(undefined8 *)(unaff_x26 + lVar10);
              if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar9 = FUN_01f7f404(uVar19,0,0);
              plVar11 = (long *)PTR_DAT_027b32e0;
              if ((uVar14 & 1) == 0) {
                if ((uVar9 & 1) == 0) {
                  if (*(uint *)(unaff_x26 + 0x18) <= uVar16) goto LAB_01f9340c;
                  uVar14 = (**(code **)(*plStack0000000000000048 + 0x288))
                                     (plStack0000000000000048,*(undefined8 *)(unaff_x26 + lVar10),
                                      *(undefined8 *)(*plStack0000000000000048 + 0x290));
                  if ((uVar14 & 1) == 0) {
                    if (*(uint *)(unaff_x26 + 0x18) <= uVar16) goto LAB_01f9340c;
                    if (*(long *)(unaff_x26 + lVar10) == 0) goto LAB_01f92644;
                    uVar14 = FUN_01f81468(*(long *)(unaff_x26 + lVar10),0);
                    if ((uVar14 & 1) != 0) {
                      lVar20 = *unaff_x28;
                      if (lVar20 != 0) {
                        if (uVar16 < *(uint *)(lVar20 + 0x18)) {
                          uVar14 = (**(code **)(*plStack0000000000000048 + 0x828))
                                             (plStack0000000000000048,
                                              *(undefined8 *)(lVar20 + lVar10),
                                              *(undefined8 *)(*plStack0000000000000048 + 0x830));
                          goto joined_r0x01f93040;
                        }
                        goto LAB_01f9340c;
                      }
                      goto LAB_01f92644;
                    }
                    break;
                  }
                }
              }
              else {
                if ((uVar9 & 1) != 0) break;
                lVar20 = *unaff_x28;
                if (lVar20 == 0) goto LAB_01f92644;
                if (*(uint *)(lVar20 + 0x18) <= uVar16) goto LAB_01f9340c;
                uVar19 = *(undefined8 *)(lVar20 + lVar10);
                if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                bVar4 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
                if ((*(byte *)(*plStack0000000000000048 + 0x130) < bVar4) ||
                   (*(long *)(*(long *)(*plStack0000000000000048 + 200) + (ulong)bVar4 * 8 + -8) !=
                    *(long *)PTR_DAT_027b3ec0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01230f60(plStack0000000000000048);
                }
                uVar14 = FUN_01f9451c(uVar19,plStack0000000000000048);
                plVar11 = (long *)PTR_DAT_027b32e0;
joined_r0x01f93040:
                if ((uVar14 & 1) == 0) break;
              }
              lVar20 = *unaff_x28;
              uVar16 = uVar16 + 1;
              lVar10 = lVar10 + 8;
              if (lVar20 == 0) goto LAB_01f92644;
            }
          }
          if (*unaff_x28 == 0) goto LAB_01f92644;
          if (uVar16 == *(uint *)(*unaff_x28 + 0x18)) {
            if (unaff_x23 == 0) goto LAB_01f92644;
            if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) || (*(uint *)(unaff_x23 + 0x18) <= uVar6)
               ) goto LAB_01f9340c;
            unaff_x19 = (long)(int)uVar6;
            *(undefined8 *)(unaff_x23 + unaff_x19 * 8 + 0x20) =
                 *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
            thunk_FUN_01286abc();
            if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
            if ((plStack0000000000000048 != (long *)0x0) &&
               (lVar20 = thunk_FUN_0124baac(plStack0000000000000048,
                                            *(undefined8 *)(*in_stack_00000038 + 0x40)), lVar20 == 0
               )) goto LAB_01f941d8;
            in_CY = *(uint *)(in_stack_00000038 + 3) <= uVar6;
            unaff_x20 = in_stack_00000038;
            goto code_r0x01f930d8;
          }
          goto LAB_01f93214;
        }
        goto LAB_01f9340c;
      }
      goto LAB_01f941d8;
    }
  }
  goto LAB_01f9340c;
LAB_01f932e8:
  if (unaff_x23 == 0) goto LAB_01f92644;
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
  if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
  if (((((uint)in_stack_00000038[3] <= uVar6) || (uVar13 = lVar20 + 1, uVar14 <= uVar13)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar13)) ||
     ((in_stack_00000038[3] & 0xffffffffU) <= uVar13)) goto LAB_01f9340c;
  lVar21 = plVar11[lVar10 + 4];
  lVar23 = unaff_x24[lVar20 + 5];
  lVar17 = in_stack_00000038[lVar10 + 4];
  uVar19 = *(undefined8 *)(unaff_x23 + lVar10 * 8 + 0x20);
  uVar22 = *(undefined8 *)(unaff_x23 + 0x28 + lVar20 * 8);
  lVar10 = in_stack_00000038[lVar20 + 5];
  if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  iVar5 = FUN_01f947fc(lVar21,uVar19,lVar17,lVar23,uVar22,lVar10);
  if (iVar5 == 0) {
    bVar2 = true;
  }
  else if (iVar5 == 2) {
    uVar6 = (int)lVar20 + 1;
    bVar2 = false;
  }
  if (unaff_x21 - 2 != lVar20) {
    lVar10 = (long)(int)uVar6;
    lVar20 = lVar20 + 1;
    uVar14 = in_stack_00000040[3] & 0xffffffff;
    plVar11 = in_stack_00000040;
    if ((uint)in_stack_00000040[3] <= uVar6) goto LAB_01f9340c;
    goto LAB_01f932e8;
  }
  plVar11 = (long *)PTR_DAT_027b32e0;
  unaff_x24 = in_stack_00000040;
  unaff_x28 = in_stack_00000058;
  if (bVar2) {
    uVar19 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
    thunk_FUN_01279b34(PTR_DAT_027bc458);
    uVar22 = thunk_FUN_0124bba8();
    FUN_01ee31d4(uVar22,uVar19,0);
LAB_01f9426c:
    uVar19 = thunk_FUN_01279b34(PTR_DAT_027c1bf8);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar22,uVar19);
  }
LAB_01f934c8:
  if (in_stack_00000020 != 0) {
    if (unaff_x23 == 0) goto LAB_01f92644;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
    plVar18 = (long *)(unaff_x23 + (long)(int)uVar6 * 8 + 0x20);
    lVar20 = *plVar18;
    if (lVar20 == 0) goto LAB_01f92644;
    lVar20 = FUN_01f8a1a8(lVar20,0);
    lVar10 = *unaff_x28;
    if ((lVar10 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_01f92644;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
    lVar17 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar11 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    bVar4 = FUN_01f801dc(lVar17,0,0);
    lVar17 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
    if (lVar20 == 0) {
      lVar21 = 0;
    }
    else {
      uVar19 = *(undefined8 *)PTR_DAT_027b1ca8;
      lVar21 = thunk_FUN_0124baac(lVar20,uVar19);
      if (lVar21 == 0) {
LAB_01f93580:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(lVar20,uVar19);
      }
    }
    uVar19 = *(undefined8 *)(lVar10 + 0x18);
    FUN_01fab77c(lVar17,0);
    *(long *)(lVar17 + 0x10) = lVar21;
    thunk_FUN_01286abc((long *)(lVar17 + 0x10),lVar21);
    *(int *)(lVar17 + 0x18) = (int)uVar19;
    *(byte *)(lVar17 + 0x1c) = bVar4 & 1;
    *in_stack_00000010 = lVar17;
    thunk_FUN_01286abc(in_stack_00000010,lVar17);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
    lVar20 = *plVar18;
    lVar10 = *unaff_x28;
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f94678(lVar20,lVar10);
    plVar11 = (long *)PTR_DAT_027b32e0;
    unaff_x24 = in_stack_00000040;
  }
  if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_01f9340c;
  plVar8 = unaff_x24 + (long)(int)uVar6 + 4;
  plVar18 = (long *)*plVar8;
  if (((plVar18 == (long *)0x0) ||
      (lVar20 = (**(code **)(*plVar18 + 0x378))(plVar18,*(undefined8 *)(*plVar18 + 0x380)),
      lVar20 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
  iVar5 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar20 + 0x18) == iVar5) {
    if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
    lVar10 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar11 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar13 = FUN_01f801dc(lVar10,0,0);
    if ((uVar13 & 1) != 0) {
      plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar20 + 0x18))
      ;
      uVar7 = *(int *)(lVar20 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar11,0,uVar7,0);
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
      lVar10 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar20 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar20 == 0) goto LAB_01f92644;
      if (*(int *)(lVar20 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar20 + 0x20) = 1;
      lVar20 = thunk_FUN_01f894b8(lVar10,lVar20,0);
      if (plVar11 == (long *)0x0) goto LAB_01f92644;
      if ((lVar20 != 0) &&
         (lVar10 = thunk_FUN_0124baac(lVar20,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_01f9340c;
      plVar18 = plVar11 + (long)(int)uVar7 + 4;
      *plVar18 = lVar20;
      thunk_FUN_01286abc(plVar18,lVar20);
      if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_01f9340c;
      lVar20 = *unaff_x28;
      if (lVar20 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_01f9340c;
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) goto LAB_01f92644;
      bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
      if ((*(byte *)(*plVar18 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_027b3f80)
         ) {
LAB_01f942dc:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(plVar18);
      }
      FUN_01f89750(plVar18,*(undefined8 *)(lVar20 + (long)(int)uVar7 * 8 + 0x20),0,0);
      goto FUN_01f94198;
    }
  }
  else {
    if (iVar5 < *(int *)(lVar20 + 0x18)) {
      plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      lVar10 = *unaff_x28;
      if (lVar10 == 0) goto LAB_01f92644;
      uVar13 = 0;
      plVar18 = plVar11 + 4;
      do {
        if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar13) {
          uVar7 = *(uint *)(lVar20 + 0x18);
          if ((int)uVar13 < (int)(uVar7 - 1)) {
            do {
              if (uVar7 <= (uint)uVar13) goto LAB_01f9340c;
              plVar12 = *(long **)(lVar20 + 0x20 + uVar13 * 8);
              if ((plVar12 == (long *)0x0) ||
                 (lVar10 = (**(code **)(*plVar12 + 0x1f8))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x200)),
                 plVar11 == (long *)0x0)) goto LAB_01f92644;
              if ((lVar10 != 0) &&
                 (lVar17 = thunk_FUN_0124baac(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0)
                 ) goto LAB_01f941d8;
              if (*(uint *)(plVar11 + 3) <= (uint)uVar13) goto LAB_01f9340c;
              *plVar18 = lVar10;
              thunk_FUN_01286abc(plVar18,lVar10);
              uVar7 = *(uint *)(lVar20 + 0x18);
              uVar13 = uVar13 + 1;
              plVar18 = plVar18 + 1;
            } while ((int)uVar13 < (int)(uVar7 - 1));
          }
          if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
          if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
          lVar10 = in_stack_00000038[(long)(int)uVar6 + 4];
          if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar14 = FUN_01f801dc(lVar10,0,0);
          uVar7 = (uint)uVar13;
          if ((uVar14 & 1) == 0) {
            if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_01f9340c;
            plVar18 = *(long **)(lVar20 + (long)(int)uVar7 * 8 + 0x20);
            if ((plVar18 == (long *)0x0) ||
               (lVar20 = (**(code **)(*plVar18 + 0x1f8))(plVar18,*(undefined8 *)(*plVar18 + 0x200)),
               plVar11 == (long *)0x0)) goto LAB_01f92644;
            if ((lVar20 != 0) &&
               (lVar10 = thunk_FUN_0124baac(lVar20,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0))
            goto LAB_01f941d8;
            uVar16 = *(uint *)(plVar11 + 3);
          }
          else {
            if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
            lVar20 = in_stack_00000038[(long)(int)uVar6 + 4];
            uVar19 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
            lVar20 = thunk_FUN_01f894b8(lVar20,uVar19,0);
            if (plVar11 == (long *)0x0) goto LAB_01f92644;
            if ((lVar20 != 0) &&
               (lVar10 = thunk_FUN_0124baac(lVar20,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0))
            goto LAB_01f941d8;
            uVar16 = *(uint *)(plVar11 + 3);
          }
          if (uVar16 <= uVar7) goto LAB_01f9340c;
          plVar11[(long)(int)uVar7 + 4] = lVar20;
          thunk_FUN_01286abc(plVar11 + (long)(int)uVar7 + 4,lVar20);
FUN_01f94198:
          *unaff_x28 = (long)plVar11;
          thunk_FUN_01286abc(unaff_x28,plVar11);
          unaff_x24 = in_stack_00000040;
          goto OVRPlugin_UnityOpenXR__OnSessionExiting;
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_01f9340c;
        if (plVar11 == (long *)0x0) goto LAB_01f92644;
        lVar10 = *(long *)(lVar10 + uVar13 * 8 + 0x20);
        if ((lVar10 != 0) &&
           (lVar17 = thunk_FUN_0124baac(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar11 + 3) <= uVar13) goto LAB_01f9340c;
        *plVar18 = lVar10;
        thunk_FUN_01286abc(plVar18,lVar10);
        lVar10 = *unaff_x28;
        uVar13 = uVar13 + 1;
        plVar18 = plVar18 + 1;
        if (lVar10 == 0) goto LAB_01f92644;
      } while( true );
    }
    if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_01f9340c;
    plVar11 = (long *)*plVar8;
    if (plVar11 == (long *)0x0) goto LAB_01f92644;
    uVar7 = (**(code **)(*plVar11 + 600))(plVar11,*(undefined8 *)(*plVar11 + 0x260));
    if ((uVar7 >> 1 & 1) == 0) {
      plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar20 + 0x18))
      ;
      uVar7 = *(int *)(lVar20 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar11,0,uVar7,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
      lVar10 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar20 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar20 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar20 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar20 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar7;
      lVar20 = thunk_FUN_01f894b8(lVar10,lVar20,0);
      if (plVar11 == (long *)0x0) goto LAB_01f92644;
      if ((lVar20 != 0) &&
         (lVar10 = thunk_FUN_0124baac(lVar20,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_01f9340c;
      plVar18 = plVar11 + (long)(int)uVar7 + 4;
      *plVar18 = lVar20;
      thunk_FUN_01286abc(plVar18,lVar20);
      if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_01f9340c;
      lVar20 = *unaff_x28;
      if (lVar20 == 0) goto LAB_01f92644;
      plVar18 = (long *)*plVar18;
      if (plVar18 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar18 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar20,uVar7,plVar18,0,*(int *)(lVar20 + 0x18) - uVar7,0);
      *unaff_x28 = (long)plVar11;
      thunk_FUN_01286abc(unaff_x28,plVar11);
      unaff_x24 = in_stack_00000040;
    }
  }
OVRPlugin_UnityOpenXR__OnSessionExiting:
  if (uVar6 < *(uint *)(unaff_x24 + 3)) goto LAB_01f941b4;
  goto LAB_01f9340c;
LAB_01f92790:
  if (unaff_x23 == 0) goto LAB_01f92644;
  if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) || (*(uint *)(unaff_x23 + 0x18) <= uVar6))
  goto LAB_01f9340c;
  unaff_x19 = (long)(int)uVar6;
  *(undefined8 *)(unaff_x23 + unaff_x19 * 8 + 0x20) =
       *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
  thunk_FUN_01286abc();
  uVar13 = (ulong)*(uint *)(unaff_x24 + 3);
  if (uVar13 <= unaff_x25) goto LAB_01f9340c;
  lVar20 = *in_stack_00000028;
  if (lVar20 != 0) goto LAB_01f93108;
  goto LAB_01f93120;
  while( true ) {
    lVar10 = *(long *)(lVar10 + uVar13 * 8 + 0x20);
    if ((lVar10 != 0) &&
       (lVar17 = thunk_FUN_0124baac(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar11 + 3) <= uVar13) goto LAB_01f9340c;
    *plVar18 = lVar10;
    thunk_FUN_01286abc(plVar18,lVar10);
    lVar10 = *unaff_x28;
    uVar13 = uVar13 + 1;
    plVar18 = plVar18 + 1;
    if (lVar10 == 0) break;
LAB_01f937fc:
    if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar13) {
      uVar6 = *(uint *)(lVar20 + 0x18);
      if ((int)(uVar6 - 1) <= (int)uVar13) goto LAB_01f93a68;
      goto LAB_01f939f4;
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_01f9340c;
    if (plVar11 == (long *)0x0) break;
  }
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
  while( true ) {
    plVar12 = *(long **)(lVar20 + 0x20 + uVar13 * 8);
    if ((plVar12 == (long *)0x0) ||
       (lVar10 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
       plVar11 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar10 != 0) &&
       (lVar17 = thunk_FUN_0124baac(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar11 + 3) <= (uint)uVar13) goto LAB_01f9340c;
    *plVar18 = lVar10;
    thunk_FUN_01286abc(plVar18,lVar10);
    uVar6 = *(uint *)(lVar20 + 0x18);
    uVar13 = uVar13 + 1;
    plVar18 = plVar18 + 1;
    if ((int)(uVar6 - 1) <= (int)uVar13) break;
LAB_01f939f4:
    if (uVar6 <= (uint)uVar13) goto LAB_01f9340c;
  }
LAB_01f93a68:
  if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
  if ((int)in_stack_00000038[3] != 0) {
    lVar10 = in_stack_00000038[4];
    if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar14 = FUN_01f801dc(lVar10,0,0);
    uVar6 = (uint)uVar13;
    if ((uVar14 & 1) == 0) {
      if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_01f9340c;
      plVar18 = *(long **)(lVar20 + (long)(int)uVar6 * 8 + 0x20);
      if ((plVar18 == (long *)0x0) ||
         (lVar20 = (**(code **)(*plVar18 + 0x1f8))(plVar18,*(undefined8 *)(*plVar18 + 0x200)),
         plVar11 == (long *)0x0)) goto LAB_01f92644;
      if ((lVar20 != 0) &&
         (lVar10 = thunk_FUN_0124baac(lVar20,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0))
      goto LAB_01f941d8;
      uVar7 = *(uint *)(plVar11 + 3);
    }
    else {
      if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
      lVar20 = in_stack_00000038[4];
      uVar19 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      lVar20 = thunk_FUN_01f894b8(lVar20,uVar19,0);
      if (plVar11 == (long *)0x0) goto LAB_01f92644;
      if ((lVar20 != 0) &&
         (lVar10 = thunk_FUN_0124baac(lVar20,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0)) {
LAB_01f941d8:
        uVar19 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar19,0);
      }
      uVar7 = *(uint *)(plVar11 + 3);
    }
    if (uVar6 < uVar7) {
      plVar11[(long)(int)uVar6 + 4] = lVar20;
      thunk_FUN_01286abc(plVar11 + (long)(int)uVar6 + 4,lVar20);
LAB_01f94118:
      *unaff_x28 = (long)plVar11;
      thunk_FUN_01286abc(unaff_x28,plVar11);
      unaff_x24 = in_stack_00000040;
LAB_01f94128:
      if ((int)unaff_x24[3] != 0) {
LAB_01f941b4:
        return *plVar8;
      }
    }
  }
LAB_01f9340c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


