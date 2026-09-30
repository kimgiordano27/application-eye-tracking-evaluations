/*
FUNCTION_NAME: Normal.Realtime.SessionCaptureFileStream$$get_startTimestamp
ENTRY_POINT: 06802078
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Normal_Realtime_SessionCaptureFileStream__get_startTimestamp
               (long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar4 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    if (*(short *)(param_1 + (long)(int)param_4 * 2 + 0x20) == 0) {
      *(uint *)(unaff_x20 + 0x8c) = param_4;
      if (*(uint *)(unaff_x20 + 0x88) != param_4) {
LAB_06802108:
        lVar3 = *unaff_x21;
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_0666d184(unaff_x19 + 2,0);
        return;
      }
      lVar3 = FUN_067ed324();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      auVar4 = FUN_058b2d9c(lVar3,0,*unaff_x22);
      _in_stack_00000010 = auVar4;
      uVar2 = FUN_05d63368(&stack0x00000010,*unaff_x23);
      if ((uVar2 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000010;
        thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e0c8c(unaff_x19 + 2,&stack0x00000010);
        return;
      }
      iVar1 = FUN_05d633b0(&stack0x00000010,*unaff_x24);
      if (iVar1 == 0) goto LAB_06802108;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      param_1 = *(long *)(unaff_x20 + 0x80);
      if (param_1 == 0) goto LAB_068020a8;
      param_4 = unaff_x19[0xc];
    }
    else {
      uVar2 = FUN_067f3d00();
      if ((uVar2 & 1) != 0) goto LAB_06802108;
      param_1 = *(long *)(unaff_x20 + 0x80);
      param_4 = unaff_x19[0xc] + 1;
      unaff_x19[0xc] = param_4;
      if (param_1 == 0) {
LAB_068020a8:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    if (*(uint *)(param_1 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
  } while( true );
}


