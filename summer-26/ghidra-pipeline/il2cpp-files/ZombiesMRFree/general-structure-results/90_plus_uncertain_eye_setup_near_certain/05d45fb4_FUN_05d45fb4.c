/*
FUNCTION_NAME: FUN_05d45fb4
ENTRY_POINT: 05d45fb4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_17;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_10
*/


void FUN_05d45fb4(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  uint local_e8;
  uint local_e4;
  ulong local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  long local_78;
  
  if ((DAT_07398b4d & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb90a0);
    FUN_02fe925c(PTR_DAT_06f6de20);
    FUN_02fe925c(PTR_DAT_06fb90a8);
    FUN_02fe925c(PTR_DAT_06fb4a40);
    FUN_02fe925c(PTR_DAT_06fb4b60);
    FUN_02fe925c(PTR_DAT_06fb90b0);
    FUN_02fe925c(PTR_DAT_06fb90b8);
    FUN_02fe925c(PTR_DAT_06fb90c0);
    FUN_02fe925c(PTR_DAT_06fb90c8);
    FUN_02fe925c(PTR_DAT_06f6e940);
    FUN_02fe925c(PTR_DAT_06fb90d0);
    FUN_02fe925c(PTR_DAT_06fb90d8);
    DAT_07398b4d = 1;
  }
  puVar4 = PTR_DAT_06fb4b60;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_88 = 0;
  local_90 = 0;
  uStack_8c = 0;
  local_78 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  plVar19 = *(long **)(param_1 + 0x38);
  if (plVar19 != (long *)0x0) {
    lVar12 = *plVar19;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_06fb4b60) {
          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar18 + 0x11) * 0x10 + 0x138);
          goto LAB_05d460fc;
        }
        uVar15 = uVar15 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_02feb5b8(plVar19,*(long *)PTR_DAT_06fb4b60,0x11);
