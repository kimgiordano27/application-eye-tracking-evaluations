/*
FUNCTION_NAME: FUN_05884094
ENTRY_POINT: 05884094
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_possible_biometrics_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x0588432c) */

void FUN_05884094(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  
  puVar8 = Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_GetEnumerator__;
  if ((DAT_06bc1162 & 1) == 0) {
    FUN_02f08768(Method_System_Collections_Generic_HashSet<Text>_get_Count__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet<TrackableId>__ctor__);
    FUN_02f08768(
                Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__
                );
    FUN_02f08768(Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Add__)
    ;
    FUN_02f08768(Method_System_Collections_Generic_HashSet<InternedString>_Contains__);
    FUN_02f08768(
                Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>__ctor__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_GetEnumerator__
                );
    DAT_06bc1162 = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar8);
  FUN_058897dc(lVar10,0);
  if (lVar10 != 0) {
    *(undefined4 *)(lVar10 + 0x10) = param_2;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar2 = *(uint *)(param_1 + 0x5c);
    uVar4 = *(uint *)(param_1 + 0x60);
    uVar6 = *(uint *)(param_1 + 100);
    uVar1 = uVar2 & 0x7fffffff;
    lVar14 = *(long *)
              Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Add__;
    if ((uVar1 < uVar4) || (uVar1 - uVar4 < uVar6)) {
      FUN_050f577c(0);
    }
    uVar15 = *(undefined8 *)(param_1 + 0x50);
    iVar12 = *(int *)(param_1 + 0x58);
    if ((*(ushort *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    uStack_68 = CONCAT44(uVar2 & 0x80000000 | uVar6,iVar12 + uVar4);
    local_70 = uVar15;
    FUN_03cd4af4(&local_98,&local_70,
                 *(undefined8 *)
                  Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__
                );
    uVar15 = local_98;
    local_50 = local_88;
    puStack_58 = puStack_90;
    local_60 = local_98;
    local_98 = 0;
    puStack_90 = &local_60;
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30);
    uVar3 = *(undefined4 *)(param_1 + 100);
    uVar5 = *(undefined4 *)(param_1 + 0x68);
    if (*(int *)(*(long *)Method_System_Collections_Generic_HashSet<InternedString>_Contains__ +
                0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar9 = FUN_05883b1c(uVar13,uVar15,uVar3,uVar5,param_1 + 0xa4,0);
    FUN_05088460(&local_60,0);
    iVar12 = *(int *)(lVar10 + 0x10);
    if (*(int *)(param_1 + 0xa4) == 0) {
      iVar12 = iVar12 + iVar9;
      *(int *)(lVar10 + 0x10) = iVar12;
      iVar7 = *(int *)(param_1 + 100) - iVar9;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar9;
      *(int *)(param_1 + 100) = iVar7;
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_058843fc;
      if (*(int *)(*(long *)(param_1 + 0x30) + 0x54) != 1) {
        if (0 < iVar7) {
          uVar15 = FUN_0588bf08(param_1,0);
          uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                       Method_System_Collections_Generic_HashSet<Text>_get_Count__);
          FUN_05895434(uVar13,lVar10,
                       *(undefined8 *)
                        Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>__ctor__
                       ,0);
          uVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                       Method_System_Collections_Generic_HashSet<TrackableId>__ctor__
                                     );
          FUN_058957b4(uVar11,2,uVar13,param_1,0);
          thunk_FUN_02f2d2f4(uVar15,uVar11,0);
          return;
        }
        *(int *)(param_1 + 0xa0) = iVar12;
      }
    }
    FUN_05888ab4(param_1,iVar12,0);
    return;
  }
LAB_058843fc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


