/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_language_set
ENTRY_POINT: 08115c14
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_language_set
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long unaff_x21;
  long lVar11;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08f023f8);
  *(undefined1 *)(unaff_x21 + 0xc5a) = 1;
  in_stack_00000048 = 0;
  in_stack_00000038 = 0;
  uVar9 = *(undefined8 *)(unaff_x19 + 0x10);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar4 = FUN_085dfaac(uVar9,0,0);
  puVar3 = PTR_DAT_08f023f8;
  puVar2 = PTR_DAT_08f023f0;
  puVar1 = PTR_DAT_08e695a0;
  lVar10 = unaff_x19 + 0x30;
  if ((uVar4 & 1) != 0) {
    plVar5 = (long *)Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_subscription_t_message_set
                               (lVar10);
    uVar9 = *(undefined8 *)puVar3;
    if (plVar5 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    }
    uVar9 = FUN_06f683f8(uVar9,uVar6,0);
    uVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    FUN_071396dc(uVar6,uVar9,0);
    FUN_0479df5c(lVar10,0,0,uVar6,*(undefined8 *)puVar2);
    return;
  }
  lVar11 = *(long *)(unaff_x19 + 0x40);
  uVar9 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_subscription_t_message_set(lVar10);
  if (lVar11 == 0) goto LAB_08115f6c;
  uVar9 = FUN_081031d4(lVar11,uVar9);
  lVar11 = FUN_08114f60(lVar10);
  if (lVar11 == 0) goto LAB_08115f6c;
  uVar4 = FUN_0711b200(lVar11,0);
  if ((uVar4 & 1) == 0) {
    plVar5 = (long *)FUN_08114f60(lVar10);
    if (plVar5 == (long *)0x0) goto LAB_08115f6c;
    uVar4 = (**(code **)(*plVar5 + 1000))(plVar5,*(undefined8 *)(*plVar5 + 0x3f0));
    if ((uVar4 & 1) != 0) {
      uVar6 = *(undefined8 *)PTR_DAT_08e81e18;
      if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar6 = FUN_0710fcf0(uVar6,0);
      plVar5 = (long *)FUN_08114f60(lVar10);
      if (plVar5 == (long *)0x0) goto LAB_08115f6c;
      uVar7 = (**(code **)(*plVar5 + 0x478))(plVar5,*(undefined8 *)(*plVar5 + 0x480));
      uVar4 = FUN_07119344(uVar6,uVar7,0);
      if ((uVar4 & 1) == 0) goto LAB_08115e10;
      lVar11 = *(long *)(unaff_x19 + 0x10);
      plVar5 = (long *)FUN_08114f60(lVar10);
      if ((plVar5 == (long *)0x0) ||
         (lVar8 = (**(code **)(*plVar5 + 0x498))(plVar5,*(undefined8 *)(*plVar5 + 0x4a0)),
         lVar8 == 0)) goto LAB_08115f6c;
      if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      if (lVar11 == 0) goto LAB_08115f6c;
      uVar6 = *(undefined8 *)(lVar8 + 0x20);
      goto LAB_08115e58;
    }
LAB_08115e10:
    uVar4 = FUN_0810fd88(uVar9,&stack0x00000048,&stack0x00000038);
    if ((uVar4 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000038;
      thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x48));
      uVar9 = in_stack_00000048;
      lVar11 = *(long *)(unaff_x19 + 0x10);
      uVar6 = FUN_08114f60(lVar10);
      goto joined_r0x08115e48;
    }
    lVar11 = *(long *)(unaff_x19 + 0x10);
    uVar6 = FUN_08114f60(lVar10);
    if (lVar11 == 0) goto LAB_08115f6c;
    uVar9 = FUN_08591468(lVar11,uVar9,uVar6,0);
  }
  else {
    lVar11 = *(long *)(unaff_x19 + 0x10);
    plVar5 = (long *)FUN_08114f60(lVar10);
    if (plVar5 == (long *)0x0) goto LAB_08115f6c;
    uVar6 = (**(code **)(*plVar5 + 0x458))(plVar5,*(undefined8 *)(*plVar5 + 0x460));
joined_r0x08115e48:
    if (lVar11 == 0) goto LAB_08115f6c;
LAB_08115e58:
    uVar9 = FUN_08591604(lVar11,uVar9,uVar6,0);
  }
  *(undefined8 *)(unaff_x19 + 0x20) = uVar9;
  thunk_FUN_03d233cc();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar4 = FUN_085d9f54(*(long *)(unaff_x19 + 0x20),0);
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_085ef868(0);
      if (((uVar4 & 1) != 0) && (uVar4 = FUN_08111604(lVar10), (uVar4 & 1) != 0)) {
        if (*(int *)(*(long *)PTR_DAT_08eec2a8 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_081160f4();
      }
      lVar10 = *(long *)(unaff_x19 + 0x20);
      uVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80738);
      System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                ();
      if (lVar10 == 0) {
LAB_08115f6c:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_085da19c(lVar10,uVar9,0);
    }
    else {
      FUN_08115f74();
    }
  }
  return;
}


