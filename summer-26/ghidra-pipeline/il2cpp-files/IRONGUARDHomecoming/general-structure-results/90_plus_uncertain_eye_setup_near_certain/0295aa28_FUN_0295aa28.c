/*
FUNCTION_NAME: FUN_0295aa28
ENTRY_POINT: 0295aa28
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


undefined8 FUN_0295aa28(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_04830c04 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830c04 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_1 + 0x14) != 2) {
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    plVar7 = (long *)param_1[4];
    if (plVar7 == (long *)0x0) goto LAB_0295ac70;
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
                    /* try { // try from 0295aae0 to 02a5ab23 has its CatchHandler @ 0295ab84 */
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0295aae8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0295aae8:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    param_1[7] = lVar3;
    thunk_FUN_01f51358(param_1 + 7,lVar3);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  do {
    plVar7 = (long *)param_1[7];
    if (plVar7 == (long *)0x0) goto LAB_0295ac70;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0295ab64;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
                    /* try { // try from 0295ab50 to 02a5ab53 has its CatchHandler @ 0295ab80 */
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
                    /* try { // try from 0295ab54 to 02a5ab67 has its CatchHandler @ 0295ab88 */
LAB_0295ab64:
                    /* try { // try from 0295ab68 to 02a5ab77 has its CatchHandler @ 0295a930 */
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      goto LAB_0295ac70;
    }
    plVar7 = (long *)param_1[7];
                    /* try { // try from 0295ab78 to 02a5ab7b has its CatchHandler @ 0295ab7c */
    if (plVar7 == (long *)0x0) goto LAB_0295ac70;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295ab78 with catch @ 0295ab7c
                       try { // try from 0295ab7c to 02a5ab9f has its CatchHandler @ 0295a930 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295ab50 with catch @ 0295ab80
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295aae0 with catch @ 0295ab84
                        */
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295ab54 with catch @ 0295ab88
                        */
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
                    /* try { // try from 0295aba0 to 02a5abb7 has its CatchHandler @ 0295abec */
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 0295abb8 to 02a5abdb has its CatchHandler @ 0295a930 */
        if (*(long *)(piVar6 + -2) == lVar3) {
                    /* try { // try from 0295abdc to 02a5abeb has its CatchHandler @ 0295abec */
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0295abe4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0295abe4:
                    /* catch() { ... } // from try @ 0295aba0 with catch @ 0295abec
                       catch() { ... } // from try @ 0295abdc with catch @ 0295abec */
    auVar9 = (*(code *)*puVar2)(plVar7,puVar2[1]);
                    /* try { // try from 0295abf0 to 02a5abf3 has its CatchHandler @ 0295abfc */
    lVar3 = param_1[5];
                    /* try { // try from 0295abf4 to 02a5abff has its CatchHandler @ 0295a930 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0295abf0 with catch @ 0295abfc
                        */
  } while ((lVar3 != 0) &&
          (uVar5 = (**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),auVar9._0_8_,auVar9._8_8_,
                              *(undefined8 *)(lVar3 + 0x28)), (uVar5 & 1) == 0));
  lVar3 = param_1[6];
  if (lVar3 != 0) {
    uVar8 = (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(lVar3 + 0x40),auVar9._0_8_,auVar9._8_8_,
                       *(undefined8 *)(lVar3 + 0x28));
    *(undefined4 *)(param_1 + 3) = uVar8;
    return 1;
  }
LAB_0295ac70:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


