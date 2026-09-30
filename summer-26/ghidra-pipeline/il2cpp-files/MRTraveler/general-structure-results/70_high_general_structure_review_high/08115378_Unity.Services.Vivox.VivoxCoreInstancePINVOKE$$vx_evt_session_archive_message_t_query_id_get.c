/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_query_id_get
ENTRY_POINT: 08115378
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_query_id_get
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  FUN_03c8f898(PTR_DAT_08e82db8);
  *(undefined1 *)(unaff_x22 + 0xc56) = 1;
  uVar2 = thunk_FUN_03cf5234(*unaff_x24);
  FUN_088236d4(uVar2,0);
  lVar3 = thunk_FUN_03cf5234(*unaff_x23);
  FUN_0882438c();
  if (0 < *(int *)(unaff_x19 + 0x44)) {
    if (lVar3 == 0) goto LAB_0811558c;
    FUN_0882598c(lVar3,*(int *)(unaff_x19 + 0x44),0);
  }
  puVar1 = PTR_DAT_08eec280;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x20);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),lVar3,*(undefined8 *)(lVar5 + 0x28))
      ;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar3 = FUN_08108ae0(lVar3);
    plVar6 = (long *)(unaff_x19 + 0x20);
    *plVar6 = lVar3;
    thunk_FUN_03d233cc(plVar6,lVar3);
    puVar1 = PTR_DAT_08eec260;
    lVar3 = *plVar6;
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x10) == '\0') {
        lVar5 = *(long *)(lVar3 + 0x18);
        if (lVar5 == 0) {
          plVar6 = (long *)(lVar3 + 0x20);
          lVar3 = *plVar6;
          uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eec260);
          System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                    ();
          lVar3 = FUN_0714874c(lVar3,uVar2,0);
          if (lVar3 != 0) {
            uVar2 = *(undefined8 *)puVar1;
            lVar5 = thunk_FUN_03cf5138(lVar3,uVar2);
            if (lVar5 != 0) {
              *plVar6 = lVar5;
              uVar2 = *(undefined8 *)puVar1;
              lVar5 = thunk_FUN_03cf5138(lVar3,uVar2);
              if (lVar5 != 0) goto LAB_08115574;
            }
                    /* WARNING: Subroutine does not return */
            FUN_03c8fecc(lVar3,uVar2);
          }
          lVar5 = 0;
          *plVar6 = 0;
LAB_08115574:
          thunk_FUN_03d233cc(plVar6,lVar5);
          return;
        }
      }
      else {
        lVar5 = *(long *)(lVar3 + 0x18);
      }
      plVar6 = (long *)(unaff_x19 + 0x18);
      *plVar6 = lVar5;
      thunk_FUN_03d233cc(plVar6);
      if (*plVar6 != 0) {
        uVar4 = FUN_085d9f54(*plVar6,0);
        if ((uVar4 & 1) != 0) {
          FUN_08115080();
          return;
        }
        lVar3 = *(long *)(unaff_x19 + 0x18);
        uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80738);
        System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                  ();
        if (lVar3 != 0) {
          FUN_085da19c(lVar3,uVar2,0);
          return;
        }
      }
    }
  }
LAB_0811558c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


