/*
FUNCTION_NAME: FUN_021e3ff0
ENTRY_POINT: 021e3ff0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void FUN_021e3ff0(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_38;
  undefined8 local_28;
  
  puVar2 = StringLiteral_10103;
  local_28 = param_3;
  if ((DAT_03781779 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10103);
    thunk_FUN_00d48444(Method_Sirenix_Utilities_TypeExtensions_GetGenericBaseType__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__);
    DAT_03781779 = 1;
  }
  uVar3 = FUN_010f68c8(&local_28,*(undefined8 *)puVar2);
  if ((uVar3 & 1) != 0) {
    thunk_FUN_00d48444(Method_System_IO_BinaryReader_Read7BitEncodedInt__);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_01773d28(uVar4,0);
    uVar6 = thunk_FUN_00d48444(
                              Method_FullSerializer_fsBaseConverter_SerializeMember<ImagePosition>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar6);
  }
  uVar3 = FUN_010f68c8(&local_28,
                       *(undefined8 *)Method_Sirenix_Utilities_TypeExtensions_GetGenericBaseType__);
  if ((uVar3 & 1) == 0) {
    local_38 = local_28;
    uVar4 = thunk_FUN_00d48444(StringLiteral_3827);
    uVar4 = thunk_FUN_00d61fa0(uVar4,&local_38);
    uVar6 = thunk_FUN_00d48444(UnityEngine_InputSystem_Processors_AxisDeadzoneProcessor_var);
    uVar4 = FUN_015f6780(uVar6,uVar4,0);
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar7 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_n_s32__);
    FUN_016ec624(uVar6,uVar4,uVar7,0);
    uVar4 = thunk_FUN_00d48444(
                              Method_FullSerializer_fsBaseConverter_SerializeMember<ImagePosition>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,uVar4);
  }
  uVar4 = FUN_021d78c4(local_28,0);
  lVar5 = FUN_021dc1d8(uVar4,0);
  if ((param_2 != 0) && (*(long *)(param_2 + 0x78) != 0)) {
    uVar1 = *(uint *)(*(long *)(param_2 + 0x78) + 0x14);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_021d12bc(&local_28,0);
    FUN_021e41b0(param_1,param_2,lVar5 - (ulong)uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


