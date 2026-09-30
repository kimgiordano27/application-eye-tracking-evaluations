/*
FUNCTION_NAME: FUN_0634fee0
ENTRY_POINT: 0634fee0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 191
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;paired_state_refs;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;strong_foveation_hits_6;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06351788) */
/* WARNING: Removing unreachable block (ram,0x063506bc) */
/* WARNING: Removing unreachable block (ram,0x0635100c) */
/* WARNING: Removing unreachable block (ram,0x06351010) */
/* WARNING: Removing unreachable block (ram,0x06351ab0) */
/* WARNING: Removing unreachable block (ram,0x063513a8) */
/* WARNING: Removing unreachable block (ram,0x063513ac) */
/* WARNING: Removing unreachable block (ram,0x063515f8) */
/* WARNING: Removing unreachable block (ram,0x0635177c) */

undefined8
FUN_0634fee0(long param_1,long *param_2,long param_3,undefined8 param_4,long param_5,long param_6)

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
  
  puVar2 = PTR_DAT_07d97f28;
  if ((DAT_0825c39f & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db4a70);
    FUN_0373b518(PTR_DAT_07db4ed8);
    FUN_0373b518(PTR_DAT_07db4d78);
    FUN_0373b518(PTR_DAT_07db4ee0);
    FUN_0373b518(PTR_DAT_07d88078);
    FUN_0373b518(PTR_DAT_07db4ee8);
    FUN_0373b518(PTR_DAT_07db4ef0);
    FUN_0373b518(PTR_DAT_07db4ef8);
    FUN_0373b518(PTR_DAT_07db4f00);
    FUN_0373b518(PTR_DAT_07db4f08);
    FUN_0373b518(PTR_DAT_07db4f10);
    FUN_0373b518(PTR_DAT_07db4f18);
    FUN_0373b518(PTR_DAT_07db4b18);
    FUN_0373b518(PTR_DAT_07d9b3e8);
    FUN_0373b518(PTR_DAT_07d974d8);
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(PTR_DAT_07d96390);
    FUN_0373b518(PTR_DAT_07db4a78);
    FUN_0373b518(PTR_DAT_07d89700);
    FUN_0373b518(PTR_DAT_07db21d8);
    FUN_0373b518(PTR_DAT_07d8ac68);
    FUN_0373b518(PTR_DAT_07db27e8);
    FUN_0373b518(PTR_DAT_07db4e80);
    FUN_0373b518(PTR_DAT_07db4648);
    FUN_0373b518(PTR_DAT_07db4610);
    FUN_0373b518(PTR_DAT_07d9b718);
    FUN_0373b518(PTR_DAT_07db4f20);
    FUN_0373b518(PTR_DAT_07db4f28);
    FUN_0373b518(PTR_DAT_07db4e98);
    FUN_0373b518(PTR_DAT_07db4f30);
    FUN_0373b518(PTR_DAT_07db4f38);
    FUN_0373b518(PTR_DAT_07db4f40);
    FUN_0373b518(PTR_DAT_07d882c0);
    FUN_0373b518(PTR_DAT_07db4f48);
    FUN_0373b518(PTR_DAT_07db4f50);
    FUN_0373b518(PTR_DAT_07db4f58);
    FUN_0373b518(PTR_DAT_07db4f60);
    FUN_0373b518(PTR_DAT_07db4f68);
    FUN_0373b518(PTR_DAT_07db4be0);
    FUN_0373b518(PTR_DAT_07d86678);
    FUN_0373b518(PTR_DAT_07db4f70);
    FUN_0373b518(PTR_DAT_07d97f28);
    DAT_0825c39f = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = 0;
  FUN_06334e90(param_5,*(undefined8 *)puVar2);
  if (param_3 == 0) goto LAB_0635162c;
  uVar10 = FUN_063455f0(param_3);
  plVar22 = (long *)PTR_DAT_07db4be0;
  puVar2 = PTR_DAT_07db27e8;
  if ((uVar10 & 1) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0635162c;
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
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07db27e8) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_063501e0;
        }
        uVar10 = uVar10 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar20,*(long *)PTR_DAT_07db27e8,0);
