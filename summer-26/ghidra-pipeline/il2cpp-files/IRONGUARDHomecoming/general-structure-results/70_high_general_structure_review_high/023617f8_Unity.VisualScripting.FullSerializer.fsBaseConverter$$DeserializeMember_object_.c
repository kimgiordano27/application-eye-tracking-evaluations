/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<object>
ENTRY_POINT: 023617f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<object>
               (long param_1,long param_2,void *param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong __n;
  undefined1 *__src;
  ulong uVar11;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [16];
  long lStack_18;
  undefined1 *puStack_10;
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  lVar9 = *(long *)(param_4 + 0x38);
  if (lVar9 == 0) {
    thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_GetHashCodeOfString__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_LastIndexOf__);
    lVar9 = *(long *)(param_4 + 0x38);
    if (lVar9 == 0) {
      FUN_01ecafa0(param_4);
      lVar9 = *(long *)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar9 + 0x18) + 0xfc);
  __src = auStack_30 + -(__n + 0xf & 0x1fffffff0);
  if ((*(int *)(param_1 + 0x28) == 1) && (*(char *)(param_1 + 0x60) == '\0')) {
    bVar2 = false;
    bVar3 = true;
  }
  else {
    bVar3 = false;
    bVar2 = true;
  }
  auStack_28 = FUN_03bfef14(param_1,0);
  if (bVar2) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = *(undefined4 *)(param_2 + 0xc);
    bVar3 = false;
  }
  else {
    uVar7 = 0;
  }
  plVar4 = (long *)FUN_02617b44(auStack_28,uVar7,
                                *(undefined8 *)Method_System_Globalization_CompareInfo_LastIndexOf__
                               );
  lVar9 = **(long **)(param_4 + 0x38);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44(lVar9);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(lVar9 + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) == lVar9)) {
      if (bVar3) {
        lVar9 = FUN_03c003dc();
      }
      else {
        lVar9 = FUN_03c003e4(param_2,0);
      }
      uVar11 = plVar4[2];
      if (*(int *)(*(long *)Method_System_Globalization_CompareInfo_GetHashCodeOfString__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      puVar8 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x10);
      lStack_18 = lVar9 - (uVar11 >> 0x20);
      puStack_10 = __src;
      (*(code *)puVar8[2])(*puVar8,puVar8,plVar4,&lStack_18,__src);
      memcpy(param_3,__src,__n);
      if (*(long *)(lVar1 + 0x28) == lStack_8) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  uVar10 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 8);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  FUN_01bc4c70();
  uVar10 = FUN_03579868(uVar10,0);
  uVar10 = FUN_03b53780(uVar10,0);
  FUN_01bc50c0(plVar4);
  uVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
  uVar5 = FUN_03b53780(uVar5,0);
  uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<ILayoutController>__);
  uVar10 = FUN_0340f334(uVar6,uVar10,plVar4,uVar5,0);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
  uVar5 = thunk_FUN_01f117cc();
  FUN_0356adc8(uVar5,uVar10,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,param_4);
}


