/*
FUNCTION_NAME: FUN_05bbc0f0
ENTRY_POINT: 05bbc0f0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3
*/


long FUN_05bbc0f0(long param_1,long param_2,ulong param_3,ulong param_4,ulong param_5)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long local_38;
  
  if ((DAT_06dc2464 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<QuerySessionsResults>_SetStateMachine__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_SetResult__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_SetException__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_TryGetValue__
                );
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<int,_Panel>_GetEnumerator__);
    DAT_06dc2464 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  local_38 = 0;
  if ((param_3 & 1) == 0) {
    if ((lVar2 == 0) || (lVar2 = FUN_05ae2158(lVar2,0), lVar2 == 0)) goto LAB_05bbc314;
    FUN_04e95158(lVar2,param_2,&local_38,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<QuerySessionsResults>_SetStateMachine__
                );
    if (local_38 != 0) goto LAB_05bbc1f0;
    if ((param_4 & 1) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x80) == 0) {
                    /* try { // try from 05bbc2e0 to 05cbc2eb has its CatchHandler @ 05bbc3fc */
      if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
                    /* try { // try from 05bbc2f4 to 05cbc2f7 has its CatchHandler @ 05bbc410 */
                    /* try { // try from 05bbc2f8 to 05cbc3db has its CatchHandler @ 05bbbf28 */
        FUN_05bb7a18(param_1,*(int *)(param_1 + 0x5c) + ~*(uint *)(*(long *)(param_2 + 0x10) + 0x10)
                     ,*(undefined8 *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_SetException__
                    );
        return 0;
      }
      goto LAB_05bbc314;
    }
    if (*(char *)(param_1 + 0x49) == '\0') {
      return 0;
    }
    if (param_2 == 0) goto LAB_05bbc314;
    lVar2 = *(long *)(param_2 + 0x10);
    puVar1 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_SetException__
    ;
  }
  else {
    if ((lVar2 == 0) || (lVar2 = FUN_05ae21dc(lVar2,0), lVar2 == 0)) goto LAB_05bbc314;
    FUN_04e95158(lVar2,param_2,&local_38,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<QuerySessionsResults>_SetStateMachine__
                );
    if (local_38 != 0) {
LAB_05bbc1f0:
      if (*(long *)(local_38 + 0x30) != 0) {
        uVar3 = FUN_05bca8a4(*(long *)(local_38 + 0x30),0);
        if ((uVar3 & 1) == 0) {
                    /* try { // try from 05bbc204 to 05cbc22b has its CatchHandler @ 05bbc418 */
          if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) goto LAB_05bbc314;
          FUN_05bb7a18(param_1,*(int *)(param_1 + 0x5c) +
                               ~*(uint *)(*(long *)(param_2 + 0x10) + 0x10),
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_SetResult__
                      );
        }
        if ((param_5 & 1) == 0) {
          return local_38;
        }
        if (local_38 != 0) {
          if (*(char *)(local_38 + 0x41) == '\0') {
            return local_38;
          }
          if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
                    /* try { // try from 05bbc268 to 05cbc293 has its CatchHandler @ 05bbc414 */
            FUN_05bb7a18(param_1,*(int *)(param_1 + 0x5c) +
                                 ~*(uint *)(*(long *)(param_2 + 0x10) + 0x10),
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_TryGetValue__
                        );
            return local_38;
          }
        }
      }
      goto LAB_05bbc314;
    }
    if (*(char *)(param_1 + 0x49) == '\0') {
      return 0;
    }
    if (param_2 == 0) goto LAB_05bbc314;
    lVar2 = *(long *)(param_2 + 0x10);
    puVar1 = (undefined8 *)Method_System_Collections_Generic_Dictionary<int,_Panel>_GetEnumerator__;
  }
  if (lVar2 != 0) {
    FUN_05bb63c0(param_1,*(int *)(param_1 + 0x5c) + ~*(uint *)(lVar2 + 0x10),0,*puVar1);
    return 0;
  }
LAB_05bbc314:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


