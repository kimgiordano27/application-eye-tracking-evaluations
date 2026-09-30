/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetAppMonoscopic
ENTRY_POINT: 05d4604c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_17;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_12
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetAppMonoscopic(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long unaff_x20;
  long *plVar17;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  ulong in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  long in_stack_00000078;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 200));
  FUN_02fe925c(PTR_DAT_06f6e940);
  FUN_02fe925c(PTR_DAT_06fb90d0);
  FUN_02fe925c(PTR_DAT_06fb90d8);
  *(undefined1 *)(unaff_x20 + 0xb4d) = 1;
  puVar4 = PTR_DAT_06fb4b60;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  in_stack_00000078 = 0;
  _uStack0000000000000030 = 0;
  _uStack0000000000000038 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  plVar17 = *(long **)(unaff_x19 + 0x38);
  if (plVar17 != (long *)0x0) {
    lVar10 = *plVar17;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06fb4b60) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar16 + 0x11) * 0x10 + 0x138);
          goto LAB_05d460fc;
        }
        uVar13 = uVar13 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02feb5b8(plVar17,*(long *)PTR_DAT_06fb4b60,0x11);
LAB_05d460fc:
    uVar13 = (*(code *)*puVar7)(plVar17,puVar7[1]);
    if ((uVar13 & 1) == 0) {
      return;
    }
    uVar8 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6e940,0x1a);
    *(undefined8 *)(unaff_x19 + 0x78) = uVar8;
    thunk_FUN_03048534();
    lVar10 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f6de20);
    FUN_068f8d14(lVar10,*(undefined8 *)PTR_DAT_06fb90d0,0);
    if (lVar10 != 0) {
      lVar10 = FUN_068f8a88(lVar10,0);
      uVar8 = FUN_068f5d7c();
      if (lVar10 != 0) {
        FUN_06904d10(lVar10,uVar8,0,0);
        if (DAT_0738e669 == '\0') {
          FUN_02fe925c(PTR_DAT_06f6d5d8);
          DAT_0738e669 = '\x01';
        }
        puVar11 = *(undefined4 **)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
        FUN_06903914(*puVar11,puVar11[1],puVar11[2],lVar10,0);
        if (DAT_0738e663 == '\0') {
          FUN_02fe925c(PTR_DAT_06f6d7e8);
          DAT_0738e663 = '\x01';
        }
        puVar11 = *(undefined4 **)(*(long *)PTR_DAT_06f6d7e8 + 0xb8);
        UnityEngine_UIElements_BaseVerticalCollectionView_Selection__AddIndex
                  (*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar10,0);
        lVar10 = FUN_068f5db8(lVar10,0);
        if (lVar10 != 0) {
          FUN_068f8b00(lVar10,*(undefined4 *)(unaff_x19 + 0x4c),0);
          lVar10 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb90c8);
          FUN_0442fb24(lVar10,0x1a,*(undefined8 *)PTR_DAT_06fb90c0);
          plVar17 = (long *)(unaff_x19 + 0x68);
          *plVar17 = lVar10;
          thunk_FUN_03048534(plVar17,lVar10);
          if (*plVar17 != 0) {
            uVar8 = FUN_04430510(*plVar17,*(undefined8 *)PTR_DAT_06fb90b8);
            *(undefined8 *)(unaff_x19 + 0x70) = uVar8;
            thunk_FUN_03048534();
            puVar6 = PTR_DAT_06fb90b0;
            puVar5 = PTR_DAT_06fb90a8;
            puVar3 = PTR_DAT_06fb4a40;
            uVar13 = 2;
            do {
              lVar10 = *(long *)puVar3;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
                lVar10 = *(long *)puVar3;
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
              if (lVar10 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
              if (*(uint *)(lVar10 + 0x18) <= uVar13) {
LAB_05d465f8:
                    /* WARNING: Subroutine does not return */
                FUN_02fe94f0();
              }
              uVar1 = *(uint *)(lVar10 + uVar13 * 4 + 0x20);
              if ((uVar1 != 0xffffffff) &&
                 ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)uVar13 & 0x1f) & 1) != 0)) {
                plVar17 = *(long **)(unaff_x19 + 0x38);
                if (plVar17 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
                lVar12 = *plVar17;
                lVar10 = *(long *)puVar4;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar10) {
                      puVar7 = (undefined8 *)(lVar12 + (long)(*piVar16 + 9) * 0x10 + 0x138);
                      goto LAB_05d46358;
                    }
                    uVar14 = uVar14 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar14 != 0);
                }
                puVar7 = (undefined8 *)FUN_02feb5b8(plVar17,lVar10,9);
