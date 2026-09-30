/*
FUNCTION_NAME: FUN_05747c7c
ENTRY_POINT: 05747c7c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void FUN_05747c7c(long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_2 == 0) {
                    /* try { // try from 05747d7c to 05847d7f has its CatchHandler @ 05747db4 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05747d80 to 05847d83 has its CatchHandler @ 05747db0 */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(3);
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  if (uVar3 < param_3) {
    FUN_05e3994c(0);
    uVar3 = *(uint *)(param_2 + 0x18);
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((int)(uVar3 - param_3) < (int)(uVar2 - *(int *)(param_1 + 0x28))) {
    FUN_05e390e4(5,0);
                    /* try { // try from 05747ce0 to 05847ceb has its CatchHandler @ 05747dac */
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if (0 < (int)uVar2) {
                    /* try { // try from 05747cec to 05847d7b has its CatchHandler @ 0574793c */
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05747d84 to 05847dd7 has its CatchHandler @ 0574793c */
      FUN_03642c18();
    }
    uVar5 = 0;
    puVar6 = (undefined4 *)(lVar4 + 0x30);
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
System_ArraySegment<byte>__ToArray:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (-1 < (int)puVar6[-4]) {
        local_50 = 0;
        uStack_48 = 0;
        FUN_043f0128(&local_50,*(undefined8 *)(puVar6 + -2),*puVar6,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x150));
        if (*(uint *)(param_2 + 0x18) <= param_3) goto System_ArraySegment<byte>__ToArray;
        lVar1 = param_2 + (long)(int)param_3 * 0x10;
        param_3 = param_3 + 1;
        *(undefined8 *)(lVar1 + 0x28) = uStack_48;
        *(undefined8 *)(lVar1 + 0x20) = local_50;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 6;
    } while (uVar2 != uVar5);
  }
  return;
}


