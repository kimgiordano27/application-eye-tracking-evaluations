/*
FUNCTION_NAME: FUN_03d89ab0
ENTRY_POINT: 03d89ab0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03d89e08) */

void FUN_03d89ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 void *param_5,undefined8 *param_6,void *param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 auStack_490 [112];
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  undefined4 local_3a4;
  undefined4 uStack_3a0;
  undefined8 uStack_39c;
  undefined1 auStack_388 [200];
  undefined1 auStack_2c0 [200];
  undefined1 auStack_1f8 [200];
  undefined1 auStack_130 [200];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_0483a3ee & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04576620);
    thunk_FUN_01efb3a4(PTR_DAT_04576628);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483a3ee = 1;
  }
  memset(auStack_130,0,0xc4);
  uStack_39c = 0;
  uStack_3a0 = 0;
  uStack_3b8 = 0;
  local_3c0 = 0;
  uStack_3a8 = 0;
  local_3a4 = 0;
  uStack_3b0 = 0;
  uStack_3d8 = 0;
  local_3e0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3f8 = 0;
  local_400 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  local_410 = param_6[2];
  uStack_418 = param_6[1];
  local_420 = *param_6;
  plVar4 = (long *)TMPro_TMP_InputField_<CaretBlink>d__276__MoveNext
                             (param_1,param_2,param_3,&local_420);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *plVar4;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04576620) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03d89be0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)PTR_DAT_04576620,0);
LAB_03d89be0:
  plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  puVar3 = PTR_DAT_04576628;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03d89c50;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_03d89c50:
    uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_03d89dc4;
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_03d89d9c;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03d89cac;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar3,0);
LAB_03d89cac:
    lVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    memcpy(auStack_1f8,param_5,0xc4);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    memcpy(auStack_388,auStack_1f8,0xc4);
    FUN_03d89ed8(auStack_2c0,lVar6,auStack_388);
    memcpy(auStack_130,auStack_2c0,0xc4);
    memcpy(auStack_490,param_7,0x6c);
    FUN_03d89fec(auStack_2c0,lVar6,auStack_490);
    memcpy(&local_400,auStack_2c0,0x6c);
    if (param_8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(param_8 + 0x18))
              (*(undefined8 *)(param_8 + 0x40),param_2,param_4,auStack_130,param_6,&local_400,
               *(undefined8 *)(param_8 + 0x28));
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03d89db8;
    }
  }
LAB_03d89d9c:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03d89db8:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_03d89dc4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


