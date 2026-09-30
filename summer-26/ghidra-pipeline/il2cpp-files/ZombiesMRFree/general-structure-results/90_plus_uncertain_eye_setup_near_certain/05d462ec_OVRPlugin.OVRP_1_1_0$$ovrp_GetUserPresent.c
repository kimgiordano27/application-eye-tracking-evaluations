/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserPresent
ENTRY_POINT: 05d462ec
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


void OVRPlugin_OVRP_1_1_0__ovrp_GetUserPresent(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  ulong unaff_x21;
  uint unaff_w22;
  long *plVar11;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined4 unaff_s10;
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
  
  do {
    if ((unaff_w22 != 0xffffffff) &&
       ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) != 0)) {
      plVar11 = *(long **)(unaff_x19 + 0x38);
      if (plVar11 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 9) * 0x10 + 0x138);
            goto LAB_05d46358;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_02feb5b8(plVar11,*unaff_x26,9);
LAB_05d46358:
      (*(code *)*puVar3)(plVar11,unaff_w22,&stack0x00000050,puVar3[1]);
      uVar8 = FUN_05d46608();
      if ((uVar8 & 1) == 0) {
        in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
        in_stack_00000018 = in_stack_00000058;
        uStack0000000000000024 = uStack0000000000000064;
        uStack0000000000000020 = uStack0000000000000060;
        lVar7 = FUN_05d466d0();
        plVar11 = *(long **)(unaff_x19 + 0x78);
        in_stack_00000078 = lVar7;
        if (plVar11 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
        if ((lVar7 != 0) &&
           (lVar4 = thunk_FUN_03010710(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar4 == 0)) {
          uVar5 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                            ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar5,0);
        }
        if (*(uint *)(plVar11 + 3) <= unaff_w22) {
LAB_05d465f8:
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar11[(long)(int)unaff_w22 + 4] = lVar7;
        thunk_FUN_03048534(plVar11 + (long)(int)unaff_w22 + 4,lVar7);
      }
      uStack000000000000000c = unaff_w22;
      uVar5 = thunk_FUN_0301043c(*unaff_x28,(long)&stack0x00000008 + 4);
      uStack0000000000000008 = (uint)unaff_x21;
      uVar6 = thunk_FUN_0301043c(*unaff_x28,&stack0x00000008);
      FUN_059725f8(*(undefined8 *)PTR_DAT_06fb90d8,uVar5,uVar6,0);
      if (*(long *)(unaff_x19 + 0x40) == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
      uVar5 = OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer
                        (*(long *)(unaff_x19 + 0x40),unaff_w22,0);
      plVar11 = *(long **)(unaff_x19 + 0x38);
      uVar2 = (int)uVar5;
      if (unaff_w22 != 0) {
        uVar2 = unaff_s10;
      }
      if (plVar11 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 9) * 0x10 + 0x138);
            goto LAB_05d464b0;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_02feb5b8(plVar11,*unaff_x26,9);
LAB_05d464b0:
      (*(code *)*puVar3)(plVar11,unaff_x21 & 0xffffffff,&stack0x00000030,puVar3[1]);
      if (in_stack_00000078 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
      FUN_068f5d7c(in_stack_00000078,0);
      uVar5 = FUN_05d46890(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                           uStack0000000000000030,uStack0000000000000034,in_stack_00000038,uVar5,
                           uVar2);
      lVar7 = in_stack_00000078;
      uVar6 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb90a0);
      FUN_05d4724c(uVar6,unaff_w22,unaff_x21 & 0xffffffff,lVar7,uVar5,0);
      lVar7 = *(long *)(unaff_x19 + 0x68);
      if (lVar7 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
      lVar4 = *(long *)(lVar7 + 0x10);
      lVar9 = *unaff_x29;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar4 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        puVar3 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        *puVar3 = uVar6;
        thunk_FUN_03048534(puVar3,uVar6);
      }
      else {
        FUN_044302e8(lVar7,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x21 == 0x1a) {
      FUN_05d46af8();
      lVar7 = *(long *)(unaff_x19 + 0x58);
      *(undefined1 *)(unaff_x19 + 0x81) = 1;
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        return;
      }
OVRPlugin_OVRP_1_1_0___cctor:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar7 = *unaff_x27;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar7 = *unaff_x27;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (lVar7 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x21) goto LAB_05d465f8;
    unaff_w22 = *(uint *)(lVar7 + unaff_x21 * 4 + 0x20);
  } while( true );
}


