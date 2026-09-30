/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_SetInsightPassthroughStyle
ENTRY_POINT: 01f9cf14
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_63_0__ovrp_SetInsightPassthroughStyle(long *param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 01f9cf2c to 0209cf3b has its CatchHandler @ 01f9d16c */
  if ((DAT_0293df4b & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b1a80);
    thunk_FUN_01279b34(PTR_DAT_027ba6c0);
    thunk_FUN_01279b34(PTR_DAT_027ba6c8);
    thunk_FUN_01279b34(PTR_DAT_027c1e58);
    thunk_FUN_01279b34(PTR_DAT_027c1e60);
    DAT_0293df4b = 1;
  }
  if ((param_3 & 1) == 0) {
LAB_01f9cfc0:
    uVar2 = FUN_01f9cb74(param_1);
  }
  else {
                    /* try { // try from 01f9cf78 to 0209cfa3 has its CatchHandler @ 01f9d174 */
    lVar1 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x10) < 1)) goto LAB_01f9cfc0;
    uVar2 = FUN_01f9cb74(param_1);
                    /* try { // try from 01f9cfa4 to 0209cfab has its CatchHandler @ 01f9d164 */
    uVar2 = FUN_01e68bb0(uVar2,*(undefined8 *)PTR_DAT_027ba6c8,lVar1,0);
  }
  if (param_1[5] == 0) {
LAB_01f9d0e4:
    lVar1 = FUN_01f9ccf4(param_1,param_2 & 1);
    if (lVar1 != 0) {
      uVar3 = FUN_01f9d140();
      uVar2 = FUN_01e68bb0(uVar2,uVar3,lVar1,0);
      return uVar2;
    }
    return uVar2;
  }
  lVar1 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1a80,6);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      thunk_FUN_01286abc((undefined8 *)(lVar1 + 0x20),uVar2);
      if (1 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)PTR_DAT_027ba6c0;
        thunk_FUN_01286abc();
        if (param_1[5] == 0) goto LAB_01f9d13c;
        uVar2 = FUN_01f9cf08(param_1[5],param_2 & 1,param_3 & 1);
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x30) = uVar2;
          thunk_FUN_01286abc((undefined8 *)(lVar1 + 0x30),uVar2);
          uVar2 = FUN_01f9d140();
          if (3 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x38) = uVar2;
            thunk_FUN_01286abc((undefined8 *)(lVar1 + 0x38),uVar2);
            if (4 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)PTR_DAT_027c1e58;
              thunk_FUN_01286abc((undefined8 *)(lVar1 + 0x40));
              if (5 < *(uint *)(lVar1 + 0x18)) {
                *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)PTR_DAT_027c1e60;
                thunk_FUN_01286abc();
                uVar2 = FUN_01e68d7c(lVar1,0);
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


