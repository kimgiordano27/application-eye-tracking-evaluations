/*
FUNCTION_NAME: Virtence.VText.Demo.AudioVisualizer.<Animate>d__11$$.ctor
ENTRY_POINT: 01f33314
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_5;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_7;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


byte Virtence_VText_Demo_AudioVisualizer_<Animate>d__11___ctor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  PayloadData_t5FFC182F3A74F245E88B6B2475F9283E58CA488C *pPVar3;
  void *pvVar4;
  WebSocketFrame_t4502E8AF829CD1DFBE65C84A950A904E2E5A157B *pWVar5;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000050;
  
  do {
    uStack0000000000000038 = param_1;
    Ext_WriteBytes_mCBC5E78524A9FB8E4313D2AEBBF1C63F91DA3C02(in_stack_00000050,param_1,param_3);
    while( true ) {
      in_stack_00000020[0xc] = *(undefined8 *)(in_stack_00000020[0x10] + 0xe0);
      NullCheck((void *)in_stack_00000020[0xc]);
      uVar2 = WebSocketStream_ReadFrame_m322C1CE4D1B65AAF6F9A4EA27E8837B0CC1029DE
                        (in_stack_00000020[0xc]);
      in_stack_00000020[0xb] = uVar2;
      in_stack_00000020[0xd] = in_stack_00000020[0xb];
      in_stack_00000020[10] = in_stack_00000020[0xd];
      NullCheck((void *)in_stack_00000020[10]);
      bVar1 = WebSocketFrame_get_IsFinal_m73E35DD899268C0CB4EF8B7B9B796D14062FEC12
                        (in_stack_00000020[10],0);
      *(byte *)(unaff_x29 + -0x41) = bVar1 & 1;
      if ((*(byte *)(unaff_x29 + -0x41) & 1) == 0) break;
      in_stack_00000020[8] = in_stack_00000020[0xd];
      NullCheck((void *)in_stack_00000020[8]);
      bVar1 = WebSocketFrame_get_IsContinuation_mF04C78175D5CA729E8220B6E9158A8F93E4A9485
                        (in_stack_00000020[8],0);
      *(byte *)(unaff_x29 + -0x51) = bVar1 & 1;
      if ((*(byte *)(unaff_x29 + -0x51) & 1) != 0) {
        in_stack_00000020[6] = in_stack_00000020[0xf];
        in_stack_00000020[5] = in_stack_00000020[0xd];
        NullCheck((void *)in_stack_00000020[5]);
        uVar2 = WebSocketFrame_get_PayloadData_m2D692CB8EE635C5C117E2FFD0083CFBEB5EE1A40_inline
                          ((WebSocketFrame_t4502E8AF829CD1DFBE65C84A950A904E2E5A157B *)
                           in_stack_00000020[5],(MethodInfo *)0x0);
        in_stack_00000020[4] = uVar2;
        NullCheck((void *)in_stack_00000020[4]);
        uVar2 = PayloadData_get_ApplicationData_mDC3665534A3EB6031E567EFBDB6A06CA72FD0FC8_inline
                          ((PayloadData_t5FFC182F3A74F245E88B6B2475F9283E58CA488C *)
                           in_stack_00000020[4],(MethodInfo *)0x0);
        in_stack_00000020[3] = uVar2;
        Ext_WriteBytes_mCBC5E78524A9FB8E4313D2AEBBF1C63F91DA3C02
                  (in_stack_00000020[6],in_stack_00000020[3],0);
        *(undefined1 *)(unaff_x29 + -1) = 1;
        goto LAB_01f3337c;
      }
      in_stack_00000020[2] = in_stack_00000020[0xd];
      NullCheck((void *)in_stack_00000020[2]);
      bVar1 = WebSocketFrame_get_IsPing_m0F8D36434044C46779461F3584F978C3CB147851
                        (in_stack_00000020[2],0);
      *(byte *)(unaff_x29 + -0x81) = bVar1 & 1;
      if ((*(byte *)(unaff_x29 + -0x81) & 1) == 0) {
        pvVar4 = (void *)in_stack_00000020[0xd];
        NullCheck(pvVar4);
        bVar1 = WebSocketFrame_get_IsPong_m568DEDCFF59461586C526918283781A95712556D(pvVar4,0);
        if ((bVar1 & 1) == 0) {
          pvVar4 = (void *)in_stack_00000020[0xd];
          NullCheck(pvVar4);
          bVar1 = WebSocketFrame_get_IsClose_m9512A282DAFBEACC7B1DD27265FA5D972FFF2E59(pvVar4,0);
          if ((bVar1 & 1) == 0) goto LAB_01f33328;
          bVar1 = WebSocket_acceptCloseFrame_mC3FB3C05F6E9A6E5CAC72F7238606C286B296735
                            (in_stack_00000020[0x10],in_stack_00000020[0xd],0);
          *(byte *)(unaff_x29 + -1) = bVar1 & 1;
          goto LAB_01f3337c;
        }
        WebSocket_acceptPongFrame_m30DB7520A4120D057127D64923D564C97FC96E59
                  (in_stack_00000020[0x10],in_stack_00000020[0xd],0);
      }
      else {
        *in_stack_00000020 = in_stack_00000020[0xd];
        bVar1 = WebSocket_acceptPingFrame_m38FE76CA3507D3D3A8E5DBF47FC4C59CD60C74B5
                          (in_stack_00000020[0x10],*in_stack_00000020,0);
        *(byte *)(unaff_x29 + -0x91) = bVar1 & 1;
      }
    }
    pvVar4 = (void *)in_stack_00000020[0xd];
    NullCheck(pvVar4);
    bVar1 = WebSocketFrame_get_IsContinuation_mF04C78175D5CA729E8220B6E9158A8F93E4A9485(pvVar4,0);
    if ((bVar1 & 1) == 0) {
LAB_01f33328:
      bVar1 = WebSocket_acceptUnsupportedFrame_m0EA46172C1E7A83CDE332F0C32D6E62A440D10EB
                        (in_stack_00000020[0x10],in_stack_00000020[0xd],0x3eb,
                         *(undefined8 *)
                          Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataIcon>__ctor__
                         ,0);
      *(byte *)(unaff_x29 + -1) = bVar1 & 1;
LAB_01f3337c:
      return *(byte *)(unaff_x29 + -1) & 1;
    }
    in_stack_00000050 = in_stack_00000020[0xf];
    pWVar5 = (WebSocketFrame_t4502E8AF829CD1DFBE65C84A950A904E2E5A157B *)in_stack_00000020[0xd];
    NullCheck(pWVar5);
    pPVar3 = (PayloadData_t5FFC182F3A74F245E88B6B2475F9283E58CA488C *)
             WebSocketFrame_get_PayloadData_m2D692CB8EE635C5C117E2FFD0083CFBEB5EE1A40_inline
                       (pWVar5,(MethodInfo *)0x0);
    NullCheck(pPVar3);
    param_1 = PayloadData_get_ApplicationData_mDC3665534A3EB6031E567EFBDB6A06CA72FD0FC8_inline
                        (pPVar3,(MethodInfo *)0x0);
    param_3 = 0;
  } while( true );
}


