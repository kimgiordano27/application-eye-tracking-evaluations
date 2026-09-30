/*
FUNCTION_NAME: FUN_0295d64c
ENTRY_POINT: 0295d64c
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


undefined8 FUN_0295d64c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  if ((DAT_04830c18 & 1) == 0) {
                    /* try { // try from 0295d66c to 02a5d66f has its CatchHandler @ 0295d69c */
                    /* try { // try from 0295d670 to 02a5d683 has its CatchHandler @ 0295d6a4 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830c18 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                    /* try { // try from 0295d684 to 02a5d693 has its CatchHandler @ 0295d440 */
  if (*(int *)((long)param_1 + 0x14) != 2) {
                    /* try { // try from 0295d694 to 02a5d697 has its CatchHandler @ 0295d698 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295d694 with catch @ 0295d698
                       try { // try from 0295d698 to 02a5d6bb has its CatchHandler @ 0295d440 */
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295d66c with catch @ 0295d69c
                        */
    plVar7 = (long *)param_1[5];
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295d5f8 with catch @ 0295d6a0
                        */
    if (plVar7 == (long *)0x0) goto LAB_0295d8a4;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295d670 with catch @ 0295d6a4
                        */
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 0295d6bc to 02a5d6d3 has its CatchHandler @ 0295d708 */
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
                    /* try { // try from 0295d6d4 to 02a5d6f7 has its CatchHandler @ 0295d440 */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
                    /* catch() { ... } // from try @ 0295d6bc with catch @ 0295d708
                       catch() { ... } // from try @ 0295d6f8 with catch @ 0295d708 */
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0295d70c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
                    /* try { // try from 0295d6f8 to 02a5d707 has its CatchHandler @ 0295d708 */
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0295d70c:
                    /* try { // try from 0295d70c to 02a5d70f has its CatchHandler @ 0295d718 */
                    /* try { // try from 0295d710 to 02a5d71b has its CatchHandler @ 0295d440 */
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0295d70c with catch @ 0295d718
                        */
    param_1[8] = lVar3;
    thunk_FUN_01f51358(param_1 + 8,lVar3);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  do {
    plVar7 = (long *)param_1[8];
    if (plVar7 == (long *)0x0) goto LAB_0295d8a4;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0295d788;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_0295d788:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      goto LAB_0295d8a4;
    }
    plVar7 = (long *)param_1[8];
    if (plVar7 == (long *)0x0) goto LAB_0295d8a4;
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
          goto LAB_0295d808;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0295d808:
    auVar8 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    lVar3 = param_1[6];
  } while ((lVar3 != 0) &&
          (uVar5 = (**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),auVar8._0_8_,auVar8._8_8_,
                              *(undefined8 *)(lVar3 + 0x28)), (uVar5 & 1) == 0));
  lVar3 = param_1[7];
  if (lVar3 != 0) {
    auVar8 = (**(code **)(lVar3 + 0x18))
                       (*(undefined8 *)(lVar3 + 0x40),auVar8._0_8_,auVar8._8_8_,
                        *(undefined8 *)(lVar3 + 0x28));
    *(undefined1 (*) [16])(param_1 + 3) = auVar8;
    thunk_FUN_01f51358((undefined1 (*) [16])(param_1 + 3),0);
    return 1;
  }
LAB_0295d8a4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


