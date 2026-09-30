/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserEyeDepth
ENTRY_POINT: 05d46498
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


void OVRPlugin_OVRP_1_1_0__ovrp_SetUserEyeDepth(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  ulong unaff_x21;
  uint unaff_w22;
  long *plVar10;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 unaff_d8;
  ulong unaff_d9;
  uint unaff_s10;
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
  
code_r0x05d46498:
  puVar2 = (undefined8 *)FUN_02feb5b8(param_1,param_2,param_3);
  param_1 = unaff_x24;
  do {
    (*(code *)*puVar2)(param_1,unaff_x21 & 0xffffffff,&stack0x00000030,puVar2[1]);
    if (in_stack_00000078 == 0) {
OVRPlugin_OVRP_1_1_0___cctor:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_068f5d7c(in_stack_00000078,0);
    uVar3 = FUN_05d46890(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                         uStack0000000000000030,uStack0000000000000034,in_stack_00000038,unaff_d8,
                         unaff_d9);
    lVar5 = in_stack_00000078;
    uVar4 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb90a0);
    FUN_05d4724c(uVar4,unaff_w22,unaff_x21 & 0xffffffff,lVar5,uVar3,0);
    lVar5 = *(long *)(unaff_x19 + 0x68);
    if (lVar5 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar8 = *unaff_x29;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      puVar2 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      *puVar2 = uVar4;
      thunk_FUN_03048534(puVar2,uVar4);
    }
    else {
      FUN_044302e8(lVar5,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
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
    plVar10 = *(long **)(unaff_x19 + 0x38);
    if (plVar10 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar9 + 9) * 0x10 + 0x138);
          goto LAB_05d46358;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8(plVar10,*unaff_x26,9);
LAB_05d46358:
    (*(code *)*puVar2)(plVar10,unaff_w22,&stack0x00000050,puVar2[1]);
    uVar7 = FUN_05d46608();
    if ((uVar7 & 1) == 0) {
      in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_00000018 = in_stack_00000058;
      uStack0000000000000024 = uStack0000000000000064;
      uStack0000000000000020 = uStack0000000000000060;
      lVar5 = FUN_05d466d0();
      plVar10 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000078 = lVar5;
      if (plVar10 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_03010710(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
        uVar3 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                          ();
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar3,0);
      }
      if (*(uint *)(plVar10 + 3) <= unaff_w22) {
LAB_05d465f8:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      plVar10[(long)(int)unaff_w22 + 4] = lVar5;
      thunk_FUN_03048534(plVar10 + (long)(int)unaff_w22 + 4,lVar5);
    }
    uStack000000000000000c = unaff_w22;
    uVar3 = thunk_FUN_0301043c(*unaff_x28,(long)&stack0x00000008 + 4);
    uStack0000000000000008 = (uint)unaff_x21;
    uVar4 = thunk_FUN_0301043c(*unaff_x28,&stack0x00000008);
    FUN_059725f8(*(undefined8 *)PTR_DAT_06fb90d8,uVar3,uVar4,0);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
    unaff_d8 = OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer
                         (*(long *)(unaff_x19 + 0x40),unaff_w22,0);
    param_1 = *(long **)(unaff_x19 + 0x38);
    uVar1 = (uint)unaff_d8;
    if (unaff_w22 != 0) {
      uVar1 = unaff_s10;
    }
    unaff_d9 = (ulong)uVar1;
    if (param_1 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
    lVar5 = *param_1;
    param_2 = *unaff_x26;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 == 0) break;
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar9 + -2) != param_2) {
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
      if (uVar7 == 0) goto LAB_05d46490;
    }
    puVar2 = (undefined8 *)(lVar5 + (long)(*piVar9 + 9) * 0x10 + 0x138);
  } while( true );
LAB_05d46490:
  param_3 = 9;
  unaff_x24 = param_1;
  goto code_r0x05d46498;
}


