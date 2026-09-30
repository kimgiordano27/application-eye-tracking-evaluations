/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$op_Implicit
ENTRY_POINT: 046a64a0
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


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__op_Implicit(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar6;
  undefined *puVar5;
  
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 != 0) {
    lVar1 = *(long *)(unaff_x19 + 0x20);
    uVar3 = *unaff_x20;
    uVar4 = unaff_x20[1];
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    uVar2 = FUN_051438ec(lVar6,uVar3,uVar4,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x1f0));
    if ((uVar2 & 1) == 0) {
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
      if (lVar6 == 0) goto UnityEngine_UIElements_PointerCaptureEventBase<object>__LocalInit;
      lVar1 = *(long *)(unaff_x19 + 0x20);
      uVar3 = *unaff_x20;
      uVar4 = unaff_x20[1];
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_031c09d4();
      }
      uVar2 = FUN_051438ec(lVar6,uVar3,uVar4,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x2a0));
      if ((uVar2 & 1) == 0) {
        lVar6 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_031c09d4();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_031c09d4();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        lVar6 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_031c09d4();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_031c09d4();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
        if (lVar6 == 0) goto UnityEngine_UIElements_PointerCaptureEventBase<object>__LocalInit;
        lVar1 = *(long *)(unaff_x19 + 0x20);
        uVar3 = *unaff_x20;
        uVar4 = unaff_x20[1];
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_031c09d4();
        }
        uVar2 = FUN_051438ec(lVar6,uVar3,uVar4,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x2a8));
        if ((uVar2 & 1) == 0) {
          return;
        }
        thunk_FUN_031edd38(PTR_DAT_070d6c98);
        uVar3 = thunk_FUN_031c39fc();
        puVar5 = PTR_DAT_070f40e8;
      }
      else {
        thunk_FUN_031edd38(PTR_DAT_070d6c98);
        uVar3 = thunk_FUN_031c39fc();
        puVar5 = PTR_DAT_070f40e0;
      }
    }
    else {
      thunk_FUN_031edd38(PTR_DAT_070d6c98);
      uVar3 = thunk_FUN_031c39fc();
      puVar5 = PTR_DAT_070f40d0;
    }
    uVar4 = thunk_FUN_031edd38(puVar5);
    uVar3 = FUN_057b5e54(uVar4,uVar3,0);
    thunk_FUN_031edd38(PTR_DAT_070c4538);
    uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    FUN_0592f61c(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar4);
  }
UnityEngine_UIElements_PointerCaptureEventBase<object>__LocalInit:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


