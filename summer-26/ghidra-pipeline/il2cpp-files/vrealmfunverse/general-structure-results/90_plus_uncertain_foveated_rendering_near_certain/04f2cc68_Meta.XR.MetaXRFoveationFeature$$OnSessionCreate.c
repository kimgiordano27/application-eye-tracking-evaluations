/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$OnSessionCreate
ENTRY_POINT: 04f2cc68
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 121
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFoveationFeature__OnSessionCreate(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  
                    /* try { // try from 04f2cc70 to 0502cc77 has its CatchHandler @ 04f2cd1c */
  if (2 < *(uint *)(unaff_x20 + -0x10)) {
                    /* try { // try from 04f2cc78 to 0502cd33 has its CatchHandler @ 04f2cb10 */
    *(undefined8 *)(unaff_x23 + 0x30) = *(undefined8 *)PTR_DAT_06314998;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x23 + 0x30));
    if ((*(uint *)(unaff_x23 + 0x18) & 0xfffffffc) != 0) {
      *(undefined8 *)(unaff_x23 + 0x38) = unaff_x24;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x23 + 0x38));
      if (4 < *(uint *)(unaff_x23 + 0x18)) {
        *(undefined8 *)(unaff_x23 + 0x40) = *(undefined8 *)PTR_DAT_06314990;
        thunk_FUN_02bb0e9c();
        FUN_04c0ac30();
        if (unaff_x22 != (long *)0x0) {
          (**(code **)(*unaff_x22 + 0x558))();
          if (*(byte *)(unaff_x19 + 0x60) != (unaff_w21 & 1)) {
            bVar1 = (unaff_w21 & 1) == 0;
            if (bVar1) {
              puVar2 = (undefined4 *)(unaff_x19 + 0x28);
              puVar3 = (undefined4 *)(unaff_x19 + 0x2c);
              puVar4 = (undefined4 *)(unaff_x19 + 0x30);
              puVar5 = (undefined4 *)(unaff_x19 + 0x34);
            }
            else {
              puVar2 = (undefined4 *)(unaff_x19 + 0x38);
              puVar3 = (undefined4 *)(unaff_x19 + 0x3c);
              puVar4 = (undefined4 *)(unaff_x19 + 0x40);
              puVar5 = (undefined4 *)(unaff_x19 + 0x44);
            }
            if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_04f2cd80;
            FUN_05c59bb8(*puVar2,*puVar3,*puVar4,*puVar5,*(long *)(unaff_x19 + 0x58),0);
            *(byte *)(unaff_x19 + 0x60) = !bVar1;
          }
          return;
        }
LAB_04f2cd80:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


