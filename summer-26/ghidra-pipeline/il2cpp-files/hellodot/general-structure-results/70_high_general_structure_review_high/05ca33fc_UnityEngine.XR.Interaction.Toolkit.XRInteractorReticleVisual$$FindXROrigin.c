/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractorReticleVisual$$FindXROrigin
ENTRY_POINT: 05ca33fc
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_3
*/


undefined1  [16] UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__FindXROrigin(void)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *unaff_x19;
  undefined8 uVar10;
  long *unaff_x20;
  long lVar11;
  long *unaff_x21;
  long *unaff_x24;
  long unaff_x25;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
                    /* try { // try from 05ca3408 to 05da3557 has its CatchHandler @ 05ca3408
                       catch() { ... } // from try @ 05ca3408 with catch @ 05ca3408
                       catch() { ... } // from try @ 05ca36e8 with catch @ 05ca3408
                       catch() { ... } // from try @ 05ca37a0 with catch @ 05ca3408
                       catch() { ... } // from try @ 05ca37a8 with catch @ 05ca3408
                       catch() { ... } // from try @ 05ca3874 with catch @ 05ca3408 */
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de3b8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e0fc8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de900);
  AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Telemetry_BehaviorInterrupt_var);
  *(undefined1 *)(unaff_x25 + 0xcb) = 1;
  auVar2 = FUN_05ca3c68();
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar5 = FUN_05c8d758();
  if ((uVar5 & 1) != 0) {
    return auVar2;
  }
  if (unaff_x21 != (long *)0x0) {
    AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime();
    puVar3 = PTR_DAT_065c89e8;
    if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*(long *)PTR_DAT_065c89e8);
    }
    uVar5 = FUN_04f497f4();
    if ((uVar5 & 1) == 0) {
      return auVar2;
    }
    plVar6 = (long *)FUN_05ca2764();
    if (plVar6 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar6 + 0x198))();
      if ((uVar5 & 1) == 0) {
        return auVar2;
      }
      plVar6 = (long *)AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime();
      puVar4 = PTR_DAT_065dc8c8;
      bVar1 = *(byte *)(*(long *)PTR_DAT_065c8c40 + 0x130);
      if ((bVar1 <= *(byte *)(*unaff_x21 + 0x130)) &&
         (plVar9 = plVar6,
         *(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_065c8c40
         )) {
        do {
          plVar6 = plVar9;
          if (plVar6 == (long *)0x0) goto LAB_05ca36ac;
          plVar9 = (long *)(**(code **)(*plVar6 + 0x8a8))(plVar6,*(undefined8 *)(*plVar6 + 0x8b0));
          lVar11 = *(long *)puVar3;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_02cd038c(lVar11);
          }
          uVar5 = FUN_04f497f4(plVar9,0,0);
          if ((uVar5 & 1) == 0) break;
          uVar10 = *(undefined8 *)puVar4;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar10 = FUN_04f3fb68(uVar10,0);
          uVar5 = FUN_04f497f4(plVar6,uVar10,0);
          if ((uVar5 & 1) == 0) break;
          if (unaff_x20 == (long *)0x0) goto LAB_05ca36ac;
          uVar5 = (**(code **)(*unaff_x20 + 0x298))();
        } while ((uVar5 & 1) != 0);
      }
      puVar3 = Niantic_Peridot_Telemetry_BehaviorInterrupt_var;
      lVar11 = *unaff_x19;
      if (*(int *)(*(long *)Niantic_Peridot_Telemetry_BehaviorInterrupt_var + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_05ca3e64(lVar11);
      if (*unaff_x19 != 0) {
        lVar11 = FUN_05c8f720(*unaff_x19,0);
        uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
        if (*(int *)(*(long *)PTR_DAT_065de3b8 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)PTR_DAT_065de3b8);
        }
        uVar7 = FUN_05c70e04(plVar6,0);
        uVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e0fc8);
        FUN_05c8e0b8(uVar8,uVar7,0);
        if (lVar11 != 0) {
          FUN_04679278(lVar11,uVar10,uVar8,*(undefined8 *)PTR_DAT_065de910);
          return auVar2;
        }
      }
    }
  }
LAB_05ca36ac:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


