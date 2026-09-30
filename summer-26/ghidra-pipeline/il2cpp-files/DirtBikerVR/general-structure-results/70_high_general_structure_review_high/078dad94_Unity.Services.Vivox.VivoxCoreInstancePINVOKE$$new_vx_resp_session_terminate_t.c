/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_resp_session_terminate_t
ENTRY_POINT: 078dad94
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_resp_session_terminate_t(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  FUN_0496d698();
                    /* try { // try from 078dada8 to 079dadef has its CatchHandler @ 078dac3c */
  lVar2 = FUN_0481b0a4();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 =
       FUN_058b71ec(lVar2,*(undefined8 *)Oculus_Platform_Request<ApplicationVersion>_TypeInfo);
  uVar3 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)Oculus_Platform_Request<ApplicationInviteList>_TypeInfo);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0x14,0);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff7198(unaff_x19 + 2,&stack0x00000018);
  }
  else {
                    /* try { // try from 078dadf0 to 079dadff has its CatchHandler @ 078dae00 */
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
    lVar6 = *(long *)(lVar2 + 0x18);
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      plVar8 = *(long **)(unaff_x20 + 0x28);
      if (plVar8 != (long *)0x0) {
        plVar10 = *(long **)(unaff_x20 + 0x20);
        uVar9 = *(undefined8 *)(lVar6 + 0x18);
        if (plVar10 == (long *)0x0) {
          uVar5 = 0;
        }
        else {
          lVar6 = *plVar10;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  *(long *)Oculus_Platform_Request<AchievementProgressList>_TypeInfo) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_078daf38;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_03ac43c4(plVar10,*(long *)
                                         Oculus_Platform_Request<AchievementProgressList>_TypeInfo,1
                               );
LAB_078daf38:
          uVar5 = (*(code *)*puVar4)(plVar10,puVar4[1]);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
        }
        lVar6 = *plVar8;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)Oculus_Platform_Request<AchievementDefinitionList>_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_078dafa8;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_03ac43c4(plVar8,*(long *)
                                      Oculus_Platform_Request<AchievementDefinitionList>_TypeInfo,0)
        ;
LAB_078dafa8:
        (*(code *)*puVar4)(plVar8,uVar9,uVar5,puVar4[1]);
      }
    }
    puVar1 = 
    UnityEngine_Rendering_RenderGraphModule_RenderGraphResourcePool<GraphicsBuffer>_TypeInfo;
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,lVar2,*(undefined8 *)puVar1);
  }
  return;
}


