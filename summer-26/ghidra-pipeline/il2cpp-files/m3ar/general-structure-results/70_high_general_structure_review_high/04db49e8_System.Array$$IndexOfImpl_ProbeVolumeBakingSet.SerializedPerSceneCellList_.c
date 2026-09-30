/*
FUNCTION_NAME: System.Array$$IndexOfImpl<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 04db49e8
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04db4b88) */

void System_Array__IndexOfImpl<ProbeVolumeBakingSet_SerializedPerSceneCellList>(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  int iVar6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_000001b8;
  
  if (param_1 == 0) {
    uVar2 = FUN_087c1024();
    if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar4 = FUN_074fe038(uVar2,0,0);
    if ((uVar4 & 1) == 0) {
LAB_04db4af8:
      iVar6 = 0x13;
      goto LAB_04db4b28;
    }
    uVar4 = FUN_087c0fac();
    if ((uVar4 & 1) == 0) {
      memcpy(&stack0x00000100,(void *)(unaff_x19 + 0x10),0x90);
      iVar6 = *(int *)(unaff_x19 + 0xb8);
      *(int *)(unaff_x19 + 0xb8) = iVar6 + 1;
      UnityEngine_UIElements_TextElement__OnGenerateVisualContent(&stack0x00000100,iVar6,0);
      in_stack_00000198 = in_stack_00000008;
      in_stack_00000190 = in_stack_00000000;
      in_stack_000001a8 = in_stack_00000018;
      in_stack_000001a0 = in_stack_00000010;
      uVar4 = FUN_086299dc(&stack0x00000190,0);
      if ((uVar4 & 1) == 0) goto LAB_04db4af8;
      *(undefined8 *)(unaff_x19 + 0xb0) = uVar2;
      lVar3 = FUN_0862ccb8(uVar2,0);
      if (lVar3 != 0) {
        FUN_03a90f00(0,*(undefined8 *)PTR_DAT_08f8c250,lVar3);
      }
    }
  }
  else {
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f8c250) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04db4b10;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20();
LAB_04db4b10:
    (*(code *)*puVar1)();
  }
  iVar6 = 3;
LAB_04db4b28:
  FUN_0722d3d0(&stack0x000000b0,*(undefined8 *)(*(long *)(in_stack_000001b8 + 0x38) + 0x58));
  if ((((iVar6 == 0) || (iVar6 == 0x13)) && (uVar4 = FUN_087c0fac(), (uVar4 & 1) == 0)) &&
     (*(int *)(unaff_x19 + 0xa8) == 0)) {
    *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  }
  return;
}


