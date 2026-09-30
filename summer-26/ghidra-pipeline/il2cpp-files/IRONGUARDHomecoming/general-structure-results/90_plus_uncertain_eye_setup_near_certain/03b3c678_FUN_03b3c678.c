/*
FUNCTION_NAME: FUN_03b3c678
ENTRY_POINT: 03b3c678
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03b3c9ec) */
/* WARNING: Removing unreachable block (ram,0x03b3ca30) */

undefined8
FUN_03b3c678(long param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_68 [3];
  
                    /* try { // try from 03b3c678 to 03c3c69b has its CatchHandler @ 03b3c4e4 */
                    /* try { // try from 03b3c69c to 03c3c69f has its CatchHandler @ 03b3c6b8 */
                    /* try { // try from 03b3c6a0 to 03c3c6a3 has its CatchHandler @ 03b3c6ac */
                    /* try { // try from 03b3c6a4 to 03c3c6a7 has its CatchHandler @ 03b3c6b8 */
                    /* try { // try from 03b3c6a8 to 03c3c6cf has its CatchHandler @ 03b3c4e4 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03b3c6a0 with catch @ 03b3c6ac
                        */
  if ((DAT_0483943d & 1) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03b3c5f8 with catch @ 03b3c6b0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03b3c618 with catch @ 03b3c6b4
                        */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_12012);
    thunk_FUN_01efb3a4(StringLiteral_12013);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_System_DateTimeParse_ParseExact__);
    thunk_FUN_01efb3a4(StringLiteral_3579);
    DAT_0483943d = 1;
  }
  if ((*(byte *)(param_1 + 0x38) >> 2 & 1) != 0) {
    *param_2 = 0;
    thunk_FUN_01f51358(param_2,0);
    *param_3 = 0;
    thunk_FUN_01f51358(param_3,0);
    return **(undefined8 **)
             (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8);
  }
  if (((param_4 >> 3 & 1) != 0) || (lVar4 = *(long *)(param_1 + 0x40), lVar4 == 0)) {
    lVar4 = *(long *)(param_1 + 0x10);
  }
  uVar5 = FUN_03b61bf4(lVar4,param_2,param_3,
                       ((((param_4 & 0xaaaaaaaa) >> 1 | (param_4 & 0x55555555) << 1) & 3) << 1 ^
                       0xffffffff) & 6,param_5,0);
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x18);
  }
  uVar6 = FUN_0340eec4(lVar4,0);
  if ((param_4 >> 2 & 1) != 0) {
    return uVar5;
  }
  if ((uVar6 & 1) != 0) {
    return uVar5;
  }
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x18);
  }
  uVar12 = **(undefined8 **)
             (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8);
  plVar7 = (long *)Unity_Mathematics_uint4__get_xyxz(lVar4,0);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar7;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_12012) {
        puVar8 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
        goto FUN_03b3c840;
      }
      uVar6 = uVar6 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)StringLiteral_12012,0);
FUN_03b3c840:
  plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
  puVar3 = StringLiteral_12013;
  puVar2 = StringLiteral_3579;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
    uVar11 = uVar12;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03b3c8c0;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03b3c8c0:
    uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_03b3c9e0;
      lVar4 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_03b3c9b8;
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03b3c91c;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_03b3c91c:
    (*(code *)*puVar8)(local_68,plVar7,puVar8[1]);
    uVar9 = FUN_03b1c12c(local_68[0],0);
    uVar6 = FUN_0340eec4(uVar9,0);
    uVar12 = uVar11;
    if (((uVar6 & 1) == 0) && (uVar6 = FUN_0340eec4(uVar11,0), uVar12 = uVar9, (uVar6 & 1) == 0)) {
      uVar12 = FUN_0340ebc0(uVar11,*(undefined8 *)puVar2,uVar9,0);
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar10 = piVar10 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03b3c9d4;
    }
  }
LAB_03b3c9b8:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03b3c9d4:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03b3c9e0:
  uVar6 = FUN_0340eec4(uVar11,0);
  if ((uVar6 & 1) == 0) {
    uVar5 = FUN_0340ebc0(uVar11,*(undefined8 *)Method_System_DateTimeParse_ParseExact__,uVar5,0);
  }
  return uVar5;
}


