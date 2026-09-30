/*
FUNCTION_NAME: FUN_01e97628
ENTRY_POINT: 01e97628
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_01e97628(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  undefined8 uVar10;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01e97610 with catch @ 01e97628
                        */
  if ((DAT_044a2db0 & 1) == 0) {
    FUN_01d7d918(
                Field_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_m_Reader
                );
    FUN_01d7d918(Field_System_Net_Sockets_IPPacketInformation_address);
    FUN_01d7d918(Field_UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_assigned_loaders);
    DAT_044a2db0 = 1;
  }
  lVar3 = FUN_03d71c60(param_4,0);
  if ((*(long *)(param_4 + 0x28) != 0) && (FUN_03d7eda4(*(long *)(param_4 + 0x28),0), lVar3 != 0)) {
    FUN_03d7ee44(lVar3,0);
    lVar3 = FUN_03d71c60(param_4,0);
    if ((*(long *)(param_4 + 0x28) != 0) && (FUN_03d7d5b0(*(long *)(param_4 + 0x28),0), lVar3 != 0))
    {
      FUN_03d7efc4(lVar3,0);
      lVar3 = FUN_01e868d0();
      if (lVar3 != 0) {
        if (*(int *)(param_4 + 0x20) == 0) {
          fVar9 = (float)FUN_01e86f28();
        }
        else {
          fVar9 = (float)FUN_01e87000();
        }
        uVar4 = 0x3f000000;
        if (fVar9 <= 0.5) {
          return;
        }
        lVar3 = FUN_03d71c60(param_4,0);
        if (lVar3 != 0) {
          uVar10 = FUN_03d7eda4(lVar3,0);
          if (*(int *)(*(long *)Field_System_Net_Sockets_IPPacketInformation_address + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          lVar3 = FUN_03dc0e84(uVar10,uVar4,param_3,DAT_00bafb80,0);
          puVar2 = Field_UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_assigned_loaders
          ;
          if (lVar3 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if ((int)uVar1 < 1) {
              return;
            }
            uVar8 = 0;
            while( true ) {
              if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db78();
              }
              lVar7 = *(long *)(lVar3 + (long)(int)uVar8 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_01e97830;
              uVar4 = FUN_03d724f0(lVar7,0);
              uVar5 = thunk_FUN_03278f50(uVar4,*(undefined8 *)puVar2,0);
              if ((uVar5 & 1) != 0) break;
              uVar1 = *(uint *)(lVar3 + 0x18);
              uVar8 = uVar8 + 1;
              if ((int)uVar1 <= (int)uVar8) {
                return;
              }
            }
            lVar3 = FUN_020914e4(lVar7,*(undefined8 *)
                                        Field_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_m_Reader
                                );
            plVar6 = (long *)(param_4 + 0x30);
            *plVar6 = lVar3;
            thunk_FUN_01e10808(plVar6,lVar3);
            FUN_01e97a34(param_4,1);
            if (*plVar6 != 0) {
              FUN_01e97b38(*plVar6,*(undefined4 *)(param_4 + 0x20));
              return;
            }
          }
        }
      }
    }
  }
LAB_01e97830:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


