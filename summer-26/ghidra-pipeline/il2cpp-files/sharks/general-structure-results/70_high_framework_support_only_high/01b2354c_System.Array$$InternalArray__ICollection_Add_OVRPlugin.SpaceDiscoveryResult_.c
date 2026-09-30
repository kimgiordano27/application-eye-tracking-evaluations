/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 01b2354c
PROGRAM: sharks-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceDiscoveryResult>
               (undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  double in_stack_00000018;
  long in_stack_00000020;
  double in_stack_00000028;
  int iStack0000000000000034;
  double in_stack_00000038;
  float fStack0000000000000044;
  double in_stack_00000048;
  
  FUN_02bddb5c(param_1);
  uVar2 = FUN_02be66d0();
  if ((uVar2 & 1) == 0) {
    uVar8 = **(undefined8 **)(unaff_x20 + 0x38);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar8 = FUN_02bddb5c(uVar8,0);
    uVar5 = FUN_02bddb5c(*(undefined8 *)PTR_DAT_037f8820,0);
    uVar2 = FUN_02be66d0(uVar8,uVar5,0);
    if ((uVar2 & 1) == 0) {
      uVar8 = **(undefined8 **)(unaff_x20 + 0x38);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar8 = FUN_02bddb5c(uVar8,0);
      uVar5 = FUN_02bddb5c(*(undefined8 *)PTR_DAT_037f8828,0);
      uVar2 = FUN_02be66d0(uVar8,uVar5,0);
      if ((uVar2 & 1) == 0) {
        uVar8 = **(undefined8 **)(unaff_x20 + 0x38);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar8 = FUN_02bddb5c(uVar8,0);
        uVar5 = FUN_02bddb5c(*(undefined8 *)PTR_DAT_037f8be8,0);
        uVar2 = FUN_02be66d0(uVar8,uVar5,0);
        if ((uVar2 & 1) == 0) {
          uVar8 = **(undefined8 **)(unaff_x20 + 0x38);
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar8 = FUN_02bddb5c(uVar8,0);
          uVar5 = FUN_02bddb5c(*(undefined8 *)PTR_DAT_037f8808,0);
          uVar2 = FUN_02be66d0(uVar8,uVar5,0);
          if ((uVar2 & 1) == 0) {
            uVar1 = 0;
            goto LAB_01b23910;
          }
          puVar4 = (undefined8 *)FUN_01beb018();
          in_stack_00000008 = *puVar4;
          if (*(int *)(*(long *)PTR_DAT_037f8bd8 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar1 = FUN_033beaa4();
          puVar4 = (undefined8 *)
                   FUN_01beb018(&stack0x00000008,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x60)
                               );
        }
        else {
          puVar4 = (undefined8 *)FUN_01beb028();
          in_stack_00000018 = (double)NEON_ucvtf(*puVar4);
          if (*(int *)(*(long *)PTR_DAT_037f8bd8 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar1 = FUN_033beaa4();
          if (in_stack_00000018 < 0.0) {
            in_stack_00000018 = 0.0;
          }
          in_stack_00000010 = (long)in_stack_00000018;
          puVar4 = (undefined8 *)
                   FUN_01beb05c(&stack0x00000010,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x50)
                               );
        }
      }
      else {
        plVar7 = (long *)FUN_01beb020();
        in_stack_00000028 = (double)*plVar7;
        if (*(int *)(*(long *)PTR_DAT_037f8bd8 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar1 = FUN_033beaa4();
        in_stack_00000020 = -0x8000000000000000;
        if (in_stack_00000028 != INFINITY) {
          in_stack_00000020 = (long)in_stack_00000028;
        }
        puVar4 = (undefined8 *)
                 FUN_01beb03c(&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x40));
      }
    }
    else {
      piVar6 = (int *)FUN_01beb01c();
      in_stack_00000038 = (double)*piVar6;
      if (*(int *)(*(long *)PTR_DAT_037f8bd8 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar1 = FUN_033beaa4();
      iStack0000000000000034 = -0x80000000;
      if (in_stack_00000038 != INFINITY) {
        iStack0000000000000034 = (int)in_stack_00000038;
      }
      puVar4 = (undefined8 *)
               FUN_01beb02c(&stack0x00000034,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x30));
    }
  }
  else {
    pfVar3 = (float *)FUN_01beb024();
    in_stack_00000048 = (double)*pfVar3;
    if (*(int *)(*(long *)PTR_DAT_037f8bd8 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar1 = FUN_033beaa4();
    fStack0000000000000044 = (float)in_stack_00000048;
    puVar4 = (undefined8 *)
             FUN_01beb050(&stack0x00000044,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x18));
  }
  *unaff_x19 = *puVar4;
LAB_01b23910:
  return uVar1 & 1;
}


