/*
FUNCTION_NAME: System.ReadOnlySpan<__Il2CppFullySharedGenericType>$$ToArray
ENTRY_POINT: 01288a38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 142
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void System_ReadOnlySpan<__Il2CppFullySharedGenericType>__ToArray(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x26;
  undefined8 in_stack_00000020;
  
  lVar1 = thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xc68));
  if (*(uint *)(unaff_x22 + 3) < 3) goto LAB_012892ec;
  unaff_x22[6] = lVar1;
  lVar1 = FUN_01c5f128();
  if ((lVar1 == 0) ||
     (lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 != 0)) {
    if (*(uint *)(unaff_x22 + 3) < 4) goto LAB_012892ec;
    unaff_x22[7] = lVar1;
    lVar1 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<IEventBinding>_Remove__);
                    /* try { // try from 01288a94 to 01388aa7 has its CatchHandler @ 01288eec */
    if ((lVar1 != 0) &&
       (lVar1 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar1 == 0))
    goto LAB_012892f0;
    lVar1 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<IEventBinding>_Remove__);
    if (*(uint *)(unaff_x22 + 3) < 5) goto LAB_012892ec;
    unaff_x22[8] = lVar1;
                    /* try { // try from 01288ac8 to 01388b0b has its CatchHandler @ 01288f08 */
    lVar1 = *(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
      lVar1 = FUN_00d5941c();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar1 = *(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
      lVar1 = FUN_00d5941c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
    uVar3 = thunk_FUN_00d48444(PTR_DAT_033f38b8);
    if (lVar1 == 0) {
                    /* try { // try from 01288b38 to 01388b6f has its CatchHandler @ 012885c8 */
      lVar1 = *(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x48);
      if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
        lVar1 = FUN_00d5941c();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar1 = *(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x48);
      if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
        lVar1 = FUN_00d5941c();
      }
                    /* try { // try from 01288b70 to 01388bc3 has its CatchHandler @ 01288f14 */
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      thunk_FUN_00d48444(Method_Sirenix_Utilities_PropertyInfoExtensions_DeAliasProperty__);
      lVar1 = thunk_FUN_00d62348();
      if (lVar1 == 0) goto LAB_012892e8;
      FUN_012d239c(lVar1,uVar4,*(undefined8 *)(*(long *)(*unaff_x21 + 0xc0) + 0x58),0);
      lVar6 = *(long *)(*unaff_x21 + 0xc0);
      lVar2 = *(long *)(lVar6 + 0x48);
      if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
        lVar2 = FUN_00d5941c();
        lVar6 = *(long *)(*unaff_x21 + 0xc0);
      }
      *(long *)(*(long *)(lVar2 + 0xb8) + 0x10) = lVar1;
      if ((*(byte *)(*(long *)(lVar6 + 0x48) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
    }
    else {
      uVar3 = thunk_FUN_00d48444(PTR_DAT_033f38b8);
                    /* try { // try from 01288b28 to 01388b37 has its CatchHandler @ 01288f14 */
    }
    uVar4 = thunk_FUN_00d48444(Method_System_Collections_Stack_CopyTo__);
                    /* try { // try from 01288be8 to 01388c73 has its CatchHandler @ 01288f08 */
    uVar4 = FUN_010dcdb8(in_stack_00000020,lVar1,uVar4);
    uVar5 = thunk_FUN_00d48444(PTR_DAT_033f0aa0);
    uVar4 = FUN_010df6b8(uVar4,uVar5);
    lVar1 = FUN_01600f98(uVar3,uVar4,0);
    if ((lVar1 == 0) ||
       (lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 != 0)) {
      if (5 < *(uint *)(unaff_x22 + 3)) {
        unaff_x22[9] = lVar1;
        lVar1 = thunk_FUN_00d48444(
                                  Method_System_Net_WebSockets_ManagedWebSocket_<>c_<SendKeepAliveFrameAsync>b__58_0__
                                  );
        if ((lVar1 != 0) &&
           (lVar1 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar1 == 0))
        goto LAB_012892f0;
        lVar1 = thunk_FUN_00d48444(
                                  Method_System_Net_WebSockets_ManagedWebSocket_<>c_<SendKeepAliveFrameAsync>b__58_0__
                                  );
        if (6 < *(uint *)(unaff_x22 + 3)) {
          unaff_x22[10] = lVar1;
          if (unaff_x26 == (long *)0x0) {
LAB_012892e8:
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar3 = FUN_017a9c58();
          lVar1 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
          if (*(int *)(lVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar1 = FUN_01c4b4e0(uVar3,0);
          if ((lVar1 != 0) &&
             (lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0))
          goto LAB_012892f0;
          if (7 < *(uint *)(unaff_x22 + 3)) {
            unaff_x22[0xb] = lVar1;
            lVar1 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_39__);
            if ((lVar1 != 0) &&
               (lVar1 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar1 == 0))
            goto LAB_012892f0;
            lVar1 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_39__);
            if (8 < *(uint *)(unaff_x22 + 3)) {
              unaff_x22[0xc] = lVar1;
              lVar1 = (**(code **)(*unaff_x26 + 0x188))();
              if ((lVar1 != 0) &&
                 (lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0))
              goto LAB_012892f0;
              if (9 < *(uint *)(unaff_x22 + 3)) {
                unaff_x22[0xd] = lVar1;
                FUN_01600844();
                if (unaff_x20 != 0) {
                  FUN_01c25764();
                  return;
                }
                goto LAB_012892e8;
              }
            }
          }
        }
      }
LAB_012892ec:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
LAB_012892f0:
  uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar3,0);
}


