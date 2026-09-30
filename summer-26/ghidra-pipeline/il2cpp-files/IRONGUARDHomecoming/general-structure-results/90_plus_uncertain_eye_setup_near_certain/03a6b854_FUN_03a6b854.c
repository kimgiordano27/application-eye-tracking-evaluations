/*
FUNCTION_NAME: FUN_03a6b854
ENTRY_POINT: 03a6b854
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


/* WARNING: Removing unreachable block (ram,0x03a6bb2c) */

undefined8 FUN_03a6b854(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined4 local_54;
  
  if ((DAT_04838d84 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_7742);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(StringLiteral_7755);
    thunk_FUN_01efb3a4(StringLiteral_7125);
    DAT_04838d84 = 1;
  }
  local_54 = 0;
  lVar6 = FUN_03a6a888(param_1,param_2);
  puVar3 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar16 = **(undefined8 **)
             (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8);
  plVar7 = (long *)FUN_03a66f34();
  puVar5 = StringLiteral_7742;
  puVar4 = StringLiteral_7125;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  uVar11 = uVar16;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar13 = *plVar7;
    lVar12 = *(long *)puVar2;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03a6b97c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar12,0);
LAB_03a6b97c:
    uVar14 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar14 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_01f116d0(plVar7,*(undefined8 *)puVar1);
      if (plVar7 == (long *)0x0) goto LAB_03a6ba94;
      lVar13 = *plVar7;
      lVar12 = *(long *)puVar1;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 == 0) goto LAB_03a6ba6c;
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    lVar13 = *plVar7;
    lVar12 = *(long *)puVar2;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_03a6b9dc;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar12,1);
LAB_03a6b9dc:
    plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = *(long *)puVar5;
    if (*plVar9 != lVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    uVar10 = (**(code **)(lVar12 + 0x168))(plVar9,*(undefined8 *)(lVar12 + 0x170));
    uVar16 = FUN_0340ebc0(uVar16,uVar11,uVar10,0);
    uVar11 = *(undefined8 *)puVar4;
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) == lVar12) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03a6ba88;
    }
  }
LAB_03a6ba6c:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar12,0);
LAB_03a6ba88:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03a6ba94:
  puVar1 = StringLiteral_7755;
  if (*(char *)(lVar6 + 0x28) == '\0') {
    uVar11 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
  }
  else {
    local_54 = 1;
    uVar11 = FUN_03521fe0(0);
    uVar11 = FUN_03568514(&local_54,uVar11,0);
    uVar11 = FUN_03405678(*(undefined8 *)puVar1,uVar11,0);
  }
  *param_3 = uVar11;
  thunk_FUN_01f51358(param_3);
  return uVar16;
}


