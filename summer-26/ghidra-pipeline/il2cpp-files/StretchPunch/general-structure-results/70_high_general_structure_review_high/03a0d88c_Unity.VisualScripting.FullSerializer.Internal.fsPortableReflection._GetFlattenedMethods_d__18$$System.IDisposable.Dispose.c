/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection.<GetFlattenedMethods>d__18$$System.IDisposable.Dispose
ENTRY_POINT: 03a0d88c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_<GetFlattenedMethods>d__18__System_IDisposable_Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong in_x9;
  int *piVar5;
  int unaff_w19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  
  do {
    if (in_x9 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_3) {
          puVar3 = (undefined8 *)(param_1 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_03a0d8d0;
        }
        in_x9 = in_x9 - 1;
        piVar5 = piVar5 + 4;
      } while (in_x9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01dde8fc();
LAB_03a0d8d0:
    iVar1 = (*(code *)*puVar3)();
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar2 = *unaff_x23;
    }
    if ((iVar1 == unaff_w19) || (iVar1 == *(int *)(*(long *)(lVar2 + 0xb8) + 4))) {
      return;
    }
    lVar2 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03a0d874;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01dde8fc();
LAB_03a0d874:
    (*(code *)*puVar3)();
    param_1 = *unaff_x20;
    param_3 = *unaff_x22;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
}


