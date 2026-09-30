/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AddByteOffset<OVRLocatable.TrackingSpacePose>
ENTRY_POINT: 03ea0cec
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRLocatable_TrackingSpacePose>(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = *unaff_x20;
  plVar1 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38));
  lVar3 = *param_1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_079fed30) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4f>;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30(param_1,*(long *)PTR_DAT_079fed30,1);
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4f>:
  (*(code *)*puVar2)(param_1);
  lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc(lVar3);
  }
  if (plVar1 != (long *)0x0) {
    if (*(long *)(*plVar1 + 0x40) == *(long *)(lVar3 + 0x40)) {
      puVar2 = (undefined8 *)thunk_FUN_0367ff68();
      *unaff_x20 = *puVar2;
      *unaff_x19 = 0;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03643084(plVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


