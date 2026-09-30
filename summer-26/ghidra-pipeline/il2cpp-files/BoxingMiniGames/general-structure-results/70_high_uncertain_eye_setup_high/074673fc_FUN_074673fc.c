/*
FUNCTION_NAME: FUN_074673fc
ENTRY_POINT: 074673fc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_074673fc(undefined8 param_1,ulong param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_07ef3d0f & 1) == 0) {
                    /* try { // try from 07467418 to 07567427 has its CatchHandler @ 07467604 */
    FUN_03642964(
                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                );
    FUN_03642964(Method_System_Collections_Generic_List<byte>_get_Count__);
    DAT_07ef3d0f = 1;
  }
  puVar1 = Method_System_Collections_Generic_List<byte>_get_Count__;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
                    /* try { // try from 0746743c to 07567443 has its CatchHandler @ 074675fc */
  lVar4 = *param_3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)
           Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
         ) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
        goto LAB_0746749c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
                    /* try { // try from 07467480 to 07567487 has its CatchHandler @ 07467628 */
  puVar2 = (undefined8 *)
           FUN_0367cd30(param_3,*(long *)
                                 Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                        ,0xb);
LAB_0746749c:
  uVar5 = (*(code *)*puVar2)(param_3,puVar2[1]);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)puVar1);
  }
                    /* try { // try from 074674c0 to 075674cb has its CatchHandler @ 07467624 */
  uVar3 = 1;
  if ((uVar5 & 1) == 0) {
    uVar3 = 2;
  }
  FUN_07450ce4(param_2 & 0xffffffff,uVar3,param_2 >> 0x20,0);
  return;
}


