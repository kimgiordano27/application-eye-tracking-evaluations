/*
FUNCTION_NAME: UnityEngine.Timeline.TrackAsset$$GetMarkerCount
ENTRY_POINT: 05b5f914
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x05b5fa90) */
/* WARNING: Removing unreachable block (ram,0x05b5fb3c) */

void UnityEngine_Timeline_TrackAsset__GetMarkerCount(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x23;
  undefined4 in_stack_00000000;
  
  thunk_FUN_02dbd7b4();
  lVar4 = *(long *)
           Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x10) == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar4);
      lVar4 = *(long *)
               Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
      ;
    }
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                              );
    FUN_04180bc0(uVar2,uVar7,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                 ,0);
    puVar3 = (undefined8 *)
             (*(long *)(*(long *)
                         Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                       + 0xb8) + 0x10);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  lVar8 = *(long *)
           Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
  ;
  lVar4 = *unaff_x23;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)(lVar8 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
        goto LAB_05b5f9f8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  lVar4 = FUN_02d9a5d4();
LAB_05b5f9f8:
  lVar4 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar4 + 8),lVar8);
  (**(code **)(lVar4 + 8))();
  if (unaff_x23 != (long *)0x0) {
    lVar4 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05b5fa78;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05b5fa78:
    (*(code *)*puVar3)();
  }
  lVar4 = *(long *)(unaff_x19 + 0x200);
  uVar1 = FUN_06063868(0);
  if (lVar4 != 0) {
    FUN_05b14d60(lVar4,in_stack_00000000,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


