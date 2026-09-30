/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.CookieMask$$.ctor
ENTRY_POINT: 072e6b5c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_CookieMask___ctor(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *plVar8;
  undefined8 in_stack_00000060;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  *unaff_x22 = param_1;
  thunk_FUN_040ec700();
  memcpy(&stack0x00000068,unaff_x20,0x58);
  FUN_072e6f5c();
  uVar3 = FUN_074e5d94(*(undefined8 *)((long)unaff_x20 + 0x18),0);
  if ((((uVar3 & 1) == 0) && (lVar6 = *(long *)((long)unaff_x20 + 0x20), lVar6 != 0)) &&
     (*(long *)(lVar6 + 0x18) != 0)) {
    uVar4 = FUN_074e752c(*unaff_x22,lVar6,0);
  }
  else {
    uVar4 = *unaff_x22;
  }
  FUN_074ee2d4();
  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_072e6f20;
  uVar3 = FUN_064c7288(*(long *)(unaff_x19 + 0x28),uVar4,*(undefined8 *)PTR_DAT_092c43c0);
  if ((uVar3 & 1) == 0) {
    in_stack_00000060 = *(undefined8 *)((long)unaff_x20 + 0x28);
    uVar4 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_092c4150,&stack0x00000060);
    FUN_074d57ec(*(undefined8 *)PTR_DAT_092c4210,uVar4,0);
    FUN_074ee2d4();
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_072e6f20;
    FUN_064c7070(*(long *)(unaff_x19 + 0x28),*(undefined8 *)((long)unaff_x20 + 0x18),
                 *(undefined8 *)((long)unaff_x20 + 0x28),0,*(undefined8 *)PTR_DAT_092c43b8);
  }
  else {
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_072e6f20;
    uVar4 = FUN_064c72a8(*(long *)(unaff_x19 + 0x28),*(undefined8 *)((long)unaff_x20 + 0x18),
                         *(undefined8 *)PTR_DAT_092c43c8);
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_072e6f20;
    FUN_064c7070(*(long *)(unaff_x19 + 0x28),*(undefined8 *)((long)unaff_x20 + 0x18),
                 *(undefined8 *)((long)unaff_x20 + 0x28),0,*(undefined8 *)PTR_DAT_092c43b8);
    uVar4 = FUN_04f97e18(uVar4,*(undefined8 *)PTR_DAT_092c4398);
    uVar3 = thunk_FUN_074e4840(uVar4,*(undefined8 *)((long)unaff_x20 + 0x28),0);
    if ((uVar3 & 1) != 0) {
      in_stack_00000060 = *(undefined8 *)((long)unaff_x20 + 0x28);
      uVar4 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_092c4150,&stack0x00000060);
      FUN_074d57ec(*(undefined8 *)PTR_DAT_092c4210,uVar4,0);
    }
    FUN_074ee2d4();
  }
  puVar2 = PTR_DAT_092c43b0;
  in_stack_000000c0 = *(ulong *)((long)unaff_x20 + 0x40);
  in_stack_000000c8 = *(undefined8 *)((long)unaff_x20 + 0x48);
  if (((in_stack_000000c0 & 0xff) != 0) &&
     (lVar6 = FUN_060118d4(&stack0x000000c0,*(undefined8 *)PTR_DAT_092c43b0),
     puVar1 = PTR_DAT_092c4248, lVar6 != 0)) {
    lVar6 = *(long *)PTR_DAT_092c4248;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar6 = *(long *)puVar1;
    }
    if (*(long *)(*(long *)(lVar6 + 0xb8) + 8) != 0) {
      FUN_074ee2d4();
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar6 = *(long *)puVar1;
      }
      in_stack_000000c8 = *(undefined8 *)((long)unaff_x20 + 0x48);
      in_stack_000000c0 = *(ulong *)((long)unaff_x20 + 0x40);
      plVar8 = *(long **)(*(long *)(lVar6 + 0xb8) + 8);
      uVar4 = FUN_060118d4(&stack0x000000c0,*(undefined8 *)puVar2);
      if (plVar8 == (long *)0x0) goto LAB_072e6f20;
      lVar6 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092c43a0) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_072e6e58;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092c43a0,0);
LAB_072e6e58:
      (*(code *)*puVar5)(plVar8,uVar4,puVar5[1]);
      FUN_074ee2d4();
    }
  }
  if (*(long *)(unaff_x19 + 0x20) == 0) {
LAB_072e6f20:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((*(int *)(*(long *)(unaff_x19 + 0x20) + 0x18) <= *(int *)((long)unaff_x20 + 0x30)) &&
     (*(long *)((long)unaff_x20 + 0x50) != 0)) {
    FUN_074ee2d4();
    if ((*(long *)(unaff_x19 + 0x20) == 0) || (*(long *)((long)unaff_x20 + 0x50) == 0))
    goto LAB_072e6f20;
    FUN_072e49bc();
  }
  uVar4 = (**(code **)(*unaff_x21 + 0x168))();
  *(undefined8 *)((long)unaff_x20 + 0x18) = uVar4;
  thunk_FUN_040ec700();
  memcpy(&stack0x00000008,unaff_x20,0x58);
  FUN_072e711c();
  return;
}


