/*
FUNCTION_NAME: Oculus.Interaction.Input.Compatibility.OVR.ReadOnlyHandJointPoses.<GetEnumerator>d__2$$System.Collections.Generic.IEnumerator<UnityEngine.Pose>.get_Current
ENTRY_POINT: 0524c444
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_Input_Compatibility_OVR_ReadOnlyHandJointPoses_<GetEnumerator>d__2__System_Collections_Generic_IEnumerator<UnityEngine_Pose>_get_Current
               (long *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x23;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *in_stack_00000030;
  
code_r0x0524c444:
  puVar1 = (undefined8 *)FUN_02f421d0(param_1,param_2,param_3);
  param_1 = unaff_x20;
  do {
    (*(code *)*puVar1)(param_1,unaff_x21,puVar1[1]);
    uVar2 = thunk_FUN_02f45270(*unaff_x27);
    FUN_0476105c();
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xd) * 0x10 + 0x138);
          goto LAB_0524c4d8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02f421d0(param_1,*unaff_x26,0xd);
LAB_0524c4d8:
    (*(code *)*puVar1)(param_1,uVar2,puVar1[1]);
    uVar2 = thunk_FUN_02f45270(*unaff_x27);
    FUN_0476105c();
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xf) * 0x10 + 0x138);
          goto LAB_0524c2d8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02f421d0(param_1,*unaff_x26,0xf);
LAB_0524c2d8:
    (*(code *)*puVar1)(param_1,uVar2,puVar1[1]);
    uVar4 = FUN_04aff1b0(&stack0x00000020,*unaff_x23);
    param_1 = in_stack_00000030;
    if ((uVar4 & 1) == 0) {
      FUN_04aff1ac(&stack0x00000020,*(undefined8 *)Oculus_Platform_Request<UserList>_TypeInfo);
      return;
    }
    uVar2 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cbae0);
    FUN_0475f808();
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_0524c364;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02f421d0(param_1,*unaff_x26,3);
LAB_0524c364:
    (*(code *)*puVar1)(param_1,uVar2,puVar1[1]);
    uVar2 = thunk_FUN_02f45270(*unaff_x27);
    FUN_0476105c();
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_0524c3e0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02f421d0(param_1,*unaff_x26,9);
LAB_0524c3e0:
    (*(code *)*puVar1)(param_1,uVar2,puVar1[1]);
    unaff_x21 = thunk_FUN_02f45270(*unaff_x27);
    FUN_0476105c();
    lVar3 = *param_1;
    param_2 = *unaff_x26;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 == 0) break;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != param_2) {
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
      if (uVar4 == 0) goto LAB_0524c43c;
    }
    puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xb) * 0x10 + 0x138);
  } while( true );
LAB_0524c43c:
  param_3 = 0xb;
  unaff_x20 = param_1;
  goto code_r0x0524c444;
}


