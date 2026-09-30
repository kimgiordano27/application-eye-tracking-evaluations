/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$.ctor
ENTRY_POINT: 046a6430
PROGRAM: waitwhat-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>___ctor(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined *puVar6;
  
  uVar1 = FUN_051438ec();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
    if (lVar2 == 0) {
UnityEngine_UIElements_PointerCaptureEventBase<object>__LocalInit:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    uVar4 = *unaff_x20;
    uVar5 = unaff_x20[1];
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4();
    }
    uVar1 = FUN_051438ec(lVar2,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x1f0));
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
      if (lVar2 == 0) goto UnityEngine_UIElements_PointerCaptureEventBase<object>__LocalInit;
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar4 = *unaff_x20;
      uVar5 = unaff_x20[1];
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4();
      }
      uVar1 = FUN_051438ec(lVar2,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2a0));
      if ((uVar1 & 1) == 0) {
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_031c09d4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_031c09d4();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_031c09d4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_031c09d4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
        if (lVar2 == 0) goto UnityEngine_UIElements_PointerCaptureEventBase<object>__LocalInit;
        lVar3 = *(long *)(unaff_x19 + 0x20);
        uVar4 = *unaff_x20;
        uVar5 = unaff_x20[1];
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_031c09d4();
        }
        uVar1 = FUN_051438ec(lVar2,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2a8));
        if ((uVar1 & 1) == 0) {
          return;
        }
        thunk_FUN_031edd38(PTR_DAT_070d6c98);
        uVar4 = thunk_FUN_031c39fc();
        puVar6 = PTR_DAT_070f40e8;
      }
      else {
        thunk_FUN_031edd38(PTR_DAT_070d6c98);
        uVar4 = thunk_FUN_031c39fc();
        puVar6 = PTR_DAT_070f40e0;
      }
    }
    else {
      thunk_FUN_031edd38(PTR_DAT_070d6c98);
      uVar4 = thunk_FUN_031c39fc();
      puVar6 = PTR_DAT_070f40d0;
    }
  }
  else {
    thunk_FUN_031edd38(PTR_DAT_070d6c98);
    uVar4 = thunk_FUN_031c39fc();
    puVar6 = PTR_DAT_070f40c8;
  }
  uVar5 = thunk_FUN_031edd38(puVar6);
  uVar4 = FUN_057b5e54(uVar5,uVar4,0);
  thunk_FUN_031edd38(PTR_DAT_070c4538);
  uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  FUN_0592f61c(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar5);
}


