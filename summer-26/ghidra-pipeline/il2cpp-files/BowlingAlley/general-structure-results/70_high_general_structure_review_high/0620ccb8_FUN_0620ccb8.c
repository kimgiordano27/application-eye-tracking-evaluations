/*
FUNCTION_NAME: FUN_0620ccb8
ENTRY_POINT: 0620ccb8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3
*/


void FUN_0620ccb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  
  if ((DAT_076ddf4b & 1) == 0) {
    thunk_FUN_032e1da0(
                      System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Func<FingerFeature,_Nullable<float>>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072a1978);
    thunk_FUN_032e1da0(PTR_DAT_072a1920);
    thunk_FUN_032e1da0(PTR_DAT_07292b30);
    DAT_076ddf4b = 1;
  }
  uVar1 = FUN_06210a74(param_1,param_2);
  if (uVar1 == 0xffffffff) {
    uVar2 = thunk_FUN_057aa644(param_3,*(undefined8 *)
                                        System_Func<FingerFeature,_Nullable<float>>_TypeInfo,0);
    if ((((uVar2 & 1) != 0) &&
        (uVar2 = FUN_057aa92c(param_2,*(undefined8 *)PTR_DAT_07292b30,0), (uVar2 & 1) != 0)) ||
       ((uVar2 = thunk_FUN_057aa644(param_3,*(undefined8 *)PTR_DAT_072a1978,0), (uVar2 & 1) != 0 &&
        (uVar2 = FUN_057aa92c(param_2,*(undefined8 *)PTR_DAT_072a1920,0), (uVar2 & 1) != 0)))) {
      uVar4 = thunk_FUN_032e1da0(PTR_DAT_07279560);
      uVar4 = FUN_032d5d3c(uVar4,1);
      FUN_02d9d3f0();
      FUN_02da1a84(uVar4,param_2);
      FUN_02da1ab8(uVar4,0,param_2);
      uVar11 = thunk_FUN_032e1da0(
                                 System_Collections_Generic_List<KeyValuePair<Transform,_Pose>>_TypeInfo
                                 );
      uVar4 = FUN_0623eb78(uVar11,uVar4,0);
LAB_0620d078:
      thunk_FUN_032e1da0(PTR_DAT_0727dd40);
      uVar11 = thunk_FUN_032a56a0();
      FUN_0589e7ac(uVar11,uVar4,0);
      uVar4 = thunk_FUN_032e1da0(GLTFast_VertexBufferTexCoords<VTexCoord7>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar11,uVar4);
    }
    plVar13 = *(long **)(param_1 + 0x28);
    if (plVar13 == (long *)0x0) {
      uVar7 = 1;
      goto LAB_0620cf1c;
    }
    lVar9 = *plVar13;
    uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar2 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_0620cef4;
        }
        uVar2 = uVar2 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_032937ac(plVar13,*(long *)
                                   System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo
                          ,1);
LAB_0620cef4:
    uVar4 = (*(code *)*puVar3)(plVar13,param_2,puVar3[1]);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x50);
    if (lVar9 == 0) {
LAB_0620cf38:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0x58)) {
LAB_0620cf3c:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    lVar8 = *(long *)(param_1 + 0x30);
    if (lVar8 == 0) goto LAB_0620cf38;
    if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_0620cf3c;
    lVar12 = (long)(int)uVar1;
    if (*(int *)(lVar9 + (long)(int)*(uint *)(param_1 + 0x58) * 0x30 + 0x20) < (int)uVar1) {
      uVar2 = FUN_057aa92c(*(undefined8 *)(lVar8 + lVar12 * 0x18 + 0x28),param_3,0);
      if ((uVar2 & 1) != 0) {
        uVar4 = thunk_FUN_032e1da0(PTR_DAT_072794b0);
        uVar4 = FUN_032d5d3c(uVar4,3);
        FUN_02d9d3f0();
        FUN_02da1ab8(uVar4,0,param_2);
        uVar11 = *(undefined8 *)(param_1 + 0x30);
        FUN_02d9d3f0(uVar11);
        lVar9 = FUN_031e4bf8(uVar11,lVar12);
        uVar11 = *(undefined8 *)(lVar9 + 8);
        FUN_02d9d3f0(uVar4);
        FUN_02da1ab8(uVar4,1,uVar11);
        FUN_02d9d3f0(uVar4);
        FUN_02da1ab8(uVar4,2,param_3);
        thunk_FUN_032e1da0(System_Collections_Generic_IEnumerator<MemberInfo>_TypeInfo);
        uVar11 = thunk_FUN_032a56a0();
        uVar5 = thunk_FUN_032e1da0(GLTFast_VertexBufferTexCoords<VTexCoord6>_TypeInfo);
        FUN_0623e59c(uVar11,uVar5,uVar4,0);
        uVar4 = thunk_FUN_032e1da0(GLTFast_VertexBufferTexCoords<VTexCoord7>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar11,uVar4);
      }
      return;
    }
    if (*(int *)(lVar8 + lVar12 * 0x18 + 0x30) == 3) {
      uVar2 = thunk_FUN_057aa644(param_2,*(undefined8 *)PTR_DAT_07292b30,0);
      puVar6 = 
      System_Collections_Generic_List<LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>_TypeInfo
      ;
      if ((uVar2 & 1) != 0) {
        lVar9 = *(long *)(param_1 + 0x30);
        if (lVar9 == 0) goto LAB_0620cf38;
        if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_0620cf3c;
        uVar2 = FUN_057aa92c(param_3,*(undefined8 *)(lVar9 + lVar12 * 0x18 + 0x28),0);
        puVar6 = GLTFast_VertexBufferTexCoords<VTexCoord8>_TypeInfo;
        if ((uVar2 & 1) == 0) {
          uVar7 = 2;
          goto LAB_0620cf1c;
        }
      }
      uVar4 = thunk_FUN_032e1da0(puVar6);
      uVar4 = FUN_06240f48(uVar4,0);
      goto LAB_0620d078;
    }
    uVar4 = *(undefined8 *)(lVar8 + lVar12 * 0x18 + 0x28);
  }
  uVar2 = thunk_FUN_057aa644(uVar4,param_3,0);
  uVar7 = 1;
  if ((uVar2 & 1) != 0) {
    uVar7 = 2;
  }
LAB_0620cf1c:
  FUN_06210b50(param_1,param_2,param_3,uVar7);
  return;
}