LAB_05d460fc:
    uVar15 = (*(code *)*puVar7)(plVar19,puVar7[1]);
    if ((uVar15 & 1) == 0) {
      return;
    }
    uVar8 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6e940,0x1a);
    *(undefined8 *)(param_1 + 0x78) = uVar8;
    thunk_FUN_03048534();
    lVar12 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f6de20);
    FUN_068f8d14(lVar12,*(undefined8 *)PTR_DAT_06fb90d0,0);
    if (lVar12 != 0) {
      lVar12 = FUN_068f8a88(lVar12,0);
      uVar8 = FUN_068f5d7c(param_1,0);
      if (lVar12 != 0) {
        FUN_06904d10(lVar12,uVar8,0,0);
        if (DAT_0738e669 == '\0') {
          FUN_02fe925c(PTR_DAT_06f6d5d8);
          DAT_0738e669 = '\x01';
        }
        puVar13 = *(undefined4 **)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
        FUN_06903914(*puVar13,puVar13[1],puVar13[2],lVar12,0);
        if (DAT_0738e663 == '\0') {
          FUN_02fe925c(PTR_DAT_06f6d7e8);
          DAT_0738e663 = '\x01';
        }
        puVar13 = *(undefined4 **)(*(long *)PTR_DAT_06f6d7e8 + 0xb8);
        UnityEngine_UIElements_BaseVerticalCollectionView_Selection__AddIndex
                  (*puVar13,puVar13[1],puVar13[2],puVar13[3],lVar12,0);
        lVar9 = FUN_068f5db8(lVar12,0);
        if (lVar9 != 0) {
          FUN_068f8b00(lVar9,*(undefined4 *)(param_1 + 0x4c),0);
          lVar9 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb90c8);
          FUN_0442fb24(lVar9,0x1a,*(undefined8 *)PTR_DAT_06fb90c0);
          plVar19 = (long *)(param_1 + 0x68);
          *plVar19 = lVar9;
          thunk_FUN_03048534(plVar19,lVar9);
          if (*plVar19 != 0) {
            uVar8 = FUN_04430510(*plVar19,*(undefined8 *)PTR_DAT_06fb90b8);
            *(undefined8 *)(param_1 + 0x70) = uVar8;
            thunk_FUN_03048534();
            puVar6 = PTR_DAT_06fb90b0;
            puVar5 = PTR_DAT_06fb90a8;
            puVar3 = PTR_DAT_06fb4a40;
            uVar15 = 2;
            do {
              lVar9 = *(long *)puVar3;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
                lVar9 = *(long *)puVar3;
              }
              lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
              if (lVar9 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
              if (*(uint *)(lVar9 + 0x18) <= uVar15) {
LAB_05d465f8:
                    /* WARNING: Subroutine does not return */
                FUN_02fe94f0();
              }
              uVar1 = *(uint *)(lVar9 + uVar15 * 4 + 0x20);
              if ((uVar1 != 0xffffffff) &&
                 ((*(uint *)(param_1 + 0x50) >> (ulong)((uint)uVar15 & 0x1f) & 1) != 0)) {
                plVar19 = *(long **)(param_1 + 0x38);
                if (plVar19 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
                lVar14 = *plVar19;
                lVar9 = *(long *)puVar4;
                uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar16 != 0) {
                  piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == lVar9) {
                      puVar7 = (undefined8 *)(lVar14 + (long)(*piVar18 + 9) * 0x10 + 0x138);
                      goto LAB_05d46358;
                    }
                    uVar16 = uVar16 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar16 != 0);
                }
                puVar7 = (undefined8 *)FUN_02feb5b8(plVar19,lVar9,9);
LAB_05d46358:
                (*(code *)*puVar7)(plVar19,uVar1,&local_a0,puVar7[1]);
                uVar16 = FUN_05d46608(param_1,uVar1,&local_78);
                if ((uVar16 & 1) == 0) {
                  uStack_cc = CONCAT44(local_88,uStack_8c);
                  uStack_d8 = uStack_98;
                  local_e0 = local_a0;
                  uStack_d4 = uStack_94;
                  uStack_d0 = local_90;
                  lVar9 = FUN_05d466d0(param_1,uVar1,lVar12,&local_e0);
                  plVar19 = *(long **)(param_1 + 0x78);
                  local_78 = lVar9;
                  if (plVar19 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
                  if ((lVar9 != 0) &&
                     (lVar14 = thunk_FUN_03010710(lVar9,*(undefined8 *)(*plVar19 + 0x40)),
                     lVar14 == 0)) {
                    uVar8 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                                      ();
                    /* WARNING: Subroutine does not return */
                    FUN_02fe93c0(uVar8,0);
                  }
                  if (*(uint *)(plVar19 + 3) <= uVar1) goto LAB_05d465f8;
                  plVar19[(long)(int)uVar1 + 4] = lVar9;
                  thunk_FUN_03048534(plVar19 + (long)(int)uVar1 + 4,lVar9);
                }
                local_e4 = uVar1;
                uVar8 = thunk_FUN_0301043c(*(undefined8 *)puVar5,&local_e4);
                local_e8 = (uint)uVar15;
                uVar10 = thunk_FUN_0301043c(*(undefined8 *)puVar5,&local_e8);
                uVar8 = FUN_059725f8(*(undefined8 *)PTR_DAT_06fb90d8,uVar8,uVar10,0);
                if (*(long *)(param_1 + 0x40) == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
                uVar10 = OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer
                                   (*(long *)(param_1 + 0x40),uVar1,0);
                plVar19 = *(long **)(param_1 + 0x38);
                uVar2 = (int)uVar10;
                if (uVar1 != 0) {
                  uVar2 = 0;
                }
                if (plVar19 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
                lVar14 = *plVar19;
                lVar9 = *(long *)puVar4;
                uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar16 != 0) {
                  piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == lVar9) {
                      puVar7 = (undefined8 *)(lVar14 + (long)(*piVar18 + 9) * 0x10 + 0x138);
                      goto LAB_05d464b0;
                    }
                    uVar16 = uVar16 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar16 != 0);
                }
                puVar7 = (undefined8 *)FUN_02feb5b8(plVar19,lVar9,9);
LAB_05d464b0:
                (*(code *)*puVar7)(plVar19,uVar15 & 0xffffffff,&local_c0,puVar7[1]);
                if (local_78 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
                uVar11 = FUN_068f5d7c(local_78,0);
                uVar8 = FUN_05d46890(local_a0 & 0xffffffff,local_a0._4_4_,uStack_98,
                                     (undefined4)local_c0,local_c0._4_4_,(undefined4)local_b8,uVar10
                                     ,uVar2,param_1,uVar8,uVar11);
                lVar9 = local_78;
                uVar10 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb90a0);
                FUN_05d4724c(uVar10,uVar1,uVar15 & 0xffffffff,lVar9,uVar8,0);
                lVar9 = *(long *)(param_1 + 0x68);
                if (lVar9 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
                lVar14 = *(long *)(lVar9 + 0x10);
                lVar17 = *(long *)puVar6;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar14 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
                uVar1 = *(uint *)(lVar9 + 0x18);
                if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                  puVar7 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar7 = uVar10;
                  thunk_FUN_03048534(puVar7,uVar10);
                }
                else {
                  FUN_044302e8(lVar9,uVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 != 0x1a);
            FUN_05d46af8(param_1);
            lVar12 = *(long *)(param_1 + 0x58);
            *(undefined1 *)(param_1 + 0x81) = 1;
            if (lVar12 != 0) {
              (**(code **)(lVar12 + 0x18))
                        (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
OVRPlugin_OVRP_1_1_0___cctor:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


