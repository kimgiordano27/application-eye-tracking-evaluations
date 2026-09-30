/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector2>
ENTRY_POINT: 03bf9700
PROGRAM: waitwhat-libil2cpp.so
SCORE: 161
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector2>(ulong param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar9;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined4 in_stack_00000020;
  long *in_stack_00000028;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_031c09d4();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xb) == '\0') {
Unity_Services_Authentication_PlayerAccounts_WebRequest__SendAsync<object>:
    uVar4 = 0;
    uVar7 = 2;
    goto LAB_03bf9aa4;
  }
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar9 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
  lVar1 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar1 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  lVar9 = *(long *)(unaff_x21 + 0x38);
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xc) != '\0') {
    plVar2 = (long *)FUN_039fade0(*(undefined8 *)(lVar9 + 0x18));
    if (plVar2 == (long *)0x0) goto LAB_03bf9b44;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*unaff_x20,(int)unaff_x20[1],0,0,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) != 0) {
      uVar4 = 0;
      uVar7 = 1;
      goto LAB_03bf9aa4;
    }
    lVar9 = *(long *)(unaff_x21 + 0x38);
  }
  lVar1 = *(long *)(lVar9 + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar9 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
  lVar1 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar1 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  if (**(char **)(lVar1 + 0xb8) == '\0') {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar4 = FUN_0593e698(uVar4,0);
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4(lVar1);
    }
    in_stack_00000018 = *unaff_x20;
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000020 = (undefined4)unaff_x20[1];
    in_stack_00000008 = lVar1;
    uVar5 = thunk_FUN_03196ed8(&stack0x00000008,0);
    uVar3 = FUN_0594875c(uVar4,uVar5,0);
    if ((uVar3 & 1) == 0) goto LAB_03bf9a58;
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    in_stack_00000018 = *unaff_x20;
    in_stack_00000020 = (undefined4)unaff_x20[1];
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000008 = lVar1;
    uVar4 = thunk_FUN_03196ed8(&stack0x00000008,0);
    uVar3 = FUN_06a76c38(uVar4,0);
    if ((uVar3 & 1) == 0)
    goto Unity_Services_Authentication_PlayerAccounts_WebRequest__SendAsync<object>;
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    in_stack_00000018 = *unaff_x20;
    in_stack_00000020 = (undefined4)unaff_x20[1];
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000008 = lVar1;
    uVar4 = thunk_FUN_03196ed8(&stack0x00000008,0);
    if (*(int *)(*(long *)PTR_DAT_070f29c8 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)PTR_DAT_070f29c8);
    }
    plVar2 = (long *)FUN_06a68cb0(uVar4,0);
    if (plVar2 != (long *)0x0) {
      in_stack_00000008 = *unaff_x20;
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)unaff_x20[1]);
      in_stack_00000028 =
           (long *)thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38),
                                      &stack0x00000008);
      lVar1 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_070f2a30) {
            puVar6 = (undefined8 *)(lVar1 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_03bf9acc;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_031c0d08(plVar2,*(long *)PTR_DAT_070f2a30,1);
LAB_03bf9acc:
      (*(code *)*puVar6)(plVar2);
      plVar2 = in_stack_00000028;
      lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_031c09d4(lVar1);
      }
      if (plVar2 == (long *)0x0) {
LAB_03bf9b44:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(long *)(*plVar2 + 0x40) != *(long *)(lVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03189058(plVar2);
      }
      plVar2 = (long *)thunk_FUN_031c3ef0();
      uVar7 = 0;
      uVar4 = 1;
      lVar1 = plVar2[1];
      *unaff_x20 = *plVar2;
      *(int *)(unaff_x20 + 1) = (int)lVar1;
      goto LAB_03bf9aa4;
    }
  }
  else {
LAB_03bf9a58:
    if (*(int *)(*(long *)PTR_DAT_070f29c8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar1 = FUN_03bc068c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar1 != 0) {
      FUN_03ba7a50();
      uVar7 = 0;
      uVar4 = 1;
      goto LAB_03bf9aa4;
    }
  }
  uVar4 = 0;
  uVar7 = 3;
LAB_03bf9aa4:
  *unaff_x19 = uVar7;
  return uVar4;
}


