/*
FUNCTION_NAME: FUN_0666ab60
ENTRY_POINT: 0666ab60
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_8;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0666ab60(long param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  puVar4 = System_Reflection_FieldInfo_TypeInfo;
  puVar6 = (undefined8 *)System_Linq_Expressions_FieldExpression_TypeInfo;
  if ((DAT_07557d79 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2638);
    FUN_03188a78(Unity_Properties_FieldMember_TypeInfo);
    FUN_03188a78(PTR_DAT_070c28d8);
    FUN_03188a78(System_Runtime_InteropServices_FieldOffsetAttribute_TypeInfo);
    FUN_03188a78(System_Linq_Expressions_FieldExpression_TypeInfo);
    FUN_03188a78(System_IO_FileAccess_TypeInfo);
    FUN_03188a78(System_Resources_FileBasedResourceGroveler_TypeInfo);
    FUN_03188a78(Best_HTTP_Hosts_Connections_File_FileConnection_TypeInfo);
    FUN_03188a78(System_IO_FileInfo_TypeInfo);
    FUN_03188a78(System_IO_FileLoadException_TypeInfo);
    FUN_03188a78(System_IO_FileMode_TypeInfo);
    FUN_03188a78(System_IO_FileNotFoundException_TypeInfo);
    FUN_03188a78(System_IO_FileStream_TypeInfo);
    FUN_03188a78(System_IO_FileStreamAsyncResult_TypeInfo);
    FUN_03188a78(Best_HTTP_Shared_PlatformSupport_FileSystem_FileStreamModes_TypeInfo);
    FUN_03188a78(System_Reflection_FieldInfo_TypeInfo);
    FUN_03188a78(System_Reflection_Internal_FileStreamReadLightUp_TypeInfo);
    FUN_03188a78(Unity_Services_Analytics_Internal_FileSystemCalls_TypeInfo);
    FUN_03188a78(PTR_DAT_070c2c20);
    FUN_03188a78(System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo);
    DAT_07557d79 = 1;
  }
  if (param_4 != 0xc) {
    puVar6 = (undefined8 *)puVar4;
  }
  if (param_1 == 0) {
LAB_0666b260:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar13 = *puVar6;
  uVar1 = *param_2;
  if (DAT_07557d9d == '\0') {
    FUN_03188a78(UnityEngine_UIElements_EventCallbackRegistry_TypeInfo);
    DAT_07557d9d = '\x01';
  }
  puVar4 = UnityEngine_UIElements_EventCallbackRegistry_TypeInfo;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_0666b260;
  puVar6 = (undefined8 *)
           FUN_05344eb4(*(long *)(param_1 + 0x28),uVar1,
                        *(undefined8 *)UnityEngine_UIElements_EventCallbackRegistry_TypeInfo);
  lVar7 = FUN_0666b2a8(*puVar6);
  uVar1 = *param_3;
  if (DAT_07557d9d == '\0') {
    FUN_03188a78(UnityEngine_UIElements_EventCallbackRegistry_TypeInfo);
    DAT_07557d9d = '\x01';
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_0666b260;
  puVar6 = (undefined8 *)FUN_05344eb4(*(long *)(param_1 + 0x28),uVar1,*(undefined8 *)puVar4);
  lVar8 = FUN_0666b2a8(*puVar6);
  puVar4 = PTR_DAT_070c2638;
  if (param_4 < 6) {
    if (param_4 < 3) {
      if (param_4 != 1) {
        puVar6 = (undefined8 *)System_Runtime_InteropServices_FieldOffsetAttribute_TypeInfo;
        if (param_4 != 2) {
LAB_0666b274:
          thunk_FUN_031edd38(PTR_DAT_070c5c08);
          uVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
          FUN_058a33a0(uVar13,0);
          uVar12 = thunk_FUN_031edd38(System_IO_Enumeration_FileSystemName_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_03188b9c(uVar13,uVar12);
        }
        goto LAB_0666b238;
      }
      plVar10 = (long *)FUN_03188b1c(*(undefined8 *)PTR_DAT_070c2638,4);
      if (plVar10 == (long *)0x0) goto LAB_0666b260;
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)) {
LAB_0666b268:
        uVar13 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
        FUN_03188b9c(uVar13,0);
      }
      if ((int)plVar10[3] != 0) {
        plVar10[4] = lVar8;
        puVar3 = PTR_DAT_070c1958;
        local_54 = param_3[0x19];
        lVar8 = thunk_FUN_031c39fc(*(undefined8 *)(PTR_DAT_070c1958 + 0x48),&local_54);
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
        goto LAB_0666b268;
        if ((*(uint *)(plVar10 + 3) & 0xfffffffe) != 0) {
          plVar10[5] = lVar8;
          local_58 = param_3[0x1a];
          lVar8 = thunk_FUN_031c39fc(*(undefined8 *)(puVar3 + 0x48),&local_58);
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
          goto LAB_0666b268;
          if (2 < *(uint *)(plVar10 + 3)) {
            plVar10[6] = lVar8;
            local_5c = param_3[0x1c];
            lVar8 = thunk_FUN_031c39fc(*(undefined8 *)(puVar3 + 0x48),&local_5c);
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
            goto LAB_0666b268;
            puVar5 = System_IO_FileMode_TypeInfo;
            if ((*(uint *)(plVar10 + 3) & 0xfffffffc) != 0) {
              plVar10[7] = lVar8;
              uVar12 = FUN_057c0370(*(undefined8 *)puVar5,plVar10,0);
              plVar10 = (long *)FUN_03188b1c(*(undefined8 *)puVar4,4);
              if (plVar10 == (long *)0x0) goto LAB_0666b260;
              if ((lVar7 != 0) &&
                 (lVar8 = thunk_FUN_031c3cac(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0))
              goto LAB_0666b268;
              if ((int)plVar10[3] != 0) {
                plVar10[4] = lVar7;
                local_60 = param_2[0x19];
                lVar7 = thunk_FUN_031c39fc(*(undefined8 *)(puVar3 + 0x48),&local_60);
                if ((lVar7 != 0) &&
                   (lVar8 = thunk_FUN_031c3cac(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0))
                goto LAB_0666b268;
                if ((*(uint *)(plVar10 + 3) & 0xfffffffe) != 0) {
                  plVar10[5] = lVar7;
                  local_64 = param_2[0x1a];
                  lVar7 = thunk_FUN_031c39fc(*(undefined8 *)(puVar3 + 0x48),&local_64);
                  if ((lVar7 != 0) &&
                     (lVar8 = thunk_FUN_031c3cac(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0
                     )) goto LAB_0666b268;
                  if (2 < *(uint *)(plVar10 + 3)) {
                    plVar10[6] = lVar7;
                    local_68 = param_2[0x1c];
                    lVar7 = thunk_FUN_031c39fc(*(undefined8 *)(puVar3 + 0x48),&local_68);
                    if ((lVar7 != 0) &&
                       (lVar8 = thunk_FUN_031c3cac(lVar7,*(undefined8 *)(*plVar10 + 0x40)),
                       lVar8 == 0)) goto LAB_0666b268;
                    puVar4 = System_IO_FileStreamAsyncResult_TypeInfo;
                    if ((*(uint *)(plVar10 + 3) & 0xfffffffc) != 0) {
                      plVar10[7] = lVar7;
                      uVar11 = FUN_057c0370(*(undefined8 *)puVar4,plVar10,0);
                      FUN_057bfee8(uVar13,*(undefined8 *)
                                           Unity_Services_Analytics_Internal_FileSystemCalls_TypeInfo
                                   ,uVar12,uVar11,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0666b264;
    }
    if (param_4 == 3) {
      local_54 = param_3[1];
      uVar12 = thunk_FUN_031c39fc(*(undefined8 *)Unity_Properties_FieldMember_TypeInfo,&local_54);
      uVar12 = FUN_057c02e8(*(undefined8 *)System_Resources_FileBasedResourceGroveler_TypeInfo,lVar8
                            ,uVar12,0);
      goto LAB_0666b204;
    }
    if (param_4 != 4) {
      if (param_4 != 5) goto LAB_0666b274;
      local_54 = 8;
      uVar12 = thunk_FUN_031c39fc(*(undefined8 *)(PTR_DAT_070c1958 + 0x48),&local_54);
      puVar6 = (undefined8 *)System_IO_FileStream_TypeInfo;
      goto LAB_0666b124;
    }
    lVar9 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c28d8,5);
    if (lVar9 == 0) goto LAB_0666b260;
    uVar2 = *(uint *)(lVar9 + 0x18);
    if ((uVar2 == 0) || (*(undefined8 *)(lVar9 + 0x20) = uVar13, uVar2 == 1)) goto LAB_0666b264;
    *(long *)(lVar9 + 0x28) = lVar8;
    puVar6 = (undefined8 *)Best_HTTP_Hosts_Connections_File_FileConnection_TypeInfo;
  }
  else if (param_4 < 10) {
    if (param_4 == 6) {
      local_54 = 8;
      uVar12 = thunk_FUN_031c39fc(*(undefined8 *)(PTR_DAT_070c1958 + 0x48),&local_54);
      puVar6 = (undefined8 *)Best_HTTP_Shared_PlatformSupport_FileSystem_FileStreamModes_TypeInfo;
LAB_0666b124:
      uVar12 = FUN_057b5e54(*puVar6,uVar12,0);
LAB_0666b204:
      FUN_057b27f0(uVar13,uVar12,0);
      return;
    }
    puVar6 = (undefined8 *)System_IO_FileLoadException_TypeInfo;
    if (param_4 == 7) goto LAB_0666b238;
    if (param_4 != 9) goto LAB_0666b274;
    lVar9 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c28d8,5);
    if (lVar9 == 0) goto LAB_0666b260;
    uVar2 = *(uint *)(lVar9 + 0x18);
    if ((uVar2 == 0) || (*(undefined8 *)(lVar9 + 0x20) = uVar13, uVar2 == 1)) goto LAB_0666b264;
    *(long *)(lVar9 + 0x28) = lVar8;
    puVar6 = (undefined8 *)System_IO_FileInfo_TypeInfo;
  }
  else {
    if (param_4 != 10) {
      puVar6 = (undefined8 *)System_IO_FileNotFoundException_TypeInfo;
      if (param_4 != 0xb) {
        if (param_4 != 0xc) goto LAB_0666b274;
        puVar6 = (undefined8 *)System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo;
        if ((param_2[8] == param_3[8]) && (param_2[7] != -1)) {
          puVar6 = (undefined8 *)System_Reflection_Internal_FileStreamReadLightUp_TypeInfo;
        }
      }
LAB_0666b238:
      FUN_057b27f0(uVar13,*puVar6,0);
      return;
    }
    lVar9 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c28d8,5);
    if (lVar9 == 0) goto LAB_0666b260;
    uVar2 = *(uint *)(lVar9 + 0x18);
    if ((uVar2 == 0) || (*(undefined8 *)(lVar9 + 0x20) = uVar13, uVar2 == 1)) goto LAB_0666b264;
    *(long *)(lVar9 + 0x28) = lVar8;
    puVar6 = (undefined8 *)System_IO_FileAccess_TypeInfo;
  }
  if (((2 < uVar2) && (*(undefined8 *)(lVar9 + 0x30) = *puVar6, uVar2 != 3)) &&
     (*(long *)(lVar9 + 0x38) = lVar7, 4 < uVar2)) {
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_070c2c20;
    FUN_057bfff0(lVar9,0);
    return;
  }
LAB_0666b264:
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