LAB_063501e0:
    iVar7 = (*(code *)*puVar11)(plVar20,puVar11[1]);
    if (2 < iVar7) {
      uVar12 = FUN_06338600(param_3);
      lVar14 = *plVar22;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar14);
        lVar14 = *plVar22;
      }
      lVar24 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
      uVar21 = *(undefined8 *)PTR_DAT_07d86678;
      if (lVar24 == 0) {
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_03798b70(lVar14);
          lVar14 = *plVar22;
        }
        uVar25 = **(undefined8 **)(lVar14 + 0xb8);
        lVar24 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4f18);
        FUN_044a4918(lVar24,uVar25,*(undefined8 *)PTR_DAT_07db4f50,0);
        plVar20 = (long *)(*(long *)(*plVar22 + 0xb8) + 8);
        *plVar20 = lVar24;
        thunk_FUN_037aeb94(plVar20,lVar24);
      }
      uVar12 = FUN_03f6a6a8(uVar12,lVar24,*(undefined8 *)PTR_DAT_07db4ef0);
      uVar12 = FUN_060c2498(uVar21,uVar12,0);
      if (param_2 == (long *)0x0) goto LAB_0635162c;
      plVar20 = *(long **)(param_1 + 0x28);
      uVar21 = (**(code **)(*param_2 + 0x278))(param_2,*(undefined8 *)(*param_2 + 0x280));
      if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d88078);
      }
      uVar25 = FUN_061d52c8(0);
      uVar12 = FUN_06334b04(*(undefined8 *)PTR_DAT_07db4f70,uVar25,*(undefined8 *)(param_3 + 0x60),
                            uVar12);
      if (*(int *)(*(long *)PTR_DAT_07d9b718 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d9b718);
      }
      uVar25 = thunk_FUN_037787d0(param_2,*(undefined8 *)PTR_DAT_07db21d8);
      uVar12 = FUN_062d6f1c(uVar25,uVar21,uVar12,0);
      if (plVar20 == (long *)0x0) goto LAB_0635162c;
      lVar14 = *plVar20;
      uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar10 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto UnityEngine_EventSystems_OVRInputModule__get_instance;
          }
          uVar10 = uVar10 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_0377596c(plVar20,*(long *)puVar2,1);
UnityEngine_EventSystems_OVRInputModule__get_instance:
      (*(code *)*puVar11)(plVar20,3,uVar12,0,puVar11[1]);
    }
  }
  lVar14 = FUN_06351ba4(param_1,param_3,param_4,param_2,uVar19);
  if (uVar13 != 0) {
    if (*(long *)(param_3 + 0xd8) != 0) {
      plVar20 = (long *)FUN_05450738(*(long *)(param_3 + 0xd8),*(undefined8 *)PTR_DAT_07db4a70);
      puVar6 = PTR_DAT_07db4f68;
      puVar5 = PTR_DAT_07db4f60;
      puVar4 = PTR_DAT_07db4f10;
      puVar3 = PTR_DAT_07db4ee8;
      puVar2 = PTR_DAT_07db4a78;
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      do {
        lVar24 = *plVar20;
        uVar10 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d89700) {
              puVar11 = (undefined8 *)(lVar24 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_06350498;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar20,*(long *)PTR_DAT_07d89700,0);
LAB_06350498:
        uVar10 = (*(code *)*puVar11)(plVar20,puVar11[1]);
        plVar22 = (long *)PTR_DAT_07db4be0;
        if ((uVar10 & 1) == 0) {
          if (plVar20 == (long *)0x0) goto LAB_063506c0;
          lVar24 = *plVar20;
          uVar10 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar10 == 0) goto LAB_06350688;
          piVar18 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          goto LAB_06350670;
        }
        lVar24 = thunk_FUN_037788cc(*(undefined8 *)puVar6);
        FUN_06352d54(lVar24,0);
        lVar15 = *plVar20;
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_06350508;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar20,*(long *)puVar2,0);
LAB_06350508:
        lVar15 = (*(code *)*puVar11)(plVar20,puVar11[1]);
        if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar22 = (long *)(lVar24 + 0x10);
        *plVar22 = lVar15;
        thunk_FUN_037aeb94(plVar22);
        if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(char *)(*plVar22 + 0x80) == '\0') {
          uVar19 = thunk_FUN_037788cc(*(undefined8 *)puVar4);
          FUN_044a3874(uVar19,lVar24,*(undefined8 *)puVar5,0);
          uVar10 = FUN_03f439f0(lVar14,uVar19,*(undefined8 *)puVar3);
          if ((uVar10 & 1) != 0) {
            if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            uVar19 = *(undefined8 *)(*plVar22 + 0x30);
            lVar24 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4ee0);
            FUN_06352c74(lVar24,uVar19,0);
            if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            *(long *)(lVar24 + 0x18) = *plVar22;
            thunk_FUN_037aeb94();
            local_a0 = 0;
            FUN_04e5f37c(&local_a0,0,*(undefined8 *)PTR_DAT_07db4f38);
            *(undefined8 *)(lVar24 + 0x28) = local_a0;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar15 = *(long *)(lVar14 + 0x10);
            lVar17 = *(long *)PTR_DAT_07db4f20;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            uVar9 = *(uint *)(lVar14 + 0x18);
            if (uVar9 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar9 + 1;
              plVar22 = (long *)(lVar15 + (long)(int)uVar9 * 8 + 0x20);
              *plVar22 = lVar24;
              thunk_FUN_037aeb94(plVar22,lVar24);
            }
            else {
              FUN_049ceef4(lVar14,lVar24,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      } while( true );
    }
    goto LAB_0635162c;
  }
  goto LAB_063506c0;
