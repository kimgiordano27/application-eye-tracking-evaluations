/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppLatencyTimings
ENTRY_POINT: 05d46268
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_12
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAppLatencyTimings(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  ulong uVar14;
  long *unaff_x22;
  long *plVar15;
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
  
  thunk_FUN_03048534();
  if (*unaff_x22 != 0) {
    uVar6 = FUN_04430510(*unaff_x22,*(undefined8 *)PTR_DAT_06fb90b8);
    *(undefined8 *)(unaff_x19 + 0x70) = uVar6;
    thunk_FUN_03048534();
    puVar5 = PTR_DAT_06fb90b0;
    puVar4 = PTR_DAT_06fb90a8;
    puVar3 = PTR_DAT_06fb4a40;
    uVar14 = 2;
    do {
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar7 = *(long *)puVar3;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar7 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
      if (*(uint *)(lVar7 + 0x18) <= uVar14) {
LAB_05d465f8:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      uVar1 = *(uint *)(lVar7 + uVar14 * 4 + 0x20);
      if ((uVar1 != 0xffffffff) &&
         ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)uVar14 & 0x1f) & 1) != 0)) {
        plVar15 = *(long **)(unaff_x19 + 0x38);
        if (plVar15 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
        lVar7 = *plVar15;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x26) {
              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar13 + 9) * 0x10 + 0x138);
              goto LAB_05d46358;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_02feb5b8(plVar15,*unaff_x26,9);
LAB_05d46358:
        (*(code *)*puVar8)(plVar15,uVar1,&stack0x00000050,puVar8[1]);
        uVar11 = FUN_05d46608();
        if ((uVar11 & 1) == 0) {
          in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
          in_stack_00000018 = in_stack_00000058;
          uStack0000000000000024 = uStack0000000000000064;
          uStack0000000000000020 = uStack0000000000000060;
          lVar7 = FUN_05d466d0();
          plVar15 = *(long **)(unaff_x19 + 0x78);
          in_stack_00000078 = lVar7;
          if (plVar15 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
          if ((lVar7 != 0) &&
             (lVar9 = thunk_FUN_03010710(lVar7,*(undefined8 *)(*plVar15 + 0x40)), lVar9 == 0)) {
            uVar6 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                              ();
                    /* WARNING: Subroutine does not return */
            FUN_02fe93c0(uVar6,0);
          }
          if (*(uint *)(plVar15 + 3) <= uVar1) goto LAB_05d465f8;
          plVar15[(long)(int)uVar1 + 4] = lVar7;
          thunk_FUN_03048534(plVar15 + (long)(int)uVar1 + 4,lVar7);
        }
        uStack000000000000000c = uVar1;
        uVar6 = thunk_FUN_0301043c(*(undefined8 *)puVar4,(long)&stack0x00000008 + 4);
        uStack0000000000000008 = (uint)uVar14;
        uVar10 = thunk_FUN_0301043c(*(undefined8 *)puVar4,&stack0x00000008);
        FUN_059725f8(*(undefined8 *)PTR_DAT_06fb90d8,uVar6,uVar10,0);
        if (*(long *)(unaff_x19 + 0x40) == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
        uVar6 = OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer(*(long *)(unaff_x19 + 0x40),uVar1,0);
        plVar15 = *(long **)(unaff_x19 + 0x38);
        uVar2 = (int)uVar6;
        if (uVar1 != 0) {
          uVar2 = 0;
        }
        if (plVar15 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
        lVar7 = *plVar15;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x26) {
              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar13 + 9) * 0x10 + 0x138);
              goto LAB_05d464b0;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_02feb5b8(plVar15,*unaff_x26,9);
LAB_05d464b0:
        (*(code *)*puVar8)(plVar15,uVar14 & 0xffffffff,&stack0x00000030,puVar8[1]);
        if (in_stack_00000078 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
        FUN_068f5d7c(in_stack_00000078,0);
        uVar6 = FUN_05d46890(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                             uStack0000000000000030,uStack0000000000000034,in_stack_00000038,uVar6,
                             uVar2);
        lVar7 = in_stack_00000078;
        uVar10 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb90a0);
        FUN_05d4724c(uVar10,uVar1,uVar14 & 0xffffffff,lVar7,uVar6,0);
        lVar7 = *(long *)(unaff_x19 + 0x68);
        if (lVar7 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
        lVar9 = *(long *)(lVar7 + 0x10);
        lVar12 = *(long *)puVar5;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar9 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *puVar8 = uVar10;
          thunk_FUN_03048534(puVar8,uVar10);
        }
        else {
          FUN_044302e8(lVar7,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x1a);
    FUN_05d46af8();
    lVar7 = *(long *)(unaff_x19 + 0x58);
    *(undefined1 *)(unaff_x19 + 0x81) = 1;
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      return;
    }
  }
OVRPlugin_OVRP_1_1_0___cctor:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


