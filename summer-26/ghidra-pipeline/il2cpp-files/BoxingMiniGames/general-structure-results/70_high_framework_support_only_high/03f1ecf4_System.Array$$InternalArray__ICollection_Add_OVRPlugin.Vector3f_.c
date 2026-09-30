/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Vector3f>
ENTRY_POINT: 03f1ecf4
PROGRAM: BoxingMiniGames-libil2cpp.so
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
System_Array__InternalArray__ICollection_Add<OVRPlugin_Vector3f>(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 in_w9;
  long unaff_x19;
  long *unaff_x24;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    param_1 = *(long *)(*unaff_x24 + 0xb8);
    in_w9 = *(undefined4 *)(param_1 + 8);
  }
  in_stack_00000008 = *(undefined4 *)(param_1 + 0xc);
  uStack000000000000000c = in_w9;
  FUN_0380509c(1,0);
  if (DAT_07ed7b6f == '\0') {
    FUN_03642964(&DAT_07b67068);
    DAT_07ed7b6f = '\x01';
  }
  if (0 < **(int **)(DAT_07b67068 + 0xb8)) {
    uVar2 = FUN_05e14f10(&stack0x0000000c,0);
    uVar3 = FUN_05e14f10(&stack0x00000008,0);
    puVar1 = PTR_DAT_079f85d0;
    uVar2 = FUN_05c981c8(uVar2,*(undefined8 *)PTR_DAT_079f85d0,uVar3,0);
    if (DAT_07bd8248 != 0) {
      lVar4 = FUN_05c9a0b4(DAT_07bd8248,*(undefined8 *)PTR_DAT_079fa858,uVar2,0);
      lVar5 = *unaff_x24;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978(lVar5);
        lVar5 = *unaff_x24;
      }
      uVar2 = FUN_05e14f10(*(long *)(lVar5 + 0xb8) + 8,0);
      uVar3 = FUN_05e14f10(*(long *)(*unaff_x24 + 0xb8) + 0xc,0);
      uVar2 = FUN_05c981c8(uVar2,*(undefined8 *)puVar1,uVar3,0);
      if (lVar4 != 0) {
        uVar2 = FUN_05c9a0b4(lVar4,*(undefined8 *)PTR_DAT_079fa850,uVar2,0);
        FUN_038019e8(uVar2,0,0);
        goto LAB_03f1ee44;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_03f1ee44:
  if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  uVar2 = thunk_FUN_0367fe20();
  FUN_0502fbac(uVar2,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar4 = *unaff_x24;
  }
  *(int *)(*(long *)(lVar4 + 0xb8) + 0x3c) = *(int *)(*(long *)(lVar4 + 0xb8) + 0x3c) + 1;
  FUN_03804dc8(uVar2,0);
  return uVar2;
}


