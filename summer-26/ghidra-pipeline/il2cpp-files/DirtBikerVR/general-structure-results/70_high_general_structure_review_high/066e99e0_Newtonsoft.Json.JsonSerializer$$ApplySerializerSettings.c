/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$ApplySerializerSettings
ENTRY_POINT: 066e99e0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__ApplySerializerSettings(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long unaff_x23;
  ulong unaff_x25;
  
code_r0x066e99e0:
  thunk_FUN_03afed3c();
  do {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 066e99a0 with catch @ 066e99fc
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 066e99e8 with catch @ 066e9a00
                        */
    unaff_w22 = unaff_w22 + 1;
    iVar2 = (**(code **)(*unaff_x21 + 0x178))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x180));
    if (iVar2 <= unaff_w22) {
      do {
                    /* try { // try from 066e9a18 to 067e9a63 has its CatchHandler @ 066e9acc */
        unaff_x25 = unaff_x25 + 1;
        if ((int)*(uint *)(unaff_x23 + 0x18) <= (int)unaff_x25) {
          if (unaff_x20 != 0) {
            FUN_04de87c0();
                    /* try { // try from 066e9a64 to 067e9abb has its CatchHandler @ 066e9908 */
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
    uVar3 = (**(code **)(*unaff_x21 + 0x188))(unaff_x21,unaff_w22,*(undefined8 *)(*unaff_x21 + 400))
    ;
    if (unaff_x20 == 0) {
LAB_066e9a80:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_066e9a80;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) break;
    FUN_04de85b0();
  } while( true );
  *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
  *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
  goto code_r0x066e99e0;
}


