/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_password_get
ENTRY_POINT: 078ae4f4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_password_get
               (void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int in_w8;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x23;
  undefined8 in_stack_00000018;
  
  if (in_w8 != 1) {
    thunk_FUN_03af1434(PTR_DAT_08493908);
    uVar7 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(System_Collections_Generic_List<OVRSceneRoom>_TypeInfo);
    FUN_078bbac4(uVar7,uVar2,0xf,0);
    uVar2 = thunk_FUN_03af1434(System_Collections_Generic_List<OVRSpaceUser>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar7,uVar2);
  }
  plVar6 = *(long **)(unaff_x20 + 0x80);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar3 = *plVar6;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)System_Collections_Generic_List<OVRScenePrefabOverride>_TypeInfo) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_078ae578;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_03ac43c4(plVar6,*(long *)
                                System_Collections_Generic_List<OVRScenePrefabOverride>_TypeInfo,1);
LAB_078ae578:
  lVar3 = (*(code *)*puVar1)(plVar6,uVar7,puVar1[1]);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 = FUN_067c4bec(lVar3,0);
  uVar4 = FUN_0666e8e0(&stack0x00000018,0);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 10,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_043e679c(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    FUN_0666e9a8(&stack0x00000018,0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x20 + 0x40),0);
    FUN_078ad680();
    lVar3 = *unaff_x23;
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0666d184(unaff_x19 + 2,0);
  }
  return;
}


