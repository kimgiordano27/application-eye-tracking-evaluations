/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$SerializeQuaternion
ENTRY_POINT: 05cba6f4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 Photon_Realtime_CustomTypesUnity__SerializeQuaternion(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  long *unaff_x21;
  
  FUN_03188a78();
  FUN_03188a78(PTR_DAT_0711b7b8);
  FUN_03188a78(PTR_DAT_0711b7c0);
  FUN_03188a78(PTR_DAT_0711b7c8);
  FUN_03188a78(PTR_DAT_070f25e0);
  FUN_03188a78(PTR_DAT_070c4210);
  *(undefined1 *)(unaff_x19 + 0x360) = 1;
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *unaff_x21;
  }
  uVar3 = FUN_0594edc8(*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8),0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_0711b7c0 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar2 = FUN_05ceb8d4(0);
    if (lVar2 == 0) {
      lVar2 = *unaff_x21;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar2 = *unaff_x21;
      }
      *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) =
           *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x23b0);
    }
    else {
      lVar2 = FUN_057c24e0(lVar2,0x2d,0,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      uVar7 = *(undefined8 *)(lVar2 + 0x20);
      uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_070c4210);
      FUN_0594eb5c(uVar4,uVar7,0);
      lVar2 = *unaff_x21;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar2 = *unaff_x21;
      }
      *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) = uVar4;
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar2 = *unaff_x21;
    }
    puVar1 = PTR_DAT_0711b7b8;
    lVar6 = *(long *)PTR_DAT_0711b7b8;
    uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar6);
      lVar6 = *(long *)puVar1;
    }
    uVar3 = FUN_0594edc8(uVar4,**(undefined8 **)(lVar6 + 0xb8),0);
    puVar1 = PTR_DAT_0711b7b0;
    if ((uVar3 & 1) == 0) {
      lVar2 = *unaff_x21;
    }
    else {
      lVar6 = *(long *)PTR_DAT_0711b7b0;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar6);
        lVar6 = *(long *)puVar1;
      }
      lVar2 = *unaff_x21;
      uVar4 = **(undefined8 **)(lVar6 + 0xb8);
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar2 = *unaff_x21;
      }
      *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) = uVar4;
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar2 = *unaff_x21;
    }
    uVar3 = FUN_0594faa4(*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8),
                         *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x23b0),0);
    if ((uVar3 & 1) != 0) {
      lVar2 = *unaff_x21;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar2 = *unaff_x21;
      }
      puVar1 = PTR_DAT_0711b7c8;
      lVar6 = *(long *)PTR_DAT_0711b7c8;
      uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar6);
        lVar6 = *(long *)puVar1;
      }
      uVar3 = FUN_0594f9e0(uVar4,**(undefined8 **)(lVar6 + 0xb8),0);
      if ((uVar3 & 1) != 0) {
        uVar4 = thunk_FUN_031edd38(PTR_DAT_070c28d8);
        lVar2 = FUN_03188b1c(uVar4,5);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        uVar4 = thunk_FUN_031edd38(PTR_DAT_0711b7d0);
        if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        *(undefined8 *)(lVar2 + 0x20) = uVar4;
        lVar6 = thunk_FUN_031edd38(PTR_DAT_070f25e0);
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        lVar6 = thunk_FUN_031edd38(PTR_DAT_070f25e0);
        plVar5 = (long *)**(long **)(lVar6 + 0xb8);
        if (plVar5 == (long *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        }
        FUN_02d342ac(lVar2);
        FUN_02d39e20(lVar2,1,uVar4);
        uVar4 = thunk_FUN_031edd38(PTR_DAT_0711b7d8);
        FUN_02d39e20(lVar2,2,uVar4);
        puVar1 = PTR_DAT_070f25e0;
        thunk_FUN_031edd38(PTR_DAT_070f25e0);
        FUN_02d35640();
        lVar6 = thunk_FUN_031edd38(puVar1);
        plVar5 = *(long **)(*(long *)(lVar6 + 0xb8) + 8);
        FUN_02d342ac(plVar5);
        uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        FUN_02d39e20(lVar2,3,uVar4);
        uVar4 = thunk_FUN_031edd38(PTR_DAT_0711b7e0);
        FUN_02d39e20(lVar2,4,uVar4);
        uVar4 = FUN_057bfff0(lVar2,0);
        thunk_FUN_031edd38(PTR_DAT_070f6458);
        uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
        FUN_05940314(uVar7,uVar4,0);
        uVar4 = thunk_FUN_031edd38(PTR_DAT_0711b7e8);
                    /* WARNING: Subroutine does not return */
        FUN_03188b9c(uVar7,uVar4);
      }
    }
  }
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *unaff_x21;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
}


