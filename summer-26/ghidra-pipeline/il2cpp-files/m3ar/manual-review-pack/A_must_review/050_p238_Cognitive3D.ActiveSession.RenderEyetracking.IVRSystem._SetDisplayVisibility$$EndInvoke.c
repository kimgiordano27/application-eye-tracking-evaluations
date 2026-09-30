/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._SetDisplayVisibility$$EndInvoke
ENTRY_POINT: 0431696c
PROGRAM: m3ar-libil2cpp.so
SCORE: 127
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__SetDisplayVisibility__EndInvoke
               (ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 04316974 to 04416aab has its CatchHandler @ 04316974
                       catch() { ... } // from try @ 04316974 with catch @ 04316974
                       catch() { ... } // from try @ 04316edc with catch @ 04316974
                       catch() { ... } // from try @ 04316f40 with catch @ 04316974
                       catch() { ... } // from try @ 04316ff4 with catch @ 04316974
                       catch() { ... } // from try @ 04317060 with catch @ 04316974 */
    FUN_0403162c(PTR_DAT_08f6bfc8);
    FUN_0403162c(PTR_DAT_08f68760);
    FUN_0403162c(PTR_DAT_08f73818);
    *(undefined1 *)(unaff_x21 + 0xdfc) = 1;
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    FUN_042839b0(&stack0x00000008,*(long *)(unaff_x20 + 0x60),unaff_w19,0);
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      uVar3 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      lVar2 = FUN_0428386c(*(long *)(unaff_x20 + 0x58),unaff_w19,0);
      puVar1 = PTR_DAT_08f73818;
      plVar4 = *(long **)(unaff_x20 + 0x20);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x558))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x560));
        plVar4 = *(long **)(unaff_x20 + 0x30);
        uVar3 = FUN_0735fe18(*(undefined8 *)puVar1,uVar3,0);
        puVar1 = PTR_DAT_08f6bfc8;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x558))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x560));
          plVar4 = *(long **)(unaff_x20 + 0x28);
          uStack0000000000000008 = (undefined4)((ulong)lVar2 >> 0x20);
          uVar3 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x48),&stack0x00000008);
          uVar3 = FUN_0735fe18(*(undefined8 *)puVar1,uVar3,0);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x558))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x560));
            plVar4 = *(long **)(unaff_x20 + 0x38);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x178))
                        (plVar4,(ulong)unaff_w19 | lVar2 << 0x20,0,1,*(undefined8 *)PTR_DAT_08f68760
                         ,*(undefined8 *)(*plVar4 + 0x180));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


