/*
FUNCTION_NAME: Unity.Burst.BurstString$$Format
ENTRY_POINT: 05c34be0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


void Unity_Burst_BurstString__Format(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar8;
  long unaff_x21;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack0000000000000008;
  
  *(undefined1 *)(unaff_x21 + 0x7de) = 1;
  puVar2 = OVRPlugin_OVRP_1_44_0_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_129_0_TypeInfo;
  lStack0000000000000008 = 0;
  if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_05c35060;
  lVar5 = FUN_05ccbaa0(*(long *)(unaff_x19 + 0x88),*(undefined8 *)OVRPlugin_OVRP_1_129_0_TypeInfo,0)
  ;
  if (lVar5 == 0) {
    bVar3 = false;
  }
  else {
    iVar4 = FUN_0537232c(lVar5,*(undefined8 *)puVar2,5,0);
    bVar3 = iVar4 != -1;
  }
  if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_05c35060;
  uVar6 = FUN_05ccbaa0(*(long *)(unaff_x19 + 0x88),*(undefined8 *)PTR_DAT_06a0db58,0);
  if (((bVar3) || (uVar7 = FUN_0536c9cc(uVar6,0), (uVar7 & 1) != 0)) ||
     (uVar7 = FUN_054e7658(uVar6,&stack0x00000008,0), (uVar7 & 1) == 0)) {
    lStack0000000000000008 = 0x7fffffffffffffff;
  }
  uVar7 = FUN_05c34a88();
  if ((uVar7 & 1) == 0) {
LAB_05c34cc0:
    bVar3 = false;
  }
  else {
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_05c35060;
    lVar5 = FUN_05ccbaa0(*(long *)(unaff_x19 + 0x88),*(undefined8 *)puVar1,0);
    if (lVar5 == 0) goto LAB_05c34cc0;
    iVar4 = FUN_0537232c(lVar5,*(undefined8 *)puVar2,5,0);
    bVar3 = iVar4 != -1;
  }
  puVar1 = OVRPlugin_OVRP_1_121_0_TypeInfo;
  uVar6 = *(undefined8 *)(unaff_x19 + 0xa0);
  *(bool *)(unaff_x19 + 0xa9) = bVar3;
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar5 = *(long *)puVar1;
  }
  uVar7 = FUN_05507938(uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10),0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_05c35060;
    if (*(char *)(*(long *)(unaff_x19 + 0x80) + 0x98) != '\0') {
      *(undefined1 *)(unaff_x19 + 0xa8) = 1;
      if (((*(long *)(unaff_x19 + 0x48) == 0) ||
          (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48), lVar5 == 0)) ||
         (*(long *)(unaff_x19 + 0x88) == 0)) goto LAB_05c35060;
      puVar8 = (undefined8 *)OVRPlugin_OVRP_1_119_0_TypeInfo;
      if (*(char *)(lVar5 + 0x30) != '\0') {
        puVar8 = (undefined8 *)
                 Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
        ;
      }
      lVar5 = FUN_05ccbaa0(*(long *)(unaff_x19 + 0x88),*puVar8,0);
      if (lVar5 != 0) {
        lVar5 = FUN_05371c64(lVar5,0);
        if (lVar5 == 0) goto LAB_05c35060;
        iVar4 = FUN_0537232c(lVar5,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_ContainsKey__
                             ,4,0);
        puVar1 = PTR_DAT_06a132d8;
        *(bool *)(unaff_x19 + 0xa8) = iVar4 != -1;
        iVar4 = FUN_0537232c(lVar5,*(undefined8 *)puVar1,4,0);
        if (iVar4 != -1) {
          *(undefined1 *)(unaff_x19 + 0xa8) = 0;
        }
      }
      if ((*(char *)(unaff_x19 + 0xa9) == '\0') && (lStack0000000000000008 == 0x7fffffffffffffff)) {
        *(undefined1 *)(unaff_x19 + 0xa8) = 0;
      }
    }
  }
  puVar1 = Method_System_Collections_Generic_Dictionary<ulong,_Dictionary<Type,_int>>__ctor__;
  uVar7 = FUN_05c34a88();
  if ((uVar7 & 1) == 0) {
LAB_05c34e4c:
    uVar6 = *(undefined8 *)puVar1;
    uVar9 = *(undefined8 *)(unaff_x19 + 0x50);
    *(undefined1 *)(unaff_x19 + 0x61) = 1;
    uVar6 = thunk_FUN_02dd3144(uVar6);
    FUN_05d07688(uVar6,uVar9,0);
    puVar8 = (undefined8 *)(unaff_x19 + 0x58);
    *puVar8 = uVar6;
    LeanTween__value(puVar8,uVar6);
    uVar6 = *puVar8;
  }
  else {
    if (*(char *)(unaff_x19 + 0xa9) == '\0') {
      if (unaff_x20 == 0) goto LAB_05c35060;
      iVar4 = *(int *)(unaff_x20 + 0x1c);
      if (lStack0000000000000008 <= iVar4) goto LAB_05c34e4c;
    }
    else {
      if (unaff_x20 == 0) goto LAB_05c35060;
      iVar4 = *(int *)(unaff_x20 + 0x1c);
    }
    lVar5 = *(long *)(unaff_x19 + 0x80);
    if (iVar4 < 1) {
      if (lVar5 == 0) goto LAB_05c35060;
      uVar6 = *(undefined8 *)(lVar5 + 0x90);
    }
    else {
      if (lVar5 == 0) goto LAB_05c35060;
      uVar9 = *(undefined8 *)(unaff_x19 + 0x50);
      uVar11 = *(undefined8 *)(lVar5 + 0x90);
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
      FUN_05d07688(uVar6,uVar9,uVar11);
    }
  }
  lVar5 = lStack0000000000000008;
  if (*(char *)(unaff_x19 + 0xa9) == '\0') {
    if (*(char *)(unaff_x19 + 0x61) == '\0') {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x50);
      if (lStack0000000000000008 == 0x7fffffffffffffff) {
        uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
        FUN_05d07688(uVar11,uVar9,uVar6,0,0);
        *(undefined8 *)(unaff_x19 + 0x58) = uVar11;
      }
      else {
        uVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<ulong,_Dictionary<Type,_int>>_ContainsKey__
                                   );
        FUN_05d0fd7c(uVar11,uVar9,uVar6,lVar5,0);
        *(undefined8 *)(unaff_x19 + 0x58) = uVar11;
      }
      goto LAB_05c34ee0;
    }
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x19 + 0x50);
    uVar10 = *(undefined8 *)(unaff_x19 + 0x88);
    uVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<ulong,_Dictionary<Type,_int>>_Remove__
                               );
    FUN_05c20638(uVar11,uVar9,uVar6,uVar10,0);
    *(undefined8 *)(unaff_x19 + 0x58) = uVar11;
LAB_05c34ee0:
    LeanTween__value(unaff_x19 + 0x58,uVar11);
  }
  puVar1 = Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_get_Item__
  ;
  if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_05c35060;
  uVar6 = FUN_05ccbaa0(*(long *)(unaff_x19 + 0x88),
                       *(undefined8 *)System_Net_Http_Headers_Parser_DateTime_TypeInfo,0);
  uVar7 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)puVar1,0);
  if ((uVar7 & 1) == 0) {
LAB_05c34f38:
    uVar7 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_set_Item__
                               ,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c35060;
      if ((*(byte *)(*(long *)(unaff_x19 + 0x40) + 0x134) >> 1 & 1) != 0) {
        uVar6 = 1;
        goto LAB_05c34f78;
      }
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c35060;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x40) + 0x134) & 1) == 0) goto LAB_05c34f38;
    uVar6 = 0;
LAB_05c34f78:
    puVar8 = (undefined8 *)(unaff_x19 + 0x58);
    uVar6 = FUN_05d08984(*(undefined8 *)(unaff_x19 + 0x50),*puVar8,uVar6,0);
    *puVar8 = uVar6;
    LeanTween__value(puVar8,uVar6);
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_05c35060;
    FUN_05ced418(*(long *)(unaff_x19 + 0x88),0xd,0);
  }
  uVar7 = FUN_05c34a88();
  if ((uVar7 & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x60) = 1;
    if (*(long *)(unaff_x19 + 0x50) == 0) {
LAB_05c35060:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_05c2df80(*(long *)(unaff_x19 + 0x50),1,0);
  }
  return;
}


