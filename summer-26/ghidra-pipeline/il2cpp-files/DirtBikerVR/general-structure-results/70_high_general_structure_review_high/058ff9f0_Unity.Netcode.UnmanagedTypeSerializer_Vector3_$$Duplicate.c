/*
FUNCTION_NAME: Unity.Netcode.UnmanagedTypeSerializer<Vector3>$$Duplicate
ENTRY_POINT: 058ff9f0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Netcode_UnmanagedTypeSerializer<Vector3>__Duplicate(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  lVar1 = (**(code **)(param_1 + 0x188))();
  if (*(int *)(*(long *)PTR_DAT_08495800 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)PTR_DAT_08495800);
  }
  lVar2 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957c8);
  if (lVar1 == lVar2) {
    plVar3 = (long *)FUN_07f2efcc();
    if (unaff_x19[0x6c] == 0) goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
    plVar4 = *(long **)(unaff_x19[0x6c] + 0x2d0);
    if (plVar3 != plVar4) {
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x058ffa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x268))(plVar4,*(undefined8 *)(*plVar4 + 0x270));
        return;
      }
      goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
    }
  }
  lVar1 = (**(code **)(*unaff_x21 + 0x188))();
  if (*(int *)(*(long *)PTR_DAT_084957f8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957f8);
  }
  lVar2 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957b8);
  if (lVar1 == lVar2) {
    lVar1 = FUN_07f2efcc();
    if (unaff_x19[0x6c] == 0) goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
    if (lVar1 != *(long *)(unaff_x19[0x6c] + 0x2d0)) {
      lVar1 = (**(code **)(*unaff_x19 + 0x228))();
      if ((unaff_x19[0x6c] != 0) && (lVar1 != 0)) {
        FUN_07f431a4(lVar1,*(undefined8 *)(unaff_x19[0x6c] + 0x2d0));
        return;
      }
      goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
    }
  }
  lVar1 = (**(code **)(*unaff_x21 + 0x188))();
  if (*(int *)(*(long *)PTR_DAT_084957e0 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957e0);
  }
  lVar2 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957d0);
  if (lVar1 == lVar2) {
    if ((char)unaff_x19[0x65] == '\0') {
      return;
    }
    if ((unaff_x19[0x6c] != 0) &&
       (plVar3 = *(long **)(unaff_x19[0x6c] + 0x2d0), plVar3 != (long *)0x0)) {
      lVar1 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08494f08) {
            puVar5 = (undefined8 *)(lVar1 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto Normal_Realtime_UnreliableProperty<bool>__UpdateValue;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4(plVar3,*(long *)PTR_DAT_08494f08,2);
Normal_Realtime_UnreliableProperty<bool>__UpdateValue:
                    /* WARNING: Could not recover jumptable at 0x058ffcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(plVar3,0,puVar5[1]);
      return;
    }
  }
  else {
    lVar1 = (**(code **)(*unaff_x21 + 0x188))();
    if (*(int *)(*(long *)PTR_DAT_084957f0 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957f0);
    }
    lVar2 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957c0);
    if (lVar1 == lVar2) {
      FUN_0590018c();
      return;
    }
    lVar1 = (**(code **)(*unaff_x21 + 0x188))();
    if (*(int *)(*(long *)PTR_DAT_084957e8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957e8);
    }
    lVar2 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957d8);
    if (lVar1 != lVar2) {
      return;
    }
    if ((char)unaff_x19[0x65] != '\0') {
      (**(code **)(*unaff_x19 + 0xaa8))();
    }
    FUN_0590018c();
    if (unaff_x19[0x6c] != 0) {
      FUN_058d6988(unaff_x19[0x6c],0,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xd8));
      return;
    }
  }
Normal_Realtime_UnreliableProperty<bool>__ShouldWrite:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


