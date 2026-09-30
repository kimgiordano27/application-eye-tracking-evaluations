/*
FUNCTION_NAME: Oculus.Interaction.GrabAPI.PinchGrabAPI$$GetClosestDistanceToJoints
ENTRY_POINT: 019248f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_14;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01924c34) */
/* WARNING: Removing unreachable block (ram,0x01924cfc) */
/* WARNING: Removing unreachable block (ram,0x01924cf0) */
/* WARNING: Removing unreachable block (ram,0x01924cc0) */
/* WARNING: Removing unreachable block (ram,0x01924ce4) */

void Oculus_Interaction_GrabAPI_PinchGrabAPI__GetClosestDistanceToJoints
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x25;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_000001a8;
  
  uStack0000000000000038 = in_stack_000000e8;
  uStack0000000000000030 = in_stack_000000e0;
  uStack0000000000000040 = param_5;
  uStack0000000000000050 = param_4;
  uStack0000000000000060 = param_3;
  uStack0000000000000070 = param_2;
  uStack0000000000000080 = param_1;
  FUN_019324ac(&stack0x00000088,&stack0x00000070,&stack0x00000030,0);
  in_stack_000000a8 = in_stack_00000090;
  in_stack_000000a0 = in_stack_00000088;
  in_stack_000000b0 = in_stack_00000098;
  unaff_x22[2] = in_stack_00000098;
  unaff_x22[1] = in_stack_00000090;
  *unaff_x22 = in_stack_00000088;
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *unaff_x25;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (*(char *)(unaff_x28 + 0xed) == '\0') {
                    /* try { // try from 0192495c to 01a24967 has its CatchHandler @ 01924cd4 */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    *(undefined1 *)(unaff_x28 + 0xed) = 1;
  }
                    /* try { // try from 0192496c to 01a24977 has its CatchHandler @ 01924cd0 */
                    /* try { // try from 0192497c to 01a24987 has its CatchHandler @ 01924ccc */
  uVar3 = FUN_017bc96c(uVar7,**(undefined8 **)
                               (*(long *)
                                 Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                               + 0xb8),0);
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 0192498c to 01a24997 has its CatchHandler @ 01924d24 */
    FUN_0265d9e8(uVar7,0);
  }
  plVar4 = (long *)(unaff_x20 + 0x170);
  uVar1 = FUN_02685804(0);
                    /* try { // try from 019249a8 to 01a249af has its CatchHandler @ 01924cf8 */
  FUN_010afdd4(plVar4,uVar1,*(undefined8 *)NaughtyAttributes_DropdownList<Vector3>_TypeInfo);
                    /* try { // try from 019249c0 to 01a249c7 has its CatchHandler @ 01924cf4 */
  FUN_0268582c(*plVar4,0);
                    /* try { // try from 019249d4 to 01a249d7 has its CatchHandler @ 01924cf0 */
  if (DAT_0377a0ef == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
                    /* try { // try from 019249e4 to 01a249eb has its CatchHandler @ 01924cec */
    DAT_0377a0ef = '\x01';
  }
                    /* try { // try from 019249f4 to 01a249ff has its CatchHandler @ 01924ce8 */
                    /* try { // try from 01924a04 to 01a24a0f has its CatchHandler @ 01924ce4 */
  uVar3 = FUN_017bc96c(uVar7,**(undefined8 **)
                               (*(long *)
                                 Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                               + 0xb8),0);
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 01924a14 to 01a24a1f has its CatchHandler @ 01924ce0 */
    FUN_0265dab4(uVar7,0);
  }
  lVar2 = *plVar4;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
    uVar3 = 0;
    uVar5 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
    do {
      if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      FUN_02681274(*(undefined8 *)(lVar2 + 0x20 + uVar3 * 8),*(undefined8 *)(unaff_x20 + 0x168),0);
      in_stack_00000020 = unaff_x22[2];
      in_stack_00000018 = unaff_x22[1];
      in_stack_00000010 = *unaff_x22;
      uVar5 = FUN_02681164(*(undefined8 *)(unaff_x20 + 0x168),&stack0x00000010,0);
      if ((uVar5 & 1) != 0) {
        if (*(char *)(unaff_x20 + 0x178) == '\0') {
          *(undefined1 *)(unaff_x20 + 0x178) = 1;
          if (*(long *)(unaff_x20 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01323390(*(long *)(unaff_x20 + 0xd0),&stack0x000000e0,*(undefined8 *)PTR_DAT_033f09e8)
          ;
          in_stack_00000168 = in_stack_000000e8;
          in_stack_00000160 = in_stack_000000e0;
          in_stack_00000170 = in_stack_000000f0;
          while (uVar3 = FUN_012b894c(&stack0x00000160,*unaff_x29), (uVar3 & 1) != 0) {
            plVar4 = (long *)FUN_00bf6c28(&stack0x00000160,*unaff_x23);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            (**(code **)(*plVar4 + 0x398))
                      (plVar4,*(undefined1 *)(unaff_x20 + 0x178),*(undefined8 *)(*plVar4 + 0x3a0));
          }
          iVar6 = 0xb;
          FUN_012b8948(&stack0x00000160,*(undefined8 *)PTR_DAT_033f6858);
        }
        else {
          iVar6 = 0xb;
        }
        goto LAB_01924b44;
      }
      uVar5 = (ulong)*(uint *)(lVar2 + 0x18);
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)*(uint *)(lVar2 + 0x18));
  }
  iVar6 = 3;
LAB_01924b44:
  if (DAT_0377a0ef == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ef = '\x01';
  }
  uVar3 = FUN_017bc96c();
  if ((uVar3 & 1) != 0) {
    FUN_0265dab4();
  }
  if (((iVar6 == 3) || (iVar6 == 0)) && (*(char *)(unaff_x20 + 0x178) != '\0')) {
    *(undefined1 *)(unaff_x20 + 0x178) = 0;
    if (*(long *)(unaff_x20 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01323390(*(long *)(unaff_x20 + 0xd0),&stack0x000000e0,*(undefined8 *)PTR_DAT_033f09e8);
    in_stack_00000168 = in_stack_000000e8;
    in_stack_00000160 = in_stack_000000e0;
    in_stack_00000170 = in_stack_000000f0;
    while (uVar3 = FUN_012b894c(&stack0x00000160,*unaff_x29), (uVar3 & 1) != 0) {
      plVar4 = (long *)FUN_00bf6c28(&stack0x00000160,*unaff_x23);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar4 + 0x398))
                (plVar4,*(undefined1 *)(unaff_x20 + 0x178),*(undefined8 *)(*plVar4 + 0x3a0));
    }
    FUN_012b8948(&stack0x00000160,*(undefined8 *)PTR_DAT_033f6858);
  }
  if (DAT_0377a0ef == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ef = '\x01';
  }
  uVar7 = in_stack_000001a8;
  uVar3 = FUN_017bc96c(in_stack_000001a8,
                       **(undefined8 **)
                         (*(long *)
                           Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                         + 0xb8),0);
  if ((uVar3 & 1) != 0) {
    FUN_0265dab4(uVar7,0);
  }
  return;
}


