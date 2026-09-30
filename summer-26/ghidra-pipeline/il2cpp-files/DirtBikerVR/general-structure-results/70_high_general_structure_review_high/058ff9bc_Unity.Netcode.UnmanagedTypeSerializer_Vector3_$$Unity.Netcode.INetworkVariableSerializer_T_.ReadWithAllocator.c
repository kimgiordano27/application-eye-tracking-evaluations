/*
FUNCTION_NAME: Unity.Netcode.UnmanagedTypeSerializer<Vector3>$$Unity.Netcode.INetworkVariableSerializer<T>.ReadWithAllocator
ENTRY_POINT: 058ff9bc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_Netcode_UnmanagedTypeSerializer<Vector3>__Unity_Netcode_INetworkVariableSerializer<T>_ReadWithAllocator
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  int in_w9;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  uVar1 = (**(code **)(param_1 + (long)(in_w9 + 2) * 0x10 + 0x138))();
  if ((uVar1 & 1) == 0) {
    if (unaff_x21 == (long *)0x0) goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
    lVar2 = (**(code **)(*unaff_x21 + 0x188))();
    if (*(int *)(*(long *)PTR_DAT_08495800 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08495800);
    }
    lVar3 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957c8);
    if (lVar2 == lVar3) {
      plVar4 = (long *)FUN_07f2efcc();
      if (unaff_x19[0x6c] == 0) goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
      plVar5 = *(long **)(unaff_x19[0x6c] + 0x2d0);
      if (plVar4 != plVar5) {
        if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x058ffa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x268))(plVar5,*(undefined8 *)(*plVar5 + 0x270));
          return;
        }
        goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
      }
    }
    lVar2 = (**(code **)(*unaff_x21 + 0x188))();
    if (*(int *)(*(long *)PTR_DAT_084957f8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957f8);
    }
    lVar3 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957b8);
    if (lVar2 == lVar3) {
      lVar2 = FUN_07f2efcc();
      if (unaff_x19[0x6c] == 0) goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
      if (lVar2 != *(long *)(unaff_x19[0x6c] + 0x2d0)) {
        lVar2 = (**(code **)(*unaff_x19 + 0x228))();
        if ((unaff_x19[0x6c] != 0) && (lVar2 != 0)) {
          FUN_07f431a4(lVar2,*(undefined8 *)(unaff_x19[0x6c] + 0x2d0));
          return;
        }
        goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
      }
    }
    lVar2 = (**(code **)(*unaff_x21 + 0x188))();
    if (*(int *)(*(long *)PTR_DAT_084957e0 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957e0);
    }
    lVar3 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957d0);
    if (lVar2 == lVar3) {
      if ((char)unaff_x19[0x65] != '\0') {
        if ((unaff_x19[0x6c] != 0) &&
           (plVar4 = *(long **)(unaff_x19[0x6c] + 0x2d0), plVar4 != (long *)0x0)) {
          lVar2 = *plVar4;
          uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar1 != 0) {
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08494f08) {
                puVar6 = (undefined8 *)(lVar2 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                goto Normal_Realtime_UnreliableProperty<bool>__UpdateValue;
              }
              uVar1 = uVar1 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar1 != 0);
          }
          puVar6 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)PTR_DAT_08494f08,2);
Normal_Realtime_UnreliableProperty<bool>__UpdateValue:
                    /* WARNING: Could not recover jumptable at 0x058ffcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar6)(plVar4,0,puVar6[1]);
          return;
        }
Normal_Realtime_UnreliableProperty<bool>__ShouldWrite:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else {
      lVar2 = (**(code **)(*unaff_x21 + 0x188))();
      if (*(int *)(*(long *)PTR_DAT_084957f0 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957f0);
      }
      lVar3 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957c0);
      if (lVar2 == lVar3) {
        FUN_0590018c();
        return;
      }
      lVar2 = (**(code **)(*unaff_x21 + 0x188))();
      if (*(int *)(*(long *)PTR_DAT_084957e8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957e8);
      }
      lVar3 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957d8);
      if (lVar2 == lVar3) {
        if ((char)unaff_x19[0x65] != '\0') {
          (**(code **)(*unaff_x19 + 0xaa8))();
        }
        FUN_0590018c();
        if (unaff_x19[0x6c] != 0) {
          FUN_058d6988(unaff_x19[0x6c],0,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xd8));
          return;
        }
        goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
      }
    }
  }
  return;
}


