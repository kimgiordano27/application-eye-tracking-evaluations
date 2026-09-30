/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03531c7c
PROGRAM: vrfs-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


long * System_Array__InternalArray__get_Item<OVRPlugin_EyeGazeState>(long param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if ((bRam0000000007239085 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e55bc0);
    thunk_FUN_0159f088(PTR_DAT_06e34f98);
    thunk_FUN_0159f088(PTR_DAT_06d89750);
    thunk_FUN_0159f088(PTR_DAT_06e41fa8);
    thunk_FUN_0159f088(PTR_DAT_06e0f818);
    thunk_FUN_0159f088(PTR_DAT_06e41b90);
    thunk_FUN_0159f088(PTR_DAT_06db7378);
    thunk_FUN_0159f088(PTR_DAT_06df24e8);
    thunk_FUN_0159f088(PTR_DAT_06e43370);
    thunk_FUN_0159f088(PTR_DAT_06d97e60);
    thunk_FUN_0159f088(PTR_DAT_06e3ef78);
    thunk_FUN_0159f088(PTR_DAT_06e62420);
    thunk_FUN_0159f088(PTR_DAT_06e0d528);
    thunk_FUN_0159f088(PTR_DAT_06db4eb8);
    thunk_FUN_0159f088(PTR_DAT_06dba180);
    thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    bRam0000000007239085 = 1;
  }
  puVar4 = PTR_DAT_06dc26f0;
  lVar7 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_015c2790();
  }
  uVar16 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar4);
  }
  puVar5 = PTR_DAT_06e3ef78;
  plVar8 = (long *)FUN_031c8668(uVar16,0);
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar5 + 300);
    if ((*(byte *)(*plVar8 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5))
    goto LAB_035322e4;
  }
  uVar16 = FUN_031c8668(*(undefined8 *)PTR_DAT_06e34f98,0);
  uVar9 = FUN_031d212c(plVar8,uVar16,0);
  if ((uVar9 & 1) == 0) {
    uVar16 = *(undefined8 *)PTR_DAT_06db4eb8;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar16 = FUN_031c8668(uVar16,0);
    uVar9 = FUN_031d212c(plVar8,uVar16,0);
    if ((uVar9 & 1) != 0) {
      plVar8 = (long *)thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06db7378);
      if (plVar8 == (long *)0x0) goto LAB_035322ec;
      FUN_03824dfc(plVar8,0);
      goto LAB_03531e84;
    }
    lVar7 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_015c2790();
    }
    uVar16 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar4);
    }
    plVar10 = (long *)FUN_031c8668(uVar16,0);
    if (plVar10 == (long *)0x0) goto LAB_035322ec;
    uVar9 = (**(code **)(*plVar10 + 0x298))(plVar10,plVar8,*(undefined8 *)(*plVar10 + 0x2a0));
    if ((uVar9 & 1) != 0) {
      lVar7 = *(long *)puVar4;
      puVar13 = (undefined8 *)PTR_DAT_06e0f818;
      goto LAB_03531f14;
    }
    if (plVar8 == (long *)0x0) goto LAB_035322ec;
    uVar9 = (**(code **)(*plVar8 + 0x3b8))(plVar8,*(undefined8 *)(*plVar8 + 0x3c0));
    puVar3 = PTR_DAT_06d97e60;
    if ((uVar9 & 1) == 0) {
LAB_0353219c:
      uVar9 = (**(code **)(*plVar8 + 0x598))(plVar8,*(undefined8 *)(*plVar8 + 0x5a0));
      if ((uVar9 & 1) == 0) {
switchD_0353221c_default:
        lVar7 = *(long *)(param_1 + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_015c2790();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
          FUN_015c2790();
        }
        plVar8 = (long *)thunk_FUN_015d056c();
        if (plVar8 != (long *)0x0) {
          lVar14 = *(long *)(param_1 + 0x20);
          uVar2 = *(ushort *)(lVar14 + 0x132);
          lVar7 = lVar14;
          if ((uVar2 & 1) == 0) {
            lVar14 = FUN_015c2790(lVar14);
            uVar2 = *(ushort *)(*(long *)(param_1 + 0x20) + 0x132);
            lVar7 = *(long *)(param_1 + 0x20);
          }
          pcVar15 = *(code **)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x30) + 8);
          if ((uVar2 & 1) == 0) {
            lVar7 = FUN_015c2790(lVar7);
          }
          (*pcVar15)(plVar8,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x30));
          return plVar8;
        }
