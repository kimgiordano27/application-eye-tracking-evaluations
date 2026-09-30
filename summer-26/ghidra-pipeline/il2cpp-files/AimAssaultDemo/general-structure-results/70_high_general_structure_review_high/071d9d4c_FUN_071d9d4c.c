/*
FUNCTION_NAME: FUN_071d9d4c
ENTRY_POINT: 071d9d4c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10
*/


void FUN_071d9d4c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_3;
  uStack_28 = param_4;
  if (*(long *)(param_2 + 0x10) == 0) {
Unity_VisualScripting_FullSerializer_fsReflectedConverter__TryDeserialize:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar1 = thunk_FUN_075f44c8(*(long *)(param_2 + 0x10),0);
  if (iVar1 != 0) {
                    /* try { // try from 071d9d80 to 072d9d8b has its CatchHandler @ 071d9fb4 */
    uVar2 = FUN_075c6840(&local_30,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_2 + 0x10) == 0)
      goto Unity_VisualScripting_FullSerializer_fsReflectedConverter__TryDeserialize;
      iVar1 = UnityEngine_UIElements_CollectionViewController__InvokeMakeItem
                        (*(long *)(param_2 + 0x10),0);
      if (iVar1 != 2) {
        return;
      }
      if (param_1 < *(double *)(param_2 + 0x20)) {
        return;
      }
    }
    if (*(long *)(param_2 + 0x10) == 0)
    goto Unity_VisualScripting_FullSerializer_fsReflectedConverter__TryDeserialize;
    iVar1 = thunk_FUN_075f44c8(*(long *)(param_2 + 0x10),0);
    if (iVar1 != 0) {
                    /* try { // try from 071d9dc4 to 072d9df3 has its CatchHandler @ 071d9fc4 */
      if (*(long *)(param_2 + 0x10) == 0)
      goto Unity_VisualScripting_FullSerializer_fsReflectedConverter__TryDeserialize;
      iVar1 = UnityEngine_UIElements_CollectionViewController__InvokeMakeItem
                        (*(long *)(param_2 + 0x10),0);
      if (((iVar1 == 2) && (*(double *)(param_2 + 0x20) < param_1)) ||
         (uVar2 = FUN_075c6840(&local_30,0), (uVar2 & 1) == 0)) {
        if (*(long *)(param_2 + 0x10) == 0)
        goto Unity_VisualScripting_FullSerializer_fsReflectedConverter__TryDeserialize;
        FUN_075f4f6c(*(long *)(param_2 + 0x10),0);
      }
    }
  }
  return;
}


