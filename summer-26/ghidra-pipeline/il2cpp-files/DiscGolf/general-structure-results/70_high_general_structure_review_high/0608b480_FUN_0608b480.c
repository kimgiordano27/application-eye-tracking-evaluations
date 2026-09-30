/*
FUNCTION_NAME: FUN_0608b480
ENTRY_POINT: 0608b480
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void FUN_0608b480(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_48;
  
  if ((DAT_06dc4e6f & 1) == 0) {
    FUN_02d965b8(Method_System_IO_Compression_DeflateStream_EndWrite__);
    FUN_02d965b8(Method_System_IO_Compression_DeflateStream_Flush__);
    FUN_02d965b8(Method_System_IO_Compression_DeflateManagedStream_Seek__);
    FUN_02d965b8(Method_System_IO_Compression_DeflateStream_Read__);
    FUN_02d965b8(PTR_DAT_069ff9d8);
    FUN_02d965b8(PTR_DAT_069ffa48);
    FUN_02d965b8(PTR_DAT_069ffa50);
    FUN_02d965b8(Method_Newtonsoft_Json_Serialization_DefaultReferenceResolver_GetMappings__);
    FUN_02d965b8(PTR_DAT_06a0d268);
    FUN_02d965b8(PTR_DAT_06a0d270);
    FUN_02d965b8(Method_Unity_Netcode_DefaultSceneManagerHandler_PopulateLoadedScenes__);
    FUN_02d965b8(Method_System_IO_Compression_DeflateStream_ReadInternal__);
    FUN_02d965b8(Method_System_IO_Compression_DeflateStream_Seek__);
    FUN_02d965b8(Method_System_IO_Compression_DeflateStream_SetLength__);
    FUN_02d965b8(Method_System_Text_Decoder_Convert__);
    FUN_02d965b8(Method_System_Text_Decoder_Convert__);
    FUN_02d965b8(Method_System_Text_DecoderFallbackBuffer_ThrowLastBytesRecursive__);
    FUN_02d965b8(PTR_DAT_069ff540);
    FUN_02d965b8(PTR_DAT_069ff1a0);
    FUN_02d965b8(Method_Unity_Services_Vivox_ChannelSession_AssertSessionNotDeleted__);
    FUN_02d965b8(Method_System_Dynamic_Utils_ContractUtils_RequiresArrayRange<string>__);
    DAT_06dc4e6f = 1;
  }
  puVar3 = Method_System_IO_Compression_DeflateManagedStream_Seek__;
  local_48 = 0;
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    lVar10 = *(long *)(param_1 + 10);
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ffa50);
    FUN_04e92874(lVar4,*(undefined8 *)PTR_DAT_069ffa48);
    uVar13 = *(undefined8 *)Method_System_IO_Compression_DeflateStream_Read__;
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar13 = FUN_054f73b4(uVar13,0);
    puVar1 = PTR_DAT_069ff9d8;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04e935f0(lVar4,*(undefined8 *)
                        Method_System_Dynamic_Utils_ContractUtils_RequiresArrayRange<string>__,
                 uVar13,*(undefined8 *)PTR_DAT_069ff9d8);
    puVar2 = Method_Unity_Netcode_DefaultSceneManagerHandler_PopulateLoadedScenes__;
    uVar13 = FUN_054f73b4(*(undefined8 *)
                           Method_Unity_Netcode_DefaultSceneManagerHandler_PopulateLoadedScenes__,0)
    ;
    FUN_04e935f0(lVar4,*(undefined8 *)PTR_DAT_069ff1a0,uVar13,*(undefined8 *)puVar1);
    uVar13 = FUN_054f73b4(*(undefined8 *)puVar2,0);
    FUN_04e935f0(lVar4,*(undefined8 *)
                        Method_Unity_Services_Vivox_ChannelSession_AssertSessionNotDeleted__,uVar13,
                 *(undefined8 *)puVar1);
    *(long *)(param_1 + 0x10) = lVar4;
    LeanTween__value(param_1 + 0x10,lVar4);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar12 = *(undefined8 *)(param_1 + 8);
    uVar13 = FUN_0608a850(lVar10);
    lVar4 = FUN_0607ac68(uVar12,uVar13);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar11 = *(long **)(lVar10 + 0x10);
    uVar13 = FUN_05362cb4(*(undefined8 *)(lVar4 + 0x10),
                          *(undefined8 *)(*(long *)(param_1 + 0xc) + 0x18),0);
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(*(long *)(param_1 + 0xc) + 0x10) == 0) {
      uVar5 = 0;
      uVar12 = uVar13;
    }
    else {
      uVar5 = FUN_06088500();
      uVar12 = uVar5;
      if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
    uVar12 = FUN_06088dcc(uVar12,*(undefined8 *)(param_1 + 0xe),lVar4);
    uVar7 = 10;
    if ((*(ulong *)(lVar4 + 0x18) & 0xff) != 0) {
      uVar7 = (undefined4)(*(ulong *)(lVar4 + 0x18) >> 0x20);
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860(10);
    }
    lVar4 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar14 = *(undefined8 *)PTR_DAT_069ff540;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Newtonsoft_Json_Serialization_DefaultReferenceResolver_GetMappings__) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0608b7b8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02dd004c(plVar11,*(long *)
                                   Method_Newtonsoft_Json_Serialization_DefaultReferenceResolver_GetMappings__
                          ,0);
LAB_0608b7b8:
    lVar4 = (*(code *)*puVar6)(plVar11,uVar14,uVar13,uVar5,uVar12,uVar7,puVar6[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_48 = FUN_0481d028(lVar4,*(undefined8 *)
                                   Method_System_Text_DecoderFallbackBuffer_ThrowLastBytesRecursive__
                           );
    uVar8 = FUN_047e6248(&local_48,*(undefined8 *)Method_System_Text_Decoder_Convert__);
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x12) = local_48;
      LeanTween__value(param_1 + 0x12,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031eb168(param_1 + 2,&local_48,param_1,
                   *(undefined8 *)Method_System_IO_Compression_DeflateStream_EndWrite__);
      return;
    }
  }
  uVar13 = FUN_047e6288(&local_48,*(undefined8 *)Method_System_Text_Decoder_Convert__);
  uVar12 = FUN_03804884(uVar13,*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)Method_System_IO_Compression_DeflateStream_ReadInternal__);
  uVar5 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_IO_Compression_DeflateStream_SetLength__);
  FUN_04715878(uVar5,uVar13,uVar12,*(undefined8 *)Method_System_IO_Compression_DeflateStream_Seek__)
  ;
  puVar1 = Method_System_IO_Compression_DeflateStream_Flush__;
  *param_1 = -2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  LeanTween__value(param_1 + 0x10,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b19d8(param_1 + 2,uVar5,*(undefined8 *)puVar1);
  return;
}


