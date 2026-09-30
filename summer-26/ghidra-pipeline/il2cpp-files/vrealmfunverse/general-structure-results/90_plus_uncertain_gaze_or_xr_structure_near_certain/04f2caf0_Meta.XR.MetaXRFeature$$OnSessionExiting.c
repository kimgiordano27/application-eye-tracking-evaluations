/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionExiting
ENTRY_POINT: 04f2caf0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionExiting(long param_1,char param_2)

{
  bool bVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long unaff_x19;
  long *plVar14;
  long *unaff_x26;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000028;
  
  uVar9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 04f2cb10 to 0502cc43 has its CatchHandler @ 04f2cb10
                       catch() { ... } // from try @ 04f2cb10 with catch @ 04f2cb10
                       catch() { ... } // from try @ 04f2cc54 with catch @ 04f2cb10
                       catch() { ... } // from try @ 04f2cc78 with catch @ 04f2cb10
                       catch() { ... } // from try @ 04f2cd4c with catch @ 04f2cb10
                       catch() { ... } // from try @ 04f2ce10 with catch @ 04f2cb10 */
      if (*(long *)(piVar11 + -2) == *unaff_x26) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_04f2cb48;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_02b7654c();
LAB_04f2cb48:
  bVar2 = (*(code *)*puVar3)();
  if (param_2 == '\0') {
    uVar4 = *(undefined8 *)PTR_DAT_06322450;
  }
  else {
    uStack0000000000000014 = FUN_03adc574(&stack0x00000018,*(undefined8 *)PTR_DAT_0631c430);
    uVar4 = FUN_04d8e0f0((long)&stack0x00000010 + 4,*(undefined8 *)PTR_DAT_063142c8,0);
  }
  plVar14 = *(long **)(unaff_x19 + 0x48);
  lVar5 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
  uStack0000000000000010 = *(undefined4 *)(unaff_x19 + 100);
  uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)System_Collections_Generic_Dictionary<int,_FontAsset>_TypeInfo,
                     &stack0x00000010);
  uVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)System_Collections_Generic_Dictionary<int,_Encoding>_TypeInfo,
                     &stack0x0000000c);
  uVar6 = FUN_04c0af28(*(undefined8 *)PTR_DAT_06325af8,uVar6,uVar7,0);
  if (lVar5 == 0) goto LAB_04f2cd80;
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20),uVar6);
    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar5 + 0x28) = in_stack_00000028;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x28));
      if (2 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_06314998;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x30));
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar5 + 0x38) = uVar4;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x38),uVar4);
          if (4 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_06314990;
            thunk_FUN_02bb0e9c();
            uVar4 = FUN_04c0ac30(lVar5,0);
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x558))(plVar14,uVar4,*(undefined8 *)(*plVar14 + 0x560));
              if (*(byte *)(unaff_x19 + 0x60) != (bVar2 & 1)) {
                bVar1 = (bVar2 & 1) == 0;
                if (bVar1) {
                  puVar8 = (undefined4 *)(unaff_x19 + 0x28);
                  puVar10 = (undefined4 *)(unaff_x19 + 0x2c);
                  puVar12 = (undefined4 *)(unaff_x19 + 0x30);
                  puVar13 = (undefined4 *)(unaff_x19 + 0x34);
                }
                else {
                  puVar8 = (undefined4 *)(unaff_x19 + 0x38);
                  puVar10 = (undefined4 *)(unaff_x19 + 0x3c);
                  puVar12 = (undefined4 *)(unaff_x19 + 0x40);
                  puVar13 = (undefined4 *)(unaff_x19 + 0x44);
                }
                if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_04f2cd80;
                FUN_05c59bb8(*puVar8,*puVar10,*puVar12,*puVar13,*(long *)(unaff_x19 + 0x58),0);
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


