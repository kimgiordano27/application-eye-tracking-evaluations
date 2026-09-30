/*
FUNCTION_NAME: FUN_02963ef0
ENTRY_POINT: 02963ef0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_02963ef0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  if ((DAT_04830c46 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830c46 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                    /* try { // try from 02963f34 to 02a640db has its CatchHandler @ 02963f34
                       catch() { ... } // from try @ 02963f34 with catch @ 02963f34
                       catch() { ... } // from try @ 02964144 with catch @ 02963f34
                       catch() { ... } // from try @ 02964158 with catch @ 02963f34
                       catch() { ... } // from try @ 02964194 with catch @ 02963f34
                       catch() { ... } // from try @ 029641dc with catch @ 02963f34 */
  if (*(int *)((long)param_1 + 0x14) != 2) {
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    plVar7 = (long *)param_1[8];
    if (plVar7 == (long *)0x0) goto LAB_02964198;
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02963fb8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_02963fb8:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    param_1[0xb] = lVar3;
    thunk_FUN_01f51358(param_1 + 0xb,lVar3);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  do {
    plVar7 = (long *)param_1[0xb];
    if (plVar7 == (long *)0x0) goto LAB_02964198;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02964034;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_02964034:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      goto LAB_02964198;
    }
    plVar7 = (long *)param_1[0xb];
    if (plVar7 == (long *)0x0) goto LAB_02964198;
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_029640b4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_029640b4:
    (*(code *)*puVar2)(&local_60,plVar7,puVar2[1]);
    uStack_88 = uStack_58;
    local_90 = local_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    local_70 = local_40;
    lVar3 = param_1[9];
  } while ((lVar3 != 0) &&
          (uVar5 = (**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),&local_60,*(undefined8 *)(lVar3 + 0x28))
          , (uVar5 & 1) == 0
                    /* try { // try from 029640dc to 02a64103 has its CatchHandler @ 02964160 */));
  lVar3 = param_1[10];
  uStack_b8 = uStack_88;
  local_c0 = local_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  local_a0 = local_70;
  if (lVar3 != 0) {
                    /* try { // try from 0296412c to 02a6412f has its CatchHandler @ 0296415c */
    uStack_58 = uStack_88;
    local_60 = local_90;
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
                    /* try { // try from 02964130 to 02a64143 has its CatchHandler @ 02964164 */
    local_40 = local_70;
    (**(code **)(lVar3 + 0x18))
              (&local_e8,*(undefined8 *)(lVar3 + 0x40),&local_60,*(undefined8 *)(lVar3 + 0x28));
                    /* try { // try from 02964144 to 02a64153 has its CatchHandler @ 02963f34 */
                    /* try { // try from 02964154 to 02a64157 has its CatchHandler @ 02964158 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02964154 with catch @ 02964158
                       try { // try from 02964158 to 02a6417b has its CatchHandler @ 02963f34 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296412c with catch @ 0296415c
                        */
    *(undefined4 *)(param_1 + 7) = local_c8;
    param_1[6] = lStack_d0;
    param_1[5] = local_d8;
    param_1[4] = lStack_e0;
    param_1[3] = local_e8;
    return 1;
  }
LAB_02964198:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


