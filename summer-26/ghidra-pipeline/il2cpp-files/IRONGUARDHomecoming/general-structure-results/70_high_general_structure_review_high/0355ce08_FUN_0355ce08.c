/*
FUNCTION_NAME: FUN_0355ce08
ENTRY_POINT: 0355ce08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


uint FUN_0355ce08(long param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined8 local_78;
  double local_70;
  undefined4 local_64;
  undefined8 local_60;
  double local_58;
  
  if ((DAT_0483321e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmin_f32__);
    DAT_0483321e = 1;
  }
  puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__;
  local_60 = 0;
  local_78 = 0;
  if ((-1 < *(int *)(param_1 + 0x10)) && (iVar6 = FUN_0356326c(param_1,0,0), -1 < iVar6)) {
    FUN_0356326c(param_1,1,0);
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  puVar4 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
  local_64 = 0;
  local_70 = 0.0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0356286c(param_2,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar10 = FUN_0355dee0(param_2,2,(long)&local_60 + 4);
  if ((uVar10 & 1) == 0) {
LAB_0355d234:
    FUN_035633a0(param_4,0);
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0356286c(param_2,0);
    uVar10 = FUN_03562494(param_2,0x3a,0);
    if ((uVar10 & 1) == 0) goto LAB_0355d234;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0356286c(param_2,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = FUN_0355dee0(param_2,2,&local_60);
    if ((uVar10 & 1) == 0) goto LAB_0355d234;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0356286c(param_2,0);
    uVar10 = FUN_03562494(param_2,0x3a,0);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0356286c(param_2,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_0355dee0(param_2,2,&local_64);
      if ((uVar10 & 1) == 0) goto LAB_0355d234;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_03562494(param_2,0x2e,0);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = FUN_035585e8(param_2,&local_70);
        if ((uVar10 & 1) == 0) goto LAB_0355d234;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0356286c(param_2,0);
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = FUN_0356164c(param_2,0);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_03562818(param_2,0);
      if (uVar5 < 0x5a) {
        if ((uVar5 == 0x2b) || (uVar5 == 0x2d)) {
          *(uint *)(param_4 + 0x24) = *(uint *)(param_4 + 0x24) | 0x100;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar10 = FUN_035586d4(param_2,param_4 + 0x28);
          if ((uVar10 & 1) == 0) goto LAB_0355d234;
        }
        else {
LAB_0355d160:
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
        }
      }
      else {
        if ((uVar5 != 0x5a) && (uVar5 != 0x7a)) goto LAB_0355d160;
        uVar9 = *(uint *)(param_4 + 0x24) | 0x100;
        *(uint *)(param_4 + 0x24) = uVar9;
        puVar2 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
        ;
        lVar11 = *(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
        ;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar11 = *(long *)puVar2;
          uVar9 = *(uint *)(param_4 + 0x24);
        }
        uVar13 = **(undefined8 **)(lVar11 + 0xb8);
        *(uint *)(param_4 + 0x24) = uVar9 | 0x200;
        *(undefined8 *)(param_4 + 0x28) = uVar13;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0356286c(param_2,0);
      uVar10 = FUN_03562494(param_2,0x23,0);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = FUN_03559e80(param_2);
        if ((uVar10 & 1) == 0) goto LAB_0355d234;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0356286c(param_2,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_03562494(param_2,0,0);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = FUN_03559e80(param_2);
        if ((uVar10 & 1) == 0) goto LAB_0355d234;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_0356164c(param_2,0);
      if ((uVar10 & 1) != 0) goto LAB_0355d234;
    }
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar12 = (long *)FUN_0351c438(0);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = FUN_0356326c(param_1,0,0);
    uVar8 = FUN_0356326c(param_1,1,0);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar10 = (**(code **)(*plVar12 + 0x2a8))
                       (plVar12,uVar1,uVar7,uVar8,local_60._4_4_,local_60 & 0xffffffff,local_64,0,
                        *(undefined4 *)(param_4 + 0x20),&local_78,*(undefined8 *)(*plVar12 + 0x2b0))
    ;
    dVar15 = local_70;
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      dVar15 = dVar15 * DAT_00c8df08;
      dVar14 = modf(dVar15,&local_58);
      if (0.0 <= dVar15) {
        if (dVar14 == 0.5) {
          dVar15 = 1.0;
          goto LAB_0355d380;
        }
        dVar14 = (double)(long)(dVar15 + 0.5);
      }
      else if (dVar14 == -0.5) {
        dVar15 = -1.0;
LAB_0355d380:
        dVar14 = local_58;
        if (((long)local_58 & 1U) != 0) {
          dVar14 = local_58 + dVar15;
        }
      }
      else {
        dVar14 = (double)(long)(dVar15 + -0.5);
      }
      if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      lVar11 = -0x8000000000000000;
      if (dVar14 != INFINITY) {
        lVar11 = (long)dVar14;
      }
      local_78 = FUN_0354cd34(&local_78,lVar11);
      *(undefined8 *)(param_4 + 0x38) = local_78;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar9 = FUN_0355d69c(param_2,param_4,param_3,0);
      goto LAB_0355d244;
    }
    FUN_035633f0(param_4,7,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmin_f32__,0);
  }
  uVar9 = 0;
LAB_0355d244:
  return uVar9 & 1;
}


