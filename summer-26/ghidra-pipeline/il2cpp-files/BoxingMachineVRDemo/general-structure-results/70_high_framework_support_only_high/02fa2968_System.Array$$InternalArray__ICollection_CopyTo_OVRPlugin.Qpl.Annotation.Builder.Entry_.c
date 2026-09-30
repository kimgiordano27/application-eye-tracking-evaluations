/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 02fa2968
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Qpl_Annotation_Builder_Entry>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x22;
  int iVar11;
  undefined8 *unaff_x25;
  long *plVar12;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar3 = PTR_DAT_06764048;
  puVar2 = PTR_DAT_06764040;
  puVar1 = PTR_DAT_06764030;
  plVar12 = (long *)*unaff_x25;
  iVar11 = 0;
  do {
    lVar8 = *unaff_x22;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *plVar12) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02fa29d4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_02fa29d4:
    iVar4 = (*(code *)*puVar5)();
    if (iVar4 <= iVar11) {
      return;
    }
    lVar8 = *unaff_x22;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02fa2a34;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_02fa2a34:
    uVar6 = (*(code *)*puVar5)();
    uVar7 = FUN_02fa180c();
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_0390bf6c(&stack0x00000010,uVar6,uVar7,*(undefined8 *)puVar3);
    thunk_FUN_02d9d164(*(undefined8 *)puVar1);
    FUN_050293c8();
    iVar11 = iVar11 + 1;
  } while( true );
}


