/*
FUNCTION_NAME: FUN_01c38918
ENTRY_POINT: 01c38918
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_15;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01c38b2c) */

void FUN_01c38918(undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed54d & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_1A07BC77B9912D8D87E9B28E0167F53A9B09BB017B35A35F3913989C9440A60B
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed54d = 1;
  }
  lVar7 = param_4[10];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(lVar7,0,0);
  if ((uVar2 & 1) != 0) {
    lVar7 = param_4[9];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(lVar7,0,0);
    if ((uVar2 & 1) != 0) {
      lVar7 = param_4[7];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_0391f968(lVar7,0,0);
      if ((uVar2 & 1) != 0) {
        if (param_4[7] == 0) goto LAB_01c38d60;
        if (*(char *)(param_4[7] + 0x20) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x01c38d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
          return;
        }
      }
      if (*(char *)((long)param_4 + 0x2c) != '\0') {
        plVar3 = (long *)param_4[10];
        if (plVar3 == (long *)0x0) goto LAB_01c38d60;
        lVar7 = (**(code **)(*plVar3 + 0x358))(plVar3,param_4[9],*(undefined8 *)(*plVar3 + 0x360));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar2 = FUN_0391f968(lVar7,0,0);
        if ((uVar2 & 1) != 0) {
          if (lVar7 == 0) goto LAB_01c38d60;
          uVar4 = FUN_01e8a9f8(lVar7,*(undefined8 *)
                                      Field_<PrivateImplementationDetails>_1A07BC77B9912D8D87E9B28E0167F53A9B09BB017B35A35F3913989C9440A60B
                              );
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar1);
          }
          uVar2 = FUN_0391f968(uVar4,0,0);
          if ((uVar2 & 1) != 0) {
            lVar7 = param_4[0xb];
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar2 = FUN_0391f968(uVar4,lVar7,0);
            if ((uVar2 & 1) != 0) {
              (**(code **)(*param_4 + 0x178))(param_4,uVar4,*(undefined8 *)(*param_4 + 0x180));
            }
          }
        }
      }
      if ((int)param_4[4] == 1) {
        if ((param_4[9] == 0) || (lVar7 = *(long *)(param_4[9] + 0x50), lVar7 == 0))
        goto LAB_01c38d60;
        fVar8 = (float)FUN_03928280(lVar7,0);
        lVar5 = param_4[9];
        if (lVar5 == 0) goto LAB_01c38d60;
        fVar12 = *(float *)(lVar5 + 0xb4);
        fVar13 = *(float *)(lVar5 + 0xb8);
        fVar15 = *(float *)(lVar5 + 0xbc);
        fVar9 = (float)FUN_03925cf4(0);
        fVar9 = fVar9 * *(float *)(param_4 + 5);
        if (fVar9 < 0.0) {
          fVar9 = 0.0;
        }
        fVar15 = (fVar15 - param_3) * fVar9;
        uVar11 = (ulong)(uint)fVar15;
        uVar2 = (ulong)(uint)(param_2 + (fVar13 - param_2) * fVar9);
        uVar10 = (ulong)(uint)(param_3 + fVar15);
        FUN_039282dc(fVar8 + (fVar12 - fVar8) * fVar9,uVar2,uVar10,lVar7,0);
        if ((param_4[9] == 0) || (lVar7 = *(long *)(param_4[9] + 0x50), lVar7 == 0))
        goto LAB_01c38d60;
        uVar4 = FUN_03928fd8(lVar7,0);
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
        puVar6 = *(undefined4 **)
                  (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                  0xb8);
        uVar14 = *puVar6;
        uVar16 = puVar6[1];
        uVar17 = puVar6[2];
        uVar18 = puVar6[3];
        FUN_03925cf4(0);
        FUN_039142e8(uVar4,uVar2,uVar10,uVar11,uVar14,uVar16,uVar17,uVar18,0);
        FUN_03929060(lVar7,0);
      }
      plVar3 = (long *)param_4[9];
      if (plVar3 == (long *)0x0) goto LAB_01c38d60;
      uVar2 = (**(code **)(*plVar3 + 0x198))(plVar3,param_4[10],*(undefined8 *)(*plVar3 + 0x1a0));
      if ((uVar2 & 1) != 0) {
        lVar7 = param_4[6];
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar2 = FUN_0391f968(lVar7,0,0);
        if ((uVar2 & 1) != 0) {
          plVar3 = (long *)param_4[9];
          (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
          if (plVar3 == (long *)0x0) goto LAB_01c38d60;
          (**(code **)(*plVar3 + 0x1f8))(plVar3,param_4[6],*(undefined8 *)(*plVar3 + 0x200));
        }
      }
    }
  }
  lVar7 = param_4[0xc];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(lVar7,0,0);
  if ((uVar2 & 1) != 0) {
    if (param_4[0xc] == 0) {
LAB_01c38d60:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar2 = FUN_01c4ba84(param_4[0xc],0);
    if ((uVar2 & 1) == 0) {
      lVar7 = param_4[9];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03922f24(lVar7,0,0);
      if ((uVar2 & 1) != 0) {
        FUN_01c38d64(param_4,param_4[0xc]);
        return;
      }
    }
  }
  return;
}


