/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_notification_t$$Dispose
ENTRY_POINT: 07926b7c
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
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined8 in_stack_00000020;
  
  FUN_0350a870(param_1,2);
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar7 = (long *)FUN_06788ad0();
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
  FUN_0350a870();
  thunk_FUN_03af1434(System_Collections_Generic_List<ApplicationInvite>_TypeInfo);
  FUN_0350a870();
  (**(code **)(*unaff_x20 + 0x188))();
  FUN_0350a870();
  uVar8 = FUN_065ce45c();
  FUN_078c790c(uVar8,0);
  uVar8 = *(undefined8 *)(unaff_x19 + 8);
  uVar1 = *(undefined8 *)(unaff_x19 + 10);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_GameObject___TypeInfo);
  FUN_07928c84(uVar4,uVar8,uVar1,0);
  uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_GUIContent___TypeInfo);
  FUN_07930a54(uVar8,uVar4,0);
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
    plVar7 = *(long **)(unaff_x24 + 0x40);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)UnityEngine_GUILayoutOption___TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_07926898;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)UnityEngine_GUILayoutOption___TypeInfo,0);
LAB_07926898:
    lVar6 = (*(code *)*puVar5)(plVar7,uVar8,0,puVar5[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000020 = FUN_058b71ec(lVar6,*(undefined8 *)UnityEngine_TextCore_Glyph___TypeInfo);
    uVar10 = FUN_0587c6c4(&stack0x00000020,
                          *(undefined8 *)Gley_TrafficSystem_Internal_GenericIntersection___TypeInfo)
    ;
    if ((uVar10 & 1) == 0) {
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
    lVar9 = *unaff_x23;
    uVar8 = *(undefined8 *)(lVar6 + 0x20);
    iVar2 = *(int *)(lVar9 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar2 == 0) {
      thunk_FUN_03ae8be4(lVar9);
    }
    FUN_05338ae8(unaff_x19 + 2,uVar8,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


