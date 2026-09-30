/*
FUNCTION_NAME: FUN_05ee4fa8
ENTRY_POINT: 05ee4fa8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05ee6854) */
/* WARNING: Removing unreachable block (ram,0x05ee5790) */
/* WARNING: Removing unreachable block (ram,0x05ee60e0) */
/* WARNING: Removing unreachable block (ram,0x05ee60e4) */
/* WARNING: Removing unreachable block (ram,0x05ee6b78) */
/* WARNING: Removing unreachable block (ram,0x05ee647c) */
/* WARNING: Removing unreachable block (ram,0x05ee6480) */
/* WARNING: Removing unreachable block (ram,0x05ee66c8) */
/* WARNING: Removing unreachable block (ram,0x05ee6848) */

undefined8
FUN_05ee4fa8(long param_1,long *param_2,long param_3,undefined8 param_4,long param_5,long param_6)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 uVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  puVar2 = PTR_DAT_075da3c0;
  if ((DAT_07a45e31 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f1618);
    FUN_031f20f4(PTR_DAT_075f1ad8);
    FUN_031f20f4(PTR_DAT_075f1978);
    FUN_031f20f4(PTR_DAT_075f1ae0);
    FUN_031f20f4(PTR_DAT_0759d328);
    FUN_031f20f4(PTR_DAT_075f1ae8);
    FUN_031f20f4(PTR_DAT_075f1af0);
    FUN_031f20f4(PTR_DAT_075f1af8);
    FUN_031f20f4(PTR_DAT_075f1b00);
    FUN_031f20f4(PTR_DAT_075f1b08);
    FUN_031f20f4(PTR_DAT_075f1b10);
    FUN_031f20f4(PTR_DAT_075f1b18);
    FUN_031f20f4(PTR_DAT_075f1708);
    FUN_031f20f4(PTR_DAT_075a8f00);
    FUN_031f20f4(PTR_DAT_075a8e70);
    FUN_031f20f4(PTR_DAT_0759b580);
    FUN_031f20f4(PTR_DAT_0759c188);
    FUN_031f20f4(PTR_DAT_075f1620);
    FUN_031f20f4(PTR_DAT_0759e2a8);
    FUN_031f20f4(PTR_DAT_075efd58);
    FUN_031f20f4(PTR_DAT_0759c168);
    FUN_031f20f4(PTR_DAT_075f0128);
    FUN_031f20f4(PTR_DAT_075f1a80);
    FUN_031f20f4(PTR_DAT_075f1210);
    FUN_031f20f4(PTR_DAT_075f11e8);
    FUN_031f20f4(PTR_DAT_075efcf8);
    FUN_031f20f4(PTR_DAT_075f1b20);
    FUN_031f20f4(PTR_DAT_075f1b28);
    FUN_031f20f4(PTR_DAT_075f1a98);
    FUN_031f20f4(PTR_DAT_075f1b30);
    FUN_031f20f4(PTR_DAT_075f1b38);
    FUN_031f20f4(PTR_DAT_075f1b40);
    FUN_031f20f4(PTR_DAT_0759c0d8);
    FUN_031f20f4(PTR_DAT_075f1b48);
    FUN_031f20f4(PTR_DAT_075f1b50);
    FUN_031f20f4(PTR_DAT_075f1b58);
    FUN_031f20f4(PTR_DAT_075f1b60);
    FUN_031f20f4(PTR_DAT_075f1b68);
    FUN_031f20f4(PTR_DAT_075f17d0);
    FUN_031f20f4(PTR_DAT_0759b720);
    FUN_031f20f4(PTR_DAT_075f1b70);
    FUN_031f20f4(PTR_DAT_075da3c0);
    DAT_07a45e31 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = 0;
  FUN_05eb3a78(param_5,*(undefined8 *)puVar2,0);
  if (param_3 == 0) goto LAB_05ee66fc;
  uVar10 = Oculus_Interaction_Surfaces_PhysicsLayerSurface__set_CloseCollidersCacheSize(param_3);
  plVar22 = (long *)PTR_DAT_075f17d0;
  puVar2 = PTR_DAT_075f0128;
  if ((uVar10 & 1) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_05ee66fc;
    uVar13 = *(uint *)(*(long *)(param_1 + 0x20) + 0x2c) >> 1 & 1;
  }
  else {
    uVar13 = 1;
  }
  uVar19 = *(undefined8 *)(param_3 + 0x60);
  plVar20 = *(long **)(param_1 + 0x28);
  if (plVar20 != (long *)0x0) {
    lVar14 = *plVar20;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_075f0128) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_05ee52ac;
        }
        uVar10 = uVar10 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_0322c1e8(plVar20,*(long *)PTR_DAT_075f0128,0);
