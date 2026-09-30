/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolvePropertyAndCreatorValues
ENTRY_POINT: 04d4a814
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolvePropertyAndCreatorValues
                (long param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  uint unaff_w25;
  
  do {
    if (*(int *)(param_1 + 0x18) == 0) {
LAB_04d4a8c4:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    *(char *)(param_1 + 0x20) = (char)param_2;
    if (((int)param_2 == -1) || (unaff_w25 == 0)) {
      if ((int)param_2 == -1) {
        return param_2;
      }
    }
    else {
      plVar2 = *(long **)(unaff_x19 + 0x10);
      if (plVar2 == (long *)0x0) goto LAB_04d4a92c;
      iVar1 = (**(code **)(*plVar2 + 0x358))(plVar2,*(undefined8 *)(*plVar2 + 0x360));
      lVar3 = *unaff_x21;
      if (lVar3 == 0) goto LAB_04d4a92c;
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) goto LAB_04d4a8c4;
      *(char *)(lVar3 + 0x21) = (char)iVar1;
      unaff_w23 = unaff_w24;
      if (iVar1 != -1) {
        unaff_w23 = unaff_w24 + 1;
      }
    }
    plVar2 = *(long **)(unaff_x19 + 0x20);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar1 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*unaff_x21,0,unaff_w23,*unaff_x22,0,*(undefined8 *)(*plVar2 + 0x1c0));
    if (iVar1 != 0) {
      lVar3 = *unaff_x22;
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) != 0) {
          return (ulong)*(ushort *)(lVar3 + 0x20);
        }
        goto LAB_04d4a8c4;
      }
      goto LAB_04d4a92c;
    }
    unaff_w25 = (uint)*(byte *)(unaff_x19 + 0x44);
    plVar2 = *(long **)(unaff_x19 + 0x10);
    unaff_w23 = unaff_w24;
    if (*(byte *)(unaff_x19 + 0x44) != 0) {
      unaff_w23 = unaff_w24 + 1;
    }
    if (plVar2 == (long *)0x0) goto LAB_04d4a92c;
    param_2 = (**(code **)(*plVar2 + 0x358))(plVar2,*(undefined8 *)(*plVar2 + 0x360));
    param_1 = *unaff_x21;
    if (param_1 == 0) {
LAB_04d4a92c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  } while( true );
}


