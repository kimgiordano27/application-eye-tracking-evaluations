/*
FUNCTION_NAME: FUN_06a6e1d8
ENTRY_POINT: 06a6e1d8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_06a6e1d8(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x24;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_stack_00000068;
  
code_r0x06a6e1d8:
  if (in_stack_00000068 != 0) {
    in_stack_00000068 = *(long *)(in_stack_00000068 + 0x48);
    if (in_stack_00000068 == 0) {
      return;
    }
    if (in_stack_00000068 != 0) {
      uVar2 = FUN_06b2752c(in_stack_00000068,0);
      if ((uVar2 & 1) == 0) {
        if ((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x30) != 0)) goto code_r0x06a6e104;
      }
      else if (unaff_x20 != 0)
      goto UnityEngine_Networking_UnityWebRequest__set_disposeCertificateHandlerOnDispose;
    }
  }
  goto LAB_06a6e204;
code_r0x06a6e104:
  uVar2 = FUN_06aac26c(*(long *)(unaff_x20 + 0x30),in_stack_00000068,0);
  if ((uVar2 & 1) != 0) {
UnityEngine_Networking_UnityWebRequest__set_disposeCertificateHandlerOnDispose:
    uVar2 = FUN_06a6de34(*(undefined8 *)(unaff_x20 + 0x20),in_stack_00000068,
                         *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      unaff_x19[2] = in_stack_00000068;
      thunk_FUN_03048534();
      uVar3 = unaff_x19[2];
      uVar6 = unaff_x19[1];
      uVar5 = *unaff_x19;
      if (unaff_x21 == 0) {
LAB_06a6e204:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      lVar4 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_06a6e204;
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
        lVar4 = lVar4 + (int)uVar1 * unaff_x24;
        *(undefined8 *)(lVar4 + 0x30) = uVar3;
        *(undefined8 *)(lVar4 + 0x28) = uVar6;
        *(undefined8 *)(lVar4 + 0x20) = uVar5;
        thunk_FUN_03048534(lVar4 + 0x20,0);
      }
      else {
        System_Collections_Generic_List<InputActionMap_BindingOverrideJson>__TrimExcess();
      }
    }
  }
  goto code_r0x06a6e1d8;
}


