/*
FUNCTION_NAME: Unity.Netcode.UnmanagedTypeSerializer<Vector3>$$WriteDelta
ENTRY_POINT: 058ff994
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Netcode_UnmanagedTypeSerializer<Vector3>__WriteDelta
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long in_x9;
  int *in_x10;
  int *piVar7;
  long in_x11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_03ac43c4();
      goto LAB_058ff9c8;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
LAB_058ff9c8:
  uVar2 = (*(code *)*puVar1)();
  if ((uVar2 & 1) == 0) {
    if (unaff_x21 == (long *)0x0) goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
    lVar3 = (**(code **)(*unaff_x21 + 0x188))();
    if (*(int *)(*(long *)PTR_DAT_08495800 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08495800);
    }
    lVar4 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957c8);
    if (lVar3 == lVar4) {
      plVar5 = (long *)FUN_07f2efcc();
      if (unaff_x19[0x6c] == 0) goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
      plVar6 = *(long **)(unaff_x19[0x6c] + 0x2d0);
      if (plVar5 != plVar6) {
        if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x058ffa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x268))(plVar6,*(undefined8 *)(*plVar6 + 0x270));
          return;
        }
        goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
      }
    }
    lVar3 = (**(code **)(*unaff_x21 + 0x188))();
    if (*(int *)(*(long *)PTR_DAT_084957f8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957f8);
    }
    lVar4 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957b8);
    if (lVar3 == lVar4) {
      lVar3 = FUN_07f2efcc();
      if (unaff_x19[0x6c] == 0) goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
      if (lVar3 != *(long *)(unaff_x19[0x6c] + 0x2d0)) {
        lVar3 = (**(code **)(*unaff_x19 + 0x228))();
        if ((unaff_x19[0x6c] != 0) && (lVar3 != 0)) {
          FUN_07f431a4(lVar3,*(undefined8 *)(unaff_x19[0x6c] + 0x2d0));
          return;
        }
        goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
      }
    }
    lVar3 = (**(code **)(*unaff_x21 + 0x188))();
    if (*(int *)(*(long *)PTR_DAT_084957e0 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957e0);
    }
    lVar4 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957d0);
    if (lVar3 == lVar4) {
      if ((char)unaff_x19[0x65] != '\0') {
        if ((unaff_x19[0x6c] != 0) &&
           (plVar5 = *(long **)(unaff_x19[0x6c] + 0x2d0), plVar5 != (long *)0x0)) {
          lVar3 = *plVar5;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08494f08) {
                puVar1 = (undefined8 *)(lVar3 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                goto Normal_Realtime_UnreliableProperty<bool>__UpdateValue;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar1 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)PTR_DAT_08494f08,2);
Normal_Realtime_UnreliableProperty<bool>__UpdateValue:
                    /* WARNING: Could not recover jumptable at 0x058ffcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar1)(plVar5,0,puVar1[1]);
          return;
        }
Normal_Realtime_UnreliableProperty<bool>__ShouldWrite:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else {
      lVar3 = (**(code **)(*unaff_x21 + 0x188))();
      if (*(int *)(*(long *)PTR_DAT_084957f0 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957f0);
      }
      lVar4 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957c0);
      if (lVar3 == lVar4) {
        FUN_0590018c();
        return;
      }
      lVar3 = (**(code **)(*unaff_x21 + 0x188))();
      if (*(int *)(*(long *)PTR_DAT_084957e8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957e8);
      }
      lVar4 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957d8);
      if (lVar3 == lVar4) {
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


