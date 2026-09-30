/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<ProbeVolumeSceneData.SerializablePVProfile>
ENTRY_POINT: 022d1afc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x022d1c1c) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<ProbeVolumeSceneData_SerializablePVProfile>
               (void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 unaff_w19;
  long *unaff_x21;
  long *unaff_x22;
  
  lVar1 = (**(code **)(*unaff_x21 + 0x188))();
  if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar2 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
  if (lVar1 == lVar2) {
    if (*unaff_x21 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    if ((int)unaff_x21[0x16] == 0) {
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_041e2260(unaff_w19,0,0);
    }
  }
  lVar1 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_022d1bb8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_022d1bb8:
  (*(code *)*puVar3)();
  return;
}


