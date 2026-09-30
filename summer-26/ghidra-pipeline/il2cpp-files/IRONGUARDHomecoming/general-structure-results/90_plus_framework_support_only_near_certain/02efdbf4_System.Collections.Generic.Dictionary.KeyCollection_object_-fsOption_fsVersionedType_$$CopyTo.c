/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<object,-fsOption<fsVersionedType>>$$CopyTo
ENTRY_POINT: 02efdbf4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02efde54) */

undefined8
System_Collections_Generic_Dictionary_KeyCollection<object,_fsOption<fsVersionedType>>__CopyTo
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *piVar9;
  void *unaff_x19;
  long unaff_x20;
  int iVar10;
  size_t unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  if (in_x9 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02efdc34;
      }
      in_x9 = in_x9 + -1;
      piVar9 = piVar9 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02efdc34:
  plVar3 = (long *)(*(code *)*puVar2)();
  iVar10 = 0;
  *(undefined4 *)(unaff_x29 + -0x1c) = 0;
LAB_02efdc4c:
  do {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
                    /* try { // try from 02efdc98 to 02ffdc9f has its CatchHandler @ 02efdcdc */
                    /* try { // try from 02efdca0 to 02ffdccf has its CatchHandler @ 02efdbe0 */
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02efdca4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
                    /* try { // try from 02efdc84 to 02ffdc8b has its CatchHandler @ 02efdce0 */
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02efdca4:
    uVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar8 & 1) == 0) break;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
                    /* try { // try from 02efdcd0 to 02ffdcd3 has its CatchHandler @ 02efdcd8 */
    }
                    /* try { // try from 02efdcd4 to 02ffdcf7 has its CatchHandler @ 02efdbe0 */
    lVar7 = *plVar3;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02efdcd0 with catch @ 02efdcd8
                        */
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02efdc98 with catch @ 02efdcdc
                        */
    if (uVar8 != 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02efdc84 with catch @ 02efdce0
                        */
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          lVar6 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_02efdd1c;
        }
        uVar8 = uVar8 - 1;
                    /* try { // try from 02efdcf8 to 02ffdcfb has its CatchHandler @ 02efdd24 */
        piVar9 = piVar9 + 4;
                    /* try { // try from 02efdcfc to 02ffdd33 has its CatchHandler @ 02efdbe0 */
      } while (uVar8 != 0);
    }
    lVar6 = FUN_01ecb238(plVar3,lVar6,0);
LAB_02efdd1c:
    *(void **)(unaff_x29 + -0x18) = unaff_x19;
    lVar6 = *(long *)(lVar6 + 8);
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar3,unaff_x29 + -0x18);
    memcpy(unaff_x26,unaff_x19,unaff_x24);
    memcpy(unaff_x25,unaff_x26,unaff_x24);
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar2 = unaff_x25;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x98) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x25;
    }
    puVar5 = *(undefined8 **)(lVar6 + 0x1d8);
    uVar4 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    (*(code *)puVar5[2])(uVar4);
    if (-1 < *(int *)(unaff_x29 + -0xc)) {
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar8 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32();
      if ((uVar8 & 1) == 0) {
        FUN_039dcb94();
        *(int *)(unaff_x29 + -0x1c) = *(int *)(unaff_x29 + -0x1c) + 1;
      }
      goto LAB_02efdc4c;
    }
    iVar10 = iVar10 + 1;
  } while ((*(uint *)(unaff_x29 + -0x20) & 1) == 0);
  lVar6 = *(long *)(unaff_x29 + -0x28);
  uVar1 = *(undefined4 *)(unaff_x29 + -0x1c);
  if (plVar3 != (long *)0x0) {
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02efde44;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02efde44:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  if (*(long *)(lVar6 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(iVar10,uVar1);
}


