/*
FUNCTION_NAME: Unity.VisualScripting.RuntimeCodebase$$DeserializeType
ENTRY_POINT: 05c4bab0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_RuntimeCodebase__DeserializeType(ulong param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  long unaff_x21;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
                );
    *(undefined1 *)(unaff_x21 + 0x2e4) = 1;
  }
  puVar2 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__;
  lVar4 = *(long *)(param_2 + 0x60);
  if (lVar4 != 0) {
    uVar3 = 0;
    lVar5 = 0x20;
    do {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if ((long)(int)uVar1 <= (long)uVar3) {
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        uVar1 = *(uint *)(lVar4 + 0x18);
      }
      if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      lVar4 = lVar4 + lVar5;
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0x50;
      FUN_05c3f148(lVar4,0,param_3 & 1);
      lVar4 = *(long *)(param_2 + 0x60);
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


