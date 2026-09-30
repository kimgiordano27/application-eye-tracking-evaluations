/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_connect_text_get
ENTRY_POINT: 078ae90c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_connect_text_get
               (void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int in_w8;
  undefined4 *unaff_x19;
  long lVar6;
  long *unaff_x21;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  if (in_w8 == 0) {
    uStack0000000000000018 = *(undefined8 *)(unaff_x19 + 10);
    *(undefined8 *)(unaff_x19 + 10) = 0;
    *unaff_x19 = 0xffffffff;
LAB_078ae960:
    uVar3 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)System_Collections_Generic_List<ObjectId>_TypeInfo);
  }
  else {
    if (in_w8 == 1) {
      uStack0000000000000018 = *(undefined8 *)(unaff_x19 + 10);
      *(undefined8 *)(unaff_x19 + 10) = 0;
      *unaff_x19 = 0xffffffff;
    }
    else {
      lVar6 = *(long *)(unaff_x19 + 8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_078ae164(lVar6);
      FUN_078ae1c4(lVar6);
      FUN_078ae22c(lVar6);
      if ((*(uint *)(lVar6 + 0x38) & 0xfffffffe) != 4) {
        thunk_FUN_03af1434(PTR_DAT_08493908);
        uVar3 = thunk_FUN_03ac74bc();
        uVar5 = thunk_FUN_03af1434(System_Collections_Generic_List<Oid>_TypeInfo);
        FUN_078bbac4(uVar3,uVar5,0xf,0);
        uVar5 = thunk_FUN_03af1434(System_Collections_Generic_List<OpenXRFeature>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar3,uVar5);
      }
      if (*(int *)(lVar6 + 0x3c) != 2) {
        if (*(int *)(lVar6 + 0x3c) != 1) {
          FUN_078ad680(lVar6,5);
          lVar6 = *(long *)(lVar6 + 0x30);
          if (lVar6 != 0) {
            (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28))
            ;
          }
          thunk_FUN_03af1434(PTR_DAT_08493908);
          uVar3 = thunk_FUN_03ac74bc();
          uVar5 = thunk_FUN_03af1434(System_Collections_Generic_List<OrientedBBox>_TypeInfo);
          FUN_078bbac4(uVar3,uVar5,0xe,0);
          uVar5 = thunk_FUN_03af1434(System_Collections_Generic_List<OpenXRFeature>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar3,uVar5);
        }
        lVar6 = FUN_078ad968(lVar6);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uStack0000000000000018 =
             FUN_058b71ec(lVar6,*(undefined8 *)
                                 System_Collections_Generic_List<OccluderSubviewUpdate>_TypeInfo);
        uVar4 = FUN_0587c6c4(&stack0x00000018,
                             *(undefined8 *)
                              System_Collections_Generic_List<OccluderContext>_TypeInfo);
        if ((uVar4 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined8 *)(unaff_x19 + 10) = uStack0000000000000018;
          thunk_FUN_03afed3c(unaff_x19 + 10,0);
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_03fe7cd0(unaff_x19 + 2,&stack0x00000018);
          return;
        }
        goto LAB_078ae960;
      }
      lVar6 = FUN_078ada74(lVar6);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uStack0000000000000018 =
           FUN_058b71ec(lVar6,*(undefined8 *)
                               System_Collections_Generic_List<OccluderSubviewUpdate>_TypeInfo);
      uVar4 = FUN_0587c6c4(&stack0x00000018,
                           *(undefined8 *)System_Collections_Generic_List<OccluderContext>_TypeInfo)
      ;
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 10) = uStack0000000000000018;
        thunk_FUN_03afed3c(unaff_x19 + 10,0);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_03fe7cd0(unaff_x19 + 2,&stack0x00000018);
        return;
      }
    }
    uVar3 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)System_Collections_Generic_List<ObjectId>_TypeInfo);
  }
  puVar2 = System_Collections_Generic_List<object>_TypeInfo;
  iVar1 = *(int *)(*unaff_x21 + 0xe4);
  *unaff_x19 = 0xfffffffe;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar3,*(undefined8 *)puVar2);
  return;
}


