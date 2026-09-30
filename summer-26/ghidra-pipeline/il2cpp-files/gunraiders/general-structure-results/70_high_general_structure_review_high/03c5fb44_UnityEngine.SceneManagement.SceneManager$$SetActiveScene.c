/*
FUNCTION_NAME: UnityEngine.SceneManagement.SceneManager$$SetActiveScene
ENTRY_POINT: 03c5fb44
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03c61b04) */

void UnityEngine_SceneManagement_SceneManager__SetActiveScene(void)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  char cVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined4 *puVar21;
  float *pfVar22;
  long lVar23;
  int *piVar24;
  float *pfVar25;
  float *pfVar26;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar27;
  uint uVar28;
  long *unaff_x21;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar43;
  ulong uVar42;
  float fVar44;
  ulong uVar45;
  ulong uVar46;
  float fVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  float fVar51;
  undefined1 auVar52 [16];
  float fStack0000000000000024;
  int iStack000000000000002c;
  float fStack0000000000000030;
  int iStack0000000000000034;
  float fStack0000000000000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  undefined8 in_stack_00000098;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  float fVar53;
  
  FUN_01c5d288(PTR_DAT_0422f9e8);
  FUN_01c5d288(Oculus_Platform_LogEventName_TypeInfo);
  FUN_01c5d288(Unity_Services_Core_Internal_LockedComponentRegistry_TypeInfo);
  FUN_01c5d288(StringLiteral_5882);
  FUN_01c5d288(System_ComponentModel_Design_ITypeDescriptorFilterService_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x646) = 1;
  fVar53 = 0.0;
  fVar31 = 0.0;
  fVar43 = 0.0;
  in_stack_000001a0 = 0;
  in_stack_000001d8 = 0;
  in_stack_000001d0 = 0;
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  in_stack_000001b8 = 0;
  in_stack_000001b0 = 0;
  in_stack_000001c8 = 0;
  in_stack_000001c0 = 0;
  in_stack_00000188 = 0;
  in_stack_00000180 = 0;
  in_stack_00000198 = 0;
  in_stack_00000190 = 0;
  in_stack_00000168 = 0;
  in_stack_00000160 = 0;
  in_stack_00000178 = 0;
  in_stack_00000170 = 0;
  UnityEngine_Networking_PlayerConnection_PlayerConnection__DisconnectAll();
  FUN_03c624cc();
  uVar27 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar10 = FUN_03d4dc54(uVar27,0,0);
  if ((uVar10 & 1) != 0) {
    FUN_03c62434();
  }
  uVar27 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar10 = FUN_03d4dc54(uVar27,0,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x28) != 0) &&
     (plVar11 = (long *)FUN_03c4db04(),
     plVar14 = (long *)VoxelBusters_EssentialKit_MailComposerResultCode_TypeInfo,
     plVar11 != (long *)0x0)) {
    lVar17 = *plVar11;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar10 != 0) {
      piVar24 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) ==
            *(long *)VoxelBusters_EssentialKit_MailComposerResultCode_TypeInfo) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_03c5fcb8;
        }
        uVar10 = uVar10 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01c72498(plVar11,*(long *)
                                    VoxelBusters_EssentialKit_MailComposerResultCode_TypeInfo,0);
LAB_03c5fcb8:
    iVar8 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    if (iVar8 == 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x30) + 0x18) == 0) {
        return;
      }
      auVar52 = FUN_03d442d0(0);
      FUN_03d44294(*(undefined4 *)(unaff_x19 + 0x100),0);
      lVar17 = *(long *)(unaff_x19 + 0x110);
      if (lVar17 != 0) {
        *(undefined4 *)(lVar17 + 0x18) = 0;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        plVar11 = (long *)PTR_DAT_04233d00;
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          fStack0000000000000030 = 0.0;
          iVar8 = 0;
          while (plVar13 = (long *)FUN_03c4db04(), plVar13 != (long *)0x0) {
            lVar17 = *plVar13;
            uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar10 != 0) {
              piVar24 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *plVar14) {
                  puVar12 = (undefined8 *)(lVar17 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_03c5fd7c;
                }
                uVar10 = uVar10 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar10 != 0);
            }
            puVar12 = (undefined8 *)FUN_01c72498(plVar13,*plVar14,0);
LAB_03c5fd7c:
            iVar9 = (*(code *)*puVar12)(plVar13,puVar12[1]);
            if (iVar9 <= iVar8) {
              fStack0000000000000038 =
                   (float)FUN_03d443cc(*(undefined4 *)(unaff_x19 + 0x40),
                                       *(undefined4 *)(unaff_x19 + 0x44),0);
              fStack0000000000000024 = 0.0;
              fStack0000000000000064 = 0.0;
              if (*(int *)(unaff_x19 + 0x38) != 0) goto LAB_03c5ffd0;
              if (fStack0000000000000038 == 1.0) {
                fStack0000000000000064 = fStack0000000000000030 * 0.5;
              }
              else {
                fStack0000000000000064 = 0.0;
                if (fStack0000000000000038 < 1.0) {
                  fStack0000000000000064 = fStack0000000000000030 + 1.0;
                }
              }
              if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                 (plVar13 = (long *)FUN_03c4db04(), plVar13 != (long *)0x0)) {
                lVar17 = *plVar13;
                uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar10 == 0) goto LAB_03c5fec0;
                piVar24 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                goto LAB_03c5fea8;
              }
              break;
            }
            if (*(long *)(unaff_x19 + 0x28) == 0) break;
            uVar27 = FUN_03c5b6d8(*(long *)(unaff_x19 + 0x28),iVar8);
            lVar17 = *(long *)(unaff_x19 + 0x110);
            if (lVar17 == 0) break;
            lVar18 = *(long *)(lVar17 + 0x10);
            lVar23 = *plVar11;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar18 == 0) break;
            uVar1 = *(uint *)(lVar17 + 0x18);
            if (uVar1 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar17 + 0x18) = uVar1 + 1;
              *(float *)(lVar18 + (long)(int)uVar1 * 4 + 0x20) = (float)uVar27;
            }
            else {
              FUN_02da71ec(uVar27,lVar17,
                           *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
            }
            iVar8 = iVar8 + 1;
            fStack0000000000000030 = fStack0000000000000030 + (float)uVar27;
            if (*(long *)(unaff_x19 + 0x28) == 0) break;
          }
        }
      }
    }
  }
  goto LAB_03c5fe14;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar24 = piVar24 + 4;
    if (uVar10 == 0) break;
