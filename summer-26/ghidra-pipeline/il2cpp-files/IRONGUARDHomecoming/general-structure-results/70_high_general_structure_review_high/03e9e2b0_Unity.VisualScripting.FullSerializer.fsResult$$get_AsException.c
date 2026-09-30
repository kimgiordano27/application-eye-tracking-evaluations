/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsResult$$get_AsException
ENTRY_POINT: 03e9e2b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8
Unity_VisualScripting_FullSerializer_fsResult__get_AsException(long param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if ((DAT_0483ab15 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<ValueInput,_object>__);
    thunk_FUN_01efb3a4(
                      Method_Gameplay_GameManager_<Start>d__75_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_0457b4d8);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    DAT_0483ab15 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                     0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__)) {
      uVar3 = FUN_04076320(param_2,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar4 = FUN_02ed8f54(*(long *)(param_1 + 0x18),uVar3,
                             *(undefined8 *)
                              Method_Gameplay_GameManager_<Start>d__75_System_Collections_IEnumerator_Reset__
                            );
        if ((uVar4 & 1) != 0) {
          return 0;
        }
        if (*(long *)(param_1 + 0x18) != 0) {
          FUN_02ed9a64(*(long *)(param_1 + 0x18),uVar3,
                       *(undefined8 *)Method_System_Linq_Enumerable_Select<ValueInput,_object>__);
          lVar5 = *(long *)(param_1 + 0x10);
          if (lVar5 != 0) {
            lVar6 = *(long *)(lVar5 + 0x10);
            lVar8 = *(long *)PTR_DAT_0457b4d8;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar2 = *(uint *)(lVar5 + 0x18);
              if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                plVar7 = (long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
                *plVar7 = (long)param_2;
                thunk_FUN_01f51358(plVar7,param_2);
              }
              else {
                FUN_030f2bb4(lVar5,param_2,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              return 1;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


