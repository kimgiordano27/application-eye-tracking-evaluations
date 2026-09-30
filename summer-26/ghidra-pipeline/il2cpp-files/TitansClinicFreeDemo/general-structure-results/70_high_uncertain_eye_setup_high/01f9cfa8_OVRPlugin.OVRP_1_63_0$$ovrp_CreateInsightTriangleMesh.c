/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_CreateInsightTriangleMesh
ENTRY_POINT: 01f9cfa8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_63_0__ovrp_CreateInsightTriangleMesh(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  
  uVar1 = FUN_01e68bb0(param_2,**(undefined8 **)(param_1 + 0x6c8));
                    /* try { // try from 01f9cfc8 to 0209cfdb has its CatchHandler @ 01f9d180 */
  if (*(long *)(unaff_x20 + 0x28) == 0) {
LAB_01f9d0e4:
    lVar2 = FUN_01f9ccf4();
    if (lVar2 != 0) {
      uVar3 = FUN_01f9d140();
      uVar1 = FUN_01e68bb0(uVar1,uVar3,lVar2,0);
      return uVar1;
    }
    return uVar1;
  }
  lVar2 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1a80,6);
                    /* try { // try from 01f9cfe8 to 0209cff7 has its CatchHandler @ 01f9d17c */
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = uVar1;
                    /* try { // try from 01f9d004 to 0209d00b has its CatchHandler @ 01f9d178 */
      thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x20),uVar1);
      if (1 < *(uint *)(lVar2 + 0x18)) {
                    /* try { // try from 01f9d018 to 0209d01f has its CatchHandler @ 01f9d15c */
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)PTR_DAT_027ba6c0;
        thunk_FUN_01286abc();
        if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_01f9d13c;
        uVar1 = FUN_01f9cf08(*(long *)(unaff_x20 + 0x28),unaff_w19 & 1,unaff_w21 & 1);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = uVar1;
                    /* try { // try from 01f9d058 to 0209d08f has its CatchHandler @ 01f9d170 */
          thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x30),uVar1);
          uVar1 = FUN_01f9d140();
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = uVar1;
            thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x38),uVar1);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)PTR_DAT_027c1e58;
              thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x40));
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)PTR_DAT_027c1e60;
                thunk_FUN_01286abc();
                uVar1 = FUN_01e68d7c(lVar2,0);
                goto LAB_01f9d0e4;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
LAB_01f9d13c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


