/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeHeight
ENTRY_POINT: 05d46514
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeHeight(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  ulong unaff_x21;
  uint unaff_w22;
  long *plVar11;
  long unaff_x24;
  undefined8 unaff_x25;
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
  
  while( true ) {
    uVar4 = thunk_FUN_0301080c(param_1);
    FUN_05d4724c(uVar4,unaff_w22,unaff_x21 & 0xffffffff,unaff_x24,unaff_x25,0);
    lVar5 = *(long *)(unaff_x19 + 0x68);
    if (lVar5 == 0) break;
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar9 = *unaff_x29;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      *puVar7 = uVar4;
      thunk_FUN_03048534(puVar7,uVar4);
    }
    else {
      FUN_044302e8(lVar5,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x1a) {
        FUN_05d46af8();
        lVar5 = *(long *)(unaff_x19 + 0x58);
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
          return;
        }
        goto OVRPlugin_OVRP_1_1_0___cctor;
      }
      lVar5 = *unaff_x27;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar5 = *unaff_x27;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar5 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_05d465f8;
      unaff_w22 = *(uint *)(lVar5 + unaff_x21 * 4 + 0x20);
    } while ((unaff_w22 == 0xffffffff) ||
            ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
    plVar11 = *(long **)(unaff_x19 + 0x38);
    if (plVar11 == (long *)0x0) break;
    lVar5 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 9) * 0x10 + 0x138);
          goto LAB_05d46358;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02feb5b8(plVar11,*unaff_x26,9);
LAB_05d46358:
    (*(code *)*puVar7)(plVar11,unaff_w22,&stack0x00000050,puVar7[1]);
    uVar8 = FUN_05d46608();
    if ((uVar8 & 1) == 0) {
      in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_00000018 = in_stack_00000058;
      uStack0000000000000024 = uStack0000000000000064;
      uStack0000000000000020 = uStack0000000000000060;
      lVar5 = FUN_05d466d0();
      plVar11 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000078 = lVar5;
      if (plVar11 == (long *)0x0) break;
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_03010710(lVar5,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0)) {
        uVar4 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                          ();
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar4,0);
      }
      if (*(uint *)(plVar11 + 3) <= unaff_w22) {
LAB_05d465f8:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      plVar11[(long)(int)unaff_w22 + 4] = lVar5;
      thunk_FUN_03048534(plVar11 + (long)(int)unaff_w22 + 4,lVar5);
    }
    uStack000000000000000c = unaff_w22;
    uVar4 = thunk_FUN_0301043c(*unaff_x28,(long)&stack0x00000008 + 4);
    uStack0000000000000008 = (uint)unaff_x21;
    uVar3 = thunk_FUN_0301043c(*unaff_x28,&stack0x00000008);
    FUN_059725f8(*(undefined8 *)PTR_DAT_06fb90d8,uVar4,uVar3,0);
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    uVar4 = OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer(*(long *)(unaff_x19 + 0x40),unaff_w22,0);
    plVar11 = *(long **)(unaff_x19 + 0x38);
    uVar2 = (int)uVar4;
    if (unaff_w22 != 0) {
      uVar2 = unaff_s10;
    }
    if (plVar11 == (long *)0x0) break;
    lVar5 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 9) * 0x10 + 0x138);
          goto LAB_05d464b0;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02feb5b8(plVar11,*unaff_x26,9);
LAB_05d464b0:
    (*(code *)*puVar7)(plVar11,unaff_x21 & 0xffffffff,&stack0x00000030,puVar7[1]);
    if (in_stack_00000078 == 0) break;
    FUN_068f5d7c(in_stack_00000078,0);
    unaff_x25 = FUN_05d46890(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                             uStack0000000000000030,uStack0000000000000034,in_stack_00000038,uVar4,
                             uVar2);
    param_1 = *(undefined8 *)PTR_DAT_06fb90a0;
    unaff_x24 = in_stack_00000078;
  }
OVRPlugin_OVRP_1_1_0___cctor:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


