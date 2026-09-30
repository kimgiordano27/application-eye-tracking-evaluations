/*
FUNCTION_NAME: OVRManager.Observable<Int32Enum>$$get_Value
ENTRY_POINT: 01865e94
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_Observable<Int32Enum>__get_Value(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *unaff_x19;
  long *unaff_x20;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  
  lVar5 = FUN_01ac1638();
  lVar9 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0103c244(lVar9);
  }
  if (lVar5 == 0) {
LAB_01866560:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  FUN_021af390(lVar5,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10),0);
  *(undefined1 *)(unaff_x20 + 0x8b) = 1;
  if ((*(byte *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  lVar5 = thunk_FUN_010400dc();
  FUN_017d2804(lVar5,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x38));
  unaff_x20[0x8a] = lVar5;
  thunk_FUN_0106e12c(unaff_x20 + 0x8a,lVar5);
  lVar9 = (**(code **)(*unaff_x20 + 0x8a8))();
  bVar1 = 1 < in_stack_00000038._4_4_;
  lVar5 = lVar9;
  if (in_stack_00000038._4_4_ < 2) {
    iVar11 = 1;
OVRManager_Observable<__Il2CppFullySharedGenericType>__get_Value:
    *(undefined4 *)((long)unaff_x20 + 0x45c) = 0;
  }
  else {
    if (lVar9 == 0) goto LAB_01866560;
    iVar11 = 0;
    if (in_stack_00000038._4_4_ != 0) {
      iVar11 = *(int *)(lVar9 + 0x18) / in_stack_00000038._4_4_;
    }
    if (1 < iVar11) {
      lVar5 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      if ((*(byte *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 8) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      lVar5 = FUN_021af390();
      goto OVRManager_Observable<__Il2CppFullySharedGenericType>__get_Value;
    }
    *(undefined4 *)((long)unaff_x20 + 0x45c) = 0;
    if (iVar11 != 1) goto LAB_01866518;
    bVar1 = false;
  }
  iVar13 = 0;
  iVar2 = 0;
  do {
    if (bVar1) {
      lVar6 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234bed8);
      FUN_021acc50(lVar6,0);
      lVar5 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar5 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      if (lVar6 == 0) goto LAB_01866560;
      lVar5 = FUN_021af390(lVar6,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x28),0);
    }
    else {
      lVar6 = 0;
    }
    if (iVar13 * in_stack_00000038._4_4_ <
        iVar13 * in_stack_00000038._4_4_ + in_stack_00000038._4_4_) {
      iVar14 = 0;
      bVar4 = true;
      puVar12 = (undefined8 *)(lVar9 + 0x20 + (long)iVar2 * 0x20);
      do {
        if ((*(byte *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x50) + 0x135) & 1) == 0) {
          FUN_0103c244();
        }
        lVar5 = thunk_FUN_010400dc();
        FUN_01303218(lVar5,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x58));
        if (lVar5 == 0) goto LAB_01866560;
        *(undefined8 *)(lVar5 + 0x38) = unaff_x20;
        thunk_FUN_0106e12c((undefined8 *)(lVar5 + 0x38),unaff_x20);
        if (lVar9 == 0) goto LAB_01866560;
        if (*(uint *)(lVar9 + 0x18) <= (uint)(iVar2 + iVar14)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        uVar18 = *puVar12;
        uVar17 = puVar12[3];
        uVar8 = puVar12[2];
        *(undefined8 *)(lVar5 + 0x18) = puVar12[1];
        *(undefined8 *)(lVar5 + 0x10) = uVar18;
        *(undefined8 *)(lVar5 + 0x28) = uVar17;
        *(undefined8 *)(lVar5 + 0x20) = uVar8;
        thunk_FUN_0106e12c((undefined8 *)(lVar5 + 0x10),0);
        lVar7 = FUN_010f8634(*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x68));
        if (lVar7 == 0) goto LAB_01866560;
        FUN_021ac820(lVar7,*(undefined8 *)(lVar5 + 0x18),0);
        plVar15 = (long *)(lVar5 + 0x30);
        *plVar15 = lVar7;
        thunk_FUN_0106e12c(plVar15,lVar7);
        if (*plVar15 == 0) goto LAB_01866560;
        FUN_0216b764(*plVar15,1,0);
        lVar16 = *plVar15;
        lVar7 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0103c244();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        lVar7 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0103c244();
        }
        if (lVar16 == 0) goto LAB_01866560;
        FUN_021af390(lVar16,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x30),0);
        if (bVar4) {
          lVar16 = *plVar15;
          lVar7 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0103c244();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          lVar7 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0103c244();
          }
          if (lVar16 == 0) goto LAB_01866560;
          FUN_021af390(lVar16,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x38),0);
        }
        if (*plVar15 == 0) goto LAB_01866560;
        FUN_0198efa4(*plVar15,*(undefined8 *)(lVar5 + 0x10),
                     *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x80));
        lVar7 = *plVar15;
        if ((*(byte *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x90) + 0x135) & 1) == 0) {
          FUN_0103c244();
        }
        uVar8 = thunk_FUN_010400dc();
        UnityEngine_UIElements_KeyboardEventBase<object>__get_altKey
                  (uVar8,lVar5,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x88),
                   *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x98));
        if (lVar7 == 0) goto LAB_01866560;
        FUN_0198ebc8(lVar7,uVar8,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xa0));
        lVar7 = *plVar15;
        if ((*(byte *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0xb0) + 0x135) & 1) == 0) {
          FUN_0103c244();
        }
        uVar8 = thunk_FUN_010400dc();
        FUN_016065a0(uVar8,lVar5,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xa8),
                     *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xb8));
        FUN_011ac314(lVar7,uVar8,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xc0));
        lVar7 = unaff_x20[0x8a];
        if (lVar7 == 0) goto LAB_01866560;
        uVar8 = *(undefined8 *)(lVar5 + 0x30);
        lVar5 = *(long *)(lVar7 + 0x10);
        lVar16 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0xd0);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_01866560;
        uVar3 = *(uint *)(lVar7 + 0x18);
        if (uVar3 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar3 + 1;
          puVar10 = (undefined8 *)(lVar5 + (long)(int)uVar3 * 8 + 0x20);
          *puVar10 = uVar8;
          thunk_FUN_0106e12c(puVar10);
        }
        else {
          FUN_017d3030(lVar7,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        if (bVar1) {
          if (lVar6 == 0) goto LAB_01866560;
          lVar5 = FUN_021b3938(lVar6,*plVar15,0);
        }
        else {
          lVar5 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0103c244();
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          lVar5 = FUN_01ac1638(unaff_x20,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x20));
          if (lVar5 == 0) goto LAB_01866560;
          in_stack_00000048 = *(undefined8 *)(lVar5 + 0x378);
          lVar5 = FUN_021b39ec(&stack0x00000048,*plVar15,0);
        }
        iVar14 = iVar14 + 1;
        bVar4 = false;
        puVar12 = puVar12 + 4;
      } while (in_stack_00000038._4_4_ != iVar14);
    }
    iVar14 = in_stack_00000038._4_4_ + -3;
    if (in_stack_00000038._4_4_ < 3 && 0 < 3 - in_stack_00000038._4_4_) {
      do {
        if (bVar1) {
          uVar8 = FUN_01865c8c(lVar5,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xd8));
          if (lVar6 == 0) goto LAB_01866560;
          lVar5 = FUN_021b3938(lVar6,uVar8,0);
        }
        else {
          lVar5 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0103c244();
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          lVar5 = FUN_01ac1638(unaff_x20,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x20));
          if (lVar5 == 0) goto LAB_01866560;
          in_stack_00000048 = *(undefined8 *)(lVar5 + 0x378);
          uVar8 = FUN_01865c8c(lVar5,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xd8));
          lVar5 = FUN_021b39ec(&stack0x00000048,uVar8,0);
        }
        bVar4 = iVar14 != -1;
        iVar14 = iVar14 + 1;
      } while (bVar4);
    }
    if (bVar1) {
      lVar5 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar5 = FUN_01ac1638(unaff_x20,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x20));
      if (lVar5 == 0) goto LAB_01866560;
      in_stack_00000048 = *(undefined8 *)(lVar5 + 0x378);
      lVar5 = FUN_021b39ec(&stack0x00000048,lVar6,0);
    }
    iVar13 = iVar13 + 1;
    iVar2 = iVar2 + in_stack_00000038._4_4_;
  } while (iVar13 != iVar11);
LAB_01866518:
  FUN_01866568(unaff_x20,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xe0));
  return;
}


