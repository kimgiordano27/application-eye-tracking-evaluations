/*
FUNCTION_NAME: FUN_04218be8
ENTRY_POINT: 04218be8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior
*/


int FUN_04218be8(long param_1,undefined8 param_2,byte param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_048411bf & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(PTR_DAT_04590d58);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04590d60);
    thunk_FUN_01efb3a4(PTR_DAT_04590d38);
    thunk_FUN_01efb3a4(PTR_DAT_04590d68);
    thunk_FUN_01efb3a4(PTR_DAT_04590d70);
    thunk_FUN_01efb3a4(PTR_DAT_04590d78);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04590d80);
    thunk_FUN_01efb3a4(PTR_DAT_04590d88);
    DAT_048411bf = 1;
  }
  local_48 = 0;
  local_50 = param_2;
  thunk_FUN_01f51358(&local_50,param_2);
  uVar3 = local_50;
  puVar2 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__;
  uVar6 = CONCAT71(local_48._1_7_,param_3);
  local_48 = CONCAT44(1,(uint)uVar6 & 0xffffff01);
  uVar6 = local_48;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) goto LAB_04218ea4;
  if (*(int *)(lVar5 + 0x18) < 1) {
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) goto LAB_04218ea4;
    iVar4 = *(int *)(lVar5 + 0x18);
    if (iVar4 == 0x800) {
      local_54 = 0x800;
      uVar6 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 ,&local_54);
      uVar6 = FUN_0340f2f0(*(undefined8 *)PTR_DAT_04590d80,*(undefined8 *)PTR_DAT_04590d88,uVar6,0);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
      }
      FUN_0403ed64(uVar6,0);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar2;
      }
      return **(int **)(lVar5 + 0xb8);
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                        );
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB_04218ea4;
    }
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar9 = *(long *)PTR_DAT_04590d60;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_04218ea4;
    uVar1 = *(uint *)(lVar5 + 0x18);
    iVar4 = iVar4 + 1;
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      puVar8 = (undefined8 *)(lVar7 + 0x20);
      *puVar8 = uVar3;
      *(undefined8 *)(lVar7 + 0x28) = uVar6;
      thunk_FUN_01f51358(puVar8,0);
    }
    else {
      FUN_03262e0c(lVar5,uVar3,uVar6,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
  else {
    iVar4 = FUN_027434d4(lVar5,*(undefined8 *)PTR_DAT_04590d70);
    lVar5 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    if (lVar5 == 0) goto LAB_04218ea4;
    FUN_03262b48(lVar5,iVar4 + -1,uVar3,uVar6,*(undefined8 *)PTR_DAT_04590d68);
  }
  if ((param_3 & 1) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_04218ea4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02b79cd8(*(long *)(param_1 + 0x18),param_2,iVar4,*(undefined8 *)PTR_DAT_04590d58);
  }
  return iVar4;
}


