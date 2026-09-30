/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetAppLatencyTimings
ENTRY_POINT: 05d46200
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_14;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_12
*/


void OVRPlugin_OVRP_1_1_0___ovrp_GetAppLatencyTimings(long *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  ulong uVar15;
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
  
  puVar11 = *(undefined4 **)(*param_1 + 0xb8);
  UnityEngine_UIElements_BaseVerticalCollectionView_Selection__AddIndex
            (*puVar11,puVar11[1],puVar11[2],puVar11[3],param_2,0);
  lVar6 = FUN_068f5db8();
  if (lVar6 != 0) {
    FUN_068f8b00(lVar6,*(undefined4 *)(unaff_x19 + 0x4c),0);
    lVar6 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb90c8);
    FUN_0442fb24(lVar6,0x1a,*(undefined8 *)PTR_DAT_06fb90c0);
    plVar16 = (long *)(unaff_x19 + 0x68);
    *plVar16 = lVar6;
    thunk_FUN_03048534(plVar16,lVar6);
    if (*plVar16 != 0) {
      uVar7 = FUN_04430510(*plVar16,*(undefined8 *)PTR_DAT_06fb90b8);
      *(undefined8 *)(unaff_x19 + 0x70) = uVar7;
      thunk_FUN_03048534();
      puVar5 = PTR_DAT_06fb90b0;
      puVar4 = PTR_DAT_06fb90a8;
      puVar3 = PTR_DAT_06fb4a40;
      uVar15 = 2;
      do {
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar6 = *(long *)puVar3;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
        if (lVar6 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
        if (*(uint *)(lVar6 + 0x18) <= uVar15) {
LAB_05d465f8:
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        uVar1 = *(uint *)(lVar6 + uVar15 * 4 + 0x20);
        if ((uVar1 != 0xffffffff) &&
           ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)uVar15 & 0x1f) & 1) != 0)) {
          plVar16 = *(long **)(unaff_x19 + 0x38);
          if (plVar16 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
          lVar6 = *plVar16;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x26) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 9) * 0x10 + 0x138);
                goto LAB_05d46358;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_02feb5b8(plVar16,*unaff_x26,9);
LAB_05d46358:
          (*(code *)*puVar8)(plVar16,uVar1,&stack0x00000050,puVar8[1]);
          uVar12 = FUN_05d46608();
          if ((uVar12 & 1) == 0) {
            in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
            in_stack_00000018 = in_stack_00000058;
            uStack0000000000000024 = uStack0000000000000064;
            uStack0000000000000020 = uStack0000000000000060;
            lVar6 = FUN_05d466d0();
            plVar16 = *(long **)(unaff_x19 + 0x78);
            in_stack_00000078 = lVar6;
            if (plVar16 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
            if ((lVar6 != 0) &&
               (lVar9 = thunk_FUN_03010710(lVar6,*(undefined8 *)(*plVar16 + 0x40)), lVar9 == 0)) {
              uVar7 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                                ();
                    /* WARNING: Subroutine does not return */
              FUN_02fe93c0(uVar7,0);
            }
            if (*(uint *)(plVar16 + 3) <= uVar1) goto LAB_05d465f8;
            plVar16[(long)(int)uVar1 + 4] = lVar6;
            thunk_FUN_03048534(plVar16 + (long)(int)uVar1 + 4,lVar6);
          }
          uStack000000000000000c = uVar1;
          uVar7 = thunk_FUN_0301043c(*(undefined8 *)puVar4,(long)&stack0x00000008 + 4);
          uStack0000000000000008 = (uint)uVar15;
          uVar10 = thunk_FUN_0301043c(*(undefined8 *)puVar4,&stack0x00000008);
          FUN_059725f8(*(undefined8 *)PTR_DAT_06fb90d8,uVar7,uVar10,0);
          if (*(long *)(unaff_x19 + 0x40) == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
          uVar7 = OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer
                            (*(long *)(unaff_x19 + 0x40),uVar1,0);
          plVar16 = *(long **)(unaff_x19 + 0x38);
          uVar2 = (int)uVar7;
          if (uVar1 != 0) {
            uVar2 = 0;
          }
          if (plVar16 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0___cctor;
          lVar6 = *plVar16;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x26) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 9) * 0x10 + 0x138);
                goto LAB_05d464b0;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_02feb5b8(plVar16,*unaff_x26,9);
LAB_05d464b0:
          (*(code *)*puVar8)(plVar16,uVar15 & 0xffffffff,&stack0x00000030,puVar8[1]);
          if (in_stack_00000078 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
          FUN_068f5d7c(in_stack_00000078,0);
          uVar7 = FUN_05d46890(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                               uStack0000000000000030,uStack0000000000000034,in_stack_00000038,uVar7
                               ,uVar2);
          lVar6 = in_stack_00000078;
          uVar10 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb90a0);
          FUN_05d4724c(uVar10,uVar1,uVar15 & 0xffffffff,lVar6,uVar7,0);
          lVar6 = *(long *)(unaff_x19 + 0x68);
          if (lVar6 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
          lVar9 = *(long *)(lVar6 + 0x10);
          lVar13 = *(long *)puVar5;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar9 == 0) goto OVRPlugin_OVRP_1_1_0___cctor;
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *puVar8 = uVar10;
            thunk_FUN_03048534(puVar8,uVar10);
          }
          else {
            FUN_044302e8(lVar6,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x1a);
      FUN_05d46af8();
      lVar6 = *(long *)(unaff_x19 + 0x58);
      *(undefined1 *)(unaff_x19 + 0x81) = 1;
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
        return;
      }
    }
  }
OVRPlugin_OVRP_1_1_0___cctor:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


