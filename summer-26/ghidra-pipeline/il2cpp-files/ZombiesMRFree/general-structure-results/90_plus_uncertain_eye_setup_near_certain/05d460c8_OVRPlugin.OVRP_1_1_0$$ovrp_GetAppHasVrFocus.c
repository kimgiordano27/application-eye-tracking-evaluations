/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppHasVrFocus
ENTRY_POINT: 05d460c8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_17;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_12
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAppHasVrFocus(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  long in_x9;
  ulong uVar13;
  long lVar14;
  int *in_x10;
  int *piVar15;
  long in_x11;
  long unaff_x19;
  long *plVar16;
  long *unaff_x26;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar6 = (undefined8 *)FUN_02feb5b8();
      goto LAB_05d460fc;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar6 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x11) * 0x10 + 0x138);
LAB_05d460fc:
  uVar7 = (*(code *)*puVar6)();
  if ((uVar7 & 1) == 0) {
    return;
  }
  uVar8 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6e940,0x1a);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar8;
  thunk_FUN_03048534();
  lVar9 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f6de20);
  FUN_068f8d14(lVar9,*(undefined8 *)PTR_DAT_06fb90d0,0);
  if (lVar9 != 0) {
    lVar9 = FUN_068f8a88(lVar9,0);
    uVar8 = FUN_068f5d7c();
    if (lVar9 != 0) {
      FUN_06904d10(lVar9,uVar8,0,0);
      if (DAT_0738e669 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        DAT_0738e669 = '\x01';
      }
      puVar12 = *(undefined4 **)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
      FUN_06903914(*puVar12,puVar12[1],puVar12[2],lVar9,0);
      if (DAT_0738e663 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d7e8);
        DAT_0738e663 = '\x01';
      }
      puVar12 = *(undefined4 **)(*(long *)PTR_DAT_06f6d7e8 + 0xb8);
      UnityEngine_UIElements_BaseVerticalCollectionView_Selection__AddIndex
                (*puVar12,puVar12[1],puVar12[2],puVar12[3],lVar9,0);
      lVar9 = FUN_068f5db8(lVar9,0);
      if (lVar9 != 0) {
        FUN_068f8b00(lVar9,*(undefined4 *)(unaff_x19 + 0x4c),0);
        lVar9 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb90c8);
        FUN_0442fb24(lVar9,0x1a,*(undefined8 *)PTR_DAT_06fb90c0);
        plVar16 = (long *)(unaff_x19 + 0x68);
        *plVar16 = lVar9;
        thunk_FUN_03048534(plVar16,lVar9);
        if (*plVar16 != 0) {
          uVar8 = FUN_04430510(*plVar16,*(undefined8 *)PTR_DAT_06fb90b8);
          *(undefined8 *)(unaff_x19 + 0x70) = uVar8;
          thunk_FUN_03048534();
          puVar5 = PTR_DAT_06fb90b0;
          puVar4 = PTR_DAT_06fb90a8;
          puVar3 = PTR_DAT_06fb4a40;
          uVar7 = 2;
          do {
            lVar9 = *(long *)puVar3;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
              lVar9 = *(long *)puVar3;
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
            if (lVar9 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
            if (*(uint *)(lVar9 + 0x18) <= uVar7) {
LAB_05d465f8:
                    /* WARNING: Subroutine does not return */
              FUN_02fe94f0();
            }
            uVar1 = *(uint *)(lVar9 + uVar7 * 4 + 0x20);
            if ((uVar1 != 0xffffffff) &&
               ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)uVar7 & 0x1f) & 1) != 0)) {
              plVar16 = *(long **)(unaff_x19 + 0x38);
              if (plVar16 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
              lVar9 = *plVar16;
              uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *unaff_x26) {
                    puVar6 = (undefined8 *)(lVar9 + (long)(*piVar15 + 9) * 0x10 + 0x138);
                    goto LAB_05d46358;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar6 = (undefined8 *)FUN_02feb5b8(plVar16,*unaff_x26,9);
LAB_05d46358:
              (*(code *)*puVar6)(plVar16,uVar1,&stack0x00000050,puVar6[1]);
              uVar13 = FUN_05d46608();
              if ((uVar13 & 1) == 0) {
                in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
                in_stack_00000018 = in_stack_00000058;
                uStack0000000000000024 = uStack0000000000000064;
                uStack0000000000000020 = uStack0000000000000060;
                lVar9 = FUN_05d466d0();
                plVar16 = *(long **)(unaff_x19 + 0x78);
                in_stack_00000078 = lVar9;
                if (plVar16 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_03010710(lVar9,*(undefined8 *)(*plVar16 + 0x40)), lVar10 == 0
                   )) {
                  uVar8 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                                    ();
                    /* WARNING: Subroutine does not return */
                  FUN_02fe93c0(uVar8,0);
                }
                if (*(uint *)(plVar16 + 3) <= uVar1) goto LAB_05d465f8;
                plVar16[(long)(int)uVar1 + 4] = lVar9;
                thunk_FUN_03048534(plVar16 + (long)(int)uVar1 + 4,lVar9);
              }
              uStack000000000000000c = uVar1;
              uVar8 = thunk_FUN_0301043c(*(undefined8 *)puVar4,(long)&stack0x00000008 + 4);
              uStack0000000000000008 = (uint)uVar7;
              uVar11 = thunk_FUN_0301043c(*(undefined8 *)puVar4,&stack0x00000008);
              FUN_059725f8(*(undefined8 *)PTR_DAT_06fb90d8,uVar8,uVar11,0);
              if (*(long *)(unaff_x19 + 0x40) == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
              uVar8 = OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer
                                (*(long *)(unaff_x19 + 0x40),uVar1,0);
              plVar16 = *(long **)(unaff_x19 + 0x38);
              uVar2 = (int)uVar8;
              if (uVar1 != 0) {
                uVar2 = 0;
              }
              if (plVar16 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
              lVar9 = *plVar16;
              uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *unaff_x26) {
                    puVar6 = (undefined8 *)(lVar9 + (long)(*piVar15 + 9) * 0x10 + 0x138);
                    goto LAB_05d464b0;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar6 = (undefined8 *)FUN_02feb5b8(plVar16,*unaff_x26,9);
LAB_05d464b0:
              (*(code *)*puVar6)(plVar16,uVar7 & 0xffffffff,&stack0x00000030,puVar6[1]);
              if (in_stack_00000078 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
              FUN_068f5d7c(in_stack_00000078,0);
              uVar8 = FUN_05d46890(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                                   uStack0000000000000030,uStack0000000000000034,in_stack_00000038,
                                   uVar8,uVar2);
              lVar9 = in_stack_00000078;
              uVar11 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb90a0);
              FUN_05d4724c(uVar11,uVar1,uVar7 & 0xffffffff,lVar9,uVar8,0);
              lVar9 = *(long *)(unaff_x19 + 0x68);
              if (lVar9 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
              lVar10 = *(long *)(lVar9 + 0x10);
              lVar14 = *(long *)puVar5;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar10 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                puVar6 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                *puVar6 = uVar11;
                thunk_FUN_03048534(puVar6,uVar11);
              }
              else {
                FUN_044302e8(lVar9,uVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != 0x1a);
          FUN_05d46af8();
          lVar9 = *(long *)(unaff_x19 + 0x58);
          *(undefined1 *)(unaff_x19 + 0x81) = 1;
          if (lVar9 != 0) {
            (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28))
            ;
            return;
          }
        }
      }
    }
  }
OVRPlugin_OVRP_1_1_0___cctor:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


