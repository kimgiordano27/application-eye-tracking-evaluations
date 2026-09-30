/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_added_t_session_handle_get
ENTRY_POINT: 09001d6c
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_session_handle_get(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 *puVar7;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x27;
  undefined8 *unaff_x28;
  
  thunk_FUN_044bb4b4();
  lVar3 = FUN_04447c90(*unaff_x28,6);
                    /* try { // try from 09001d7c to 09101d83 has its CatchHandler @ 09001eb0 */
  if (lVar3 == 0) {
LAB_09001f60:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
                    /* try { // try from 09001d90 to 09101daf has its CatchHandler @ 09001eb4 */
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_09fbf2e0;
    thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x20));
    if (1 < *(uint *)(lVar3 + 0x18)) {
                    /* try { // try from 09001db4 to 09101db7 has its CatchHandler @ 09001ef0 */
                    /* try { // try from 09001db8 to 09101dbb has its CatchHandler @ 09001f08 */
      *(undefined8 *)(lVar3 + 0x28) = unaff_x22;
                    /* try { // try from 09001dbc to 09101dbf has its CatchHandler @ 09001eec */
                    /* try { // try from 09001dc0 to 09101dc3 has its CatchHandler @ 09001ee8 */
      thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x28));
                    /* try { // try from 09001dc8 to 09101dcb has its CatchHandler @ 09001ec8 */
                    /* try { // try from 09001dcc to 09101dcf has its CatchHandler @ 09001ed8 */
                    /* try { // try from 09001dd0 to 09101dd3 has its CatchHandler @ 09001ed4 */
      if (2 < *(uint *)(lVar3 + 0x18)) {
                    /* try { // try from 09001dd4 to 09101dd7 has its CatchHandler @ 09001ef8 */
                    /* try { // try from 09001de0 to 09101de3 has its CatchHandler @ 09001ebc */
                    /* try { // try from 09001de4 to 09101e63 has its CatchHandler @ 09001eb8 */
        *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_09fbc998;
        thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x30));
        if (3 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x38) = unaff_x21;
          thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x38));
          if (4 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_09fbf380;
            thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x40));
            puVar2 = PTR_DAT_09f1ee00;
            puVar1 = PTR_DAT_09f1ede0;
            if (5 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x48) = unaff_x20;
              thunk_FUN_044bb4b4();
              uVar4 = FUN_078b57fc(lVar3,0);
              puVar7 = (undefined8 *)(unaff_x19 + 0x48);
              *puVar7 = uVar4;
              thunk_FUN_044bb4b4(puVar7,uVar4);
              lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
              FUN_05bad610(lVar3,*(undefined8 *)puVar1);
              uVar5 = FUN_078b4450(*(undefined8 *)(unaff_x19 + 0x30),0);
              if ((uVar5 & 1) == 0) {
                lVar6 = *unaff_x27;
                uVar4 = *unaff_x23;
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  lVar6 = thunk_FUN_044a54b4();
                }
                FUN_08ffea3c(lVar6,lVar3,*(undefined8 *)PTR_DAT_09fbec68,uVar4);
              }
              puVar1 = PTR_DAT_09f20d00;
              if (lVar3 != 0) {
                if (0 < *(int *)(lVar3 + 0x18)) {
                  uVar8 = *puVar7;
                  uVar4 = FUN_078b5fc0(*(undefined8 *)PTR_DAT_09f20d08,lVar3,0);
                  uVar4 = FUN_078b4f58(uVar8,*(undefined8 *)puVar1,uVar4,0);
                  *puVar7 = uVar4;
                  thunk_FUN_044bb4b4(puVar7,uVar4);
                  return;
                }
                return;
              }
              goto LAB_09001f60;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


