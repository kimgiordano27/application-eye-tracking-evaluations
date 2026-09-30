/*
FUNCTION_NAME: FUN_041305d4
ENTRY_POINT: 041305d4
PROGRAM: vrfs-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_041305d4(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam000000000723cff2 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06dbd418);
    thunk_FUN_0159f088(PTR_DAT_06e60b60);
    thunk_FUN_0159f088(PTR_DAT_06ddbb08);
    thunk_FUN_0159f088(PTR_DAT_06e4d2d8);
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    thunk_FUN_0159f088(PTR_DAT_06da5848);
    thunk_FUN_0159f088(PTR_DAT_06df2e60);
    bRam000000000723cff2 = 1;
  }
  uStack_f0 = 0;
  lStack_108 = 0;
  lStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar10 = *(long *)(param_1 + 0xe0);
  if (lVar10 != 0) {
    iVar1 = *(int *)(lVar10 + 0x18);
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_031dd574(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
    }
    puVar5 = PTR_DAT_06e4d2d8;
    puVar4 = PTR_DAT_06df2e60;
    puVar3 = PTR_DAT_06d9fd78;
    lVar10 = *(long *)(param_1 + 0xd0);
    if (lVar10 == 0) {
      return;
    }
    puVar11 = (undefined8 *)((ulong)&plStack_120 | 8);
    uVar15 = 0;
    do {
      if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar15) {
        lVar10 = *(long *)puVar4;
        lVar8 = *(long *)(param_1 + 0xe0);
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar10 = *(long *)puVar4;
        }
        lVar9 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
        if (lVar9 == 0) {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar10 = *(long *)puVar4;
          }
          uVar12 = **(undefined8 **)(lVar10 + 0xb8);
          lVar9 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06dbd418);
          if (lVar9 == 0) break;
          FUN_04775390(lVar9,uVar12,*(undefined8 *)PTR_DAT_06da5848,0);
          plVar13 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
          *plVar13 = lVar9;
          thunk_FUN_01656ef8(plVar13,lVar9);
        }
        if (lVar8 != 0) {
          FUN_045c6a54(lVar8,lVar9,*(undefined8 *)puVar5);
          return;
        }
        break;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      plVar13 = *(long **)(lVar10 + uVar15 * 8 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar7 = FUN_051e0350(plVar13,0);
      if ((uVar7 & 1) != 0) {
        if (plVar13 == (long *)0x0) break;
        uVar7 = FUN_051de2f8(plVar13,0);
        if ((uVar7 & 1) != 0) {
          if (*(char *)(param_1 + 0x28) == '\0') {
            lVar10 = FUN_051e516c(plVar13,0);
            if (lVar10 == 0) break;
            uVar7 = FUN_051df964(lVar10,0);
            if ((uVar7 & 1) == 0) goto LAB_04130990;
          }
          lVar10 = FUN_0366303c(plVar13,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_016466fc(*(long *)puVar3);
          }
          uVar7 = FUN_051d94d4(lVar10,0,0);
          if ((uVar7 & 1) == 0) {
            lVar8 = FUN_03663ff0(plVar13,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_016466fc(*(long *)puVar3);
            }
            uVar7 = FUN_051d94d4(lVar8,0,0);
            if ((uVar7 & 1) == 0) {
              if (lVar8 == 0) break;
              uVar7 = FUN_036e0114(lVar8,0);
              if ((uVar7 & 1) == 0) {
                lVar9 = (**(code **)(*plVar13 + 0x358))(plVar13,*(undefined8 *)(*plVar13 + 0x360));
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_016466fc(*(long *)puVar3);
                }
                uVar7 = FUN_051e0350(lVar9,0);
                if ((uVar7 & 1) != 0) {
                  lVar14 = *(long *)(param_1 + 0xe0);
                  puVar11[3] = 0;
                  puVar11[2] = 0;
                  puVar11[5] = 0;
                  puVar11[4] = 0;
                  puVar11[1] = 0;
                  *puVar11 = 0;
                  plStack_120 = plVar13;
                  thunk_FUN_01656ef8(&plStack_120,plVar13);
                  lStack_118 = lVar10;
                  thunk_FUN_01656ef8(puVar11,lVar10);
                  lStack_110 = lVar8;
                  thunk_FUN_01656ef8(&lStack_110,lVar8);
                  lStack_108 = lVar9;
                  thunk_FUN_01656ef8(&lStack_108,lVar9);
                  if (lVar10 == 0) break;
                  uVar6 = FUN_036e1250(lVar10,0);
                  uStack_100 = CONCAT44(uStack_100._4_4_,uVar6);
                  uVar6 = FUN_036e1194(lVar10,0);
                  uStack_100 = CONCAT44(uVar6,(undefined4)uStack_100);
                  uVar6 = FUN_03663fd4(plVar13,0);
                  uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar6);
                  if (lVar9 == 0) break;
                  uVar6 = FUN_04888724(lVar9,0);
                  uStack_f8 = CONCAT44(uVar6,(undefined4)uStack_f8);
                  uVar6 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar10,0);
                  uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar6);
                  if (lVar14 == 0) break;
                  lStack_d8 = lStack_118;
                  plStack_e0 = plStack_120;
                  lStack_c8 = lStack_108;
                  lStack_d0 = lStack_110;
                  uStack_b8 = uStack_f8;
                  uStack_c0 = uStack_100;
                  uStack_b0 = uStack_f0;
                  lVar10 = *(long *)(lVar14 + 0x10);
                  lVar8 = *(long *)PTR_DAT_06e60b60;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar10 == 0) break;
                  uVar2 = *(uint *)(lVar14 + 0x18);
                  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                    lVar10 = lVar10 + (long)(int)uVar2 * 0x38;
                    *(undefined8 *)(lVar10 + 0x50) = uStack_f0;
                    *(long *)(lVar10 + 0x38) = lStack_108;
                    *(long *)(lVar10 + 0x30) = lStack_110;
                    *(undefined8 *)(lVar10 + 0x48) = uStack_f8;
                    *(undefined8 *)(lVar10 + 0x40) = uStack_100;
                    *(long *)(lVar10 + 0x28) = lStack_118;
                    *(long **)(lVar10 + 0x20) = plStack_120;
                    thunk_FUN_01656ef8(lVar10 + 0x20,0);
                  }
                  else {
                    lVar10 = *(long *)(*(long *)(lVar8 + 0x20) + 0xc0);
                    lStack_98 = lStack_118;
                    plStack_a0 = plStack_120;
                    lStack_88 = lStack_108;
                    lStack_90 = lStack_110;
                    uStack_78 = uStack_f8;
                    uStack_80 = uStack_100;
                    uStack_70 = uStack_f0;
                    (**(code **)(*(long *)(lVar10 + 0x58) + 8))
                              (lVar14,&plStack_a0,*(undefined8 *)(lVar10 + 0x58));
                  }
                }
              }
            }
          }
        }
      }
LAB_04130990:
      lVar10 = *(long *)(param_1 + 0xd0);
      uVar15 = uVar15 + 1;
    } while (lVar10 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


