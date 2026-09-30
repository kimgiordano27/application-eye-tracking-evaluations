/*
FUNCTION_NAME: FUN_026dc1a8
ENTRY_POINT: 026dc1a8
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


/* WARNING: Removing unreachable block (ram,0x026dc3c8) */
/* WARNING: Removing unreachable block (ram,0x026dc4b8) */

void FUN_026dc1a8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  
  if ((DAT_0483018e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483018e = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
  if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_02b0758c(&local_a8,param_1[2],
               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x90));
  uStack_78 = uStack_a0;
  local_80 = local_a8;
  local_68 = lStack_90;
  uStack_70 = local_98;
  local_60 = local_88;
LAB_026dc240:
  uVar3 = FUN_02cd6e60(&local_80,
                       *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x100));
  if ((uVar3 & 1) == 0) {
    FUN_02cd6f84(&local_80,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x108));
    return;
  }
  if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar4 = (long *)FUN_0271ca88(local_68,*(undefined8 *)
                                          (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 200));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_026dc2c4;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_026dc2c4:
    uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar3 & 1) == 0) break;
    lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xd0);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_026dc33c;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar6,0);
LAB_026dc33c:
    (*(code *)*puVar5)(&local_a8,plVar4,puVar5[1]);
    (**(code **)(*param_1 + 0x1b8))(param_1,uStack_a0,*(undefined8 *)(*param_1 + 0x1c0));
  } while( true );
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_026dc3b8;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_026dc3b8:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  goto LAB_026dc240;
}