LAB_05ee52ac:
    iVar7 = (*(code *)*puVar11)(plVar20,puVar11[1]);
    if (2 < iVar7) {
      uVar12 = FUN_05eda134(param_3);
      lVar14 = *plVar22;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar14);
        lVar14 = *plVar22;
      }
      lVar24 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
      uVar21 = *(undefined8 *)PTR_DAT_0759b720;
      if (lVar24 == 0) {
        if (*(int *)(lVar14 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar14);
          lVar14 = *plVar22;
        }
        uVar25 = **(undefined8 **)(lVar14 + 0xb8);
        lVar24 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f1b18);
        FUN_042d6b48(lVar24,uVar25,*(undefined8 *)PTR_DAT_075f1b50,0);
        plVar20 = (long *)(*(long *)(*plVar22 + 0xb8) + 8);
        *plVar20 = lVar24;
        thunk_FUN_0329bf60(plVar20,lVar24);
      }
      uVar12 = FUN_03deda2c(uVar12,lVar24,*(undefined8 *)PTR_DAT_075f1af0);
      uVar12 = System_Globalization_TaiwanCalendar__get_MinSupportedDateTime(uVar21,uVar12,0);
      if (param_2 == (long *)0x0) goto LAB_05ee66fc;
      plVar20 = *(long **)(param_1 + 0x28);
      uVar21 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
      if (*(int *)(*(long *)PTR_DAT_0759d328 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)PTR_DAT_0759d328);
      }
      uVar25 = FUN_05d860e8(0);
      uVar12 = FUN_05eb76d8(*(undefined8 *)PTR_DAT_075f1b70,uVar25,*(undefined8 *)(param_3 + 0x60),
                            uVar12,0);
      if (*(int *)(*(long *)PTR_DAT_075efcf8 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)PTR_DAT_075efcf8);
      }
      uVar25 = thunk_FUN_0322f04c(param_2,*(undefined8 *)PTR_DAT_075efd58);
      uVar12 = FUN_05ea01b4(uVar25,uVar21,uVar12,0);
      if (plVar20 == (long *)0x0) goto LAB_05ee66fc;
      lVar14 = *plVar20;
      uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar10 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_05ee5488;
          }
          uVar10 = uVar10 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_0322c1e8(plVar20,*(long *)puVar2,1);
