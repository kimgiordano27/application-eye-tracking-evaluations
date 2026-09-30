/*
FUNCTION_NAME: FUN_0424c380
ENTRY_POINT: 0424c380
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0424c588) */

void FUN_0424c380(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  
  if ((DAT_0484136d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ElementAt<string>__);
    thunk_FUN_01efb3a4(PTR_DAT_0458fad8);
    DAT_0484136d = 1;
  }
  if (param_1[0x82] != 0) {
    uVar1 = FUN_0407aaf0(param_1[0x82],0);
    uVar2 = FUN_0340e600(uVar1,param_2,0);
    if ((uVar2 & 1) != 0) {
      if (param_1[0x82] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0407ab2c(param_1[0x82],param_2,0);
    }
  }
  uVar1 = (**(code **)(*param_1 + 0xb28))(param_1,*(undefined8 *)(*param_1 + 0xb30));
  uVar2 = FUN_0340e600(uVar1,param_2,0);
  if ((uVar2 & 1) != 0) {
    uVar1 = (**(code **)(*param_1 + 0xb28))(param_1,*(undefined8 *)(*param_1 + 0xb30));
    if (*(int *)(*(long *)PTR_DAT_0458fad8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)PTR_DAT_0458fad8);
    }
    plVar3 = (long *)FUN_041daf64(uVar1,param_2,0);
    uVar1 = FUN_04224d30(param_1,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar1,uVar1);
    }
    FUN_041d4560(plVar3,uVar1,0);
    lVar6 = *param_1;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)Method_System_Linq_Enumerable_ElementAt<string>__) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0424c4e0;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(param_1,*(long *)Method_System_Linq_Enumerable_ElementAt<string>__,2);
LAB_0424c4e0:
                    /* catch() { ... } // from try @ 0424c550 with catch @ 0424c4e0
                       catch() { ... } // from try @ 0424c580 with catch @ 0424c4e0
                       catch() { ... } // from try @ 0424c5b4 with catch @ 0424c4e0 */
    (*(code *)*puVar4)(param_1,param_2,puVar4[1]);
    plVar5 = (long *)FUN_04224d30(param_1,0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x198))(plVar5,plVar3,*(undefined8 *)(*plVar5 + 0x1a0));
    }
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
                    /* try { // try from 0424c53c to 0434c543 has its CatchHandler @ 0424c564 */
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0424c548 with catch @ 0424c560
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0424c53c with catch @ 0424c564
                        */
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0424c56c;
          }
          uVar2 = uVar2 - 1;
                    /* try { // try from 0424c548 to 0434c54f has its CatchHandler @ 0424c560 */
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
                    /* try { // try from 0424c550 to 0434c57b has its CatchHandler @ 0424c4e0 */
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar3,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0424c56c:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
  }
                    /* try { // try from 0424c57c to 0434c57f has its CatchHandler @ 0424c5a8 */
                    /* try { // try from 0424c580 to 0434c5ab has its CatchHandler @ 0424c4e0 */
  return;
}


