/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Vector3f>
ENTRY_POINT: 030319b8
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Vector3f>
          (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long in_x11;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_02ce0a7c();
      goto LAB_03031a58;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x4d) * 0x10 + 0x138);
LAB_03031a58:
  (*(code *)*puVar2)();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    plVar6 = *(long **)(unaff_x22 + 0x20);
    uVar7 = System_Array__InternalArray__IEnumerable_GetEnumerator<KeyValuePair<Guid,_OVRTask_CallbackWithState<object,_OVRTask<object>>>>
                      (*(long *)(unaff_x19 + 0x28),0);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x21) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x4e) * 0x10 + 0x138);
            goto LAB_03031cac;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x21,0x4e);
LAB_03031cac:
      (*(code *)*puVar2)(uVar7,unaff_d9,unaff_d10,plVar6,puVar2[1]);
      puVar1 = PTR_DAT_065ca5d0;
      lVar3 = *(long *)PTR_DAT_065ca5d0;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar3 = *(long *)puVar1;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      *(undefined4 *)(unaff_x19 + 0x10) = 4;
      *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


