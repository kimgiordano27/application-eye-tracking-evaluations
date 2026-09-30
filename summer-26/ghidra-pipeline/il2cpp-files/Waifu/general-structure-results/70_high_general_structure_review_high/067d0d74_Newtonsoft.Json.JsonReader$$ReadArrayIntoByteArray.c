/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$ReadArrayIntoByteArray
ENTRY_POINT: 067d0d74
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonReader__ReadArrayIntoByteArray(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long *unaff_x19;
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = 0;
  FUN_067c8d7c();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if ((param_1 != 0) &&
     (lVar4 = FUN_0339898c(param_1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0)) {
                    /* try { // try from 067d0e68 to 068d0e6b has its CatchHandler @ 067d0e84 */
    uVar5 = FUN_033d1d78();
                    /* try { // try from 067d0e6c to 068d0e6f has its CatchHandler @ 067d0e80 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 067d0e70 to 068d0e73 has its CatchHandler @ 067d0e7c */
    FUN_033d1c20(uVar5,0);
  }
  if ((int)unaff_x19[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  plVar6 = unaff_x19 + 4;
  *plVar6 = param_1;
  if (DAT_08908cd0 == 0) {
                    /* try { // try from 067d0e44 to 068d0e4b has its CatchHandler @ 067d0eb0 */
                    /* try { // try from 067d0e4c to 068d0e4f has its CatchHandler @ 067d0ea0 */
    **(undefined8 **)(DAT_083d1fa8 + 0xb8) = unaff_x19;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    **(undefined8 **)(DAT_083d1fa8 + 0xb8) = unaff_x19;
    uVar7 = *(ulong *)(DAT_083d1fa8 + 0xb8);
    puVar1 = &DAT_0873ccb0 + (uVar7 >> 0x12 & 0x7fff);
    do {
                    /* try { // try from 067d0e2c to 068d0e33 has its CatchHandler @ 067d103c */
                    /* try { // try from 067d0e34 to 068d0e37 has its CatchHandler @ 067d1030 */
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (uVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
                    /* try { // try from 067d0e38 to 068d0e3b has its CatchHandler @ 067d0ecc */
    } while (cVar2 != '\0');
  }
                    /* try { // try from 067d0e50 to 068d0e53 has its CatchHandler @ 067d0e9c */
                    /* try { // try from 067d0e54 to 068d0e57 has its CatchHandler @ 067d0e8c */
                    /* try { // try from 067d0e58 to 068d0e5b has its CatchHandler @ 067d0e88 */
                    /* try { // try from 067d0e5c to 068d0e67 has its CatchHandler @ 067d0684 */
  return;
}


