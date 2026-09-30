/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Extensions.Vector2Extensions$$Add
ENTRY_POINT: 072e6b30
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


void Meta_XR_MRUtilityKit_Extensions_Vector2Extensions__Add(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000060;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  uVar3 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  uVar4 = FUN_074e5d94(uVar3,0);
  if ((uVar4 & 1) == 0) {
    plVar5 = *(long **)((long)unaff_x20 + 0x38);
    if (plVar5 == (long *)0x0) goto LAB_072e6f20;
    uVar3 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
    *unaff_x22 = uVar3;
    thunk_FUN_040ec700();
  }
  memcpy(&stack0x00000068,unaff_x20,0x58);
  FUN_072e6f5c();
  uVar4 = FUN_074e5d94(*(undefined8 *)((long)unaff_x20 + 0x18),0);
  if ((((uVar4 & 1) == 0) && (lVar7 = *(long *)((long)unaff_x20 + 0x20), lVar7 != 0)) &&
     (*(long *)(lVar7 + 0x18) != 0)) {
    uVar3 = FUN_074e752c(*unaff_x22,lVar7,0);
  }
  else {
    uVar3 = *unaff_x22;
  }
  FUN_074ee2d4();
  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_072e6f20;
  uVar4 = FUN_064c7288(*(long *)(unaff_x19 + 0x28),uVar3,*(undefined8 *)PTR_DAT_092c43c0);
  if ((uVar4 & 1) == 0) {
    in_stack_00000060 = *(undefined8 *)((long)unaff_x20 + 0x28);
    uVar3 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_092c4150,&stack0x00000060);
    FUN_074d57ec(*(undefined8 *)PTR_DAT_092c4210,uVar3,0);
    FUN_074ee2d4();
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_072e6f20;
    FUN_064c7070(*(long *)(unaff_x19 + 0x28),*(undefined8 *)((long)unaff_x20 + 0x18),
                 *(undefined8 *)((long)unaff_x20 + 0x28),0,*(undefined8 *)PTR_DAT_092c43b8);
  }
  else {
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_072e6f20;
    uVar3 = FUN_064c72a8(*(long *)(unaff_x19 + 0x28),*(undefined8 *)((long)unaff_x20 + 0x18),
                         *(undefined8 *)PTR_DAT_092c43c8);
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_072e6f20;
    FUN_064c7070(*(long *)(unaff_x19 + 0x28),*(undefined8 *)((long)unaff_x20 + 0x18),
                 *(undefined8 *)((long)unaff_x20 + 0x28),0,*(undefined8 *)PTR_DAT_092c43b8);
    uVar3 = FUN_04f97e18(uVar3,*(undefined8 *)PTR_DAT_092c4398);
    uVar4 = thunk_FUN_074e4840(uVar3,*(undefined8 *)((long)unaff_x20 + 0x28),0);
    if ((uVar4 & 1) != 0) {
      in_stack_00000060 = *(undefined8 *)((long)unaff_x20 + 0x28);
      uVar3 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_092c4150,&stack0x00000060);
      FUN_074d57ec(*(undefined8 *)PTR_DAT_092c4210,uVar3,0);
    }
    FUN_074ee2d4();
  }
  puVar2 = PTR_DAT_092c43b0;
  in_stack_000000c0 = *(ulong *)((long)unaff_x20 + 0x40);
  in_stack_000000c8 = *(undefined8 *)((long)unaff_x20 + 0x48);
  if (((in_stack_000000c0 & 0xff) != 0) &&
     (lVar7 = FUN_060118d4(&stack0x000000c0,*(undefined8 *)PTR_DAT_092c43b0),
     puVar1 = PTR_DAT_092c4248, lVar7 != 0)) {
    lVar7 = *(long *)PTR_DAT_092c4248;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar7 = *(long *)puVar1;
    }
    if (*(long *)(*(long *)(lVar7 + 0xb8) + 8) != 0) {
      FUN_074ee2d4();
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar7 = *(long *)puVar1;
      }
      in_stack_000000c8 = *(undefined8 *)((long)unaff_x20 + 0x48);
      in_stack_000000c0 = *(ulong *)((long)unaff_x20 + 0x40);
      plVar5 = *(long **)(*(long *)(lVar7 + 0xb8) + 8);
      uVar3 = FUN_060118d4(&stack0x000000c0,*(undefined8 *)puVar2);
      if (plVar5 == (long *)0x0) goto LAB_072e6f20;
      lVar7 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092c43a0) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_072e6e58;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092c43a0,0);
LAB_072e6e58:
      (*(code *)*puVar6)(plVar5,uVar3,puVar6[1]);
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
  uVar3 = (**(code **)(*unaff_x21 + 0x168))();
  *(undefined8 *)((long)unaff_x20 + 0x18) = uVar3;
  thunk_FUN_040ec700();
  memcpy(&stack0x00000008,unaff_x20,0x58);
  FUN_072e711c();
  return;
}


