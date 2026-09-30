/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateTraceJsonReader
ENTRY_POINT: 0559cec8
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__CreateTraceJsonReader(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  uint uVar6;
  ulong unaff_x23;
  
  do {
    uVar1 = thunk_FUN_05464b70();
    if ((uVar1 & 1) != 0) {
      uVar4 = (uint)*(undefined8 *)(unaff_x20 + 0x18);
LAB_0559cf00:
      uVar6 = (uint)unaff_x23;
      if ((int)uVar6 < (int)uVar4) {
                    /* try { // try from 0559cf0c to 0569cf1b has its CatchHandler @ 0559cf1c */
        lVar2 = FUN_05625564();
        if (lVar2 == 0) {
LAB_0559cfc4:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
                    /* catch() { ... } // from try @ 0559cec0 with catch @ 0559cf1c
                       catch() { ... } // from try @ 0559cf0c with catch @ 0559cf1c */
                    /* try { // try from 0559cf20 to 0569cf23 has its CatchHandler @ 0559cf2c */
                    /* try { // try from 0559cf24 to 0569cf2f has its CatchHandler @ 0559ce68 */
        uVar5 = *(undefined8 *)PTR_DAT_06d02220;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0559cf20 with catch @ 0559cf2c
                        */
        lVar3 = thunk_FUN_02ef170c(lVar2,uVar5);
                    /* try { // try from 0559cf30 to 0569cf77 has its CatchHandler @ 0559cf30
                       catch() { ... } // from try @ 0559cf30 with catch @ 0559cf30
                       catch() { ... } // from try @ 0559cf9c with catch @ 0559cf30
                       catch() { ... } // from try @ 0559cfcc with catch @ 0559cf30
                       catch() { ... } // from try @ 0559d018 with catch @ 0559cf30 */
        if (lVar3 == 0) {
                    /* try { // try from 0559cfcc to 0569cfff has its CatchHandler @ 0559cf30 */
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar2,uVar5);
        }
        if ((*(uint *)(lVar3 + 0x18) == 0) || (*(uint *)(lVar3 + 0x18) <= uVar6)) break;
        *(undefined8 *)(lVar3 + (long)(int)uVar6 * 8 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
        thunk_FUN_02f411dc();
      }
      else {
        lVar3 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,uVar4 + 1);
        FUN_0562505c();
        if (lVar3 == 0) goto LAB_0559cfc4;
      }
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined8 *)(lVar3 + 0x20) = unaff_x19;
        thunk_FUN_02f411dc();
        return lVar3;
      }
      break;
    }
                    /* try { // try from 0559ced8 to 0569cf0b has its CatchHandler @ 0559ce68 */
    uVar4 = *(uint *)(unaff_x20 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    if ((long)(int)uVar4 <= (long)unaff_x23) goto LAB_0559cf00;
  } while (unaff_x23 < uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


