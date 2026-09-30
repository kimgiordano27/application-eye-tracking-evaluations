/*
FUNCTION_NAME: UnityWebSocketSharp.Net.HttpListenerRequest$$FlushInput
ENTRY_POINT: 06f0cf20
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int UnityWebSocketSharp_Net_HttpListenerRequest__FlushInput(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x23;
  undefined2 uStack0000000000000008;
  undefined2 uStack000000000000000c;
  
  for (; -1 < param_2; param_2 = param_2 - iVar3) {
    while( true ) {
      param_2 = FUN_06f0babc();
      if (param_2 < 0) goto LAB_06f0cf90;
      iVar3 = FUN_06f0bcc8();
      if (0 < iVar3) break;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      sVar2 = FUN_065c7d98();
      lVar6 = *unaff_x23;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar6);
        lVar6 = *unaff_x23;
      }
      if (*(short *)(*(long *)(lVar6 + 0xb8) + 0x34) == sVar2) {
        return param_2 + -1;
      }
      uVar4 = FUN_065c7d98();
      uVar5 = FUN_06f0d2b4(unaff_w20 & 1,uVar4);
      if ((uVar5 & 1) == 0) {
        FUN_0350b94c();
        uStack000000000000000c = FUN_065c7d98();
        puVar9 = (undefined8 *)((long)&stack0x00000008 + 4);
        uVar7 = *(undefined8 *)(PTR_DAT_08486760 + 0x88);
        goto LAB_06f0cfc8;
      }
      if (param_2 + -1 < 0) goto LAB_06f0cf90;
    }
  }
LAB_06f0cf90:
  puVar1 = PTR_DAT_084d3008;
  thunk_FUN_03af1434(PTR_DAT_084d3008);
  FUN_0350b93c();
  lVar6 = thunk_FUN_03af1434(puVar1);
  puVar9 = (undefined8 *)&stack0x00000008;
  uStack0000000000000008 = *(undefined2 *)(*(long *)(lVar6 + 0xb8) + 0x34);
  uVar7 = *(undefined8 *)(PTR_DAT_08486760 + 0x88);
LAB_06f0cfc8:
  uVar7 = thunk_FUN_03ac70f4(uVar7,puVar9);
  uVar8 = thunk_FUN_03af1434(PTR_DAT_084d3010);
  uVar7 = FUN_065adf54(uVar8,uVar7,0);
  thunk_FUN_03af1434(PTR_DAT_0849e2e8);
  uVar8 = thunk_FUN_03ac74bc();
  FUN_06739308(uVar8,uVar7,0);
  uVar7 = thunk_FUN_03af1434(PTR_DAT_084d3070);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar8,uVar7);
}


