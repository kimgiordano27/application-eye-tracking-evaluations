/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AsRef<OVRPlugin.Vector2f>
ENTRY_POINT: 03ea2b4c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Runtime_CompilerServices_Unsafe__AsRef<OVRPlugin_Vector2f>
          (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long in_x9;
  int *in_x10;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar6;
  long *in_stack_00000030;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_0367cd30();
      goto 
      System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NativeArray<ConvertMeshJobData>>;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)(*piVar2 + 1) * 0x10 + 0x138);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NativeArray<ConvertMeshJobData>>:
  (*(code *)*puVar3)();
  lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
  }
  if (in_stack_00000030 != (long *)0x0) {
    if (*(long *)(*in_stack_00000030 + 0x40) == *(long *)(lVar4 + 0x40)) {
      puVar3 = (undefined8 *)thunk_FUN_0367ff68();
      uVar6 = *puVar3;
      uVar5 = puVar3[2];
      unaff_x20[1] = puVar3[1];
      *unaff_x20 = uVar6;
      unaff_x20[2] = uVar5;
      thunk_FUN_036b7ad0();
      *unaff_x19 = 0;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03643084(in_stack_00000030);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


