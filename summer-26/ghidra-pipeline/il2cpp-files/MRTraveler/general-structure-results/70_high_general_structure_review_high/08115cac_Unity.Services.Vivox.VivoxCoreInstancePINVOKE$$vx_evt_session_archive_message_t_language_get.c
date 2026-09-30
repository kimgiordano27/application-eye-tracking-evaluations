/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_language_get
ENTRY_POINT: 08115cac
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_language_get
               (void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  
  uVar1 = FUN_081031d4();
  lVar2 = FUN_08114f60();
  if (lVar2 == 0) goto LAB_08115f6c;
  uVar3 = FUN_0711b200(lVar2,0);
  if ((uVar3 & 1) == 0) {
    plVar4 = (long *)FUN_08114f60();
    if (plVar4 == (long *)0x0) goto LAB_08115f6c;
    uVar3 = (**(code **)(*plVar4 + 1000))(plVar4,*(undefined8 *)(*plVar4 + 0x3f0));
    if ((uVar3 & 1) != 0) {
      uVar5 = *(undefined8 *)PTR_DAT_08e81e18;
      if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar5 = FUN_0710fcf0(uVar5,0);
      plVar4 = (long *)FUN_08114f60();
      if (plVar4 == (long *)0x0) goto LAB_08115f6c;
      uVar6 = (**(code **)(*plVar4 + 0x478))(plVar4,*(undefined8 *)(*plVar4 + 0x480));
      uVar3 = FUN_07119344(uVar5,uVar6,0);
      if ((uVar3 & 1) == 0) goto LAB_08115e10;
      lVar2 = *(long *)(unaff_x19 + 0x10);
      plVar4 = (long *)FUN_08114f60();
      if ((plVar4 == (long *)0x0) ||
         (lVar7 = (**(code **)(*plVar4 + 0x498))(plVar4,*(undefined8 *)(*plVar4 + 0x4a0)),
         lVar7 == 0)) goto LAB_08115f6c;
      if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      if (lVar2 == 0) goto LAB_08115f6c;
      uVar5 = *(undefined8 *)(lVar7 + 0x20);
      goto LAB_08115e58;
    }
LAB_08115e10:
    uVar3 = FUN_0810fd88(uVar1,&stack0x00000048,&stack0x00000038);
    if ((uVar3 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000038;
      thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x48));
      uVar1 = in_stack_00000048;
      lVar2 = *(long *)(unaff_x19 + 0x10);
      uVar5 = FUN_08114f60();
      goto joined_r0x08115e48;
    }
    lVar2 = *(long *)(unaff_x19 + 0x10);
    uVar5 = FUN_08114f60();
    if (lVar2 == 0) goto LAB_08115f6c;
    uVar1 = FUN_08591468(lVar2,uVar1,uVar5,0);
  }
  else {
    lVar2 = *(long *)(unaff_x19 + 0x10);
    plVar4 = (long *)FUN_08114f60();
    if (plVar4 == (long *)0x0) goto LAB_08115f6c;
    uVar5 = (**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
joined_r0x08115e48:
    if (lVar2 == 0) goto LAB_08115f6c;
LAB_08115e58:
    uVar1 = FUN_08591604(lVar2,uVar1,uVar5,0);
  }
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
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
      lVar2 = *(long *)(unaff_x19 + 0x20);
      uVar1 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80738);
      System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                ();
      if (lVar2 == 0) {
LAB_08115f6c:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_085da19c(lVar2,uVar1,0);
    }
    else {
      FUN_08115f74();
    }
  }
  return;
}


