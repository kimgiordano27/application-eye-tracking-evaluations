/*
FUNCTION_NAME: FUN_06ac8f18
ENTRY_POINT: 06ac8f18
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_06ac8f18(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_0755f7d0 & 1) == 0) {
    FUN_03188a78(System_Net_WebRequestStream_TypeInfo);
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(Oculus_Avatar2_CAPI_ovrAvatar2DataFormat_TypeInfo);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Values__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Item__
                );
    DAT_0755f7d0 = 1;
  }
  puVar1 = PTR_DAT_070c2418;
  if (*(char *)(param_1 + 0x11) != '\0') {
    uVar2 = FUN_057b5e54(*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Item__
                         ,param_2,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)puVar1);
    }
    FUN_0698f0e8(uVar2,0);
    return;
  }
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)Oculus_Avatar2_CAPI_ovrAvatar2DataFormat_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_06ac9028;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_031c0d08(param_2,*(long *)Oculus_Avatar2_CAPI_ovrAvatar2DataFormat_TypeInfo,3);
LAB_06ac9028:
    (*(code *)*puVar3)(param_2,puVar3[1]);
    if (*(int *)(*(long *)System_Net_WebRequestStream_TypeInfo + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar4 = FUN_06ac79b0();
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x28) != 0)) {
      FUN_03f3d284(*(long *)(lVar4 + 0x28),param_2,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Values__
                  );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