LAB_03c5fea8:
    if (*(long *)(piVar24 + -2) == *plVar14) {
      puVar12 = (undefined8 *)(lVar17 + (long)*piVar24 * 0x10 + 0x138);
      goto LAB_03c5fedc;
    }
  }
LAB_03c5fec0:
  puVar12 = (undefined8 *)FUN_01c72498(plVar13,*plVar14,0);
LAB_03c5fedc:
  iVar8 = (*(code *)*puVar12)(plVar13,puVar12[1]);
  if (iVar8 == 1) {
    if ((*(long *)(unaff_x19 + 0x28) == 0) ||
       (plVar13 = (long *)FUN_03c4db04(), plVar13 == (long *)0x0)) goto LAB_03c5fe14;
    lVar17 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar10 != 0) {
      piVar24 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)System_Collections_Generic_List<Pet>_TypeInfo) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_03c5ff84;
        }
        uVar10 = uVar10 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01c72498(plVar13,*(long *)System_Collections_Generic_List<Pet>_TypeInfo,0);
LAB_03c5ff84:
    lVar17 = (*(code *)*puVar12)(plVar13,0,puVar12[1]);
    if (lVar17 == 0) goto LAB_03c5fe14;
    iVar8 = -0x80000000;
    if (fStack0000000000000038 != INFINITY) {
      iVar8 = (int)fStack0000000000000038;
    }
    fStack0000000000000024 = (float)(*(char *)(lVar17 + 0x30) + iVar8 + -1);
  }
  else {
    fStack0000000000000024 = 2.1474836e+09;
    if (fStack0000000000000038 != INFINITY) {
      fStack0000000000000024 = (float)((int)fStack0000000000000038 + -1);
    }
  }
  fStack0000000000000024 = fStack0000000000000030 / fStack0000000000000024;
LAB_03c5ffd0:
  FUN_03c620b4();
  puVar5 = PTR_DAT_0422fa60;
  fVar3 = DAT_00b934bc;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    lVar17 = unaff_x19 + 0x50;
    iStack000000000000002c = 0;
    iStack0000000000000034 = 0;
    lVar18 = unaff_x19 + 0x98;
    lVar23 = unaff_x19 + 0x74;
    fVar29 = fStack0000000000000030 + DAT_00b934bc;
    while (plVar13 = (long *)FUN_03c4db04(), puVar4 = PTR_DAT_0422f9e8, plVar13 != (long *)0x0) {
      lVar19 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar10 != 0) {
        piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *plVar14) {
            puVar12 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_03c60088;
          }
          uVar10 = uVar10 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined8 *)FUN_01c72498(plVar13,*plVar14,0);
LAB_03c60088:
      iVar8 = (*(code *)*puVar12)(plVar13,puVar12[1]);
      if (iVar8 <= iStack0000000000000034) {
        *(undefined1 *)(unaff_x19 + 0xf8) = 0;
        FUN_03d44350(auVar52._0_8_,auVar52._8_8_,0);
        return;
      }
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (plVar14 = (long *)FUN_03c4db04(), plVar14 == (long *)0x0)) break;
      lVar19 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar10 != 0) {
        piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)System_Collections_Generic_List<Pet>_TypeInfo) {
            puVar12 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_03c60108;
          }
          uVar10 = uVar10 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_01c72498(plVar14,*(long *)System_Collections_Generic_List<Pet>_TypeInfo,0);
