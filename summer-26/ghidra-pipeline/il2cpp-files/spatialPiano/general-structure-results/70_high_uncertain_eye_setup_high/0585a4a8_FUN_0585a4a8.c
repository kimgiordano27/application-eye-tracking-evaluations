/*
FUNCTION_NAME: FUN_0585a4a8
ENTRY_POINT: 0585a4a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


ulong FUN_0585a4a8(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_06bc103d & 1) == 0) {
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                );
    DAT_06bc103d = 1;
  }
  if (param_2 == 0) goto LAB_0585a708;
  if (*(int *)(param_1 + 0x30) != *(int *)(param_2 + 0x30)) {
    return 0;
  }
  plVar3 = *(long **)(param_1 + 0x28);
  if (plVar3 != *(long **)(param_2 + 0x28)) {
    if (plVar3 == (long *)0x0) goto LAB_0585a708;
    uVar4 = (**(code **)(*plVar3 + 0x2b8))
                      (plVar3,*(long **)(param_2 + 0x28),*(undefined8 *)(*plVar3 + 0x2c0));
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    FUN_0585a06c(param_2);
    FUN_0585a06c(param_1);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_0585a708;
    if (*(char *)(*(long *)(param_1 + 0x10) + 0x10) != '\0') {
      if (*(long *)(param_2 + 0x10) == 0) goto LAB_0585a708;
      if (*(char *)(*(long *)(param_2 + 0x10) + 0x10) != '\0') {
        uVar4 = FUN_0585a394(param_1,param_2);
        return uVar4;
      }
    }
  }
  if (*(char *)(param_1 + 0x34) == '\0') {
    if (*(char *)(param_2 + 0x34) != '\0') {
      plVar3 = *(long **)(param_2 + 0x18);
      if (plVar3 == (long *)0x0) {
LAB_0585a5c0:
        plVar3 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(long *)(PTR_DAT_067c9338 + 0xa0) + 0x130);
        if (*(byte *)(*plVar3 + 0x130) < bVar1) goto LAB_0585a5c0;
        if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)(PTR_DAT_067c9338 + 0xa0)) {
          plVar3 = (long *)0x0;
        }
      }
      plVar5 = (long *)thunk_FUN_02f45174(plVar3,*(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                                         );
      if (plVar5 == (long *)0x0) {
        if (plVar3 == (long *)0x0) goto LAB_0585a708;
        iVar2 = Newtonsoft_Json_Linq_JArray__FromObject(plVar3,0);
        plVar5 = plVar3;
      }
      else {
        iVar2 = (int)plVar5[3];
      }
      if (iVar2 != 1) {
        return 0;
      }
      plVar3 = (long *)FUN_050edca4(plVar5,0,0);
      if (plVar3 != (long *)0x0) {
        lVar7 = *plVar3;
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        goto LAB_0585a6e8;
      }
      goto LAB_0585a708;
    }
    plVar3 = *(long **)(param_1 + 0x18);
  }
  else {
    if (*(char *)(param_2 + 0x34) != '\0') {
      plVar3 = *(long **)(param_1 + 0x28);
      if (plVar3 != (long *)0x0) {
        iVar2 = (**(code **)(*plVar3 + 0x218))
                          (plVar3,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),
                           *(undefined8 *)(*plVar3 + 0x220));
        return (ulong)(iVar2 == 0);
      }
      goto LAB_0585a708;
    }
    plVar3 = *(long **)(param_1 + 0x18);
    if (plVar3 == (long *)0x0) {
LAB_0585a5f0:
      plVar3 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)(PTR_DAT_067c9338 + 0xa0) + 0x130);
      if (*(byte *)(*plVar3 + 0x130) < bVar1) goto LAB_0585a5f0;
      if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)(PTR_DAT_067c9338 + 0xa0)) {
        plVar3 = (long *)0x0;
      }
    }
    plVar5 = (long *)thunk_FUN_02f45174(plVar3,*(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                                       );
    if (plVar5 == (long *)0x0) {
      if (plVar3 == (long *)0x0) goto LAB_0585a708;
      iVar2 = Newtonsoft_Json_Linq_JArray__FromObject(plVar3,0);
      plVar5 = plVar3;
    }
    else {
      iVar2 = (int)plVar5[3];
    }
    if (iVar2 != 1) {
      return 0;
    }
    plVar3 = (long *)FUN_050edca4(plVar5,0,0);
  }
  if (plVar3 != (long *)0x0) {
    lVar7 = *plVar3;
    uVar6 = *(undefined8 *)(param_2 + 0x18);
LAB_0585a6e8:
                    /* WARNING: Could not recover jumptable at 0x0585a6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(lVar7 + 0x138))(plVar3,uVar6,*(undefined8 *)(lVar7 + 0x140));
    return uVar4;
  }
LAB_0585a708:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


