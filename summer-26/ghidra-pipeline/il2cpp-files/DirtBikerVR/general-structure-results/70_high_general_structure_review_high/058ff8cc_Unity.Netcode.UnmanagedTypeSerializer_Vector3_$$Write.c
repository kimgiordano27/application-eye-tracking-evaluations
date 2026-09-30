/*
FUNCTION_NAME: Unity.Netcode.UnmanagedTypeSerializer<Vector3>$$Write
ENTRY_POINT: 058ff8cc
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


void Unity_Netcode_UnmanagedTypeSerializer<Vector3>__Write(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_084957d0);
  FUN_03a8a718(PTR_DAT_084957d8);
  FUN_03a8a718(PTR_DAT_084957e0);
  FUN_03a8a718(PTR_DAT_084957e8);
  FUN_03a8a718(PTR_DAT_084957f0);
  FUN_03a8a718(PTR_DAT_084957f8);
  FUN_03a8a718(PTR_DAT_08495800);
  FUN_03a8a718(PTR_DAT_08494f08);
  FUN_03a8a718(PTR_DAT_08491998);
  *(undefined1 *)(unaff_x22 + 0x22d) = 1;
  if (unaff_x19 != (long *)0x0) {
    FUN_05597288();
    plVar1 = (long *)FUN_058fd454();
    if (plVar1 != (long *)0x0) {
      lVar5 = *plVar1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08491998) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_058ff9c8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_03ac43c4(plVar1,*(long *)PTR_DAT_08491998,2);
LAB_058ff9c8:
      uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      if ((uVar6 & 1) == 0) {
        if (unaff_x21 == (long *)0x0) goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
        lVar5 = (**(code **)(*unaff_x21 + 0x188))();
        if (*(int *)(*(long *)PTR_DAT_08495800 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)PTR_DAT_08495800);
        }
        lVar3 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957c8);
        if (lVar5 == lVar3) {
          plVar1 = (long *)FUN_07f2efcc();
          if (unaff_x19[0x6c] == 0) goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
          plVar4 = *(long **)(unaff_x19[0x6c] + 0x2d0);
          if (plVar1 != plVar4) {
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
        lVar3 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957b8);
        if (lVar5 == lVar3) {
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
        lVar3 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957d0);
        if (lVar5 == lVar3) {
          if ((char)unaff_x19[0x65] != '\0') {
            if ((unaff_x19[0x6c] != 0) &&
               (plVar1 = *(long **)(unaff_x19[0x6c] + 0x2d0), plVar1 != (long *)0x0)) {
              lVar5 = *plVar1;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08494f08) {
                    puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                    goto Normal_Realtime_UnreliableProperty<bool>__UpdateValue;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined8 *)FUN_03ac43c4(plVar1,*(long *)PTR_DAT_08494f08,2);
Normal_Realtime_UnreliableProperty<bool>__UpdateValue:
                    /* WARNING: Could not recover jumptable at 0x058ffcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar2)(plVar1,0,puVar2[1]);
              return;
            }
            goto Normal_Realtime_UnreliableProperty<bool>__ShouldWrite;
          }
        }
        else {
          lVar5 = (**(code **)(*unaff_x21 + 0x188))();
          if (*(int *)(*(long *)PTR_DAT_084957f0 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957f0);
          }
          lVar3 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957c0);
          if (lVar5 == lVar3) {
            FUN_0590018c();
            return;
          }
          lVar5 = (**(code **)(*unaff_x21 + 0x188))();
          if (*(int *)(*(long *)PTR_DAT_084957e8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)PTR_DAT_084957e8);
          }
          lVar3 = FUN_0645fe94(*(undefined8 *)PTR_DAT_084957d8);
          if (lVar5 == lVar3) {
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
  }
Normal_Realtime_UnreliableProperty<bool>__ShouldWrite:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


