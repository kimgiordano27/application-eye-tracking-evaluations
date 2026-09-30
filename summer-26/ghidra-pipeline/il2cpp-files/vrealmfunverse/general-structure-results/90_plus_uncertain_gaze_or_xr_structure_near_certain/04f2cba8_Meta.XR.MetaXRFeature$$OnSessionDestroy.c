/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionDestroy
ENTRY_POINT: 04f2cba8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionDestroy(void)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long unaff_x19;
  byte unaff_w21;
  long *plVar9;
  undefined8 uVar10;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000028;
  
  uVar10 = *(undefined8 *)PTR_DAT_06322450;
  plVar9 = *(long **)(unaff_x19 + 0x48);
  lVar2 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
  in_stack_00000010 = *(undefined4 *)(unaff_x19 + 100);
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)System_Collections_Generic_Dictionary<int,_FontAsset>_TypeInfo,
                     &stack0x00000010);
  uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)System_Collections_Generic_Dictionary<int,_Encoding>_TypeInfo,
                     &stack0x0000000c);
  uVar3 = FUN_04c0af28(*(undefined8 *)PTR_DAT_06325af8,uVar3,uVar4,0);
  if (lVar2 == 0) goto LAB_04f2cd80;
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
                    /* try { // try from 04f2cc44 to 0502cc53 has its CatchHandler @ 04f2cd18 */
    thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x20),uVar3);
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
                    /* try { // try from 04f2cc54 to 0502cc6f has its CatchHandler @ 04f2cb10 */
      *(undefined8 *)(lVar2 + 0x28) = in_stack_00000028;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x28));
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_06314998;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x30));
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar2 + 0x38) = uVar10;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x38),uVar10);
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)PTR_DAT_06314990;
            thunk_FUN_02bb0e9c();
            uVar3 = FUN_04c0ac30(lVar2,0);
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x558))(plVar9,uVar3,*(undefined8 *)(*plVar9 + 0x560));
              if (*(byte *)(unaff_x19 + 0x60) != (unaff_w21 & 1)) {
                bVar1 = (unaff_w21 & 1) == 0;
                if (bVar1) {
                  puVar5 = (undefined4 *)(unaff_x19 + 0x28);
                  puVar6 = (undefined4 *)(unaff_x19 + 0x2c);
                  puVar7 = (undefined4 *)(unaff_x19 + 0x30);
                  puVar8 = (undefined4 *)(unaff_x19 + 0x34);
                }
                else {
                  puVar5 = (undefined4 *)(unaff_x19 + 0x38);
                  puVar6 = (undefined4 *)(unaff_x19 + 0x3c);
                  puVar7 = (undefined4 *)(unaff_x19 + 0x40);
                  puVar8 = (undefined4 *)(unaff_x19 + 0x44);
                }
                if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_04f2cd80;
                FUN_05c59bb8(*puVar5,*puVar6,*puVar7,*puVar8,*(long *)(unaff_x19 + 0x58),0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