LAB_05ee5488:
      (*(code *)*puVar11)(plVar20,3,uVar12,0,puVar11[1]);
    }
  }
  lVar14 = FUN_05ee6c6c(param_1,param_3,param_4,param_2,uVar19);
  if (uVar13 != 0) {
    if (*(long *)(param_3 + 0xd8) != 0) {
      plVar20 = (long *)FUN_054e51f8(*(long *)(param_3 + 0xd8),*(undefined8 *)PTR_DAT_075f1618);
      puVar6 = PTR_DAT_075f1b68;
      puVar5 = PTR_DAT_075f1b60;
      puVar4 = PTR_DAT_075f1b10;
      puVar3 = PTR_DAT_075f1ae8;
      puVar2 = PTR_DAT_075f1620;
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      do {
        lVar24 = *plVar20;
        uVar10 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0759e2a8) {
              puVar11 = (undefined8 *)(lVar24 + (long)*piVar18 * 0x10 + 0x138);
              goto Oculus_Interaction_Locomotion_FirstPersonLocomotor__MoveAbsoluteFeet;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_0322c1e8(plVar20,*(long *)PTR_DAT_0759e2a8,0);
Oculus_Interaction_Locomotion_FirstPersonLocomotor__MoveAbsoluteFeet:
        uVar10 = (*(code *)*puVar11)(plVar20,puVar11[1]);
        plVar22 = (long *)PTR_DAT_075f17d0;
        if ((uVar10 & 1) == 0) {
          if (plVar20 == (long *)0x0) goto LAB_05ee5794;
          lVar24 = *plVar20;
          uVar10 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar10 == 0) goto LAB_05ee575c;
          piVar18 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          goto LAB_05ee5744;
        }
        lVar24 = thunk_FUN_0322f148(*(undefined8 *)puVar6);
        FUN_05e44034(lVar24,0);
        lVar15 = *plVar20;
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05ee55d4;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_0322c1e8(plVar20,*(long *)puVar2,0);
LAB_05ee55d4:
        lVar15 = (*(code *)*puVar11)(plVar20,puVar11[1]);
        if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        plVar22 = (long *)(lVar24 + 0x10);
        *plVar22 = lVar15;
        thunk_FUN_0329bf60(plVar22);
        if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if (*(char *)(*plVar22 + 0x80) == '\0') {
          uVar19 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
          FUN_042d5df8(uVar19,lVar24,*(undefined8 *)puVar5,0);
          uVar10 = FUN_03dab5dc(lVar14,uVar19,*(undefined8 *)puVar3);
          if ((uVar10 & 1) != 0) {
            if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            uVar19 = *(undefined8 *)(*plVar22 + 0x30);
            lVar24 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f1ae0);
            FUN_05e44034(lVar24,0);
            *(undefined8 *)(lVar24 + 0x10) = uVar19;
            thunk_FUN_0329bf60((undefined8 *)(lVar24 + 0x10),uVar19);
            *(long *)(lVar24 + 0x18) = *plVar22;
            thunk_FUN_0329bf60();
            local_a0 = 0;
            FUN_04b9f508(&local_a0,0,*(undefined8 *)PTR_DAT_075f1b38);
            *(undefined8 *)(lVar24 + 0x28) = local_a0;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            lVar15 = *(long *)(lVar14 + 0x10);
            lVar17 = *(long *)PTR_DAT_075f1b20;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            uVar9 = *(uint *)(lVar14 + 0x18);
            if (uVar9 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar9 + 1;
              plVar22 = (long *)(lVar15 + (long)(int)uVar9 * 8 + 0x20);
              *plVar22 = lVar24;
              thunk_FUN_0329bf60(plVar22,lVar24);
            }
            else {
              FUN_047af440(lVar14,lVar24,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      } while( true );
    }
    goto LAB_05ee66fc;
  }
  goto LAB_05ee5794;
Oculus_Interaction_Locomotion_FirstPersonLocomotor__GetModifiedSpeedFactor:
  if (*(long *)(lVar24 + 0x18) != 0) {
    uVar19 = FUN_05eda134(param_3);
    lVar15 = *plVar22;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar15);
      lVar15 = *plVar22;
    }
    lVar17 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
    if (lVar17 == 0) {
      if (*(int *)(lVar15 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar15);
        lVar15 = *plVar22;
      }
      uVar12 = **(undefined8 **)(lVar15 + 0xb8);
      lVar17 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f1b18);
      FUN_042d6b48(lVar17,uVar12,*(undefined8 *)PTR_DAT_075f1b58,0);
      plVar23 = (long *)(*(long *)(*plVar22 + 0xb8) + 0x10);
      *plVar23 = lVar17;
      thunk_FUN_0329bf60(plVar23,lVar17);
      puVar11 = (undefined8 *)PTR_DAT_075f1b48;
    }
    if (*(long *)(lVar24 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar15 = FUN_03f65628(uVar19,lVar17,*(undefined8 *)(*(long *)(lVar24 + 0x18) + 0x60),*puVar11);
    if (lVar15 != 0) {
LAB_05ee58b4:
      if (*(char *)(lVar15 + 0x80) == '\0') {
        if (((uVar13 != 0) && (*(char *)(lVar24 + 0x28) != '\0')) && (*(uint *)(lVar24 + 0x2c) < 2))
        {
          plVar23 = (long *)(lVar15 + 0x48);
          if (*plVar23 == 0) {
            lVar17 = FUN_05edda80(param_1,*(undefined8 *)(lVar15 + 0x40));
            *plVar23 = lVar17;
            thunk_FUN_0329bf60(plVar23);
          }
          local_88 = *(undefined8 *)(lVar15 + 0x90);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          uVar9 = FUN_04b9f54c(&local_88,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),
                               *(undefined8 *)PTR_DAT_075f1a98);
          if ((uVar9 >> 1 & 1) != 0) {
            uVar19 = Oculus_Interaction_Locomotion_CapsuleLocomotionHandler__add_WhenLocomotionEventHandled
                               (lVar15);
            if (*(int *)(*(long *)PTR_DAT_0759d328 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            uVar12 = FUN_05d860e8(0);
            uVar19 = FUN_05ee027c(uVar12,param_2,uVar19,uVar12,*(undefined8 *)(lVar15 + 0x48),
                                  *(undefined8 *)(lVar15 + 0x40));
            *(undefined8 *)(lVar24 + 0x30) = uVar19;
            thunk_FUN_0329bf60();
          }
        }
        lVar17 = FUN_05eda134(param_3);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        uVar9 = FUN_054e5280(lVar17,lVar15,*(undefined8 *)PTR_DAT_075f1ad8);
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar15 = *(long *)(lVar24 + 0x30);
        if ((lVar15 != 0) &&
           (lVar17 = thunk_FUN_0322f04c(lVar15,*(undefined8 *)(*plVar20 + 0x40)), lVar17 == 0)) {
          uVar19 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
          FUN_031f225c(uVar19,0);
        }
        if (*(uint *)(plVar20 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        plVar20[(long)(int)uVar9 + 4] = lVar15;
        thunk_FUN_0329bf60(plVar20 + (long)(int)uVar9 + 4,lVar15);
        *(undefined1 *)(lVar24 + 0x38) = 1;
      }
    }
  }
  goto LAB_05ee5814;
LAB_05ee63ec:
  plVar22 = (long *)thunk_FUN_0322f04c(plVar22,*(undefined8 *)PTR_DAT_0759b580);
  if (plVar22 != (long *)0x0) {
    lVar15 = *plVar22;
    uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0759b580) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_05ee6464;
        }
        uVar10 = uVar10 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_0322c1e8(plVar22,*(long *)PTR_DAT_0759b580,0);
LAB_05ee6464:
    (*(code *)*puVar11)(plVar22,puVar11[1]);
  }
  goto LAB_05ee6138;
LAB_05ee6050:
  plVar22 = (long *)thunk_FUN_0322f04c(plVar22,*(undefined8 *)PTR_DAT_0759b580);
  if (plVar22 != (long *)0x0) {
    lVar15 = *plVar22;
    uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0759b580) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_05ee60c8;
        }
        uVar10 = uVar10 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_0322c1e8(plVar22,*(long *)PTR_DAT_0759b580,0);
LAB_05ee60c8:
    (*(code *)*puVar11)(plVar22,puVar11[1]);
  }
