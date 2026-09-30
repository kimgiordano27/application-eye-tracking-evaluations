/*
FUNCTION_NAME: FUN_06c27e28
ENTRY_POINT: 06c27e28
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_11
*/


void FUN_06c27e28(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
                    /* try { // try from 06c27e44 to 06d27e4f has its CatchHandler @ 06c28ca4 */
  lVar5 = param_1;
  if ((DAT_0756083e & 1) == 0) {
    FUN_03188a78(Method_System_Collections_Generic_List<HTTPRequest>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_List<HTTPRequest>_Add__);
    FUN_03188a78(Method_System_Collections_Generic_List<HTTPRequest>_Clear__);
    FUN_03188a78(Method_System_Collections_Generic_List<HTTPRequest>_GetEnumerator__);
                    /* try { // try from 06c27e88 to 06d27e93 has its CatchHandler @ 06c28c98 */
    FUN_03188a78(Method_System_Collections_Generic_List<HTTPRequest>_Remove__);
    FUN_03188a78(Method_System_Collections_Generic_List<HandBoneInfo>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_List<HandBoneInfo>_GetEnumerator__);
    FUN_03188a78(Method_System_Collections_Generic_List<HandGrabPose>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_List<HandGrabPose>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_List<HandGrabPose>_Add__);
                    /* try { // try from 06c27ed4 to 06d27edf has its CatchHandler @ 06c28c14 */
    FUN_03188a78(Method_System_Collections_Generic_List<HandGrabPose>_GetEnumerator__);
    FUN_03188a78(Method_System_Collections_Generic_List<Guid>_Clear__);
    FUN_03188a78(Method_System_Collections_Generic_List<HandGrabPose>_get_Count__);
                    /* try { // try from 06c27ef8 to 06d27eff has its CatchHandler @ 06c28cb0 */
    FUN_03188a78(Method_System_Collections_Generic_List<HandGrabPose>_get_Item__);
                    /* try { // try from 06c27f00 to 06d27f0b has its CatchHandler @ 06c28c94 */
    lVar5 = FUN_03188a78(Method_System_Collections_Generic_List<HandJointId>__ctor__);
    DAT_0756083e = 1;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + 0x3b) != '\0') {
                    /* try { // try from 06c27f24 to 06d27f2b has its CatchHandler @ 06c28cac */
      uStack_78 = *(ulong *)(param_2 + 2);
      local_80 = *(undefined8 *)param_2;
      uStack_68 = *(undefined8 *)(param_2 + 6);
      uStack_70 = *(undefined8 *)(param_2 + 4);
                    /* try { // try from 06c27f2c to 06d27f37 has its CatchHandler @ 06c28c90 */
      local_60 = *(undefined8 *)(param_2 + 8);
      uVar6 = thunk_FUN_031c39fc(*(undefined8 *)
                                  Method_System_Collections_Generic_List<HandBoneInfo>_GetEnumerator__
                                 ,&local_80);
      lVar5 = FUN_06c2686c(lVar9,uVar6);
    }
    uVar4 = FUN_06c28344(lVar5,param_2[8]);
    puVar3 = Method_System_Collections_Generic_List<Guid>_Clear__;
    iVar2 = (uint)(param_2[6] != 0) << 1;
                    /* try { // try from 06c27f70 to 06d27f7b has its CatchHandler @ 06c28c6c */
    iVar1 = *param_2;
    if (param_2[6] == 1) {
      iVar2 = 1;
    }
    if (iVar1 == 3) {
      lVar9 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)Method_System_Collections_Generic_List<Guid>_Clear__;
      if (*(int *)(lVar5 + 0xe4) == 0) {
                    /* try { // try from 06c28080 to 06d2808b has its CatchHandler @ 06c28c78 */
        thunk_FUN_031e5338();
        lVar5 = *(long *)puVar3;
      }
      puVar8 = *(undefined8 **)(lVar5 + 0xb8);
      lVar10 = puVar8[9];
      if (lVar10 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar6 = *puVar8;
        lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)
                             Method_System_Collections_Generic_List<HTTPRequest>_Remove__);
                    /* try { // try from 06c280c4 to 06d280cf has its CatchHandler @ 06c28c68 */
        FUN_03df7698(lVar10,uVar6,
                     *(undefined8 *)Method_System_Collections_Generic_List<HandGrabPose>__ctor__,0);
        *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48) = lVar10;
      }
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 != 1) {
          return;
        }
        if (DAT_0754761d == '\0') {
          FUN_03188a78(PTR_DAT_070cf448);
          DAT_0754761d = '\x01';
        }
        puVar3 = Method_System_Collections_Generic_List<Guid>_Clear__;
                    /* try { // try from 06c27fb4 to 06d27fbf has its CatchHandler @ 06c28c84 */
        iVar1 = param_2[1];
        fVar11 = **(float **)(*(long *)PTR_DAT_070cf448 + 0xb8);
        fVar12 = (*(float **)(*(long *)PTR_DAT_070cf448 + 0xb8))[1];
        fVar13 = fVar12;
        if (iVar1 == 1) {
          fVar14 = -1.0;
        }
        else {
          fVar14 = fVar11;
          if (iVar1 == 2) {
            fVar13 = 1.0;
          }
          else if (iVar1 == 3) {
            fVar14 = 1.0;
          }
          else {
            fVar13 = -1.0;
            if (iVar1 != 4) {
              fVar13 = fVar12;
            }
          }
        }
        if (DAT_012e345c <=
            (fVar14 - fVar11) * (fVar14 - fVar11) + (fVar13 - fVar12) * (fVar13 - fVar12)) {
                    /* try { // try from 06c28190 to 06d2819b has its CatchHandler @ 06c28c58 */
          lVar9 = *(long *)(param_1 + 0x10);
          lVar5 = *(long *)Method_System_Collections_Generic_List<Guid>_Clear__;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            lVar5 = *(long *)puVar3;
          }
          puVar8 = *(undefined8 **)(lVar5 + 0xb8);
          lVar10 = puVar8[6];
          if (lVar10 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
            }
            uVar6 = *puVar8;
                    /* try { // try from 06c281d4 to 06d281df has its CatchHandler @ 06c28c74 */
            lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)
                                 Method_System_Collections_Generic_List<HandBoneInfo>__ctor__);
            FUN_03df7f5c(lVar10,uVar6,
                         *(undefined8 *)Method_System_Collections_Generic_List<HandGrabPose>_Add__,0
                        );
            *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30) = lVar10;
          }
                    /* try { // try from 06c28218 to 06d28223 has its CatchHandler @ 06c28c64 */
          local_80 = 0;
          uStack_78 = 0;
          FUN_04df201c(fVar14,fVar13,&local_80,iVar2,uVar4,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<HandGrabPose>_get_Item__);
          if (lVar9 != 0) {
            FUN_03a540b4(lVar9,lVar10,local_80,uStack_78,
                         *(undefined8 *)Method_System_Collections_Generic_List<HTTPRequest>_Clear__)
            ;
            return;
          }
        }
        else {
                    /* try { // try from 06c2825c to 06d28267 has its CatchHandler @ 06c28c80 */
          lVar5 = *(long *)(param_1 + 0x10);
          uVar7 = 5;
          if (iVar1 == 6) {
            uVar7 = 6;
          }
          lVar9 = *(long *)Method_System_Collections_Generic_List<Guid>_Clear__;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            lVar9 = *(long *)puVar3;
          }
          puVar8 = *(undefined8 **)(lVar9 + 0xb8);
          lVar10 = puVar8[7];
          if (lVar10 == 0) {
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
            }
                    /* try { // try from 06c282a0 to 06d282ab has its CatchHandler @ 06c28c54 */
            uVar6 = *puVar8;
            lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)
                                 Method_System_Collections_Generic_List<HTTPRequest>_GetEnumerator__
                               );
            FUN_03df7e18(lVar10,uVar6,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<HandGrabPose>_GetEnumerator__,0);
            *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38) = lVar10;
          }
                    /* try { // try from 06c282e4 to 06d282ef has its CatchHandler @ 06c28c60 */
          uStack_78 = uStack_78 & 0xffffffff00000000;
          local_80 = 0;
          FUN_04de7d80(&local_80,uVar7,iVar2,uVar4,
                       *(undefined8 *)Method_System_Collections_Generic_List<HandJointId>__ctor__);
          if (lVar5 != 0) {
            FUN_03a536ec(lVar5,lVar10,local_80,uStack_78 & 0xffffffff,
                         *(undefined8 *)Method_System_Collections_Generic_List<HTTPRequest>_Add__);
            return;
          }
        }
        goto LAB_06c28328;
      }
      lVar9 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)Method_System_Collections_Generic_List<Guid>_Clear__;
                    /* try { // try from 06c27ff8 to 06d28003 has its CatchHandler @ 06c28c3c */
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar5 = *(long *)puVar3;
      }
      puVar8 = *(undefined8 **)(lVar5 + 0xb8);
      lVar10 = puVar8[8];
      if (lVar10 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar6 = *puVar8;
        lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)
                             Method_System_Collections_Generic_List<HTTPRequest>_Remove__);
                    /* try { // try from 06c2803c to 06d28047 has its CatchHandler @ 06c28c5c */
        FUN_03df7698(lVar10,uVar6,
                     *(undefined8 *)Method_System_Collections_Generic_List<HandGrabPose>__ctor__,0);
        *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40) = lVar10;
      }
    }
    local_80 = 0;
    FUN_04dc3a0c(&local_80,iVar2,uVar4,
                 *(undefined8 *)Method_System_Collections_Generic_List<HandGrabPose>_get_Count__);
    if (lVar9 != 0) {
                    /* try { // try from 06c28108 to 06d28113 has its CatchHandler @ 06c28c40 */
      FUN_03a53214(lVar9,lVar10,local_80,
                   *(undefined8 *)Method_System_Collections_Generic_List<HTTPRequest>__ctor__);
      return;
    }
  }
LAB_06c28328:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 06c28328 to 06d28333 has its CatchHandler @ 06c28c4c */
  FUN_03188cd8();
}


