/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<LineInfo>
ENTRY_POINT: 02415e64
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02415f4c) */
/* WARNING: Removing unreachable block (ram,0x02415fb4) */

undefined8
System_Array__InternalArray__IEnumerable_GetEnumerator<LineInfo>
          (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x24;
  int unaff_w26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  
  do {
    uVar4 = FUN_0340eec4(param_1,param_2);
    if ((uVar4 & 1) == 0) {
      iVar1 = 1;
      if (unaff_w26 != 0) {
                    /* try { // try from 02415e78 to 02515e7b has its CatchHandler @ 02415e90 */
        if (unaff_w26 == 1) {
          unaff_x21 = (long *)thunk_FUN_01f117cc(*unaff_x28);
          FUN_03416d98(unaff_x21,0);
                    /* catch() { ... } // from try @ 02415e78 with catch @ 02415e90 */
          if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03418748(unaff_x21,unaff_x20,0);
        }
        if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_03418748(unaff_x21);
        FUN_03418748(unaff_x21,unaff_x24,0);
                    /* try { // try from 02415ed0 to 02515ef7 has its CatchHandler @ 02415f0c */
        unaff_x24 = unaff_x20;
        iVar1 = unaff_w26 + 1;
      }
      unaff_w26 = iVar1;
      unaff_x20 = unaff_x24;
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    do {
      lVar6 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02415dcc;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02415dcc:
      uVar4 = (*(code *)*puVar2)();
      if ((uVar4 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) goto LAB_02415f40;
        lVar6 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 == 0) goto System_Array__InternalArray__IEnumerable_GetEnumerator<LinkInfo>;
                    /* try { // try from 02415ef8 to 02515f03 has its CatchHandler @ 02415a90 */
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_02415f00;
      }
      lVar6 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar6) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02415e40;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02415e40:
      plVar3 = (long *)(*(code *)*puVar2)();
    } while (plVar3 == (long *)0x0);
    param_1 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    param_2 = 0;
    unaff_x24 = param_1;
  } while( true );
  while( true ) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02415ed0 with catch @ 02415f0c
                       catch(type#2 @ 00000000) { ... } // from try @ 02415f04 with catch @ 02415f0c
                        */
    uVar4 = uVar4 - 1;
    piVar8 = piVar8 + 4;
    if (uVar4 == 0) break;
LAB_02415f00:
                    /* try { // try from 02415f04 to 02515f0b has its CatchHandler @ 02415f0c */
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_02415f34;
    }
  }
System_Array__InternalArray__IEnumerable_GetEnumerator<LinkInfo>:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02415f34:
  (*(code *)*puVar2)();
LAB_02415f40:
  if (unaff_w26 == 0) {
    unaff_x20 = 0;
  }
  else if (unaff_w26 != 1) {
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* WARNING: Could not recover jumptable at 0x02415f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*unaff_x21 + 0x168))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x170));
    return uVar5;
  }
  return unaff_x20;
}


