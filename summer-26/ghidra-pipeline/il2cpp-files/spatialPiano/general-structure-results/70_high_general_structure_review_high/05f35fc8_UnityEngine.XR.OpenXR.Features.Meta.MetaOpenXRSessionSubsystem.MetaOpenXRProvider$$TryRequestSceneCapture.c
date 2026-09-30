/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Meta.MetaOpenXRSessionSubsystem.MetaOpenXRProvider$$TryRequestSceneCapture
ENTRY_POINT: 05f35fc8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05f361e8) */

void UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_MetaOpenXRProvider__TryRequestSceneCapture
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 in_w8;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long lStack0000000000000018;
  
  *(undefined1 *)(unaff_x23 + 0xa4f) = in_w8;
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_s64__;
  lStack0000000000000018 = 0;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x22;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x90);
  if (lVar3 != 0) {
    FUN_0609aee8(lVar3,0);
  }
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s64__;
  lStack0000000000000018 = lVar3;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar3 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s64__) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
        goto LAB_05f36074;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0();
LAB_05f36074:
  (*(code *)*puVar4)();
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s8__;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar3 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s8__) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
        goto LAB_05f360e0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0();
LAB_05f360e0:
  (*(code *)*puVar4)();
  lVar3 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0xe) * 0x10 + 0x138);
        goto LAB_05f36140;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0();
LAB_05f36140:
  (*(code *)*puVar4)();
  lVar3 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0xe) * 0x10 + 0x138);
        goto FUN_05f361a0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0();
FUN_05f361a0:
  (*(code *)*puVar4)();
  if (lStack0000000000000018 != 0) {
    FUN_0609af70(lStack0000000000000018,0);
  }
  return;
}


