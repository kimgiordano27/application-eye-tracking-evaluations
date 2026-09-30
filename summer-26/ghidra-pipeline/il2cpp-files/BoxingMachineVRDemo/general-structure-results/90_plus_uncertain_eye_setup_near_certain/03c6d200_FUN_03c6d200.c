/*
FUNCTION_NAME: FUN_03c6d200
ENTRY_POINT: 03c6d200
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03c6d200(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050188b4(8);
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0x18);
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    lVar8 = 0x20;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_03c6d3f4;
      if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_03c6d3f8;
      puVar1 = (undefined8 *)(lVar4 + lVar8);
      if (param_2 == 0) goto LAB_03c6d3f4;
      local_60 = *puVar1;
      uStack_58 = puVar1[1];
      local_50 = puVar1[2];
      uVar3 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&local_60,*(undefined8 *)(param_2 + 0x28));
      if ((uVar3 & 1) != 0) {
        uVar3 = (ulong)*(uint *)(param_1 + 0x18);
        break;
      }
      uVar3 = (ulong)*(int *)(param_1 + 0x18);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x18;
    } while ((long)uVar7 < (long)uVar3);
  }
  if ((int)uVar3 <= (int)uVar7) {
    iVar5 = 0;
Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_IsCreated:
    if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar5);
    }
    return;
  }
  uVar10 = uVar7 & 0xffffffff;
  do {
    uVar7 = (ulong)((int)uVar7 + 1);
    do {
      iVar5 = (int)uVar7;
      uVar9 = (uint)uVar10;
      if ((int)uVar3 <= iVar5) {
        iVar5 = (int)uVar3 - uVar9;
        *(uint *)(param_1 + 0x18) = uVar9;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        goto Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_IsCreated;
      }
      lVar8 = (long)iVar5 * 0x18 + 0x20;
      uVar7 = (ulong)iVar5;
      do {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0) goto LAB_03c6d3f4;
        if (*(uint *)(lVar4 + 0x18) <= (uint)uVar7) goto LAB_03c6d3f8;
        puVar1 = (undefined8 *)(lVar4 + lVar8);
        if (param_2 == 0) goto LAB_03c6d3f4;
        local_60 = *puVar1;
        uStack_58 = puVar1[1];
        local_50 = puVar1[2];
        uVar3 = (**(code **)(param_2 + 0x18))
                          (*(undefined8 *)(param_2 + 0x40),&local_60,*(undefined8 *)(param_2 + 0x28)
                          );
        if ((uVar3 & 1) == 0) {
          uVar3 = (ulong)*(uint *)(param_1 + 0x18);
          break;
        }
        uVar3 = (ulong)*(int *)(param_1 + 0x18);
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x18;
      } while ((long)uVar7 < (long)uVar3);
      uVar6 = (uint)uVar7;
    } while ((int)uVar3 <= (int)uVar6);
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
LAB_03c6d3f4:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar6) {
LAB_03c6d3f8:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    lVar4 = lVar8 + (long)(int)uVar6 * 0x18;
    uVar12 = *(undefined8 *)(lVar4 + 0x28);
    uVar11 = *(undefined8 *)(lVar4 + 0x20);
    if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_03c6d3f8;
    lVar8 = lVar8 + (long)(int)uVar9 * 0x18;
    uVar10 = (ulong)(uVar9 + 1);
    *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
    *(undefined8 *)(lVar8 + 0x28) = uVar12;
    *(undefined8 *)(lVar8 + 0x20) = uVar11;
    uVar3 = (ulong)*(uint *)(param_1 + 0x18);
  } while( true );
}


