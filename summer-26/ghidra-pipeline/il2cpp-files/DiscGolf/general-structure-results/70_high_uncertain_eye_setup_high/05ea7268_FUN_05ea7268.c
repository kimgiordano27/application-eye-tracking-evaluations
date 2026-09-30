/*
FUNCTION_NAME: FUN_05ea7268
ENTRY_POINT: 05ea7268
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_05ea7268(long param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_06dc3d4e & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(Method_Unity_Collections_NativeSlice<Painter2D_Painter2DJobData>_get_Item__);
    FUN_02d965b8(PTR_DAT_069fc180);
    FUN_02d965b8(OVRPlugin_OVRP_1_128_0_TypeInfo);
    FUN_02d965b8(Mono_Security_PKCS7_SignedData_TypeInfo);
    FUN_02d965b8(Method_UnityEngine_UIElements_NavigationEventBase<NavigationCancelEvent>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_List<RichTextTagParser_Tag>_Clear__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_NavigationEventBase<NavigationCancelEvent>_GetPooled__
                );
    DAT_06dc3d4e = 1;
  }
  lVar6 = *(long *)(param_1 + 0x60);
  if ((lVar6 == 0) ||
     (uVar1 = (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),param_2,param_3,param_4,
                         *(undefined8 *)(lVar6 + 0x28)), (uVar1 & 1) != 0)) {
    uVar2 = 1;
  }
  else {
    if (*(char *)(param_1 + 0xe0) == '\0') {
      lVar6 = *(long *)Method_System_Collections_Generic_List<RichTextTagParser_Tag>_Clear__;
      uVar1 = FUN_05ea5044(param_1);
      if ((uVar1 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0xd0);
        if (lVar6 == 0) goto LAB_05ea7518;
        plVar3 = (long *)
                 Method_UnityEngine_UIElements_NavigationEventBase<NavigationCancelEvent>__ctor__;
        if ((*(char *)(lVar6 + 0x30) == '\0') &&
           (uVar1 = FUN_05e5fbc0(lVar6,0), plVar3 = (long *)OVRPlugin_OVRP_1_128_0_TypeInfo,
           (uVar1 & 1) == 0)) {
          plVar3 = (long *)Mono_Security_PKCS7_SignedData_TypeInfo;
        }
        lVar6 = *plVar3;
      }
      plVar3 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,4);
      if (plVar3 == (long *)0x0) {
LAB_05ea7518:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if ((param_3 != 0) &&
         (lVar4 = thunk_FUN_02dd3048(param_3,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_05ea750c:
        uVar2 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar2,0);
      }
      if ((int)plVar3[3] == 0) {
LAB_05ea7508:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar3[4] = param_3;
      LeanTween__value(plVar3 + 4,param_3);
      local_34 = param_2;
      lVar4 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&local_34);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_05ea750c;
      if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto LAB_05ea7508;
      plVar3[5] = lVar4;
      LeanTween__value(plVar3 + 5,lVar4);
      local_38 = param_4;
      lVar4 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                  Method_Unity_Collections_NativeSlice<Painter2D_Painter2DJobData>_get_Item__
                                 ,&local_38);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_05ea750c;
      if (*(uint *)(plVar3 + 3) < 3) goto LAB_05ea7508;
      plVar3[6] = lVar4;
      LeanTween__value(plVar3 + 6,lVar4);
      if ((lVar6 != 0) &&
         (lVar4 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
      goto LAB_05ea750c;
      if ((*(uint *)(plVar3 + 3) & 0xfffffffc) == 0) goto LAB_05ea7508;
      plVar3[7] = lVar6;
      LeanTween__value(plVar3 + 7,lVar6);
      uVar2 = FUN_0536e164(*(undefined8 *)
                            Method_UnityEngine_UIElements_NavigationEventBase<NavigationCancelEvent>_GetPooled__
                           ,plVar3,0);
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
      }
      FUN_06309d28(uVar2,0);
    }
    uVar2 = 0;
  }
  return uVar2;
}


