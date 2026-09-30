/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<KeyValuePair<object,-JointVelocityActiveState.JointVelocityFeatureState>>
ENTRY_POINT: 02382b18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02382c98) */

void System_Array__InternalArray__ICollection_Add<KeyValuePair<object,_JointVelocityActiveState_JointVelocityFeatureState>>
               (long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  long *unaff_x27;
  int unaff_w28;
  long unaff_x29;
  
  do {
    param_1 = FUN_01ecaf44(param_1);
    do {
      lVar3 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == param_1) {
            lVar3 = lVar3 + (long)*piVar6 * 0x10 + 0x138;
            goto LAB_02382b68;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      lVar3 = FUN_01ecb238();
LAB_02382b68:
      *(void **)(unaff_x29 + -0x20) = unaff_x24;
      (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
      memcpy(unaff_x26,unaff_x24,unaff_x23);
      memcpy(unaff_x25,unaff_x26,unaff_x23);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar4 = unaff_x25;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x20) + 0x28)) {
        puVar4 = (undefined8 *)*unaff_x25;
      }
      puVar2 = *(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x30);
      uVar1 = *puVar2;
      *(int *)(unaff_x29 + -0xc) = unaff_w28;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar4;
      *(undefined8 *)(unaff_x29 + -0x18) = unaff_x19;
      (*(code *)puVar2[2])(uVar1);
      unaff_w28 = unaff_w28 + 1;
      lVar3 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x27) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_02382af4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02382af4:
      uVar5 = (*(code *)*puVar4)();
      if ((uVar5 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_02382c54;
        lVar3 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 == 0) goto LAB_02382c2c;
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_02382c14;
      }
      param_1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
    } while ((*(byte *)(param_1 + 0x135) & 1) != 0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_02382c14:
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto FUN_02382c48;
    }
  }
LAB_02382c2c:
  puVar4 = (undefined8 *)FUN_01ecb238();
FUN_02382c48:
  (*(code *)*puVar4)();
LAB_02382c54:
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(unaff_x29 + -0x30));
}


