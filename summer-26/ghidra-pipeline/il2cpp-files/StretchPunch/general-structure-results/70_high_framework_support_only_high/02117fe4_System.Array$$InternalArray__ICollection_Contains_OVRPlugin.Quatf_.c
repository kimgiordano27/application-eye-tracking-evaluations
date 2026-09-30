/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Quatf>
ENTRY_POINT: 02117fe4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


undefined1  [16]
System_Array__InternalArray__ICollection_Contains<OVRPlugin_Quatf>
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack0000000000000000;
  
  puVar4 = *(undefined8 **)(param_3 + 0x38);
  uStack0000000000000000 = param_1;
  if (puVar4 == (undefined8 *)0x0) {
    FUN_01d7d918(StringLiteral_1558);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    puVar4 = *(undefined8 **)(param_3 + 0x38);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_01dde854(param_3);
      puVar4 = *(undefined8 **)(param_3 + 0x38);
    }
  }
  uVar3 = FUN_01d7e564(*puVar4);
  if ((uVar3 & 1) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 8);
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar5 = FUN_033a87c8(uVar5,0);
    FUN_033b3798(uVar5,0);
  }
  auVar6._0_8_ = (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 0x18))(param_1,param_2);
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 0x28))();
  puVar4 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x38);
  iVar2 = (*(code *)*puVar4)(puVar4);
  if ((long)iVar2 * (long)iVar1 - (long)(int)((long)iVar2 * (long)iVar1) == 0) {
    auVar6._8_4_ = iVar2 * iVar1;
    auVar6._12_4_ = 0;
    return auVar6;
  }
  uVar5 = FUN_01d7db80();
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar5,param_3);
}