LAB_05ee6138:
  *(undefined1 *)(lVar24 + 0x38) = 1;
  goto LAB_05ee5b38;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar18 = piVar18 + 4;
    if (uVar10 == 0) break;
LAB_05ee5744:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0759b580) {
      puVar11 = (undefined8 *)(lVar24 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_05ee5778;
    }
  }
LAB_05ee575c:
  puVar11 = (undefined8 *)FUN_0322c1e8(plVar20,*(long *)PTR_DAT_0759b580,0);
LAB_05ee5778:
  (*(code *)*puVar11)(plVar20,puVar11[1]);
LAB_05ee5794:
  lVar24 = FUN_05eda134(param_3);
  puVar2 = PTR_DAT_0759c0d8;
  if (lVar24 != 0) {
    uVar8 = FUN_054e4c20(lVar24,*(undefined8 *)PTR_DAT_075f1978);
    plVar20 = (long *)FUN_031f21dc(*(undefined8 *)puVar2,uVar8);
    puVar11 = (undefined8 *)PTR_DAT_075f1b48;
    puVar2 = PTR_DAT_075f1b00;
    if (lVar14 != 0) {
      FUN_047afec0(&local_a0,lVar14,*(undefined8 *)PTR_DAT_075f1b28);
      uStack_78 = uStack_98;
      local_80 = local_a0;
      local_70 = local_90;
LAB_05ee5814:
      uVar10 = FUN_05a2e8e4(&local_80,*(undefined8 *)puVar2);
      lVar24 = local_70;
      if ((uVar10 & 1) != 0) {
        if (uVar13 == 0) {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
        }
        else {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          lVar15 = *(long *)(local_70 + 0x18);
          if ((lVar15 != 0) && (*(char *)(local_70 + 0x28) == '\0')) {
            if (*(long **)(local_70 + 0x30) == (long *)0x0) {
              uVar8 = 1;
            }
            else if (**(long **)(local_70 + 0x30) == *(long *)(PTR_DAT_0759b388 + 0x90)) {
              uVar10 = FUN_05ee0804(*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(lVar15 + 0x48));
              uVar8 = 1;
              if ((uVar10 & 1) == 0) {
                uVar8 = 2;
              }
            }
            else {
              uVar8 = 2;
            }
            local_a0 = 0;
            FUN_04b9f508(&local_a0,uVar8,*(undefined8 *)PTR_DAT_075f1b38);
            *(undefined8 *)(lVar24 + 0x28) = local_a0;
          }
        }
        lVar15 = *(long *)(lVar24 + 0x20);
        if (lVar15 == 0)
        goto Oculus_Interaction_Locomotion_FirstPersonLocomotor__GetModifiedSpeedFactor;
        goto LAB_05ee58b4;
      }
      FUN_05a2e8e0(&local_80,*(undefined8 *)PTR_DAT_075f1af8);
      if (param_5 != 0) {
        uVar19 = (**(code **)(param_5 + 0x18))
                           (*(undefined8 *)(param_5 + 0x40),plVar20,*(undefined8 *)(param_5 + 0x28))
        ;
        if (param_6 != 0) {
          FUN_05ee4658(param_1,param_2,param_6,uVar19);
        }
        FUN_05ee4a1c(param_1,param_2,param_3,uVar19);
        FUN_047afec0(&local_a0,lVar14,*(undefined8 *)PTR_DAT_075f1b28);
        uStack_78 = uStack_98;
        local_80 = local_a0;
        local_70 = local_90;
LAB_05ee5b38:
        do {
          while( true ) {
            do {
              uVar10 = FUN_05a2e8e4(&local_80,*(undefined8 *)puVar2);
              lVar24 = local_70;
              if ((uVar10 & 1) == 0) {
                FUN_05a2e8e0(&local_80,*(undefined8 *)PTR_DAT_075f1af8);
                if (*(long *)(param_3 + 0xe0) != 0) {
                  FUN_047afec0(&local_a0,lVar14,*(undefined8 *)PTR_DAT_075f1b28);
                  uStack_78 = uStack_98;
                  local_80 = local_a0;
                  local_70 = local_90;
                  while (uVar10 = FUN_05a2e8e4(&local_80,*(undefined8 *)puVar2), (uVar10 & 1) != 0)
                  {
                    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_031f2390();
                    }
                    if ((*(char *)(local_70 + 0x38) == '\0') &&
                       ((*(ulong *)(local_70 + 0x28) >> 0x20 != 0 ||
                        ((*(ulong *)(local_70 + 0x28) & 0xff) == 0)))) {
                      lVar24 = *(long *)(param_3 + 0xe0);
                      if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_031f2390();
                      }
                      (**(code **)(lVar24 + 0x18))
                                (*(undefined8 *)(lVar24 + 0x40),uVar19,
                                 *(undefined8 *)(local_70 + 0x10),*(undefined8 *)(local_70 + 0x30),
                                 *(undefined8 *)(lVar24 + 0x28));
                    }
                  }
                  FUN_05a2e8e0(&local_80,*(undefined8 *)PTR_DAT_075f1af8);
                }
                if (uVar13 != 0) {
                  FUN_047afec0(&local_a0,lVar14,*(undefined8 *)PTR_DAT_075f1b28);
                  uStack_78 = uStack_98;
                  local_80 = local_a0;
                  local_70 = local_90;
                  while (uVar10 = FUN_05a2e8e4(&local_80,*(undefined8 *)puVar2), lVar14 = local_70,
                        (uVar10 & 1) != 0) {
                    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_031f2390();
                    }
                    if (*(long *)(local_70 + 0x18) != 0) {
                      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_031f2390();
                      }
                      uVar8 = (**(code **)(*param_2 + 0x1b8))
                                        (param_2,*(undefined8 *)(*param_2 + 0x1c0));
                      FUN_05ee7348(param_1,uVar19,param_2,param_3,uVar8,
                                   *(undefined8 *)(lVar14 + 0x18),*(undefined4 *)(lVar14 + 0x2c),
                                   *(char *)(lVar14 + 0x38) == '\0');
                    }
                  }
                  FUN_05a2e8e0(&local_80,*(undefined8 *)PTR_DAT_075f1af8);
                }
                FUN_05ee4c48(param_1,param_2,param_3,uVar19);
                return uVar19;
              }
              if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
            } while ((((*(char *)(local_70 + 0x38) != '\0') ||
                      (lVar15 = *(long *)(local_70 + 0x18), lVar15 == 0)) ||
                     (*(char *)(lVar15 + 0x80) != '\0')) ||
                    ((*(ulong *)(local_70 + 0x28) >> 0x20 == 0 &&
                     ((*(ulong *)(local_70 + 0x28) & 0xff) != 0))));
            lVar17 = *(long *)(local_70 + 0x30);
            uVar10 = FUN_05ee4550(param_1,lVar15,param_3,lVar17);
            if ((uVar10 & 1) == 0) break;
            plVar22 = *(long **)(lVar15 + 0x68);
            if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            lVar15 = *plVar22;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_075f1a80) {
                  puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_05ee5c60;
                }
                uVar10 = uVar10 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar10 != 0);
            }
            puVar11 = (undefined8 *)FUN_0322c1e8(plVar22,*(long *)PTR_DAT_075f1a80,0);