LAB_06350914:
  if (*(long *)(lVar24 + 0x18) != 0) {
    uVar19 = FUN_06338600(param_3);
    lVar15 = *plVar22;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar15);
      lVar15 = *plVar22;
    }
    lVar17 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
    if (lVar17 == 0) {
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar15);
        lVar15 = *plVar22;
      }
      uVar12 = **(undefined8 **)(lVar15 + 0xb8);
      lVar17 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4f18);
      FUN_044a4918(lVar17,uVar12,*(undefined8 *)PTR_DAT_07db4f58,0);
      plVar23 = (long *)(*(long *)(*plVar22 + 0xb8) + 0x10);
      *plVar23 = lVar17;
      thunk_FUN_037aeb94(plVar23,lVar17);
      puVar11 = (undefined8 *)PTR_DAT_07db4f48;
    }
    if (*(long *)(lVar24 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar15 = FUN_041f32b0(uVar19,lVar17,*(undefined8 *)(*(long *)(lVar24 + 0x18) + 0x60),*puVar11);
    if (lVar15 != 0) {
LAB_063507e0:
      if (*(char *)(lVar15 + 0x80) == '\0') {
        if (((uVar13 != 0) && (*(char *)(lVar24 + 0x28) != '\0')) && (*(uint *)(lVar24 + 0x2c) < 2))
        {
          plVar23 = (long *)(lVar15 + 0x48);
          if (*plVar23 == 0) {
            lVar17 = FUN_063488fc(param_1,*(undefined8 *)(lVar15 + 0x40));
            *plVar23 = lVar17;
            thunk_FUN_037aeb94(plVar23);
          }
          local_88 = *(undefined8 *)(lVar15 + 0x90);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar9 = FUN_04e5f3c0(&local_88,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),
                               *(undefined8 *)PTR_DAT_07db4e98);
          if ((uVar9 >> 1 & 1) != 0) {
            uVar19 = FUN_06345efc(lVar15);
            if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar12 = FUN_061d52c8(0);
            uVar19 = FUN_0634b13c(uVar12,param_2,uVar19,uVar12,*(undefined8 *)(lVar15 + 0x48),
                                  *(undefined8 *)(lVar15 + 0x40));
            *(undefined8 *)(lVar24 + 0x30) = uVar19;
            thunk_FUN_037aeb94();
          }
        }
        lVar17 = FUN_06338600(param_3);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar9 = FUN_054507c0(lVar17,lVar15,*(undefined8 *)PTR_DAT_07db4ed8);
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar15 = *(long *)(lVar24 + 0x30);
        if ((lVar15 != 0) &&
           (lVar17 = thunk_FUN_037787d0(lVar15,*(undefined8 *)(*plVar20 + 0x40)), lVar17 == 0)) {
          uVar19 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar19,0);
        }
        if (*(uint *)(plVar20 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        plVar20[(long)(int)uVar9 + 4] = lVar15;
        thunk_FUN_037aeb94(plVar20 + (long)(int)uVar9 + 4,lVar15);
        *(undefined1 *)(lVar24 + 0x38) = 1;
      }
    }
  }
  goto LAB_06350740;
LAB_06351318:
  plVar22 = (long *)thunk_FUN_037787d0(plVar22,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar22 != (long *)0x0) {
    lVar15 = *plVar22;
    uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06351390;
        }
        uVar10 = uVar10 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar22,*(long *)PTR_DAT_07d896f8,0);
