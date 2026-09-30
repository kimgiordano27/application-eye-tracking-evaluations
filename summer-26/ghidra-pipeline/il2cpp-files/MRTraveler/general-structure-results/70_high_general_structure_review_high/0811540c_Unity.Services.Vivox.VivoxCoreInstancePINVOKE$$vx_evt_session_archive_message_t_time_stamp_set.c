/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_time_stamp_set
ENTRY_POINT: 0811540c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_time_stamp_set
               (void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar2 = FUN_08108ae0();
  plVar6 = (long *)(unaff_x19 + 0x20);
  *plVar6 = lVar2;
  thunk_FUN_03d233cc(plVar6,lVar2);
  puVar1 = PTR_DAT_08eec260;
  lVar2 = *plVar6;
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x10) == '\0') {
      lVar5 = *(long *)(lVar2 + 0x18);
      if (lVar5 == 0) {
        plVar6 = (long *)(lVar2 + 0x20);
        lVar2 = *plVar6;
        uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eec260);
        System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                  ();
        lVar2 = FUN_0714874c(lVar2,uVar4,0);
        if (lVar2 != 0) {
          uVar4 = *(undefined8 *)puVar1;
          lVar5 = thunk_FUN_03cf5138(lVar2,uVar4);
          if (lVar5 != 0) {
            *plVar6 = lVar5;
            uVar4 = *(undefined8 *)puVar1;
            lVar5 = thunk_FUN_03cf5138(lVar2,uVar4);
            if (lVar5 != 0) goto LAB_08115574;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc(lVar2,uVar4);
        }
        lVar5 = 0;
        *plVar6 = 0;
LAB_08115574:
        thunk_FUN_03d233cc(plVar6,lVar5);
        return;
      }
    }
    else {
      lVar5 = *(long *)(lVar2 + 0x18);
    }
    plVar6 = (long *)(unaff_x19 + 0x18);
    *plVar6 = lVar5;
    thunk_FUN_03d233cc(plVar6);
    if (*plVar6 != 0) {
      uVar3 = FUN_085d9f54(*plVar6,0);
      if ((uVar3 & 1) != 0) {
        FUN_08115080();
        return;
      }
      lVar2 = *(long *)(unaff_x19 + 0x18);
      uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80738);
      System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                ();
      if (lVar2 != 0) {
        FUN_085da19c(lVar2,uVar4,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