LAB_035322ec:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(int *)(*(long *)PTR_DAT_06e41fa8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar16 = FUN_02d418dc(plVar8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar4);
      }
      uVar6 = FUN_031d4d6c(uVar16,0);
      switch(uVar6) {
      case 5:
        lVar7 = *(long *)puVar4;
        puVar13 = (undefined8 *)PTR_DAT_06e62420;
        break;
      case 6:
      case 8:
      case 9:
      case 10:
        lVar7 = *(long *)puVar4;
        puVar13 = (undefined8 *)PTR_DAT_06d89750;
        break;
      case 7:
        lVar7 = *(long *)puVar4;
        puVar13 = (undefined8 *)PTR_DAT_06e0d528;
        break;
      case 0xb:
      case 0xc:
        lVar7 = *(long *)puVar4;
        puVar13 = (undefined8 *)PTR_DAT_06df24e8;
        break;
      default:
        goto switchD_0353221c_default;
      }
LAB_03531f14:
      uVar16 = *puVar13;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar16 = FUN_031c8668(uVar16,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar5);
      }
    }
    else {
      uVar16 = (**(code **)(*plVar8 + 0x438))(plVar8,*(undefined8 *)(*plVar8 + 0x440));
      uVar17 = *(undefined8 *)puVar3;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar4);
      }
      uVar17 = FUN_031c8668(uVar17,0);
      uVar9 = FUN_031d212c(uVar16,uVar17,0);
      if ((uVar9 & 1) == 0) goto LAB_0353219c;
      lVar7 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
      puVar3 = PTR_DAT_06dba180;
      if (lVar7 == 0) goto LAB_035322ec;
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_035322f0:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      plVar10 = *(long **)(lVar7 + 0x20);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 300);
        if ((*(byte *)(*plVar10 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plVar10);
        }
      }
      uVar16 = *(undefined8 *)PTR_DAT_06e41b90;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      plVar11 = (long *)FUN_031c8668(uVar16,0);
      plVar12 = (long *)FUN_0160edfc(*(undefined8 *)puVar3,1);
      if (plVar12 == (long *)0x0) goto LAB_035322ec;
      if ((plVar10 != (long *)0x0) &&
         (lVar7 = thunk_FUN_015d0480(plVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar7 == 0)) {
        uVar16 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar16,0);
      }
      if ((int)plVar12[3] == 0) goto LAB_035322f0;
      plVar12[4] = (long)plVar10;
      thunk_FUN_01656ef8(plVar12 + 4,plVar10);
      if ((plVar11 == (long *)0x0) ||
         (plVar11 = (long *)(**(code **)(*plVar11 + 0x938))
                                      (plVar11,plVar12,*(undefined8 *)(*plVar11 + 0x940)),
         plVar11 == (long *)0x0)) goto LAB_035322ec;
      uVar9 = (**(code **)(*plVar11 + 0x298))(plVar11,plVar10,*(undefined8 *)(*plVar11 + 0x2a0));
      if ((uVar9 & 1) == 0) goto LAB_0353219c;
      uVar16 = *(undefined8 *)PTR_DAT_06e43370;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar16 = FUN_031c8668(uVar16,0);
      plVar8 = plVar10;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar5);
      }
    }
    plVar8 = (long *)FUN_02d4fc68(uVar16,plVar8,0);
    lVar7 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_015c2790(lVar7);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_015c2790(lVar7);
    }
    if (plVar8 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  else {
    plVar8 = (long *)thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e55bc0);
    if (plVar8 == (long *)0x0) goto LAB_035322ec;
    FUN_03824cf8(plVar8,0);
LAB_03531e84:
    lVar7 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_015c2790();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_015c2790(lVar7);
    }
  }
  if ((*(byte *)(lVar7 + 300) <= *(byte *)(*plVar8 + 300)) &&
     (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar7 + 300) * 8 + -8) == lVar7)) {
    return plVar8;
  }
LAB_035322e4:
                    /* WARNING: Subroutine does not return */
  FUN_0160f170(plVar8);
}