LAB_06351390:
    (*(code *)*puVar11)(plVar22,puVar11[1]);
  }
  goto LAB_06351064;
LAB_06350f7c:
  plVar22 = (long *)thunk_FUN_037787d0(plVar22,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar22 != (long *)0x0) {
    lVar15 = *plVar22;
    uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06350ff4;
        }
        uVar10 = uVar10 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar22,*(long *)PTR_DAT_07d896f8,0);
LAB_06350ff4:
    (*(code *)*puVar11)(plVar22,puVar11[1]);
  }
LAB_06351064:
  *(undefined1 *)(lVar24 + 0x38) = 1;
  goto LAB_06350a64;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar18 = piVar18 + 4;
    if (uVar10 == 0) break;
LAB_06350670:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar11 = (undefined8 *)(lVar24 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_063506a4;
    }
  }
LAB_06350688:
  puVar11 = (undefined8 *)FUN_0377596c(plVar20,*(long *)PTR_DAT_07d896f8,0);
LAB_063506a4:
  (*(code *)*puVar11)(plVar20,puVar11[1]);
LAB_063506c0:
  lVar24 = FUN_06338600(param_3);
  puVar2 = PTR_DAT_07d882c0;
  if (lVar24 != 0) {
    uVar8 = FUN_05450160(lVar24,*(undefined8 *)PTR_DAT_07db4d78);
    plVar20 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar2,uVar8);
    puVar11 = (undefined8 *)PTR_DAT_07db4f48;
    puVar2 = PTR_DAT_07db4f00;
    if (lVar14 != 0) {
      FUN_049cf910(&local_a0,lVar14,*(undefined8 *)PTR_DAT_07db4f28);
      uStack_78 = uStack_98;
      local_80 = local_a0;
      local_70 = local_90;
LAB_06350740:
      uVar10 = FUN_05d64e98(&local_80,*(undefined8 *)puVar2);
      lVar24 = local_70;
      if ((uVar10 & 1) != 0) {
        if (uVar13 == 0) {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
        }
        else {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar15 = *(long *)(local_70 + 0x18);
          if ((lVar15 != 0) && (*(char *)(local_70 + 0x28) == '\0')) {
            if (*(long **)(local_70 + 0x30) == (long *)0x0) {
              uVar8 = 1;
            }
            else if (**(long **)(local_70 + 0x30) == *(long *)(PTR_DAT_07d86548 + 0x90)) {
              uVar10 = FUN_0634b6c0(*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(lVar15 + 0x48));
              uVar8 = 1;
              if ((uVar10 & 1) == 0) {
                uVar8 = 2;
              }
            }
            else {
              uVar8 = 2;
            }
            local_a0 = 0;
            FUN_04e5f37c(&local_a0,uVar8,*(undefined8 *)PTR_DAT_07db4f38);
            *(undefined8 *)(lVar24 + 0x28) = local_a0;
          }
        }
        lVar15 = *(long *)(lVar24 + 0x20);
        if (lVar15 == 0) goto LAB_06350914;
        goto LAB_063507e0;
      }
      FUN_05d64e94(&local_80,*(undefined8 *)PTR_DAT_07db4ef8);
      if (param_5 != 0) {
        uVar19 = (**(code **)(param_5 + 0x18))
                           (*(undefined8 *)(param_5 + 0x40),plVar20,*(undefined8 *)(param_5 + 0x28))
        ;
        if (param_6 != 0) {
          FUN_0634f590(param_1,param_2,param_6,uVar19);
        }
        FUN_0634f950(param_1,param_2,param_3,uVar19);
        FUN_049cf910(&local_a0,lVar14,*(undefined8 *)PTR_DAT_07db4f28);
        uStack_78 = uStack_98;
        local_80 = local_a0;
        local_70 = local_90;
LAB_06350a64:
        do {
          while( true ) {
            do {
              uVar10 = FUN_05d64e98(&local_80,*(undefined8 *)puVar2);
              lVar24 = local_70;
              if ((uVar10 & 1) == 0) {
                FUN_05d64e94(&local_80,*(undefined8 *)PTR_DAT_07db4ef8);
                if (*(long *)(param_3 + 0xe0) != 0) {
                  FUN_049cf910(&local_a0,lVar14,*(undefined8 *)PTR_DAT_07db4f28);
                  uStack_78 = uStack_98;
                  local_80 = local_a0;
                  local_70 = local_90;
                  while (uVar10 = FUN_05d64e98(&local_80,*(undefined8 *)puVar2), (uVar10 & 1) != 0)
                  {
                    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0373b7b4();
                    }
                    if ((*(char *)(local_70 + 0x38) == '\0') &&
                       ((*(ulong *)(local_70 + 0x28) >> 0x20 != 0 ||
                        ((*(ulong *)(local_70 + 0x28) & 0xff) == 0)))) {
                      lVar24 = *(long *)(param_3 + 0xe0);
                      if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0373b7b4();
                      }
                      (**(code **)(lVar24 + 0x18))
                                (*(undefined8 *)(lVar24 + 0x40),uVar19,
                                 *(undefined8 *)(local_70 + 0x10),*(undefined8 *)(local_70 + 0x30),
                                 *(undefined8 *)(lVar24 + 0x28));
                    }
                  }
                  FUN_05d64e94(&local_80,*(undefined8 *)PTR_DAT_07db4ef8);
                }
                if (uVar13 != 0) {
                  FUN_049cf910(&local_a0,lVar14,*(undefined8 *)PTR_DAT_07db4f28);
                  uStack_78 = uStack_98;
                  local_80 = local_a0;
                  local_70 = local_90;
                  while (uVar10 = FUN_05d64e98(&local_80,*(undefined8 *)puVar2), lVar14 = local_70,
                        (uVar10 & 1) != 0) {
                    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0373b7b4();
                    }
                    if (*(long *)(local_70 + 0x18) != 0) {
                      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0373b7b4();
                      }
                      uVar8 = (**(code **)(*param_2 + 0x268))
                                        (param_2,*(undefined8 *)(*param_2 + 0x270));
                      FUN_06352250(param_1,uVar19,param_2,param_3,uVar8,
                                   *(undefined8 *)(lVar14 + 0x18),*(undefined4 *)(lVar14 + 0x2c),
                                   *(char *)(lVar14 + 0x38) == '\0');
                    }
                  }
                  FUN_05d64e94(&local_80,*(undefined8 *)PTR_DAT_07db4ef8);
                }
                FUN_0634fb7c(param_1,param_2,param_3,uVar19);
                return uVar19;
              }
              if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
            } while ((((*(char *)(local_70 + 0x38) != '\0') ||
                      (lVar15 = *(long *)(local_70 + 0x18), lVar15 == 0)) ||
                     (*(char *)(lVar15 + 0x80) != '\0')) ||
                    ((*(ulong *)(local_70 + 0x28) >> 0x20 == 0 &&
                     ((*(ulong *)(local_70 + 0x28) & 0xff) != 0))));
            lVar17 = *(long *)(local_70 + 0x30);
            uVar10 = FUN_0634f488(param_1,lVar15,param_3,lVar17);
            if ((uVar10 & 1) == 0) break;
            plVar22 = *(long **)(lVar15 + 0x68);
            if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar15 = *plVar22;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_06350b8c;
                }
                uVar10 = uVar10 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar10 != 0);
            }
            puVar11 = (undefined8 *)FUN_0377596c(plVar22,*(long *)PTR_DAT_07db4e80,0);