LAB_05ee5c60:
            (*(code *)*puVar11)(plVar22,uVar19,lVar17,puVar11[1]);
            *(undefined1 *)(lVar24 + 0x38) = 1;
          }
        } while ((lVar17 == 0) || (*(char *)(lVar15 + 0x82) != '\0'));
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        plVar22 = *(long **)(*(long *)(param_1 + 0x20) + 0x40);
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar16 = *plVar22;
        uVar12 = *(undefined8 *)(lVar15 + 0x40);
        uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_075f1708) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05ee5c8c;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_0322c1e8(plVar22,*(long *)PTR_DAT_075f1708,0);
LAB_05ee5c8c:
        plVar22 = (long *)(*(code *)*puVar11)(plVar22,uVar12,puVar11[1]);
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if (*(int *)((long)plVar22 + 0x24) == 2) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_075f1210 + 0x130);
          if ((*(byte *)(*plVar22 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_075f1210)) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2730(plVar22);
          }
          if ((*(char *)((long)plVar22 + 0xf2) != '\0') && ((char)plVar22[5] == '\0')) {
            plVar22 = *(long **)(lVar15 + 0x68);
            if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            lVar15 = *plVar22;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_075f1a80) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_05ee5d5c;
                }
                uVar10 = uVar10 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar10 != 0);
            }
            puVar11 = (undefined8 *)FUN_0322c1e8(plVar22,*(long *)PTR_DAT_075f1a80,1);
