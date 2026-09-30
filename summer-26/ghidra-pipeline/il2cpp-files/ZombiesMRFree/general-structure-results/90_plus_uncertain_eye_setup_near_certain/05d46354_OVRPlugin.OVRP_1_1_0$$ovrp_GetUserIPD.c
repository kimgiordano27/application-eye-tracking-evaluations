/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserIPD
ENTRY_POINT: 05d46354
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_12
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  ulong unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  long *plVar11;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined4 unaff_s10;
  undefined4 uStack0000000000000008;
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
  
code_r0x05d46354:
  puVar8 = (undefined8 *)(param_1 + 0x138);
  do {
    (*(code *)*puVar8)(unaff_x23,unaff_w22,&stack0x00000050,puVar8[1]);
    uVar3 = FUN_05d46608();
    if ((uVar3 & 1) == 0) {
      in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_00000018 = in_stack_00000058;
      uStack0000000000000024 = uStack0000000000000064;
      uStack0000000000000020 = uStack0000000000000060;
      lVar4 = FUN_05d466d0();
      plVar11 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000078 = lVar4;
      if (plVar11 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0)) {
        uVar6 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                          ();
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar6,0);
      }
      if (*(uint *)(plVar11 + 3) <= unaff_w22) {
LAB_05d465f8:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      plVar11[(long)(int)unaff_w22 + 4] = lVar4;
      thunk_FUN_03048534(plVar11 + (long)(int)unaff_w22 + 4,lVar4);
    }
    uStack000000000000000c = unaff_w22;
    uVar6 = thunk_FUN_0301043c(*unaff_x28,(long)&stack0x00000008 + 4);
    uStack0000000000000008 = (undefined4)unaff_x21;
    uVar7 = thunk_FUN_0301043c(*unaff_x28,&stack0x00000008);
    FUN_059725f8(*(undefined8 *)PTR_DAT_06fb90d8,uVar6,uVar7,0);
    if (*(long *)(unaff_x19 + 0x40) == 0) {
OVRPlugin_OVRP_1_1_0___cctor:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar6 = OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer(*(long *)(unaff_x19 + 0x40),unaff_w22,0);
    plVar11 = *(long **)(unaff_x19 + 0x38);
    uVar2 = (int)uVar6;
    if (unaff_w22 != 0) {
      uVar2 = unaff_s10;
    }
    if (plVar11 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
    lVar4 = *plVar11;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar8 = (undefined8 *)(lVar4 + (long)(*piVar10 + 9) * 0x10 + 0x138);
          goto LAB_05d464b0;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8(plVar11,*unaff_x26,9);
LAB_05d464b0:
    (*(code *)*puVar8)(plVar11,unaff_x21 & 0xffffffff,&stack0x00000030,puVar8[1]);
    if (in_stack_00000078 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
    FUN_068f5d7c(in_stack_00000078,0);
    uVar6 = FUN_05d46890(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                         uStack0000000000000030,uStack0000000000000034,in_stack_00000038,uVar6,uVar2
                        );
    lVar4 = in_stack_00000078;
    uVar7 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb90a0);
    FUN_05d4724c(uVar7,unaff_w22,unaff_x21 & 0xffffffff,lVar4,uVar6,0);
    lVar4 = *(long *)(unaff_x19 + 0x68);
    if (lVar4 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar9 = *unaff_x29;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      puVar8 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *puVar8 = uVar7;
      thunk_FUN_03048534(puVar8,uVar7);
    }
    else {
      FUN_044302e8(lVar4,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x1a) {
        FUN_05d46af8();
        lVar4 = *(long *)(unaff_x19 + 0x58);
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
          return;
        }
        goto OVRPlugin_OVRP_1_1_0___cctor;
      }
      lVar4 = *unaff_x27;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar4 = *unaff_x27;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (lVar4 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_05d465f8;
      unaff_w22 = *(uint *)(lVar4 + unaff_x21 * 4 + 0x20);
    } while ((unaff_w22 == 0xffffffff) ||
            ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
    unaff_x23 = *(long **)(unaff_x19 + 0x38);
    if (unaff_x23 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
    param_1 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          param_1 = param_1 + (long)(*piVar10 + 9) * 0x10;
          goto code_r0x05d46354;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8(unaff_x23,*unaff_x26,9);
  } while( true );
}


