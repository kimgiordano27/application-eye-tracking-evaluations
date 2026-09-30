/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_evt_session_archive_message_t
ENTRY_POINT: 08115da8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_evt_session_archive_message_t(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *in_x9;
  long unaff_x19;
  long unaff_x22;
  
  lVar1 = (*in_x9)();
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if (unaff_x22 != 0) {
      uVar2 = FUN_08591604();
      *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
      thunk_FUN_03d233cc();
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        uVar3 = FUN_085d9f54(*(long *)(unaff_x19 + 0x20),0);
        if ((uVar3 & 1) == 0) {
          uVar3 = FUN_085ef868(0);
          if (((uVar3 & 1) != 0) && (uVar3 = FUN_08111604(), (uVar3 & 1) != 0)) {
            if (*(int *)(*(long *)PTR_DAT_08eec2a8 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            FUN_081160f4();
          }
          lVar1 = *(long *)(unaff_x19 + 0x20);
          uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80738);
          System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                    ();
          if (lVar1 == 0) goto LAB_08115f6c;
          FUN_085da19c(lVar1,uVar2,0);
        }
        else {
          FUN_08115f74();
        }
      }
      return;
    }
  }
LAB_08115f6c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


