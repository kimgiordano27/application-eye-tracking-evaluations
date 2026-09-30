/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_updated_t_base__get
ENTRY_POINT: 08122e54
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_base__get(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  
  uVar1 = FUN_06f74e14();
  if ((uVar1 & 1) == 0) {
    thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f02a40);
    FUN_04d4bab0();
    FUN_08123214();
    return;
  }
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    FUN_08123108();
    plVar6 = *(long **)(unaff_x19 + 0xa8);
    if (plVar6 != (long *)0x0) {
      lVar4 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f02a48) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
            goto 
            Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_session_handle_get
            ;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08f02a48,3);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_session_handle_get:
      uVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),uVar3,*(undefined8 *)(lVar4 + 0x28));
      }
      FUN_08125864();
      if (*(int *)(*(long *)PTR_DAT_08e69590 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_07178f58(uVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


