/*
FUNCTION_NAME: FUN_039780f4
ENTRY_POINT: 039780f4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_039780f4(long param_1,long param_2,int param_3,byte param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_04539dc5 & 1) == 0) {
    FUN_01c5d288(UnityEngine_UIElements_RepeatButton_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422f930);
    FUN_01c5d288(System_Net_Cache_RequestCache_TypeInfo);
    FUN_01c5d288(Method_System_Text_UTF8Encoding_GetByteCount__);
    FUN_01c5d288(OVR_OpenVR_IVRChaperoneSetup__GetLivePhysicalBoundsInfo_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_Component_GetComponents<BaseInput>__);
    DAT_04539dc5 = 1;
  }
  FUN_03313b6c(param_1,0);
  puVar1 = UnityEngine_UIElements_RepeatButton_TypeInfo;
  if (param_2 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar7 = thunk_FUN_01c496e0();
    uVar5 = thunk_FUN_01c273e8(PTR_DAT_04231c48);
    FUN_0323fc78(uVar7,uVar5,0);
LAB_03978488:
    uVar5 = thunk_FUN_01c273e8(Method_System_IO_UnmanagedMemoryStream_EnsureWriteable__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar7,uVar5);
  }
  if (*(long *)(param_2 + 0x10) == 0) goto LAB_03978420;
  lVar6 = *(long *)(*(long *)(param_2 + 0x10) + 0x18);
  if (param_3 == 2) {
    plVar4 = (long *)thunk_FUN_01c496e0(*(undefined8 *)UnityEngine_UIElements_RepeatButton_TypeInfo)
    ;
    FUN_030e56b0(plVar4,0x30,0);
    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_030e56b0(uVar5,0x30,0);
    if (plVar4 == (long *)0x0) goto LAB_03978420;
    lVar3 = FUN_030e5b98(plVar4,uVar5,0);
    if (*(long *)(param_2 + 0x20) == 0) goto LAB_03978420;
    uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10);
    if (*(int *)(*(long *)System_Net_Cache_RequestCache_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar5 = FUN_031a35f4(uVar5,0);
    uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_030e570c(uVar7,uVar5,0);
    if (lVar3 == 0) goto LAB_03978420;
    FUN_030e5b98(lVar3,uVar7,0);
    if (*(long *)(param_2 + 0x18) == 0) goto LAB_03978420;
    uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x18);
    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_030e570c(uVar5,uVar7,0);
    FUN_030e5b98(lVar3,uVar5,0);
    if (lVar6 == 0) goto LAB_03978420;
    uVar5 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422f930,*(int *)(lVar6 + 0x18) + 1);
    FUN_032fe3d4(lVar6,0,uVar5,1,*(undefined4 *)(lVar6 + 0x18),0);
    uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_030e56dc(uVar7,3,uVar5,0);
    FUN_030e5b98(plVar4,uVar7,0);
    lVar3 = FUN_03198300(0);
    lVar6 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
  }
  else {
    if (param_3 == 1) {
      lVar3 = FUN_03198300(0);
      if (lVar3 == 0) goto LAB_03978420;
      uVar5 = FUN_03182d6c(lVar3,lVar6,0);
      uVar7 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422f930,8);
      *(undefined8 *)(param_1 + 0x28) = uVar7;
      FUN_032fe3d4(uVar5,0xc,uVar7,0,8,0);
      lVar6 = *(long *)(param_1 + 0x28);
      if (lVar6 == 0) goto LAB_03978420;
      if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      *(byte *)(lVar6 + 0x20) = *(byte *)(lVar6 + 0x20) & 0xf | 0x40;
      goto LAB_039783b4;
    }
    if (param_3 != 0) {
      thunk_FUN_01c273e8(PTR_DAT_04231770);
      uVar7 = thunk_FUN_01c496e0();
      uVar5 = thunk_FUN_01c273e8(OVR_OpenVR_IVRExtendedDisplay__GetWindowBounds_TypeInfo);
      FUN_032467a0(uVar7,uVar5,0);
      goto LAB_03978488;
    }
    lVar3 = FUN_03198300(0);
  }
  if (lVar3 == 0) {
LAB_03978420:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar5 = FUN_03182d6c(lVar3,lVar6,0);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
LAB_039783b4:
  puVar2 = Method_UnityEngine_Component_GetComponents<BaseInput>__;
  puVar1 = OVR_OpenVR_IVRChaperoneSetup__GetLivePhysicalBoundsInfo_TypeInfo;
  lVar6 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Text_UTF8Encoding_GetByteCount__);
  uVar7 = *(undefined8 *)puVar1;
  uVar5 = *(undefined8 *)puVar2;
  FUN_03313b6c(lVar6,0);
  *(undefined8 *)(lVar6 + 0x10) = uVar7;
  *(undefined8 *)(lVar6 + 0x18) = uVar5;
  *(long *)(param_1 + 0x10) = lVar6;
  *(byte *)(param_1 + 0x20) = param_4 & 1;
  uVar5 = FUN_03982854(param_1);
  FUN_03971fdc(param_1,uVar5);
  return;
}