LAB_06350b8c:
            (*(code *)*puVar11)(plVar22,uVar19,lVar17,puVar11[1]);
            *(undefined1 *)(lVar24 + 0x38) = 1;
          }
        } while ((lVar17 == 0) || (*(char *)(lVar15 + 0x82) != '\0'));
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar22 = *(long **)(*(long *)(param_1 + 0x20) + 0x40);
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar16 = *plVar22;
        uVar12 = *(undefined8 *)(lVar15 + 0x40);
        uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07db4b18) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_06350bb8;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar22,*(long *)PTR_DAT_07db4b18,0);
LAB_06350bb8:
        plVar22 = (long *)(*(code *)*puVar11)(plVar22,uVar12,puVar11[1]);
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(int *)((long)plVar22 + 0x24) == 2) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
          if ((*(byte *)(*plVar22 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(plVar22);
          }
          if ((*(char *)((long)plVar22 + 0xf2) != '\0') && ((char)plVar22[5] == '\0')) {
            plVar22 = *(long **)(lVar15 + 0x68);
            if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar15 = *plVar22;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto FUN_06350c88;
                }
                uVar10 = uVar10 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar10 != 0);
            }
            puVar11 = (undefined8 *)FUN_0377596c(plVar22,*(long *)PTR_DAT_07db4e80,1);
