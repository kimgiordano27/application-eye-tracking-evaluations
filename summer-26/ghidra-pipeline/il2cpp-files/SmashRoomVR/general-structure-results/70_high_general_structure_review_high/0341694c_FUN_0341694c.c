/*
FUNCTION_NAME: FUN_0341694c
ENTRY_POINT: 0341694c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_0341694c(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined1 local_60 [16];
  int local_44;
  
  if ((DAT_03ff6570 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d90108);
    thunk_FUN_01ad9084(StringLiteral_1379);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_4612);
    thunk_FUN_01ad9084(PTR_DAT_03d8fdf0);
    thunk_FUN_01ad9084(PTR_DAT_03d90110);
    DAT_03ff6570 = 1;
  }
  puVar1 = StringLiteral_1379;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
  }
  else {
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(long *)(lVar7 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_034101b8(*(long *)(lVar7 + 0x58),*(undefined8 *)(param_1 + 10));
    if (*(char *)(lVar7 + 0x6a) == '\0') {
      plVar4 = *(long **)(lVar7 + 0x48);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar3 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
      FUN_03415974(lVar7,uVar3,*(undefined8 *)(lVar7 + 0x78),(long)param_1[0xc]);
      if (*(char *)(lVar7 + 0x69) != '\0') {
        plVar10 = (long *)(lVar7 + 0x60);
        plVar4 = (long *)*plVar10;
        if (plVar4 == (long *)0x0) {
          lVar5 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_4612);
          FUN_02f9e85c(lVar5,0);
          *plVar10 = lVar5;
          thunk_FUN_01b4f09c(plVar10,lVar5);
          plVar4 = (long *)*plVar10;
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
        }
        piVar9 = param_1 + 0xe;
        (**(code **)(*plVar4 + 0x348))
                  (plVar4,*(undefined8 *)piVar9,param_1[0x10],param_1[0xc],
                   *(undefined8 *)(*plVar4 + 0x350));
        plVar4 = *(long **)(lVar7 + 0x48);
        *(long *)(lVar7 + 0x78) = *(long *)(lVar7 + 0x78) + (long)param_1[0xc];
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar5 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
        if (lVar5 < 1) goto LAB_03416c58;
        plVar4 = *(long **)(lVar7 + 0x48);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar6 = *(long *)(lVar7 + 0x78);
        lVar5 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
        if (lVar6 < lVar5) goto LAB_03416c58;
        plVar4 = *(long **)(lVar7 + 0x60);
        *(undefined1 *)(lVar7 + 0x68) = 1;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar3 = (**(code **)(*plVar4 + 0x378))(plVar4,*(undefined8 *)(*plVar4 + 0x380));
        *(undefined8 *)piVar9 = uVar3;
        thunk_FUN_01b4f09c(piVar9);
        param_1[0x10] = 0;
        uVar8 = (ulong)*(uint *)(lVar7 + 0x78);
        goto LAB_03416ba0;
      }
      uVar8 = (ulong)param_1[0xc];
      *(ulong *)(lVar7 + 0x78) = *(long *)(lVar7 + 0x78) + uVar8;
    }
    else {
      *(undefined1 *)(lVar7 + 0x68) = 1;
      local_44 = param_1[0xc];
      uVar3 = thunk_FUN_01afa70c(*(undefined8 *)
                                  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                 ,&local_44);
      uVar3 = FUN_02ede300(*(undefined8 *)PTR_DAT_03d90110,uVar3,0);
      plVar4 = (long *)FUN_02f00204(0);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar5 = (**(code **)(*plVar4 + 0x238))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x240));
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar8 = (ulong)(param_1[0xc] + *(int *)(lVar5 + 0x18) + 2);
      uVar3 = FUN_01b47fd0(*(undefined8 *)
                            Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                           ,uVar8);
      FUN_0306bccc(lVar5,0,uVar3,0,*(undefined4 *)(lVar5 + 0x18),0);
      FUN_0306bccc(*(undefined8 *)(param_1 + 0xe),param_1[0x10],uVar3,*(undefined4 *)(lVar5 + 0x18),
                   param_1[0xc],0);
      puVar2 = PTR_DAT_03d8fdf0;
      lVar6 = *(long *)PTR_DAT_03d8fdf0;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = **(long **)(lVar6 + 0xb8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_0306bccc(lVar6,0,uVar3,param_1[0xc] + *(int *)(lVar5 + 0x18),*(undefined4 *)(lVar6 + 0x18)
                   ,0);
      if (*(char *)(lVar7 + 0x69) != '\0') {
        plVar10 = (long *)(lVar7 + 0x60);
        plVar4 = (long *)*plVar10;
        if (plVar4 == (long *)0x0) {
          lVar5 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_4612);
          FUN_02f9e85c(lVar5,0);
          *plVar10 = lVar5;
          thunk_FUN_01b4f09c(plVar10,lVar5);
          plVar4 = (long *)*plVar10;
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
        }
        (**(code **)(*plVar4 + 0x348))
                  (plVar4,*(undefined8 *)(param_1 + 0xe),param_1[0x10],param_1[0xc],
                   *(undefined8 *)(*plVar4 + 0x350));
      }
      *(long *)(lVar7 + 0x78) = *(long *)(lVar7 + 0x78) + (long)param_1[0xc];
      *(undefined8 *)(param_1 + 0xe) = uVar3;
      thunk_FUN_01b4f09c(param_1 + 0xe,uVar3);
      param_1[0x10] = 0;
LAB_03416ba0:
      param_1[0xc] = (int)uVar8;
    }
    plVar4 = *(long **)(lVar7 + 0xa0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar7 = (**(code **)(*plVar4 + 0x2e8))
                      (plVar4,*(undefined8 *)(param_1 + 0xe),param_1[0x10],uVar8 & 0xffffffff,
                       *(undefined8 *)(param_1 + 10),*(undefined8 *)(*plVar4 + 0x2f0));
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    local_60 = FUN_030b22e4(lVar7,0,0);
    uVar8 = FUN_02f7f75c(local_60,0);
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x12) = local_60;
      thunk_FUN_01b4f09c(param_1 + 0x12,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01e4eb60(param_1 + 2,local_60,param_1,*(undefined8 *)PTR_DAT_03d90108);
      return;
    }
  }
  FUN_02f7f7a0(local_60,0);
LAB_03416c58:
  *param_1 = -2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_02f7ff70(param_1 + 2,0);
  return;
}