LAB_03c60108:
      uVar27 = (*(code *)*puVar12)(plVar14,iStack0000000000000034,puVar12[1]);
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (lVar19 = FUN_03d468ac(*(long *)(unaff_x19 + 0x28),0), lVar19 == 0)) break;
      FUN_03d54e2c(&stack0x00000098,lVar19,0);
      in_stack_00000128 = CONCAT44(fStack00000000000000a4,uStack00000000000000a0);
      in_stack_00000130 = CONCAT44(fStack00000000000000ac,fStack00000000000000a8);
      in_stack_00000120 = in_stack_00000098;
      in_stack_00000138 = in_stack_000000b0;
      in_stack_00000148 = in_stack_000000c0;
      in_stack_00000140 = in_stack_000000b8;
      in_stack_00000158 = in_stack_000000d0;
      in_stack_00000150 = in_stack_000000c8;
      FUN_03a4561c(&stack0x00000098,&stack0x00000120,0);
      in_stack_000000e8 = CONCAT44(fStack00000000000000a4,uStack00000000000000a0);
      in_stack_000000f0 = CONCAT44(fStack00000000000000ac,fStack00000000000000a8);
      in_stack_000000e0 = in_stack_00000098;
      in_stack_000000f8 = in_stack_000000b0;
      in_stack_00000108 = in_stack_000000c0;
      in_stack_00000100 = in_stack_000000b8;
      in_stack_00000118 = in_stack_000000d0;
      in_stack_00000110 = in_stack_000000c8;
      FUN_03c503b4(&stack0x000002a0,uVar27,&stack0x000000e0,3);
      if (*(long *)(unaff_x19 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      fVar30 = (float)FUN_02da6ef4(*(long *)(unaff_x19 + 0x110),iStack0000000000000034,
                                   *(undefined8 *)PTR_DAT_04233ce8);
      fVar51 = fVar30 + fVar3;
      if (*(int *)(unaff_x19 + 0x38) == 0) {
        bVar7 = fStack0000000000000064 <= fVar29;
        bVar2 = bVar7 && fVar51 < fStack0000000000000064;
        if (bVar7 && fVar51 < fStack0000000000000064) {
          fStack0000000000000064 = fStack0000000000000064 - fVar30;
        }
      }
      else {
        bVar2 = false;
        fStack0000000000000064 = 0.0;
      }
      lVar19 = *(long *)(unaff_x19 + 0x108);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      *(undefined4 *)(lVar19 + 0x18) = 0;
      *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
      iVar8 = iStack000000000000002c;
      if (!bVar2 && fStack0000000000000064 <= fVar51) {
        while (uVar10 = FUN_03c62844(), (uVar10 & 1) != 0) {
          lVar19 = *(long *)(unaff_x19 + 0x108);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar15 = *(long *)(lVar19 + 0x10);
          lVar20 = *plVar11;
          *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar1 = *(uint *)(lVar19 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar19 + 0x18) = uVar1 + 1;
            *(float *)(lVar15 + (long)(int)uVar1 * 4 + 0x20) = fStack0000000000000064 / fVar30;
          }
          else {
            FUN_02da71ec(lVar19,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
          iVar9 = *(int *)(unaff_x19 + 0x38);
          if (iVar9 == 0) {
            fVar44 = fStack0000000000000030;
            if (fStack0000000000000038 <= 1.0) goto LAB_03c61798;
            bVar7 = fStack0000000000000064 < fVar30;
            fVar44 = fStack0000000000000024 + fStack0000000000000064;
            bVar2 = bVar7 && fVar51 < fVar44;
            fStack0000000000000064 = fVar44 - fVar30;
            if (!bVar7 || fVar51 >= fVar44) {
              fStack0000000000000064 = fVar44;
            }
          }
          else if (iVar9 == 1) {
            fStack0000000000000038 =
                 (float)FUN_03d443cc(*(undefined4 *)(unaff_x19 + 0x40),
                                     *(undefined4 *)(unaff_x19 + 0x44),0);
            fVar44 = fStack0000000000000038;
LAB_03c61798:
            bVar2 = false;
            fStack0000000000000064 = fStack0000000000000064 + fVar44;
          }
          else if (iVar9 == 2) {
            if ((*(uint *)(unaff_x19 + 0x44) & 0x7fffffff) < 0x7f800001) {
              fStack0000000000000038 = (float)FUN_03d443cc(*(undefined4 *)(unaff_x19 + 0x40),0);
            }
            else {
              if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar19 = FUN_02d4fd88(*(long *)(unaff_x19 + 0xd0),iVar8,
                                    *(undefined8 *)PTR_DAT_04231fb8);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar19 = FUN_02362b68(lVar19,*(undefined8 *)PTR_DAT_04231150);
              if (DAT_0452d9a9 == '\0') {
                FUN_01c5d288(PTR_DAT_042301b0);
                DAT_0452d9a9 = '\x01';
              }
              puVar6 = PTR_DAT_042301b0;
              iVar9 = *(int *)(unaff_x19 + 0x4c);
              lVar15 = *(long *)PTR_DAT_042301b0;
              lVar20 = *(long *)(lVar15 + 0xb8);
              if ((iVar9 == 2) || (iVar9 == 5)) {
                if (DAT_0452d851 == '\0') {
                  FUN_01c5d288(PTR_DAT_042301b0);
                  lVar15 = *(long *)puVar6;
                  DAT_0452d851 = '\x01';
                  lVar20 = *(long *)(lVar15 + 0xb8);
                  iVar9 = *(int *)(unaff_x19 + 0x4c);
                }
                pfVar22 = (float *)(lVar20 + 0x48);
                pfVar25 = (float *)(lVar20 + 0x4c);
                pfVar26 = (float *)(lVar20 + 0x50);
              }
              else {
                pfVar22 = (float *)(lVar20 + 0x3c);
                pfVar25 = (float *)(lVar20 + 0x40);
                pfVar26 = (float *)(lVar20 + 0x44);
              }
              puVar6 = PTR_DAT_042301b0;
              if ((iVar9 == 1) || (iVar9 == 4)) {
                if (DAT_0452d9ab == '\0') {
                  FUN_01c5d288(PTR_DAT_042301b0);
                  lVar15 = *(long *)puVar6;
                  DAT_0452d9ab = '\x01';
                }
                lVar15 = *(long *)(lVar15 + 0xb8);
                pfVar22 = (float *)(lVar15 + 0x18);
                pfVar25 = (float *)(lVar15 + 0x1c);
                pfVar26 = (float *)(lVar15 + 0x20);
              }
              fVar32 = *pfVar26;
              fVar47 = *pfVar25;
              fVar44 = *pfVar22;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar10 = FUN_03d4dc54(lVar19,0,0);
              if ((uVar10 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                lVar19 = FUN_02d4fd88(*(long *)(unaff_x19 + 0xd0),iVar8,
                                      *(undefined8 *)PTR_DAT_04231fb8);
                if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                lVar19 = FUN_02362ec8(lVar19,*(undefined8 *)StringLiteral_5880);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                uVar10 = FUN_03d4f3bc(lVar19,0,0);
                if ((uVar10 & 1) != 0) {
                  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                  lVar15 = FUN_03d468ac(lVar19,0);
                  if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                  lVar20 = FUN_02d4fd88(*(long *)(unaff_x19 + 0xd0),iVar8,
                                        *(undefined8 *)PTR_DAT_04231fb8);
                  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                  lVar20 = FUN_03d498b0(lVar20,0);
                  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                  FUN_03d565ec(fVar44,lVar20,0);
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                  fVar44 = (float)FUN_03d57160(lVar15,0);
                  fVar33 = fVar47;
                  fVar34 = fVar32;
                  lVar15 = FUN_03d468ac(lVar19,0);
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                  fVar35 = (float)FUN_03d582f4(lVar15,0);
                  fVar44 = fVar44 * fVar35;
                  fVar47 = fVar47 * fVar33;
                  fVar32 = fVar32 * fVar34;
                }
              }
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar10 = FUN_03d4f3bc(lVar19,0,0);
              if ((uVar10 & 1) != 0) {
                if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                lVar15 = FUN_03d205c0(lVar19,0);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                FUN_03d234ac(&stack0x00000098,lVar15,0);
                fVar35 = fStack00000000000000ac;
                fVar34 = fStack00000000000000a8;
                fVar33 = fStack00000000000000a4;
                lVar19 = FUN_0230cb9c(lVar19,*(undefined8 *)StringLiteral_5879);
                if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                uVar1 = *(uint *)(lVar19 + 0x18);
                if (0 < (int)uVar1) {
                  uVar28 = 0;
                  fVar34 = fVar35;
                  do {
                    if (uVar1 <= uVar28) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4ac();
                    }
                    lVar15 = *(long *)(lVar19 + (long)(int)uVar28 * 8 + 0x20);
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    lVar15 = FUN_03d205c0(lVar15,0);
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    FUN_03d234ac(&stack0x00000098,lVar15,0);
                    uVar1 = *(uint *)(lVar19 + 0x18);
                    fVar35 = fVar33 + fVar33;
                    if (fVar33 + fVar33 <= fStack00000000000000a4 + fStack00000000000000a4) {
                      fVar35 = fStack00000000000000a4 + fStack00000000000000a4;
                    }
                    fVar33 = fVar34 + fVar34;
                    if (fVar34 + fVar34 <= fStack00000000000000ac + fStack00000000000000ac) {
                      fVar33 = fStack00000000000000ac + fStack00000000000000ac;
                    }
                    uVar28 = uVar28 + 1;
                    fVar34 = fVar33 * 0.5;
                    fVar33 = fVar35 * 0.5;
                    fVar35 = fVar34;
                  } while ((int)uVar28 < (int)uVar1);
                }
                if (DAT_0452d9af == '\0') {
                  FUN_01c5d288(puVar5);
                  DAT_0452d9af = '\x01';
                }
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                fVar44 = fVar44 * (fVar33 + fVar33);
                fVar47 = fVar47 * (fVar34 + fVar34);
                fVar32 = fVar32 * (fVar35 + fVar35);
                fStack0000000000000038 = SQRT(fVar32 * fVar32 + fVar47 * fVar47 + fVar44 * fVar44);
              }
            }
            memcpy(&stack0x00000098,&stack0x000002a0,0x48);
            if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar41 = FUN_02da6ef4(*(long *)(unaff_x19 + 0x108),iVar8,*(undefined8 *)PTR_DAT_04233ce8
                                 );
            uVar27 = *(undefined8 *)StringLiteral_5882;
            memcpy(&stack0x000002e8,&stack0x00000098,0x48);
            FUN_023ec724(uVar41,fStack0000000000000038,&stack0x000002e8,&stack0x0000029c,uVar27);
            bVar2 = false;
            fStack0000000000000064 = fVar30 * 0.0;
          }
          else {
            bVar2 = false;
          }
          iVar8 = iVar8 + 1;
          if ((bVar2) || (fVar51 < fStack0000000000000064)) break;
        }
      }
      lVar19 = *(long *)(unaff_x19 + 0xd0);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      iVar9 = *(int *)(lVar19 + 0x18) + -1;
      if (iVar8 <= iVar9) {
        while( true ) {
          uVar27 = FUN_02d4fd88(lVar19,iVar9,*(undefined8 *)PTR_DAT_04231fb8);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar10 = FUN_03d4f3bc(uVar27,0,0);
          if ((uVar10 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar27 = FUN_02d4fd88(*(long *)(unaff_x19 + 0xd0),iVar9,*(undefined8 *)PTR_DAT_04231fb8)
            ;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03d4ea0c(uVar27,0);
            if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            FUN_02d51704(*(long *)(unaff_x19 + 0xd0),iVar9,*(undefined8 *)PTR_DAT_04236680);
          }
          iVar9 = iVar9 + -1;
          if (iVar9 < iVar8) break;
          lVar19 = *(long *)(unaff_x19 + 0xd0);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
        }
      }
      if (iStack000000000000002c < iVar8) {
        iVar9 = 0;
        do {
          if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar19 = FUN_02d4fd88(*(long *)(unaff_x19 + 0xd0),iStack000000000000002c,
                                *(undefined8 *)PTR_DAT_04231fb8);
          if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar41 = FUN_02da6ef4(*(long *)(unaff_x19 + 0x108),iVar9,*(undefined8 *)PTR_DAT_04233ce8);
          uVar27 = *(undefined8 *)Unity_Services_Core_Internal_LockedComponentRegistry_TypeInfo;
          memcpy(&stack0x00000330,&stack0x000002a0,0x48);
          FUN_023e7140(uVar41,&stack0x00000330,&stack0x00000290,&stack0x00000280,&stack0x00000270,
                       uVar27);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar15 = FUN_03d498b0(lVar19,0);
          fVar30 = 0.0;
          fVar51 = 0.0;
          FUN_03a4388c(0,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          FUN_03d55578(lVar15,0);
          if (*(int *)(unaff_x19 + 0x38) == 2) {
            memcpy(&stack0x00000330,&stack0x000002a0,0x48);
            if (iStack000000000000002c + 1 < iVar8) {
              memcpy(&stack0x00000200,&stack0x00000330,0x48);
              if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              uVar27 = FUN_02da6ef4(*(long *)(unaff_x19 + 0x108),iVar9 + 1,
                                    *(undefined8 *)PTR_DAT_04233ce8);
              puVar12 = (undefined8 *)&stack0x00000200;
            }
            else {
              puVar12 = &stack0x000001b0;
              memcpy(&stack0x000001b0,&stack0x00000330,0x48);
              uVar27 = 0x3f800000;
            }
            memcpy(&stack0x00000160,puVar12,0x48);
            uVar41 = *(undefined8 *)Oculus_Platform_LogEventName_TypeInfo;
            memcpy(&stack0x00000378,&stack0x00000160,0x48);
            fVar31 = (float)FUN_023e86f0(uVar27,&stack0x00000378,uVar41);
            fVar31 = fVar31 - 0.0;
            fVar43 = fVar30 - 0.0;
            fVar53 = fVar51 - 0.0;
          }
          if (DAT_0452ffe3 == '\0') {
            FUN_01c5d288(puVar5);
            DAT_0452ffe3 = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            cVar16 = DAT_0452ffe3;
          }
          else {
            cVar16 = '\x01';
          }
          fStack000000000000008c = 0.0;
          fStack0000000000000090 = 0.0;
          fStack0000000000000094 = 0.0;
          if (cVar16 == '\0') {
            FUN_01c5d288(puVar5);
            DAT_0452ffe3 = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          fVar30 = fVar53 * fVar53 + fVar31 * fVar31 + fVar43 * fVar43;
          fVar51 = 1.0 / SQRT(fVar30);
          fVar44 = fVar31 * fVar51;
          fVar47 = fVar43 * fVar51;
          fStack0000000000000088 = fVar44;
          fStack0000000000000084 = fVar47;
          fStack0000000000000080 = fVar53 * fVar51;
          if (fVar30 <= 1.1754944e-38) {
            fStack0000000000000084 = 0.0;
            fStack0000000000000088 = 0.0;
            fStack0000000000000080 = 0.0;
          }
          if (*(int *)(unaff_x19 + 0x3c) == 1) {
            lVar15 = FUN_03d468ac();
            if (DAT_0452d9ab == '\0') {
              FUN_01c5d288(PTR_DAT_042301b0);
              DAT_0452d9ab = '\x01';
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar20 = *(long *)(*(long *)PTR_DAT_042301b0 + 0xb8);
            fStack0000000000000090 = *(float *)(lVar20 + 0x1c);
            fStack000000000000008c = *(float *)(lVar20 + 0x20);
            FUN_03d565ec(*(undefined4 *)(lVar20 + 0x18),lVar15,0);
            fStack0000000000000094 = (float)FUN_03a43890(0);
            lVar15 = FUN_03d468ac();
            if (DAT_0452d851 == '\0') {
              FUN_01c5d288(PTR_DAT_042301b0);
              DAT_0452d851 = '\x01';
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar20 = *(long *)(*(long *)PTR_DAT_042301b0 + 0xb8);
            fVar44 = *(float *)(lVar20 + 0x4c);
            fVar47 = *(float *)(lVar20 + 0x50);
            FUN_03d565ec(*(undefined4 *)(lVar20 + 0x48),lVar15,0);
            fStack0000000000000088 = (float)FUN_03a43890(0);
            fStack0000000000000080 = fVar47;
            fStack0000000000000084 = fVar44;
          }
          else if (*(int *)(unaff_x19 + 0x3c) == 2) {
            if (DAT_0452d9ab == '\0') {
              FUN_01c5d288(PTR_DAT_042301b0);
              DAT_0452d9ab = '\x01';
            }
            lVar15 = *(long *)(*(long *)PTR_DAT_042301b0 + 0xb8);
            fStack0000000000000090 = *(float *)(lVar15 + 0x1c);
            fStack000000000000008c = *(float *)(lVar15 + 0x20);
            fStack0000000000000094 = (float)FUN_03a43890(*(undefined4 *)(lVar15 + 0x18),0);
            if (DAT_0452d851 == '\0') {
              FUN_01c5d288(PTR_DAT_042301b0);
              DAT_0452d851 = '\x01';
            }
            lVar15 = *(long *)(*(long *)PTR_DAT_042301b0 + 0xb8);
            fVar44 = *(float *)(lVar15 + 0x4c);
            fVar47 = *(float *)(lVar15 + 0x50);
            fStack0000000000000088 = (float)FUN_03a43890(*(undefined4 *)(lVar15 + 0x48),0);
            fStack0000000000000080 = fVar47;
            fStack0000000000000084 = fVar44;
          }
          fVar30 = (float)FUN_03c59afc();
          if (DAT_0452ffe3 == '\0') {
            FUN_01c5d288(puVar5);
            DAT_0452ffe3 = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          fVar32 = fVar47 * fVar47 + fVar30 * fVar30 + fVar44 * fVar44;
          fVar33 = 1.0 / SQRT(fVar32);
          fVar30 = fVar30 * fVar33;
          fVar44 = fVar44 * fVar33;
          fVar34 = 0.0;
          fVar51 = fVar30;
          fStack0000000000000078 = fVar44;
          fStack0000000000000074 = fVar47 * fVar33;
          if (fVar32 <= 1.1754944e-38) {
            fVar51 = fVar34;
            fStack0000000000000078 = fVar34;
            fStack0000000000000074 = fVar34;
          }
          fVar47 = (float)FUN_03c59afc();
          if (DAT_0452ffe3 == '\0') {
            FUN_01c5d288(puVar5);
            DAT_0452ffe3 = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          fVar30 = fVar44 * fVar44 + fVar47 * fVar47 + fVar30 * fVar30;
          fStack0000000000000070 = fVar47 * (1.0 / SQRT(fVar30));
          if (fVar30 <= 1.1754944e-38) {
            fStack0000000000000070 = 0.0;
          }
          FUN_03a46aac(fVar51,0);
          FUN_03a46564(0);
          fStack000000000000007c = (float)FUN_03d3dd44(0);
          lVar15 = FUN_03d498b0(lVar19,0);
          fVar30 = fStack0000000000000094;
          fVar51 = fStack0000000000000084;
          fVar44 = fStack0000000000000080;
          FUN_03a46aac(fStack0000000000000088,0);
          fVar47 = (float)FUN_03a46564(0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          fVar32 = (fStack0000000000000078 * fVar47 +
                   fStack0000000000000074 * fVar30 + fStack0000000000000070 * fVar44) -
                   fStack000000000000007c * fVar51;
          uVar42 = (ulong)(uint)((fStack000000000000007c * fVar44 +
                                 fStack0000000000000078 * fVar30 + fStack0000000000000070 * fVar51)
                                - fStack0000000000000074 * fVar47);
          FUN_03d558f8((fStack0000000000000074 * fVar51 +
                       fStack000000000000007c * fVar30 + fStack0000000000000070 * fVar47) -
                       fStack0000000000000078 * fVar44,uVar42,fVar32,
                       ((fStack0000000000000070 * fVar30 - fStack000000000000007c * fVar47) -
                       fStack0000000000000078 * fVar51) - fStack0000000000000074 * fVar44,lVar15,0);
          uVar10 = FUN_03c631c0(lVar17,0);
          if ((uVar10 & 1) != 0) {
            uVar10 = FUN_03c631cc(lVar17,0);
            fVar30 = (float)uVar42;
            if ((uVar10 & 1) != 0) {
              fVar32 = 0.0;
              FUN_03d498b0(lVar19,0);
              fVar30 = 0.0;
              FUN_03c62b30(0,0,0,fVar31,fVar43,fVar53);
            }
            fVar34 = (float)FUN_03c631d8(lVar17,0);
            fVar44 = fStack0000000000000090;
            fVar47 = fStack000000000000008c;
            fVar35 = (float)FUN_03a4388c(0);
            fVar51 = fStack0000000000000080;
            fVar33 = fStack0000000000000084;
            fVar36 = (float)FUN_03a4388c(fStack0000000000000088,0);
            if (DAT_0452d813 == '\0') {
              FUN_01c5d288(puVar5);
              DAT_0452d813 = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            fStack0000000000000044 = fVar44 * fVar51 - fVar47 * fVar33;
            fVar51 = fVar47 * fVar36 - fVar35 * fVar51;
            fVar47 = fVar35 * fVar33 - fVar44 * fVar36;
            fVar44 = SQRT(fVar47 * fVar47 +
                          fStack0000000000000044 * fStack0000000000000044 + fVar51 * fVar51);
            if (fVar44 <= DAT_00b9323c) {
              if (DAT_0452d6e9 == '\0') {
                FUN_01c5d288(PTR_DAT_042301b0);
                DAT_0452d6e9 = '\x01';
              }
              pfVar22 = *(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
              fStack0000000000000044 = *pfVar22;
              fStack0000000000000040 = pfVar22[1];
              fVar44 = pfVar22[2];
              fVar51 = fStack0000000000000044;
            }
            else {
              fStack0000000000000044 = fStack0000000000000044 / fVar44;
              fStack0000000000000040 = fVar51 / fVar44;
              fVar44 = fVar47 / fVar44;
            }
            lVar15 = FUN_03d498b0(lVar19,0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            fVar37 = (float)FUN_03d554d8(lVar15,0);
            fVar33 = fStack000000000000008c;
            fVar35 = fStack0000000000000090;
            fVar38 = (float)FUN_03a4388c(fStack0000000000000094,fStack0000000000000090,0);
            fVar36 = fStack0000000000000084;
            fVar40 = fStack0000000000000080;
            fVar39 = (float)FUN_03a4388c(fStack0000000000000088,fStack0000000000000084,0);
            fVar39 = fVar32 * fVar39;
            uVar42 = (ulong)(uint)(fVar51 + fVar34 * fStack0000000000000040 + fVar30 * fVar35 +
                                            fVar32 * fVar36);
            fVar32 = fVar47 + fVar34 * fVar44 + fVar30 * fVar33 + fVar32 * fVar40;
            FUN_03d55578(fVar37 + fVar34 * fStack0000000000000044 + fVar30 * fVar38 + fVar39,uVar42,
                         lVar15,0);
          }
          uVar10 = FUN_03c631c0(lVar18,0);
          if ((uVar10 & 1) != 0) {
            uVar10 = FUN_03c631cc(lVar18,0);
            if ((uVar10 & 1) != 0) {
              FUN_03d498b0(lVar19,0);
              FUN_03c62b30(0,0,0,fVar31,fVar43,fVar53);
            }
            lVar15 = FUN_03d498b0(lVar19,0);
            fVar30 = fStack0000000000000090;
            fVar51 = fStack000000000000008c;
            FUN_03a4388c(fStack0000000000000094,0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            fVar44 = (float)FUN_03d57160(lVar15,0);
            if (DAT_0452d813 == '\0') {
              FUN_01c5d288(puVar5);
              DAT_0452d813 = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            fVar47 = DAT_00b9323c;
            fVar32 = SQRT(fVar51 * fVar51 + fVar44 * fVar44 + fVar30 * fVar30);
            if (fVar32 <= DAT_00b9323c) {
              if (DAT_0452d6e9 == '\0') {
                FUN_01c5d288(PTR_DAT_042301b0);
                DAT_0452d6e9 = '\x01';
              }
              pfVar22 = *(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
              fVar44 = *pfVar22;
              fVar30 = pfVar22[1];
              fVar51 = pfVar22[2];
            }
            else {
              fVar44 = fVar44 / fVar32;
              fVar30 = fVar30 / fVar32;
              fVar51 = fVar51 / fVar32;
            }
            uVar42 = (ulong)(uint)fVar30;
            uVar10 = FUN_03a43890(fVar44,0);
            fVar33 = (float)uVar42;
            lVar15 = FUN_03d498b0(lVar19,0);
            fVar30 = fStack0000000000000084;
            fVar44 = fStack0000000000000080;
            FUN_03a4388c(fStack0000000000000088,0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            fVar32 = (float)FUN_03d57160(lVar15,0);
            if (DAT_0452d813 == '\0') {
              FUN_01c5d288(puVar5);
              DAT_0452d813 = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            fVar34 = SQRT(fVar44 * fVar44 + fVar32 * fVar32 + fVar30 * fVar30);
            if (fVar34 <= fVar47) {
              if (DAT_0452d6e9 == '\0') {
                FUN_01c5d288(PTR_DAT_042301b0);
                DAT_0452d6e9 = '\x01';
              }
              pfVar22 = *(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
              fVar32 = *pfVar22;
              fVar30 = pfVar22[1];
              fVar44 = pfVar22[2];
            }
            else {
              fVar32 = fVar32 / fVar34;
              fVar30 = fVar30 / fVar34;
              fVar44 = fVar44 / fVar34;
            }
            uVar45 = (ulong)(uint)fVar30;
            uVar27 = FUN_03a43890(fVar32,0);
            uVar46 = uVar45;
            fVar30 = fVar44;
            fVar40 = (float)FUN_03c631d8(lVar18,0);
            fVar39 = (float)uVar46;
            fVar35 = fVar33;
            fVar36 = fVar51;
            fVar37 = (float)FUN_03a4388c(uVar10,0);
            uVar46 = uVar45;
            fVar34 = fVar44;
            fVar38 = (float)FUN_03a4388c(uVar27,0);
            if (DAT_0452d813 == '\0') {
              FUN_01c5d288(puVar5);
              DAT_0452d813 = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            fVar32 = fVar35 * fVar34 - fVar36 * (float)uVar46;
            fVar36 = fVar36 * fVar38 - fVar37 * fVar34;
            fVar34 = fVar37 * (float)uVar46 - fVar35 * fVar38;
            fVar35 = SQRT(fVar34 * fVar34 + fVar32 * fVar32 + fVar36 * fVar36);
            if (fVar35 <= fVar47) {
              if (DAT_0452d6e9 == '\0') {
                FUN_01c5d288(PTR_DAT_042301b0);
                DAT_0452d6e9 = '\x01';
              }
              pfVar22 = *(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
              fStack0000000000000060 = *pfVar22;
              fStack0000000000000040 = pfVar22[1];
              fVar34 = pfVar22[2];
            }
            else {
              fVar32 = fVar32 / fVar35;
              fVar36 = fVar36 / fVar35;
              fVar34 = fVar34 / fVar35;
              fStack0000000000000040 = fVar36;
              fStack0000000000000060 = fVar32;
            }
            lVar15 = FUN_03d498b0(lVar19,0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            fVar47 = (float)FUN_03d55f00(lVar15,0);
            fVar35 = (float)FUN_03a4388c(uVar10 & 0xffffffff,uVar42 & 0xffffffff,0);
            fVar37 = (float)FUN_03a4388c(uVar27,uVar45,0);
            uVar42 = (ulong)(uint)(fVar36 + fVar40 * fStack0000000000000040 + fVar39 * fVar33 +
                                            fVar30 * (float)uVar45);
            fVar32 = fVar32 + fVar40 * fVar34 + fVar39 * fVar51 + fVar30 * fVar44;
            FUN_03d55fa0(fVar47 + fVar40 * fStack0000000000000060 + fVar39 * fVar35 +
                                  fVar30 * fVar37,uVar42,lVar15,0);
          }
          uVar10 = FUN_03c631c0(lVar23,0);
          if ((uVar10 & 1) != 0) {
            uVar10 = FUN_03c631cc(lVar23,0);
            if ((uVar10 & 1) != 0) {
              uVar42 = 0;
              fVar32 = 0.0;
              FUN_03d498b0(lVar19,0);
              FUN_03c62b30(0,0,0,fVar31,fVar43,fVar53);
              if (*(int *)(unaff_x19 + 0x94) == 3) {
                puVar21 = *(undefined4 **)
                           (*(long *)
                             System_ComponentModel_Design_ITypeDescriptorFilterService_TypeInfo +
                           0xb8);
                uVar42 = (ulong)(uint)puVar21[1];
                fVar32 = (float)puVar21[2];
                fStack0000000000000070 = (float)puVar21[3];
                fStack000000000000007c = (float)FUN_03a46564(*puVar21,0);
                fStack0000000000000078 = (float)uVar42;
                fStack0000000000000074 = fVar32;
              }
            }
            uVar10 = FUN_03c631d8(lVar23,0);
            fVar30 = fStack0000000000000090;
            fVar44 = fStack000000000000008c;
            fVar33 = (float)FUN_03a4388c(0);
            fVar51 = fStack0000000000000080;
            fVar47 = fStack0000000000000084;
            fVar34 = (float)FUN_03a4388c(0);
            if (DAT_0452d813 == '\0') {
              FUN_01c5d288(puVar5);
              DAT_0452d813 = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            fVar35 = fVar30 * fVar51 - fVar44 * fVar47;
            fVar51 = fVar44 * fVar34 - fVar33 * fVar51;
            fVar30 = fVar33 * fVar47 - fVar30 * fVar34;
            fVar44 = SQRT(fVar30 * fVar30 + fVar35 * fVar35 + fVar51 * fVar51);
            if (fVar44 <= DAT_00b9323c) {
              if (DAT_0452d6e9 == '\0') {
                FUN_01c5d288(PTR_DAT_042301b0);
                DAT_0452d6e9 = '\x01';
              }
              pfVar22 = *(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
              fVar35 = *pfVar22;
              fVar51 = pfVar22[1];
              fVar30 = pfVar22[2];
            }
            else {
              fVar35 = fVar35 / fVar44;
              fVar51 = fVar51 / fVar44;
              fVar30 = fVar30 / fVar44;
            }
            fVar34 = fStack000000000000008c;
            fVar36 = fStack0000000000000090;
            fVar40 = (float)FUN_03a4388c(fStack0000000000000094,0);
            fVar37 = (float)FUN_03d3e23c(uVar42,0);
            fVar44 = fVar30;
            fVar47 = fVar51;
            fVar33 = fVar35;
            fVar38 = (float)FUN_03d3e23c(uVar10,0);
            uVar42 = (ulong)(uint)fStack0000000000000084;
            uVar45 = (ulong)(uint)fStack0000000000000080;
            uVar27 = FUN_03a4388c(fStack0000000000000088,uVar42,uVar45,0);
            uVar48 = (ulong)(uint)((fVar37 * fVar33 + fVar34 * fVar47 + fVar36 * fVar44) -
                                  fVar40 * fVar38);
            uVar46 = (ulong)(uint)((fVar36 * fVar38 + fVar34 * fVar33 + fVar40 * fVar44) -
                                  fVar37 * fVar47);
            FUN_03d3e4e0((fVar40 * fVar47 + fVar34 * fVar38 + fVar37 * fVar44) - fVar36 * fVar33,
                         uVar46,uVar48,
                         ((fVar34 * fVar44 - fVar37 * fVar38) - fVar40 * fVar33) - fVar36 * fVar47,
                         uVar27,uVar42,uVar45,0);
            uVar42 = FUN_03a43890(0);
            fVar36 = (float)uVar46;
            fVar40 = (float)uVar48;
            fVar33 = (float)FUN_03d3e23c(uVar10 & 0xffffffff,0);
            fVar44 = fVar40;
            fVar47 = fVar36;
            fVar34 = (float)FUN_03a4388c(uVar42,0);
            fVar32 = (float)FUN_03d3e23c(fVar32,0);
            uVar10 = (ulong)(uint)fStack0000000000000090;
            uVar49 = (ulong)(uint)fStack000000000000008c;
            uVar27 = FUN_03a4388c(fStack0000000000000094,uVar10,uVar49,0);
            uVar50 = (ulong)(uint)((fVar33 * fVar34 + fVar30 * fVar47 + fVar51 * fVar44) -
                                  fVar35 * fVar32);
            uVar45 = (ulong)(uint)((fVar51 * fVar32 + fVar30 * fVar34 + fVar35 * fVar44) -
                                  fVar33 * fVar47);
            FUN_03d3e4e0((fVar35 * fVar47 + fVar30 * fVar32 + fVar33 * fVar44) - fVar51 * fVar34,
                         uVar45,uVar50,
                         ((fVar30 * fVar44 - fVar33 * fVar32) - fVar35 * fVar34) - fVar51 * fVar47,
                         uVar27,uVar10,uVar49,0);
            uVar27 = FUN_03a43890(0);
            lVar19 = FUN_03d498b0(lVar19,0);
            FUN_03a46aac(uVar42 & 0xffffffff,uVar46 & 0xffffffff,uVar48 & 0xffffffff,uVar27,uVar45,
                         uVar50,0);
            fVar51 = (float)uVar27;
            fVar30 = (float)FUN_03a46564(0);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            FUN_03d558f8((fStack0000000000000074 * fVar36 +
                         fStack000000000000007c * fVar51 + fStack0000000000000070 * fVar30) -
                         fStack0000000000000078 * fVar40,
                         (fStack000000000000007c * fVar40 +
                         fStack0000000000000078 * fVar51 + fStack0000000000000070 * fVar36) -
                         fStack0000000000000074 * fVar30,
                         (fStack0000000000000078 * fVar30 +
                         fStack0000000000000074 * fVar51 + fStack0000000000000070 * fVar40) -
                         fStack000000000000007c * fVar36,
                         ((fStack0000000000000070 * fVar51 - fStack000000000000007c * fVar30) -
                         fStack0000000000000078 * fVar36) - fStack0000000000000074 * fVar40,lVar19,0
                        );
          }
          iStack000000000000002c = iStack000000000000002c + 1;
          iVar9 = iVar9 + 1;
        } while (iVar8 != iStack000000000000002c);
      }
      FUN_03c51164(&stack0x000002a0);
      iStack0000000000000034 = iStack0000000000000034 + 1;
      plVar14 = (long *)VoxelBusters_EssentialKit_MailComposerResultCode_TypeInfo;
      plVar11 = (long *)PTR_DAT_04233d00;
      iStack000000000000002c = iVar8;
      if (*(long *)(unaff_x19 + 0x28) == 0) break;
    }
  }
LAB_03c5fe14:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


