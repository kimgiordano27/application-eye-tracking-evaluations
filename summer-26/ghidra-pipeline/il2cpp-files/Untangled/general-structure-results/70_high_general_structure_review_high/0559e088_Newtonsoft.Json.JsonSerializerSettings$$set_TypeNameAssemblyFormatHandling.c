/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_TypeNameAssemblyFormatHandling
ENTRY_POINT: 0559e088
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_TypeNameAssemblyFormatHandling(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w22;
  int iVar2;
  ulong uVar3;
  long *unaff_x23;
  
  do {
    FUN_0559cd14(param_1,unaff_w22);
    FUN_0559e27c();
    lVar1 = FUN_0559abf0();
    if (lVar1 == 0) break;
    FUN_0559cc14(lVar1,unaff_w22);
    FUN_0559e27c();
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == 0xd) {
      iVar2 = 0;
      goto LAB_0559e0e0;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    param_1 = FUN_0559abf0();
  } while (param_1 != 0);
  goto LAB_0559e1ac;
  while( true ) {
    FUN_0559cb18(lVar1,iVar2);
    FUN_0559e27c();
    lVar1 = FUN_0559abf0();
    if (lVar1 == 0) goto LAB_0559e1ac;
    FUN_0559c314(lVar1,iVar2);
    FUN_0559e27c();
    iVar2 = iVar2 + 1;
    if (iVar2 == 7) break;
LAB_0559e0e0:
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar1 = FUN_0559abf0();
    if (lVar1 == 0) goto LAB_0559e1ac;
  }
  lVar1 = FUN_0559b524();
  if (lVar1 != 0) {
    uVar3 = 0;
    do {
      if ((long)*(int *)(lVar1 + 0x18) <= (long)uVar3) {
        FUN_0559e27c();
        FUN_0559e27c();
        FUN_0559e27c();
        FUN_0559e27c();
        FUN_0559e27c();
        *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
        thunk_FUN_02f411dc();
        return;
      }
      lVar1 = FUN_0559b524();
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      uVar3 = uVar3 + 1;
      FUN_0559e27c();
      lVar1 = FUN_0559b524();
    } while (lVar1 != 0);
  }
LAB_0559e1ac:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


