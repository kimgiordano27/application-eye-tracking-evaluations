/*
FUNCTION_NAME: FUN_030f3444
ENTRY_POINT: 030f3444
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


long FUN_030f3444(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((DAT_04531ddf & 1) == 0) {
    FUN_01c5d288(UnityEngine_UIElements_RepeatButton_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422f930);
    FUN_01c5d288(PTR_DAT_0422fa60);
    FUN_01c5d288(System_Threading_SemaphoreSlim_TypeInfo);
    FUN_01c5d288(Oculus_Platform_Models_SendInvitesResult_TypeInfo);
    FUN_01c5d288(UnityEngine_SendMouseEvents_TypeInfo);
    FUN_01c5d288(ExitGames_Client_Photon_SendOptions_TypeInfo);
    FUN_01c5d288(System_Security_SecureString_TypeInfo);
    FUN_01c5d288(System_Threading_SendOrPostCallback_TypeInfo);
    FUN_01c5d288(System_Xml_Schema_SequenceNode_TypeInfo);
    FUN_01c5d288(Mono_Math_Prime_Generator_SequentialSearchPrimeGeneratorBase_TypeInfo);
    FUN_01c5d288(Mono_Math_Prime_Generator_SequentialSearchPrimeGeneratorBase_TypeInfo);
    FUN_01c5d288(System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCache_TypeInfo);
    DAT_04531ddf = 1;
  }
  puVar1 = PTR_DAT_0422f930;
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x70);
    uVar2 = FUN_030fd8ac(uVar12,0);
    if (uVar2 < 0x2adb999e) {
      if (uVar2 < 0x23db8e99) {
        if (uVar2 == 0x1e6ebeee) {
          uVar7 = thunk_FUN_03152714(uVar12,*(undefined8 *)System_Security_SecureString_TypeInfo,0);
          if ((uVar7 & 1) == 0)
          goto System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseError;
          uVar12 = *(undefined8 *)(param_1 + 0x68);
          lVar8 = thunk_FUN_01c496e0(*(undefined8 *)UnityEngine_UIElements_RepeatButton_TypeInfo);
          FUN_030e570c(lVar8,uVar12);
          if (lVar8 == 0) {
            return 0;
          }
          plVar5 = *(long **)(lVar8 + 0x20);
          if (plVar5 == (long *)0x0) {
            return 0;
          }
          iVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
                    /* try { // try from 030f3670 to 031f3673 has its CatchHandler @ 030f3698 */
                    /* try { // try from 030f3674 to 031f3687 has its CatchHandler @ 030f36a4 */
          if (iVar3 != 2) {
            return 0;
          }
          lVar9 = FUN_030e63cc(lVar8,0);
          if (lVar9 != 0) {
                    /* try { // try from 030f3688 to 031f36bb has its CatchHandler @ 030f3284 */
            lVar9 = FUN_030e59c8();
                    /* catch(type#1 @ 04025298) { ... } // from try @ 030f3670 with catch @ 030f3698
                        */
            lVar8 = FUN_030e63cc(lVar8,1);
                    /* catch(type#1 @ 04025298) { ... } // from try @ 030f360c with catch @ 030f369c
                        */
            if (lVar8 != 0) {
                    /* catch(type#1 @ 04025298) { ... } // from try @ 030f3598 with catch @ 030f36a0
                        */
              lVar8 = FUN_030e59c8();
                    /* catch(type#1 @ 04025298) { ... } // from try @ 030f3674 with catch @ 030f36a4
                        */
              lVar6 = FUN_01c5d2fc(*(undefined8 *)puVar1,0x28);
              if (lVar9 != 0) {
                    /* try { // try from 030f36bc to 031f36d3 has its CatchHandler @ 030f3708 */
                if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
                    /* try { // try from 030f36d4 to 031f36f7 has its CatchHandler @ 030f3284 */
                  thunk_FUN_01c1d1e8();
                }
                iVar3 = FUN_032d2a94(0,*(int *)(lVar9 + 0x18) + -0x14,0);
                    /* try { // try from 030f36f8 to 031f3707 has its CatchHandler @ 030f3708 */
                uVar4 = FUN_032d2a94(0,0x14 - *(int *)(lVar9 + 0x18),0);
                    /* catch() { ... } // from try @ 030f36bc with catch @ 030f3708
                       catch() { ... } // from try @ 030f36f8 with catch @ 030f3708 */
                    /* try { // try from 030f370c to 031f370f has its CatchHandler @ 030f3718 */
                    /* try { // try from 030f3710 to 031f371b has its CatchHandler @ 030f3284 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f370c with catch @ 030f3718
                        */
                FUN_032fe3d4(lVar9,iVar3,lVar6,uVar4,*(int *)(lVar9 + 0x18) - iVar3,0);
                if (lVar8 != 0) {
                  iVar3 = FUN_032d2a94(0,*(int *)(lVar8 + 0x18) + -0x14,0);
                  uVar4 = FUN_032d2a94(0x14,0x28 - *(int *)(lVar8 + 0x18),0);
                  FUN_032fe3d4(lVar8,iVar3,lVar6,uVar4,*(int *)(lVar8 + 0x18) - iVar3,0);
                  return lVar6;
                }
              }
            }
          }
          goto LAB_030f3874;
        }
        puVar10 = (undefined8 *)Oculus_Platform_Models_SendInvitesResult_TypeInfo;
        if (uVar2 != 0x23db8e98)
        goto System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseError;
      }
      else {
        puVar10 = (undefined8 *)
                  Mono_Math_Prime_Generator_SequentialSearchPrimeGeneratorBase_TypeInfo;
        if (((uVar2 != 0x24db902b) &&
            (puVar10 = (undefined8 *)
                       Mono_Math_Prime_Generator_SequentialSearchPrimeGeneratorBase_TypeInfo,
            uVar2 != 0x29db980a)) &&
           (puVar10 = (undefined8 *)System_Threading_SendOrPostCallback_TypeInfo,
           uVar2 != 0x2adb999d))
        goto System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseError;
      }
    }
    else if (uVar2 < 0x93ab4b50) {
      puVar10 = (undefined8 *)UnityEngine_SendMouseEvents_TypeInfo;
      if ((uVar2 != 0x93ab4b4f) &&
         (puVar10 = (undefined8 *)
                    System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCache_TypeInfo,
         uVar2 != 0x342fa1d8))
      goto System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseError;
    }
    else {
      puVar10 = (undefined8 *)ExitGames_Client_Photon_SendOptions_TypeInfo;
      if (((uVar2 != 0x94ab4ce2) &&
          (puVar10 = (undefined8 *)System_Xml_Schema_SequenceNode_TypeInfo, uVar2 != 0x95ab4e75)) &&
         (puVar10 = (undefined8 *)System_Threading_SemaphoreSlim_TypeInfo, uVar2 != 0xd038ecd7))
      goto System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseError;
    }
    uVar7 = thunk_FUN_03152714(uVar12,*puVar10,0);
    if ((uVar7 & 1) == 0) {
System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseError:
      uVar11 = *(undefined8 *)(param_1 + 0x70);
      uVar12 = thunk_FUN_01c273e8(System_Security_Permissions_SecurityAction_TypeInfo);
      uVar12 = FUN_03146988(uVar12,uVar11,0);
      thunk_FUN_01c273e8(PTR_DAT_0422fd40);
      uVar11 = thunk_FUN_01c496e0();
      FUN_03184c3c(uVar11,uVar12,0);
      uVar12 = thunk_FUN_01c273e8(
                                 System_Runtime_Serialization_Formatters_Binary_SerObjectInfoInit_TypeInfo
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar11,uVar12);
    }
    if (*(long *)(param_1 + 0x68) == 0) {
LAB_030f3874:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar8 = FUN_032f47b8(*(long *)(param_1 + 0x68),0);
    if (lVar8 != 0) {
      uVar12 = *(undefined8 *)puVar1;
      lVar9 = thunk_FUN_01c495e4(lVar8,uVar12);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar8,uVar12);
      }
      return lVar9;
    }
  }
  return 0;
}


