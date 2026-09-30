/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_TraceWriter
ENTRY_POINT: 0170eed0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long * Newtonsoft_Json_JsonSerializerSettings__set_TraceWriter(void)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  thunk_FUN_00d48444();
  *(undefined1 *)(unaff_x19 + 0x9fa) = 1;
  plVar2 = (long *)thunk_FUN_00d62050();
  if (plVar2 != (long *)0x0) {
    if (*plVar2 != *(long *)Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__)
    {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar2);
    }
  }
  plVar3 = *(long **)(unaff_x20 + 0x78);
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    if (plVar2 != (long *)0x0) {
      if (plVar3 != (long *)0x0) {
        lVar4 = *(long *)Method_System_Xml_XmlLoader_ReadCurrentNode__;
        bVar1 = *(byte *)(lVar4 + 300);
        if ((bVar1 <= *(byte *)(*plVar3 + 300)) &&
           (*(long *)(*(long *)(*plVar3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar4)) {
          plVar2[0xf] = (long)plVar3;
          if ((bVar1 <= *(byte *)(*plVar3 + 300)) &&
             (*(long *)(*(long *)(*plVar3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar4))
          goto LAB_0170ef84;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      plVar2[0xf] = 0;
LAB_0170ef84:
      *(undefined1 *)(plVar2 + 0x28) = 0;
      return plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