FUN_06350c88:
            lVar15 = (*(code *)*puVar11)(plVar22,uVar19,puVar11[1]);
            if (lVar15 != 0) {
              uVar12 = thunk_FUN_0374b7cc(lVar15,0);
              plVar22 = (long *)FUN_06348960(param_1,uVar12);
              puVar3 = PTR_DAT_07d8ac68;
              if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
              if ((*(byte *)(*plVar22 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
                FUN_0373bb54(plVar22);
              }
              if (*(char *)((long)plVar22 + 0xf1) == '\0') {
                uVar12 = *(undefined8 *)PTR_DAT_07d8ac68;
                plVar20 = (long *)thunk_FUN_037787d0(lVar15);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar15,uVar12);
                }
              }
              else {
                plVar20 = (long *)FUN_06342b50(plVar22,lVar15);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
              }
              lVar15 = *plVar20;
              uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar10 != 0) {
                piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                    puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                    goto LAB_06350d8c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar10 != 0);
              }
              puVar11 = (undefined8 *)FUN_0377596c(plVar20,*(long *)puVar3,6);
LAB_06350d8c:
              uVar10 = (*(code *)*puVar11)(plVar20,puVar11[1]);
              plVar23 = (long *)PTR_DAT_07d8ac68;
              if ((uVar10 & 1) == 0) {
                if (*(char *)((long)plVar22 + 0xf1) == '\0') {
                  uVar12 = *(undefined8 *)PTR_DAT_07d8ac68;
                  plVar22 = (long *)thunk_FUN_037787d0(lVar17,uVar12);
                  if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373bb54(lVar17,uVar12);
                  }
                }
                else {
                  plVar22 = (long *)FUN_06342b50(plVar22,lVar17);
                  plVar23 = (long *)PTR_DAT_07d8ac68;
                  if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                }
                lVar15 = *plVar22;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d96390) {
                      puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_06350e38;
                    }
                    uVar10 = uVar10 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar10 != 0);
                }
                puVar11 = (undefined8 *)FUN_0377596c(plVar22,*(long *)PTR_DAT_07d96390,0);
LAB_06350e38:
                plVar22 = (long *)(*(code *)*puVar11)(plVar22,puVar11[1]);
                if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                do {
                  lVar15 = *plVar22;
                  uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar10 != 0) {
                    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d89700) {
                        puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                        goto LAB_06350ea0;
                      }
                      uVar10 = uVar10 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_0377596c(plVar22,*(long *)PTR_DAT_07d89700,0);
