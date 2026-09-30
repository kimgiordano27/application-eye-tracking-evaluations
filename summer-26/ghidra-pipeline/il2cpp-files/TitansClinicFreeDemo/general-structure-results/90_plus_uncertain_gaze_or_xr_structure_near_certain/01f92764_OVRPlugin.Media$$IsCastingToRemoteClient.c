/*
FUNCTION_NAME: OVRPlugin.Media$$IsCastingToRemoteClient
ENTRY_POINT: 01f92764
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


long OVRPlugin_Media__IsCastingToRemoteClient(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x19;
  long lVar15;
  uint unaff_w20;
  uint uVar16;
  long lVar17;
  undefined8 uVar18;
  long *unaff_x22;
  long lVar19;
  long unaff_x23;
  long *unaff_x24;
  long lVar20;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 uVar21;
  long *unaff_x28;
  long lVar22;
  long *in_stack_00000010;
  long in_stack_00000020;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *plStack0000000000000048;
  uint in_stack_00000050;
  long *in_stack_00000058;
  
code_r0x01f92764:
  if (param_1 != 0) {
    if (*(uint *)(unaff_x24 + 3) <= unaff_x25) goto LAB_01f9340c;
    plVar9 = (long *)*unaff_x19;
    if (plVar9 == (long *)0x0) goto LAB_01f92644;
                    /* try { // try from 01f9277c to 020927bf has its CatchHandler @ 01f92a18 */
    uVar5 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
    uVar13 = unaff_x25;
    if ((uVar5 >> 1 & 1) == 0) goto LAB_01f93214;
  }
  if (unaff_x23 != 0) {
    if ((unaff_x25 < *(uint *)(unaff_x23 + 0x18)) && (unaff_w20 < *(uint *)(unaff_x23 + 0x18))) {
      lVar15 = (long)(int)unaff_w20;
      *(undefined8 *)(unaff_x23 + lVar15 * 8 + 0x20) =
           *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
      thunk_FUN_01286abc();
      uVar13 = (ulong)*(uint *)(unaff_x24 + 3);
      if (unaff_x25 < uVar13) {
        lVar19 = *unaff_x19;
joined_r0x01f927d4:
        uVar5 = (uint)uVar13;
        if (lVar19 != 0) {
          lVar17 = thunk_FUN_0124baac(lVar19,*(undefined8 *)(*unaff_x24 + 0x40));
          if (lVar17 == 0) goto LAB_01f941d8;
          uVar5 = (uint)unaff_x24[3];
        }
        if (unaff_w20 < uVar5) {
          unaff_x24[lVar15 + 4] = lVar19;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_01286abc(unaff_x24 + lVar15 + 4,lVar19);
          unaff_x22 = (long *)PTR_DAT_027b32e0;
          uVar13 = unaff_x25;
LAB_01f93214:
          do {
            uVar5 = *(uint *)(unaff_x24 + 3);
            uVar14 = (ulong)uVar5;
            unaff_x25 = uVar13 + 1;
            if ((long)(int)uVar5 <= (long)unaff_x25) {
              if (unaff_w20 != 1) {
                if (unaff_w20 == 0) {
                  uVar18 = thunk_FUN_01279b34(PTR_DAT_027c1bf0);
                  thunk_FUN_01279b34(PTR_DAT_027b3ed0);
                  uVar21 = thunk_FUN_0124bba8();
                  FUN_01f6b058(uVar21,uVar18,0);
                  goto LAB_01f9426c;
                }
                if ((int)unaff_w20 < 2) {
                  uVar5 = 0;
                  goto LAB_01f934c8;
                }
                if (uVar5 == 0) goto LAB_01f9340c;
                lVar15 = 0;
                lVar19 = 0;
                uVar5 = 0;
                bVar2 = false;
                plVar9 = unaff_x24;
                goto LAB_01f932e8;
              }
              if (in_stack_00000020 != 0) {
                if (unaff_x23 == 0) goto LAB_01f92644;
                if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
                if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_01f92644;
                lVar15 = FUN_01f8a1a8(*(long *)(unaff_x23 + 0x20),0);
                lVar19 = *unaff_x28;
                if ((lVar19 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_01f92644;
                if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                lVar17 = in_stack_00000038[4];
                if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                bVar4 = FUN_01f801dc(lVar17,0,0);
                lVar17 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
                if (lVar15 == 0) {
                  lVar20 = 0;
                }
                else {
                  uVar18 = *(undefined8 *)PTR_DAT_027b1ca8;
                  lVar20 = thunk_FUN_0124baac(lVar15,uVar18);
                  if (lVar20 == 0) goto LAB_01f93580;
                }
                uVar18 = *(undefined8 *)(lVar19 + 0x18);
                FUN_01fab77c(lVar17,0);
                *(long *)(lVar17 + 0x10) = lVar20;
                thunk_FUN_01286abc((long *)(lVar17 + 0x10),lVar20);
                *(int *)(lVar17 + 0x18) = (int)uVar18;
                *(byte *)(lVar17 + 0x1c) = bVar4 & 1;
                *in_stack_00000010 = lVar17;
                thunk_FUN_01286abc(in_stack_00000010,lVar17);
                if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
                uVar18 = *(undefined8 *)(unaff_x23 + 0x20);
                lVar15 = *unaff_x28;
                if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                FUN_01f94678(uVar18,lVar15);
                uVar5 = (uint)in_stack_00000040[3];
                unaff_x22 = (long *)PTR_DAT_027b32e0;
                unaff_x24 = in_stack_00000040;
              }
              if (uVar5 == 0) goto LAB_01f9340c;
              plVar8 = unaff_x24 + 4;
              plVar9 = (long *)*plVar8;
              if (((plVar9 == (long *)0x0) ||
                  (lVar15 = (**(code **)(*plVar9 + 0x378))(plVar9,*(undefined8 *)(*plVar9 + 0x380)),
                  lVar15 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
              iVar6 = *(int *)(*unaff_x28 + 0x18);
              if (*(int *)(lVar15 + 0x18) == iVar6) {
                if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
                if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                lVar19 = in_stack_00000038[4];
                if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                uVar13 = FUN_01f801dc(lVar19,0,0);
                if ((uVar13 & 1) == 0) goto LAB_01f94128;
                plVar9 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,
                                              *(undefined4 *)(lVar15 + 0x18));
                uVar5 = *(int *)(lVar15 + 0x18) - 1;
                FUN_01f89ca0(*unaff_x28,0,plVar9,0,uVar5,0);
                if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                lVar19 = in_stack_00000038[4];
                lVar15 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
                if (lVar15 == 0) goto LAB_01f92644;
                if (*(int *)(lVar15 + 0x18) == 0) goto LAB_01f9340c;
                *(undefined4 *)(lVar15 + 0x20) = 1;
                lVar15 = thunk_FUN_01f894b8(lVar19,lVar15,0);
                if (plVar9 == (long *)0x0) goto LAB_01f92644;
                if ((lVar15 != 0) &&
                   (lVar19 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar19 == 0
                   )) goto LAB_01f941d8;
                if (*(uint *)(plVar9 + 3) <= uVar5) goto LAB_01f9340c;
                plVar11 = plVar9 + (long)(int)uVar5 + 4;
                *plVar11 = lVar15;
                thunk_FUN_01286abc(plVar11,lVar15);
                if (*(uint *)(plVar9 + 3) <= uVar5) goto LAB_01f9340c;
                lVar15 = *unaff_x28;
                if (lVar15 == 0) goto LAB_01f92644;
                if (*(uint *)(lVar15 + 0x18) <= uVar5) goto LAB_01f9340c;
                plVar11 = (long *)*plVar11;
                if (plVar11 == (long *)0x0) goto LAB_01f92644;
                bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
                if ((*(byte *)(*plVar11 + 0x130) < bVar4) ||
                   (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar4 * 8 + -8) !=
                    *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
                FUN_01f89750(plVar11,*(undefined8 *)(lVar15 + (long)(int)uVar5 * 8 + 0x20),0,0);
                goto LAB_01f94118;
              }
              if (iVar6 < *(int *)(lVar15 + 0x18)) {
                plVar9 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
                lVar19 = *unaff_x28;
                if (lVar19 == 0) goto LAB_01f92644;
                uVar13 = 0;
                plVar11 = plVar9 + 4;
                goto LAB_01f937fc;
              }
              if ((int)unaff_x24[3] == 0) goto LAB_01f9340c;
              plVar9 = (long *)*plVar8;
              if (plVar9 == (long *)0x0) goto LAB_01f92644;
              uVar5 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
              if ((uVar5 >> 1 & 1) != 0) goto LAB_01f94128;
              plVar9 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,
                                            *(undefined4 *)(lVar15 + 0x18));
              uVar5 = *(int *)(lVar15 + 0x18) - 1;
              FUN_01f89ca0(*unaff_x28,0,plVar9,0,uVar5,0);
              if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
              if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
              lVar19 = in_stack_00000038[4];
              lVar15 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
              if ((*unaff_x28 == 0) || (lVar15 == 0)) goto LAB_01f92644;
              if (*(int *)(lVar15 + 0x18) == 0) goto LAB_01f9340c;
              *(uint *)(lVar15 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar5;
              lVar15 = thunk_FUN_01f894b8(lVar19,lVar15,0);
              if (plVar9 == (long *)0x0) goto LAB_01f92644;
              if ((lVar15 != 0) &&
                 (lVar19 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar19 == 0))
              goto LAB_01f941d8;
              if (*(uint *)(plVar9 + 3) <= uVar5) goto LAB_01f9340c;
              plVar11 = plVar9 + (long)(int)uVar5 + 4;
              *plVar11 = lVar15;
              thunk_FUN_01286abc(plVar11,lVar15);
              if (*(uint *)(plVar9 + 3) <= uVar5) goto LAB_01f9340c;
              lVar15 = *unaff_x28;
              if (lVar15 == 0) goto LAB_01f92644;
              plVar11 = (long *)*plVar11;
              if (plVar11 != (long *)0x0) {
                bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
                if ((*(byte *)(*plVar11 + 0x130) < bVar4) ||
                   (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar4 * 8 + -8) !=
                    *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
              }
              FUN_01f89ca0(lVar15,uVar5,plVar11,0,*(int *)(lVar15 + 0x18) - uVar5,0);
              *unaff_x28 = (long)plVar9;
              thunk_FUN_01286abc(unaff_x28,plVar9);
              unaff_x24 = in_stack_00000040;
              goto LAB_01f94128;
            }
            if (uVar14 <= unaff_x25) goto LAB_01f9340c;
            unaff_x19 = unaff_x24 + uVar13 + 5;
            uVar14 = FUN_01ee539c(*unaff_x19,0,0);
            uVar13 = unaff_x25;
          } while ((uVar14 & 1) != 0);
          if (*(uint *)(unaff_x24 + 3) <= unaff_x25) goto LAB_01f9340c;
          plVar9 = (long *)*unaff_x19;
          if ((plVar9 == (long *)0x0) ||
             (lVar15 = (**(code **)(*plVar9 + 0x378))(plVar9,*(undefined8 *)(*plVar9 + 0x380)),
             lVar15 == 0)) goto LAB_01f92644;
          uVar14 = *(ulong *)(lVar15 + 0x18);
          lVar19 = *unaff_x28;
          if (uVar14 == 0) {
            if (lVar19 == 0) goto LAB_01f92644;
            param_1 = *(long *)(lVar19 + 0x18);
            goto code_r0x01f92764;
          }
          if (lVar19 == 0) goto LAB_01f92644;
          uVar5 = *(uint *)(lVar19 + 0x18);
          iVar6 = (int)uVar14;
          if ((int)uVar5 < iVar6) {
            uVar7 = iVar6 - 1;
            if ((int)uVar5 < (int)uVar7) {
              plVar9 = (long *)(lVar15 + (long)(int)uVar5 * 8 + 0x20);
              do {
                if ((uint)uVar14 <= uVar5) goto LAB_01f9340c;
                plVar8 = (long *)*plVar9;
                if (plVar8 == (long *)0x0) goto LAB_01f92644;
                lVar19 = (**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
                puVar3 = PTR_DAT_027baa38;
                lVar17 = *(long *)PTR_DAT_027baa38;
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_01220628(lVar17);
                  lVar17 = *(long *)puVar3;
                }
                if (lVar19 == **(long **)(lVar17 + 0xb8)) {
                  uVar14 = (ulong)*(uint *)(lVar15 + 0x18);
                  uVar7 = *(uint *)(lVar15 + 0x18) - 1;
                  unaff_x28 = in_stack_00000058;
                  break;
                }
                uVar14 = *(ulong *)(lVar15 + 0x18);
                uVar5 = uVar5 + 1;
                plVar9 = plVar9 + 1;
                uVar7 = (int)uVar14 - 1;
                unaff_x28 = in_stack_00000058;
              } while ((int)uVar5 < (int)uVar7);
            }
            if (uVar5 != uVar7) goto LAB_01f93214;
            if ((uint)uVar14 <= uVar5) goto LAB_01f9340c;
            plVar8 = (long *)(lVar15 + (long)(int)uVar5 * 8 + 0x20);
            plVar9 = (long *)*plVar8;
            if (plVar9 == (long *)0x0) goto LAB_01f92644;
            lVar19 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200));
            puVar3 = PTR_DAT_027baa38;
            lVar17 = *(long *)PTR_DAT_027baa38;
            if (*(int *)(lVar17 + 0xe0) == 0) {
              thunk_FUN_01220628(lVar17);
              lVar17 = *(long *)puVar3;
            }
            if (lVar19 != **(long **)(lVar17 + 0xb8)) goto LAB_01f92a28;
            if (*(uint *)(lVar15 + 0x18) <= uVar5) goto LAB_01f9340c;
            plVar9 = (long *)*plVar8;
            if ((plVar9 == (long *)0x0) ||
               (lVar19 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0)),
               lVar19 == 0)) goto LAB_01f92644;
            uVar14 = FUN_01f80ec8(lVar19,0);
            if ((uVar14 & 1) == 0) goto LAB_01f93214;
            if (*(uint *)(lVar15 + 0x18) <= uVar5) goto LAB_01f9340c;
            plVar9 = (long *)*plVar8;
            uVar18 = *(undefined8 *)PTR_DAT_027c1be0;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar18 = FUN_01f7d8a0(uVar18,0);
            if (plVar9 == (long *)0x0) goto LAB_01f92644;
            uVar14 = (**(code **)(*plVar9 + 0x208))
                               (plVar9,uVar18,1,*(undefined8 *)(*plVar9 + 0x210));
            unaff_x22 = (long *)PTR_DAT_027b32e0;
            if ((uVar14 & 1) == 0) goto LAB_01f93214;
            if (*(uint *)(lVar15 + 0x18) <= uVar5) goto LAB_01f9340c;
            plVar8 = (long *)*plVar8;
            if ((plVar8 == (long *)0x0) ||
               (plVar9 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                           (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
               plVar9 == (long *)0x0)) goto LAB_01f92644;
LAB_01f93264:
            plStack0000000000000048 =
                 (long *)(**(code **)(*plVar9 + 0x408))(plVar9,*(undefined8 *)(*plVar9 + 0x410));
          }
          else {
                    /* try { // try from 01f927dc to 020927df has its CatchHandler @ 01f929fc */
                    /* try { // try from 01f927e0 to 020927f3 has its CatchHandler @ 01f92a08 */
            if (iVar6 == 0) goto LAB_01f9340c;
            uVar7 = iVar6 - 1;
            lVar19 = (long)(int)uVar7;
            plVar8 = (long *)(lVar15 + lVar19 * 8 + 0x20);
            plVar9 = (long *)*plVar8;
            if ((plVar9 == (long *)0x0) ||
               (lVar17 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0)),
               lVar17 == 0)) goto LAB_01f92644;
            uVar14 = FUN_01f80ec8(lVar17,0);
            if (iVar6 < (int)uVar5) {
              unaff_x24 = in_stack_00000040;
              if ((uVar14 & 1) != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_01f9340c;
                    /* try { // try from 01f9282c to 02092833 has its CatchHandler @ 01f929b0 */
                plVar9 = (long *)*plVar8;
                uVar18 = *(undefined8 *)PTR_DAT_027c1be0;
                if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                uVar18 = FUN_01f7d8a0(uVar18,0);
                if (plVar9 == (long *)0x0) goto LAB_01f92644;
                uVar14 = (**(code **)(*plVar9 + 0x208))
                                   (plVar9,uVar18,1,*(undefined8 *)(*plVar9 + 0x210));
                unaff_x22 = (long *)PTR_DAT_027b32e0;
                if ((uVar14 & 1) != 0) {
                  if (unaff_x23 == 0) goto LAB_01f92644;
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                  lVar17 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                  if (lVar17 == 0) goto LAB_01f92644;
                  if (*(uint *)(lVar17 + 0x18) <= uVar7) goto LAB_01f9340c;
                  if (*(uint *)(lVar17 + lVar19 * 4 + 0x20) == uVar7) {
LAB_01f9323c:
                    if (uVar7 < *(uint *)(lVar15 + 0x18)) {
                      plVar8 = (long *)*plVar8;
                      if ((plVar8 != (long *)0x0) &&
                         (plVar9 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                                     (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
                         unaff_x24 = in_stack_00000040, plVar9 != (long *)0x0)) goto LAB_01f93264;
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
              if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_01f9340c;
              plVar9 = (long *)*plVar8;
              uVar18 = *(undefined8 *)PTR_DAT_027c1be0;
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar18 = FUN_01f7d8a0(uVar18,0);
              if (plVar9 == (long *)0x0) goto LAB_01f92644;
              uVar14 = (**(code **)(*plVar9 + 0x208))
                                 (plVar9,uVar18,1,*(undefined8 *)(*plVar9 + 0x210));
              unaff_x22 = (long *)PTR_DAT_027b32e0;
              if ((uVar14 & 1) == 0) {
                plStack0000000000000048 = (long *)0x0;
                goto LAB_01f92a2c;
              }
              if (unaff_x23 == 0) goto LAB_01f92644;
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
              lVar17 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
              if (lVar17 == 0) goto LAB_01f92644;
              if (*(uint *)(lVar17 + 0x18) <= uVar7) goto LAB_01f9340c;
              if (*(uint *)(lVar17 + lVar19 * 4 + 0x20) == uVar7) {
                if (uVar7 < *(uint *)(lVar15 + 0x18)) {
                  plVar9 = (long *)*plVar8;
                  if ((plVar9 != (long *)0x0) &&
                     (plVar9 = (long *)(**(code **)(*plVar9 + 0x1d8))
                                                 (plVar9,*(undefined8 *)(*plVar9 + 0x1e0)),
                     unaff_x26 != 0)) {
                    if (uVar7 < *(uint *)(unaff_x26 + 0x18)) {
                      if (plVar9 != (long *)0x0) {
                        uVar14 = (**(code **)(*plVar9 + 0x288))
                                           (plVar9,*(undefined8 *)(unaff_x26 + lVar19 * 8 + 0x20),
                                            *(undefined8 *)(*plVar9 + 0x290));
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
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar14 = FUN_01f801dc(plStack0000000000000048,0,0);
          if ((uVar14 & 1) == 0) {
            if (*unaff_x28 == 0) goto LAB_01f92644;
            uVar5 = *(uint *)(*unaff_x28 + 0x18);
          }
          else {
            uVar5 = *(int *)(lVar15 + 0x18) - 1;
          }
          if ((int)uVar5 < 1) {
            uVar7 = 0;
          }
          else {
            uVar16 = 0;
            plVar9 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
            do {
              if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_01f9340c;
              lVar19 = (long)(int)uVar16;
              plVar8 = *(long **)(lVar15 + lVar19 * 8 + 0x20);
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
              lVar17 = *plVar9;
              if (lVar17 == 0) goto LAB_01f92644;
              if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_01f9340c;
              if (unaff_x26 == 0) goto LAB_01f92644;
              uVar7 = *(uint *)(lVar17 + lVar19 * 4 + 0x20);
              if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
              uVar18 = *(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar14 = FUN_01f7f404(plVar8,uVar18,0);
              if ((uVar14 & 1) == 0) {
                if ((in_stack_00000050 >> 0x12 & 1) != 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                  lVar17 = *plVar9;
                  if (lVar17 == 0) goto LAB_01f92644;
                  if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_01f9340c;
                  lVar20 = *in_stack_00000058;
                  if (lVar20 == 0) goto LAB_01f92644;
                  uVar7 = *(uint *)(lVar17 + lVar19 * 4 + 0x20);
                  if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_01f9340c;
                  lVar17 = *unaff_x22;
                  lVar20 = *(long *)(lVar20 + (long)(int)uVar7 * 8 + 0x20);
                  if (*(int *)(lVar17 + 0xe0) == 0) {
                    thunk_FUN_01220628();
                    lVar17 = *unaff_x22;
                  }
                  if (lVar20 == *(long *)(*(long *)(lVar17 + 0xb8) + 0x18)) goto LAB_01f92e70;
                }
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                lVar17 = *plVar9;
                if (lVar17 == 0) goto LAB_01f92644;
                if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_01f9340c;
                lVar20 = *in_stack_00000058;
                if (lVar20 == 0) goto LAB_01f92644;
                uVar7 = *(uint *)(lVar17 + lVar19 * 4 + 0x20);
                if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_01f9340c;
                if (*(long *)(lVar20 + (long)(int)uVar7 * 8 + 0x20) != 0) {
                  uVar18 = *(undefined8 *)PTR_DAT_027b5b48;
                  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                    thunk_FUN_01220628();
                  }
                  uVar18 = FUN_01f7d8a0(uVar18,0);
                  uVar14 = FUN_01f7f404(plVar8,uVar18,0);
                  if ((uVar14 & 1) == 0) {
                    if (plVar8 == (long *)0x0) goto LAB_01f92644;
                    uVar14 = FUN_01f81644(plVar8,0);
                    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                    lVar17 = *plVar9;
                    if (lVar17 == 0) goto LAB_01f92644;
                    if ((*(uint *)(lVar17 + 0x18) <= uVar16) ||
                       (uVar7 = *(uint *)(lVar17 + lVar19 * 4 + 0x20),
                       *(uint *)(unaff_x26 + 0x18) <= uVar7)) goto LAB_01f9340c;
                    uVar18 = *(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
                      thunk_FUN_01220628();
                    }
                    uVar10 = FUN_01f7f404(uVar18,0,0);
                    unaff_x22 = (long *)PTR_DAT_027b32e0;
                    uVar7 = uVar16;
                    if ((uVar14 & 1) == 0) {
                      if ((uVar10 & 1) == 0) {
                        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                        lVar17 = *plVar9;
                        if (lVar17 == 0) goto LAB_01f92644;
                        if ((*(uint *)(lVar17 + 0x18) <= uVar16) ||
                           (uVar1 = *(uint *)(lVar17 + lVar19 * 4 + 0x20),
                           *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_01f9340c;
                        uVar14 = (**(code **)(*plVar8 + 0x288))
                                           (plVar8,*(undefined8 *)
                                                    (unaff_x26 + (long)(int)uVar1 * 8 + 0x20),
                                            *(undefined8 *)(*plVar8 + 0x290));
                        if ((uVar14 & 1) == 0) {
                          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                          lVar17 = *plVar9;
                          if (lVar17 == 0) goto LAB_01f92644;
                          if ((*(uint *)(lVar17 + 0x18) <= uVar16) ||
                             (uVar1 = *(uint *)(lVar17 + lVar19 * 4 + 0x20),
                             *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_01f9340c;
                          lVar17 = *(long *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20);
                          if (lVar17 == 0) goto LAB_01f92644;
                          uVar14 = FUN_01f81468(lVar17,0);
                          unaff_x24 = in_stack_00000040;
                          unaff_x28 = in_stack_00000058;
                          if ((uVar14 & 1) != 0) {
                            if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                              lVar17 = *plVar9;
                              if (lVar17 != 0) {
                                if (uVar16 < *(uint *)(lVar17 + 0x18)) {
                                  lVar20 = *in_stack_00000058;
                                  if (lVar20 != 0) {
                                    uVar1 = *(uint *)(lVar17 + lVar19 * 4 + 0x20);
                                    if (uVar1 < *(uint *)(lVar20 + 0x18)) {
                                      uVar14 = (**(code **)(*plVar8 + 0x828))
                                                         (plVar8,*(undefined8 *)
                                                                  (lVar20 + (long)(int)uVar1 * 8 +
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
                      if ((uVar10 & 1) != 0) break;
                      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                      lVar17 = *plVar9;
                      if (lVar17 == 0) goto LAB_01f92644;
                      if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_01f9340c;
                      lVar20 = *in_stack_00000058;
                      if (lVar20 == 0) goto LAB_01f92644;
                      uVar1 = *(uint *)(lVar17 + lVar19 * 4 + 0x20);
                      if (*(uint *)(lVar20 + 0x18) <= uVar1) goto LAB_01f9340c;
                      uVar18 = *(undefined8 *)(lVar20 + (long)(int)uVar1 * 8 + 0x20);
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
                      uVar14 = FUN_01f9451c(uVar18,plVar8);
                      unaff_x22 = (long *)PTR_DAT_027b32e0;
joined_r0x01f92e6c:
                      unaff_x24 = in_stack_00000040;
                      unaff_x28 = in_stack_00000058;
                      if ((uVar14 & 1) == 0) break;
                    }
                  }
                }
              }
LAB_01f92e70:
              uVar16 = uVar16 + 1;
              unaff_x24 = in_stack_00000040;
              unaff_x28 = in_stack_00000058;
              uVar7 = uVar5;
            } while (uVar5 != uVar16);
          }
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar14 = FUN_01f801dc(plStack0000000000000048,0,0);
          if (((uVar14 & 1) != 0) && (uVar7 == *(int *)(lVar15 + 0x18) - 1U)) {
            lVar15 = *unaff_x28;
            if (lVar15 == 0) goto LAB_01f92644;
            lVar19 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3) + 0x20;
            while ((int)uVar7 < *(int *)(lVar15 + 0x18)) {
              if ((plStack0000000000000048 == (long *)0x0) ||
                 (uVar14 = FUN_01f81644(plStack0000000000000048,0), unaff_x26 == 0))
              goto LAB_01f92644;
              if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
              uVar18 = *(undefined8 *)(unaff_x26 + lVar19);
              if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar10 = FUN_01f7f404(uVar18,0,0);
              unaff_x22 = (long *)PTR_DAT_027b32e0;
              if ((uVar14 & 1) == 0) {
                if ((uVar10 & 1) == 0) {
                  if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
                  uVar14 = (**(code **)(*plStack0000000000000048 + 0x288))
                                     (plStack0000000000000048,*(undefined8 *)(unaff_x26 + lVar19),
                                      *(undefined8 *)(*plStack0000000000000048 + 0x290));
                  if ((uVar14 & 1) == 0) {
                    if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
                    if (*(long *)(unaff_x26 + lVar19) == 0) goto LAB_01f92644;
                    uVar14 = FUN_01f81468(*(long *)(unaff_x26 + lVar19),0);
                    if ((uVar14 & 1) != 0) {
                      lVar15 = *unaff_x28;
                      if (lVar15 != 0) {
                        if (uVar7 < *(uint *)(lVar15 + 0x18)) {
                          uVar14 = (**(code **)(*plStack0000000000000048 + 0x828))
                                             (plStack0000000000000048,
                                              *(undefined8 *)(lVar15 + lVar19),
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
                if ((uVar10 & 1) != 0) break;
                lVar15 = *unaff_x28;
                if (lVar15 == 0) goto LAB_01f92644;
                if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_01f9340c;
                uVar18 = *(undefined8 *)(lVar15 + lVar19);
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
                uVar14 = FUN_01f9451c(uVar18,plStack0000000000000048);
                unaff_x22 = (long *)PTR_DAT_027b32e0;
joined_r0x01f93040:
                if ((uVar14 & 1) == 0) break;
              }
              lVar15 = *unaff_x28;
              uVar7 = uVar7 + 1;
              lVar19 = lVar19 + 8;
              if (lVar15 == 0) goto LAB_01f92644;
            }
          }
          if (*unaff_x28 == 0) goto LAB_01f92644;
          if (uVar7 == *(uint *)(*unaff_x28 + 0x18)) goto code_r0x01f93070;
          goto LAB_01f93214;
        }
      }
    }
    goto LAB_01f9340c;
  }
  goto LAB_01f92644;
LAB_01f932e8:
  if (unaff_x23 == 0) goto LAB_01f92644;
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar5) goto LAB_01f9340c;
  if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
  if (((((uint)in_stack_00000038[3] <= uVar5) || (uVar13 = lVar15 + 1, uVar14 <= uVar13)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar13)) ||
     ((in_stack_00000038[3] & 0xffffffffU) <= uVar13)) goto LAB_01f9340c;
  lVar20 = plVar9[lVar19 + 4];
  lVar22 = unaff_x24[lVar15 + 5];
  lVar17 = in_stack_00000038[lVar19 + 4];
  uVar18 = *(undefined8 *)(unaff_x23 + lVar19 * 8 + 0x20);
  uVar21 = *(undefined8 *)(unaff_x23 + 0x28 + lVar15 * 8);
  lVar19 = in_stack_00000038[lVar15 + 5];
  if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  iVar6 = FUN_01f947fc(lVar20,uVar18,lVar17,lVar22,uVar21,lVar19);
  if (iVar6 == 0) {
    bVar2 = true;
  }
  else if (iVar6 == 2) {
    uVar5 = (int)lVar15 + 1;
    bVar2 = false;
  }
  if ((ulong)unaff_w20 - 2 != lVar15) {
    lVar19 = (long)(int)uVar5;
    lVar15 = lVar15 + 1;
    uVar14 = in_stack_00000040[3] & 0xffffffff;
    plVar9 = in_stack_00000040;
    if ((uint)in_stack_00000040[3] <= uVar5) goto LAB_01f9340c;
    goto LAB_01f932e8;
  }
  unaff_x22 = (long *)PTR_DAT_027b32e0;
  unaff_x24 = in_stack_00000040;
  unaff_x28 = in_stack_00000058;
  if (bVar2) {
    uVar18 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
    thunk_FUN_01279b34(PTR_DAT_027bc458);
    uVar21 = thunk_FUN_0124bba8();
    FUN_01ee31d4(uVar21,uVar18,0);
LAB_01f9426c:
    uVar18 = thunk_FUN_01279b34(PTR_DAT_027c1bf8);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar21,uVar18);
  }
LAB_01f934c8:
  if (in_stack_00000020 != 0) {
    if (unaff_x23 == 0) goto LAB_01f92644;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar5) goto LAB_01f9340c;
    plVar9 = (long *)(unaff_x23 + (long)(int)uVar5 * 8 + 0x20);
    lVar15 = *plVar9;
    if (lVar15 == 0) goto LAB_01f92644;
    lVar15 = FUN_01f8a1a8(lVar15,0);
    lVar19 = *unaff_x28;
    if ((lVar19 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_01f92644;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar5) goto LAB_01f9340c;
    lVar17 = in_stack_00000038[(long)(int)uVar5 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    bVar4 = FUN_01f801dc(lVar17,0,0);
    lVar17 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
    if (lVar15 == 0) {
      lVar20 = 0;
    }
    else {
      uVar18 = *(undefined8 *)PTR_DAT_027b1ca8;
      lVar20 = thunk_FUN_0124baac(lVar15,uVar18);
      if (lVar20 == 0) {
LAB_01f93580:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(lVar15,uVar18);
      }
    }
    uVar18 = *(undefined8 *)(lVar19 + 0x18);
    FUN_01fab77c(lVar17,0);
    *(long *)(lVar17 + 0x10) = lVar20;
    thunk_FUN_01286abc((long *)(lVar17 + 0x10),lVar20);
    *(int *)(lVar17 + 0x18) = (int)uVar18;
    *(byte *)(lVar17 + 0x1c) = bVar4 & 1;
    *in_stack_00000010 = lVar17;
    thunk_FUN_01286abc(in_stack_00000010,lVar17);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar5) goto LAB_01f9340c;
    lVar15 = *plVar9;
    lVar19 = *unaff_x28;
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f94678(lVar15,lVar19);
    unaff_x22 = (long *)PTR_DAT_027b32e0;
    unaff_x24 = in_stack_00000040;
  }
  if (*(uint *)(unaff_x24 + 3) <= uVar5) goto LAB_01f9340c;
  plVar8 = unaff_x24 + (long)(int)uVar5 + 4;
  plVar9 = (long *)*plVar8;
  if (((plVar9 == (long *)0x0) ||
      (lVar15 = (**(code **)(*plVar9 + 0x378))(plVar9,*(undefined8 *)(*plVar9 + 0x380)), lVar15 == 0
      )) || (*unaff_x28 == 0)) goto LAB_01f92644;
  iVar6 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar15 + 0x18) == iVar6) {
    if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar5) goto LAB_01f9340c;
    lVar19 = in_stack_00000038[(long)(int)uVar5 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar13 = FUN_01f801dc(lVar19,0,0);
    if ((uVar13 & 1) != 0) {
      plVar9 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar15 + 0x18));
      uVar7 = *(int *)(lVar15 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar9,0,uVar7,0);
      if (*(uint *)(in_stack_00000038 + 3) <= uVar5) goto LAB_01f9340c;
      lVar19 = in_stack_00000038[(long)(int)uVar5 + 4];
      lVar15 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar15 == 0) goto LAB_01f92644;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar15 + 0x20) = 1;
      lVar15 = thunk_FUN_01f894b8(lVar19,lVar15,0);
      if (plVar9 == (long *)0x0) goto LAB_01f92644;
      if ((lVar15 != 0) &&
         (lVar19 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar19 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar9 + 3) <= uVar7) goto LAB_01f9340c;
      plVar11 = plVar9 + (long)(int)uVar7 + 4;
      *plVar11 = lVar15;
      thunk_FUN_01286abc(plVar11,lVar15);
      if (*(uint *)(plVar9 + 3) <= uVar7) goto LAB_01f9340c;
      lVar15 = *unaff_x28;
      if (lVar15 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_01f9340c;
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) goto LAB_01f92644;
      bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_027b3f80)
         ) {
LAB_01f942dc:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(plVar11);
      }
      FUN_01f89750(plVar11,*(undefined8 *)(lVar15 + (long)(int)uVar7 * 8 + 0x20),0,0);
      goto FUN_01f94198;
    }
  }
  else {
    if (iVar6 < *(int *)(lVar15 + 0x18)) {
      plVar9 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      lVar19 = *unaff_x28;
      if (lVar19 == 0) goto LAB_01f92644;
      uVar13 = 0;
      plVar11 = plVar9 + 4;
      do {
        if ((long)(int)*(uint *)(lVar19 + 0x18) <= (long)uVar13) {
          uVar7 = *(uint *)(lVar15 + 0x18);
          if ((int)uVar13 < (int)(uVar7 - 1)) {
            do {
              if (uVar7 <= (uint)uVar13) goto LAB_01f9340c;
              plVar12 = *(long **)(lVar15 + 0x20 + uVar13 * 8);
              if ((plVar12 == (long *)0x0) ||
                 (lVar19 = (**(code **)(*plVar12 + 0x1f8))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x200)),
                 plVar9 == (long *)0x0)) goto LAB_01f92644;
              if ((lVar19 != 0) &&
                 (lVar17 = thunk_FUN_0124baac(lVar19,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
              goto LAB_01f941d8;
              if (*(uint *)(plVar9 + 3) <= (uint)uVar13) goto LAB_01f9340c;
              *plVar11 = lVar19;
              thunk_FUN_01286abc(plVar11,lVar19);
              uVar7 = *(uint *)(lVar15 + 0x18);
              uVar13 = uVar13 + 1;
              plVar11 = plVar11 + 1;
            } while ((int)uVar13 < (int)(uVar7 - 1));
          }
          if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
          if (*(uint *)(in_stack_00000038 + 3) <= uVar5) goto LAB_01f9340c;
          lVar19 = in_stack_00000038[(long)(int)uVar5 + 4];
          if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar14 = FUN_01f801dc(lVar19,0,0);
          uVar7 = (uint)uVar13;
          if ((uVar14 & 1) == 0) {
            if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_01f9340c;
            plVar11 = *(long **)(lVar15 + (long)(int)uVar7 * 8 + 0x20);
            if ((plVar11 == (long *)0x0) ||
               (lVar15 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
               plVar9 == (long *)0x0)) goto LAB_01f92644;
            if ((lVar15 != 0) &&
               (lVar19 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar19 == 0))
            goto LAB_01f941d8;
            uVar16 = *(uint *)(plVar9 + 3);
          }
          else {
            if (*(uint *)(in_stack_00000038 + 3) <= uVar5) goto LAB_01f9340c;
            lVar15 = in_stack_00000038[(long)(int)uVar5 + 4];
            uVar18 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
            lVar15 = thunk_FUN_01f894b8(lVar15,uVar18,0);
            if (plVar9 == (long *)0x0) goto LAB_01f92644;
            if ((lVar15 != 0) &&
               (lVar19 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar19 == 0))
            goto LAB_01f941d8;
            uVar16 = *(uint *)(plVar9 + 3);
          }
          if (uVar16 <= uVar7) goto LAB_01f9340c;
          plVar9[(long)(int)uVar7 + 4] = lVar15;
          thunk_FUN_01286abc(plVar9 + (long)(int)uVar7 + 4,lVar15);
FUN_01f94198:
          *unaff_x28 = (long)plVar9;
          thunk_FUN_01286abc(unaff_x28,plVar9);
          unaff_x24 = in_stack_00000040;
          goto OVRPlugin_UnityOpenXR__OnSessionExiting;
        }
        if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_01f9340c;
        if (plVar9 == (long *)0x0) goto LAB_01f92644;
        lVar19 = *(long *)(lVar19 + uVar13 * 8 + 0x20);
        if ((lVar19 != 0) &&
           (lVar17 = thunk_FUN_0124baac(lVar19,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar9 + 3) <= uVar13) goto LAB_01f9340c;
        *plVar11 = lVar19;
        thunk_FUN_01286abc(plVar11,lVar19);
        lVar19 = *unaff_x28;
        uVar13 = uVar13 + 1;
        plVar11 = plVar11 + 1;
        if (lVar19 == 0) goto LAB_01f92644;
      } while( true );
    }
    if (*(uint *)(unaff_x24 + 3) <= uVar5) goto LAB_01f9340c;
    plVar9 = (long *)*plVar8;
    if (plVar9 == (long *)0x0) goto LAB_01f92644;
    uVar7 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
    if ((uVar7 >> 1 & 1) == 0) {
      plVar9 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar15 + 0x18));
      uVar7 = *(int *)(lVar15 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar9,0,uVar7,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar5) goto LAB_01f9340c;
      lVar19 = in_stack_00000038[(long)(int)uVar5 + 4];
      lVar15 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar15 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar15 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar7;
      lVar15 = thunk_FUN_01f894b8(lVar19,lVar15,0);
      if (plVar9 == (long *)0x0) goto LAB_01f92644;
      if ((lVar15 != 0) &&
         (lVar19 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar19 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar9 + 3) <= uVar7) goto LAB_01f9340c;
      plVar11 = plVar9 + (long)(int)uVar7 + 4;
      *plVar11 = lVar15;
      thunk_FUN_01286abc(plVar11,lVar15);
      if (*(uint *)(plVar9 + 3) <= uVar7) goto LAB_01f9340c;
      lVar15 = *unaff_x28;
      if (lVar15 == 0) goto LAB_01f92644;
      plVar11 = (long *)*plVar11;
      if (plVar11 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar15,uVar7,plVar11,0,*(int *)(lVar15 + 0x18) - uVar7,0);
      *unaff_x28 = (long)plVar9;
      thunk_FUN_01286abc(unaff_x28,plVar9);
      unaff_x24 = in_stack_00000040;
    }
  }
OVRPlugin_UnityOpenXR__OnSessionExiting:
  if (uVar5 < *(uint *)(unaff_x24 + 3)) goto LAB_01f941b4;
  goto LAB_01f9340c;
  while( true ) {
    lVar19 = *(long *)(lVar19 + uVar13 * 8 + 0x20);
    if ((lVar19 != 0) &&
       (lVar17 = thunk_FUN_0124baac(lVar19,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar9 + 3) <= uVar13) goto LAB_01f9340c;
    *plVar11 = lVar19;
    thunk_FUN_01286abc(plVar11,lVar19);
    lVar19 = *unaff_x28;
    uVar13 = uVar13 + 1;
    plVar11 = plVar11 + 1;
    if (lVar19 == 0) break;
LAB_01f937fc:
    if ((long)(int)*(uint *)(lVar19 + 0x18) <= (long)uVar13) {
      uVar5 = *(uint *)(lVar15 + 0x18);
      if ((int)(uVar5 - 1) <= (int)uVar13) goto LAB_01f93a68;
      goto LAB_01f939f4;
    }
    if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_01f9340c;
    if (plVar9 == (long *)0x0) break;
  }
  goto LAB_01f92644;
code_r0x01f93070:
  if (unaff_x23 == 0) goto LAB_01f92644;
  if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) || (*(uint *)(unaff_x23 + 0x18) <= unaff_w20))
  goto LAB_01f9340c;
  lVar15 = (long)(int)unaff_w20;
  *(undefined8 *)(unaff_x23 + lVar15 * 8 + 0x20) = *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20)
  ;
  thunk_FUN_01286abc();
  if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
  if ((plStack0000000000000048 != (long *)0x0) &&
     (lVar19 = thunk_FUN_0124baac(plStack0000000000000048,*(undefined8 *)(*in_stack_00000038 + 0x40)
                                 ), lVar19 == 0)) goto LAB_01f941d8;
  if (*(uint *)(in_stack_00000038 + 3) <= unaff_w20) goto LAB_01f9340c;
  in_stack_00000038[lVar15 + 4] = (long)plStack0000000000000048;
  thunk_FUN_01286abc(in_stack_00000038 + lVar15 + 4,plStack0000000000000048);
  uVar13 = (ulong)*(uint *)(unaff_x24 + 3);
  if (uVar13 <= unaff_x25) goto LAB_01f9340c;
  lVar19 = *unaff_x19;
  goto joined_r0x01f927d4;
  while( true ) {
    plVar12 = *(long **)(lVar15 + 0x20 + uVar13 * 8);
    if ((plVar12 == (long *)0x0) ||
       (lVar19 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
       plVar9 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar19 != 0) &&
       (lVar17 = thunk_FUN_0124baac(lVar19,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar9 + 3) <= (uint)uVar13) goto LAB_01f9340c;
    *plVar11 = lVar19;
    thunk_FUN_01286abc(plVar11,lVar19);
    uVar5 = *(uint *)(lVar15 + 0x18);
    uVar13 = uVar13 + 1;
    plVar11 = plVar11 + 1;
    if ((int)(uVar5 - 1) <= (int)uVar13) break;
LAB_01f939f4:
    if (uVar5 <= (uint)uVar13) goto LAB_01f9340c;
  }
LAB_01f93a68:
  if (in_stack_00000038 != (long *)0x0) {
    if ((int)in_stack_00000038[3] != 0) {
      lVar19 = in_stack_00000038[4];
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar14 = FUN_01f801dc(lVar19,0,0);
      uVar5 = (uint)uVar13;
      if ((uVar14 & 1) == 0) {
        if (*(uint *)(lVar15 + 0x18) <= uVar5) goto LAB_01f9340c;
        plVar11 = *(long **)(lVar15 + (long)(int)uVar5 * 8 + 0x20);
        if ((plVar11 == (long *)0x0) ||
           (lVar15 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
           plVar9 == (long *)0x0)) goto LAB_01f92644;
        if ((lVar15 != 0) &&
           (lVar19 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar19 == 0))
        goto LAB_01f941d8;
        uVar7 = *(uint *)(plVar9 + 3);
      }
      else {
        if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
        lVar15 = in_stack_00000038[4];
        uVar18 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        lVar15 = thunk_FUN_01f894b8(lVar15,uVar18,0);
        if (plVar9 == (long *)0x0) goto LAB_01f92644;
        if ((lVar15 != 0) &&
           (lVar19 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar19 == 0)) {
LAB_01f941d8:
          uVar18 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar18,0);
        }
        uVar7 = *(uint *)(plVar9 + 3);
      }
      if (uVar5 < uVar7) {
        plVar9[(long)(int)uVar5 + 4] = lVar15;
        thunk_FUN_01286abc(plVar9 + (long)(int)uVar5 + 4,lVar15);
LAB_01f94118:
        *unaff_x28 = (long)plVar9;
        thunk_FUN_01286abc(unaff_x28,plVar9);
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
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


