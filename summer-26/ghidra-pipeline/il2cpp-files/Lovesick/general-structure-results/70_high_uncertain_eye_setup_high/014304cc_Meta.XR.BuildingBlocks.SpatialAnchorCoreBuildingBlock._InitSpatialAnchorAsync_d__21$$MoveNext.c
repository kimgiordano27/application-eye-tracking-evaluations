/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock.<InitSpatialAnchorAsync>d__21$$MoveNext
ENTRY_POINT: 014304cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21__MoveNext
               (long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long in_stack_00000008;
  
  while (lVar5 = (**(code **)(param_1 + 0x4d8))(param_2,*(undefined8 *)(param_1 + 0x4e0)),
        lVar5 != 0) {
    FUN_0268fd4c(lVar5,0);
    FUN_0142deac();
    do {
      if (((*(long *)(unaff_x19 + 0x98) == 0) ||
          (FUN_0132138c(*(long *)(unaff_x19 + 0x98),unaff_w20,&stack0x00000008,*unaff_x24),
          in_stack_00000008 == 0)) || (*(long *)(in_stack_00000008 + 0x10) == 0)) goto LAB_014305a4;
      FUN_013eb184(*(long *)(in_stack_00000008 + 0x10),0);
      lVar5 = *(long *)(unaff_x19 + 0x98);
      unaff_w20 = unaff_w20 + 1;
      if (lVar5 == 0) goto LAB_014305a4;
      if (*(int *)(lVar5 + 0x18) <= unaff_w20) {
        if (*(long *)(unaff_x19 + 0x90) != 0) {
          FUN_0129a9f4(*(long *)(unaff_x19 + 0x90),*unaff_x23);
          lVar5 = *(long *)(unaff_x19 + 0x98);
          if (lVar5 != 0) {
            lVar6 = *unaff_x22;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            uVar4 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200));
            if ((uVar4 & 1) == 0) {
              *(undefined4 *)(lVar5 + 0x18) = 0;
            }
            else {
              iVar1 = *(int *)(lVar5 + 0x18);
              *(undefined4 *)(lVar5 + 0x18) = 0;
              if (0 < iVar1) {
                FUN_0179519c(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
              }
            }
            return;
          }
        }
        goto LAB_014305a4;
      }
      FUN_0132138c(lVar5,unaff_w20,&stack0x00000008,*unaff_x24);
      if ((in_stack_00000008 == 0) ||
         (plVar2 = *(long **)(in_stack_00000008 + 0x10), plVar2 == (long *)0x0)) goto LAB_014305a4;
      uVar3 = (**(code **)(*plVar2 + 0x4d8))(plVar2,*(undefined8 *)(*plVar2 + 0x4e0));
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x25);
      }
      uVar4 = FUN_02681b9c(uVar3,0,0);
    } while ((uVar4 & 1) == 0);
    if (((*(long *)(unaff_x19 + 0x98) == 0) ||
        (FUN_0132138c(*(long *)(unaff_x19 + 0x98),unaff_w20,&stack0x00000008,*unaff_x24),
        in_stack_00000008 == 0)) ||
       (param_2 = *(long **)(in_stack_00000008 + 0x10), param_2 == (long *)0x0)) break;
    param_1 = *param_2;
  }
LAB_014305a4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


