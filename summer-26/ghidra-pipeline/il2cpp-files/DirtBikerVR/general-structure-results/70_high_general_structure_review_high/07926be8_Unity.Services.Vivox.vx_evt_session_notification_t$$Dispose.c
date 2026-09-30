/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_notification_t$$Dispose
ENTRY_POINT: 07926be8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_vx_evt_session_notification_t__Dispose(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long *plVar11;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined8 in_stack_00000020;
  
  FUN_0350a870(param_1,5);
  uVar7 = FUN_065ce45c();
  FUN_078c790c(uVar7,0);
  uVar7 = *(undefined8 *)(unaff_x19 + 8);
  uVar1 = *(undefined8 *)(unaff_x19 + 10);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_GameObject___TypeInfo);
  FUN_07928c84(uVar4,uVar7,uVar1,0);
  uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_GUIContent___TypeInfo);
  FUN_07930a54(uVar7,uVar4,0);
  if (unaff_w25 == 2) {
    in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x12);
    *(undefined8 *)(unaff_x19 + 0x12) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar11 = *(long **)(unaff_x24 + 0x40);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)UnityEngine_GUILayoutOption___TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_07926898;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)UnityEngine_GUILayoutOption___TypeInfo,0);
LAB_07926898:
    lVar6 = (*(code *)*puVar5)(plVar11,uVar7,0,puVar5[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000020 = FUN_058b71ec(lVar6,*(undefined8 *)UnityEngine_TextCore_Glyph___TypeInfo);
    uVar9 = FUN_0587c6c4(&stack0x00000020,
                         *(undefined8 *)Gley_TrafficSystem_Internal_GenericIntersection___TypeInfo);
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000020;
      thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ff3620(unaff_x19 + 2,&stack0x00000020);
      return;
    }
  }
  lVar6 = FUN_0587c704(&stack0x00000020,
                       *(undefined8 *)Unity_Multiplayer_Tools_NetStats_Gauge___TypeInfo);
  puVar3 = System_Runtime_InteropServices_GCHandle___TypeInfo;
  if (lVar6 != 0) {
    lVar8 = *unaff_x23;
    uVar7 = *(undefined8 *)(lVar6 + 0x20);
    iVar2 = *(int *)(lVar8 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar2 == 0) {
      thunk_FUN_03ae8be4(lVar8);
    }
    FUN_05338ae8(unaff_x19 + 2,uVar7,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


