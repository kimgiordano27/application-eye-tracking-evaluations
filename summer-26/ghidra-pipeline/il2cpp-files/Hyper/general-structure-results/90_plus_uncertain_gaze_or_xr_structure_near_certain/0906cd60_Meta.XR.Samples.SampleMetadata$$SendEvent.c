/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 0906cd60
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Samples_SampleMetadata__SendEvent(long param_1)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *in_x10;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long unaff_x19;
  char unaff_w21;
  long *plVar11;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000028;
  
  bVar2 = (**(code **)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138))();
  if (unaff_w21 == '\0') {
    uVar3 = *(undefined8 *)PTR_DAT_0ac1db28;
  }
  else {
    uStack0000000000000014 = FUN_06fc9c6c(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac16090);
    uVar3 = FUN_08d8d754((long)&stack0x00000010 + 4,*(undefined8 *)PTR_DAT_0ac1e590,0);
  }
  plVar11 = *(long **)(unaff_x19 + 0x48);
  lVar4 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac097b0,5);
  uStack0000000000000010 = *(undefined4 *)(unaff_x19 + 100);
  uVar5 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac783f0,&stack0x00000010);
  uVar6 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac783e8,&stack0x0000000c);
  uVar5 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac12e78,uVar5,uVar6,0);
  if (lVar4 == 0) goto LAB_0906cfa8;
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    thunk_FUN_049ee3d8((undefined8 *)(lVar4 + 0x20),uVar5);
    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar4 + 0x28) = in_stack_00000028;
      thunk_FUN_049ee3d8((undefined8 *)(lVar4 + 0x28));
      if (2 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_0ac26410;
        thunk_FUN_049ee3d8((undefined8 *)(lVar4 + 0x30));
        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar4 + 0x38) = uVar3;
          thunk_FUN_049ee3d8((undefined8 *)(lVar4 + 0x38),uVar3);
          if (4 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_0ac0b0f0;
            thunk_FUN_049ee3d8();
            uVar3 = FUN_08bda330(lVar4,0);
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x558))(plVar11,uVar3,*(undefined8 *)(*plVar11 + 0x560));
              if (*(byte *)(unaff_x19 + 0x60) != (bVar2 & 1)) {
                bVar1 = (bVar2 & 1) == 0;
                if (bVar1) {
                  puVar7 = (undefined4 *)(unaff_x19 + 0x28);
                  puVar8 = (undefined4 *)(unaff_x19 + 0x2c);
                  puVar9 = (undefined4 *)(unaff_x19 + 0x30);
                  puVar10 = (undefined4 *)(unaff_x19 + 0x34);
                }
                else {
                  puVar7 = (undefined4 *)(unaff_x19 + 0x38);
                  puVar8 = (undefined4 *)(unaff_x19 + 0x3c);
                  puVar9 = (undefined4 *)(unaff_x19 + 0x40);
                  puVar10 = (undefined4 *)(unaff_x19 + 0x44);
                }
                if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_0906cfa8;
                FUN_0a14a4e8(*puVar7,*puVar8,*puVar9,*puVar10,*(long *)(unaff_x19 + 0x58),0);
                *(byte *)(unaff_x19 + 0x60) = !bVar1;
              }
              return;
            }
LAB_0906cfa8:
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


