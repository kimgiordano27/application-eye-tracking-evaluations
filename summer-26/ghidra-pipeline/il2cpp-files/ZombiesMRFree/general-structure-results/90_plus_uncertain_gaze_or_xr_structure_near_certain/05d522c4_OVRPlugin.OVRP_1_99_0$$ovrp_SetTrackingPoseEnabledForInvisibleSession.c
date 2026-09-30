/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_SetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 05d522c4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin_OVRP_1_99_0__ovrp_SetTrackingPoseEnabledForInvisibleSession(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  long *in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long *in_stack_000000d0;
  ulong in_stack_000000d8;
  long *in_stack_000000e0;
  long *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  if ((DAT_07398bd4 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb33c8);
    FUN_02fe925c(PTR_DAT_06fb94b0);
    FUN_02fe925c(PTR_DAT_06f80828);
    FUN_02fe925c(PTR_DAT_06f7a4c8);
    FUN_02fe925c(PTR_DAT_06fb33d8);
    FUN_02fe925c(PTR_DAT_06fb33e0);
    FUN_02fe925c(PTR_DAT_06fb33e8);
    FUN_02fe925c(PTR_DAT_06f80868);
    FUN_02fe925c(PTR_DAT_06f6df30);
    FUN_02fe925c(PTR_DAT_06fb33f0);
    FUN_02fe925c(PTR_DAT_06fb33f8);
    FUN_02fe925c(PTR_DAT_06f80908);
    FUN_02fe925c(PTR_DAT_06f6df20);
    FUN_02fe925c(PTR_DAT_06f6d6a0);
    FUN_02fe925c(PTR_DAT_06fb94a8);
    DAT_07398bd4 = 1;
  }
  puVar1 = PTR_DAT_06fb94b0;
  in_stack_000000f0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = (long *)0x0;
  in_stack_000000e8 = (long *)0x0;
  in_stack_000000e0 = (long *)0x0;
  if ((param_1 == 0) || (iVar6 = FUN_052bc2fc(param_1,*(undefined8 *)PTR_DAT_06fb94b0), iVar6 == 0))
  {
    return 0;
  }
  uVar7 = FUN_052bc2fc(param_1,*(undefined8 *)puVar1);
  lVar8 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06fb94a8,uVar7);
  FUN_052bca5c(&stack0x000000a0,param_1,*(undefined8 *)PTR_DAT_06fb33c8);
  puVar3 = PTR_DAT_06fb33e0;
  puVar2 = PTR_DAT_06f80868;
  puVar1 = PTR_DAT_06f6d6a0;
  uVar15 = 0;
  in_stack_000000d8 = in_stack_000000a8;
  in_stack_000000d0 = in_stack_000000a0;
  in_stack_000000e8 = in_stack_000000b8;
  in_stack_000000e0 = in_stack_000000b0;
  in_stack_000000f0 = in_stack_000000c0;
  do {
    uVar9 = FUN_055c9450(&stack0x000000d0,*(undefined8 *)puVar3);
    plVar5 = in_stack_000000e8;
    plVar4 = in_stack_000000e0;
    if ((uVar9 & 1) == 0) {
      FUN_055c9570(&stack0x000000d0,*(undefined8 *)PTR_DAT_06fb33d8);
      return lVar8;
    }
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar10 = thunk_FUN_02fe6234(in_stack_000000e8,0);
    uVar14 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar14 = FUN_05afde1c(uVar14,0);
    uVar9 = FUN_05b0716c(uVar10,uVar14,0);
    if ((uVar9 & 1) == 0) {
      uVar10 = thunk_FUN_02fe6234(plVar5,0);
      uVar14 = *(undefined8 *)PTR_DAT_06f80908;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar14 = FUN_05afde1c(uVar14,0);
      uVar9 = FUN_05b0716c(uVar10,uVar14,0);
      if ((uVar9 & 1) == 0) {
        uVar10 = thunk_FUN_02fe6234(plVar5,0);
        uVar14 = *(undefined8 *)PTR_DAT_06f80828;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar14 = FUN_05afde1c(uVar14,0);
        uVar9 = FUN_05b0716c(uVar10,uVar14,0);
        if ((uVar9 & 1) == 0) {
          thunk_FUN_03037804(PTR_DAT_06f6d5c8);
          uVar10 = thunk_FUN_0301080c();
          uVar14 = thunk_FUN_03037804(PTR_DAT_06fb94b8);
          FUN_05b27038(uVar10,uVar14,0);
          uVar14 = thunk_FUN_03037804(PTR_DAT_06fb94c0);
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar10,uVar14);
        }
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)PTR_DAT_06f7a4c8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe9884(plVar5);
        }
        puVar12 = (undefined8 *)thunk_FUN_03010960(plVar5);
        uVar10 = *puVar12;
        in_stack_000000a0 = plVar4;
        thunk_FUN_03048534(&stack0x000000a0,plVar4);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
        in_stack_000000b0 = (long *)0x0;
        in_stack_000000c0 = uVar10;
        thunk_FUN_03048534(&stack0x000000b0,0);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        lVar13 = lVar8 + (long)(int)uVar15 * 0x28;
        *(undefined8 *)(lVar13 + 0x40) = in_stack_000000c0;
        *(ulong *)(lVar13 + 0x28) = in_stack_000000a8;
        *(long **)(lVar13 + 0x20) = in_stack_000000a0;
        *(long **)(lVar13 + 0x38) = in_stack_000000b8;
        *(long **)(lVar13 + 0x30) = in_stack_000000b0;
        thunk_FUN_03048534(lVar13 + 0x20,0);
      }
      else {
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*plVar5 != *(long *)PTR_DAT_06f6df20) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe9884(plVar5);
        }
        in_stack_000000a0 = plVar4;
        thunk_FUN_03048534(&stack0x000000a0,plVar4);
        in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
        in_stack_000000b0 = plVar5;
        thunk_FUN_03048534(&stack0x000000b0,plVar5);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        in_stack_000000c0 = 0;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        lVar13 = lVar8 + (long)(int)uVar15 * 0x28;
        *(undefined8 *)(lVar13 + 0x40) = 0;
        *(ulong *)(lVar13 + 0x28) = in_stack_000000a8;
        *(long **)(lVar13 + 0x20) = in_stack_000000a0;
        *(long **)(lVar13 + 0x38) = in_stack_000000b8;
        *(long **)(lVar13 + 0x30) = in_stack_000000b0;
        thunk_FUN_03048534(lVar13 + 0x20,0);
      }
    }
    else {
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = (long *)0x0;
      in_stack_000000b8 = (long *)0x0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)PTR_DAT_06f6df30 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(plVar5);
      }
      puVar11 = (undefined4 *)thunk_FUN_03010960(plVar5);
      uVar7 = *puVar11;
      in_stack_000000a0 = plVar4;
      thunk_FUN_03048534(&stack0x000000a0,plVar4);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
      in_stack_000000b8 = (long *)CONCAT44(in_stack_000000b8._4_4_,uVar7);
      in_stack_000000b0 = (long *)0x0;
      thunk_FUN_03048534(&stack0x000000b0,0);
      in_stack_000000c0 = 0;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar13 = lVar8 + (long)(int)uVar15 * 0x28;
      *(undefined8 *)(lVar13 + 0x40) = 0;
      *(ulong *)(lVar13 + 0x28) = in_stack_000000a8;
      *(long **)(lVar13 + 0x20) = in_stack_000000a0;
      *(long **)(lVar13 + 0x38) = in_stack_000000b8;
      *(long **)(lVar13 + 0x30) = in_stack_000000b0;
      thunk_FUN_03048534(lVar13 + 0x20,0);
    }
    uVar15 = uVar15 + 1;
  } while( true );
}


