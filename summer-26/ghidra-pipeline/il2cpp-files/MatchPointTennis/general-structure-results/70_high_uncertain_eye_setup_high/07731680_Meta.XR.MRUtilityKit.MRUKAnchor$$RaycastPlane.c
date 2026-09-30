/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$RaycastPlane
ENTRY_POINT: 07731680
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKAnchor__RaycastPlane(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined4 unaff_w23;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  long *plVar5;
  undefined4 uVar6;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  while( true ) {
    *(undefined8 *)(unaff_x27 + 0x18) = param_1;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x27 + 0x18),param_1);
    uVar4 = FUN_04447c90(*unaff_x19,unaff_w23);
    *(undefined8 *)(unaff_x27 + 0x20) = uVar4;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x27 + 0x20),uVar4);
    uVar4 = FUN_04447c90(*unaff_x19,unaff_w23);
    *(undefined8 *)(unaff_x27 + 0x28) = uVar4;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x27 + 0x28),uVar4);
    FUN_077201d0();
    plVar5 = (long *)*unaff_x25;
    unaff_x26 = unaff_x26 + 1;
    unaff_x22 = unaff_x22 + 8;
    if (plVar5 == (long *)0x0) break;
    while ((long)(int)plVar5[3] <= (long)unaff_x26) {
      uVar1 = unaff_x24 + 1;
      if ((long)(int)in_stack_00000000[3] <= (long)uVar1) {
        if (in_stack_00000018 != 0) {
          *(undefined8 *)(in_stack_00000018 + 0xa0) = in_stack_00000000;
          thunk_FUN_044bb4b4((undefined8 *)(in_stack_00000018 + 0xa0),in_stack_00000000);
          if (in_stack_00000018 != 0) {
            return *(undefined8 *)(in_stack_00000018 + 0xa0);
          }
        }
        goto LAB_07731764;
      }
      lVar3 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f317c8);
      FUN_07a80df4(lVar3,0);
      if ((lVar3 != 0) &&
         (lVar2 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*in_stack_00000000 + 0x40)), lVar2 == 0))
      goto LAB_0773176c;
      if (*(uint *)(in_stack_00000000 + 3) <= uVar1) goto LAB_07731768;
      in_stack_00000000[unaff_x24 + 5] = lVar3;
      thunk_FUN_044bb4b4(in_stack_00000000 + unaff_x24 + 5,lVar3);
      uVar6 = FUN_0771ffc0();
      uVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f317b8,uVar6);
      if (lVar3 == 0) goto LAB_07731764;
      unaff_x25 = (undefined8 *)(lVar3 + 0x30);
      *unaff_x25 = uVar4;
      thunk_FUN_044bb4b4(unaff_x25,uVar4);
      uVar4 = FUN_094f2868();
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      thunk_FUN_044bb4b4();
      *(undefined8 *)(lVar3 + 0x18) = in_stack_00000010;
      *(int *)(lVar3 + 0x28) = (int)uVar1;
      *(undefined4 *)(lVar3 + 0x10) = in_stack_00000008._4_4_;
      thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x18),in_stack_00000010);
      plVar5 = (long *)*unaff_x25;
      if (plVar5 == (long *)0x0) goto LAB_07731764;
      unaff_x22 = 0x20;
      unaff_x24 = uVar1;
      unaff_x26 = 0;
    }
    unaff_x27 = thunk_FUN_0448520c(*unaff_x20);
    FUN_07a80df4(unaff_x27,0);
    if ((unaff_x27 != 0) &&
       (lVar3 = thunk_FUN_04485110(unaff_x27,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)) {
LAB_0773176c:
      uVar4 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar4,0);
    }
    if (*(uint *)(plVar5 + 3) <= unaff_x26) {
LAB_07731768:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    plVar5[unaff_x26 + 4] = unaff_x27;
    thunk_FUN_044bb4b4((long)plVar5 + unaff_x22,unaff_x27);
    uVar6 = FUN_077200c4();
    if (unaff_x27 == 0) break;
    *(undefined4 *)(unaff_x27 + 0x10) = uVar6;
    param_1 = FUN_04447c90(*unaff_x19,unaff_w23);
  }
LAB_07731764:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


