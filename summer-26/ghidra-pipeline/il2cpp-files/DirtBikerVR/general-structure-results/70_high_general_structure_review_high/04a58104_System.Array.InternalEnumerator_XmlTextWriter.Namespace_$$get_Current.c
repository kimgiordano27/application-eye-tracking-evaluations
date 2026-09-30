/*
FUNCTION_NAME: System.Array.InternalEnumerator<XmlTextWriter.Namespace>$$get_Current
ENTRY_POINT: 04a58104
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


long System_Array_InternalEnumerator<XmlTextWriter_Namespace>__get_Current(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_08492148;
  if ((DAT_089762df & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08492148);
    DAT_089762df = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    if (((*(char *)(lVar2 + 0x4e9) == '\0') || (*(char *)(param_1 + 0xa4) != '\0')) ||
       (*(char *)(param_1 + 0x108) != '\0')) {
      puVar3 = (undefined8 *)FUN_04a58220(param_1);
      uVar6 = *puVar3;
      if (0 < *(int *)(param_1 + 0xe0)) {
        plVar4 = *(long **)(param_1 + 0xe8);
        if (plVar4 == (long *)0x0) goto LAB_04a58218;
        uVar6 = (**(code **)(*plVar4 + 0x1a8))(plVar4,param_1,*(undefined8 *)(*plVar4 + 0x1b0));
        if ((*(long *)(param_1 + 0xf0) != 0) && (0 < *(int *)(param_1 + 0xe0) + -1)) {
          uVar5 = 0;
          do {
            lVar2 = *(long *)(param_1 + 0xf0);
            if (lVar2 == 0) goto LAB_04a58218;
            if (*(uint *)(lVar2 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c8();
            }
            plVar4 = *(long **)(lVar2 + uVar5 * 8 + 0x20);
            if (plVar4 == (long *)0x0) goto LAB_04a58218;
            uVar6 = (**(code **)(*plVar4 + 0x1a8))(plVar4,param_1,*(undefined8 *)(*plVar4 + 0x1b0));
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < (long)(*(int *)(param_1 + 0xe0) + -1));
        }
      }
      *(undefined8 *)(param_1 + 0xf8) = uVar6;
      *(undefined1 *)(param_1 + 0xa4) = 0;
    }
    return param_1 + 0xf8;
  }
LAB_04a58218:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


