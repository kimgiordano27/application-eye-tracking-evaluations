/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AddByteOffset<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03ea0d34
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_SpaceDiscoveryResult>
          (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  int *in_x10;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *in_stack_00000018;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4f>:
      (*(code *)*puVar1)();
      lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc(lVar2);
      }
      if (in_stack_00000018 != (long *)0x0) {
        if (*(long *)(*in_stack_00000018 + 0x40) == *(long *)(lVar2 + 0x40)) {
          puVar1 = (undefined8 *)thunk_FUN_0367ff68();
          *unaff_x20 = *puVar1;
          *unaff_x19 = 0;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03643084(in_stack_00000018);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_0367cd30();
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4f>;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


