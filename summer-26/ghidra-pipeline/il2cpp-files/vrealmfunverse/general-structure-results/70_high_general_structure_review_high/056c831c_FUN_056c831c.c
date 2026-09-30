/*
FUNCTION_NAME: FUN_056c831c
ENTRY_POINT: 056c831c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_8;telemetry_or_network_hits_4
*/


void FUN_056c831c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>__ctor__;
  if ((DAT_066d204c & 1) == 0) {
    FUN_02b3c81c(Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>__ctor__
                );
                    /* try { // try from 056c8354 to 057c8357 has its CatchHandler @ 056c8458 */
                    /* try { // try from 056c8358 to 057c835b has its CatchHandler @ 056c8374 */
    DAT_066d204c = 1;
  }
  puVar2 = Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__;
                    /* try { // try from 056c835c to 057c835f has its CatchHandler @ 056c836c */
                    /* catch() { ... } // from try @ 056c8190 with catch @ 056c8360
                       try { // try from 056c8360 to 057c839b has its CatchHandler @ 056c7924 */
                    /* catch() { ... } // from try @ 056c7fec with catch @ 056c8364 */
                    /* catch() { ... } // from try @ 056c81ac with catch @ 056c8368 */
                    /* catch() { ... } // from try @ 056c835c with catch @ 056c836c */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 056c8008 with catch @ 056c8370 */
    thunk_FUN_02b9ad44();
  }
                    /* catch() { ... } // from try @ 056c8358 with catch @ 056c8374 */
                    /* catch() { ... } // from try @ 056c81c0 with catch @ 056c8378 */
                    /* catch() { ... } // from try @ 056c81e0 with catch @ 056c837c */
                    /* catch() { ... } // from try @ 056c801c with catch @ 056c8380 */
                    /* catch() { ... } // from try @ 056c8198 with catch @ 056c8384 */
  FUN_03e5b880(param_1,*(undefined8 *)puVar2);
  return;
}


