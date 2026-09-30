/*
FUNCTION_NAME: FUN_0293fb04
ENTRY_POINT: 0293fb04
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


undefined8 FUN_0293fb04(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  if ((DAT_04830be8 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830be8 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_1 + 0x14) != 2) {
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    plVar10 = (long *)param_1[7];
    if (plVar10 == (long *)0x0) goto LAB_0293fd48;
    lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 0293fb9c to 02a3fb9f has its CatchHandler @ 0293fbac */
        if (*(long *)(piVar9 + -2) == lVar5) {
                    /* try { // try from 0293fbc4 to 02a3fbc7 has its CatchHandler @ 0293fbd8 */
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0293fbc8;
        }
                    /* try { // try from 0293fba0 to 02a3fbc3 has its CatchHandler @ 0293fa00 */
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0293faf0 with catch @ 0293fba8
                        */
      } while (uVar8 != 0);
    }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0293fad8 with catch @ 0293fbac
                       catch(type#1 @ 042b3198) { ... } // from try @ 0293fb9c with catch @ 0293fbac
                        */
    puVar4 = (undefined8 *)FUN_01ecb238(plVar10,lVar5,0);
LAB_0293fbc8:
    lVar5 = (*(code *)*puVar4)(plVar10,puVar4[1]);
                    /* catch() { ... } // from try @ 0293fbc4 with catch @ 0293fbd8 */
    param_1[9] = lVar5;
    thunk_FUN_01f51358(param_1 + 9,lVar5);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  while (plVar10 = (long *)param_1[9], plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 0293fc18 to 02a3fc3f has its CatchHandler @ 0293fc54 */
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0293fc44;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_0293fc44:
    uVar8 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      break;
    }
    plVar10 = (long *)param_1[9];
    if (plVar10 == (long *)0x0) break;
    lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0293fcc4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar10,lVar5,0);
LAB_0293fcc4:
    (*(code *)*puVar4)(&local_50,plVar10,puVar4[1]);
    lVar3 = lStack_38;
    lVar2 = lStack_40;
    lVar6 = lStack_48;
    lVar5 = local_50;
    lVar7 = param_1[8];
    if (lVar7 == 0) break;
    uVar8 = (**(code **)(lVar7 + 0x18))
                      (*(undefined8 *)(lVar7 + 0x40),&local_50,*(undefined8 *)(lVar7 + 0x28));
    if ((uVar8 & 1) != 0) {
      param_1[6] = lVar3;
      param_1[5] = lVar2;
      param_1[4] = lVar6;
      param_1[3] = lVar5;
      return 1;
    }
  }
LAB_0293fd48:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


