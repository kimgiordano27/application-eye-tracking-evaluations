/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_updated_t$$Dispose
ENTRY_POINT: 07927af4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_vx_evt_session_updated_t__Dispose(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  plVar3 = (long *)(*param_1)();
  uVar11 = *(undefined8 *)(unaff_x19 + 0xc);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)System_Net_HeaderInfo___TypeInfo);
  FUN_049639e4(uVar4,uVar11,*(undefined8 *)OVR_OpenVR_HmdQuad_t___TypeInfo,0);
  puVar1 = Unity_Hierarchy_HierarchySearchFilter___TypeInfo;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar7 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)Unity_Hierarchy_HierarchySearchFilter___TypeInfo) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto LAB_07927b8c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_03ac43c4(plVar3,*(long *)Unity_Hierarchy_HierarchySearchFilter___TypeInfo,3);
LAB_07927b8c:
  plVar3 = (long *)(*(code *)*puVar5)(plVar3,uVar4,puVar5[1]);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar7 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_07927bf0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar3,*(long *)puVar1,0);
LAB_07927bf0:
  plVar3 = (long *)(*(code *)*puVar5)(0x3f000000,plVar3,puVar5[1]);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar7 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_07927c58;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar3,*(long *)puVar1,2);
LAB_07927c58:
  plVar3 = (long *)(*(code *)*puVar5)(0x40000000,plVar3,puVar5[1]);
  puVar2 = UnityEngine_Rendering_HighDefinition_FogControl___TypeInfo;
  lVar7 = *(long *)UnityEngine_Rendering_HighDefinition_FogControl___TypeInfo;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar7 = *(long *)puVar2;
  }
  puVar5 = *(undefined8 **)(lVar7 + 0xb8);
  lVar10 = puVar5[2];
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar4 = *puVar5;
    lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)System_Runtime_Remoting_Messaging_Header___TypeInfo);
    FUN_04962b78(lVar10,uVar4,*(undefined8 *)TMPro_HighlightState___TypeInfo,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar6 = lVar10;
    thunk_FUN_03afed3c(plVar6,lVar10);
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar7 = *plVar3;
  lVar12 = *(long *)System_Net_HeaderVariantInfo___TypeInfo;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)(lVar12 + 0x20)) {
        lVar7 = lVar7 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
        goto LAB_07927d4c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  lVar7 = FUN_03ac43c4(plVar3);
LAB_07927d4c:
  lVar7 = thunk_FUN_03aa9644(*(undefined8 *)(lVar7 + 8),lVar12);
  plVar3 = (long *)(**(code **)(lVar7 + 8))(plVar3,lVar10,lVar7);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar7 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
        goto LAB_07927dc4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar3,*(long *)puVar1,7);
LAB_07927dc4:
  lVar7 = (*(code *)*puVar5)(plVar3,0,puVar5[1]);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 = FUN_058b71ec(lVar7,*(undefined8 *)PTR_DAT_0848af78);
  uVar8 = FUN_0587c6c4(&stack0x00000018,*(undefined8 *)PTR_DAT_0848af70);
  if ((uVar8 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    System_Array__InternalArray__ICollection_CopyTo<CopyMeshJobData>(unaff_x19 + 2,&stack0x00000018)
    ;
  }
  else {
    uVar4 = FUN_0587c704(&stack0x00000018,*(undefined8 *)PTR_DAT_0848af60);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_07925b38(uVar4,uVar4,&stack0x00000028);
    uVar4 = in_stack_00000028;
    puVar1 = PTR_DAT_084ada30;
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    *unaff_x19 = 0xfffffffe;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
  }
  return;
}


