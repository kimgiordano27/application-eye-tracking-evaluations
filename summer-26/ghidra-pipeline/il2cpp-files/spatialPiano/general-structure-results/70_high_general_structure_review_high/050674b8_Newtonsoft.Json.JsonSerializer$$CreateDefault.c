/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateDefault
ENTRY_POINT: 050674b8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_5
*/


long Newtonsoft_Json_JsonSerializer__CreateDefault(void)

{
  ulong uVar1;
  undefined4 uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  thunk_FUN_02f168c4();
  if (unaff_x20 != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x40);
    goto LAB_050675e0;
  }
  uVar4 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar1 = thunk_FUN_04f6d944(uVar4,*(undefined8 *)PTR_DAT_067d5678,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = thunk_FUN_04f6d944(uVar4,*(undefined8 *)PTR_DAT_067dc180,0);
    if ((uVar1 & 1) != 0) {
      lVar3 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067cb890,2);
      if (lVar3 == 0) goto LAB_0506761c;
      if ((*(int *)(lVar3 + 0x18) == 0) ||
         (*(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(unaff_x19 + 100),
         *(int *)(lVar3 + 0x18) == 1)) goto LAB_05067618;
      uVar2 = 4;
      goto Newtonsoft_Json_JsonSerializerSettings__get_TypeNameAssemblyFormatHandling;
    }
    uVar1 = thunk_FUN_04f6d944(uVar4,*(undefined8 *)PTR_DAT_067dc178,0);
    if ((uVar1 & 1) != 0) {
      lVar3 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067cb890,2);
      if (lVar3 == 0) {
LAB_0506761c:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if ((*(int *)(lVar3 + 0x18) == 0) ||
         (*(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(unaff_x19 + 100),
         *(int *)(lVar3 + 0x18) == 1)) {
LAB_05067618:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uVar2 = 8;
      goto Newtonsoft_Json_JsonSerializerSettings__get_TypeNameAssemblyFormatHandling;
    }
    lVar3 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067cb890,1);
    if (lVar3 == 0) goto LAB_0506761c;
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_05067618;
    *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(unaff_x19 + 100);
  }
  else {
    lVar3 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067cb890,2);
    if (lVar3 == 0) goto LAB_0506761c;
    if ((*(int *)(lVar3 + 0x18) == 0) ||
       (*(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(unaff_x19 + 100),
       *(int *)(lVar3 + 0x18) == 1)) goto LAB_05067618;
    uVar2 = 3;
Newtonsoft_Json_JsonSerializerSettings__get_TypeNameAssemblyFormatHandling:
    *(undefined4 *)(lVar3 + 0x24) = uVar2;
  }
  thunk_FUN_02f168c4();
  *(long *)(unaff_x19 + 0x40) = lVar3;
LAB_050675e0:
  thunk_FUN_02f168c4();
  return lVar3;
}


