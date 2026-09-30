/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Create
ENTRY_POINT: 066e99ac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__Create(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int in_w10;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long unaff_x23;
  ulong unaff_x25;
  
  while( true ) {
    *(int *)(unaff_x20 + 0x1c) = in_w10 + 1;
    if (param_1 == 0) break;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_2;
      thunk_FUN_03afed3c();
    }
    else {
      FUN_04de85b0();
    }
    unaff_w22 = unaff_w22 + 1;
    iVar2 = (**(code **)(*unaff_x21 + 0x178))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x180));
    if (iVar2 <= unaff_w22) {
      do {
        unaff_x25 = unaff_x25 + 1;
        if ((int)*(uint *)(unaff_x23 + 0x18) <= (int)unaff_x25) {
          if (unaff_x20 != 0) {
            FUN_04de87c0();
            FUN_04dea100();
            return;
          }
          goto LAB_066e9a80;
        }
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        unaff_x21 = *(long **)(unaff_x23 + unaff_x25 * 8 + 0x20);
        if (unaff_x21 == (long *)0x0) goto LAB_066e9a80;
        iVar2 = (**(code **)(*unaff_x21 + 0x178))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x180));
      } while (iVar2 < 1);
      unaff_w22 = 0;
    }
    param_2 = (**(code **)(*unaff_x21 + 0x188))
                        (unaff_x21,unaff_w22,*(undefined8 *)(*unaff_x21 + 400));
    if (unaff_x20 == 0) break;
    in_w10 = *(int *)(unaff_x20 + 0x1c);
    param_1 = *(long *)(unaff_x20 + 0x10);
  }
LAB_066e9a80:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


