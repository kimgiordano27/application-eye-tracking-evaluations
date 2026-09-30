/*
FUNCTION_NAME: FUN_05ff3d04
ENTRY_POINT: 05ff3d04
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long * FUN_05ff3d04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  
  puVar1 = Method_System_Net_WebClient_<>c_<UploadValuesTaskAsync>b__218_1__;
  if ((DAT_06a5e204 & 1) == 0) {
    FUN_02d4dc40(Method_System_Net_WebClient_<>c_<UploadValuesTaskAsync>b__218_1__);
    FUN_02d4dc40(Method_System_IO_TextWriter_<>c_<WriteAsync>b__59_0__);
    FUN_02d4dc40(Method_System_Net_WebClient_<>c_<UploadValuesTaskAsync>b__218_2__);
    DAT_06a5e204 = 1;
  }
  uVar9 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  plVar3 = (long *)FUN_050121a8(uVar9,0);
  if (plVar3 != (long *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x7a8))(plVar3,0x24,*(undefined8 *)(*plVar3 + 0x7b0));
    puVar2 = Method_System_Net_WebClient_<>c_<UploadValuesTaskAsync>b__218_2__;
    puVar1 = Method_System_IO_TextWriter_<>c_<WriteAsync>b__59_0__;
    if (lVar4 != 0) {
      uVar8 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar8) {
        uVar10 = 0;
        do {
          if (uVar8 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4def0();
          }
          plVar3 = *(long **)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
          if (plVar3 == (long *)0x0) goto LAB_05ff3e98;
          uVar9 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
          uVar5 = FUN_04e7eb78(uVar9,*(undefined8 *)puVar2,0);
          if ((uVar5 & 1) == 0) {
            lVar6 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
            if (lVar6 == 0) goto LAB_05ff3e98;
            if (*(int *)(lVar6 + 0x18) == 2) {
              **(undefined8 **)(*(long *)puVar1 + 0xb8) = plVar3;
              thunk_FUN_02dc1ef0(*(undefined8 *)(*(long *)puVar1 + 0xb8),plVar3);
              return plVar3;
            }
          }
          uVar8 = *(uint *)(lVar4 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar8);
      }
      thunk_FUN_02db45e8(PTR_DAT_066463b8);
      uVar9 = thunk_FUN_02d8a638();
      uVar7 = thunk_FUN_02db45e8(
                                Method_System_Net_WebClient_<>c__DisplayClass164_0_<OpenReadAsync>b__0__
                                );
      FUN_05002ed0(uVar9,uVar7,0);
      uVar7 = thunk_FUN_02db45e8(
                                Method_System_Net_WebClient_<>c__DisplayClass167_0_<OpenWriteAsync>b__0__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar9,uVar7);
    }
  }
LAB_05ff3e98:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


