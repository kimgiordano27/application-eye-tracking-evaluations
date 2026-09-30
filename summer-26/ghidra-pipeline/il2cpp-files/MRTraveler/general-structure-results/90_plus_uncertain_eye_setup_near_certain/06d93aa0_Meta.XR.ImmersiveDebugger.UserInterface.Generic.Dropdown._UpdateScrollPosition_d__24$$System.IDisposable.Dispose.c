/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$System.IDisposable.Dispose
ENTRY_POINT: 06d93aa0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__System_IDisposable_Dispose
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  long lVar6;
  uint uVar7;
  long lVar8;
  long *unaff_x24;
  
  FUN_04d4ebcc(param_2,param_3,*param_1);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
  *puVar4 = param_2;
  thunk_FUN_03d233cc(puVar4,param_2);
  lVar5 = FUN_04633ec0();
  puVar2 = PTR_DAT_08e8ec88;
  lVar6 = *(long *)(unaff_x19 + 0x28);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        lVar8 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
        if ((lVar8 == 0) || (lVar5 == 0)) goto LAB_06d93b48;
        uVar3 = FUN_069a0c14(lVar5,*(undefined4 *)(lVar8 + 0x14),*(undefined8 *)puVar2);
        *(undefined4 *)(lVar8 + 0x10) = uVar3;
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
    return;
  }
LAB_06d93b48:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


