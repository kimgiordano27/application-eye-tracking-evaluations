/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_updated_t$$Dispose
ENTRY_POINT: 07927b60
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


void Unity_Services_Vivox_vx_evt_session_updated_t__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  undefined4 *unaff_x19;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  do {
    in_x9 = in_x9 + -1;
    piVar7 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_03ac43c4();
      goto LAB_07927b8c;
    }
    plVar3 = (long *)(in_x10 + 2);
    in_x10 = piVar7;
  } while (*plVar3 != param_3);
  puVar2 = (undefined8 *)(param_1 + (long)(*piVar7 + 3) * 0x10 + 0x138);
LAB_07927b8c:
  plVar3 = (long *)(*(code *)*puVar2)();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
                    /* try { // try from 07927bc4 to 07a27beb has its CatchHandler @ 07927d2c */
      if (*(long *)(piVar7 + -2) == *unaff_x25) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_07927bf0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03ac43c4(plVar3,*unaff_x25,0);
LAB_07927bf0:
  plVar3 = (long *)(*(code *)*puVar2)(0x3f000000,plVar3,puVar2[1]);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
                    /* try { // try from 07927c28 to 07a27c4f has its CatchHandler @ 07927d28 */
      if (*(long *)(piVar7 + -2) == *unaff_x25) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_07927c58;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03ac43c4(plVar3,*unaff_x25,2);
LAB_07927c58:
                    /* try { // try from 07927c5c to 07a27c6b has its CatchHandler @ 07927d1c */
  plVar3 = (long *)(*(code *)*puVar2)(0x40000000,plVar3,puVar2[1]);
  puVar1 = UnityEngine_Rendering_HighDefinition_FogControl___TypeInfo;
                    /* try { // try from 07927c6c to 07a27d03 has its CatchHandler @ 079276a0 */
  lVar5 = *(long *)UnityEngine_Rendering_HighDefinition_FogControl___TypeInfo;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar5 = *(long *)puVar1;
  }
  puVar2 = *(undefined8 **)(lVar5 + 0xb8);
  lVar8 = puVar2[2];
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar2 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar9 = *puVar2;
    lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)System_Runtime_Remoting_Messaging_Header___TypeInfo);
    FUN_04962b78(lVar8,uVar9,*(undefined8 *)TMPro_HighlightState___TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar4 = lVar8;
    thunk_FUN_03afed3c(plVar4,lVar8);
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *plVar3;
  lVar10 = *(long *)System_Net_HeaderVariantInfo___TypeInfo;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar10 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
        goto LAB_07927d4c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar5 = FUN_03ac43c4(plVar3);
LAB_07927d4c:
  lVar5 = thunk_FUN_03aa9644(*(undefined8 *)(lVar5 + 8),lVar10);
  plVar3 = (long *)(**(code **)(lVar5 + 8))(plVar3,lVar8,lVar5);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x25) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
        goto LAB_07927dc4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03ac43c4(plVar3,*unaff_x25,7);
LAB_07927dc4:
  lVar5 = (*(code *)*puVar2)(plVar3,0,puVar2[1]);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 = FUN_058b71ec(lVar5,*(undefined8 *)PTR_DAT_0848af78);
  uVar6 = FUN_0587c6c4(&stack0x00000018,*(undefined8 *)PTR_DAT_0848af70);
  if ((uVar6 & 1) == 0) {
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
    uVar9 = FUN_0587c704(&stack0x00000018,*(undefined8 *)PTR_DAT_0848af60);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_07925b38(uVar9,uVar9,&stack0x00000028);
    uVar9 = in_stack_00000028;
    puVar1 = PTR_DAT_084ada30;
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    *unaff_x19 = 0xfffffffe;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar9,*(undefined8 *)puVar1);
  }
  return;
}


