/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AddByteOffset<OVRPlugin.RoomFace>
ENTRY_POINT: 03ea0d0c
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


undefined8 System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_RoomFace>(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *in_stack_00000018;
  
  lVar2 = *unaff_x23;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_079fed30) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4f>;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0367cd30();
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


