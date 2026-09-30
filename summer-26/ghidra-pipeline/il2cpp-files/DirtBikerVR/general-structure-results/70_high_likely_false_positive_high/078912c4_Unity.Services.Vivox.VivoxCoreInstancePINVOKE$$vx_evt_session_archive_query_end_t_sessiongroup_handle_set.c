/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_query_end_t_sessiongroup_handle_set
ENTRY_POINT: 078912c4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_sessiongroup_handle_set
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long in_x9;
  int *in_x10;
  undefined4 *unaff_x19;
  undefined8 uVar6;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  do {
    if ((bool)in_ZR) {
      puVar3 = (undefined8 *)FUN_03ac43c4();
LAB_078912e8:
      lVar4 = (*(code *)*puVar3)();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000018 =
           FUN_058b71ec(lVar4,*(undefined8 *)System_Collections_Generic_List<Button>_TypeInfo);
      uVar5 = FUN_0587c6c4(&stack0x00000018,
                           *(undefined8 *)System_Collections_Generic_List<BsonToken>_TypeInfo);
      if ((uVar5 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
        thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_03ff8d20(unaff_x19 + 2,&stack0x00000018);
      }
      else {
        lVar4 = FUN_0587c704(&stack0x00000018,
                             *(undefined8 *)System_Collections_Generic_List<BsonProperty>_TypeInfo);
        puVar2 = System_Collections_Generic_List<Bone>_TypeInfo;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0x20) + 0x18);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar6 = *(undefined8 *)(lVar4 + 0x10);
        iVar1 = *(int *)(*unaff_x24 + 0xe4);
        *unaff_x19 = 0xfffffffe;
        if (iVar1 == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_05338ae8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar2);
      }
      return;
    }
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
      goto LAB_078912e8;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


