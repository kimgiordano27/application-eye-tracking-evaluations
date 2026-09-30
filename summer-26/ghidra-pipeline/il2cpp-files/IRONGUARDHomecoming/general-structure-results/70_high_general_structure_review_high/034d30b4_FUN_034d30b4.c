/*
FUNCTION_NAME: FUN_034d30b4
ENTRY_POINT: 034d30b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_034d30b4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar10;
  undefined *puVar9;
  
  puVar9 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  if ((DAT_04832dd0 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_04832dd0 = 1;
  }
                    /* try { // try from 034d3118 to 035d3123 has its CatchHandler @ 034d2a2c */
  uVar5 = thunk_FUN_0340e318(param_1,**(undefined8 **)(*(long *)puVar9 + 0xb8),0);
  puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  if ((uVar5 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    puVar9 = 
    Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf<UnsafeParallelHashMapData>__;
    goto LAB_034d3418;
  }
  if (param_1 != 0) {
                    /* try { // try from 034d3124 to 035d312b has its CatchHandler @ 034d312c */
                    /* catch() { ... } // from try @ 034d30a8 with catch @ 034d312c
                       catch() { ... } // from try @ 034d3124 with catch @ 034d312c */
                    /* try { // try from 034d3130 to 035d3173 has its CatchHandler @ 034d3130
                       catch() { ... } // from try @ 034d3130 with catch @ 034d3130
                       catch() { ... } // from try @ 034d3224 with catch @ 034d3130
                       catch() { ... } // from try @ 034d326c with catch @ 034d3130
                       catch() { ... } // from try @ 034d32c8 with catch @ 034d3130 */
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_034e3e34(param_1);
    uVar5 = thunk_FUN_0340e318(uVar6,param_1,0);
    if ((uVar5 & 1) == 0) {
      lVar7 = FUN_03412ab4(param_1,0);
      if (lVar7 == 0) {
LAB_034d33d8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar7 + 0x10) == 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar6 = thunk_FUN_01f117cc();
        puVar9 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_ArrayElementAsRef<byte>__;
                    /* try { // try from 034d33f0 to 035d3417 has its CatchHandler @ 034d366c */
      }
      else {
                    /* try { // try from 034d3174 to 035d3187 has its CatchHandler @ 034d3274 */
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar7 = *(long *)puVar2;
        }
        iVar4 = FUN_03413064(param_1,**(undefined8 **)(lVar7 + 0xb8),0);
                    /* try { // try from 034d319c to 035d31a3 has its CatchHandler @ 034d326c */
        if (iVar4 < 0) {
          lVar7 = *(long *)puVar2;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar7 = *(long *)puVar2;
          }
          iVar4 = FUN_0341393c(param_1,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20),0);
          if (iVar4 == 0) {
            iVar4 = 1;
          }
          else if (iVar4 < 1) {
            return **(undefined8 **)(*(long *)puVar9 + 0xb8);
          }
          lVar7 = FUN_03410500(param_1,0,iVar4,0);
          if (lVar7 != 0) {
            iVar1 = *(int *)(lVar7 + 0x10);
                    /* try { // try from 034d3224 to 035d325f has its CatchHandler @ 034d3130 */
            if (iVar1 < 2) {
              lVar10 = *(long *)puVar2;
              if (iVar1 == 1) {
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(lVar10);
                  lVar10 = *(long *)puVar2;
                }
                    /* try { // try from 034d3260 to 035d3263 has its CatchHandler @ 034d3270 */
                if ((*(short *)(*(long *)(lVar10 + 0xb8) + 10) == 0x5c) &&
                   (1 < *(int *)(param_1 + 0x10))) {
                    /* try { // try from 034d3264 to 035d326b has its CatchHandler @ 034d3284 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 034d319c with catch @ 034d326c
                       try { // try from 034d326c to 035d329b has its CatchHandler @ 034d3130 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 034d3260 with catch @ 034d3270
                        */
                  sVar3 = FUN_03409f80(param_1,iVar4,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 034d3174 with catch @ 034d3274
                        */
                  lVar10 = *(long *)puVar2;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 034d31ec with catch @ 034d3280
                        */
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 034d3264 with catch @ 034d3284
                        */
                    thunk_FUN_01ee6d7c(lVar10);
                    lVar10 = *(long *)puVar2;
                  }
                    /* try { // try from 034d329c to 035d329f has its CatchHandler @ 034d32b4 */
                  if (*(short *)(*(long *)(lVar10 + 0xb8) + 0x18) == sVar3) {
                    if (*(int *)(lVar10 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c(lVar10);
                    }
                    /* catch() { ... } // from try @ 034d329c with catch @ 034d32b4 */
                    /* try { // try from 034d32bc to 035d32c7 has its CatchHandler @ 034d32dc */
                    if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    /* try { // try from 034d32c8 to 035d32d3 has its CatchHandler @ 034d3130 */
                    lVar10 = *(long *)(*(long *)puVar2 + 0xb8) + 0x18;
                    /* try { // try from 034d32d4 to 035d32db has its CatchHandler @ 034d32dc */
                    goto LAB_034d3370;
                  }
                }
              }
            }
            else {
              lVar10 = *(long *)puVar2;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034d32bc with catch @ 034d32dc
                       catch(type#2 @ 00000000) { ... } // from try @ 034d32d4 with catch @ 034d32dc
                        */
                    /* try { // try from 034d32e0 to 035d33ef has its CatchHandler @ 034d32e0
                       catch() { ... } // from try @ 034d32e0 with catch @ 034d32e0
                       catch() { ... } // from try @ 034d353c with catch @ 034d32e0
                       catch() { ... } // from try @ 034d3614 with catch @ 034d32e0
                       catch() { ... } // from try @ 034d361c with catch @ 034d32e0
                       catch() { ... } // from try @ 034d3708 with catch @ 034d32e0 */
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(lVar10);
                lVar10 = *(long *)puVar2;
              }
              if (*(short *)(*(long *)(lVar10 + 0xb8) + 10) == 0x5c) {
                sVar3 = FUN_03409f80(lVar7,iVar1 + -1,0);
                lVar10 = *(long *)puVar2;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(lVar10);
                  lVar10 = *(long *)puVar2;
                }
                if (*(short *)(*(long *)(lVar10 + 0xb8) + 0x18) == sVar3) {
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c(lVar10);
                  }
                  if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  lVar10 = *(long *)(*(long *)puVar2 + 0xb8) + 10;
LAB_034d3370:
                  uVar6 = FUN_034ec23c(lVar10,0);
                  uVar6 = FUN_03405678(lVar7,uVar6,0);
                  return uVar6;
                }
              }
            }
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar10);
            }
            uVar6 = FUN_034e39e4(lVar7);
            return uVar6;
          }
          goto LAB_034d33d8;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar6 = thunk_FUN_01f117cc();
        puVar9 = 
        Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_As<UnsafePtrList,_UnsafeList>__;
      }
LAB_034d3418:
      uVar8 = thunk_FUN_01efb3a4(puVar9);
      FUN_034f6754(uVar6,uVar8,0);
      uVar8 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_As<UntypedUnsafeList,_UnsafeList<byte>>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,uVar8);
    }
  }
                    /* try { // try from 034d31ec to 035d3223 has its CatchHandler @ 034d3280 */
  return 0;
}


