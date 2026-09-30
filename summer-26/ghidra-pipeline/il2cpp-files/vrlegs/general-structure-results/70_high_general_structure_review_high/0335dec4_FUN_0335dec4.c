/*
FUNCTION_NAME: FUN_0335dec4
ENTRY_POINT: 0335dec4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
FUN_0335dec4(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  long local_60;
  undefined8 uStack_58;
  
  auVar12._8_8_ = param_4;
  auVar12._0_8_ = param_3;
  if ((DAT_0412cef9 & 1) == 0) {
    FUN_01ab69ac(System_IO_FileStreamAsyncResult_TypeInfo);
    FUN_01ab69ac(Unity_Services_Analytics_Internal_FileSystemCalls_TypeInfo);
    FUN_01ab69ac(System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo);
    FUN_01ab69ac(System_IO_FileSystemEventArgs_TypeInfo);
    FUN_01ab69ac(System_IO_FileSystemEventHandler_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbe130);
    FUN_01ab69ac(System_IO_Enumeration_FileSystemName_TypeInfo);
    FUN_01ab69ac(UniGLTF_FileSystemStorage_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03d04a70);
    FUN_01ab69ac(System_IO_FileSystemWatcher_TypeInfo);
    FUN_01ab69ac(System_Diagnostics_FileVersionInfo_TypeInfo);
    DAT_0412cef9 = 1;
  }
  puVar2 = System_IO_FileSystemWatcher_TypeInfo;
  iVar3 = FUN_0334e0a4(param_2,0);
  *param_1 = iVar3;
  plVar6 = (long *)(param_1 + 2);
  if (*plVar6 == 0) {
LAB_0335dfd4:
    local_60 = 0;
    uStack_58 = 0;
    FUN_0222be48(&local_60,iVar3,4,0,*(undefined8 *)System_IO_FileSystemEventHandler_TypeInfo);
    *(undefined8 *)(param_1 + 4) = uStack_58;
    *plVar6 = local_60;
  }
  else if (param_1[4] < iVar3) {
    FUN_0222c538(plVar6,*(undefined8 *)Unity_Services_Analytics_Internal_FileSystemCalls_TypeInfo);
    iVar3 = *param_1;
    goto LAB_0335dfd4;
  }
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0335d9c4 with catch @ 0335e000
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0335d9a0 with catch @ 0335e004
                        */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0335d9b0 with catch @ 0335e008
                        */
    thunk_FUN_01a58e78();
  }
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0335d990 with catch @ 0335e00c
                        */
  if (*(char *)(param_2 + 0x158) != '\0') {
    plVar6 = (long *)(param_1 + 6);
                    /* try { // try from 0335e01c to 0345e01f has its CatchHandler @ 0335e07c */
    if (*plVar6 != 0) {
                    /* try { // try from 0335e020 to 0345e08b has its CatchHandler @ 0335d60c */
      if (*param_1 <= param_1[8]) {
        if (0 < *param_1) {
                    /* catch() { ... } // from try @ 0335e01c with catch @ 0335e07c */
                    /* try { // try from 0335e08c to 0345e093 has its CatchHandler @ 0335e0a8 */
          uVar11 = FUN_01fb4284(*plVar6,*(undefined8 *)(param_1 + 8),
                                *(undefined8 *)System_IO_FileStreamAsyncResult_TypeInfo);
                    /* try { // try from 0335e094 to 0345e09f has its CatchHandler @ 0335d60c */
          iVar3 = *param_1;
                    /* try { // try from 0335e0a0 to 0345e0a7 has its CatchHandler @ 0335e0a8 */
          lVar7 = *(long *)System_Diagnostics_FileVersionInfo_TypeInfo;
          plVar6 = *(long **)(lVar7 + 0x38);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0335e08c with catch @ 0335e0a8
                       catch(type#2 @ 00000000) { ... } // from try @ 0335e0a0 with catch @ 0335e0a8
                        */
          if (plVar6 == (long *)0x0) {
            FUN_01a47054(lVar7);
            plVar6 = *(long **)(lVar7 + 0x38);
          }
          FUN_0366b9d8(uVar11,(long)(*(int *)(*plVar6 + 0xfc) * iVar3),0);
        }
        goto LAB_0335e0d4;
      }
      FUN_0222c538(plVar6,*(undefined8 *)System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo)
      ;
    }
    local_60 = 0;
    uStack_58 = 0;
    FUN_0222be48(&local_60,*param_1,4,1,*(undefined8 *)System_IO_FileSystemEventArgs_TypeInfo);
    *(undefined8 *)(param_1 + 8) = uStack_58;
    *plVar6 = local_60;
  }
LAB_0335e0d4:
  piVar8 = param_1 + 0xc;
  uVar5 = FUN_027bcf38(*(undefined8 *)piVar8,0,0);
  if ((uVar5 & 1) != 0) {
    auVar12 = FUN_03115658(piVar8,param_3,param_4,0);
  }
  piVar9 = param_1 + 0x14;
  uVar5 = FUN_027bcf38(*(undefined8 *)piVar9,0,0);
  if ((uVar5 & 1) != 0) {
    auVar12 = FUN_03115658(piVar9,auVar12._0_8_,auVar12._8_8_,0);
  }
  piVar10 = param_1 + 0x1c;
  uVar5 = FUN_027bcf38(*(undefined8 *)piVar10,0,0);
  if ((uVar5 & 1) != 0) {
    auVar12 = FUN_03115658(piVar10,auVar12._0_8_,auVar12._8_8_,0);
  }
  if ((param_5 & 1) != 0) {
    plVar6 = (long *)(param_1 + 0x24);
    lVar7 = *plVar6;
    if (lVar7 == 0) {
      local_60 = 0;
      uStack_58 = 0;
      FUN_0222be48(&local_60,1,4,1,*(undefined8 *)PTR_DAT_03cbe130);
      *(undefined8 *)(param_1 + 0x26) = uStack_58;
      *plVar6 = local_60;
      *(undefined4 *)*plVar6 = 1;
      lVar7 = *plVar6;
    }
    uVar11 = *(undefined8 *)(param_1 + 0x26);
    uVar4 = FUN_0310d940(4,0);
    auVar12 = FUN_03115408(piVar8,lVar7,uVar11,auVar12._0_8_,auVar12._8_8_,uVar4,0);
    uVar11 = *(undefined8 *)(param_1 + 0x24);
    uVar1 = *(undefined8 *)(param_1 + 0x26);
    uVar4 = FUN_0310d940(4,0);
    auVar12 = FUN_03115408(piVar9,uVar11,uVar1,auVar12._0_8_,auVar12._8_8_,uVar4,0);
    uVar11 = *(undefined8 *)(param_1 + 0x24);
    uVar1 = *(undefined8 *)(param_1 + 0x26);
    uVar4 = FUN_0310d940(4,0);
    auVar12 = FUN_03115408(piVar10,uVar11,uVar1,auVar12._0_8_,auVar12._8_8_,uVar4,0);
  }
  return auVar12;
}