LAB_05ee5d5c:
            lVar15 = (*(code *)*puVar11)(plVar22,uVar19,puVar11[1]);
            if (lVar15 != 0) {
              uVar12 = thunk_FUN_03202440(lVar15,0);
              plVar22 = (long *)FUN_05eddae4(param_1,uVar12);
              puVar3 = PTR_DAT_0759c168;
              if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              bVar1 = *(byte *)(*(long *)PTR_DAT_075f1210 + 0x130);
              if ((*(byte *)(*plVar22 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_075f1210)) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2730(plVar22);
              }
              if (*(char *)((long)plVar22 + 0xf1) == '\0') {
                uVar12 = *(undefined8 *)PTR_DAT_0759c168;
                plVar20 = (long *)thunk_FUN_0322f04c(lVar15);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_031f2730(lVar15,uVar12);
                }
              }
              else {
                plVar20 = (long *)FUN_05ed67ec(plVar22,lVar15);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_031f2390();
                }
              }
              lVar15 = *plVar20;
              uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar10 != 0) {
                piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                    puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                    goto LAB_05ee5e60;
                  }
                  uVar10 = uVar10 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar10 != 0);
              }
              puVar11 = (undefined8 *)FUN_0322c1e8(plVar20,*(long *)puVar3,6);
