/*
FUNCTION_NAME: FUN_04219264
ENTRY_POINT: 04219264
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void FUN_04219264(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  int local_54;
  undefined1 local_50 [16];
  
  puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__;
  if ((DAT_048411c1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(PTR_DAT_04590db0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04590d38);
    thunk_FUN_01efb3a4(PTR_DAT_04590d40);
    thunk_FUN_01efb3a4(PTR_DAT_04590d68);
    thunk_FUN_01efb3a4(PTR_DAT_04590db8);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04590dc0);
    thunk_FUN_01efb3a4(PTR_DAT_04590dc8);
    DAT_048411c1 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar4 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  puVar3 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  iVar1 = param_2 + -1;
  local_54 = iVar1;
  if (-1 < iVar1) {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar10 = *(long *)(param_1 + 0x10);
    if (lVar10 == 0) {
LAB_042194dc:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (iVar1 < *(int *)(lVar10 + 0x18)) {
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      local_50 = FUN_03262af0(lVar10,iVar1,*(undefined8 *)PTR_DAT_04590d40);
      uVar8 = local_50._8_8_;
      if (0 < local_50._12_4_) {
        iVar2 = local_50._12_4_ + -1;
        local_50._12_4_ = iVar2;
        if (iVar2 == 0) {
          if ((uVar8 & 1) == 0) {
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_042194dc;
            FUN_02b7b1a8(*(long *)(param_1 + 0x18),local_50._0_8_,*(undefined8 *)PTR_DAT_04590db0);
          }
          local_50._0_8_ = 0;
          thunk_FUN_01f51358(local_50,0);
          local_50._8_8_ = local_50._8_8_ & 0xffffffffffffff00;
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_042194dc;
          FUN_02743524(*(long *)(param_1 + 0x20),param_2,*(undefined8 *)PTR_DAT_04590db8);
        }
        lVar10 = *(long *)(param_1 + 0x10);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar10 != 0) {
          FUN_03262b48(lVar10,iVar1,local_50._0_8_,local_50._8_8_,*(undefined8 *)PTR_DAT_04590d68);
          return;
        }
        goto LAB_042194dc;
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar4,&local_54);
      uVar9 = *(undefined8 *)PTR_DAT_04590dc8;
      goto LAB_04219460;
    }
  }
  puVar6 = PTR_DAT_04590dc0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar4,&local_54);
  uVar9 = *(undefined8 *)puVar6;
LAB_04219460:
  uVar7 = FUN_03406290(uVar9,uVar7,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar3);
  }
  FUN_0403ed64(uVar7,0);
  return;
}


