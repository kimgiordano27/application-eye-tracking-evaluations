/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractorReticleVisual$$Update
ENTRY_POINT: 05ca34b8
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined1  [16]
UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__Update
          (undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *unaff_x19;
  undefined8 uVar8;
  long *unaff_x20;
  long lVar9;
  long *unaff_x21;
  long *unaff_x25;
  undefined1 in_stack_00000000 [16];
  
  uVar3 = FUN_04f497f4(param_1,param_2,0);
  if ((uVar3 & 1) == 0) {
    return in_stack_00000000;
  }
  plVar4 = (long *)FUN_05ca2764();
  if (plVar4 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar4 + 0x198))();
    if ((uVar3 & 1) == 0) {
      return in_stack_00000000;
    }
    plVar4 = (long *)AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime();
    puVar2 = PTR_DAT_065dc8c8;
    bVar1 = *(byte *)(*(long *)PTR_DAT_065c8c40 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x21 + 0x130)) &&
       (plVar7 = plVar4,
       *(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_065c8c40))
    {
      do {
        plVar4 = plVar7;
        if (plVar4 == (long *)0x0) goto LAB_05ca36ac;
        plVar7 = (long *)(**(code **)(*plVar4 + 0x8a8))(plVar4,*(undefined8 *)(*plVar4 + 0x8b0));
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*unaff_x25);
        }
        uVar3 = FUN_04f497f4(plVar7,0,0);
        if ((uVar3 & 1) == 0) break;
        uVar8 = *(undefined8 *)puVar2;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar8 = FUN_04f3fb68(uVar8,0);
        uVar3 = FUN_04f497f4(plVar4,uVar8,0);
        if ((uVar3 & 1) == 0) break;
        if (unaff_x20 == (long *)0x0) goto LAB_05ca36ac;
        uVar3 = (**(code **)(*unaff_x20 + 0x298))();
      } while ((uVar3 & 1) != 0);
    }
    puVar2 = Niantic_Peridot_Telemetry_BehaviorInterrupt_var;
    lVar9 = *unaff_x19;
    if (*(int *)(*(long *)Niantic_Peridot_Telemetry_BehaviorInterrupt_var + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_05ca3e64(lVar9);
    if (*unaff_x19 != 0) {
      lVar9 = FUN_05c8f720(*unaff_x19,0);
      uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      if (*(int *)(*(long *)PTR_DAT_065de3b8 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*(long *)PTR_DAT_065de3b8);
      }
      uVar5 = FUN_05c70e04(plVar4,0);
      uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e0fc8);
      FUN_05c8e0b8(uVar6,uVar5,0);
      if (lVar9 != 0) {
        FUN_04679278(lVar9,uVar8,uVar6,*(undefined8 *)PTR_DAT_065de910);
        return in_stack_00000000;
      }
    }
  }
LAB_05ca36ac:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


