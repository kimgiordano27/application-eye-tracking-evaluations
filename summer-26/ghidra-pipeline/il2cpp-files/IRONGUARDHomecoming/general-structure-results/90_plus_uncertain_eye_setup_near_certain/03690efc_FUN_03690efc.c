/*
FUNCTION_NAME: FUN_03690efc
ENTRY_POINT: 03690efc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_14
*/


/* WARNING: Removing unreachable block (ram,0x036911dc) */

void FUN_03690efc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
  if ((DAT_04833ec2 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_53__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_54__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_55__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_56__);
    DAT_04833ec2 = 1;
  }
  if ((char)param_1[8] == '\0') {
    return;
  }
  plVar11 = (long *)param_1[5];
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)Method_OVRPlugin_<>c_<_cctor>b__653_54__) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_03690fd4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)Method_OVRPlugin_<>c_<_cctor>b__653_54__,0);
LAB_03690fd4:
  plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__653_56__;
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__653_55__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__653_53__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03691054;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar1,0);
LAB_03691054:
    uVar9 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_03691188;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_036910b0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_036910b0:
    plVar6 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02ab0644(uVar7,param_1,*(undefined8 *)(*param_1 + 0x180),0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03691134;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_03691134:
    (*(code *)*puVar5)(plVar6,uVar7,puVar5[1]);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_036911a4;
    }
  }
LAB_03691188:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar11,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_036911a4:
  (*(code *)*puVar5)(plVar11,puVar5[1]);
  return;
}


