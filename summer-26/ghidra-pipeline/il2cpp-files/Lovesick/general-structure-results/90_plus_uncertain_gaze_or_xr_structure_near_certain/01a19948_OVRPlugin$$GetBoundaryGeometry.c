/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryGeometry
ENTRY_POINT: 01a19948
PROGRAM: Lovesick-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetBoundaryGeometry(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_0377a9a9 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_UIR_LinkedPoolItem<BestFitAllocator_Block>__ctor__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(StringLiteral_1411);
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<BlockedUserList>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f3c20);
    DAT_0377a9a9 = 1;
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    return;
  }
  plVar8 = *(long **)(param_1 + 0x20);
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_UnityEngine_UIElements_UIR_LinkedPoolItem<BestFitAllocator_Block>__ctor__
                            );
  if ((lVar3 != 0) &&
     (FUN_011c181c(lVar3,param_1,
                   *(undefined8 *)Method_Oculus_Platform_Request<BlockedUserList>__ctor__,0),
     puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__,
     puVar1 = PTR_DAT_033f3c20, plVar8 != (long *)0x0)) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_033f3c20) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_01a19a50;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar8,*(long *)PTR_DAT_033f3c20,8);
LAB_01a19a50:
    (*(code *)*puVar4)(plVar8,lVar3,puVar4[1]);
    plVar8 = *(long **)(param_1 + 0x20);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar3 != 0) &&
       (FUN_016f27fc(lVar3,param_1,*(undefined8 *)StringLiteral_1411,0), plVar8 != (long *)0x0)) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xe) * 0x10 + 0x138);
            goto LAB_01a19ae0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar1,0xe);
LAB_01a19ae0:
                    /* WARNING: Could not recover jumptable at 0x01a19af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar8,lVar3,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


