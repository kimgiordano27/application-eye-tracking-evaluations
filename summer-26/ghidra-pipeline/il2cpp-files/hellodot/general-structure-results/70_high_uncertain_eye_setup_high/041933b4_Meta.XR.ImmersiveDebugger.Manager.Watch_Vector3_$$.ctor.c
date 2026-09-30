/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$.ctor
ENTRY_POINT: 041933b4
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>___ctor
               (ulong param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c97b0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8918);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca920);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e0110);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c95e8);
    *(undefined1 *)(unaff_x20 + 0x5cb) = 1;
  }
  lVar2 = FUN_02ce7ad4(*unaff_x22,5);
  if (lVar2 != 0) {
    uVar5 = (uint)*(undefined8 *)(lVar2 + 0x18);
    if (uVar5 != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_065e0110;
      plVar6 = (long *)*param_2;
      if (plVar6 == (long *)0x0) {
        uVar3 = 0;
      }
      else {
        if (plVar6 == (long *)0x0) goto LAB_04193500;
        uVar3 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        uVar5 = (uint)*(undefined8 *)(lVar2 + 0x18);
      }
      if ((1 < uVar5) &&
         (*(undefined8 *)(lVar2 + 0x28) = uVar3, puVar1 = PTR_DAT_065c97b0, uVar5 != 2)) {
        *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_065ca920;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        lVar4 = *(long *)(param_3 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02ce0978();
        }
        uVar3 = FUN_04ea1828(param_2 + 1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xd0));
        if ((3 < *(uint *)(lVar2 + 0x18)) &&
           (*(undefined8 *)(lVar2 + 0x38) = uVar3, *(uint *)(lVar2 + 0x18) != 4)) {
          *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)PTR_DAT_065c95e8;
          FUN_04db97ac(lVar2,0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
LAB_04193500:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


