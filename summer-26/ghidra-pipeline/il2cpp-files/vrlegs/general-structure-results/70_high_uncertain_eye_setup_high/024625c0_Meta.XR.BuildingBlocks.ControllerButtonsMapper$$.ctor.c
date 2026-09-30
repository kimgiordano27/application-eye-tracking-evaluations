/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$.ctor
ENTRY_POINT: 024625c0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper___ctor(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  uint uVar5;
  long in_x9;
  uint in_w10;
  long in_x11;
  long unaff_x19;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  plVar3 = *(long **)(in_x11 + 0x20);
  if (plVar3 == (long *)0x0) {
LAB_02462788:
    *(undefined8 *)(unaff_x19 + 0x68) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x19 + 0x68),0);
    return;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_03ce6de8 + 0x130);
  if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03ce6de8)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0();
  }
  uVar5 = (uint)in_x9;
  if (((in_w10 <= uVar5 - 3) || (in_w10 <= uVar5)) || (in_w10 <= uVar5 - 4)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  lVar2 = plVar3[2];
  lVar7 = plVar3[3];
  uVar6 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x68);
  plVar11 = *(long **)(param_1 + (long)(int)(uVar5 - 3) * 8 + 0x20);
  plVar10 = *(long **)(param_1 + in_x9 * 8 + 0x20);
  plVar9 = *(long **)(param_1 + (long)(int)(uVar5 - 4) * 8 + 0x20);
  plVar3 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ce29d8);
  if (plVar11 != (long *)0x0) {
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)PTR_DAT_03ce3d58 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar11);
    }
    puVar4 = (undefined4 *)thunk_FUN_01a89fbc(plVar11);
    if (plVar10 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_03ce1d70 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03ce1d70)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar10);
      }
    }
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_03ce2490 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03ce2490))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar9);
      }
    }
    FUN_023c2848(plVar3,uVar6,(char)lVar2,lVar7,*puVar4,uVar8,plVar10,plVar9);
    if (plVar3 != (long *)0x0) {
      if (plVar3[0x10] == 0) {
        if (plVar3[0xf] == 0) goto LAB_024627b4;
        FUN_023d1674(plVar3[0xf],plVar3,0);
      }
      if (*(char *)(unaff_x19 + 0xe4) != '\0') {
        (**(code **)(*plVar3 + 0x348))
                  (plVar3,*(undefined8 *)(unaff_x19 + 0x90),*(undefined8 *)(*plVar3 + 0x350));
        if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_024627b4;
        FUN_024a0eb0(*(long *)(unaff_x19 + 0x150),0,0);
      }
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_023878e4(*(long *)(unaff_x19 + 0x20),plVar3,0);
        goto LAB_02462788;
      }
    }
  }
LAB_024627b4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


