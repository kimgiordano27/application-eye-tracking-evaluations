/*
FUNCTION_NAME: FUN_03daf1b8
ENTRY_POINT: 03daf1b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_03daf1b8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_28 [8];
  
  if ((DAT_0483a501 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_045774f8);
    thunk_FUN_01efb3a4(PTR_DAT_04577500);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483a501 = 1;
  }
  puVar1 = PTR_DAT_045774f8;
  local_28[0] = 0;
  plVar3 = (long *)param_3[0x3a];
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar8 = *param_3;
  lVar4 = (**(code **)(*plVar3 + 0x1a8))(plVar3,uVar8,*(undefined8 *)(*plVar3 + 0x1b0));
  plVar3 = (long *)(param_1 + 0xe0);
  *plVar3 = lVar4;
  thunk_FUN_01f51358(plVar3,lVar4);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar4 = *(long *)puVar1;
  }
  FUN_03d025c8(local_28,uVar8,**(undefined8 **)(lVar4 + 0xb8),0);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  lVar4 = *plVar3;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar8 = *(undefined8 *)(lVar4 + 0x48);
  uVar10 = *(undefined8 *)(lVar4 + 0x40);
  uVar9 = *(undefined8 *)(lVar4 + 0x38);
  uVar12 = *(undefined8 *)(lVar4 + 0x30);
  uVar11 = *(undefined8 *)(lVar4 + 0x28);
  plVar3 = (long *)param_3[0x35];
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_03daf2e8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,2);
LAB_03daf2e8:
  (*(code *)*puVar5)(plVar3,puVar5[1]);
  puVar2 = PTR_DAT_04577500;
  do {
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03daf348;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_03daf348:
    uVar6 = (*(code *)*puVar5)(plVar3,puVar5[1]);
    if ((uVar6 & 1) == 0) {
      FUN_03d025cc(local_28,0);
      return;
    }
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03daf3a4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar2,0);
LAB_03daf3a4:
    lVar4 = (*(code *)*puVar5)(plVar3,puVar5[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    local_60 = uVar11;
    uStack_58 = uVar12;
    uStack_50 = uVar9;
    uStack_48 = uVar10;
    local_40 = uVar8;
    (**(code **)(lVar4 + 0x18))
              (*(undefined8 *)(lVar4 + 0x40),&local_60,*param_3,*(undefined8 *)(lVar4 + 0x28));
  } while( true );
}


