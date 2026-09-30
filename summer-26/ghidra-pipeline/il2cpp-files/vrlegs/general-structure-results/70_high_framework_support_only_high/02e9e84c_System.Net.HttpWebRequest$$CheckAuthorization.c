/*
FUNCTION_NAME: System.Net.HttpWebRequest$$CheckAuthorization
ENTRY_POINT: 02e9e84c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e9e9a0) */
/* WARNING: Removing unreachable block (ram,0x02e9e970) */

void System_Net_HttpWebRequest__CheckAuthorization(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong unaff_x24;
  char cStack0000000000000004;
  ushort in_stack_00000008;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar1 = in_stack_00000008;
  if (*unaff_x20 != 0) {
    uVar3 = *(uint *)(*unaff_x20 + 0x10);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      uVar6 = (ulong)in_stack_00000008;
      uVar5 = (uint)in_stack_00000008;
      *(ushort *)(*(long *)(unaff_x19 + 0x38) + 0x34) = in_stack_00000008;
      lVar4 = *unaff_x20;
      if (lVar4 != 0) {
        iVar2 = thunk_FUN_01a5ddb0(0);
        lVar4 = lVar4 + iVar2;
      }
      if ((uVar5 < (uVar3 & 0xffff)) && (*(short *)(lVar4 + uVar6 * 2) == 0x23)) {
        in_stack_00000008 = uVar1 + 1;
        uVar3 = FUN_02ea5f94();
        uVar6 = unaff_x24 | 0x40;
        if ((uVar3 & 2) != 0) {
          uVar6 = unaff_x24;
        }
        if ((uVar3 & 0x11) != 1) {
          uVar6 = uVar6 | 0x1000;
        }
        unaff_x24 = uVar6 | 0x40000000000;
        if ((uVar3 & 0x5b) != 10 || *(char *)(unaff_x19 + 0x40) == '\0') {
          unaff_x24 = uVar6;
        }
      }
      lVar4 = *(long *)(unaff_x19 + 0x38);
      if (lVar4 != 0) {
        *(ushort *)(lVar4 + 0x36) = in_stack_00000008;
        cStack0000000000000004 = '\0';
        FUN_027e0bd8(lVar4,&stack0x00000004,0);
        *(ulong *)(unaff_x19 + 0x30) = unaff_x24 | *(ulong *)(unaff_x19 + 0x30) | 0x80000000;
        if (cStack0000000000000004 != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(lVar4,0);
        }
        *(ulong *)(unaff_x19 + 0x30) = *(ulong *)(unaff_x19 + 0x30) | 0x800000000;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


