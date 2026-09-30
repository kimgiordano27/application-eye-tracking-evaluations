/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNative$$dlclose
ENTRY_POINT: 077333ac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKNative__dlclose(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  bool in_ZR;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  if (!in_ZR) {
    return;
  }
  if ((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x18) != 0)) {
    uVar3 = FUN_077334d0();
    *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
    thunk_FUN_044bb4b4();
  }
  puVar2 = PTR_DAT_09f31890;
  lVar4 = *(long *)(unaff_x19 + 0x38);
  if (lVar4 != 0) {
    uVar6 = 0;
    lVar7 = 0x20;
    puVar8 = (undefined8 *)((ulong)&stack0x00000090 | 8);
    do {
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar6) {
        *(undefined1 *)(unaff_x19 + 0x6d) = 1;
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_077334cc:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar5 = *(long *)(unaff_x19 + 0x40);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_077334cc;
      puVar1 = (undefined8 *)(lVar5 + lVar7);
      in_stack_00000078 = puVar1[5];
      in_stack_00000070 = puVar1[4];
      in_stack_00000088 = puVar1[7];
      in_stack_00000080 = puVar1[6];
      in_stack_00000058 = puVar1[1];
      in_stack_00000050 = *puVar1;
      in_stack_00000068 = puVar1[3];
      in_stack_00000060 = puVar1[2];
      in_stack_00000090 = *(undefined8 *)(lVar4 + uVar6 * 8 + 0x20);
      thunk_FUN_044bb4b4(&stack0x00000090);
      puVar8[5] = in_stack_00000078;
      puVar8[4] = in_stack_00000070;
      puVar8[7] = in_stack_00000088;
      puVar8[6] = in_stack_00000080;
      puVar8[1] = in_stack_00000058;
      *puVar8 = in_stack_00000050;
      puVar8[3] = in_stack_00000068;
      puVar8[2] = in_stack_00000060;
      lVar4 = *(long *)(unaff_x19 + 0x30);
      memcpy(&stack0x00000008,&stack0x00000090,0x48);
      if (lVar4 == 0) break;
      uVar3 = *(undefined8 *)puVar2;
      memcpy(&stack0x000000d8,&stack0x00000008,0x48);
      FUN_0753b6b4(lVar4,&stack0x000000d8,uVar6 & 0xffffffff,uVar3);
      lVar4 = *(long *)(unaff_x19 + 0x38);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x40;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


