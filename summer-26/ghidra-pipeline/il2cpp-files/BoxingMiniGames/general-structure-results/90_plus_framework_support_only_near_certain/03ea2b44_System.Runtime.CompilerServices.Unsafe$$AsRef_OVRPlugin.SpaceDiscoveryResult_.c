/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AsRef<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03ea2b44
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Runtime_CompilerServices_Unsafe__AsRef<OVRPlugin_SpaceDiscoveryResult>
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long in_x9;
  int *in_x10;
  long in_x11;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  long *in_stack_00000030;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NativeArray<ConvertMeshJobData>>:
      (*(code *)*puVar1)();
      lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc(lVar2);
      }
      if (in_stack_00000030 != (long *)0x0) {
        if (*(long *)(*in_stack_00000030 + 0x40) == *(long *)(lVar2 + 0x40)) {
          puVar1 = (undefined8 *)thunk_FUN_0367ff68();
          uVar4 = *puVar1;
          uVar3 = puVar1[2];
          unaff_x20[1] = puVar1[1];
          *unaff_x20 = uVar4;
          unaff_x20[2] = uVar3;
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
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_0367cd30();
      goto 
      System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NativeArray<ConvertMeshJobData>>;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