LAB_06350ea0:
                  uVar10 = (*(code *)*puVar11)(plVar22,puVar11[1]);
                  if ((uVar10 & 1) == 0) goto LAB_06350f7c;
                  lVar15 = *plVar22;
                  uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar10 != 0) {
                    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d89700) {
                        puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                        goto LAB_06350f08;
                      }
                      uVar10 = uVar10 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_0377596c(plVar22,*(long *)PTR_DAT_07d89700,1);
LAB_06350f08:
                  uVar12 = (*(code *)*puVar11)(plVar22,puVar11[1]);
                  lVar15 = *plVar20;
                  uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar10 != 0) {
                    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *plVar23) {
                        puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                        goto LAB_06350f68;
                      }
                      uVar10 = uVar10 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_0377596c(plVar20,*plVar23,2);
LAB_06350f68:
                  (*(code *)*puVar11)(plVar20,uVar12,puVar11[1]);
                } while( true );
              }
            }
          }
        }
        else if (*(int *)((long)plVar22 + 0x24) == 5) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07db4610 + 0x130);
          if ((*(byte *)(*plVar22 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07db4610)) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54();
          }
          if ((char)plVar22[5] == '\0') {
            plVar20 = *(long **)(lVar15 + 0x68);
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar15 = *plVar20;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_063510d4;
                }
                uVar10 = uVar10 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar10 != 0);
            }
            puVar11 = (undefined8 *)FUN_0377596c(plVar20,*(long *)PTR_DAT_07db4e80,1);
LAB_063510d4:
            lVar15 = (*(code *)*puVar11)(plVar20,uVar19,puVar11[1]);
            if (lVar15 != 0) {
              if ((char)plVar22[0x20] == '\0') {
                uVar12 = *(undefined8 *)PTR_DAT_07d974d8;
                plVar20 = (long *)thunk_FUN_037787d0(lVar15,uVar12);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar15,uVar12);
                }
              }
              else {
                plVar20 = (long *)FUN_0634424c(plVar22,lVar15);
              }
              if ((char)plVar22[0x20] == '\0') {
                uVar12 = *(undefined8 *)PTR_DAT_07d974d8;
                plVar22 = (long *)thunk_FUN_037787d0(lVar17,uVar12);
                if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar17,uVar12);
                }
              }
              else {
                plVar22 = (long *)FUN_0634424c(plVar22,lVar17);
                if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
              }
              lVar15 = *plVar22;
              uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar10 != 0) {
                piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d974d8) {
                    puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 9) * 0x10 + 0x138);
                    goto Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate;
                  }
                  uVar10 = uVar10 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar10 != 0);
              }
              puVar11 = (undefined8 *)FUN_0377596c(plVar22,*(long *)PTR_DAT_07d974d8,9);
Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate:
              plVar22 = (long *)(*(code *)*puVar11)(plVar22,puVar11[1]);
              if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              do {
                lVar15 = *plVar22;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d89700) {
                      puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                      goto Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked;
                    }
                    uVar10 = uVar10 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar10 != 0);
                }
                puVar11 = (undefined8 *)FUN_0377596c(plVar22,*(long *)PTR_DAT_07d89700,0);
Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked:
                uVar10 = (*(code *)*puVar11)(plVar22,puVar11[1]);
                if ((uVar10 & 1) == 0) goto LAB_06351318;
                lVar15 = *plVar22;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d9b3e8) {
                      puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                      goto LAB_06351290;
                    }
                    uVar10 = uVar10 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar10 != 0);
                }
                puVar11 = (undefined8 *)FUN_0377596c(plVar22,*(long *)PTR_DAT_07d9b3e8,2);
LAB_06351290:
                auVar26 = (*(code *)*puVar11)(plVar22,puVar11[1]);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                lVar15 = *plVar20;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d974d8) {
                      puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                      goto LAB_06351300;
                    }
                    uVar10 = uVar10 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar10 != 0);
                }
                puVar11 = (undefined8 *)FUN_0377596c(plVar20,*(long *)PTR_DAT_07d974d8,1);
LAB_06351300:
                (*(code *)*puVar11)(plVar20,auVar26._0_8_,auVar26._8_8_,puVar11[1]);
              } while( true );
            }
          }
        }
        goto LAB_06351064;
      }
    }
  }
LAB_0635162c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


