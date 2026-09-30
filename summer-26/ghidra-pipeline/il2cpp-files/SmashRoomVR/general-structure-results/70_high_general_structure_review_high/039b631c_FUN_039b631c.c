/*
FUNCTION_NAME: FUN_039b631c
ENTRY_POINT: 039b631c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_17;telemetry_or_network_hits_3
*/


bool FUN_039b631c(undefined8 param_1,float param_2,float param_3,float param_4,long param_5,
                 undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  undefined8 local_38;
  
  if ((DAT_03ffc7ff & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_518);
    DAT_03ffc7ff = 1;
  }
  local_38 = 0;
  if (*(float *)(param_5 + 0x100) <= 0.0) {
LAB_039b63c4:
    bVar1 = true;
  }
  else {
    if (*(float *)(param_5 + 0x100) <= 1.0) {
      uVar4 = FUN_039b2094(param_5);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar5 = FUN_03922f24(uVar4,0,0);
      if ((uVar5 & 1) != 0) goto LAB_039b63c4;
      uVar4 = FUN_039ad440(param_5);
      if (*(int *)(*(long *)StringLiteral_518 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)StringLiteral_518);
      }
      uVar5 = FUN_03af9c5c(param_1,uVar4,param_6,&local_38,0);
      if ((uVar5 & 1) != 0) {
        local_50 = FUN_039af43c(param_5);
        fStack_4c = param_2;
        local_48 = param_3;
        local_44 = param_4;
        if (*(char *)(param_5 + 0xec) != '\0') {
          lVar6 = FUN_039b2094(param_5);
          if ((lVar6 == 0) || (plVar7 = (long *)FUN_0392b1b8(lVar6,0), plVar7 == (long *)0x0))
          goto LAB_039b6670;
          iVar2 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
          lVar6 = FUN_039b2094(param_5);
          if ((lVar6 == 0) || (plVar7 = (long *)FUN_0392b1b8(lVar6,0), plVar7 == (long *)0x0))
          goto LAB_039b6670;
          iVar3 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
          param_2 = (float)iVar3;
          FUN_039b2cd8((float)iVar2,param_5,&local_50);
        }
        fVar11 = (float)local_38;
        lVar6 = FUN_039ad440(param_5);
        if (lVar6 != 0) {
          fVar8 = (float)FUN_03928134(lVar6,0);
          fVar9 = local_48;
          fVar10 = local_38._4_4_;
          local_38 = CONCAT44(local_38._4_4_,fVar11 + fVar8 * local_48);
          lVar6 = FUN_039ad440(param_5);
          if (lVar6 != 0) {
            FUN_03928134(lVar6,0);
            uVar5 = local_38 & 0xffffffff;
            fVar10 = fVar10 + param_2 * local_44;
            local_38 = CONCAT44(fVar10,(float)local_38);
            fVar11 = fStack_4c;
            fVar9 = (float)FUN_039b66a8(uVar5,fVar10,local_50,fStack_4c,fVar9,param_5);
            local_38 = CONCAT44(fVar10,fVar9);
            lVar6 = FUN_039b2094(param_5);
            if ((lVar6 != 0) && (plVar7 = (long *)FUN_0392b1b8(lVar6,0), plVar7 != (long *)0x0)) {
              iVar2 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
              fVar10 = local_38._4_4_;
              lVar6 = FUN_039b2094(param_5);
              if ((lVar6 != 0) && (plVar7 = (long *)FUN_0392b1b8(lVar6,0), plVar7 != (long *)0x0)) {
                iVar3 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
                lVar6 = FUN_039b2094(param_5);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                lVar6 = FUN_0392b1b8(lVar6,0);
                if (lVar6 != 0) {
                  FUN_03907ba8(fVar9 / (float)iVar2,fVar10 / (float)iVar3,lVar6,0);
                  return *(float *)(param_5 + 0x100) <= fVar11;
                }
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
            }
          }
        }
LAB_039b6670:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
    bVar1 = false;
  }
  return bVar1;
}


