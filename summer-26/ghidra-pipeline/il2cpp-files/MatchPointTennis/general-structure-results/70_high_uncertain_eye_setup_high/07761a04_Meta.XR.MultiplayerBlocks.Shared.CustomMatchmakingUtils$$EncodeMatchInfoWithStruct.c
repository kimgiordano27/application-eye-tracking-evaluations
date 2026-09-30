/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmakingUtils$$EncodeMatchInfoWithStruct
ENTRY_POINT: 07761a04
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_CustomMatchmakingUtils__EncodeMatchInfoWithStruct
               (float param_1,float param_2,undefined1 param_3 [16],ulong param_4,ulong param_5,
               undefined8 param_6)

{
  int iVar1;
  int in_w8;
  long lVar2;
  long lVar3;
  long unaff_x19;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  float unaff_s14;
  
  do {
    FUN_094cdfac(param_2 + param_1,(float)in_w8 - (float)param_5 * unaff_s14,0,param_4,param_5,0,
                 param_6);
    do {
      lVar3 = *(long *)(unaff_x19 + 0x18);
      if (lVar3 == 0) goto LAB_07761ab8;
      if (*(int *)(lVar3 + 0x18) == 0) {
LAB_07761ad4:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      if (*(long *)(lVar3 + 0x20) != 0) {
        FUN_094ce224(0x3f800000,0,0,0x3f800000,0);
        lVar3 = *(long *)(unaff_x19 + 0x18);
        if (lVar3 == 0) goto LAB_07761ab8;
        if (*(int *)(lVar3 + 0x18) == 0) goto LAB_07761ad4;
        FUN_077618f0(*(undefined8 *)(lVar3 + 0x20));
        lVar3 = *(long *)(unaff_x19 + 0x18);
        if (lVar3 == 0) goto LAB_07761ab8;
      }
      if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_07761ad4;
      if (*(long *)(lVar3 + 0x28) == 0) {
        return;
      }
      FUN_094ce224(0,0x3f800000,0,0x3f800000,0);
      lVar3 = *(long *)(unaff_x19 + 0x18);
      if (lVar3 == 0) goto LAB_07761ab8;
      if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_07761ad4;
      unaff_x19 = *(long *)(lVar3 + 0x28);
      if ((unaff_x19 == 0) || (lVar3 = *(long *)(unaff_x19 + 0x20), lVar3 == 0)) goto LAB_07761ab8;
      iVar4 = *(int *)(lVar3 + 0x18);
      iVar8 = *(int *)(lVar3 + 0x1c);
      iVar9 = *(int *)(lVar3 + 0x10);
      iVar1 = *(int *)(lVar3 + 0x14);
      FUN_094ce224(0x3f800000,0);
      FUN_094cdf18((float)iVar4 * unaff_s14 + (float)iVar9,(float)-iVar1 - (float)iVar8 * unaff_s14,
                   0,(float)iVar4,(float)iVar8,0,0);
    } while (*(long *)(unaff_x19 + 0x28) == 0);
    uVar5 = FUN_0951f860(0);
    uVar6 = FUN_0951f860(0);
    uVar7 = FUN_0951f860(0);
    FUN_094ce224(uVar5,uVar6,uVar7,0x3f800000,0);
    lVar3 = *(long *)(unaff_x19 + 0x28);
    if ((lVar3 == 0) || (lVar2 = *(long *)(unaff_x19 + 0x20), lVar2 == 0)) {
LAB_07761ab8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    param_6 = 0;
    param_4 = (ulong)(uint)(float)*(int *)(lVar3 + 0x14);
    param_5 = (ulong)(uint)(float)*(int *)(lVar3 + 0x18);
    in_w8 = -*(int *)(lVar2 + 0x14);
    param_1 = (float)*(int *)(lVar2 + 0x10);
    param_2 = (float)*(int *)(lVar3 + 0x14) * unaff_s14;
  } while( true );
}


