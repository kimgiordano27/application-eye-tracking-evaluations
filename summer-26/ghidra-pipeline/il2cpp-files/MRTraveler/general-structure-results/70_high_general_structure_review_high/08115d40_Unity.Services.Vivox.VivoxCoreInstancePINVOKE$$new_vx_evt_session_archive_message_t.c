/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_evt_session_archive_message_t
ENTRY_POINT: 08115d40
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_evt_session_archive_message_t
               (undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int in_w9;
  long unaff_x19;
  undefined8 uVar5;
  long lVar6;
  undefined8 in_stack_00000038;
  
  uVar5 = *param_1;
  if (in_w9 == 0) {
    thunk_FUN_03cd7500();
  }
  uVar5 = FUN_0710fcf0(uVar5,0);
  plVar1 = (long *)FUN_08114f60();
  if (plVar1 == (long *)0x0) goto LAB_08115f6c;
  uVar2 = (**(code **)(*plVar1 + 0x478))(plVar1,*(undefined8 *)(*plVar1 + 0x480));
  uVar3 = FUN_07119344(uVar5,uVar2,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_0810fd88();
    if ((uVar3 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000038;
      thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x48));
      lVar6 = *(long *)(unaff_x19 + 0x10);
      FUN_08114f60();
      goto joined_r0x08115e48;
    }
    lVar6 = *(long *)(unaff_x19 + 0x10);
    FUN_08114f60();
    if (lVar6 == 0) goto LAB_08115f6c;
    uVar5 = FUN_08591468(lVar6);
  }
  else {
    lVar6 = *(long *)(unaff_x19 + 0x10);
    plVar1 = (long *)FUN_08114f60();
    if ((plVar1 == (long *)0x0) ||
       (lVar4 = (**(code **)(*plVar1 + 0x498))(plVar1,*(undefined8 *)(*plVar1 + 0x4a0)), lVar4 == 0)
       ) goto LAB_08115f6c;
    if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
joined_r0x08115e48:
    if (lVar6 == 0) goto LAB_08115f6c;
    uVar5 = FUN_08591604(lVar6);
  }
  *(undefined8 *)(unaff_x19 + 0x20) = uVar5;
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
      lVar6 = *(long *)(unaff_x19 + 0x20);
      uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80738);
      System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                ();
      if (lVar6 == 0) {
LAB_08115f6c:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_085da19c(lVar6,uVar5,0);
    }
    else {
      FUN_08115f74();
    }
  }
  return;
}


