/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Vector4f>
ENTRY_POINT: 020eefe4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>
               (ulong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,int param_9)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long unaff_x21;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  uStack000000000000002c = param_3;
  uStack0000000000000030 = param_4;
  uStack0000000000000034 = param_5;
  uStack0000000000000038 = param_6;
  uStack000000000000003c = param_7;
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<MeshUtils_Edge>_Create__
                      );
    *(undefined1 *)(unaff_x21 + 0xae2) = 1;
  }
  puVar2 = 
  Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<MeshUtils_Edge>_Create__;
  if (param_9 < 3) {
    param_9 = 2;
  }
  if (param_8 != 0) {
    iVar5 = 0;
    while( true ) {
      uVar7 = uStack000000000000002c;
      uVar8 = uStack0000000000000030;
      uVar6 = FUN_020eedfc(param_2,uStack000000000000002c,uStack0000000000000030,
                           uStack0000000000000034,uStack0000000000000038,uStack000000000000003c);
      lVar3 = *(long *)(param_8 + 0x10);
      lVar4 = *(long *)puVar2;
      *(int *)(param_8 + 0x1c) = *(int *)(param_8 + 0x1c) + 1;
      if (lVar3 == 0) break;
      uVar1 = *(uint *)(param_8 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar1 * 0xc;
        *(uint *)(param_8 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar3 + 0x20) = uVar6;
        *(undefined4 *)(lVar3 + 0x24) = uVar7;
        *(undefined4 *)(lVar3 + 0x28) = uVar8;
      }
      else {
        FUN_031800a8(param_8,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      iVar5 = iVar5 + 1;
      if (param_9 == iVar5) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


