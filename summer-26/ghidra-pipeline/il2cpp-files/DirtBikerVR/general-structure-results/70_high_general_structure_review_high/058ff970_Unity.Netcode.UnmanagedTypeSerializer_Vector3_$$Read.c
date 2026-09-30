/*
FUNCTION_NAME: Unity.Netcode.UnmanagedTypeSerializer<Vector3>$$Read
ENTRY_POINT: 058ff970
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


void Unity_Netcode_UnmanagedTypeSerializer<Vector3>__Read(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  lVar5 = *param_1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == **(long **)(in_x10 + 0x998)) {
        puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_058ff9c8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_03ac43c4(param_1,**(long **)(in_x10 + 0x998),2);
LAB_058ff9c8:
  uVar6 = (*(code *)*puVar1)(param_1,puVar1[1]);
  if ((uVar6 & 1) == 0) {
    if (unaff_x21 == (long *)0x0) goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
    lVar5 = (**(code **)(*unaff_x21 + 0x188))();
    if (*(int *)(*(long *)PTR_DAT_08495800 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08495800);
    }
    lVar2 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957c8);
    if (lVar5 == lVar2) {
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
    lVar5 = (**(code **)(*unaff_x21 + 0x188))();
    if (*(int *)(*(long *)PTR_DAT_084957f8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957f8);
    }
    lVar2 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957b8);
    if (lVar5 == lVar2) {
      lVar5 = FUN_07f2efcc();
      if (unaff_x19[0x6c] == 0) goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
      if (lVar5 != *(long *)(unaff_x19[0x6c] + 0x2d0)) {
        lVar5 = (**(code **)(*unaff_x19 + 0x228))();
        if ((unaff_x19[0x6c] != 0) && (lVar5 != 0)) {
          FUN_07f431a4(lVar5,*(undefined8 *)(unaff_x19[0x6c] + 0x2d0));
          return;
        }
        goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
      }
    }
    lVar5 = (**(code **)(*unaff_x21 + 0x188))();
    if (*(int *)(*(long *)PTR_DAT_084957e0 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957e0);
    }
    lVar2 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957d0);
    if (lVar5 == lVar2) {
      if ((char)unaff_x19[0x65] != '\0') {
        if ((unaff_x19[0x6c] != 0) &&
           (plVar3 = *(long **)(unaff_x19[0x6c] + 0x2d0), plVar3 != (long *)0x0)) {
          lVar5 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08494f08) {
                puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                goto Normal_Realtime_UnreliableProperty<bool>__UpdateValue;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar1 = (undefined8 *)FUN_03ac43c4(plVar3,*(long *)PTR_DAT_08494f08,2);
Normal_Realtime_UnreliableProperty<bool>__UpdateValue:
                    /* WARNING: Could not recover jumptable at 0x058ffcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar1)(plVar3,0,puVar1[1]);
          return;
        }
Normal_Realtime_UnreliableProperty<bool>__ShouldWrite:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else {
      lVar5 = (**(code **)(*unaff_x21 + 0x188))();
      if (*(int *)(*(long *)PTR_DAT_084957f0 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957f0);
      }
      lVar2 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957c0);
      if (lVar5 == lVar2) {
        FUN_0590018c();
        return;
      }
      lVar5 = (**(code **)(*unaff_x21 + 0x188))();
      if (*(int *)(*(long *)PTR_DAT_084957e8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957e8);
      }
      lVar2 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957d8);
      if (lVar5 == lVar2) {
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


