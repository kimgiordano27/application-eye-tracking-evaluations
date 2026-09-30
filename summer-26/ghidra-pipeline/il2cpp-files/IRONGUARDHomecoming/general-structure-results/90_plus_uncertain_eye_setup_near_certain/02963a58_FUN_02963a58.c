/*
FUNCTION_NAME: FUN_02963a58
ENTRY_POINT: 02963a58
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


undefined8
FUN_02963a58(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4,
            long param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined1 local_50 [32];
  
  if ((DAT_04830c44 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830c44 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_4 + 0x14) != 2) {
    if (*(int *)((long)param_4 + 0x14) != 1) {
      return 0;
    }
    plVar7 = (long *)param_4[5];
    if (plVar7 == (long *)0x0) goto LAB_02963ce0;
                    /* try { // try from 02963ab8 to 02a63afb has its CatchHandler @ 02963b60 */
    lVar3 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10);
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
          goto LAB_02963b1c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_02963b1c:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
                    /* try { // try from 02963b2c to 02a63b2f has its CatchHandler @ 02963b5c */
    param_4[8] = lVar3;
                    /* try { // try from 02963b30 to 02a63b43 has its CatchHandler @ 02963b64 */
    thunk_FUN_01f51358(param_4 + 8,lVar3);
    *(undefined4 *)((long)param_4 + 0x14) = 2;
  }
  do {
                    /* try { // try from 02963b44 to 02a63b53 has its CatchHandler @ 029638f8 */
    plVar7 = (long *)param_4[8];
    if (plVar7 == (long *)0x0) goto LAB_02963ce0;
    lVar3 = *plVar7;
                    /* try { // try from 02963b54 to 02a63b57 has its CatchHandler @ 02963b58 */
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02963b54 with catch @ 02963b58
                       try { // try from 02963b58 to 02a63b7b has its CatchHandler @ 029638f8 */
    if (uVar5 != 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02963b2c with catch @ 02963b5c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02963ab8 with catch @ 02963b60
                        */
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02963b30 with catch @ 02963b64
                        */
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                    /* try { // try from 02963b94 to 02a63bb7 has its CatchHandler @ 029638f8 */
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02963b98;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
                    /* try { // try from 02963b7c to 02a63b93 has its CatchHandler @ 02963bc8 */
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_02963b98:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (param_4 != (long *)0x0) {
        (**(code **)(*param_4 + 0x1f8))(param_4,*(undefined8 *)(*param_4 + 0x200));
        return 0;
      }
      goto LAB_02963ce0;
    }
    plVar7 = (long *)param_4[8];
    if (plVar7 == (long *)0x0) goto LAB_02963ce0;
                    /* try { // try from 02963bb8 to 02a63bc7 has its CatchHandler @ 02963bc8 */
    lVar3 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 02963b7c with catch @ 02963bc8
                       catch() { ... } // from try @ 02963bb8 with catch @ 02963bc8 */
      lVar3 = FUN_01ecaf44(lVar3);
                    /* try { // try from 02963bcc to 02a63bcf has its CatchHandler @ 02963bd8 */
    }
                    /* try { // try from 02963bd0 to 02a63bdb has its CatchHandler @ 029638f8 */
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02963bcc with catch @ 02963bd8
                        */
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02963c18;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_02963c18:
    (*(code *)*puVar2)(local_50,plVar7,puVar2[1]);
    lVar3 = param_4[6];
  } while ((lVar3 != 0) &&
          (uVar5 = (**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),local_50,*(undefined8 *)(lVar3 + 0x28)),
          (uVar5 & 1) == 0));
  lVar3 = param_4[7];
  if (lVar3 != 0) {
    uVar8 = (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(lVar3 + 0x40),local_50,*(undefined8 *)(lVar3 + 0x28));
    *(undefined4 *)(param_4 + 3) = uVar8;
    *(undefined4 *)((long)param_4 + 0x1c) = param_2;
    *(undefined4 *)(param_4 + 4) = param_3;
    return 1;
  }
LAB_02963ce0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


