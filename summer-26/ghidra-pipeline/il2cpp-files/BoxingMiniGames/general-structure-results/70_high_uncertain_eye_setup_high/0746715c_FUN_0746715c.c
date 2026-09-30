/*
FUNCTION_NAME: FUN_0746715c
ENTRY_POINT: 0746715c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0746715c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_07ef3d0c & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                );
    FUN_03642964(Method_System_Collections_Generic_List<MonoChunkParser_Chunk>_GetEnumerator__);
    DAT_07ef3d0c = 1;
  }
  if ((param_2 == 0) ||
     (plVar2 = (long *)FUN_07464244(param_2),
     puVar1 = Method_System_Collections_Generic_List<MonoChunkParser_Chunk>_GetEnumerator__,
     plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)
           Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
         ) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
        goto LAB_07467208;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_0367cd30(plVar2,*(long *)
                                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                        ,0xb);
LAB_07467208:
  uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  uVar4 = 1;
  if ((uVar6 & 1) == 0) {
    uVar4 = 2;
  }
  FUN_049267b0(uVar4,*(undefined4 *)(param_2 + 0x14),*(undefined8 *)puVar1);
  return;
}


