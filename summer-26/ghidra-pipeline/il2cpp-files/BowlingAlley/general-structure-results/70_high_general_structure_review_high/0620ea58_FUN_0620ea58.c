/*
FUNCTION_NAME: FUN_0620ea58
ENTRY_POINT: 0620ea58
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3
*/


bool FUN_0620ea58(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  
  if ((DAT_076ddf4c & 1) == 0) {
    thunk_FUN_032e1da0(
                      System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Func<FingerFeature,_Nullable<float>>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072a1978);
    thunk_FUN_032e1da0(PTR_DAT_072a1920);
    thunk_FUN_032e1da0(PTR_DAT_07292b30);
    DAT_076ddf4c = 1;
  }
  uVar6 = FUN_06210a74(param_1,param_2);
  if (uVar6 == 0xffffffff) {
    plVar15 = *(long **)(param_1 + 0x28);
    if (plVar15 != (long *)0x0) {
      lVar11 = *plVar15;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)
               System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo)
          {
            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_0620ebe0;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_032937ac(plVar15,*(long *)
                                     System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo
                            ,1);
LAB_0620ebe0:
      uVar7 = (*(code *)*puVar9)(plVar15,param_2,puVar9[1]);
      goto LAB_0620ebf4;
    }
LAB_0620ec10:
    bVar4 = true;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x50);
    if (lVar11 == 0) goto LAB_0620ee3c;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_1 + 0x58)) {
LAB_0620ed30:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    lVar13 = *(long *)(param_1 + 0x30);
    if (lVar13 == 0) goto LAB_0620ee3c;
    if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_0620ed30;
    lVar16 = (long)(int)uVar6;
    uVar7 = *(undefined8 *)(lVar13 + lVar16 * 0x18 + 0x28);
    if (*(int *)(lVar11 + (long)(int)*(uint *)(param_1 + 0x58) * 0x30 + 0x20) < (int)uVar6) {
      uVar8 = FUN_057aa92c(uVar7,param_3,0);
      if ((uVar8 & 1) != 0) {
        uVar7 = thunk_FUN_032e1da0(PTR_DAT_072794b0);
        uVar7 = FUN_032d5d3c(uVar7,3);
        FUN_02d9d3f0();
        FUN_02da1ab8(uVar7,0,param_2);
        uVar14 = *(undefined8 *)(param_1 + 0x30);
        FUN_02d9d3f0(uVar14);
        lVar11 = FUN_031e4bf8(uVar14,lVar16);
        uVar14 = *(undefined8 *)(lVar11 + 8);
        FUN_02d9d3f0(uVar7);
        FUN_02da1ab8(uVar7,1,uVar14);
        FUN_02d9d3f0(uVar7);
        FUN_02da1ab8(uVar7,2,param_3);
        thunk_FUN_032e1da0(System_Collections_Generic_IEnumerator<MemberInfo>_TypeInfo);
        uVar10 = thunk_FUN_032a56a0();
        uVar14 = thunk_FUN_032e1da0(GLTFast_VertexBufferTexCoords<VTexCoord6>_TypeInfo);
        FUN_0623e59c(uVar10,uVar14,uVar7,0);
LAB_0620eef8:
        uVar7 = thunk_FUN_032e1da0(System_WeakReference<RegexReplacement>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar10,uVar7);
      }
      lVar11 = *(long *)(param_1 + 0x30);
      if (lVar11 != 0) {
        if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_0620ed30;
        piVar12 = (int *)(lVar11 + lVar16 * 0x18 + 0x30);
        iVar1 = *piVar12;
        if (iVar1 != 0) {
          cVar2 = *(char *)(param_1 + 0x9d);
          *piVar12 = 0;
          return iVar1 == 1 || cVar2 == '\0';
        }
        if (param_2 != 0) {
          if (*(int *)(param_2 + 0x10) == 0) {
            lVar11 = thunk_FUN_032e1da0(PTR_DAT_072794f8);
            uVar7 = **(undefined8 **)(lVar11 + 0xb8);
          }
          else {
            uVar7 = thunk_FUN_032e1da0(PTR_DAT_072a1920);
          }
          if (*(int *)(param_2 + 0x10) == 0) {
            param_2 = thunk_FUN_032e1da0(PTR_DAT_072a1920);
          }
          thunk_FUN_032e1da0(Nova_UIEventHandler<Gesture_OnCancel,_SliderVisuals>_TypeInfo);
          FUN_02d9d3e0();
          uVar10 = FUN_06210d08(uVar7,param_2);
          goto LAB_0620eef8;
        }
      }
      goto LAB_0620ee3c;
    }
LAB_0620ebf4:
    uVar8 = thunk_FUN_057aa644(uVar7,param_3,0);
    if ((uVar8 & 1) == 0) goto LAB_0620ec10;
    bVar4 = *(char *)(param_1 + 0x9d) == '\0';
  }
  puVar3 = System_Func<FingerFeature,_Nullable<float>>_TypeInfo;
  uVar8 = thunk_FUN_057aa644(param_3,*(undefined8 *)
                                      System_Func<FingerFeature,_Nullable<float>>_TypeInfo,0);
  if ((((uVar8 & 1) == 0) ||
      (uVar8 = FUN_057aa92c(param_2,*(undefined8 *)PTR_DAT_07292b30,0), (uVar8 & 1) == 0)) &&
     ((uVar8 = thunk_FUN_057aa644(param_3,*(undefined8 *)PTR_DAT_072a1978,0), (uVar8 & 1) == 0 ||
      (uVar8 = FUN_057aa92c(param_2,*(undefined8 *)PTR_DAT_072a1920,0), (uVar8 & 1) == 0)))) {
    if (param_2 == 0) {
LAB_0620ee3c:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if ((0 < *(int *)(param_2 + 0x10)) && (sVar5 = FUN_057a62b4(param_2,0,0), sVar5 == 0x78)) {
      uVar8 = thunk_FUN_057aa644(param_2,*(undefined8 *)PTR_DAT_07292b30,0);
      if ((uVar8 & 1) == 0) {
        uVar8 = thunk_FUN_057aa644(param_2,*(undefined8 *)PTR_DAT_072a1920,0);
        puVar3 = 
        System_Collections_Generic_List<LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>_TypeInfo
        ;
      }
      else {
        uVar8 = FUN_057aa92c(param_3,*(undefined8 *)puVar3,0);
        puVar3 = GLTFast_VertexBufferTexCoords<VTexCoord8>_TypeInfo;
      }
      if ((uVar8 & 1) != 0) {
        uVar7 = thunk_FUN_032e1da0(puVar3);
        uVar7 = FUN_06240f48(uVar7,0);
        goto LAB_0620ee74;
      }
    }
    FUN_06210b50(param_1,param_2,param_3,0);
    return bVar4;
  }
  uVar7 = thunk_FUN_032e1da0(PTR_DAT_07279560);
  uVar7 = FUN_032d5d3c(uVar7,1);
  FUN_02d9d3f0();
  FUN_02da1a84(uVar7,param_2);
  FUN_02da1ab8(uVar7,0,param_2);
  uVar14 = thunk_FUN_032e1da0(
                             System_Collections_Generic_List<KeyValuePair<Transform,_Pose>>_TypeInfo
                             );
  uVar7 = FUN_0623eb78(uVar14,uVar7,0);
LAB_0620ee74:
  thunk_FUN_032e1da0(PTR_DAT_0727dd40);
  uVar14 = thunk_FUN_032a56a0();
  FUN_0589e7ac(uVar14,uVar7,0);
  uVar7 = thunk_FUN_032e1da0(System_WeakReference<RegexReplacement>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar14,uVar7);
}


