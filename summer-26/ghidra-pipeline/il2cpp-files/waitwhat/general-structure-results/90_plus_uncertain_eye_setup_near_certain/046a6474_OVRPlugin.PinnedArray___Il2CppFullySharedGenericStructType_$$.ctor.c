/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$.ctor
ENTRY_POINT: 046a6474
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


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>___ctor(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined *puVar6;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_031c09d4();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar4 = *unaff_x20;
    uVar5 = unaff_x20[1];
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    uVar3 = FUN_051438ec(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x1f0));
    if ((uVar3 & 1) == 0) {
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_031c09d4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_031c09d4();
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_031c09d4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_031c09d4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
      if (lVar1 == 0) goto UnityEngine_UIElements_PointerCaptureEventBase<object>__LocalInit;
      lVar2 = *(long *)(unaff_x19 + 0x20);
      uVar4 = *unaff_x20;
      uVar5 = unaff_x20[1];
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4();
      }
      uVar3 = FUN_051438ec(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x2a0));
      if ((uVar3 & 1) == 0) {
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_031c09d4();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_031c09d4();
        }
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_031c09d4();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_031c09d4();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
        if (lVar1 == 0) goto UnityEngine_UIElements_PointerCaptureEventBase<object>__LocalInit;
        lVar2 = *(long *)(unaff_x19 + 0x20);
        uVar4 = *unaff_x20;
        uVar5 = unaff_x20[1];
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_031c09d4();
        }
        uVar3 = FUN_051438ec(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x2a8));
        if ((uVar3 & 1) == 0) {
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
    uVar5 = thunk_FUN_031edd38(puVar6);
    uVar4 = FUN_057b5e54(uVar5,uVar4,0);
    thunk_FUN_031edd38(PTR_DAT_070c4538);
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    FUN_0592f61c(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar5);
  }
UnityEngine_UIElements_PointerCaptureEventBase<object>__LocalInit:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


