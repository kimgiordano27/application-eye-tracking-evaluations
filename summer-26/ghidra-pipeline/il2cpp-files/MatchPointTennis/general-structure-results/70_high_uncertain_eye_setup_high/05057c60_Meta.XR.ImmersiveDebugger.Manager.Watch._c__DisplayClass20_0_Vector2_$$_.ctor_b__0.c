/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector2>$$<.ctor>b__0
ENTRY_POINT: 05057c60
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05057dc0) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector2>__<_ctor>b__0(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  int iVar6;
  undefined8 *unaff_x21;
  void *unaff_x22;
  undefined8 unaff_x23;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  
  memcpy(&stack0x000000d0,unaff_x22,0x90);
  iVar6 = *(int *)(unaff_x19 + 0xb8);
  *(int *)(unaff_x19 + 0xb8) = iVar6 + 1;
  UnityEngine_UIElements_UITKTextHandle__UpdateMesh(&stack0x000000d0,iVar6,0);
  in_stack_00000168 = in_stack_00000008;
  in_stack_00000160 = in_stack_00000000;
  in_stack_00000178 = in_stack_00000018;
  in_stack_00000170 = in_stack_00000010;
  uVar1 = FUN_095be2bc(&stack0x00000160,0);
  if ((uVar1 & 1) == 0) {
    iVar6 = 0x13;
  }
  else {
    *unaff_x21 = unaff_x23;
    thunk_FUN_044bb4b4();
    plVar2 = (long *)FUN_095c1a04();
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09f271c8) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_05057da8;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac(plVar2,*(long *)PTR_DAT_09f271c8,0);
LAB_05057da8:
      (*(code *)*puVar3)(plVar2);
    }
    iVar6 = 3;
  }
  FUN_0519ac10(&stack0x00000080,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x58));
  if ((((iVar6 == 0) || (iVar6 == 0x13)) && (uVar1 = FUN_0973ae24(), (uVar1 & 1) == 0)) &&
     (*(int *)(unaff_x19 + 0xa8) == 0)) {
    *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  }
  return;
}