LAB_05ee5e60:
              uVar10 = (*(code *)*puVar11)(plVar20,puVar11[1]);
              plVar23 = (long *)PTR_DAT_0759c168;
              if ((uVar10 & 1) == 0) {
                if (*(char *)((long)plVar22 + 0xf1) == '\0') {
                  uVar12 = *(undefined8 *)PTR_DAT_0759c168;
                  plVar22 = (long *)thunk_FUN_0322f04c(lVar17,uVar12);
                  if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_031f2730(lVar17,uVar12);
                  }
                }
                else {
                  plVar22 = (long *)FUN_05ed67ec(plVar22,lVar17);
                  plVar23 = (long *)PTR_DAT_0759c168;
                  if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_031f2390();
                  }
                }
                lVar15 = *plVar22;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0759c188) {
                      puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                      goto 
                      Oculus_Interaction_Locomotion_FirstPersonLocomotor_<EndOfFrameCoroutine>d__135__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                      ;
                    }
                    uVar10 = uVar10 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar10 != 0);
                }
                puVar11 = (undefined8 *)FUN_0322c1e8(plVar22,*(long *)PTR_DAT_0759c188,0);

                Oculus_Interaction_Locomotion_FirstPersonLocomotor_<EndOfFrameCoroutine>d__135__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                :
                plVar22 = (long *)(*(code *)*puVar11)(plVar22,puVar11[1]);
                if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_031f2390();
                }
                do {
                  lVar15 = *plVar22;
                  uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar10 != 0) {
                    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0759e2a8) {
                        puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                        goto Oculus_Interaction_Locomotion_FlyingLocomotor__SetDeltaTimeProvider;
                      }
                      uVar10 = uVar10 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_0322c1e8(plVar22,*(long *)PTR_DAT_0759e2a8,0);
Oculus_Interaction_Locomotion_FlyingLocomotor__SetDeltaTimeProvider:
                  uVar10 = (*(code *)*puVar11)(plVar22,puVar11[1]);
                  if ((uVar10 & 1) == 0) goto LAB_05ee6050;
                  lVar15 = *plVar22;
                  uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar10 != 0) {
                    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0759e2a8) {
                        puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                        goto LAB_05ee5fdc;
                      }
                      uVar10 = uVar10 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_0322c1e8(plVar22,*(long *)PTR_DAT_0759e2a8,1);
