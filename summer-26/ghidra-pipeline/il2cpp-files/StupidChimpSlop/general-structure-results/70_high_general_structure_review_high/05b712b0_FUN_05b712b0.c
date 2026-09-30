/*
FUNCTION_NAME: FUN_05b712b0
ENTRY_POINT: 05b712b0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_10;telemetry_or_network_hits_21;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_05b712b0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  
  puVar5 = Method_System_IO_FileStream_WriteInternal__;
  puVar3 = Method_UnityEngine_CubemapArray_Internal_Create__;
  puVar4 = PTR_DAT_0664c978;
  puVar2 = PTR_DAT_0664c970;
  if ((DAT_06a571ab & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_066486f0);
    FUN_02d4dc40(PTR_DAT_06648128);
    FUN_02d4dc40(Method_System_Data_DataRowView_SetColumnValue__);
    FUN_02d4dc40(Method_System_IO_FileStream_get_Length__);
    FUN_02d4dc40(Method_UnityEngine_CubemapArray_Internal_Create__);
    FUN_02d4dc40(Method_System_Data_DataSet_OnMergeFailed__);
    FUN_02d4dc40(Method_System_Data_DataSet_ReadXml__);
    FUN_02d4dc40(PTR_DAT_06647e20);
    FUN_02d4dc40(Method_System_Net_Configuration_ConnectionManagementElementCollection_set_Item__);
    FUN_02d4dc40(PTR_DAT_0664c970);
    FUN_02d4dc40(PTR_DAT_0664c978);
    FUN_02d4dc40(PTR_DAT_0664e168);
    FUN_02d4dc40(Method_System_IO_FileStream_get_Position__);
    FUN_02d4dc40(Method_System_IO_FileStream_set_Position__);
    FUN_02d4dc40(Method_System_IO_FileStreamAsyncResult_CBWrapper__);
    FUN_02d4dc40(Method_System_IO_FileSystem_CreateDirectory__);
    FUN_02d4dc40(Method_System_IO_FileSystem_DeleteFile__);
    FUN_02d4dc40(Method_System_IO_Enumeration_FileSystemEnumerableFactory_MatchesPattern__);
    FUN_02d4dc40(Method_System_IO_Enumeration_FileSystemEnumerableFactory_NormalizeInputs__);
    FUN_02d4dc40(Method_System_IO_FileSystemInfo__ctor__);
    FUN_02d4dc40(Method_System_Net_FileWebRequest__ctor__);
    FUN_02d4dc40(Method_System_Net_FileWebRequest_BeginGetRequestStream__);
    FUN_02d4dc40(Method_System_Net_FileWebRequest_BeginGetResponse__);
    FUN_02d4dc40(Method_System_Net_FileWebRequest_EndGetRequestStream__);
    FUN_02d4dc40(Method_System_Net_FileWebRequest_EndGetResponse__);
    FUN_02d4dc40(Method_System_Net_FileWebRequest_GetRequestStream__);
    FUN_02d4dc40(Method_System_Net_FileWebRequest_GetRequestStreamCallback__);
    FUN_02d4dc40(Method_System_Net_FileWebRequest_GetResponse__);
    FUN_02d4dc40(Method_System_IO_FileStream_WriteInternal__);
    DAT_06a571ab = 1;
  }
  lVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
  FUN_036a55a0(lVar8,*(undefined8 *)puVar2);
  lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
  FUN_05b021c4(lVar9,0);
  uVar10 = FUN_04e723e0(param_2,*(undefined8 *)puVar5,0);
  puVar4 = Method_System_Net_FileWebRequest_GetRequestStream__;
  puVar2 = Method_System_Data_DataRowView_SetColumnValue__;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x30) = uVar10;
    thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x30),uVar10);
    lVar15 = *(long *)(lVar9 + 0x50);
    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
    FUN_05b03620(lVar11,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar6 = Method_System_IO_Enumeration_FileSystemEnumerableFactory_MatchesPattern__;
    puVar5 = Method_System_IO_FileStream_get_Position__;
    puVar3 = PTR_DAT_066486f0;
    puVar2 = PTR_DAT_06647e20;
    if (lVar11 != 0) {
      FUN_05af845c(lVar11,**(undefined8 **)(*(long *)puVar4 + 0xb8),
                   (*(undefined8 **)(*(long *)puVar4 + 0xb8))[1],0);
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
      FUN_04c43380(uVar10,param_1,*(undefined8 *)puVar5,0);
      *(undefined8 *)(lVar11 + 0x50) = uVar10;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x50),uVar10);
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
      FUN_04d26940(uVar10,param_1,*(undefined8 *)puVar6,0);
      *(undefined8 *)(lVar11 + 0x58) = uVar10;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x58),uVar10);
      puVar5 = PTR_DAT_0664e168;
      if (lVar15 != 0) {
        FUN_039cf3dc(lVar15,lVar11,*(undefined8 *)PTR_DAT_0664e168);
        lVar15 = *(long *)(lVar9 + 0x50);
        lVar11 = thunk_FUN_02d8a638(*(undefined8 *)Method_System_Data_DataRowView_SetColumnValue__);
        FUN_05b03620(lVar11,0);
        puVar7 = Method_System_IO_FileSystemInfo__ctor__;
        puVar6 = Method_System_IO_Enumeration_FileSystemEnumerableFactory_NormalizeInputs__;
        if (lVar11 != 0) {
          FUN_05af845c(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),
                       *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18),0);
          uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
          FUN_04c43380(uVar10,param_1,*(undefined8 *)puVar6,0);
          *(undefined8 *)(lVar11 + 0x50) = uVar10;
          thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x50),uVar10);
          uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
          FUN_04d26940(uVar10,param_1,*(undefined8 *)puVar7,0);
          *(undefined8 *)(lVar11 + 0x58) = uVar10;
          thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x58),uVar10);
          if (lVar15 != 0) {
            FUN_039cf3dc(lVar15,lVar11,*(undefined8 *)puVar5);
            lVar15 = *(long *)(lVar9 + 0x50);
            lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                         Method_System_Data_DataRowView_SetColumnValue__);
            FUN_05b03620(lVar11,0);
            puVar7 = Method_System_Net_FileWebRequest_BeginGetRequestStream__;
            puVar6 = Method_System_Net_FileWebRequest__ctor__;
            if (lVar11 != 0) {
              FUN_05af845c(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20),
                           *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28),0);
              uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
              FUN_04c43380(uVar10,param_1,*(undefined8 *)puVar6,0);
              *(undefined8 *)(lVar11 + 0x50) = uVar10;
              thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x50),uVar10);
              uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
              FUN_04d26940(uVar10,param_1,*(undefined8 *)puVar7,0);
              *(undefined8 *)(lVar11 + 0x58) = uVar10;
              thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x58),uVar10);
              if (lVar15 != 0) {
                FUN_039cf3dc(lVar15,lVar11,*(undefined8 *)puVar5);
                lVar15 = *(long *)(lVar9 + 0x50);
                lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                             Method_System_Data_DataRowView_SetColumnValue__);
                FUN_05b03620(lVar11,0);
                puVar7 = Method_System_Net_FileWebRequest_GetResponse__;
                puVar6 = Method_System_Net_FileWebRequest_EndGetRequestStream__;
                puVar3 = Method_System_Net_FileWebRequest_BeginGetResponse__;
                if (lVar11 != 0) {
                  FUN_05af845c(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30),
                               *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38),0);
                  uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
                  FUN_04c43380(uVar10,param_1,*(undefined8 *)puVar3,0);
                  *(undefined8 *)(lVar11 + 0x50) = uVar10;
                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x50),uVar10);
                  uVar10 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_066486f0);
                  FUN_04d26940(uVar10,param_1,*(undefined8 *)puVar6,0);
                  *(undefined8 *)(lVar11 + 0x58) = uVar10;
                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x58),uVar10);
                  lVar12 = *(long *)puVar7;
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                    lVar12 = *(long *)puVar7;
                  }
                  puVar14 = *(undefined8 **)(lVar12 + 0xb8);
                  lVar16 = puVar14[1];
                  if (lVar16 == 0) {
                    if (*(int *)(lVar12 + 0xe4) == 0) {
                      thunk_FUN_02dabd98();
                      puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
                    }
                    uVar10 = *puVar14;
                    lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
                    FUN_04c43380(lVar16,uVar10,
                                 *(undefined8 *)
                                  Method_System_Net_FileWebRequest_GetRequestStreamCallback__,0);
                    plVar13 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
                    *plVar13 = lVar16;
                    thunk_FUN_02dc1ef0(plVar13,lVar16);
                  }
                  *(long *)(lVar11 + 0x48) = lVar16;
                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x48),lVar16);
                  if (lVar15 != 0) {
                    FUN_039cf3dc(lVar15,lVar11,*(undefined8 *)puVar5);
                    lVar15 = *(long *)(lVar9 + 0x50);
                    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                 Method_System_Data_DataRowView_SetColumnValue__);
                    FUN_05b03620(lVar11,0);
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_02dabd98();
                    }
                    puVar7 = Method_System_Net_FileWebRequest_EndGetResponse__;
                    puVar6 = Method_System_IO_FileStreamAsyncResult_CBWrapper__;
                    puVar3 = Method_System_IO_FileStream_set_Position__;
                    if (lVar11 != 0) {
                      FUN_05af845c(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40),
                                   *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48),0);
                      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
                      FUN_04c43380(uVar10,param_1,*(undefined8 *)puVar7,0);
                      *(undefined8 *)(lVar11 + 0x50) = uVar10;
                      thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x50),uVar10);
                      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_066486f0);
                      FUN_04d26940(uVar10,param_1,*(undefined8 *)puVar3,0);
                      *(undefined8 *)(lVar11 + 0x58) = uVar10;
                      thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x58),uVar10);
                      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
                      FUN_04c43380(uVar10,param_1,*(undefined8 *)puVar6,0);
                      *(undefined8 *)(lVar11 + 0x48) = uVar10;
                      thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x48),uVar10);
                      puVar2 = Method_System_IO_FileStream_get_Length__;
                      if (lVar15 != 0) {
                        FUN_039cf3dc(lVar15,lVar11,*(undefined8 *)puVar5);
                        lVar15 = *(long *)(lVar9 + 0x50);
                        lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
                        FUN_05b0341c(lVar11,0);
                        puVar6 = Method_System_IO_FileSystem_CreateDirectory__;
                        puVar3 = PTR_DAT_06648128;
                        if (lVar11 != 0) {
                          FUN_05af845c(lVar11,*(undefined8 *)
                                               (*(long *)(*(long *)puVar4 + 0xb8) + 0x60),
                                       *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68),0);
                          uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
                          FUN_04f6e538(uVar10,param_1,*(undefined8 *)puVar6,0);
                          *(undefined8 *)(lVar11 + 0x50) = uVar10;
                          thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x50),uVar10);
                          if (lVar15 != 0) {
                            FUN_039cf3dc(lVar15,lVar11,*(undefined8 *)puVar5);
                            lVar15 = *(long *)(lVar9 + 0x50);
                            lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
                            FUN_05b0341c(lVar11,0);
                            puVar2 = Method_System_IO_FileSystem_DeleteFile__;
                            if (lVar11 != 0) {
                              FUN_05af845c(lVar11,*(undefined8 *)
                                                   (*(long *)(*(long *)puVar4 + 0xb8) + 0x70),
                                           *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78)
                                           ,0);
                              uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
                              FUN_04f6e538(uVar10,param_1,*(undefined8 *)puVar2,0);
                              *(undefined8 *)(lVar11 + 0x50) = uVar10;
                              thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x50),uVar10);
                              if ((lVar15 != 0) &&
                                 (FUN_039cf3dc(lVar15,lVar11,*(undefined8 *)puVar5), lVar8 != 0)) {
                                lVar11 = *(long *)(lVar8 + 0x10);
                                lVar15 = *(long *)
                                          Method_System_Net_Configuration_ConnectionManagementElementCollection_set_Item__
                                ;
                                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                if (lVar11 != 0) {
                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                    plVar13 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar13 = lVar9;
                                    thunk_FUN_02dc1ef0(plVar13,lVar9);
                                  }
                                  else {
                                    FUN_036a5e08(lVar8,lVar9,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  return lVar8;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


