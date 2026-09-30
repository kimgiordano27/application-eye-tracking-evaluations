/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_session_text_disconnect_t_base__set
ENTRY_POINT: 078daab4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_7
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_text_disconnect_t_base__set
               (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long *unaff_x26;
  undefined8 uStack0000000000000018;
  
  *(undefined8 *)(unaff_x19 + 0x14) = 0;
  *unaff_x19 = 0xffffffff;
  uStack0000000000000018 = param_1;
  lVar2 = FUN_0587c704(&stack0x00000018,
                       *(undefined8 *)Oculus_Platform_Request<AppDownloadResult>_TypeInfo);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar2 = *(long *)(lVar2 + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *(long *)(lVar2 + 0x18);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar8 = *(long **)(unaff_x20 + 0x28);
    if (plVar8 != (long *)0x0) {
      plVar10 = *(long **)(unaff_x20 + 0x20);
      uVar9 = *(undefined8 *)(lVar5 + 0x18);
      if (plVar10 == (long *)0x0) {
        uVar4 = 0;
      }
      else {
        lVar5 = *plVar10;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)Oculus_Platform_Request<AchievementProgressList>_TypeInfo) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_078daf38;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_03ac43c4(plVar10,*(long *)
                                       Oculus_Platform_Request<AchievementProgressList>_TypeInfo,1);
LAB_078daf38:
        uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Oculus_Platform_Request<AchievementDefinitionList>_TypeInfo) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_078dafa8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_03ac43c4(plVar8,*(long *)
                                    Oculus_Platform_Request<AchievementDefinitionList>_TypeInfo,0);
LAB_078dafa8:
      (*(code *)*puVar3)(plVar8,uVar9,uVar4,puVar3[1]);
    }
  }
  puVar1 = UnityEngine_Rendering_RenderGraphModule_RenderGraphResourcePool<GraphicsBuffer>_TypeInfo;
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,lVar2,*(undefined8 *)puVar1);
  return;
}