LAB_05d46358:
                (*(code *)*puVar7)(plVar17,uVar1,&stack0x00000050,puVar7[1]);
                uVar14 = FUN_05d46608();
                if ((uVar14 & 1) == 0) {
                  uStack0000000000000024 = CONCAT44(in_stack_00000068,uStack0000000000000064);
                  uStack0000000000000018 = in_stack_00000058;
                  in_stack_00000010 = in_stack_00000050;
                  uStack000000000000001c = uStack000000000000005c;
                  uStack0000000000000020 = in_stack_00000060;
                  lVar10 = FUN_05d466d0();
                  plVar17 = *(long **)(unaff_x19 + 0x78);
                  in_stack_00000078 = lVar10;
                  if (plVar17 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
                  if ((lVar10 != 0) &&
                     (lVar12 = thunk_FUN_03010710(lVar10,*(undefined8 *)(*plVar17 + 0x40)),
                     lVar12 == 0)) {
                    uVar8 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                                      ();
                    /* WARNING: Subroutine does not return */
                    FUN_02fe93c0(uVar8,0);
                  }
                  if (*(uint *)(plVar17 + 3) <= uVar1) goto LAB_05d465f8;
                  plVar17[(long)(int)uVar1 + 4] = lVar10;
                  thunk_FUN_03048534(plVar17 + (long)(int)uVar1 + 4,lVar10);
                }
                uStack000000000000000c = uVar1;
                uVar8 = thunk_FUN_0301043c(*(undefined8 *)puVar5,(long)&stack0x00000008 + 4);
                uStack0000000000000008 = (uint)uVar13;
                uVar9 = thunk_FUN_0301043c(*(undefined8 *)puVar5,&stack0x00000008);
                FUN_059725f8(*(undefined8 *)PTR_DAT_06fb90d8,uVar8,uVar9,0);
                if (*(long *)(unaff_x19 + 0x40) == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
                uVar8 = OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer
                                  (*(long *)(unaff_x19 + 0x40),uVar1,0);
                plVar17 = *(long **)(unaff_x19 + 0x38);
                uVar2 = (int)uVar8;
                if (uVar1 != 0) {
                  uVar2 = 0;
                }
                if (plVar17 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
                lVar12 = *plVar17;
                lVar10 = *(long *)puVar4;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar10) {
                      puVar7 = (undefined8 *)(lVar12 + (long)(*piVar16 + 9) * 0x10 + 0x138);
                      goto LAB_05d464b0;
                    }
                    uVar14 = uVar14 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar14 != 0);
                }
                puVar7 = (undefined8 *)FUN_02feb5b8(plVar17,lVar10,9);
LAB_05d464b0:
                (*(code *)*puVar7)(plVar17,uVar13 & 0xffffffff,&stack0x00000030,puVar7[1]);
                if (in_stack_00000078 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
                FUN_068f5d7c(in_stack_00000078,0);
                uVar8 = FUN_05d46890(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                                     in_stack_00000058,uStack0000000000000030,uStack0000000000000034
                                     ,uStack0000000000000038,uVar8,uVar2);
                lVar10 = in_stack_00000078;
                uVar9 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb90a0);
                FUN_05d4724c(uVar9,uVar1,uVar13 & 0xffffffff,lVar10,uVar8,0);
                lVar10 = *(long *)(unaff_x19 + 0x68);
                if (lVar10 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
                lVar12 = *(long *)(lVar10 + 0x10);
                lVar15 = *(long *)puVar6;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar12 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                  puVar7 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar7 = uVar9;
                  thunk_FUN_03048534(puVar7,uVar9);
                }
                else {
                  FUN_044302e8(lVar10,uVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != 0x1a);
            FUN_05d46af8();
            lVar10 = *(long *)(unaff_x19 + 0x58);
            *(undefined1 *)(unaff_x19 + 0x81) = 1;
            if (lVar10 != 0) {
              (**(code **)(lVar10 + 0x18))
                        (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
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


