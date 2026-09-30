/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.ColliderMask$$.ctor
ENTRY_POINT: 06e07f00
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_ColliderMask___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 in_stack_00000008;
  
  FUN_03c8f898(PTR_DAT_08e78268);
  FUN_03c8f898(PTR_DAT_08e780e8);
  FUN_03c8f898(PTR_DAT_08e82448);
  FUN_03c8f898(PTR_DAT_08e928f8);
  FUN_03c8f898(PTR_DAT_08e92900);
  *(undefined1 *)(unaff_x20 + 0xf38) = 1;
  puVar1 = PTR_DAT_08e780e8;
  in_stack_00000008 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0xe);
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 10);
    lVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e92900);
    FUN_07145224(lVar3,0);
    plVar7 = (long *)(unaff_x19 + 0xc);
    *plVar7 = lVar3;
    thunk_FUN_03d233cc(plVar7,lVar3);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x10) = *(undefined8 *)(unaff_x19 + 8);
    thunk_FUN_03d233cc();
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x20) = *(undefined8 *)(unaff_x19 + 10);
    thunk_FUN_03d233cc();
    if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    puVar4 = (undefined8 *)(*plVar7 + 0x18);
    *puVar4 = 0;
    thunk_FUN_03d233cc(puVar4,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar8 = *(undefined8 *)(lVar9 + 0x10);
    lVar3 = *plVar7;
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e69e98);
    FUN_07064478(uVar5,lVar3,*(undefined8 *)PTR_DAT_08e928f8,0);
    if (*(int *)(*(long *)PTR_DAT_08e82448 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar3 = FUN_06dff6b0(uVar8,uVar5);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_071787d8(lVar3,0);
    uVar6 = FUN_0701d1d0(&stack0x00000008,0);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 0xe,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_04189290(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  FUN_0701d29c(&stack0x00000008,0);
  puVar2 = PTR_DAT_08e78268;
  lVar3 = *(long *)(unaff_x19 + 0xc);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(lVar3 + 0x18);
    *unaff_x19 = -2;
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    thunk_FUN_03d233cc(unaff_x19 + 0xc,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_063c7630(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


