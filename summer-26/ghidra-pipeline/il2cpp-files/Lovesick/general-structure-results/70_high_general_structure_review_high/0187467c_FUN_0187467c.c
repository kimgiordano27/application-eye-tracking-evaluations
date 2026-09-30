/*
FUNCTION_NAME: FUN_0187467c
ENTRY_POINT: 0187467c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_0187467c(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_03779724 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Ray>_get_Count__);
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<SystemVoipState>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033ee840);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_03779724 = 1;
  }
  puVar1 = Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
  lVar7 = *(long *)(param_1 + 0xf0);
  if (lVar7 == 0) {
    uVar8 = *(undefined8 *)Method_System_Collections_Generic_List<Ray>_get_Count__;
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar2 = (long *)FUN_01780344(uVar8,0);
    plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,2);
    if (plVar3 == (long *)0x0) goto LAB_018748e4;
    lVar7 = *(long *)(param_1 + 200);
    if ((lVar7 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_018748ec;
    uVar6 = *(uint *)(plVar3 + 3);
    if (uVar6 == 0) goto LAB_018748e8;
    plVar3[4] = lVar7;
    lVar7 = *(long *)(param_1 + 0xd0);
    if (lVar7 != 0) {
      lVar4 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar4 == 0) goto LAB_018748ec;
      uVar6 = *(uint *)(plVar3 + 3);
    }
    if (uVar6 < 2) goto LAB_018748e8;
    plVar3[5] = lVar7;
    if (plVar2 == (long *)0x0) goto LAB_018748e4;
    lVar7 = (**(code **)(*plVar2 + 0x928))(plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x930));
    *(long *)(param_1 + 0xe8) = lVar7;
    plVar2 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,1);
    if (plVar2 == (long *)0x0) goto LAB_018748e4;
    lVar4 = *(long *)(param_1 + 0xe0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
    goto LAB_018748ec;
    if ((int)plVar2[3] == 0) goto LAB_018748e8;
    plVar2[4] = lVar4;
    puVar1 = PTR_DAT_033ee840;
    if (lVar7 == 0) goto LAB_018748e4;
    uVar8 = FUN_0178c180(lVar7,plVar2,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    plVar2 = (long *)FUN_0188bc28(0);
    if (plVar2 == (long *)0x0) goto LAB_018748e4;
    lVar7 = (**(code **)(*plVar2 + 0x188))(plVar2,uVar8,*(undefined8 *)(*plVar2 + 400));
    *(long *)(param_1 + 0xf0) = lVar7;
  }
  plVar2 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
  if (plVar2 != (long *)0x0) {
    if ((param_2 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(param_2,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_018748ec:
      uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar8,0);
    }
    if ((int)plVar2[3] == 0) {
LAB_018748e8:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar2[4] = param_2;
    if (lVar7 != 0) {
      lVar7 = (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),plVar2,*(undefined8 *)(lVar7 + 0x28));
      if (lVar7 != 0) {
        uVar8 = *(undefined8 *)Method_Oculus_Platform_Request<SystemVoipState>__ctor__;
        lVar4 = thunk_FUN_00d6225c(lVar7,uVar8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(lVar7,uVar8);
        }
      }
      return;
    }
  }
LAB_018748e4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


