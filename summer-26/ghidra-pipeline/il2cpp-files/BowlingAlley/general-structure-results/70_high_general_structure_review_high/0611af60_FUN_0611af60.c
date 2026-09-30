/*
FUNCTION_NAME: FUN_0611af60
ENTRY_POINT: 0611af60
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_0611af60(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  
  if ((DAT_076dd923 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072799d0);
    thunk_FUN_032e1da0(PTR_DAT_072799c8);
    thunk_FUN_032e1da0(System_Collections_Generic_IEnumerator<Variant>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072799c0);
    thunk_FUN_032e1da0(System_Collections_Generic_IEnumerator<Vector2>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_IEnumerator<Vector3>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_IEnumerator<Vector4>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_IEnumerator<VisualElement>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07292b30);
    DAT_076dd923 = 1;
  }
  puVar3 = System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo;
  puVar2 = PTR_DAT_072799c8;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x90) == 1) {
    lVar12 = *(long *)(param_1 + 0x130);
    if (lVar12 == 0) goto LAB_0611b25c;
    uVar11 = *(undefined8 *)
              System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo;
    lVar5 = thunk_FUN_032a55a4(lVar12,uVar11);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(lVar12,uVar11);
    }
    lVar5 = *(long *)puVar3;
    plVar6 = (long *)thunk_FUN_032a55a4(lVar12,lVar5);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(lVar12,lVar5);
    }
    lVar12 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0611b21c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_032937ac(plVar6,lVar5,0);
LAB_0611b21c:
    lVar12 = (*(code *)*puVar7)(plVar6,param_2,puVar7[1]);
  }
  else {
    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072799c0);
    FUN_050f8160(lVar12,*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_072799d0;
    if (param_2 == 2) {
      uVar1 = *(uint *)(param_1 + 0xe0);
      if (0 < (int)uVar1) {
        lVar5 = *(long *)(param_1 + 0xd8);
        if (lVar5 == 0) {
LAB_0611b25c:
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        lVar5 = *(long *)(lVar5 + (ulong)uVar1 * 0x30 + 0x48);
        if (lVar5 != 0) {
          if (lVar12 == 0) goto LAB_0611b25c;
          do {
            FUN_050f8b10(lVar12,*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),
                         *(undefined8 *)puVar2);
            lVar5 = *(long *)(lVar5 + 0x20);
          } while (lVar5 != 0);
        }
      }
    }
    else {
      if ((*(long *)(param_1 + 0x120) == 0) ||
         (lVar5 = FUN_050f8940(*(long *)(param_1 + 0x120),
                               *(undefined8 *)
                                System_Collections_Generic_IEnumerator<Variant>_TypeInfo),
         lVar5 == 0)) goto LAB_0611b25c;
      FUN_04c929a8(&local_78,lVar5,
                   *(undefined8 *)System_Collections_Generic_IEnumerator<VisualElement>_TypeInfo);
      puVar4 = System_Collections_Generic_IEnumerator<Vector3>_TypeInfo;
      puVar3 = PTR_DAT_07292b30;
      puVar2 = PTR_DAT_072799d0;
      uStack_58 = uStack_70;
      local_60 = local_78;
      local_50 = local_68;
LAB_0611b174:
      uVar9 = FUN_05392010(&local_60,*(undefined8 *)puVar4);
      lVar5 = local_50;
      if ((uVar9 & 1) != 0) {
        if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if ((*(int *)(local_50 + 0x30) != -1) ||
           ((param_2 == 0 &&
            (uVar9 = thunk_FUN_057aa644(*(undefined8 *)puVar3,*(undefined8 *)(local_50 + 0x10),0),
            (uVar9 & 1) != 0)))) {
          lVar8 = *(long *)(lVar5 + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(int *)(lVar8 + 0x10) < 1) {
            if (*(long *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (*(int *)(*(long *)(lVar5 + 0x18) + 0x10) < 1) goto LAB_0611b174;
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_050f8b10(lVar12,lVar8,*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)puVar2);
        }
        goto LAB_0611b174;
      }
      FUN_0539200c(&local_60,*(undefined8 *)System_Collections_Generic_IEnumerator<Vector2>_TypeInfo
                  );
    }
  }
  return lVar12;
}


