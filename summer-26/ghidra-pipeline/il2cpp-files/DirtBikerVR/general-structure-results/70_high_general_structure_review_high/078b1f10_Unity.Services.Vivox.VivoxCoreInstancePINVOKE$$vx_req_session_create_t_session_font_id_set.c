/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_create_t_session_font_id_set
ENTRY_POINT: 078b1f10
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_create_t_session_font_id_set
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 in_w8;
  int *unaff_x19;
  long unaff_x20;
  undefined4 uStack0000000000000008;
  undefined8 uStack0000000000000018;
  
  *(undefined1 *)(unaff_x20 + 0x91d) = in_w8;
  puVar4 = System_Collections_Generic_List<QualityOptionOverride>_TypeInfo;
  uStack0000000000000018 = 0;
  uStack0000000000000008 = 0;
  if (*unaff_x19 == 0) {
    uStack0000000000000018 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *(long *)(*(long *)(unaff_x19 + 8) + 0x40);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = FUN_078b2150(lVar6,*(undefined8 *)(unaff_x19 + 10));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uStack0000000000000018 =
         FUN_058b71ec(lVar6,*(undefined8 *)System_Collections_Generic_List<RectInt>_TypeInfo);
    uVar7 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)System_Collections_Generic_List<RealtimeModel>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = uStack0000000000000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe83b0(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar8 = FUN_0587c704(&stack0x00000018,
                       *(undefined8 *)System_Collections_Generic_List<RaycastResult>_TypeInfo);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xc);
  uVar2 = *(undefined8 *)(unaff_x19 + 0xe);
  uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<RaycastHit>_TypeInfo);
  FUN_078e1678(uVar9,uVar1,uVar2,uVar8,0);
  puVar5 = System_Collections_Generic_List<RayTracingInstanceCullingTest>_TypeInfo;
  iVar3 = *(int *)(*(long *)puVar4 + 0xe4);
  *unaff_x19 = -2;
  if (iVar3 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar9,*(undefined8 *)puVar5);
  return;
}