LAB_05ee5fdc:
                  uVar12 = (*(code *)*puVar11)(plVar22,puVar11[1]);
                  lVar15 = *plVar20;
                  uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar10 != 0) {
                    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *plVar23) {
                        puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                        goto LAB_05ee603c;
                      }
                      uVar10 = uVar10 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_0322c1e8(plVar20,*plVar23,2);
LAB_05ee603c:
                  (*(code *)*puVar11)(plVar20,uVar12,puVar11[1]);
                } while( true );
              }
            }
          }
        }
        else if (*(int *)((long)plVar22 + 0x24) == 5) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_075f11e8 + 0x130);
          if ((*(byte *)(*plVar22 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_075f11e8)) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2730();
          }
          if ((char)plVar22[5] == '\0') {
            plVar20 = *(long **)(lVar15 + 0x68);
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            lVar15 = *plVar20;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_075f1a80) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_05ee61a8;
                }
                uVar10 = uVar10 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar10 != 0);
            }
            puVar11 = (undefined8 *)FUN_0322c1e8(plVar20,*(long *)PTR_DAT_075f1a80,1);
LAB_05ee61a8:
            lVar15 = (*(code *)*puVar11)(plVar20,uVar19,puVar11[1]);
            if (lVar15 != 0) {
              if ((char)plVar22[0x20] == '\0') {
                uVar12 = *(undefined8 *)PTR_DAT_075a8e70;
                plVar20 = (long *)thunk_FUN_0322f04c(lVar15,uVar12);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_031f2730(lVar15,uVar12);
                }
              }
              else {
                plVar20 = (long *)FUN_05ed8e8c(plVar22,lVar15);
              }
              if ((char)plVar22[0x20] == '\0') {
                uVar12 = *(undefined8 *)PTR_DAT_075a8e70;
                plVar22 = (long *)thunk_FUN_0322f04c(lVar17,uVar12);
                if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_031f2730(lVar17,uVar12);
                }
              }
              else {
                plVar22 = (long *)FUN_05ed8e8c(plVar22,lVar17);
                if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_031f2390();
                }
              }
              lVar15 = *plVar22;
              uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar10 != 0) {
                piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_075a8e70) {
                    puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 9) * 0x10 + 0x138);
                    goto LAB_05ee6294;
                  }
                  uVar10 = uVar10 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar10 != 0);
              }
              puVar11 = (undefined8 *)FUN_0322c1e8(plVar22,*(long *)PTR_DAT_075a8e70,9);
LAB_05ee6294:
              plVar22 = (long *)(*(code *)*puVar11)(plVar22,puVar11[1]);
              if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              do {
                lVar15 = *plVar22;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0759e2a8) {
                      puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_05ee62fc;
                    }
                    uVar10 = uVar10 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar10 != 0);
                }
                puVar11 = (undefined8 *)FUN_0322c1e8(plVar22,*(long *)PTR_DAT_0759e2a8,0);
LAB_05ee62fc:
                uVar10 = (*(code *)*puVar11)(plVar22,puVar11[1]);
                if ((uVar10 & 1) == 0) goto LAB_05ee63ec;
                lVar15 = *plVar22;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_075a8f00) {
                      puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                      goto LAB_05ee6364;
                    }
                    uVar10 = uVar10 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar10 != 0);
                }
                puVar11 = (undefined8 *)FUN_0322c1e8(plVar22,*(long *)PTR_DAT_075a8f00,2);
LAB_05ee6364:
                auVar26 = (*(code *)*puVar11)(plVar22,puVar11[1]);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_031f2390();
                }
                lVar15 = *plVar20;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_075a8e70) {
                      puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                      goto LAB_05ee63d4;
                    }
                    uVar10 = uVar10 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar10 != 0);
                }
                puVar11 = (undefined8 *)FUN_0322c1e8(plVar20,*(long *)PTR_DAT_075a8e70,1);
LAB_05ee63d4:
                (*(code *)*puVar11)(plVar20,auVar26._0_8_,auVar26._8_8_,puVar11[1]);
              } while( true );
            }
          }
        }
        goto LAB_05ee6138;
      }
    }
  }
LAB_05ee66fc:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


