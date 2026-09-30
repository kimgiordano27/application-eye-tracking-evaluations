/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_archive_query_t_session_handle_get
ENTRY_POINT: 0902a0c0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_session_handle_get
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  int in_w8;
  long unaff_x19;
  undefined8 *puVar6;
  ushort unaff_w20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x25;
  
  if (in_w8 != 0) {
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 0902a0b8 with catch @ 0902a0c8
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 09029e40 with catch @ 0902a0cc
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 09029e28 with catch @ 0902a0d4
                        */
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)PTR_DAT_09fba400;
                    /* try { // try from 0902a0dc to 0912a0df has its CatchHandler @ 0902a154 */
                    /* try { // try from 0902a0e0 to 0912a10b has its CatchHandler @ 09029bec */
    thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x20));
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 09029d58 with catch @ 0902a0e4
                        */
    if (1 < *(uint *)(param_1 + 0x18)) {
      *(undefined8 *)(param_1 + 0x28) = unaff_x22;
      thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0902a10c to 0912a10f has its CatchHandler @ 0902a130 */
      if (2 < *(uint *)(param_1 + 0x18)) {
                    /* try { // try from 0902a110 to 0912a137 has its CatchHandler @ 09029bec */
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)PTR_DAT_09fc0540;
        thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x30));
                    /* catch() { ... } // from try @ 0902a10c with catch @ 0902a130 */
        if (3 < *(uint *)(param_1 + 0x18)) {
                    /* try { // try from 0902a138 to 0912a13f has its CatchHandler @ 0902a154 */
          *(undefined8 *)(param_1 + 0x38) = unaff_x21;
                    /* try { // try from 0902a140 to 0912a14b has its CatchHandler @ 09029bec */
          thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x38));
          puVar2 = PTR_DAT_09f1ee00;
          puVar1 = PTR_DAT_09f1ede0;
                    /* try { // try from 0902a14c to 0912a153 has its CatchHandler @ 0902a154 */
          if (4 < *(uint *)(param_1 + 0x18)) {
            *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)PTR_DAT_09fc0578;
            thunk_FUN_044bb4b4();
            uVar3 = FUN_078b57fc(param_1,0);
            puVar6 = (undefined8 *)(unaff_x19 + 0x30);
            *puVar6 = uVar3;
            thunk_FUN_044bb4b4(puVar6,uVar3);
            lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
            FUN_05bad610(lVar4,*(undefined8 *)puVar1);
            if ((0xff < unaff_w20) && ((unaff_w20 & 0xff) != 0)) {
              uVar5 = System_Collections_Generic_ObjectEqualityComparer<InternedString>__IndexOf
                                (&stack0x0000000c,*(undefined8 *)PTR_DAT_09fc0548);
              uVar3 = uVar5;
              if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                uVar3 = thunk_FUN_044a54b4(*unaff_x25);
              }
              FUN_090265e4(uVar3,lVar4,*(undefined8 *)PTR_DAT_09fc0560,uVar5);
            }
            puVar1 = PTR_DAT_09f20d00;
            if (lVar4 != 0) {
              if (0 < *(int *)(lVar4 + 0x18)) {
                uVar5 = *puVar6;
                uVar3 = FUN_078b5fc0(*(undefined8 *)PTR_DAT_09f20d08,lVar4,0);
                uVar3 = FUN_078b4f58(uVar5,*(undefined8 *)puVar1,uVar3,0);
                *puVar6 = uVar3;
                thunk_FUN_044bb4b4(puVar6,uVar3);
              }
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


